/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "UEAssistanceInformation-v1540-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct UEAssistanceInformation_v1540_IEs__nonCriticalExtension),
	offsetof(struct UEAssistanceInformation_v1540_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1540_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UEAssistanceInformation_v1540_IEs, overheatingAssistance),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OverheatingAssistance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"overheatingAssistance"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1540_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEAssistanceInformation_v1540_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEAssistanceInformation_v1540_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* overheatingAssistance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1540_IEs_specs_1 = {
	sizeof(struct UEAssistanceInformation_v1540_IEs),
	offsetof(struct UEAssistanceInformation_v1540_IEs, _asn_ctx),
	asn_MAP_UEAssistanceInformation_v1540_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEAssistanceInformation_v1540_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1540_IEs = {
	"UEAssistanceInformation-v1540-IEs",
	"UEAssistanceInformation-v1540-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1,
	sizeof(asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1540_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEAssistanceInformation_v1540_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UEAssistanceInformation_v1540_IEs_specs_1	/* Additional specs */
};

