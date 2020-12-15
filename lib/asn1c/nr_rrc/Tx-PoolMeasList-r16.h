/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_Tx_PoolMeasList_r16_H_
#define	_Tx_PoolMeasList_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-ResourcePoolID-r16.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Tx-PoolMeasList-r16 */
typedef struct Tx_PoolMeasList_r16 {
	A_SEQUENCE_OF(SL_ResourcePoolID_r16_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Tx_PoolMeasList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Tx_PoolMeasList_r16;
extern asn_SET_OF_specifics_t asn_SPC_Tx_PoolMeasList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_Tx_PoolMeasList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_Tx_PoolMeasList_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Tx_PoolMeasList_r16_H_ */
#include "asn_internal.h"
