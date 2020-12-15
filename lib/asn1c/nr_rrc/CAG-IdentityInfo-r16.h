/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_CAG_IdentityInfo_r16_H_
#define	_CAG_IdentityInfo_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CAG_IdentityInfo_r16__manualCAGselectionAllowed_r16 {
	CAG_IdentityInfo_r16__manualCAGselectionAllowed_r16_true	= 0
} e_CAG_IdentityInfo_r16__manualCAGselectionAllowed_r16;

/* CAG-IdentityInfo-r16 */
typedef struct CAG_IdentityInfo_r16 {
	BIT_STRING_t	 cag_Identity_r16;
	long	*manualCAGselectionAllowed_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CAG_IdentityInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_manualCAGselectionAllowed_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CAG_IdentityInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CAG_IdentityInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CAG_IdentityInfo_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CAG_IdentityInfo_r16_H_ */
#include "asn_internal.h"
