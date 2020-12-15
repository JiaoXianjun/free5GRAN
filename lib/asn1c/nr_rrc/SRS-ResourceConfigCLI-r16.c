/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SRS-ResourceConfigCLI-r16.h"

asn_TYPE_member_t asn_MBR_SRS_ResourceConfigCLI_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceConfigCLI_r16, srs_Resource_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_Resource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-Resource-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceConfigCLI_r16, srs_SCS_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-SCS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceConfigCLI_r16, refServCellIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refServCellIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceConfigCLI_r16, refBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refBWP-r16"
		},
};
static const int asn_MAP_SRS_ResourceConfigCLI_r16_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_SRS_ResourceConfigCLI_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_ResourceConfigCLI_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-Resource-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-SCS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* refServCellIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* refBWP-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_ResourceConfigCLI_r16_specs_1 = {
	sizeof(struct SRS_ResourceConfigCLI_r16),
	offsetof(struct SRS_ResourceConfigCLI_r16, _asn_ctx),
	asn_MAP_SRS_ResourceConfigCLI_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SRS_ResourceConfigCLI_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_ResourceConfigCLI_r16 = {
	"SRS-ResourceConfigCLI-r16",
	"SRS-ResourceConfigCLI-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_ResourceConfigCLI_r16_tags_1,
	sizeof(asn_DEF_SRS_ResourceConfigCLI_r16_tags_1)
		/sizeof(asn_DEF_SRS_ResourceConfigCLI_r16_tags_1[0]), /* 1 */
	asn_DEF_SRS_ResourceConfigCLI_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_ResourceConfigCLI_r16_tags_1)
		/sizeof(asn_DEF_SRS_ResourceConfigCLI_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_ResourceConfigCLI_r16_1,
	4,	/* Elements count */
	&asn_SPC_SRS_ResourceConfigCLI_r16_specs_1	/* Additional specs */
};

