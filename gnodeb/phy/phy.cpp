/**
 * Copyright 2020 Telecom Paris
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

 * \author Télécom Paris, P5G Lab ; Benoit Oehmicen & Aymeric de Javel
 * \version 0.2
 * \date January 2021
 */

#include "phy.h"
#include <iostream>
#include "../../lib/utils/sequence_generator/sequence_generator.h"
#include "../../lib/phy/libphy/libphy.h"
#include <fftw3.h>
#include <complex>
#include <vector>
#include "../../lib/utils/sequence_generator/sequence_generator.h"
#include "../../lib/variables/common_variables/common_variables.h"
#include "../../lib/utils/common_utils/common_utils.h"
#include "../../lib/phy/libphy/libphy.h"
#include "../../lib/phy/transport_channel/transport_channel.h"
#include "../../lib/phy/physical_channel/physical_channel.h"
#include <boost/program_options.hpp>
#include <boost/format.hpp>
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include_next <math.h>


void phy::generate_frame_10ms(free5GRAN::mib mib_object, usrp_info2 usrp_info_object, int sfn, double ssb_period,int pci, int N, int gscn, int i_b_ssb, float scaling_factor, std::vector<std::complex<float>> &buff_main_10ms_5) {

    mib_object.sfn = sfn;
    BOOST_LOG_TRIVIAL(warning) << "SFN = " + std::to_string(sfn);

    /** MIB GENERATION -> Generate mib_bits sequence (32 bits long in our case) from mib_object. TS38.331 V15.11.0 Section 6.2.2*/
    int mib_bits[free5GRAN::BCH_PAYLOAD_SIZE];
    free5GRAN::utils::common_utils::encode_mib(mib_object, mib_bits);
    BOOST_LOG_TRIVIAL(info) << "MIB GENERATION from generate_frame_10ms";

    /** ENCODE BCH -> Generate rate_matched_bch (864 bits in our case) from mib_bits. TS38.212 V15.2.0 Section 5 */
    int *rate_matched_bch = new int[free5GRAN::SIZE_SSB_PBCH_SYMBOLS * 2];
    free5GRAN::phy::transport_channel::bch_encoding(mib_bits, pci, N, rate_matched_bch);
    BOOST_LOG_TRIVIAL(info) << "ENCODE BCH from generate_frame_10ms";

    /** ENCODE PBCH -> Generate pbch_symbols (432 symbols in our case) from rate_matched_bch. TS38.212 V15.2.0 Section 7.3.3.1 and 5.1.3 */
    std::complex<float> *pbch_symbols;
    pbch_symbols = new std::complex<float>[free5GRAN::SIZE_SSB_PBCH_SYMBOLS];
    free5GRAN::phy::physical_channel::pbch_encoding(rate_matched_bch, pci, gscn, i_b_ssb, pbch_symbols);
    BOOST_LOG_TRIVIAL(info) << "ENCODE PBCH from generate_frame_10ms";

    /** GENERATE SSB -> Generate SSB_signal_time_domain (4 * 256 symbols in our case) from pbch_symbols. TS38.211 V15.2.0 Section 7.4 */
    std::complex<float> **SSB_signal_time_domain;
    SSB_signal_time_domain = new std::complex<float> *[free5GRAN::NUM_SYMBOLS_SSB];
    for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
        SSB_signal_time_domain[symbol] = new std::complex<float>[free5GRAN::SIZE_IFFT_SSB];
    }

    free5GRAN::phy::signal_processing::generate_time_domain_ssb(pbch_symbols, pci, i_b_ssb, scaling_factor,
                                                                free5GRAN::SIZE_IFFT_SSB, SSB_signal_time_domain);
    BOOST_LOG_TRIVIAL(info) << "GENERATE SSB from generate_frame_10ms";

    /** COMPUTE CP. TS38.211 V15.2.0 Section 5.3 */
    int Num_symbols_per_subframe;
    if (mib_object.scs == 15000) {
        Num_symbols_per_subframe = 14;
    } else if (mib_object.scs == 30000) {
        Num_symbols_per_subframe = 28;
    }


    int cp_lengths[Num_symbols_per_subframe], cum_sum_cp_lengths[Num_symbols_per_subframe];

    free5GRAN::phy::signal_processing::compute_cp_lengths(mib_object.scs / 1000, free5GRAN::SIZE_IFFT_SSB, 0,
                                                          Num_symbols_per_subframe, &cp_lengths[0],
                                                          &cum_sum_cp_lengths[0]);


    BOOST_LOG_TRIVIAL(info) << "COMPUTE CP LENGTH from generate_frame_10ms";
    BOOST_LOG_TRIVIAL(info)
        << "From generate_frame_10ms cp_lengths[1] (which will be used) = " + std::to_string(cp_lengths[1]);

    /** ADDING CP TO SSB -> Generate SSB_signal_time_domain_CP from SSB_signal_time_domain TS TO BE ADDED */
    std::complex<float> **SSB_signal_time_domain_CP;
    SSB_signal_time_domain_CP = new std::complex<float> *[free5GRAN::NUM_SYMBOLS_SSB];
    for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
        SSB_signal_time_domain_CP[symbol] = new std::complex<float>[free5GRAN::SIZE_IFFT_SSB + cp_lengths[1]];
    }

    free5GRAN::phy::signal_processing::adding_cp(SSB_signal_time_domain, free5GRAN::NUM_SYMBOLS_SSB,
                                                 free5GRAN::SIZE_IFFT_SSB, cp_lengths[1],
                                                 SSB_signal_time_domain_CP);

    BOOST_LOG_TRIVIAL(info) << "ADD CP (Cyclic Prefix) to the SSB (time domain) from generate_frame_10ms";



//--------------------------------------------------------------------------------------------
/**
    int Num_samples_per_symbol_SSB = free5GRAN::SIZE_IFFT_SSB + cp_lengths[1];
    int Num_samples_in_frame;
    phy::generate_num_sample_per_frame(mib_object, Num_samples_in_frame);

    int Num_symbols_per_frame = Num_symbols_per_subframe * 10;
    int index_symbol_first_ssb_in_frame = free5GRAN::BAND_N_78.ssb_symbols[i_b_ssb];

    //Initialize the cp_length for each symbols of a frame
    int cp_lengths_one_frame[Num_symbols_per_frame];
    for (int sub_frame = 0; sub_frame < 10; sub_frame++) {
        for (int symbol = 0; symbol < Num_symbols_per_subframe; symbol++) {
            cp_lengths_one_frame[Num_symbols_per_subframe * sub_frame + symbol] = cp_lengths[symbol];
        }
    }

    if (free5GRAN::display_variables) {
        free5GRAN::utils::common_utils::display_table(cp_lengths_one_frame, Num_symbols_per_frame,
                                                      "cp_lengths_one_frame from generate_frame_10ms");
    }

    // Initialize the symbol size for each symbol in a frame
    int symbols_size_one_frame[Num_symbols_per_frame];
    for (int symbol = 0; symbol < Num_symbols_per_frame; symbol++) {
        symbols_size_one_frame[symbol] = free5GRAN::SIZE_IFFT_SSB + cp_lengths_one_frame[symbol];
    }

    if (free5GRAN::display_variables) {
        free5GRAN::utils::common_utils::display_table(symbols_size_one_frame, Num_symbols_per_frame,
                                                      "symbols_size_one_frame from generate_frame_10ms");
    }


    //Initialise one_frame_1_dimension
    int Num_sample_per_subframe =
            cum_sum_cp_lengths[Num_symbols_per_subframe - 1] + cp_lengths[1] + free5GRAN::SIZE_IFFT_SSB;
    std::complex<float> *one_frame_1_dimension;
    one_frame_1_dimension = new std::complex<float>[Num_samples_in_frame];

    int index_symbol_in_subframe_SSB = index_symbol_first_ssb_in_frame % Num_symbols_per_subframe;
    int index_subframe_SSB = index_symbol_first_ssb_in_frame / Num_symbols_per_subframe;

    int index_sample_begin_SSB =
            index_subframe_SSB * Num_sample_per_subframe + cum_sum_cp_lengths[index_symbol_in_subframe_SSB];

    //Place SSB into one_frame_1_dimension at the right place
    int count = index_sample_begin_SSB;
    for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
        for (int sample = 0; sample < Num_samples_per_symbol_SSB; sample++) {
            one_frame_1_dimension[count] = SSB_signal_time_domain_CP[symbol][sample];
            count++;
        }
    }

    //If ssb_period = 5 ms, a second SSB is placed in the frame
    if (ssb_period == 0.005){
        int index_sample_begin_second_SSB = index_sample_begin_SSB + (Num_samples_in_frame/2);
        int count2 = index_sample_begin_second_SSB;
        for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
            for (int sample = 0; sample < Num_samples_per_symbol_SSB; sample++) {
                one_frame_1_dimension[count2] = SSB_signal_time_domain_CP[symbol][sample];
                count2++;
            }
        }

    }*/
//-----------------------------------------------------------------------------------

    /**
    free5GRAN::utils::common_utils::display_table(cp_lengths, Num_symbols_per_subframe, "cp_lengths = ");
    free5GRAN::utils::common_utils::display_table(cum_sum_cp_lengths, Num_symbols_per_subframe,
                                                  "cum_sum_cp_lengths = ");
    std::cout << "Num symbols per frame = " << Num_symbols_per_frame << std::endl;
    std::cout << "Num symbols per sub_frame = " << Num_symbols_per_subframe << std::endl;
    std::cout << "Num samples per frame = " << Num_sample_per_frame << std::endl;
    std::cout << "Num samples per symbols SSB = " << Num_samples_per_symbol_SSB << std::endl;
    std::cout << "Index_symbol first SSB in frame = " << index_symbol_first_ssb_in_frame << std::endl;
    std::cout << "Num_sample_per_subframe = " << Num_sample_per_subframe << std::endl;
    std::cout << "index_subframe_SSB = " << index_subframe_SSB << std::endl;
    std::cout << "index_symbol_in_subframe_SSB = " << index_symbol_in_subframe_SSB << std::endl;
    std::cout << "index_sample_begin_SSB = " << index_sample_begin_SSB << std::endl;
    std::cout << "Num_samples_per_frame from phy = " << Num_sample_per_frame << std::endl;
    std::cout << "Num_symbols_per_subframe = " << Num_symbols_per_subframe << std::endl;
    //free5GRAN::utils::common_utils::display_complex_float(one_frame_1_dimension, Num_sample_per_frame,
    //                                                      "one_frame_1_dimension = ");
    */


    int Num_samples_in_frame;
    phy::generate_num_sample_per_frame(mib_object, Num_samples_in_frame);

    /** Generate one_frame_1_dimension */
    std::complex<float>* one_frame_1_dimension;


    one_frame_1_dimension = phy::place_SSB_in_frame(mib_object, Num_symbols_per_subframe, SSB_signal_time_domain_CP, ssb_period, i_b_ssb);
    //phy::place_SSB_in_frame(mib_object, Num_symbols_per_subframe, SSB_signal_time_domain_CP, ssb_period, i_b_ssb, one_frame_1_dimension);

    //free5GRAN::utils::common_utils::display_complex_float(one_frame_1_dimension, Num_samples_in_frame, "\n\n\n\n\n\none_frame_1_dimension from phy>generate_frame");

    /** Fill vector buff_main_10ms_5 with table one_frame_1_dimension */
    int count3 = 0;
    for (int sample = 0; sample < Num_samples_in_frame; sample++){
        buff_main_10ms_5[sample] = one_frame_1_dimension[sample];
        count3++;
    }


    if (free5GRAN::display_variables) {
        free5GRAN::utils::common_utils::display_vector(buff_main_10ms_5, Num_samples_in_frame, "buff_main_10ms_5");
    }
    //free5GRAN::utils::common_utils::display_vector(buff_main_10ms_5, Num_sample_per_frame, "buff_main_10ms_5");
}






//void phy::place_SSB_in_frame(free5GRAN::mib mib_object, int Num_symbols_per_subframe, std::complex<float> **SSB_signal_time_domain_CP, float ssb_period, int i_b_ssb, std::complex<float> *one_frame_1_dimension){
std::complex<float>* phy::place_SSB_in_frame(free5GRAN::mib mib_object, int Num_symbols_per_subframe, std::complex<float> **SSB_signal_time_domain_CP, float ssb_period, int i_b_ssb){

    int cp_lengths[Num_symbols_per_subframe], cum_sum_cp_lengths[Num_symbols_per_subframe];

    free5GRAN::phy::signal_processing::compute_cp_lengths(mib_object.scs / 1000, free5GRAN::SIZE_IFFT_SSB, 0,
                                                          Num_symbols_per_subframe, &cp_lengths[0],
                                                          &cum_sum_cp_lengths[0]);


    int Num_samples_per_symbol_SSB = free5GRAN::SIZE_IFFT_SSB + cp_lengths[1];
    int Num_samples_in_frame;
    phy::generate_num_sample_per_frame(mib_object, Num_samples_in_frame);


    int Num_symbols_per_frame = Num_symbols_per_subframe * 10;

    int index_symbol_first_ssb_in_frame = free5GRAN::BAND_N_78.ssb_symbols[i_b_ssb];

    /**Initialize the cp_length for each symbols of a frame */
    int cp_lengths_one_frame[Num_symbols_per_frame];
    for (int sub_frame = 0; sub_frame < 10; sub_frame++) {
        for (int symbol = 0; symbol < Num_symbols_per_subframe; symbol++) {
            cp_lengths_one_frame[Num_symbols_per_subframe * sub_frame + symbol] = cp_lengths[symbol];
        }
    }

    if (free5GRAN::display_variables) {
        free5GRAN::utils::common_utils::display_table(cp_lengths_one_frame, Num_symbols_per_frame,
                                                      "cp_lengths_one_frame from generate_frame_10ms");
    }

    /**Initialize the symbol size for each symbol in a frame */
    int symbols_size_one_frame[Num_symbols_per_frame];
    for (int symbol = 0; symbol < Num_symbols_per_frame; symbol++) {
        symbols_size_one_frame[symbol] = free5GRAN::SIZE_IFFT_SSB + cp_lengths_one_frame[symbol];
    }

    if (free5GRAN::display_variables) {
        free5GRAN::utils::common_utils::display_table(symbols_size_one_frame, Num_symbols_per_frame,
                                                      "symbols_size_one_frame from generate_frame_10ms");
    }

    /**Initialise one_frame_1_dimension */
    int Num_sample_per_subframe =
            cum_sum_cp_lengths[Num_symbols_per_subframe - 1] + cp_lengths[1] + free5GRAN::SIZE_IFFT_SSB;

    // TO be deleted when return will be deleted
    std::complex<float> *one_frame_1_dimension;
    one_frame_1_dimension = new std::complex<float>[Num_samples_in_frame];

    int index_symbol_in_subframe_SSB = index_symbol_first_ssb_in_frame % Num_symbols_per_subframe;
    int index_subframe_SSB = index_symbol_first_ssb_in_frame / Num_symbols_per_subframe;

    int index_sample_begin_SSB =
            index_subframe_SSB * Num_sample_per_subframe + cum_sum_cp_lengths[index_symbol_in_subframe_SSB];

    /** Place SSB into one_frame_1_dimension at the right place */
    int count = index_sample_begin_SSB;
    for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
        for (int sample = 0; sample < Num_samples_per_symbol_SSB; sample++) {
            one_frame_1_dimension[count] = SSB_signal_time_domain_CP[symbol][sample];
            count++;
        }
    }

    /** If ssb_period = 5 ms, a second SSB is placed in the frame */
    if (ssb_period == 0.005){
        int index_sample_begin_second_SSB = index_sample_begin_SSB + (Num_samples_in_frame/2);
        int count2 = index_sample_begin_second_SSB;
        for (int symbol = 0; symbol < free5GRAN::NUM_SYMBOLS_SSB; symbol++) {
            for (int sample = 0; sample < Num_samples_per_symbol_SSB; sample++) {
                one_frame_1_dimension[count2] = SSB_signal_time_domain_CP[symbol][sample];
                count2++;
            }
        }
    }
    //free5GRAN::utils::common_utils::display_complex_float(one_frame_1_dimension, Num_samples_in_frame, "one_frame_1_dimension from phy>place_SSB");
    return one_frame_1_dimension;
}






void phy::generate_num_sample_per_frame(free5GRAN::mib mib_object, int &Num_samples_in_frame) {

    int Num_symbols_per_subframe;
    if (mib_object.scs == 15000) {
        Num_symbols_per_subframe = 14;
    } else if (mib_object.scs == 30000) {
        Num_symbols_per_subframe = 28;
    }
    int Num_symbols_per_frame = Num_symbols_per_subframe * 10;
    //Calculate the cp_length
    int cp_lengths[Num_symbols_per_subframe], cum_sum_cp_lengths[Num_symbols_per_subframe];
    free5GRAN::phy::signal_processing::compute_cp_lengths(mib_object.scs / 1000, free5GRAN::SIZE_IFFT_SSB, 0,
                                                          Num_symbols_per_subframe, &cp_lengths[0],
                                                          &cum_sum_cp_lengths[0]);
    //Initialize the cp_length for each symbols of a frame
    int cp_lengths_one_frame[Num_symbols_per_frame];
    for (int sub_frame = 0; sub_frame < 10; sub_frame++) {
        for (int symbol = 0; symbol < Num_symbols_per_subframe; symbol++) {
            cp_lengths_one_frame[Num_symbols_per_subframe * sub_frame + symbol] = cp_lengths[symbol];
        }
    }
    //Calculate size of each symbol in a frame
    int symbols_size_one_frame[Num_symbols_per_frame];
    for (int symbol = 0; symbol < Num_symbols_per_frame; symbol++) {
        symbols_size_one_frame[symbol] = free5GRAN::SIZE_IFFT_SSB + cp_lengths_one_frame[symbol];
    }

    Num_samples_in_frame = 0;
    for (int symbol = 0; symbol < Num_symbols_per_frame; symbol++) {
        Num_samples_in_frame = Num_samples_in_frame + symbols_size_one_frame[symbol];
    }
}


