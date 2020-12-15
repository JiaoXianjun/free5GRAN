/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BH-RLC-ChannelConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_reestablishRLC_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reestablishRLC_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_reestablishRLC_r16_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reestablishRLC_r16_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reestablishRLC_r16_specs_4 = {
	asn_MAP_reestablishRLC_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_reestablishRLC_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reestablishRLC_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reestablishRLC_r16_4 = {
	"reestablishRLC-r16",
	"reestablishRLC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_reestablishRLC_r16_tags_4,
	sizeof(asn_DEF_reestablishRLC_r16_tags_4)
		/sizeof(asn_DEF_reestablishRLC_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_reestablishRLC_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_reestablishRLC_r16_tags_4)
		/sizeof(asn_DEF_reestablishRLC_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_reestablishRLC_r16_constr_4, &asn_PER_type_reestablishRLC_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reestablishRLC_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BH_RLC_ChannelConfig_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct BH_RLC_ChannelConfig_r16, bh_LogicalChannelIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BH_LogicalChannelIdentity_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bh-LogicalChannelIdentity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BH_RLC_ChannelConfig_r16, bh_RLC_ChannelID_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BH_RLC_ChannelID_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bh-RLC-ChannelID-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct BH_RLC_ChannelConfig_r16, reestablishRLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reestablishRLC_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishRLC-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct BH_RLC_ChannelConfig_r16, rlc_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct BH_RLC_ChannelConfig_r16, mac_LogicalChannelConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-LogicalChannelConfig-r16"
		},
};
static const int asn_MAP_BH_RLC_ChannelConfig_r16_oms_1[] = { 0, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_BH_RLC_ChannelConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BH_RLC_ChannelConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bh-LogicalChannelIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bh-RLC-ChannelID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reestablishRLC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mac-LogicalChannelConfig-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_BH_RLC_ChannelConfig_r16_specs_1 = {
	sizeof(struct BH_RLC_ChannelConfig_r16),
	offsetof(struct BH_RLC_ChannelConfig_r16, _asn_ctx),
	asn_MAP_BH_RLC_ChannelConfig_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_BH_RLC_ChannelConfig_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BH_RLC_ChannelConfig_r16 = {
	"BH-RLC-ChannelConfig-r16",
	"BH-RLC-ChannelConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_BH_RLC_ChannelConfig_r16_tags_1,
	sizeof(asn_DEF_BH_RLC_ChannelConfig_r16_tags_1)
		/sizeof(asn_DEF_BH_RLC_ChannelConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_BH_RLC_ChannelConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_BH_RLC_ChannelConfig_r16_tags_1)
		/sizeof(asn_DEF_BH_RLC_ChannelConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BH_RLC_ChannelConfig_r16_1,
	5,	/* Elements count */
	&asn_SPC_BH_RLC_ChannelConfig_r16_specs_1	/* Additional specs */
};

