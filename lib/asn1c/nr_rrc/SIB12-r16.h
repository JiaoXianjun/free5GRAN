/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB12_r16_H_
#define	_SIB12_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB12_r16__segmentType_r16 {
	SIB12_r16__segmentType_r16_notLastSegment	= 0,
	SIB12_r16__segmentType_r16_lastSegment	= 1
} e_SIB12_r16__segmentType_r16;

/* SIB12-r16 */
typedef struct SIB12_r16 {
	long	 segmentNumber_r16;
	long	 segmentType_r16;
	OCTET_STRING_t	 segmentContainer_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB12_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_segmentType_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB12_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB12_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB12_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB12_r16_H_ */
#include "asn_internal.h"
