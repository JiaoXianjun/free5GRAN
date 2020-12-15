/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "PUSCH-PowerControl-v1610.h"

static int
memb_olpc_ParameterSetDCI_0_1_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
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
memb_olpc_ParameterSetDCI_0_2_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
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
memb_pathlossReferenceRSToAddModList2_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 60)) {
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
memb_pathlossReferenceRSToReleaseList2_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 60)) {
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
memb_p0_PUSCH_SetList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_pathlossReferenceRSToAddModList2_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..60)) */};
static asn_per_constraints_t asn_PER_type_pathlossReferenceRSToAddModList2_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (SIZE(1..60)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pathlossReferenceRSToReleaseList2_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..60)) */};
static asn_per_constraints_t asn_PER_type_pathlossReferenceRSToReleaseList2_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (SIZE(1..60)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_p0_PUSCH_SetList_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_p0_PUSCH_SetList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_olpc_ParameterSetDCI_0_1_r16_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_olpc_ParameterSetDCI_0_1_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_olpc_ParameterSetDCI_0_2_r16_constr_10 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_olpc_ParameterSetDCI_0_2_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pathlossReferenceRSToAddModList2_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..60)) */};
static asn_per_constraints_t asn_PER_memb_pathlossReferenceRSToAddModList2_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (SIZE(1..60)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pathlossReferenceRSToReleaseList2_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..60)) */};
static asn_per_constraints_t asn_PER_memb_pathlossReferenceRSToReleaseList2_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (SIZE(1..60)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_PUSCH_SetList_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_p0_PUSCH_SetList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_pathlossReferenceRSToAddModList2_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PUSCH_PathlossReferenceRS_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pathlossReferenceRSToAddModList2_r16_specs_2 = {
	sizeof(struct PUSCH_PowerControl_v1610__pathlossReferenceRSToAddModList2_r16),
	offsetof(struct PUSCH_PowerControl_v1610__pathlossReferenceRSToAddModList2_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pathlossReferenceRSToAddModList2_r16_2 = {
	"pathlossReferenceRSToAddModList2-r16",
	"pathlossReferenceRSToAddModList2-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2,
	sizeof(asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2)
		/sizeof(asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2)
		/sizeof(asn_DEF_pathlossReferenceRSToAddModList2_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_pathlossReferenceRSToAddModList2_r16_constr_2, &asn_PER_type_pathlossReferenceRSToAddModList2_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_pathlossReferenceRSToAddModList2_r16_2,
	1,	/* Single element */
	&asn_SPC_pathlossReferenceRSToAddModList2_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pathlossReferenceRSToReleaseList2_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PUSCH_PathlossReferenceRS_Id_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pathlossReferenceRSToReleaseList2_r16_specs_4 = {
	sizeof(struct PUSCH_PowerControl_v1610__pathlossReferenceRSToReleaseList2_r16),
	offsetof(struct PUSCH_PowerControl_v1610__pathlossReferenceRSToReleaseList2_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pathlossReferenceRSToReleaseList2_r16_4 = {
	"pathlossReferenceRSToReleaseList2-r16",
	"pathlossReferenceRSToReleaseList2-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4,
	sizeof(asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4)
		/sizeof(asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4)
		/sizeof(asn_DEF_pathlossReferenceRSToReleaseList2_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_pathlossReferenceRSToReleaseList2_r16_constr_4, &asn_PER_type_pathlossReferenceRSToReleaseList2_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_pathlossReferenceRSToReleaseList2_r16_4,
	1,	/* Single element */
	&asn_SPC_pathlossReferenceRSToReleaseList2_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p0_PUSCH_SetList_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_P0_PUSCH_Set_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_p0_PUSCH_SetList_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_p0_PUSCH_SetList_r16_specs_6 = {
	sizeof(struct PUSCH_PowerControl_v1610__p0_PUSCH_SetList_r16),
	offsetof(struct PUSCH_PowerControl_v1610__p0_PUSCH_SetList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p0_PUSCH_SetList_r16_6 = {
	"p0-PUSCH-SetList-r16",
	"p0-PUSCH-SetList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_p0_PUSCH_SetList_r16_tags_6,
	sizeof(asn_DEF_p0_PUSCH_SetList_r16_tags_6)
		/sizeof(asn_DEF_p0_PUSCH_SetList_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_p0_PUSCH_SetList_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_p0_PUSCH_SetList_r16_tags_6)
		/sizeof(asn_DEF_p0_PUSCH_SetList_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_p0_PUSCH_SetList_r16_constr_6, &asn_PER_type_p0_PUSCH_SetList_r16_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_p0_PUSCH_SetList_r16_6,
	1,	/* Single element */
	&asn_SPC_p0_PUSCH_SetList_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_olpc_ParameterSet_8[] = {
	{ ATF_POINTER, 2, offsetof(struct PUSCH_PowerControl_v1610__olpc_ParameterSet, olpc_ParameterSetDCI_0_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_olpc_ParameterSetDCI_0_1_r16_constr_9, &asn_PER_memb_olpc_ParameterSetDCI_0_1_r16_constr_9,  memb_olpc_ParameterSetDCI_0_1_r16_constraint_8 },
		0, 0, /* No default value */
		"olpc-ParameterSetDCI-0-1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_PowerControl_v1610__olpc_ParameterSet, olpc_ParameterSetDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_olpc_ParameterSetDCI_0_2_r16_constr_10, &asn_PER_memb_olpc_ParameterSetDCI_0_2_r16_constr_10,  memb_olpc_ParameterSetDCI_0_2_r16_constraint_8 },
		0, 0, /* No default value */
		"olpc-ParameterSetDCI-0-2-r16"
		},
};
static const int asn_MAP_olpc_ParameterSet_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_olpc_ParameterSet_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_olpc_ParameterSet_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* olpc-ParameterSetDCI-0-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* olpc-ParameterSetDCI-0-2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_olpc_ParameterSet_specs_8 = {
	sizeof(struct PUSCH_PowerControl_v1610__olpc_ParameterSet),
	offsetof(struct PUSCH_PowerControl_v1610__olpc_ParameterSet, _asn_ctx),
	asn_MAP_olpc_ParameterSet_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_olpc_ParameterSet_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_olpc_ParameterSet_8 = {
	"olpc-ParameterSet",
	"olpc-ParameterSet",
	&asn_OP_SEQUENCE,
	asn_DEF_olpc_ParameterSet_tags_8,
	sizeof(asn_DEF_olpc_ParameterSet_tags_8)
		/sizeof(asn_DEF_olpc_ParameterSet_tags_8[0]) - 1, /* 1 */
	asn_DEF_olpc_ParameterSet_tags_8,	/* Same as above */
	sizeof(asn_DEF_olpc_ParameterSet_tags_8)
		/sizeof(asn_DEF_olpc_ParameterSet_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_olpc_ParameterSet_8,
	2,	/* Elements count */
	&asn_SPC_olpc_ParameterSet_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_PowerControl_v1610_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PUSCH_PowerControl_v1610, pathlossReferenceRSToAddModList2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_pathlossReferenceRSToAddModList2_r16_2,
		0,
		{ &asn_OER_memb_pathlossReferenceRSToAddModList2_r16_constr_2, &asn_PER_memb_pathlossReferenceRSToAddModList2_r16_constr_2,  memb_pathlossReferenceRSToAddModList2_r16_constraint_1 },
		0, 0, /* No default value */
		"pathlossReferenceRSToAddModList2-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct PUSCH_PowerControl_v1610, pathlossReferenceRSToReleaseList2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_pathlossReferenceRSToReleaseList2_r16_4,
		0,
		{ &asn_OER_memb_pathlossReferenceRSToReleaseList2_r16_constr_4, &asn_PER_memb_pathlossReferenceRSToReleaseList2_r16_constr_4,  memb_pathlossReferenceRSToReleaseList2_r16_constraint_1 },
		0, 0, /* No default value */
		"pathlossReferenceRSToReleaseList2-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_PowerControl_v1610, p0_PUSCH_SetList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_p0_PUSCH_SetList_r16_6,
		0,
		{ &asn_OER_memb_p0_PUSCH_SetList_r16_constr_6, &asn_PER_memb_p0_PUSCH_SetList_r16_constr_6,  memb_p0_PUSCH_SetList_r16_constraint_1 },
		0, 0, /* No default value */
		"p0-PUSCH-SetList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_PowerControl_v1610, olpc_ParameterSet),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_olpc_ParameterSet_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"olpc-ParameterSet"
		},
};
static const int asn_MAP_PUSCH_PowerControl_v1610_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PUSCH_PowerControl_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_PowerControl_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pathlossReferenceRSToAddModList2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pathlossReferenceRSToReleaseList2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-PUSCH-SetList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* olpc-ParameterSet */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_PowerControl_v1610_specs_1 = {
	sizeof(struct PUSCH_PowerControl_v1610),
	offsetof(struct PUSCH_PowerControl_v1610, _asn_ctx),
	asn_MAP_PUSCH_PowerControl_v1610_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PUSCH_PowerControl_v1610_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_PowerControl_v1610 = {
	"PUSCH-PowerControl-v1610",
	"PUSCH-PowerControl-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_PowerControl_v1610_tags_1,
	sizeof(asn_DEF_PUSCH_PowerControl_v1610_tags_1)
		/sizeof(asn_DEF_PUSCH_PowerControl_v1610_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_PowerControl_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_PowerControl_v1610_tags_1)
		/sizeof(asn_DEF_PUSCH_PowerControl_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_PowerControl_v1610_1,
	4,	/* Elements count */
	&asn_SPC_PUSCH_PowerControl_v1610_specs_1	/* Additional specs */
};

