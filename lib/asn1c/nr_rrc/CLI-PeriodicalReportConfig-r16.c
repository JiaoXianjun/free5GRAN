/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "CLI-PeriodicalReportConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxReportCLI_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_reportAmount_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reportAmount_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxReportCLI_r16_constr_13 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxReportCLI_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_reportAmount_r16_value2enum_3[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_reportAmount_r16_enum2value_3[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportAmount_r16_specs_3 = {
	asn_MAP_reportAmount_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_reportAmount_r16_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportAmount_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportAmount_r16_3 = {
	"reportAmount-r16",
	"reportAmount-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportAmount_r16_tags_3,
	sizeof(asn_DEF_reportAmount_r16_tags_3)
		/sizeof(asn_DEF_reportAmount_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_reportAmount_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_reportAmount_r16_tags_3)
		/sizeof(asn_DEF_reportAmount_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_reportAmount_r16_constr_3, &asn_PER_type_reportAmount_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportAmount_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CLI_PeriodicalReportConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CLI_PeriodicalReportConfig_r16, reportInterval_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportInterval-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CLI_PeriodicalReportConfig_r16, reportAmount_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportAmount_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportAmount-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CLI_PeriodicalReportConfig_r16, reportQuantityCLI_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasReportQuantityCLI_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportQuantityCLI-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CLI_PeriodicalReportConfig_r16, maxReportCLI_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxReportCLI_r16_constr_13, &asn_PER_memb_maxReportCLI_r16_constr_13,  memb_maxReportCLI_r16_constraint_1 },
		0, 0, /* No default value */
		"maxReportCLI-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CLI_PeriodicalReportConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportInterval-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportAmount-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportQuantityCLI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxReportCLI-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_CLI_PeriodicalReportConfig_r16_specs_1 = {
	sizeof(struct CLI_PeriodicalReportConfig_r16),
	offsetof(struct CLI_PeriodicalReportConfig_r16, _asn_ctx),
	asn_MAP_CLI_PeriodicalReportConfig_r16_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CLI_PeriodicalReportConfig_r16 = {
	"CLI-PeriodicalReportConfig-r16",
	"CLI-PeriodicalReportConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1,
	sizeof(asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1)
		/sizeof(asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1)
		/sizeof(asn_DEF_CLI_PeriodicalReportConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CLI_PeriodicalReportConfig_r16_1,
	4,	/* Elements count */
	&asn_SPC_CLI_PeriodicalReportConfig_r16_specs_1	/* Additional specs */
};

