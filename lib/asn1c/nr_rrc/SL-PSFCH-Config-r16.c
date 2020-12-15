/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-PSFCH-Config-r16.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sl_PSFCH_RB_Set_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 10 && size <= 275)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_PSFCH_HopID_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_PSFCH_Period_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_PSFCH_Period_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_NumMuxCS_Pair_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_NumMuxCS_Pair_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_MinTimeGapPSFCH_r16_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_MinTimeGapPSFCH_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_PSFCH_CandidateResourceType_r16_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_PSFCH_CandidateResourceType_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PSFCH_RB_Set_r16_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(10..275)) */};
static asn_per_constraints_t asn_PER_memb_sl_PSFCH_RB_Set_r16_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  10,  275 }	/* (SIZE(10..275)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PSFCH_HopID_r16_constr_16 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_PSFCH_HopID_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_PSFCH_Period_r16_value2enum_2[] = {
	{ 0,	3,	"sl0" },
	{ 1,	3,	"sl1" },
	{ 2,	3,	"sl2" },
	{ 3,	3,	"sl4" }
};
static const unsigned int asn_MAP_sl_PSFCH_Period_r16_enum2value_2[] = {
	0,	/* sl0(0) */
	1,	/* sl1(1) */
	2,	/* sl2(2) */
	3	/* sl4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_PSFCH_Period_r16_specs_2 = {
	asn_MAP_sl_PSFCH_Period_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_PSFCH_Period_r16_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_PSFCH_Period_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_PSFCH_Period_r16_2 = {
	"sl-PSFCH-Period-r16",
	"sl-PSFCH-Period-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_PSFCH_Period_r16_tags_2,
	sizeof(asn_DEF_sl_PSFCH_Period_r16_tags_2)
		/sizeof(asn_DEF_sl_PSFCH_Period_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_PSFCH_Period_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_PSFCH_Period_r16_tags_2)
		/sizeof(asn_DEF_sl_PSFCH_Period_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_sl_PSFCH_Period_r16_constr_2, &asn_PER_type_sl_PSFCH_Period_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_PSFCH_Period_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_NumMuxCS_Pair_r16_value2enum_8[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n6" }
};
static const unsigned int asn_MAP_sl_NumMuxCS_Pair_r16_enum2value_8[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_NumMuxCS_Pair_r16_specs_8 = {
	asn_MAP_sl_NumMuxCS_Pair_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_NumMuxCS_Pair_r16_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_NumMuxCS_Pair_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_NumMuxCS_Pair_r16_8 = {
	"sl-NumMuxCS-Pair-r16",
	"sl-NumMuxCS-Pair-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_NumMuxCS_Pair_r16_tags_8,
	sizeof(asn_DEF_sl_NumMuxCS_Pair_r16_tags_8)
		/sizeof(asn_DEF_sl_NumMuxCS_Pair_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_sl_NumMuxCS_Pair_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_sl_NumMuxCS_Pair_r16_tags_8)
		/sizeof(asn_DEF_sl_NumMuxCS_Pair_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_sl_NumMuxCS_Pair_r16_constr_8, &asn_PER_type_sl_NumMuxCS_Pair_r16_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_NumMuxCS_Pair_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_MinTimeGapPSFCH_r16_value2enum_13[] = {
	{ 0,	3,	"sl2" },
	{ 1,	3,	"sl3" }
};
static const unsigned int asn_MAP_sl_MinTimeGapPSFCH_r16_enum2value_13[] = {
	0,	/* sl2(0) */
	1	/* sl3(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_MinTimeGapPSFCH_r16_specs_13 = {
	asn_MAP_sl_MinTimeGapPSFCH_r16_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_MinTimeGapPSFCH_r16_enum2value_13,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_MinTimeGapPSFCH_r16_13 = {
	"sl-MinTimeGapPSFCH-r16",
	"sl-MinTimeGapPSFCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13,
	sizeof(asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13)
		/sizeof(asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13)
		/sizeof(asn_DEF_sl_MinTimeGapPSFCH_r16_tags_13[0]), /* 2 */
	{ &asn_OER_type_sl_MinTimeGapPSFCH_r16_constr_13, &asn_PER_type_sl_MinTimeGapPSFCH_r16_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_MinTimeGapPSFCH_r16_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_PSFCH_CandidateResourceType_r16_value2enum_17[] = {
	{ 0,	10,	"startSubCH" },
	{ 1,	10,	"allocSubCH" }
};
static const unsigned int asn_MAP_sl_PSFCH_CandidateResourceType_r16_enum2value_17[] = {
	1,	/* allocSubCH(1) */
	0	/* startSubCH(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_PSFCH_CandidateResourceType_r16_specs_17 = {
	asn_MAP_sl_PSFCH_CandidateResourceType_r16_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_PSFCH_CandidateResourceType_r16_enum2value_17,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_PSFCH_CandidateResourceType_r16_17 = {
	"sl-PSFCH-CandidateResourceType-r16",
	"sl-PSFCH-CandidateResourceType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17,
	sizeof(asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17)
		/sizeof(asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17)
		/sizeof(asn_DEF_sl_PSFCH_CandidateResourceType_r16_tags_17[0]), /* 2 */
	{ &asn_OER_type_sl_PSFCH_CandidateResourceType_r16_constr_17, &asn_PER_type_sl_PSFCH_CandidateResourceType_r16_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_PSFCH_CandidateResourceType_r16_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PSFCH_Config_r16_1[] = {
	{ ATF_POINTER, 6, offsetof(struct SL_PSFCH_Config_r16, sl_PSFCH_Period_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_PSFCH_Period_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PSFCH-Period-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_PSFCH_Config_r16, sl_PSFCH_RB_Set_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_sl_PSFCH_RB_Set_r16_constr_7, &asn_PER_memb_sl_PSFCH_RB_Set_r16_constr_7,  memb_sl_PSFCH_RB_Set_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PSFCH-RB-Set-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_PSFCH_Config_r16, sl_NumMuxCS_Pair_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_NumMuxCS_Pair_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-NumMuxCS-Pair-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_PSFCH_Config_r16, sl_MinTimeGapPSFCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_MinTimeGapPSFCH_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MinTimeGapPSFCH-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_PSFCH_Config_r16, sl_PSFCH_HopID_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_PSFCH_HopID_r16_constr_16, &asn_PER_memb_sl_PSFCH_HopID_r16_constr_16,  memb_sl_PSFCH_HopID_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PSFCH-HopID-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PSFCH_Config_r16, sl_PSFCH_CandidateResourceType_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_PSFCH_CandidateResourceType_r16_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PSFCH-CandidateResourceType-r16"
		},
};
static const int asn_MAP_SL_PSFCH_Config_r16_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SL_PSFCH_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PSFCH_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-PSFCH-Period-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-PSFCH-RB-Set-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-NumMuxCS-Pair-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-MinTimeGapPSFCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-PSFCH-HopID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sl-PSFCH-CandidateResourceType-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PSFCH_Config_r16_specs_1 = {
	sizeof(struct SL_PSFCH_Config_r16),
	offsetof(struct SL_PSFCH_Config_r16, _asn_ctx),
	asn_MAP_SL_PSFCH_Config_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_PSFCH_Config_r16_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PSFCH_Config_r16 = {
	"SL-PSFCH-Config-r16",
	"SL-PSFCH-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PSFCH_Config_r16_tags_1,
	sizeof(asn_DEF_SL_PSFCH_Config_r16_tags_1)
		/sizeof(asn_DEF_SL_PSFCH_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_PSFCH_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PSFCH_Config_r16_tags_1)
		/sizeof(asn_DEF_SL_PSFCH_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PSFCH_Config_r16_1,
	6,	/* Elements count */
	&asn_SPC_SL_PSFCH_Config_r16_specs_1	/* Additional specs */
};

