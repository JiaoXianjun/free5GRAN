/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "PDCCH-MonitoringOccasions-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_period7span3_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_period7span3_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_period4span3_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_period4span3_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_period2span2_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_period2span2_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_period7span3_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_period7span3_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_period7span3_r16_specs_2 = {
	asn_MAP_period7span3_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_period7span3_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_period7span3_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_period7span3_r16_2 = {
	"period7span3-r16",
	"period7span3-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_period7span3_r16_tags_2,
	sizeof(asn_DEF_period7span3_r16_tags_2)
		/sizeof(asn_DEF_period7span3_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_period7span3_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_period7span3_r16_tags_2)
		/sizeof(asn_DEF_period7span3_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_period7span3_r16_constr_2, &asn_PER_type_period7span3_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_period7span3_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_period4span3_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_period4span3_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_period4span3_r16_specs_4 = {
	asn_MAP_period4span3_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_period4span3_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_period4span3_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_period4span3_r16_4 = {
	"period4span3-r16",
	"period4span3-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_period4span3_r16_tags_4,
	sizeof(asn_DEF_period4span3_r16_tags_4)
		/sizeof(asn_DEF_period4span3_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_period4span3_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_period4span3_r16_tags_4)
		/sizeof(asn_DEF_period4span3_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_period4span3_r16_constr_4, &asn_PER_type_period4span3_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_period4span3_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_period2span2_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_period2span2_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_period2span2_r16_specs_6 = {
	asn_MAP_period2span2_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_period2span2_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_period2span2_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_period2span2_r16_6 = {
	"period2span2-r16",
	"period2span2-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_period2span2_r16_tags_6,
	sizeof(asn_DEF_period2span2_r16_tags_6)
		/sizeof(asn_DEF_period2span2_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_period2span2_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_period2span2_r16_tags_6)
		/sizeof(asn_DEF_period2span2_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_period2span2_r16_constr_6, &asn_PER_type_period2span2_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_period2span2_r16_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCCH_MonitoringOccasions_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PDCCH_MonitoringOccasions_r16, period7span3_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_period7span3_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"period7span3-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCCH_MonitoringOccasions_r16, period4span3_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_period4span3_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"period4span3-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCCH_MonitoringOccasions_r16, period2span2_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_period2span2_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"period2span2-r16"
		},
};
static const int asn_MAP_PDCCH_MonitoringOccasions_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCCH_MonitoringOccasions_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* period7span3-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* period4span3-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* period2span2-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCCH_MonitoringOccasions_r16_specs_1 = {
	sizeof(struct PDCCH_MonitoringOccasions_r16),
	offsetof(struct PDCCH_MonitoringOccasions_r16, _asn_ctx),
	asn_MAP_PDCCH_MonitoringOccasions_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PDCCH_MonitoringOccasions_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_MonitoringOccasions_r16 = {
	"PDCCH-MonitoringOccasions-r16",
	"PDCCH-MonitoringOccasions-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1,
	sizeof(asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1)
		/sizeof(asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1[0]), /* 1 */
	asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1)
		/sizeof(asn_DEF_PDCCH_MonitoringOccasions_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCCH_MonitoringOccasions_r16_1,
	3,	/* Elements count */
	&asn_SPC_PDCCH_MonitoringOccasions_r16_specs_1	/* Additional specs */
};

