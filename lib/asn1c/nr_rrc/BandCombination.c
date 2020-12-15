/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BandCombination.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_bandList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_supportedBandwidthCombinationSet_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_bandList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_powerClass_v1530_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_powerClass_v1530_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bandList_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_bandList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_supportedBandwidthCombinationSet_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_supportedBandwidthCombinationSet_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandList_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_BandParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandList_specs_2 = {
	sizeof(struct BandCombination__bandList),
	offsetof(struct BandCombination__bandList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandList_2 = {
	"bandList",
	"bandList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandList_tags_2,
	sizeof(asn_DEF_bandList_tags_2)
		/sizeof(asn_DEF_bandList_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandList_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandList_tags_2)
		/sizeof(asn_DEF_bandList_tags_2[0]), /* 2 */
	{ &asn_OER_type_bandList_constr_2, &asn_PER_type_bandList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_bandList_2,
	1,	/* Single element */
	&asn_SPC_bandList_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_powerClass_v1530_value2enum_9[] = {
	{ 0,	3,	"pc2" }
};
static const unsigned int asn_MAP_powerClass_v1530_enum2value_9[] = {
	0	/* pc2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_powerClass_v1530_specs_9 = {
	asn_MAP_powerClass_v1530_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_powerClass_v1530_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_powerClass_v1530_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerClass_v1530_9 = {
	"powerClass-v1530",
	"powerClass-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_powerClass_v1530_tags_9,
	sizeof(asn_DEF_powerClass_v1530_tags_9)
		/sizeof(asn_DEF_powerClass_v1530_tags_9[0]) - 1, /* 1 */
	asn_DEF_powerClass_v1530_tags_9,	/* Same as above */
	sizeof(asn_DEF_powerClass_v1530_tags_9)
		/sizeof(asn_DEF_powerClass_v1530_tags_9[0]), /* 2 */
	{ &asn_OER_type_powerClass_v1530_constr_9, &asn_PER_type_powerClass_v1530_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerClass_v1530_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombination_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombination, bandList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandList_2,
		0,
		{ &asn_OER_memb_bandList_constr_2, &asn_PER_memb_bandList_constr_2,  memb_bandList_constraint_1 },
		0, 0, /* No default value */
		"bandList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombination, featureSetCombination),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeatureSetCombinationId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"featureSetCombination"
		},
	{ ATF_POINTER, 5, offsetof(struct BandCombination, ca_ParametersEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersEUTRA"
		},
	{ ATF_POINTER, 4, offsetof(struct BandCombination, ca_ParametersNR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR"
		},
	{ ATF_POINTER, 3, offsetof(struct BandCombination, mrdc_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MRDC_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct BandCombination, supportedBandwidthCombinationSet),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_supportedBandwidthCombinationSet_constr_8, &asn_PER_memb_supportedBandwidthCombinationSet_constr_8,  memb_supportedBandwidthCombinationSet_constraint_1 },
		0, 0, /* No default value */
		"supportedBandwidthCombinationSet"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombination, powerClass_v1530),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerClass_v1530_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerClass-v1530"
		},
};
static const int asn_MAP_BandCombination_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_BandCombination_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombination_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureSetCombination */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ca-ParametersEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ca-ParametersNR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mrdc-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* supportedBandwidthCombinationSet */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* powerClass-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombination_specs_1 = {
	sizeof(struct BandCombination),
	offsetof(struct BandCombination, _asn_ctx),
	asn_MAP_BandCombination_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_BandCombination_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombination = {
	"BandCombination",
	"BandCombination",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombination_tags_1,
	sizeof(asn_DEF_BandCombination_tags_1)
		/sizeof(asn_DEF_BandCombination_tags_1[0]), /* 1 */
	asn_DEF_BandCombination_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombination_tags_1)
		/sizeof(asn_DEF_BandCombination_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombination_1,
	7,	/* Elements count */
	&asn_SPC_BandCombination_specs_1	/* Additional specs */
};

