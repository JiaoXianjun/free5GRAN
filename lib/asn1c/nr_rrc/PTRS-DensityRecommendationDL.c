/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "PTRS-DensityRecommendationDL.h"

static int
memb_frequencyDensity1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_frequencyDensity2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_timeDensity1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_timeDensity2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_timeDensity3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_frequencyDensity1_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (1..276) */,
	-1};
static asn_per_constraints_t asn_PER_memb_frequencyDensity1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  276 }	/* (1..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_frequencyDensity2_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (1..276) */,
	-1};
static asn_per_constraints_t asn_PER_memb_frequencyDensity2_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  276 }	/* (1..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeDensity1_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..29) */,
	-1};
static asn_per_constraints_t asn_PER_memb_timeDensity1_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeDensity2_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..29) */,
	-1};
static asn_per_constraints_t asn_PER_memb_timeDensity2_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeDensity3_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..29) */,
	-1};
static asn_per_constraints_t asn_PER_memb_timeDensity3_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PTRS_DensityRecommendationDL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_DensityRecommendationDL, frequencyDensity1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_frequencyDensity1_constr_2, &asn_PER_memb_frequencyDensity1_constr_2,  memb_frequencyDensity1_constraint_1 },
		0, 0, /* No default value */
		"frequencyDensity1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_DensityRecommendationDL, frequencyDensity2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_frequencyDensity2_constr_3, &asn_PER_memb_frequencyDensity2_constr_3,  memb_frequencyDensity2_constraint_1 },
		0, 0, /* No default value */
		"frequencyDensity2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_DensityRecommendationDL, timeDensity1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_timeDensity1_constr_4, &asn_PER_memb_timeDensity1_constr_4,  memb_timeDensity1_constraint_1 },
		0, 0, /* No default value */
		"timeDensity1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_DensityRecommendationDL, timeDensity2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_timeDensity2_constr_5, &asn_PER_memb_timeDensity2_constr_5,  memb_timeDensity2_constraint_1 },
		0, 0, /* No default value */
		"timeDensity2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PTRS_DensityRecommendationDL, timeDensity3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_timeDensity3_constr_6, &asn_PER_memb_timeDensity3_constr_6,  memb_timeDensity3_constraint_1 },
		0, 0, /* No default value */
		"timeDensity3"
		},
};
static const ber_tlv_tag_t asn_DEF_PTRS_DensityRecommendationDL_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PTRS_DensityRecommendationDL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyDensity1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyDensity2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeDensity1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeDensity2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* timeDensity3 */
};
asn_SEQUENCE_specifics_t asn_SPC_PTRS_DensityRecommendationDL_specs_1 = {
	sizeof(struct PTRS_DensityRecommendationDL),
	offsetof(struct PTRS_DensityRecommendationDL, _asn_ctx),
	asn_MAP_PTRS_DensityRecommendationDL_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PTRS_DensityRecommendationDL = {
	"PTRS-DensityRecommendationDL",
	"PTRS-DensityRecommendationDL",
	&asn_OP_SEQUENCE,
	asn_DEF_PTRS_DensityRecommendationDL_tags_1,
	sizeof(asn_DEF_PTRS_DensityRecommendationDL_tags_1)
		/sizeof(asn_DEF_PTRS_DensityRecommendationDL_tags_1[0]), /* 1 */
	asn_DEF_PTRS_DensityRecommendationDL_tags_1,	/* Same as above */
	sizeof(asn_DEF_PTRS_DensityRecommendationDL_tags_1)
		/sizeof(asn_DEF_PTRS_DensityRecommendationDL_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PTRS_DensityRecommendationDL_1,
	5,	/* Elements count */
	&asn_SPC_PTRS_DensityRecommendationDL_specs_1	/* Additional specs */
};

