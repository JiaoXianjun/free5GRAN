/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "UEAssistanceInformation-v1610-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_11 = {
	sizeof(struct UEAssistanceInformation_v1610_IEs__nonCriticalExtension),
	offsetof(struct UEAssistanceInformation_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_11 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_11,
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_11,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1610_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct UEAssistanceInformation_v1610_IEs, idc_Assistance_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IDC_Assistance_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-Assistance-r16"
		},
	{ ATF_POINTER, 9, offsetof(struct UEAssistanceInformation_v1610_IEs, drx_Preference_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRX_Preference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Preference-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct UEAssistanceInformation_v1610_IEs, maxBW_Preference_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxBW_Preference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxBW-Preference-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct UEAssistanceInformation_v1610_IEs, maxCC_Preference_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxCC_Preference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxCC-Preference-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct UEAssistanceInformation_v1610_IEs, maxMIMO_LayerPreference_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxMIMO_LayerPreference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxMIMO-LayerPreference-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct UEAssistanceInformation_v1610_IEs, minSchedulingOffsetPreference_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinSchedulingOffsetPreference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minSchedulingOffsetPreference-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct UEAssistanceInformation_v1610_IEs, releasePreference_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReleasePreference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"releasePreference-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct UEAssistanceInformation_v1610_IEs, sl_UE_AssistanceInformationNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_UE_AssistanceInformationNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-UE-AssistanceInformationNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct UEAssistanceInformation_v1610_IEs, referenceTimeInfoPreference_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceTimeInfoPreference-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEAssistanceInformation_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEAssistanceInformation_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idc-Assistance-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-Preference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxBW-Preference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxCC-Preference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxMIMO-LayerPreference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* minSchedulingOffsetPreference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* releasePreference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sl-UE-AssistanceInformationNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* referenceTimeInfoPreference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1610_IEs_specs_1 = {
	sizeof(struct UEAssistanceInformation_v1610_IEs),
	offsetof(struct UEAssistanceInformation_v1610_IEs, _asn_ctx),
	asn_MAP_UEAssistanceInformation_v1610_IEs_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_UEAssistanceInformation_v1610_IEs_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1610_IEs = {
	"UEAssistanceInformation-v1610-IEs",
	"UEAssistanceInformation-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1,
	sizeof(asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEAssistanceInformation_v1610_IEs_1,
	10,	/* Elements count */
	&asn_SPC_UEAssistanceInformation_v1610_IEs_specs_1	/* Additional specs */
};

