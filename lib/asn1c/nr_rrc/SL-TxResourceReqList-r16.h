/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_TxResourceReqList_r16_H_
#define	_SL_TxResourceReqList_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_TxResourceReq_r16;

/* SL-TxResourceReqList-r16 */
typedef struct SL_TxResourceReqList_r16 {
	A_SEQUENCE_OF(struct SL_TxResourceReq_r16) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxResourceReqList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxResourceReqList_r16;
extern asn_SET_OF_specifics_t asn_SPC_SL_TxResourceReqList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TxResourceReqList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_SL_TxResourceReqList_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-TxResourceReq-r16.h"

#endif	/* _SL_TxResourceReqList_r16_H_ */
#include "asn_internal.h"
