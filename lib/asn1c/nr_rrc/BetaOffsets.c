/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BetaOffsets.h"

static int
memb_betaOffsetACK_Index1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetACK_Index2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetACK_Index3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetCSI_Part1_Index1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetCSI_Part1_Index2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetCSI_Part2_Index1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_betaOffsetCSI_Part2_Index2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_betaOffsetACK_Index1_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetACK_Index1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetACK_Index2_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetACK_Index2_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetACK_Index3_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetACK_Index3_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetCSI_Part1_Index1_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetCSI_Part1_Index1_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetCSI_Part1_Index2_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetCSI_Part1_Index2_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetCSI_Part2_Index1_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetCSI_Part2_Index1_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_betaOffsetCSI_Part2_Index2_constr_8 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_betaOffsetCSI_Part2_Index2_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_BetaOffsets_1[] = {
	{ ATF_POINTER, 7, offsetof(struct BetaOffsets, betaOffsetACK_Index1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetACK_Index1_constr_2, &asn_PER_memb_betaOffsetACK_Index1_constr_2,  memb_betaOffsetACK_Index1_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetACK-Index1"
		},
	{ ATF_POINTER, 6, offsetof(struct BetaOffsets, betaOffsetACK_Index2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetACK_Index2_constr_3, &asn_PER_memb_betaOffsetACK_Index2_constr_3,  memb_betaOffsetACK_Index2_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetACK-Index2"
		},
	{ ATF_POINTER, 5, offsetof(struct BetaOffsets, betaOffsetACK_Index3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetACK_Index3_constr_4, &asn_PER_memb_betaOffsetACK_Index3_constr_4,  memb_betaOffsetACK_Index3_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetACK-Index3"
		},
	{ ATF_POINTER, 4, offsetof(struct BetaOffsets, betaOffsetCSI_Part1_Index1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetCSI_Part1_Index1_constr_5, &asn_PER_memb_betaOffsetCSI_Part1_Index1_constr_5,  memb_betaOffsetCSI_Part1_Index1_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetCSI-Part1-Index1"
		},
	{ ATF_POINTER, 3, offsetof(struct BetaOffsets, betaOffsetCSI_Part1_Index2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetCSI_Part1_Index2_constr_6, &asn_PER_memb_betaOffsetCSI_Part1_Index2_constr_6,  memb_betaOffsetCSI_Part1_Index2_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetCSI-Part1-Index2"
		},
	{ ATF_POINTER, 2, offsetof(struct BetaOffsets, betaOffsetCSI_Part2_Index1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetCSI_Part2_Index1_constr_7, &asn_PER_memb_betaOffsetCSI_Part2_Index1_constr_7,  memb_betaOffsetCSI_Part2_Index1_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetCSI-Part2-Index1"
		},
	{ ATF_POINTER, 1, offsetof(struct BetaOffsets, betaOffsetCSI_Part2_Index2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_betaOffsetCSI_Part2_Index2_constr_8, &asn_PER_memb_betaOffsetCSI_Part2_Index2_constr_8,  memb_betaOffsetCSI_Part2_Index2_constraint_1 },
		0, 0, /* No default value */
		"betaOffsetCSI-Part2-Index2"
		},
};
static const int asn_MAP_BetaOffsets_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_BetaOffsets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BetaOffsets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffsetACK-Index1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffsetACK-Index2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* betaOffsetACK-Index3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* betaOffsetCSI-Part1-Index1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* betaOffsetCSI-Part1-Index2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* betaOffsetCSI-Part2-Index1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* betaOffsetCSI-Part2-Index2 */
};
asn_SEQUENCE_specifics_t asn_SPC_BetaOffsets_specs_1 = {
	sizeof(struct BetaOffsets),
	offsetof(struct BetaOffsets, _asn_ctx),
	asn_MAP_BetaOffsets_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_BetaOffsets_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BetaOffsets = {
	"BetaOffsets",
	"BetaOffsets",
	&asn_OP_SEQUENCE,
	asn_DEF_BetaOffsets_tags_1,
	sizeof(asn_DEF_BetaOffsets_tags_1)
		/sizeof(asn_DEF_BetaOffsets_tags_1[0]), /* 1 */
	asn_DEF_BetaOffsets_tags_1,	/* Same as above */
	sizeof(asn_DEF_BetaOffsets_tags_1)
		/sizeof(asn_DEF_BetaOffsets_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BetaOffsets_1,
	7,	/* Elements count */
	&asn_SPC_BetaOffsets_specs_1	/* Additional specs */
};

