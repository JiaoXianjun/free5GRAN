/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_ThresholdNR_H_
#define	_ThresholdNR_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include "SINR-Range.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ThresholdNR */
typedef struct ThresholdNR {
	RSRP_Range_t	*thresholdRSRP;	/* OPTIONAL */
	RSRQ_Range_t	*thresholdRSRQ;	/* OPTIONAL */
	SINR_Range_t	*thresholdSINR;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdNR;
extern asn_SEQUENCE_specifics_t asn_SPC_ThresholdNR_specs_1;
extern asn_TYPE_member_t asn_MBR_ThresholdNR_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdNR_H_ */
#include "asn_internal.h"
