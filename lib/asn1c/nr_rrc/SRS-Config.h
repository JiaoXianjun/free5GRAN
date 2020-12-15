/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SRS_Config_H_
#define	_SRS_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "SRS-ResourceSetId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "SRS-ResourceId.h"
#include "SRS-PosResourceSetId-r16.h"
#include "SRS-PosResourceId-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_Config__tpc_Accumulation {
	SRS_Config__tpc_Accumulation_disabled	= 0
} e_SRS_Config__tpc_Accumulation;

/* Forward declarations */
struct SRS_ResourceSet;
struct SRS_Resource;
struct SRS_PosResourceSet_r16;
struct SRS_PosResource_r16;

/* SRS-Config */
typedef struct SRS_Config {
	struct SRS_Config__srs_ResourceSetToReleaseList {
		A_SEQUENCE_OF(SRS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToReleaseList;
	struct SRS_Config__srs_ResourceSetToAddModList {
		A_SEQUENCE_OF(struct SRS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToAddModList;
	struct SRS_Config__srs_ResourceToReleaseList {
		A_SEQUENCE_OF(SRS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceToReleaseList;
	struct SRS_Config__srs_ResourceToAddModList {
		A_SEQUENCE_OF(struct SRS_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceToAddModList;
	long	*tpc_Accumulation	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*srs_RequestDCI_1_2_r16	/* OPTIONAL */;
	long	*srs_RequestDCI_0_2_r16	/* OPTIONAL */;
	struct SRS_Config__srs_ResourceSetToAddModListDCI_0_2_r16 {
		A_SEQUENCE_OF(struct SRS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToAddModListDCI_0_2_r16;
	struct SRS_Config__srs_ResourceSetToReleaseListDCI_0_2_r16 {
		A_SEQUENCE_OF(SRS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceSetToReleaseListDCI_0_2_r16;
	struct SRS_Config__srs_PosResourceSetToReleaseList_r16 {
		A_SEQUENCE_OF(SRS_PosResourceSetId_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_PosResourceSetToReleaseList_r16;
	struct SRS_Config__srs_PosResourceSetToAddModList_r16 {
		A_SEQUENCE_OF(struct SRS_PosResourceSet_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_PosResourceSetToAddModList_r16;
	struct SRS_Config__srs_PosResourceToReleaseList_r16 {
		A_SEQUENCE_OF(SRS_PosResourceId_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_PosResourceToReleaseList_r16;
	struct SRS_Config__srs_PosResourceToAddModList_r16 {
		A_SEQUENCE_OF(struct SRS_PosResource_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_PosResourceToAddModList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tpc_Accumulation_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_Config_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-ResourceSet.h"
#include "SRS-Resource.h"
#include "SRS-PosResourceSet-r16.h"
#include "SRS-PosResource-r16.h"

#endif	/* _SRS_Config_H_ */
#include "asn_internal.h"
