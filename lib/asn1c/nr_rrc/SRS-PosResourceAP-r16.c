/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SRS-PosResourceAP-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_r16_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_r16_enum2value_2[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberAP_SRS_PosResourcesPerBWP_r16_specs_2 = {
	asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_r16_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_2 = {
	"maxNumberAP-SRS-PosResourcesPerBWP-r16",
	"maxNumberAP-SRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2,
	sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2)
		/sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2)
		/sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_2, &asn_PER_type_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberAP_SRS_PosResourcesPerBWP_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_value2enum_10[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" },
	{ 8,	3,	"n12" },
	{ 9,	3,	"n14" }
};
static const unsigned int asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_enum2value_10[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	8,	/* n12(8) */
	9,	/* n14(9) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_specs_10 = {
	asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_enum2value_10,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_10 = {
	"maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16",
	"maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10,
	sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10)
		/sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10)
		/sizeof(asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_tags_10[0]), /* 2 */
	{ &asn_OER_type_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_constr_10, &asn_PER_type_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_PosResourceAP_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceAP_r16, maxNumberAP_SRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberAP-SRS-PosResourcesPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceAP_r16, maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_SRS_PosResourceAP_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_PosResourceAP_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberAP-SRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_PosResourceAP_r16_specs_1 = {
	sizeof(struct SRS_PosResourceAP_r16),
	offsetof(struct SRS_PosResourceAP_r16, _asn_ctx),
	asn_MAP_SRS_PosResourceAP_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_PosResourceAP_r16 = {
	"SRS-PosResourceAP-r16",
	"SRS-PosResourceAP-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_PosResourceAP_r16_tags_1,
	sizeof(asn_DEF_SRS_PosResourceAP_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResourceAP_r16_tags_1[0]), /* 1 */
	asn_DEF_SRS_PosResourceAP_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_PosResourceAP_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResourceAP_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_PosResourceAP_r16_1,
	2,	/* Elements count */
	&asn_SPC_SRS_PosResourceAP_r16_specs_1	/* Additional specs */
};

