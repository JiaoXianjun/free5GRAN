/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_BWP_UplinkCommon_H_
#define	_BWP_UplinkCommon_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BWP.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_RACH_ConfigCommon;
struct SetupRelease_PUSCH_ConfigCommon;
struct SetupRelease_PUCCH_ConfigCommon;

/* BWP-UplinkCommon */
typedef struct BWP_UplinkCommon {
	BWP_t	 genericParameters;
	struct SetupRelease_RACH_ConfigCommon	*rach_ConfigCommon;	/* OPTIONAL */
	struct SetupRelease_PUSCH_ConfigCommon	*pusch_ConfigCommon;	/* OPTIONAL */
	struct SetupRelease_PUCCH_ConfigCommon	*pucch_ConfigCommon;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BWP_UplinkCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BWP_UplinkCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_BWP_UplinkCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_BWP_UplinkCommon_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _BWP_UplinkCommon_H_ */
#include "asn_internal.h"
