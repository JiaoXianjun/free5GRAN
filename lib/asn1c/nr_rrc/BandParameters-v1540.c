/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "BandParameters-v1540.h"

static int
memb_srs_SwitchingTimesListNR_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_srs_SwitchingTimesListEUTRA_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
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
memb_txSwitchImpactToRx_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_txSwitchWithAnotherBand_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_srs_SwitchingTimesListNR_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_srs_SwitchingTimesListNR_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_SwitchingTimesListNR_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_srs_SwitchingTimesListNR_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_SwitchingTimesListEUTRA_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_srs_SwitchingTimesListEUTRA_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_srs_SwitchingTimesListEUTRA_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_memb_srs_SwitchingTimesListEUTRA_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_srs_CarrierSwitch_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_srs_CarrierSwitch_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_supportedSRS_TxPortSwitch_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_supportedSRS_TxPortSwitch_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_txSwitchImpactToRx_constr_19 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_txSwitchImpactToRx_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_txSwitchWithAnotherBand_constr_20 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_txSwitchWithAnotherBand_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_srs_SwitchingTimesListNR_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_SwitchingTimeNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_SwitchingTimesListNR_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_SwitchingTimesListNR_specs_4 = {
	sizeof(struct BandParameters_v1540__srs_CarrierSwitch__nr__srs_SwitchingTimesListNR),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch__nr__srs_SwitchingTimesListNR, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_SwitchingTimesListNR_4 = {
	"srs-SwitchingTimesListNR",
	"srs-SwitchingTimesListNR",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_SwitchingTimesListNR_tags_4,
	sizeof(asn_DEF_srs_SwitchingTimesListNR_tags_4)
		/sizeof(asn_DEF_srs_SwitchingTimesListNR_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_SwitchingTimesListNR_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_SwitchingTimesListNR_tags_4)
		/sizeof(asn_DEF_srs_SwitchingTimesListNR_tags_4[0]), /* 2 */
	{ &asn_OER_type_srs_SwitchingTimesListNR_constr_4, &asn_PER_type_srs_SwitchingTimesListNR_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_srs_SwitchingTimesListNR_4,
	1,	/* Single element */
	&asn_SPC_srs_SwitchingTimesListNR_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_v1540__srs_CarrierSwitch__nr, srs_SwitchingTimesListNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_srs_SwitchingTimesListNR_4,
		0,
		{ &asn_OER_memb_srs_SwitchingTimesListNR_constr_4, &asn_PER_memb_srs_SwitchingTimesListNR_constr_4,  memb_srs_SwitchingTimesListNR_constraint_3 },
		0, 0, /* No default value */
		"srs-SwitchingTimesListNR"
		},
};
static const ber_tlv_tag_t asn_DEF_nr_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nr_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-SwitchingTimesListNR */
};
static asn_SEQUENCE_specifics_t asn_SPC_nr_specs_3 = {
	sizeof(struct BandParameters_v1540__srs_CarrierSwitch__nr),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch__nr, _asn_ctx),
	asn_MAP_nr_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_3 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_nr_tags_3,
	sizeof(asn_DEF_nr_tags_3)
		/sizeof(asn_DEF_nr_tags_3[0]) - 1, /* 1 */
	asn_DEF_nr_tags_3,	/* Same as above */
	sizeof(asn_DEF_nr_tags_3)
		/sizeof(asn_DEF_nr_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nr_3,
	1,	/* Elements count */
	&asn_SPC_nr_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_SwitchingTimesListEUTRA_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_SwitchingTimeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_SwitchingTimesListEUTRA_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_SwitchingTimesListEUTRA_specs_7 = {
	sizeof(struct BandParameters_v1540__srs_CarrierSwitch__eutra__srs_SwitchingTimesListEUTRA),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch__eutra__srs_SwitchingTimesListEUTRA, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_SwitchingTimesListEUTRA_7 = {
	"srs-SwitchingTimesListEUTRA",
	"srs-SwitchingTimesListEUTRA",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_SwitchingTimesListEUTRA_tags_7,
	sizeof(asn_DEF_srs_SwitchingTimesListEUTRA_tags_7)
		/sizeof(asn_DEF_srs_SwitchingTimesListEUTRA_tags_7[0]) - 1, /* 1 */
	asn_DEF_srs_SwitchingTimesListEUTRA_tags_7,	/* Same as above */
	sizeof(asn_DEF_srs_SwitchingTimesListEUTRA_tags_7)
		/sizeof(asn_DEF_srs_SwitchingTimesListEUTRA_tags_7[0]), /* 2 */
	{ &asn_OER_type_srs_SwitchingTimesListEUTRA_constr_7, &asn_PER_type_srs_SwitchingTimesListEUTRA_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_srs_SwitchingTimesListEUTRA_7,
	1,	/* Single element */
	&asn_SPC_srs_SwitchingTimesListEUTRA_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eutra_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_v1540__srs_CarrierSwitch__eutra, srs_SwitchingTimesListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_srs_SwitchingTimesListEUTRA_7,
		0,
		{ &asn_OER_memb_srs_SwitchingTimesListEUTRA_constr_7, &asn_PER_memb_srs_SwitchingTimesListEUTRA_constr_7,  memb_srs_SwitchingTimesListEUTRA_constraint_6 },
		0, 0, /* No default value */
		"srs-SwitchingTimesListEUTRA"
		},
};
static const ber_tlv_tag_t asn_DEF_eutra_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eutra_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-SwitchingTimesListEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_eutra_specs_6 = {
	sizeof(struct BandParameters_v1540__srs_CarrierSwitch__eutra),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch__eutra, _asn_ctx),
	asn_MAP_eutra_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_6 = {
	"eutra",
	"eutra",
	&asn_OP_SEQUENCE,
	asn_DEF_eutra_tags_6,
	sizeof(asn_DEF_eutra_tags_6)
		/sizeof(asn_DEF_eutra_tags_6[0]) - 1, /* 1 */
	asn_DEF_eutra_tags_6,	/* Same as above */
	sizeof(asn_DEF_eutra_tags_6)
		/sizeof(asn_DEF_eutra_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eutra_6,
	1,	/* Elements count */
	&asn_SPC_eutra_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_CarrierSwitch_2[] = {
	{ ATF_POINTER, 0, offsetof(struct BandParameters_v1540__srs_CarrierSwitch, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nr_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
	{ ATF_POINTER, 0, offsetof(struct BandParameters_v1540__srs_CarrierSwitch, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eutra_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_srs_CarrierSwitch_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra */
};
static asn_CHOICE_specifics_t asn_SPC_srs_CarrierSwitch_specs_2 = {
	sizeof(struct BandParameters_v1540__srs_CarrierSwitch),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch, _asn_ctx),
	offsetof(struct BandParameters_v1540__srs_CarrierSwitch, present),
	sizeof(((struct BandParameters_v1540__srs_CarrierSwitch *)0)->present),
	asn_MAP_srs_CarrierSwitch_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_CarrierSwitch_2 = {
	"srs-CarrierSwitch",
	"srs-CarrierSwitch",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_srs_CarrierSwitch_constr_2, &asn_PER_type_srs_CarrierSwitch_constr_2, CHOICE_constraint },
	asn_MBR_srs_CarrierSwitch_2,
	2,	/* Elements count */
	&asn_SPC_srs_CarrierSwitch_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportedSRS_TxPortSwitch_value2enum_10[] = {
	{ 0,	4,	"t1r2" },
	{ 1,	4,	"t1r4" },
	{ 2,	4,	"t2r4" },
	{ 3,	9,	"t1r4-t2r4" },
	{ 4,	4,	"t1r1" },
	{ 5,	4,	"t2r2" },
	{ 6,	4,	"t4r4" },
	{ 7,	12,	"notSupported" }
};
static const unsigned int asn_MAP_supportedSRS_TxPortSwitch_enum2value_10[] = {
	7,	/* notSupported(7) */
	4,	/* t1r1(4) */
	0,	/* t1r2(0) */
	1,	/* t1r4(1) */
	3,	/* t1r4-t2r4(3) */
	5,	/* t2r2(5) */
	2,	/* t2r4(2) */
	6	/* t4r4(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportedSRS_TxPortSwitch_specs_10 = {
	asn_MAP_supportedSRS_TxPortSwitch_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_supportedSRS_TxPortSwitch_enum2value_10,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportedSRS_TxPortSwitch_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedSRS_TxPortSwitch_10 = {
	"supportedSRS-TxPortSwitch",
	"supportedSRS-TxPortSwitch",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportedSRS_TxPortSwitch_tags_10,
	sizeof(asn_DEF_supportedSRS_TxPortSwitch_tags_10)
		/sizeof(asn_DEF_supportedSRS_TxPortSwitch_tags_10[0]) - 1, /* 1 */
	asn_DEF_supportedSRS_TxPortSwitch_tags_10,	/* Same as above */
	sizeof(asn_DEF_supportedSRS_TxPortSwitch_tags_10)
		/sizeof(asn_DEF_supportedSRS_TxPortSwitch_tags_10[0]), /* 2 */
	{ &asn_OER_type_supportedSRS_TxPortSwitch_constr_10, &asn_PER_type_supportedSRS_TxPortSwitch_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportedSRS_TxPortSwitch_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_TxSwitch_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_v1540__srs_TxSwitch, supportedSRS_TxPortSwitch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportedSRS_TxPortSwitch_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedSRS-TxPortSwitch"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1540__srs_TxSwitch, txSwitchImpactToRx),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_txSwitchImpactToRx_constr_19, &asn_PER_memb_txSwitchImpactToRx_constr_19,  memb_txSwitchImpactToRx_constraint_9 },
		0, 0, /* No default value */
		"txSwitchImpactToRx"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1540__srs_TxSwitch, txSwitchWithAnotherBand),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_txSwitchWithAnotherBand_constr_20, &asn_PER_memb_txSwitchWithAnotherBand_constr_20,  memb_txSwitchWithAnotherBand_constraint_9 },
		0, 0, /* No default value */
		"txSwitchWithAnotherBand"
		},
};
static const int asn_MAP_srs_TxSwitch_oms_9[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_srs_TxSwitch_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_srs_TxSwitch_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedSRS-TxPortSwitch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* txSwitchImpactToRx */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* txSwitchWithAnotherBand */
};
static asn_SEQUENCE_specifics_t asn_SPC_srs_TxSwitch_specs_9 = {
	sizeof(struct BandParameters_v1540__srs_TxSwitch),
	offsetof(struct BandParameters_v1540__srs_TxSwitch, _asn_ctx),
	asn_MAP_srs_TxSwitch_tag2el_9,
	3,	/* Count of tags in the map */
	asn_MAP_srs_TxSwitch_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_TxSwitch_9 = {
	"srs-TxSwitch",
	"srs-TxSwitch",
	&asn_OP_SEQUENCE,
	asn_DEF_srs_TxSwitch_tags_9,
	sizeof(asn_DEF_srs_TxSwitch_tags_9)
		/sizeof(asn_DEF_srs_TxSwitch_tags_9[0]) - 1, /* 1 */
	asn_DEF_srs_TxSwitch_tags_9,	/* Same as above */
	sizeof(asn_DEF_srs_TxSwitch_tags_9)
		/sizeof(asn_DEF_srs_TxSwitch_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_srs_TxSwitch_9,
	3,	/* Elements count */
	&asn_SPC_srs_TxSwitch_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_v1540_1[] = {
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1540, srs_CarrierSwitch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_srs_CarrierSwitch_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-CarrierSwitch"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1540, srs_TxSwitch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_srs_TxSwitch_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-TxSwitch"
		},
};
static const int asn_MAP_BandParameters_v1540_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-CarrierSwitch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-TxSwitch */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1540_specs_1 = {
	sizeof(struct BandParameters_v1540),
	offsetof(struct BandParameters_v1540, _asn_ctx),
	asn_MAP_BandParameters_v1540_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1540_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1540 = {
	"BandParameters-v1540",
	"BandParameters-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1540_tags_1,
	sizeof(asn_DEF_BandParameters_v1540_tags_1)
		/sizeof(asn_DEF_BandParameters_v1540_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1540_tags_1)
		/sizeof(asn_DEF_BandParameters_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandParameters_v1540_1,
	2,	/* Elements count */
	&asn_SPC_BandParameters_v1540_specs_1	/* Additional specs */
};

