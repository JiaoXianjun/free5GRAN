/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_EUTRA_MBSFN_SubframeConfig_H_
#define	_EUTRA_MBSFN_SubframeConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "BIT_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod {
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n1	= 0,
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n2	= 1,
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n4	= 2,
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n8	= 3,
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n16	= 4,
	EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod_n32	= 5
} e_EUTRA_MBSFN_SubframeConfig__radioframeAllocationPeriod;
typedef enum EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR {
	EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR_NOTHING,	/* No components present */
	EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR_oneFrame,
	EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR_fourFrames
} EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR;
typedef enum EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR {
	EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR_NOTHING,	/* No components present */
	EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR_oneFrame,
	EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR_fourFrames
} EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR;

/* EUTRA-MBSFN-SubframeConfig */
typedef struct EUTRA_MBSFN_SubframeConfig {
	long	 radioframeAllocationPeriod;
	long	 radioframeAllocationOffset;
	struct EUTRA_MBSFN_SubframeConfig__subframeAllocation1 {
		EUTRA_MBSFN_SubframeConfig__subframeAllocation1_PR present;
		union EUTRA_MBSFN_SubframeConfig__subframeAllocation1_u {
			BIT_STRING_t	 oneFrame;
			BIT_STRING_t	 fourFrames;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subframeAllocation1;
	struct EUTRA_MBSFN_SubframeConfig__subframeAllocation2 {
		EUTRA_MBSFN_SubframeConfig__subframeAllocation2_PR present;
		union EUTRA_MBSFN_SubframeConfig__subframeAllocation2_u {
			BIT_STRING_t	 oneFrame;
			BIT_STRING_t	 fourFrames;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *subframeAllocation2;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_MBSFN_SubframeConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_radioframeAllocationPeriod_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_MBSFN_SubframeConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_MBSFN_SubframeConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_MBSFN_SubframeConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_MBSFN_SubframeConfig_H_ */
#include "asn_internal.h"
