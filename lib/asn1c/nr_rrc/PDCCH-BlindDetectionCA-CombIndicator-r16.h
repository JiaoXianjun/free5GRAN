/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PDCCH_BlindDetectionCA_CombIndicator_r16_H_
#define	_PDCCH_BlindDetectionCA_CombIndicator_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PDCCH-BlindDetectionCA-CombIndicator-r16 */
typedef struct PDCCH_BlindDetectionCA_CombIndicator_r16 {
	long	 pdcch_BlindDetectionCA1_r16;
	long	 pdcch_BlindDetectionCA2_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_BlindDetectionCA_CombIndicator_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_BlindDetectionCA_CombIndicator_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_BlindDetectionCA_CombIndicator_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_BlindDetectionCA_CombIndicator_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCCH_BlindDetectionCA_CombIndicator_r16_H_ */
#include "asn_internal.h"
