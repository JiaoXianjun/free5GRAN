/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "ReportSFTD-EUTRA.h"

asn_TYPE_member_t asn_MBR_ReportSFTD_EUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportSFTD_EUTRA, reportSFTD_Meas),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportSFTD-Meas"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportSFTD_EUTRA, reportRSRP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportRSRP"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportSFTD_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportSFTD_EUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportSFTD-Meas */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reportRSRP */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportSFTD_EUTRA_specs_1 = {
	sizeof(struct ReportSFTD_EUTRA),
	offsetof(struct ReportSFTD_EUTRA, _asn_ctx),
	asn_MAP_ReportSFTD_EUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportSFTD_EUTRA = {
	"ReportSFTD-EUTRA",
	"ReportSFTD-EUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportSFTD_EUTRA_tags_1,
	sizeof(asn_DEF_ReportSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_ReportSFTD_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_ReportSFTD_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_ReportSFTD_EUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReportSFTD_EUTRA_1,
	2,	/* Elements count */
	&asn_SPC_ReportSFTD_EUTRA_specs_1	/* Additional specs */
};

