/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PDCCH_Config_H_
#define	_PDCCH_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "ControlResourceSetId.h"
#include "SearchSpaceId.h"
#include "NULL.h"
#include "DownlinkPreemption.h"
#include "constr_CHOICE.h"
#include "PUSCH-TPC-CommandConfig.h"
#include "PUCCH-TPC-CommandConfig.h"
#include "SRS-TPC-CommandConfig.h"
#include "ControlResourceSetId-r16.h"
#include "UplinkCancellation-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCCH_Config__downlinkPreemption_PR {
	PDCCH_Config__downlinkPreemption_PR_NOTHING,	/* No components present */
	PDCCH_Config__downlinkPreemption_PR_release,
	PDCCH_Config__downlinkPreemption_PR_setup
} PDCCH_Config__downlinkPreemption_PR;
typedef enum PDCCH_Config__tpc_PUSCH_PR {
	PDCCH_Config__tpc_PUSCH_PR_NOTHING,	/* No components present */
	PDCCH_Config__tpc_PUSCH_PR_release,
	PDCCH_Config__tpc_PUSCH_PR_setup
} PDCCH_Config__tpc_PUSCH_PR;
typedef enum PDCCH_Config__tpc_PUCCH_PR {
	PDCCH_Config__tpc_PUCCH_PR_NOTHING,	/* No components present */
	PDCCH_Config__tpc_PUCCH_PR_release,
	PDCCH_Config__tpc_PUCCH_PR_setup
} PDCCH_Config__tpc_PUCCH_PR;
typedef enum PDCCH_Config__tpc_SRS_PR {
	PDCCH_Config__tpc_SRS_PR_NOTHING,	/* No components present */
	PDCCH_Config__tpc_SRS_PR_release,
	PDCCH_Config__tpc_SRS_PR_setup
} PDCCH_Config__tpc_SRS_PR;
typedef enum PDCCH_Config__uplinkCancellation_r16_PR {
	PDCCH_Config__uplinkCancellation_r16_PR_NOTHING,	/* No components present */
	PDCCH_Config__uplinkCancellation_r16_PR_release,
	PDCCH_Config__uplinkCancellation_r16_PR_setup
} PDCCH_Config__uplinkCancellation_r16_PR;
typedef enum PDCCH_Config__monitoringCapabilityConfig_r16 {
	PDCCH_Config__monitoringCapabilityConfig_r16_r15monitoringcapability	= 0,
	PDCCH_Config__monitoringCapabilityConfig_r16_r16monitoringcapability	= 1
} e_PDCCH_Config__monitoringCapabilityConfig_r16;

/* Forward declarations */
struct SearchSpaceSwitchConfig_r16;
struct ControlResourceSet;
struct SearchSpace;
struct SearchSpaceExt_r16;

/* PDCCH-Config */
typedef struct PDCCH_Config {
	struct PDCCH_Config__controlResourceSetToAddModList {
		A_SEQUENCE_OF(struct ControlResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *controlResourceSetToAddModList;
	struct PDCCH_Config__controlResourceSetToReleaseList {
		A_SEQUENCE_OF(ControlResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *controlResourceSetToReleaseList;
	struct PDCCH_Config__searchSpacesToAddModList {
		A_SEQUENCE_OF(struct SearchSpace) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *searchSpacesToAddModList;
	struct PDCCH_Config__searchSpacesToReleaseList {
		A_SEQUENCE_OF(SearchSpaceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *searchSpacesToReleaseList;
	struct PDCCH_Config__downlinkPreemption {
		PDCCH_Config__downlinkPreemption_PR present;
		union PDCCH_Config__downlinkPreemption_u {
			NULL_t	 release;
			DownlinkPreemption_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *downlinkPreemption;
	struct PDCCH_Config__tpc_PUSCH {
		PDCCH_Config__tpc_PUSCH_PR present;
		union PDCCH_Config__tpc_PUSCH_u {
			NULL_t	 release;
			PUSCH_TPC_CommandConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tpc_PUSCH;
	struct PDCCH_Config__tpc_PUCCH {
		PDCCH_Config__tpc_PUCCH_PR present;
		union PDCCH_Config__tpc_PUCCH_u {
			NULL_t	 release;
			PUCCH_TPC_CommandConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tpc_PUCCH;
	struct PDCCH_Config__tpc_SRS {
		PDCCH_Config__tpc_SRS_PR present;
		union PDCCH_Config__tpc_SRS_u {
			NULL_t	 release;
			SRS_TPC_CommandConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tpc_SRS;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PDCCH_Config__controlResourceSetToAddModList2_r16 {
		A_SEQUENCE_OF(struct ControlResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *controlResourceSetToAddModList2_r16;
	struct PDCCH_Config__controlResourceSetToReleaseList_r16 {
		A_SEQUENCE_OF(ControlResourceSetId_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *controlResourceSetToReleaseList_r16;
	struct PDCCH_Config__searchSpacesToAddModListExt_r16 {
		A_SEQUENCE_OF(struct SearchSpaceExt_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *searchSpacesToAddModListExt_r16;
	struct PDCCH_Config__uplinkCancellation_r16 {
		PDCCH_Config__uplinkCancellation_r16_PR present;
		union PDCCH_Config__uplinkCancellation_r16_u {
			NULL_t	 release;
			UplinkCancellation_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkCancellation_r16;
	long	*monitoringCapabilityConfig_r16	/* OPTIONAL */;
	struct SearchSpaceSwitchConfig_r16	*searchSpaceSwitchConfig_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_monitoringCapabilityConfig_r16_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_Config_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SearchSpaceSwitchConfig-r16.h"
#include "ControlResourceSet.h"
#include "SearchSpace.h"
#include "SearchSpaceExt-r16.h"

#endif	/* _PDCCH_Config_H_ */
#include "asn_internal.h"
