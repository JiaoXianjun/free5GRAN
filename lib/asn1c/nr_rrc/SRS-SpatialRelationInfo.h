/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_SRS_SpatialRelationInfo_H_
#define	_SRS_SpatialRelationInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ServCellIndex.h"
#include "SSB-Index.h"
#include "NZP-CSI-RS-ResourceId.h"
#include "SRS-ResourceId.h"
#include "BWP-Id.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_SpatialRelationInfo__referenceSignal_PR {
	SRS_SpatialRelationInfo__referenceSignal_PR_NOTHING,	/* No components present */
	SRS_SpatialRelationInfo__referenceSignal_PR_ssb_Index,
	SRS_SpatialRelationInfo__referenceSignal_PR_csi_RS_Index,
	SRS_SpatialRelationInfo__referenceSignal_PR_srs
} SRS_SpatialRelationInfo__referenceSignal_PR;

/* SRS-SpatialRelationInfo */
typedef struct SRS_SpatialRelationInfo {
	ServCellIndex_t	*servingCellId;	/* OPTIONAL */
	struct SRS_SpatialRelationInfo__referenceSignal {
		SRS_SpatialRelationInfo__referenceSignal_PR present;
		union SRS_SpatialRelationInfo__referenceSignal_u {
			SSB_Index_t	 ssb_Index;
			NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
			struct SRS_SpatialRelationInfo__referenceSignal__srs {
				SRS_ResourceId_t	 resourceId;
				BWP_Id_t	 uplinkBWP;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_SpatialRelationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRS_SpatialRelationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_SpatialRelationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_SpatialRelationInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_SpatialRelationInfo_H_ */
#include "asn_internal.h"
