/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SSB-InfoNcell-r16.h"

asn_TYPE_member_t asn_MBR_SSB_InfoNcell_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_InfoNcell_r16, physicalCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalCellId-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SSB_InfoNcell_r16, ssb_IndexNcell_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-IndexNcell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SSB_InfoNcell_r16, ssb_Configuration_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Configuration_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-Configuration-r16"
		},
};
static const int asn_MAP_SSB_InfoNcell_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SSB_InfoNcell_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSB_InfoNcell_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssb-IndexNcell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ssb-Configuration-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SSB_InfoNcell_r16_specs_1 = {
	sizeof(struct SSB_InfoNcell_r16),
	offsetof(struct SSB_InfoNcell_r16, _asn_ctx),
	asn_MAP_SSB_InfoNcell_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SSB_InfoNcell_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSB_InfoNcell_r16 = {
	"SSB-InfoNcell-r16",
	"SSB-InfoNcell-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SSB_InfoNcell_r16_tags_1,
	sizeof(asn_DEF_SSB_InfoNcell_r16_tags_1)
		/sizeof(asn_DEF_SSB_InfoNcell_r16_tags_1[0]), /* 1 */
	asn_DEF_SSB_InfoNcell_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSB_InfoNcell_r16_tags_1)
		/sizeof(asn_DEF_SSB_InfoNcell_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SSB_InfoNcell_r16_1,
	3,	/* Elements count */
	&asn_SPC_SSB_InfoNcell_r16_specs_1	/* Additional specs */
};

