/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "SRS-ResourceSet.h"

static int
memb_NativeInteger_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
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
memb_aperiodicSRS_ResourceTriggerList_v1530_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
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
memb_aperiodicSRS_ResourceTrigger_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
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
memb_slotOffset_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
static int
memb_srs_ResourceIdList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_p0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -202 && value <= 24)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_srs_ResourceIdList_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_srs_ResourceIdList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_13 CC_NOTUSED = {
	{ 1, 1 }	/* (1..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_aperiodicSRS_ResourceTriggerList_v1530_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_type_aperiodicSRS_ResourceTriggerList_v1530_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_aperiodicSRS_ResourceTriggerList_v1530_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_memb_aperiodicSRS_ResourceTriggerList_v1530_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_aperiodicSRS_ResourceTrigger_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (1..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_aperiodicSRS_ResourceTrigger_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_slotOffset_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_slotOffset_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_resourceType_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resourceType_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_usage_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_usage_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pathlossReferenceRS_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pathlossReferenceRS_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_PowerControlAdjustmentStates_constr_30 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_PowerControlAdjustmentStates_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_ResourceIdList_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_srs_ResourceIdList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_constr_26 CC_NOTUSED = {
	{ 2, 0 }	/* (-202..24) */,
	-1};
static asn_per_constraints_t asn_PER_memb_p0_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -202,  24 }	/* (-202..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_srs_ResourceIdList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SRS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_ResourceIdList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_ResourceIdList_specs_3 = {
	sizeof(struct SRS_ResourceSet__srs_ResourceIdList),
	offsetof(struct SRS_ResourceSet__srs_ResourceIdList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ResourceIdList_3 = {
	"srs-ResourceIdList",
	"srs-ResourceIdList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_ResourceIdList_tags_3,
	sizeof(asn_DEF_srs_ResourceIdList_tags_3)
		/sizeof(asn_DEF_srs_ResourceIdList_tags_3[0]) - 1, /* 1 */
	asn_DEF_srs_ResourceIdList_tags_3,	/* Same as above */
	sizeof(asn_DEF_srs_ResourceIdList_tags_3)
		/sizeof(asn_DEF_srs_ResourceIdList_tags_3[0]), /* 2 */
	{ &asn_OER_type_srs_ResourceIdList_constr_3, &asn_PER_type_srs_ResourceIdList_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_srs_ResourceIdList_3,
	1,	/* Single element */
	&asn_SPC_srs_ResourceIdList_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aperiodicSRS_ResourceTriggerList_v1530_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_13, &asn_PER_memb_Member_constr_13,  memb_NativeInteger_constraint_12 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aperiodicSRS_ResourceTriggerList_v1530_specs_12 = {
	sizeof(struct SRS_ResourceSet__resourceType__aperiodic__ext1__aperiodicSRS_ResourceTriggerList_v1530),
	offsetof(struct SRS_ResourceSet__resourceType__aperiodic__ext1__aperiodicSRS_ResourceTriggerList_v1530, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_12 = {
	"aperiodicSRS-ResourceTriggerList-v1530",
	"aperiodicSRS-ResourceTriggerList-v1530",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12,
	sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12)
		/sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12[0]) - 1, /* 1 */
	asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12,	/* Same as above */
	sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12)
		/sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_tags_12[0]), /* 2 */
	{ &asn_OER_type_aperiodicSRS_ResourceTriggerList_v1530_constr_12, &asn_PER_type_aperiodicSRS_ResourceTriggerList_v1530_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_aperiodicSRS_ResourceTriggerList_v1530_12,
	1,	/* Single element */
	&asn_SPC_aperiodicSRS_ResourceTriggerList_v1530_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet__resourceType__aperiodic__ext1, aperiodicSRS_ResourceTriggerList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_aperiodicSRS_ResourceTriggerList_v1530_12,
		0,
		{ &asn_OER_memb_aperiodicSRS_ResourceTriggerList_v1530_constr_12, &asn_PER_memb_aperiodicSRS_ResourceTriggerList_v1530_constr_12,  memb_aperiodicSRS_ResourceTriggerList_v1530_constraint_11 },
		0, 0, /* No default value */
		"aperiodicSRS-ResourceTriggerList-v1530"
		},
};
static const int asn_MAP_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* aperiodicSRS-ResourceTriggerList-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_11 = {
	sizeof(struct SRS_ResourceSet__resourceType__aperiodic__ext1),
	offsetof(struct SRS_ResourceSet__resourceType__aperiodic__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_11,
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aperiodic_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet__resourceType__aperiodic, aperiodicSRS_ResourceTrigger),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_aperiodicSRS_ResourceTrigger_constr_7, &asn_PER_memb_aperiodicSRS_ResourceTrigger_constr_7,  memb_aperiodicSRS_ResourceTrigger_constraint_6 },
		0, 0, /* No default value */
		"aperiodicSRS-ResourceTrigger"
		},
	{ ATF_POINTER, 3, offsetof(struct SRS_ResourceSet__resourceType__aperiodic, csi_RS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS"
		},
	{ ATF_POINTER, 2, offsetof(struct SRS_ResourceSet__resourceType__aperiodic, slotOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_slotOffset_constr_9, &asn_PER_memb_slotOffset_constr_9,  memb_slotOffset_constraint_6 },
		0, 0, /* No default value */
		"slotOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet__resourceType__aperiodic, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_aperiodic_oms_6[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_aperiodic_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_aperiodic_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodicSRS-ResourceTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slotOffset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_aperiodic_specs_6 = {
	sizeof(struct SRS_ResourceSet__resourceType__aperiodic),
	offsetof(struct SRS_ResourceSet__resourceType__aperiodic, _asn_ctx),
	asn_MAP_aperiodic_tag2el_6,
	4,	/* Count of tags in the map */
	asn_MAP_aperiodic_oms_6,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodic_6 = {
	"aperiodic",
	"aperiodic",
	&asn_OP_SEQUENCE,
	asn_DEF_aperiodic_tags_6,
	sizeof(asn_DEF_aperiodic_tags_6)
		/sizeof(asn_DEF_aperiodic_tags_6[0]) - 1, /* 1 */
	asn_DEF_aperiodic_tags_6,	/* Same as above */
	sizeof(asn_DEF_aperiodic_tags_6)
		/sizeof(asn_DEF_aperiodic_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_aperiodic_6,
	4,	/* Elements count */
	&asn_SPC_aperiodic_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_semi_persistent_14[] = {
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet__resourceType__semi_persistent, associatedCSI_RS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedCSI-RS"
		},
};
static const int asn_MAP_semi_persistent_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_semi_persistent_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_semi_persistent_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* associatedCSI-RS */
};
static asn_SEQUENCE_specifics_t asn_SPC_semi_persistent_specs_14 = {
	sizeof(struct SRS_ResourceSet__resourceType__semi_persistent),
	offsetof(struct SRS_ResourceSet__resourceType__semi_persistent, _asn_ctx),
	asn_MAP_semi_persistent_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_semi_persistent_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_semi_persistent_14 = {
	"semi-persistent",
	"semi-persistent",
	&asn_OP_SEQUENCE,
	asn_DEF_semi_persistent_tags_14,
	sizeof(asn_DEF_semi_persistent_tags_14)
		/sizeof(asn_DEF_semi_persistent_tags_14[0]) - 1, /* 1 */
	asn_DEF_semi_persistent_tags_14,	/* Same as above */
	sizeof(asn_DEF_semi_persistent_tags_14)
		/sizeof(asn_DEF_semi_persistent_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_semi_persistent_14,
	1,	/* Elements count */
	&asn_SPC_semi_persistent_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodic_17[] = {
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet__resourceType__periodic, associatedCSI_RS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedCSI-RS"
		},
};
static const int asn_MAP_periodic_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_periodic_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_periodic_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* associatedCSI-RS */
};
static asn_SEQUENCE_specifics_t asn_SPC_periodic_specs_17 = {
	sizeof(struct SRS_ResourceSet__resourceType__periodic),
	offsetof(struct SRS_ResourceSet__resourceType__periodic, _asn_ctx),
	asn_MAP_periodic_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_periodic_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodic_17 = {
	"periodic",
	"periodic",
	&asn_OP_SEQUENCE,
	asn_DEF_periodic_tags_17,
	sizeof(asn_DEF_periodic_tags_17)
		/sizeof(asn_DEF_periodic_tags_17[0]) - 1, /* 1 */
	asn_DEF_periodic_tags_17,	/* Same as above */
	sizeof(asn_DEF_periodic_tags_17)
		/sizeof(asn_DEF_periodic_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_periodic_17,
	1,	/* Elements count */
	&asn_SPC_periodic_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceType_5[] = {
	{ ATF_POINTER, 0, offsetof(struct SRS_ResourceSet__resourceType, choice.aperiodic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_aperiodic_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodic"
		},
	{ ATF_POINTER, 0, offsetof(struct SRS_ResourceSet__resourceType, choice.semi_persistent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_semi_persistent_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semi-persistent"
		},
	{ ATF_POINTER, 0, offsetof(struct SRS_ResourceSet__resourceType, choice.periodic),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_periodic_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodic"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_resourceType_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodic */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* semi-persistent */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* periodic */
};
static asn_CHOICE_specifics_t asn_SPC_resourceType_specs_5 = {
	sizeof(struct SRS_ResourceSet__resourceType),
	offsetof(struct SRS_ResourceSet__resourceType, _asn_ctx),
	offsetof(struct SRS_ResourceSet__resourceType, present),
	sizeof(((struct SRS_ResourceSet__resourceType *)0)->present),
	asn_MAP_resourceType_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceType_5 = {
	"resourceType",
	"resourceType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_resourceType_constr_5, &asn_PER_type_resourceType_constr_5, CHOICE_constraint },
	asn_MBR_resourceType_5,
	3,	/* Elements count */
	&asn_SPC_resourceType_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_usage_value2enum_20[] = {
	{ 0,	14,	"beamManagement" },
	{ 1,	8,	"codebook" },
	{ 2,	11,	"nonCodebook" },
	{ 3,	16,	"antennaSwitching" }
};
static const unsigned int asn_MAP_usage_enum2value_20[] = {
	3,	/* antennaSwitching(3) */
	0,	/* beamManagement(0) */
	1,	/* codebook(1) */
	2	/* nonCodebook(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_usage_specs_20 = {
	asn_MAP_usage_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_usage_enum2value_20,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_usage_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_usage_20 = {
	"usage",
	"usage",
	&asn_OP_NativeEnumerated,
	asn_DEF_usage_tags_20,
	sizeof(asn_DEF_usage_tags_20)
		/sizeof(asn_DEF_usage_tags_20[0]) - 1, /* 1 */
	asn_DEF_usage_tags_20,	/* Same as above */
	sizeof(asn_DEF_usage_tags_20)
		/sizeof(asn_DEF_usage_tags_20[0]), /* 2 */
	{ &asn_OER_type_usage_constr_20, &asn_PER_type_usage_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_usage_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pathlossReferenceRS_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet__pathlossReferenceRS, choice.ssb_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet__pathlossReferenceRS, choice.csi_RS_Index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-Index"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pathlossReferenceRS_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-RS-Index */
};
static asn_CHOICE_specifics_t asn_SPC_pathlossReferenceRS_specs_27 = {
	sizeof(struct SRS_ResourceSet__pathlossReferenceRS),
	offsetof(struct SRS_ResourceSet__pathlossReferenceRS, _asn_ctx),
	offsetof(struct SRS_ResourceSet__pathlossReferenceRS, present),
	sizeof(((struct SRS_ResourceSet__pathlossReferenceRS *)0)->present),
	asn_MAP_pathlossReferenceRS_tag2el_27,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pathlossReferenceRS_27 = {
	"pathlossReferenceRS",
	"pathlossReferenceRS",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_pathlossReferenceRS_constr_27, &asn_PER_type_pathlossReferenceRS_constr_27, CHOICE_constraint },
	asn_MBR_pathlossReferenceRS_27,
	2,	/* Elements count */
	&asn_SPC_pathlossReferenceRS_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_PowerControlAdjustmentStates_value2enum_30[] = {
	{ 0,	10,	"sameAsFci2" },
	{ 1,	18,	"separateClosedLoop" }
};
static const unsigned int asn_MAP_srs_PowerControlAdjustmentStates_enum2value_30[] = {
	0,	/* sameAsFci2(0) */
	1	/* separateClosedLoop(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_PowerControlAdjustmentStates_specs_30 = {
	asn_MAP_srs_PowerControlAdjustmentStates_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_PowerControlAdjustmentStates_enum2value_30,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_PowerControlAdjustmentStates_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_PowerControlAdjustmentStates_30 = {
	"srs-PowerControlAdjustmentStates",
	"srs-PowerControlAdjustmentStates",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_PowerControlAdjustmentStates_tags_30,
	sizeof(asn_DEF_srs_PowerControlAdjustmentStates_tags_30)
		/sizeof(asn_DEF_srs_PowerControlAdjustmentStates_tags_30[0]) - 1, /* 1 */
	asn_DEF_srs_PowerControlAdjustmentStates_tags_30,	/* Same as above */
	sizeof(asn_DEF_srs_PowerControlAdjustmentStates_tags_30)
		/sizeof(asn_DEF_srs_PowerControlAdjustmentStates_tags_30[0]), /* 2 */
	{ &asn_OER_type_srs_PowerControlAdjustmentStates_constr_30, &asn_PER_type_srs_PowerControlAdjustmentStates_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_PowerControlAdjustmentStates_specs_30	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_ResourceSet_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet, srs_ResourceSetId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ResourceSetId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-ResourceSetId"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet, srs_ResourceIdList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_srs_ResourceIdList_3,
		0,
		{ &asn_OER_memb_srs_ResourceIdList_constr_3, &asn_PER_memb_srs_ResourceIdList_constr_3,  memb_srs_ResourceIdList_constraint_1 },
		0, 0, /* No default value */
		"srs-ResourceIdList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet, resourceType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_resourceType_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ResourceSet, usage),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_usage_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"usage"
		},
	{ ATF_POINTER, 4, offsetof(struct SRS_ResourceSet, alpha),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha"
		},
	{ ATF_POINTER, 3, offsetof(struct SRS_ResourceSet, p0),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_p0_constr_26, &asn_PER_memb_p0_constr_26,  memb_p0_constraint_1 },
		0, 0, /* No default value */
		"p0"
		},
	{ ATF_POINTER, 2, offsetof(struct SRS_ResourceSet, pathlossReferenceRS),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pathlossReferenceRS_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathlossReferenceRS"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_ResourceSet, srs_PowerControlAdjustmentStates),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_PowerControlAdjustmentStates_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-PowerControlAdjustmentStates"
		},
};
static const int asn_MAP_SRS_ResourceSet_oms_1[] = { 1, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SRS_ResourceSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_ResourceSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ResourceSetId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-ResourceIdList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* usage */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* alpha */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p0 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pathlossReferenceRS */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* srs-PowerControlAdjustmentStates */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_ResourceSet_specs_1 = {
	sizeof(struct SRS_ResourceSet),
	offsetof(struct SRS_ResourceSet, _asn_ctx),
	asn_MAP_SRS_ResourceSet_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SRS_ResourceSet_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_ResourceSet = {
	"SRS-ResourceSet",
	"SRS-ResourceSet",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_ResourceSet_tags_1,
	sizeof(asn_DEF_SRS_ResourceSet_tags_1)
		/sizeof(asn_DEF_SRS_ResourceSet_tags_1[0]), /* 1 */
	asn_DEF_SRS_ResourceSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_ResourceSet_tags_1)
		/sizeof(asn_DEF_SRS_ResourceSet_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_ResourceSet_1,
	8,	/* Elements count */
	&asn_SPC_SRS_ResourceSet_specs_1	/* Additional specs */
};

