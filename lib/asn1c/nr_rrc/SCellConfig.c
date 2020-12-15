/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SCellConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sCellState_r16_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sCellState_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_secondaryDRX_GroupConfig_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_secondaryDRX_GroupConfig_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sCellState_r16_value2enum_7[] = {
	{ 0,	9,	"activated" }
};
static const unsigned int asn_MAP_sCellState_r16_enum2value_7[] = {
	0	/* activated(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sCellState_r16_specs_7 = {
	asn_MAP_sCellState_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_sCellState_r16_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sCellState_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sCellState_r16_7 = {
	"sCellState-r16",
	"sCellState-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sCellState_r16_tags_7,
	sizeof(asn_DEF_sCellState_r16_tags_7)
		/sizeof(asn_DEF_sCellState_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_sCellState_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_sCellState_r16_tags_7)
		/sizeof(asn_DEF_sCellState_r16_tags_7[0]), /* 2 */
	{ &asn_OER_type_sCellState_r16_constr_7, &asn_PER_type_sCellState_r16_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sCellState_r16_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_secondaryDRX_GroupConfig_r16_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_secondaryDRX_GroupConfig_r16_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_secondaryDRX_GroupConfig_r16_specs_9 = {
	asn_MAP_secondaryDRX_GroupConfig_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_secondaryDRX_GroupConfig_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_secondaryDRX_GroupConfig_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_secondaryDRX_GroupConfig_r16_9 = {
	"secondaryDRX-GroupConfig-r16",
	"secondaryDRX-GroupConfig-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_secondaryDRX_GroupConfig_r16_tags_9,
	sizeof(asn_DEF_secondaryDRX_GroupConfig_r16_tags_9)
		/sizeof(asn_DEF_secondaryDRX_GroupConfig_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_secondaryDRX_GroupConfig_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_secondaryDRX_GroupConfig_r16_tags_9)
		/sizeof(asn_DEF_secondaryDRX_GroupConfig_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_secondaryDRX_GroupConfig_r16_constr_9, &asn_PER_type_secondaryDRX_GroupConfig_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_secondaryDRX_GroupConfig_r16_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCellConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellConfig, sCellIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex"
		},
	{ ATF_POINTER, 5, offsetof(struct SCellConfig, sCellConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct SCellConfig, sCellConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServingCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellConfigDedicated"
		},
	{ ATF_POINTER, 3, offsetof(struct SCellConfig, smtc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc"
		},
	{ ATF_POINTER, 2, offsetof(struct SCellConfig, sCellState_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sCellState_r16_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellState-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SCellConfig, secondaryDRX_GroupConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_secondaryDRX_GroupConfig_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondaryDRX-GroupConfig-r16"
		},
};
static const int asn_MAP_SCellConfig_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SCellConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCellConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sCellConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* smtc */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sCellState-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* secondaryDRX-GroupConfig-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCellConfig_specs_1 = {
	sizeof(struct SCellConfig),
	offsetof(struct SCellConfig, _asn_ctx),
	asn_MAP_SCellConfig_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SCellConfig_oms_1,	/* Optional members */
	2, 3,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCellConfig = {
	"SCellConfig",
	"SCellConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_SCellConfig_tags_1,
	sizeof(asn_DEF_SCellConfig_tags_1)
		/sizeof(asn_DEF_SCellConfig_tags_1[0]), /* 1 */
	asn_DEF_SCellConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellConfig_tags_1)
		/sizeof(asn_DEF_SCellConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCellConfig_1,
	6,	/* Elements count */
	&asn_SPC_SCellConfig_specs_1	/* Additional specs */
};

