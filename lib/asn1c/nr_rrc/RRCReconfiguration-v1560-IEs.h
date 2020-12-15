/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RRCReconfiguration_v1560_IEs_H_
#define	_RRCReconfiguration_v1560_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "SK-Counter.h"
#include "NULL.h"
#include "MRDC-SecondaryCellGroupConfig.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR {
	RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR_NOTHING,	/* No components present */
	RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR_release,
	RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR_setup
} RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR;

/* Forward declarations */
struct RRCReconfiguration_v1610_IEs;

/* RRCReconfiguration-v1560-IEs */
typedef struct RRCReconfiguration_v1560_IEs {
	struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig {
		RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_PR present;
		union RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig_u {
			NULL_t	 release;
			MRDC_SecondaryCellGroupConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mrdc_SecondaryCellGroupConfig;
	OCTET_STRING_t	*radioBearerConfig2	/* OPTIONAL */;
	SK_Counter_t	*sk_Counter	/* OPTIONAL */;
	struct RRCReconfiguration_v1610_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfiguration_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfiguration_v1560_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCReconfiguration-v1610-IEs.h"

#endif	/* _RRCReconfiguration_v1560_IEs_H_ */
#include "asn_internal.h"
