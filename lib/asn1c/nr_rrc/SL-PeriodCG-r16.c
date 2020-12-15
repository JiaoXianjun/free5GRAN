/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-PeriodCG-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sl_PeriodCG2_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 99)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_PeriodCG1_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_PeriodCG1_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PeriodCG2_r16_constr_19 CC_NOTUSED = {
	{ 1, 1 }	/* (1..99) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_PeriodCG2_r16_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  99 }	/* (1..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_SL_PeriodCG_r16_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SL_PeriodCG_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_PeriodCG1_r16_value2enum_2[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms500" },
	{ 5,	5,	"ms600" },
	{ 6,	5,	"ms700" },
	{ 7,	5,	"ms800" },
	{ 8,	5,	"ms900" },
	{ 9,	6,	"ms1000" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_sl_PeriodCG1_r16_enum2value_2[] = {
	0,	/* ms100(0) */
	9,	/* ms1000(9) */
	1,	/* ms200(1) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4,	/* ms500(4) */
	5,	/* ms600(5) */
	6,	/* ms700(6) */
	7,	/* ms800(7) */
	8,	/* ms900(8) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_PeriodCG1_r16_specs_2 = {
	asn_MAP_sl_PeriodCG1_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_PeriodCG1_r16_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_PeriodCG1_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_PeriodCG1_r16_2 = {
	"sl-PeriodCG1-r16",
	"sl-PeriodCG1-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_PeriodCG1_r16_tags_2,
	sizeof(asn_DEF_sl_PeriodCG1_r16_tags_2)
		/sizeof(asn_DEF_sl_PeriodCG1_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_PeriodCG1_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_PeriodCG1_r16_tags_2)
		/sizeof(asn_DEF_sl_PeriodCG1_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_sl_PeriodCG1_r16_constr_2, &asn_PER_type_sl_PeriodCG1_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_PeriodCG1_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PeriodCG_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PeriodCG_r16, choice.sl_PeriodCG1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_PeriodCG1_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PeriodCG1-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PeriodCG_r16, choice.sl_PeriodCG2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_PeriodCG2_r16_constr_19, &asn_PER_memb_sl_PeriodCG2_r16_constr_19,  memb_sl_PeriodCG2_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PeriodCG2-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PeriodCG_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-PeriodCG1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-PeriodCG2-r16 */
};
asn_CHOICE_specifics_t asn_SPC_SL_PeriodCG_r16_specs_1 = {
	sizeof(struct SL_PeriodCG_r16),
	offsetof(struct SL_PeriodCG_r16, _asn_ctx),
	offsetof(struct SL_PeriodCG_r16, present),
	sizeof(((struct SL_PeriodCG_r16 *)0)->present),
	asn_MAP_SL_PeriodCG_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_PeriodCG_r16 = {
	"SL-PeriodCG-r16",
	"SL-PeriodCG-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SL_PeriodCG_r16_constr_1, &asn_PER_type_SL_PeriodCG_r16_constr_1, CHOICE_constraint },
	asn_MBR_SL_PeriodCG_r16_1,
	2,	/* Elements count */
	&asn_SPC_SL_PeriodCG_r16_specs_1	/* Additional specs */
};

