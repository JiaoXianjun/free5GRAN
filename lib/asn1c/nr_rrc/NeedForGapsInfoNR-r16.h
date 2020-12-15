/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_NeedForGapsInfoNR_r16_H_
#define	_NeedForGapsInfoNR_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NeedForGapsIntraFreqlist-r16.h"
#include "NeedForGapsBandlistNR-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NeedForGapsInfoNR-r16 */
typedef struct NeedForGapsInfoNR_r16 {
	NeedForGapsIntraFreqlist_r16_t	 intraFreq_needForGap_r16;
	NeedForGapsBandlistNR_r16_t	 interFreq_needForGap_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeedForGapsInfoNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeedForGapsInfoNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NeedForGapsInfoNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NeedForGapsInfoNR_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeedForGapsInfoNR_r16_H_ */
#include "asn_internal.h"
