/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_UE_NR_Capability_v1610_H_
#define	_UE_NR_Capability_v1610_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_NR_Capability_v1610__inDeviceCoexInd_r16 {
	UE_NR_Capability_v1610__inDeviceCoexInd_r16_supported	= 0
} e_UE_NR_Capability_v1610__inDeviceCoexInd_r16;
typedef enum UE_NR_Capability_v1610__dl_DedicatedMessageSegmentation_r16 {
	UE_NR_Capability_v1610__dl_DedicatedMessageSegmentation_r16_supported	= 0
} e_UE_NR_Capability_v1610__dl_DedicatedMessageSegmentation_r16;
typedef enum UE_NR_Capability_v1610__bh_RLF_Indication_r16 {
	UE_NR_Capability_v1610__bh_RLF_Indication_r16_supported	= 0
} e_UE_NR_Capability_v1610__bh_RLF_Indication_r16;
typedef enum UE_NR_Capability_v1610__directSN_AdditionFirstRRC_IAB_r16 {
	UE_NR_Capability_v1610__directSN_AdditionFirstRRC_IAB_r16_supported	= 0
} e_UE_NR_Capability_v1610__directSN_AdditionFirstRRC_IAB_r16;
typedef enum UE_NR_Capability_v1610__referenceTimeProvision_r16 {
	UE_NR_Capability_v1610__referenceTimeProvision_r16_supported	= 0
} e_UE_NR_Capability_v1610__referenceTimeProvision_r16;
typedef enum UE_NR_Capability_v1610__mcgRLF_RecoveryViaSCG_r16 {
	UE_NR_Capability_v1610__mcgRLF_RecoveryViaSCG_r16_supported	= 0
} e_UE_NR_Capability_v1610__mcgRLF_RecoveryViaSCG_r16;
typedef enum UE_NR_Capability_v1610__resumeWithStoredMCG_SCells_r16 {
	UE_NR_Capability_v1610__resumeWithStoredMCG_SCells_r16_supported	= 0
} e_UE_NR_Capability_v1610__resumeWithStoredMCG_SCells_r16;
typedef enum UE_NR_Capability_v1610__resumeWithStoredSCG_r16 {
	UE_NR_Capability_v1610__resumeWithStoredSCG_r16_supported	= 0
} e_UE_NR_Capability_v1610__resumeWithStoredSCG_r16;
typedef enum UE_NR_Capability_v1610__resumeWithSCG_Config_r16 {
	UE_NR_Capability_v1610__resumeWithSCG_Config_r16_supported	= 0
} e_UE_NR_Capability_v1610__resumeWithSCG_Config_r16;
typedef enum UE_NR_Capability_v1610__onDemandSIB_Connected_r16 {
	UE_NR_Capability_v1610__onDemandSIB_Connected_r16_supported	= 0
} e_UE_NR_Capability_v1610__onDemandSIB_Connected_r16;

/* Forward declarations */
struct NRDC_Parameters_v1610;
struct PowSav_Parameters_r16;
struct UE_NR_CapabilityAddFRX_Mode_v1610;
struct BAP_Parameters_r16;
struct SidelinkParameters_r16;
struct HighSpeedParameters_r16;
struct MAC_Parameters_v1610;
struct UE_BasedPerfMeas_Parameters_r16;
struct SON_Parameters_r16;

/* UE-NR-Capability-v1610 */
typedef struct UE_NR_Capability_v1610 {
	long	*inDeviceCoexInd_r16	/* OPTIONAL */;
	long	*dl_DedicatedMessageSegmentation_r16	/* OPTIONAL */;
	struct NRDC_Parameters_v1610	*nrdc_Parameters_v1610	/* OPTIONAL */;
	struct PowSav_Parameters_r16	*powSav_Parameters_r16	/* OPTIONAL */;
	struct UE_NR_CapabilityAddFRX_Mode_v1610	*fr1_Add_UE_NR_Capabilities_v1610	/* OPTIONAL */;
	struct UE_NR_CapabilityAddFRX_Mode_v1610	*fr2_Add_UE_NR_Capabilities_v1610	/* OPTIONAL */;
	long	*bh_RLF_Indication_r16	/* OPTIONAL */;
	long	*directSN_AdditionFirstRRC_IAB_r16	/* OPTIONAL */;
	struct BAP_Parameters_r16	*bap_Parameters_r16	/* OPTIONAL */;
	long	*referenceTimeProvision_r16	/* OPTIONAL */;
	struct SidelinkParameters_r16	*sidelinkParameters_r16	/* OPTIONAL */;
	struct HighSpeedParameters_r16	*highSpeedParameters_r16	/* OPTIONAL */;
	struct MAC_Parameters_v1610	*mac_Parameters_v1610	/* OPTIONAL */;
	long	*mcgRLF_RecoveryViaSCG_r16	/* OPTIONAL */;
	long	*resumeWithStoredMCG_SCells_r16	/* OPTIONAL */;
	long	*resumeWithStoredSCG_r16	/* OPTIONAL */;
	long	*resumeWithSCG_Config_r16	/* OPTIONAL */;
	struct UE_BasedPerfMeas_Parameters_r16	*ue_BasedPerfMeas_Parameters_r16	/* OPTIONAL */;
	struct SON_Parameters_r16	*son_Parameters_r16	/* OPTIONAL */;
	long	*onDemandSIB_Connected_r16	/* OPTIONAL */;
	struct UE_NR_Capability_v1610__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_Capability_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_inDeviceCoexInd_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_DedicatedMessageSegmentation_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bh_RLF_Indication_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_directSN_AdditionFirstRRC_IAB_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_referenceTimeProvision_r16_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcgRLF_RecoveryViaSCG_r16_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithStoredMCG_SCells_r16_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithStoredSCG_r16_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resumeWithSCG_Config_r16_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_onDemandSIB_Connected_r16_30;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1610_1[21];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NRDC-Parameters-v1610.h"
#include "PowSav-Parameters-r16.h"
#include "UE-NR-CapabilityAddFRX-Mode-v1610.h"
#include "BAP-Parameters-r16.h"
#include "SidelinkParameters-r16.h"
#include "HighSpeedParameters-r16.h"
#include "MAC-Parameters-v1610.h"
#include "UE-BasedPerfMeas-Parameters-r16.h"
#include "SON-Parameters-r16.h"

#endif	/* _UE_NR_Capability_v1610_H_ */
#include "asn_internal.h"
