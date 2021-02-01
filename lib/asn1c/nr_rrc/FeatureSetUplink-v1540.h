/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_FeatureSetUplink_v1540_H_
#define	_FeatureSetUplink_v1540_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetUplink_v1540__zeroSlotOffsetAperiodicSRS {
	FeatureSetUplink_v1540__zeroSlotOffsetAperiodicSRS_supported	= 0
} e_FeatureSetUplink_v1540__zeroSlotOffsetAperiodicSRS;
typedef enum FeatureSetUplink_v1540__pa_PhaseDiscontinuityImpacts {
	FeatureSetUplink_v1540__pa_PhaseDiscontinuityImpacts_supported	= 0
} e_FeatureSetUplink_v1540__pa_PhaseDiscontinuityImpacts;
typedef enum FeatureSetUplink_v1540__pusch_SeparationWithGap {
	FeatureSetUplink_v1540__pusch_SeparationWithGap_supported	= 0
} e_FeatureSetUplink_v1540__pusch_SeparationWithGap;
typedef enum FeatureSetUplink_v1540__ul_MCS_TableAlt_DynamicIndication {
	FeatureSetUplink_v1540__ul_MCS_TableAlt_DynamicIndication_supported	= 0
} e_FeatureSetUplink_v1540__ul_MCS_TableAlt_DynamicIndication;

/* Forward declarations */
struct ProcessingParameters;

/* FeatureSetUplink-v1540 */
typedef struct FeatureSetUplink_v1540 {
	long	*zeroSlotOffsetAperiodicSRS;	/* OPTIONAL */
	long	*pa_PhaseDiscontinuityImpacts;	/* OPTIONAL */
	long	*pusch_SeparationWithGap;	/* OPTIONAL */
	struct FeatureSetUplink_v1540__pusch_ProcessingType2 {
		struct ProcessingParameters	*scs_15kHz;	/* OPTIONAL */
		struct ProcessingParameters	*scs_30kHz;	/* OPTIONAL */
		struct ProcessingParameters	*scs_60kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_ProcessingType2;
	long	*ul_MCS_TableAlt_DynamicIndication;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetUplink_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_zeroSlotOffsetAperiodicSRS_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pa_PhaseDiscontinuityImpacts_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_SeparationWithGap_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_MCS_TableAlt_DynamicIndication_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetUplink_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplink_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetUplink_v1540_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProcessingParameters.h"

#endif	/* _FeatureSetUplink_v1540_H_ */
#include "asn_internal.h"
