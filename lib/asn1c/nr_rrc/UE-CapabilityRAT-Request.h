/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_UE_CapabilityRAT_Request_H_
#define	_UE_CapabilityRAT_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RAT-Type.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UE-CapabilityRAT-Request */
typedef struct UE_CapabilityRAT_Request {
	RAT_Type_t	 rat_Type;
	OCTET_STRING_t	*capabilityRequestFilter	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_CapabilityRAT_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_CapabilityRAT_Request;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_CapabilityRAT_Request_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_CapabilityRAT_Request_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_CapabilityRAT_Request_H_ */
#include "asn_internal.h"
