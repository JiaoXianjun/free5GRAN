/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-RLC-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sl_MaxRetxThreshold_r16_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_MaxRetxThreshold_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SL_RLC_Config_r16_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SL_RLC_Config_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_MaxRetxThreshold_r16_value2enum_7[] = {
	{ 0,	2,	"t1" },
	{ 1,	2,	"t2" },
	{ 2,	2,	"t3" },
	{ 3,	2,	"t4" },
	{ 4,	2,	"t6" },
	{ 5,	2,	"t8" },
	{ 6,	3,	"t16" },
	{ 7,	3,	"t32" }
};
static const unsigned int asn_MAP_sl_MaxRetxThreshold_r16_enum2value_7[] = {
	0,	/* t1(0) */
	6,	/* t16(6) */
	1,	/* t2(1) */
	2,	/* t3(2) */
	7,	/* t32(7) */
	3,	/* t4(3) */
	4,	/* t6(4) */
	5	/* t8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_MaxRetxThreshold_r16_specs_7 = {
	asn_MAP_sl_MaxRetxThreshold_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_MaxRetxThreshold_r16_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_MaxRetxThreshold_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_MaxRetxThreshold_r16_7 = {
	"sl-MaxRetxThreshold-r16",
	"sl-MaxRetxThreshold-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_MaxRetxThreshold_r16_tags_7,
	sizeof(asn_DEF_sl_MaxRetxThreshold_r16_tags_7)
		/sizeof(asn_DEF_sl_MaxRetxThreshold_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_sl_MaxRetxThreshold_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_sl_MaxRetxThreshold_r16_tags_7)
		/sizeof(asn_DEF_sl_MaxRetxThreshold_r16_tags_7[0]), /* 2 */
	{ &asn_OER_type_sl_MaxRetxThreshold_r16_constr_7, &asn_PER_type_sl_MaxRetxThreshold_r16_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_MaxRetxThreshold_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_AM_RLC_r16_2[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, sl_SN_FieldLengthAM_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthAM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-SN-FieldLengthAM-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, sl_T_PollRetransmit_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_PollRetransmit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-T-PollRetransmit-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, sl_PollPDU_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollPDU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PollPDU-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, sl_PollByte_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PollByte,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PollByte-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, sl_MaxRetxThreshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_MaxRetxThreshold_r16_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MaxRetxThreshold-r16"
		},
};
static const int asn_MAP_sl_AM_RLC_r16_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_sl_AM_RLC_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sl_AM_RLC_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-SN-FieldLengthAM-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-T-PollRetransmit-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-PollPDU-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-PollByte-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sl-MaxRetxThreshold-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sl_AM_RLC_r16_specs_2 = {
	sizeof(struct SL_RLC_Config_r16__sl_AM_RLC_r16),
	offsetof(struct SL_RLC_Config_r16__sl_AM_RLC_r16, _asn_ctx),
	asn_MAP_sl_AM_RLC_r16_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_sl_AM_RLC_r16_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_AM_RLC_r16_2 = {
	"sl-AM-RLC-r16",
	"sl-AM-RLC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sl_AM_RLC_r16_tags_2,
	sizeof(asn_DEF_sl_AM_RLC_r16_tags_2)
		/sizeof(asn_DEF_sl_AM_RLC_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_AM_RLC_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_AM_RLC_r16_tags_2)
		/sizeof(asn_DEF_sl_AM_RLC_r16_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_sl_AM_RLC_r16_2,
	5,	/* Elements count */
	&asn_SPC_sl_AM_RLC_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_UM_RLC_r16_17[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_RLC_Config_r16__sl_UM_RLC_r16, sl_SN_FieldLengthUM_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthUM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-SN-FieldLengthUM-r16"
		},
};
static const int asn_MAP_sl_UM_RLC_r16_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_sl_UM_RLC_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sl_UM_RLC_r16_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-SN-FieldLengthUM-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sl_UM_RLC_r16_specs_17 = {
	sizeof(struct SL_RLC_Config_r16__sl_UM_RLC_r16),
	offsetof(struct SL_RLC_Config_r16__sl_UM_RLC_r16, _asn_ctx),
	asn_MAP_sl_UM_RLC_r16_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_sl_UM_RLC_r16_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_UM_RLC_r16_17 = {
	"sl-UM-RLC-r16",
	"sl-UM-RLC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sl_UM_RLC_r16_tags_17,
	sizeof(asn_DEF_sl_UM_RLC_r16_tags_17)
		/sizeof(asn_DEF_sl_UM_RLC_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_sl_UM_RLC_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_sl_UM_RLC_r16_tags_17)
		/sizeof(asn_DEF_sl_UM_RLC_r16_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_sl_UM_RLC_r16_17,
	1,	/* Elements count */
	&asn_SPC_sl_UM_RLC_r16_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_RLC_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16, choice.sl_AM_RLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sl_AM_RLC_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-AM-RLC-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_RLC_Config_r16, choice.sl_UM_RLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sl_UM_RLC_r16_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-UM-RLC-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SL_RLC_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-AM-RLC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-UM-RLC-r16 */
};
asn_CHOICE_specifics_t asn_SPC_SL_RLC_Config_r16_specs_1 = {
	sizeof(struct SL_RLC_Config_r16),
	offsetof(struct SL_RLC_Config_r16, _asn_ctx),
	offsetof(struct SL_RLC_Config_r16, present),
	sizeof(((struct SL_RLC_Config_r16 *)0)->present),
	asn_MAP_SL_RLC_Config_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_RLC_Config_r16 = {
	"SL-RLC-Config-r16",
	"SL-RLC-Config-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SL_RLC_Config_r16_constr_1, &asn_PER_type_SL_RLC_Config_r16_constr_1, CHOICE_constraint },
	asn_MBR_SL_RLC_Config_r16_1,
	2,	/* Elements count */
	&asn_SPC_SL_RLC_Config_r16_specs_1	/* Additional specs */
};

