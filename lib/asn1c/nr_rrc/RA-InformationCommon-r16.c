/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "RA-InformationCommon-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_locationAndBandwidth_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 37949)) {
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
memb_msg1_FrequencyStart_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 274)) {
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
memb_msg1_FrequencyStartCFRA_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 274)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_msg1_FDM_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_msg1_FDM_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_msg1_FDMCFRA_r16_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_msg1_FDMCFRA_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_locationAndBandwidth_r16_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..37949) */,
	-1};
static asn_per_constraints_t asn_PER_memb_locationAndBandwidth_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  37949 }	/* (0..37949) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_msg1_FrequencyStart_r16_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..274) */,
	-1};
static asn_per_constraints_t asn_PER_memb_msg1_FrequencyStart_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  274 }	/* (0..274) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_msg1_FrequencyStartCFRA_r16_constr_6 CC_NOTUSED = {
	{ 2, 1 }	/* (0..274) */,
	-1};
static asn_per_constraints_t asn_PER_memb_msg1_FrequencyStartCFRA_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  274 }	/* (0..274) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_msg1_FDM_r16_value2enum_9[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" },
	{ 3,	5,	"eight" }
};
static const unsigned int asn_MAP_msg1_FDM_r16_enum2value_9[] = {
	3,	/* eight(3) */
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_msg1_FDM_r16_specs_9 = {
	asn_MAP_msg1_FDM_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_msg1_FDM_r16_enum2value_9,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_msg1_FDM_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msg1_FDM_r16_9 = {
	"msg1-FDM-r16",
	"msg1-FDM-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_msg1_FDM_r16_tags_9,
	sizeof(asn_DEF_msg1_FDM_r16_tags_9)
		/sizeof(asn_DEF_msg1_FDM_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_msg1_FDM_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_msg1_FDM_r16_tags_9)
		/sizeof(asn_DEF_msg1_FDM_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_msg1_FDM_r16_constr_9, &asn_PER_type_msg1_FDM_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_msg1_FDM_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_msg1_FDMCFRA_r16_value2enum_14[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" },
	{ 3,	5,	"eight" }
};
static const unsigned int asn_MAP_msg1_FDMCFRA_r16_enum2value_14[] = {
	3,	/* eight(3) */
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_msg1_FDMCFRA_r16_specs_14 = {
	asn_MAP_msg1_FDMCFRA_r16_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_msg1_FDMCFRA_r16_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_msg1_FDMCFRA_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msg1_FDMCFRA_r16_14 = {
	"msg1-FDMCFRA-r16",
	"msg1-FDMCFRA-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_msg1_FDMCFRA_r16_tags_14,
	sizeof(asn_DEF_msg1_FDMCFRA_r16_tags_14)
		/sizeof(asn_DEF_msg1_FDMCFRA_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_msg1_FDMCFRA_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_msg1_FDMCFRA_r16_tags_14)
		/sizeof(asn_DEF_msg1_FDMCFRA_r16_tags_14[0]), /* 2 */
	{ &asn_OER_type_msg1_FDMCFRA_r16_constr_14, &asn_PER_type_msg1_FDMCFRA_r16_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_msg1_FDMCFRA_r16_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RA_InformationCommon_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RA_InformationCommon_r16, absoluteFrequencyPointA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteFrequencyPointA-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RA_InformationCommon_r16, locationAndBandwidth_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_locationAndBandwidth_r16_constr_3, &asn_PER_memb_locationAndBandwidth_r16_constr_3,  memb_locationAndBandwidth_r16_constraint_1 },
		0, 0, /* No default value */
		"locationAndBandwidth-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RA_InformationCommon_r16, subcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacing-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct RA_InformationCommon_r16, msg1_FrequencyStart_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_msg1_FrequencyStart_r16_constr_5, &asn_PER_memb_msg1_FrequencyStart_r16_constr_5,  memb_msg1_FrequencyStart_r16_constraint_1 },
		0, 0, /* No default value */
		"msg1-FrequencyStart-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct RA_InformationCommon_r16, msg1_FrequencyStartCFRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_msg1_FrequencyStartCFRA_r16_constr_6, &asn_PER_memb_msg1_FrequencyStartCFRA_r16_constr_6,  memb_msg1_FrequencyStartCFRA_r16_constraint_1 },
		0, 0, /* No default value */
		"msg1-FrequencyStartCFRA-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct RA_InformationCommon_r16, msg1_SubcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-SubcarrierSpacing-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct RA_InformationCommon_r16, msg1_SubcarrierSpacingCFRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-SubcarrierSpacingCFRA-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct RA_InformationCommon_r16, msg1_FDM_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_msg1_FDM_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-FDM-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RA_InformationCommon_r16, msg1_FDMCFRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_msg1_FDMCFRA_r16_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-FDMCFRA-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RA_InformationCommon_r16, perRAInfoList_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PerRAInfoList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"perRAInfoList-r16"
		},
};
static const int asn_MAP_RA_InformationCommon_r16_oms_1[] = { 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_RA_InformationCommon_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RA_InformationCommon_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteFrequencyPointA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationAndBandwidth-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* msg1-FrequencyStart-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* msg1-FrequencyStartCFRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* msg1-SubcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* msg1-SubcarrierSpacingCFRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* msg1-FDM-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* msg1-FDMCFRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* perRAInfoList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_RA_InformationCommon_r16_specs_1 = {
	sizeof(struct RA_InformationCommon_r16),
	offsetof(struct RA_InformationCommon_r16, _asn_ctx),
	asn_MAP_RA_InformationCommon_r16_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RA_InformationCommon_r16_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RA_InformationCommon_r16 = {
	"RA-InformationCommon-r16",
	"RA-InformationCommon-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_RA_InformationCommon_r16_tags_1,
	sizeof(asn_DEF_RA_InformationCommon_r16_tags_1)
		/sizeof(asn_DEF_RA_InformationCommon_r16_tags_1[0]), /* 1 */
	asn_DEF_RA_InformationCommon_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_RA_InformationCommon_r16_tags_1)
		/sizeof(asn_DEF_RA_InformationCommon_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RA_InformationCommon_r16_1,
	10,	/* Elements count */
	&asn_SPC_RA_InformationCommon_r16_specs_1	/* Additional specs */
};

