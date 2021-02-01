/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_PeriodicRNAU_TimerValue_H_
#define	_PeriodicRNAU_TimerValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicRNAU_TimerValue {
	PeriodicRNAU_TimerValue_min5	= 0,
	PeriodicRNAU_TimerValue_min10	= 1,
	PeriodicRNAU_TimerValue_min20	= 2,
	PeriodicRNAU_TimerValue_min30	= 3,
	PeriodicRNAU_TimerValue_min60	= 4,
	PeriodicRNAU_TimerValue_min120	= 5,
	PeriodicRNAU_TimerValue_min360	= 6,
	PeriodicRNAU_TimerValue_min720	= 7
} e_PeriodicRNAU_TimerValue;

/* PeriodicRNAU-TimerValue */
typedef long	 PeriodicRNAU_TimerValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PeriodicRNAU_TimerValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PeriodicRNAU_TimerValue;
extern const asn_INTEGER_specifics_t asn_SPC_PeriodicRNAU_TimerValue_specs_1;
asn_struct_free_f PeriodicRNAU_TimerValue_free;
asn_struct_print_f PeriodicRNAU_TimerValue_print;
asn_constr_check_f PeriodicRNAU_TimerValue_constraint;
ber_type_decoder_f PeriodicRNAU_TimerValue_decode_ber;
der_type_encoder_f PeriodicRNAU_TimerValue_encode_der;
xer_type_decoder_f PeriodicRNAU_TimerValue_decode_xer;
xer_type_encoder_f PeriodicRNAU_TimerValue_encode_xer;
oer_type_decoder_f PeriodicRNAU_TimerValue_decode_oer;
oer_type_encoder_f PeriodicRNAU_TimerValue_encode_oer;
per_type_decoder_f PeriodicRNAU_TimerValue_decode_uper;
per_type_encoder_f PeriodicRNAU_TimerValue_encode_uper;
per_type_decoder_f PeriodicRNAU_TimerValue_decode_aper;
per_type_encoder_f PeriodicRNAU_TimerValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicRNAU_TimerValue_H_ */
#include "asn_internal.h"
