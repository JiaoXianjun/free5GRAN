/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SRS-PosResourceSet-r16.h"

static int
memb_NativeInteger_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_aperiodicSRS_ResourceTriggerList_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 3)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_srs_PosResourceIdList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p0_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_srs_PosResourceIdList_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_srs_PosResourceIdList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_8 CC_NOTUSED = {
	{ 1, 1 }	/* (1..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_aperiodicSRS_ResourceTriggerList_r16_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_type_aperiodicSRS_ResourceTriggerList_r16_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_aperiodicSRS_ResourceTriggerList_r16_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
static asn_per_constraints_t asn_PER_memb_aperiodicSRS_ResourceTriggerList_r16_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_resourceType_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resourceType_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pathlossReferenceRS_Pos_r16_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pathlossReferenceRS_Pos_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_PosResourceIdList_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_srs_PosResourceIdList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_r16_constr_15 CC_NOTUSED = {
	{ 2, 0 }	/* (-202..24) */,
	-1};
static asn_per_constraints_t asn_PER_memb_p0_r16_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -202,  24 }	/* (-202..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_srs_PosResourceIdList_r16_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SRS_PosResourceId_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_PosResourceIdList_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_PosResourceIdList_r16_specs_3 = {
	sizeof(struct SRS_PosResourceSet_r16__srs_PosResourceIdList_r16),
	offsetof(struct SRS_PosResourceSet_r16__srs_PosResourceIdList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_PosResourceIdList_r16_3 = {
	"srs-PosResourceIdList-r16",
	"srs-PosResourceIdList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_PosResourceIdList_r16_tags_3,
	sizeof(asn_DEF_srs_PosResourceIdList_r16_tags_3)
		/sizeof(asn_DEF_srs_PosResourceIdList_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_srs_PosResourceIdList_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_srs_PosResourceIdList_r16_tags_3)
		/sizeof(asn_DEF_srs_PosResourceIdList_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_srs_PosResourceIdList_r16_constr_3, &asn_PER_type_srs_PosResourceIdList_r16_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_srs_PosResourceIdList_r16_3,
	1,	/* Single element */
	&asn_SPC_srs_PosResourceIdList_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aperiodicSRS_ResourceTriggerList_r16_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_8, &asn_PER_memb_Member_constr_8,  memb_NativeInteger_constraint_7 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_aperiodicSRS_ResourceTriggerList_r16_specs_7 = {
	sizeof(struct SRS_PosResourceSet_r16__resourceType_r16__aperiodic_r16__aperiodicSRS_ResourceTriggerList_r16),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16__aperiodic_r16__aperiodicSRS_ResourceTriggerList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodicSRS_ResourceTriggerList_r16_7 = {
	"aperiodicSRS-ResourceTriggerList-r16",
	"aperiodicSRS-ResourceTriggerList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7,
	sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7)
		/sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7)
		/sizeof(asn_DEF_aperiodicSRS_ResourceTriggerList_r16_tags_7[0]), /* 2 */
	{ &asn_OER_type_aperiodicSRS_ResourceTriggerList_r16_constr_7, &asn_PER_type_aperiodicSRS_ResourceTriggerList_r16_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_aperiodicSRS_ResourceTriggerList_r16_7,
	1,	/* Single element */
	&asn_SPC_aperiodicSRS_ResourceTriggerList_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aperiodic_r16_6[] = {
	{ ATF_POINTER, 1, offsetof(struct SRS_PosResourceSet_r16__resourceType_r16__aperiodic_r16, aperiodicSRS_ResourceTriggerList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_aperiodicSRS_ResourceTriggerList_r16_7,
		0,
		{ &asn_OER_memb_aperiodicSRS_ResourceTriggerList_r16_constr_7, &asn_PER_memb_aperiodicSRS_ResourceTriggerList_r16_constr_7,  memb_aperiodicSRS_ResourceTriggerList_r16_constraint_6 },
		0, 0, /* No default value */
		"aperiodicSRS-ResourceTriggerList-r16"
		},
};
static const int asn_MAP_aperiodic_r16_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_aperiodic_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_aperiodic_r16_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* aperiodicSRS-ResourceTriggerList-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_aperiodic_r16_specs_6 = {
	sizeof(struct SRS_PosResourceSet_r16__resourceType_r16__aperiodic_r16),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16__aperiodic_r16, _asn_ctx),
	asn_MAP_aperiodic_r16_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_aperiodic_r16_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodic_r16_6 = {
	"aperiodic-r16",
	"aperiodic-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_aperiodic_r16_tags_6,
	sizeof(asn_DEF_aperiodic_r16_tags_6)
		/sizeof(asn_DEF_aperiodic_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_aperiodic_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_aperiodic_r16_tags_6)
		/sizeof(asn_DEF_aperiodic_r16_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_aperiodic_r16_6,
	1,	/* Elements count */
	&asn_SPC_aperiodic_r16_specs_6	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_semi_persistent_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_semi_persistent_r16_specs_10 = {
	sizeof(struct SRS_PosResourceSet_r16__resourceType_r16__semi_persistent_r16),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16__semi_persistent_r16, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_semi_persistent_r16_10 = {
	"semi-persistent-r16",
	"semi-persistent-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_semi_persistent_r16_tags_10,
	sizeof(asn_DEF_semi_persistent_r16_tags_10)
		/sizeof(asn_DEF_semi_persistent_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_semi_persistent_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_semi_persistent_r16_tags_10)
		/sizeof(asn_DEF_semi_persistent_r16_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_semi_persistent_r16_specs_10	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_periodic_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_periodic_r16_specs_12 = {
	sizeof(struct SRS_PosResourceSet_r16__resourceType_r16__periodic_r16),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16__periodic_r16, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodic_r16_12 = {
	"periodic-r16",
	"periodic-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_periodic_r16_tags_12,
	sizeof(asn_DEF_periodic_r16_tags_12)
		/sizeof(asn_DEF_periodic_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_periodic_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_periodic_r16_tags_12)
		/sizeof(asn_DEF_periodic_r16_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_periodic_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceType_r16_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__resourceType_r16, choice.aperiodic_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_aperiodic_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodic-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__resourceType_r16, choice.semi_persistent_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_semi_persistent_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semi-persistent-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__resourceType_r16, choice.periodic_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_periodic_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodic-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_resourceType_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodic-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* semi-persistent-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* periodic-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_resourceType_r16_specs_5 = {
	sizeof(struct SRS_PosResourceSet_r16__resourceType_r16),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16, _asn_ctx),
	offsetof(struct SRS_PosResourceSet_r16__resourceType_r16, present),
	sizeof(((struct SRS_PosResourceSet_r16__resourceType_r16 *)0)->present),
	asn_MAP_resourceType_r16_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceType_r16_5 = {
	"resourceType-r16",
	"resourceType-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_resourceType_r16_constr_5, &asn_PER_type_resourceType_r16_constr_5, CHOICE_constraint },
	asn_MBR_resourceType_r16_5,
	3,	/* Elements count */
	&asn_SPC_resourceType_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pathlossReferenceRS_Pos_r16_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16, choice.ssb_IndexServing_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-IndexServing-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16, choice.ssb_Ncell_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_InfoNcell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-Ncell-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16, choice.dl_PRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PRS_Info_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pathlossReferenceRS_Pos_r16_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-IndexServing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssb-Ncell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-PRS-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_pathlossReferenceRS_Pos_r16_specs_16 = {
	sizeof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16),
	offsetof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16, _asn_ctx),
	offsetof(struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16, present),
	sizeof(((struct SRS_PosResourceSet_r16__pathlossReferenceRS_Pos_r16 *)0)->present),
	asn_MAP_pathlossReferenceRS_Pos_r16_tag2el_16,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pathlossReferenceRS_Pos_r16_16 = {
	"pathlossReferenceRS-Pos-r16",
	"pathlossReferenceRS-Pos-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_pathlossReferenceRS_Pos_r16_constr_16, &asn_PER_type_pathlossReferenceRS_Pos_r16_constr_16, CHOICE_constraint },
	asn_MBR_pathlossReferenceRS_Pos_r16_16,
	3,	/* Elements count */
	&asn_SPC_pathlossReferenceRS_Pos_r16_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_PosResourceSet_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16, srs_PosResourceSetId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_PosResourceSetId_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-PosResourceSetId-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_PosResourceSet_r16, srs_PosResourceIdList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_srs_PosResourceIdList_r16_3,
		0,
		{ &asn_OER_memb_srs_PosResourceIdList_r16_constr_3, &asn_PER_memb_srs_PosResourceIdList_r16_constr_3,  memb_srs_PosResourceIdList_r16_constraint_1 },
		0, 0, /* No default value */
		"srs-PosResourceIdList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResourceSet_r16, resourceType_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_resourceType_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceType-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SRS_PosResourceSet_r16, alpha_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SRS_PosResourceSet_r16, p0_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_p0_r16_constr_15, &asn_PER_memb_p0_r16_constr_15,  memb_p0_r16_constraint_1 },
		0, 0, /* No default value */
		"p0-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_PosResourceSet_r16, pathlossReferenceRS_Pos_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pathlossReferenceRS_Pos_r16_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathlossReferenceRS-Pos-r16"
		},
};
static const int asn_MAP_SRS_PosResourceSet_r16_oms_1[] = { 1, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SRS_PosResourceSet_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_PosResourceSet_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-PosResourceSetId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-PosResourceIdList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alpha-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p0-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* pathlossReferenceRS-Pos-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_PosResourceSet_r16_specs_1 = {
	sizeof(struct SRS_PosResourceSet_r16),
	offsetof(struct SRS_PosResourceSet_r16, _asn_ctx),
	asn_MAP_SRS_PosResourceSet_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SRS_PosResourceSet_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_PosResourceSet_r16 = {
	"SRS-PosResourceSet-r16",
	"SRS-PosResourceSet-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_PosResourceSet_r16_tags_1,
	sizeof(asn_DEF_SRS_PosResourceSet_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResourceSet_r16_tags_1[0]), /* 1 */
	asn_DEF_SRS_PosResourceSet_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_PosResourceSet_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResourceSet_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_PosResourceSet_r16_1,
	6,	/* Elements count */
	&asn_SPC_SRS_PosResourceSet_r16_specs_1	/* Additional specs */
};

