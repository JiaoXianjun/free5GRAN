/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_BH_RLC_ChannelID_r16_H_
#define	_BH_RLC_ChannelID_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BH-RLC-ChannelID-r16 */
typedef BIT_STRING_t	 BH_RLC_ChannelID_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BH_RLC_ChannelID_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BH_RLC_ChannelID_r16;
asn_struct_free_f BH_RLC_ChannelID_r16_free;
asn_struct_print_f BH_RLC_ChannelID_r16_print;
asn_constr_check_f BH_RLC_ChannelID_r16_constraint;
ber_type_decoder_f BH_RLC_ChannelID_r16_decode_ber;
der_type_encoder_f BH_RLC_ChannelID_r16_encode_der;
xer_type_decoder_f BH_RLC_ChannelID_r16_decode_xer;
xer_type_encoder_f BH_RLC_ChannelID_r16_encode_xer;
oer_type_decoder_f BH_RLC_ChannelID_r16_decode_oer;
oer_type_encoder_f BH_RLC_ChannelID_r16_encode_oer;
per_type_decoder_f BH_RLC_ChannelID_r16_decode_uper;
per_type_encoder_f BH_RLC_ChannelID_r16_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BH_RLC_ChannelID_r16_H_ */
#include "asn_internal.h"
