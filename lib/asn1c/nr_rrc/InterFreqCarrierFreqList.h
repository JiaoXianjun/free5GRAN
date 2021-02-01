/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_InterFreqCarrierFreqList_H_
#define	_InterFreqCarrierFreqList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo;

/* InterFreqCarrierFreqList */
typedef struct InterFreqCarrierFreqList {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqList;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqCarrierFreqList_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqList_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqCarrierFreqList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo.h"

#endif	/* _InterFreqCarrierFreqList_H_ */
#include "asn_internal.h"
