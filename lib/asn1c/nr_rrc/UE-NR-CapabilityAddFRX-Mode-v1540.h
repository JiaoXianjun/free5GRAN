/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_UE_NR_CapabilityAddFRX_Mode_v1540_H_
#define	_UE_NR_CapabilityAddFRX_Mode_v1540_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IMS_ParametersFRX_Diff;

/* UE-NR-CapabilityAddFRX-Mode-v1540 */
typedef struct UE_NR_CapabilityAddFRX_Mode_v1540 {
	struct IMS_ParametersFRX_Diff	*ims_ParametersFRX_Diff;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_CapabilityAddFRX_Mode_v1540_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_CapabilityAddFRX_Mode_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_CapabilityAddFRX_Mode_v1540_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IMS-ParametersFRX-Diff.h"

#endif	/* _UE_NR_CapabilityAddFRX_Mode_v1540_H_ */
#include "asn_internal.h"
