/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "ReportConfigInterRAT.h"

static asn_oer_constraints_t asn_OER_type_reportType_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reportType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_reportType_2[] = {
	{ ATF_POINTER, 0, offsetof(struct ReportConfigInterRAT__reportType, choice.periodical),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicalReportConfigInterRAT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodical"
		},
	{ ATF_POINTER, 0, offsetof(struct ReportConfigInterRAT__reportType, choice.eventTriggered),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTriggerConfigInterRAT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggered"
		},
	{ ATF_POINTER, 0, offsetof(struct ReportConfigInterRAT__reportType, choice.reportCGI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportCGI_EUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportCGI"
		},
	{ ATF_POINTER, 0, offsetof(struct ReportConfigInterRAT__reportType, choice.reportSFTD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportSFTD_EUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportSFTD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_reportType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodical */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventTriggered */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reportSFTD */
};
static asn_CHOICE_specifics_t asn_SPC_reportType_specs_2 = {
	sizeof(struct ReportConfigInterRAT__reportType),
	offsetof(struct ReportConfigInterRAT__reportType, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__reportType, present),
	sizeof(((struct ReportConfigInterRAT__reportType *)0)->present),
	asn_MAP_reportType_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportType_2 = {
	"reportType",
	"reportType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_reportType_constr_2, &asn_PER_type_reportType_constr_2, CHOICE_constraint },
	asn_MBR_reportType_2,
	4,	/* Elements count */
	&asn_SPC_reportType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReportConfigInterRAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, reportType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_reportType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportType"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportConfigInterRAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportConfigInterRAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportType */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportConfigInterRAT_specs_1 = {
	sizeof(struct ReportConfigInterRAT),
	offsetof(struct ReportConfigInterRAT, _asn_ctx),
	asn_MAP_ReportConfigInterRAT_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportConfigInterRAT = {
	"ReportConfigInterRAT",
	"ReportConfigInterRAT",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportConfigInterRAT_tags_1,
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	asn_DEF_ReportConfigInterRAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReportConfigInterRAT_1,
	1,	/* Elements count */
	&asn_SPC_ReportConfigInterRAT_specs_1	/* Additional specs */
};

