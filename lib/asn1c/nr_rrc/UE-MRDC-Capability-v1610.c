/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "UE-MRDC-Capability-v1610.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_5 = {
	sizeof(struct UE_MRDC_Capability_v1610__nonCriticalExtension),
	offsetof(struct UE_MRDC_Capability_v1610__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_5 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_5,
	sizeof(asn_DEF_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_nonCriticalExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_nonCriticalExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_MRDC_Capability_v1610_1[] = {
	{ ATF_POINTER, 4, offsetof(struct UE_MRDC_Capability_v1610, measAndMobParametersMRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasAndMobParametersMRDC_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersMRDC-v1610"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_MRDC_Capability_v1610, generalParametersMRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralParametersMRDC_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generalParametersMRDC-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_MRDC_Capability_v1610, pdcp_ParametersMRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_ParametersMRDC_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-ParametersMRDC-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_MRDC_Capability_v1610, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_MRDC_Capability_v1610_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_UE_MRDC_Capability_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_MRDC_Capability_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measAndMobParametersMRDC-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* generalParametersMRDC-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-ParametersMRDC-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_Capability_v1610_specs_1 = {
	sizeof(struct UE_MRDC_Capability_v1610),
	offsetof(struct UE_MRDC_Capability_v1610, _asn_ctx),
	asn_MAP_UE_MRDC_Capability_v1610_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UE_MRDC_Capability_v1610_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_MRDC_Capability_v1610 = {
	"UE-MRDC-Capability-v1610",
	"UE-MRDC-Capability-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_MRDC_Capability_v1610_tags_1,
	sizeof(asn_DEF_UE_MRDC_Capability_v1610_tags_1)
		/sizeof(asn_DEF_UE_MRDC_Capability_v1610_tags_1[0]), /* 1 */
	asn_DEF_UE_MRDC_Capability_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_MRDC_Capability_v1610_tags_1)
		/sizeof(asn_DEF_UE_MRDC_Capability_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_MRDC_Capability_v1610_1,
	4,	/* Elements count */
	&asn_SPC_UE_MRDC_Capability_v1610_specs_1	/* Additional specs */
};

