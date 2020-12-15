/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_DormantBWP_Config_r16_H_
#define	_DormantBWP_Config_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BWP-Id.h"
#include "NULL.h"
#include "WithinActiveTimeConfig-r16.h"
#include "constr_CHOICE.h"
#include "OutsideActiveTimeConfig-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR {
	DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR_NOTHING,	/* No components present */
	DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR_release,
	DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR_setup
} DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR;
typedef enum DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR {
	DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR_NOTHING,	/* No components present */
	DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR_release,
	DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR_setup
} DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR;

/* DormantBWP-Config-r16 */
typedef struct DormantBWP_Config_r16 {
	BWP_Id_t	*dormantBWP_Id_r16	/* OPTIONAL */;
	struct DormantBWP_Config_r16__withinActiveTimeConfig_r16 {
		DormantBWP_Config_r16__withinActiveTimeConfig_r16_PR present;
		union DormantBWP_Config_r16__withinActiveTimeConfig_r16_u {
			NULL_t	 release;
			WithinActiveTimeConfig_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *withinActiveTimeConfig_r16;
	struct DormantBWP_Config_r16__outsideActiveTimeConfig_r16 {
		DormantBWP_Config_r16__outsideActiveTimeConfig_r16_PR present;
		union DormantBWP_Config_r16__outsideActiveTimeConfig_r16_u {
			NULL_t	 release;
			OutsideActiveTimeConfig_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *outsideActiveTimeConfig_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DormantBWP_Config_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DormantBWP_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_DormantBWP_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_DormantBWP_Config_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DormantBWP_Config_r16_H_ */
#include "asn_internal.h"
