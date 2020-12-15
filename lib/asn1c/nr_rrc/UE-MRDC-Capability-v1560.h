/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_UE_MRDC_Capability_v1560_H_
#define	_UE_MRDC_Capability_v1560_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC_v1560;
struct UE_MRDC_CapabilityAddXDD_Mode_v1560;
struct UE_MRDC_Capability_v1610;

/* UE-MRDC-Capability-v1560 */
typedef struct UE_MRDC_Capability_v1560 {
	OCTET_STRING_t	*receivedFilters	/* OPTIONAL */;
	struct MeasAndMobParametersMRDC_v1560	*measAndMobParametersMRDC_v1560	/* OPTIONAL */;
	struct UE_MRDC_CapabilityAddXDD_Mode_v1560	*fdd_Add_UE_MRDC_Capabilities_v1560	/* OPTIONAL */;
	struct UE_MRDC_CapabilityAddXDD_Mode_v1560	*tdd_Add_UE_MRDC_Capabilities_v1560	/* OPTIONAL */;
	struct UE_MRDC_Capability_v1610	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MRDC_Capability_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MRDC_Capability_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_Capability_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_MRDC_Capability_v1560_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasAndMobParametersMRDC-v1560.h"
#include "UE-MRDC-CapabilityAddXDD-Mode-v1560.h"
#include "UE-MRDC-Capability-v1610.h"

#endif	/* _UE_MRDC_Capability_v1560_H_ */
#include "asn_internal.h"
