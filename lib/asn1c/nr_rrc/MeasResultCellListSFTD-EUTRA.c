/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "MeasResultCellListSFTD-EUTRA.h"

static asn_oer_constraints_t asn_OER_type_MeasResultCellListSFTD_EUTRA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..3)) */};
asn_per_constraints_t asn_PER_type_MeasResultCellListSFTD_EUTRA_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasResultCellListSFTD_EUTRA_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MeasResultSFTD_EUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MeasResultCellListSFTD_EUTRA_specs_1 = {
	sizeof(struct MeasResultCellListSFTD_EUTRA),
	offsetof(struct MeasResultCellListSFTD_EUTRA, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultCellListSFTD_EUTRA = {
	"MeasResultCellListSFTD-EUTRA",
	"MeasResultCellListSFTD-EUTRA",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1,
	sizeof(asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultCellListSFTD_EUTRA_tags_1[0]), /* 1 */
	{ &asn_OER_type_MeasResultCellListSFTD_EUTRA_constr_1, &asn_PER_type_MeasResultCellListSFTD_EUTRA_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MeasResultCellListSFTD_EUTRA_1,
	1,	/* Single element */
	&asn_SPC_MeasResultCellListSFTD_EUTRA_specs_1	/* Additional specs */
};

