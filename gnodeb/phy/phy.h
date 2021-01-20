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

#ifndef FREE5GRAN_PHY_H
#define FREE5GRAN_PHY_H

#include "../../lib/variables/common_structures/common_structures.h"
#include "../../lib/phy/transport_channel/transport_channel.h"
#include "../../lib/variables/common_variables/common_variables.h"
#include "../rf/rf.h"
#include_next <math.h>
#include <fftw3.h>
#include <vector>
#include <complex>
#include <fstream>

class phy {

private:
    int bch_crc[24]; // erreur ?
    bool crc_validated;
    int i_ssb;
    int i_b_ssb;
    int l_max;


public:

    phy();

    std::vector<std::complex<float>> AY_extract_pbch(std::complex<float> ** input_SSB, int pci);
    int * AY_decode_pbch(int pci, std::vector<std::complex<float>> pbch_symbols);
    void AY_decode_bch(int* bch_bits, int pci, int* mib_bits);
    void AY_decode_mib(int* mib_bits, free5GRAN::mib &mib_object);

};


#endif //FREE5GRAN_PHY_H
