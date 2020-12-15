/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RRC_PosSystemInfoRequest_r16_IEs_H_
#define	_RRC_PosSystemInfoRequest_r16_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RRC-PosSystemInfoRequest-r16-IEs */
typedef struct RRC_PosSystemInfoRequest_r16_IEs {
	BIT_STRING_t	 requestedPosSI_List;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PosSystemInfoRequest_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PosSystemInfoRequest_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PosSystemInfoRequest_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PosSystemInfoRequest_r16_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PosSystemInfoRequest_r16_IEs_H_ */
#include "asn_internal.h"
