/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_CG_MaxTransNum_r16_H_
#define	_SL_CG_MaxTransNum_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SL-CG-MaxTransNum-r16 */
typedef struct SL_CG_MaxTransNum_r16 {
	long	 sl_Priority_r16;
	long	 sl_MaxTransNum_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CG_MaxTransNum_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CG_MaxTransNum_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CG_MaxTransNum_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CG_MaxTransNum_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CG_MaxTransNum_r16_H_ */
#include "asn_internal.h"
