/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "PTRS-UplinkConfig.h"

static int
memb_NativeInteger_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 276)) {
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
memb_NativeInteger_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 29)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
memb_frequencyDensity_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_timeDensity_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NativeInteger_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 276)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sampleDensity_constraint_19(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (1..276) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  276 }	/* (1..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_frequencyDensity_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_frequencyDensity_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..29) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_timeDensity_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_type_timeDensity_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_maxNrofPorts_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNrofPorts_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_resourceElementOffset_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resourceElementOffset_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ptrs_Power_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ptrs_Power_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_frequencyDensity_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_frequencyDensity_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeDensity_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_timeDensity_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_21 CC_NOTUSED = {
	{ 2, 1 }	/* (1..276) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  276 }	/* (1..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sampleDensity_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_type_sampleDensity_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_timeDensityTransformPrecoding_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_timeDensityTransformPrecoding_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sampleDensity_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_sampleDensity_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_frequencyDensity_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_4, &asn_PER_memb_Member_constr_4,  memb_NativeInteger_constraint_3 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_frequencyDensity_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_frequencyDensity_specs_3 = {
	sizeof(struct PTRS_UplinkConfig__transformPrecoderDisabled__frequencyDensity),
	offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled__frequencyDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_frequencyDensity_3 = {
	"frequencyDensity",
	"frequencyDensity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_frequencyDensity_tags_3,
	sizeof(asn_DEF_frequencyDensity_tags_3)
		/sizeof(asn_DEF_frequencyDensity_tags_3[0]) - 1, /* 1 */
	asn_DEF_frequencyDensity_tags_3,	/* Same as above */
	sizeof(asn_DEF_frequencyDensity_tags_3)
		/sizeof(asn_DEF_frequencyDensity_tags_3[0]), /* 2 */
	{ &asn_OER_type_frequencyDensity_constr_3, &asn_PER_type_frequencyDensity_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_frequencyDensity_3,
	1,	/* Single element */
	&asn_SPC_frequencyDensity_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_timeDensity_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_6, &asn_PER_memb_Member_constr_6,  memb_NativeInteger_constraint_5 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_timeDensity_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_timeDensity_specs_5 = {
	sizeof(struct PTRS_UplinkConfig__transformPrecoderDisabled__timeDensity),
	offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled__timeDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeDensity_5 = {
	"timeDensity",
	"timeDensity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_timeDensity_tags_5,
	sizeof(asn_DEF_timeDensity_tags_5)
		/sizeof(asn_DEF_timeDensity_tags_5[0]) - 1, /* 1 */
	asn_DEF_timeDensity_tags_5,	/* Same as above */
	sizeof(asn_DEF_timeDensity_tags_5)
		/sizeof(asn_DEF_timeDensity_tags_5[0]), /* 2 */
	{ &asn_OER_type_timeDensity_constr_5, &asn_PER_type_timeDensity_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_timeDensity_5,
	1,	/* Single element */
	&asn_SPC_timeDensity_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNrofPorts_value2enum_7[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" }
};
static const unsigned int asn_MAP_maxNrofPorts_enum2value_7[] = {
	0,	/* n1(0) */
	1	/* n2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNrofPorts_specs_7 = {
	asn_MAP_maxNrofPorts_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNrofPorts_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNrofPorts_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNrofPorts_7 = {
	"maxNrofPorts",
	"maxNrofPorts",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNrofPorts_tags_7,
	sizeof(asn_DEF_maxNrofPorts_tags_7)
		/sizeof(asn_DEF_maxNrofPorts_tags_7[0]) - 1, /* 1 */
	asn_DEF_maxNrofPorts_tags_7,	/* Same as above */
	sizeof(asn_DEF_maxNrofPorts_tags_7)
		/sizeof(asn_DEF_maxNrofPorts_tags_7[0]), /* 2 */
	{ &asn_OER_type_maxNrofPorts_constr_7, &asn_PER_type_maxNrofPorts_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNrofPorts_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_resourceElementOffset_value2enum_10[] = {
	{ 0,	8,	"offset01" },
	{ 1,	8,	"offset10" },
	{ 2,	8,	"offset11" }
};
static const unsigned int asn_MAP_resourceElementOffset_enum2value_10[] = {
	0,	/* offset01(0) */
	1,	/* offset10(1) */
	2	/* offset11(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_resourceElementOffset_specs_10 = {
	asn_MAP_resourceElementOffset_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_resourceElementOffset_enum2value_10,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_resourceElementOffset_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceElementOffset_10 = {
	"resourceElementOffset",
	"resourceElementOffset",
	&asn_OP_NativeEnumerated,
	asn_DEF_resourceElementOffset_tags_10,
	sizeof(asn_DEF_resourceElementOffset_tags_10)
		/sizeof(asn_DEF_resourceElementOffset_tags_10[0]) - 1, /* 1 */
	asn_DEF_resourceElementOffset_tags_10,	/* Same as above */
	sizeof(asn_DEF_resourceElementOffset_tags_10)
		/sizeof(asn_DEF_resourceElementOffset_tags_10[0]), /* 2 */
	{ &asn_OER_type_resourceElementOffset_constr_10, &asn_PER_type_resourceElementOffset_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_resourceElementOffset_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ptrs_Power_value2enum_14[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p01" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p11" }
};
static const unsigned int asn_MAP_ptrs_Power_enum2value_14[] = {
	0,	/* p00(0) */
	1,	/* p01(1) */
	2,	/* p10(2) */
	3	/* p11(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_ptrs_Power_specs_14 = {
	asn_MAP_ptrs_Power_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_ptrs_Power_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ptrs_Power_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ptrs_Power_14 = {
	"ptrs-Power",
	"ptrs-Power",
	&asn_OP_NativeEnumerated,
	asn_DEF_ptrs_Power_tags_14,
	sizeof(asn_DEF_ptrs_Power_tags_14)
		/sizeof(asn_DEF_ptrs_Power_tags_14[0]) - 1, /* 1 */
	asn_DEF_ptrs_Power_tags_14,	/* Same as above */
	sizeof(asn_DEF_ptrs_Power_tags_14)
		/sizeof(asn_DEF_ptrs_Power_tags_14[0]), /* 2 */
	{ &asn_OER_type_ptrs_Power_constr_14, &asn_PER_type_ptrs_Power_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ptrs_Power_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_transformPrecoderDisabled_2[] = {
	{ ATF_POINTER, 2, offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, frequencyDensity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_frequencyDensity_3,
		0,
		{ &asn_OER_memb_frequencyDensity_constr_3, &asn_PER_memb_frequencyDensity_constr_3,  memb_frequencyDensity_constraint_2 },
		0, 0, /* No default value */
		"frequencyDensity"
		},
	{ ATF_POINTER, 1, offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, timeDensity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_timeDensity_5,
		0,
		{ &asn_OER_memb_timeDensity_constr_5, &asn_PER_memb_timeDensity_constr_5,  memb_timeDensity_constraint_2 },
		0, 0, /* No default value */
		"timeDensity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, maxNrofPorts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNrofPorts_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNrofPorts"
		},
	{ ATF_POINTER, 1, offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, resourceElementOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_resourceElementOffset_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceElementOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, ptrs_Power),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ptrs_Power_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ptrs-Power"
		},
};
static const int asn_MAP_transformPrecoderDisabled_oms_2[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_transformPrecoderDisabled_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_transformPrecoderDisabled_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyDensity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeDensity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNrofPorts */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* resourceElementOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ptrs-Power */
};
static asn_SEQUENCE_specifics_t asn_SPC_transformPrecoderDisabled_specs_2 = {
	sizeof(struct PTRS_UplinkConfig__transformPrecoderDisabled),
	offsetof(struct PTRS_UplinkConfig__transformPrecoderDisabled, _asn_ctx),
	asn_MAP_transformPrecoderDisabled_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_transformPrecoderDisabled_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transformPrecoderDisabled_2 = {
	"transformPrecoderDisabled",
	"transformPrecoderDisabled",
	&asn_OP_SEQUENCE,
	asn_DEF_transformPrecoderDisabled_tags_2,
	sizeof(asn_DEF_transformPrecoderDisabled_tags_2)
		/sizeof(asn_DEF_transformPrecoderDisabled_tags_2[0]) - 1, /* 1 */
	asn_DEF_transformPrecoderDisabled_tags_2,	/* Same as above */
	sizeof(asn_DEF_transformPrecoderDisabled_tags_2)
		/sizeof(asn_DEF_transformPrecoderDisabled_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_transformPrecoderDisabled_2,
	5,	/* Elements count */
	&asn_SPC_transformPrecoderDisabled_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sampleDensity_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_21, &asn_PER_memb_Member_constr_21,  memb_NativeInteger_constraint_20 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sampleDensity_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sampleDensity_specs_20 = {
	sizeof(struct PTRS_UplinkConfig__transformPrecoderEnabled__sampleDensity),
	offsetof(struct PTRS_UplinkConfig__transformPrecoderEnabled__sampleDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sampleDensity_20 = {
	"sampleDensity",
	"sampleDensity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sampleDensity_tags_20,
	sizeof(asn_DEF_sampleDensity_tags_20)
		/sizeof(asn_DEF_sampleDensity_tags_20[0]) - 1, /* 1 */
	asn_DEF_sampleDensity_tags_20,	/* Same as above */
	sizeof(asn_DEF_sampleDensity_tags_20)
		/sizeof(asn_DEF_sampleDensity_tags_20[0]), /* 2 */
	{ &asn_OER_type_sampleDensity_constr_20, &asn_PER_type_sampleDensity_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_sampleDensity_20,
	1,	/* Single element */
	&asn_SPC_sampleDensity_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_timeDensityTransformPrecoding_value2enum_22[] = {
	{ 0,	2,	"d2" }
};
static const unsigned int asn_MAP_timeDensityTransformPrecoding_enum2value_22[] = {
	0	/* d2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_timeDensityTransformPrecoding_specs_22 = {
	asn_MAP_timeDensityTransformPrecoding_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_timeDensityTransformPrecoding_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_timeDensityTransformPrecoding_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeDensityTransformPrecoding_22 = {
	"timeDensityTransformPrecoding",
	"timeDensityTransformPrecoding",
	&asn_OP_NativeEnumerated,
	asn_DEF_timeDensityTransformPrecoding_tags_22,
	sizeof(asn_DEF_timeDensityTransformPrecoding_tags_22)
		/sizeof(asn_DEF_timeDensityTransformPrecoding_tags_22[0]) - 1, /* 1 */
	asn_DEF_timeDensityTransformPrecoding_tags_22,	/* Same as above */
	sizeof(asn_DEF_timeDensityTransformPrecoding_tags_22)
		/sizeof(asn_DEF_timeDensityTransformPrecoding_tags_22[0]), /* 2 */
	{ &asn_OER_type_timeDensityTransformPrecoding_constr_22, &asn_PER_type_timeDensityTransformPrecoding_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_timeDensityTransformPrecoding_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_transformPrecoderEnabled_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_UplinkConfig__transformPrecoderEnabled, sampleDensity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sampleDensity_20,
		0,
		{ &asn_OER_memb_sampleDensity_constr_20, &asn_PER_memb_sampleDensity_constr_20,  memb_sampleDensity_constraint_19 },
		0, 0, /* No default value */
		"sampleDensity"
		},
	{ ATF_POINTER, 1, offsetof(struct PTRS_UplinkConfig__transformPrecoderEnabled, timeDensityTransformPrecoding),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_timeDensityTransformPrecoding_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeDensityTransformPrecoding"
		},
};
static const int asn_MAP_transformPrecoderEnabled_oms_19[] = { 1 };
static const ber_tlv_tag_t asn_DEF_transformPrecoderEnabled_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_transformPrecoderEnabled_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sampleDensity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeDensityTransformPrecoding */
};
static asn_SEQUENCE_specifics_t asn_SPC_transformPrecoderEnabled_specs_19 = {
	sizeof(struct PTRS_UplinkConfig__transformPrecoderEnabled),
	offsetof(struct PTRS_UplinkConfig__transformPrecoderEnabled, _asn_ctx),
	asn_MAP_transformPrecoderEnabled_tag2el_19,
	2,	/* Count of tags in the map */
	asn_MAP_transformPrecoderEnabled_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transformPrecoderEnabled_19 = {
	"transformPrecoderEnabled",
	"transformPrecoderEnabled",
	&asn_OP_SEQUENCE,
	asn_DEF_transformPrecoderEnabled_tags_19,
	sizeof(asn_DEF_transformPrecoderEnabled_tags_19)
		/sizeof(asn_DEF_transformPrecoderEnabled_tags_19[0]) - 1, /* 1 */
	asn_DEF_transformPrecoderEnabled_tags_19,	/* Same as above */
	sizeof(asn_DEF_transformPrecoderEnabled_tags_19)
		/sizeof(asn_DEF_transformPrecoderEnabled_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_transformPrecoderEnabled_19,
	2,	/* Elements count */
	&asn_SPC_transformPrecoderEnabled_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PTRS_UplinkConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PTRS_UplinkConfig, transformPrecoderDisabled),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_transformPrecoderDisabled_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transformPrecoderDisabled"
		},
	{ ATF_POINTER, 1, offsetof(struct PTRS_UplinkConfig, transformPrecoderEnabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_transformPrecoderEnabled_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transformPrecoderEnabled"
		},
};
static const int asn_MAP_PTRS_UplinkConfig_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PTRS_UplinkConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PTRS_UplinkConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transformPrecoderDisabled */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* transformPrecoderEnabled */
};
asn_SEQUENCE_specifics_t asn_SPC_PTRS_UplinkConfig_specs_1 = {
	sizeof(struct PTRS_UplinkConfig),
	offsetof(struct PTRS_UplinkConfig, _asn_ctx),
	asn_MAP_PTRS_UplinkConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PTRS_UplinkConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PTRS_UplinkConfig = {
	"PTRS-UplinkConfig",
	"PTRS-UplinkConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_PTRS_UplinkConfig_tags_1,
	sizeof(asn_DEF_PTRS_UplinkConfig_tags_1)
		/sizeof(asn_DEF_PTRS_UplinkConfig_tags_1[0]), /* 1 */
	asn_DEF_PTRS_UplinkConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PTRS_UplinkConfig_tags_1)
		/sizeof(asn_DEF_PTRS_UplinkConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PTRS_UplinkConfig_1,
	2,	/* Elements count */
	&asn_SPC_PTRS_UplinkConfig_specs_1	/* Additional specs */
};

