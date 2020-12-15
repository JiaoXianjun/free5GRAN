/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RRCResume_v1560_IEs_H_
#define	_RRCResume_v1560_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "SK-Counter.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCResume_v1610_IEs;

/* RRCResume-v1560-IEs */
typedef struct RRCResume_v1560_IEs {
	OCTET_STRING_t	*radioBearerConfig2	/* OPTIONAL */;
	SK_Counter_t	*sk_Counter	/* OPTIONAL */;
	struct RRCResume_v1610_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResume_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResume_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResume_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResume_v1560_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCResume-v1610-IEs.h"

#endif	/* _RRCResume_v1560_IEs_H_ */
#include "asn_internal.h"
