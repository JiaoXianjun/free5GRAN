/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "DCP-Config-r16.h"

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
memb_ps_Offset_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 120)) {
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
memb_sizeDCI_2_6_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 140)) {
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
memb_ps_PositionDCI_2_6_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 139)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ps_WakeUp_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ps_WakeUp_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ps_TransmitPeriodicL1_RSRP_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ps_TransmitPeriodicL1_RSRP_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ps_TransmitOtherPeriodicCSI_r16_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ps_TransmitOtherPeriodicCSI_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ps_Offset_r16_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..120) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ps_Offset_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  120 }	/* (1..120) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sizeDCI_2_6_r16_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..140) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sizeDCI_2_6_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  140 }	/* (1..140) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ps_PositionDCI_2_6_r16_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..139) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ps_PositionDCI_2_6_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  139 }	/* (0..139) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ps_WakeUp_r16_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ps_WakeUp_r16_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ps_WakeUp_r16_specs_6 = {
	asn_MAP_ps_WakeUp_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ps_WakeUp_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ps_WakeUp_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ps_WakeUp_r16_6 = {
	"ps-WakeUp-r16",
	"ps-WakeUp-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ps_WakeUp_r16_tags_6,
	sizeof(asn_DEF_ps_WakeUp_r16_tags_6)
		/sizeof(asn_DEF_ps_WakeUp_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_ps_WakeUp_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_ps_WakeUp_r16_tags_6)
		/sizeof(asn_DEF_ps_WakeUp_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_ps_WakeUp_r16_constr_6, &asn_PER_type_ps_WakeUp_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ps_WakeUp_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ps_TransmitPeriodicL1_RSRP_r16_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ps_TransmitPeriodicL1_RSRP_r16_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ps_TransmitPeriodicL1_RSRP_r16_specs_8 = {
	asn_MAP_ps_TransmitPeriodicL1_RSRP_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ps_TransmitPeriodicL1_RSRP_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_8 = {
	"ps-TransmitPeriodicL1-RSRP-r16",
	"ps-TransmitPeriodicL1-RSRP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8,
	sizeof(asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8)
		/sizeof(asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8)
		/sizeof(asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_ps_TransmitPeriodicL1_RSRP_r16_constr_8, &asn_PER_type_ps_TransmitPeriodicL1_RSRP_r16_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ps_TransmitPeriodicL1_RSRP_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ps_TransmitOtherPeriodicCSI_r16_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ps_TransmitOtherPeriodicCSI_r16_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ps_TransmitOtherPeriodicCSI_r16_specs_10 = {
	asn_MAP_ps_TransmitOtherPeriodicCSI_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ps_TransmitOtherPeriodicCSI_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ps_TransmitOtherPeriodicCSI_r16_10 = {
	"ps-TransmitOtherPeriodicCSI-r16",
	"ps-TransmitOtherPeriodicCSI-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10,
	sizeof(asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10)
		/sizeof(asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10)
		/sizeof(asn_DEF_ps_TransmitOtherPeriodicCSI_r16_tags_10[0]), /* 2 */
	{ &asn_OER_type_ps_TransmitOtherPeriodicCSI_r16_constr_10, &asn_PER_type_ps_TransmitOtherPeriodicCSI_r16_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ps_TransmitOtherPeriodicCSI_r16_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DCP_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DCP_Config_r16, ps_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ps-RNTI-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DCP_Config_r16, ps_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ps_Offset_r16_constr_3, &asn_PER_memb_ps_Offset_r16_constr_3,  memb_ps_Offset_r16_constraint_1 },
		0, 0, /* No default value */
		"ps-Offset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DCP_Config_r16, sizeDCI_2_6_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sizeDCI_2_6_r16_constr_4, &asn_PER_memb_sizeDCI_2_6_r16_constr_4,  memb_sizeDCI_2_6_r16_constraint_1 },
		0, 0, /* No default value */
		"sizeDCI-2-6-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DCP_Config_r16, ps_PositionDCI_2_6_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ps_PositionDCI_2_6_r16_constr_5, &asn_PER_memb_ps_PositionDCI_2_6_r16_constr_5,  memb_ps_PositionDCI_2_6_r16_constraint_1 },
		0, 0, /* No default value */
		"ps-PositionDCI-2-6-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct DCP_Config_r16, ps_WakeUp_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ps_WakeUp_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ps-WakeUp-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct DCP_Config_r16, ps_TransmitPeriodicL1_RSRP_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ps_TransmitPeriodicL1_RSRP_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ps-TransmitPeriodicL1-RSRP-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct DCP_Config_r16, ps_TransmitOtherPeriodicCSI_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ps_TransmitOtherPeriodicCSI_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ps-TransmitOtherPeriodicCSI-r16"
		},
};
static const int asn_MAP_DCP_Config_r16_oms_1[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_DCP_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DCP_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ps-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ps-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sizeDCI-2-6-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ps-PositionDCI-2-6-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ps-WakeUp-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ps-TransmitPeriodicL1-RSRP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ps-TransmitOtherPeriodicCSI-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_DCP_Config_r16_specs_1 = {
	sizeof(struct DCP_Config_r16),
	offsetof(struct DCP_Config_r16, _asn_ctx),
	asn_MAP_DCP_Config_r16_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_DCP_Config_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DCP_Config_r16 = {
	"DCP-Config-r16",
	"DCP-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_DCP_Config_r16_tags_1,
	sizeof(asn_DEF_DCP_Config_r16_tags_1)
		/sizeof(asn_DEF_DCP_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_DCP_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_DCP_Config_r16_tags_1)
		/sizeof(asn_DEF_DCP_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DCP_Config_r16_1,
	7,	/* Elements count */
	&asn_SPC_DCP_Config_r16_specs_1	/* Additional specs */
};

