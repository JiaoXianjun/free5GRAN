/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "EUTRA-Cell.h"

asn_TYPE_member_t asn_MBR_EUTRA_Cell_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_Cell, cellIndexEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_CellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIndexEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_Cell, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_Cell, cellIndividualOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIndividualOffset"
		},
};
static const ber_tlv_tag_t asn_DEF_EUTRA_Cell_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_Cell_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIndexEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellIndividualOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_Cell_specs_1 = {
	sizeof(struct EUTRA_Cell),
	offsetof(struct EUTRA_Cell, _asn_ctx),
	asn_MAP_EUTRA_Cell_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_Cell = {
	"EUTRA-Cell",
	"EUTRA-Cell",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_Cell_tags_1,
	sizeof(asn_DEF_EUTRA_Cell_tags_1)
		/sizeof(asn_DEF_EUTRA_Cell_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_Cell_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_Cell_tags_1)
		/sizeof(asn_DEF_EUTRA_Cell_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_Cell_1,
	3,	/* Elements count */
	&asn_SPC_EUTRA_Cell_specs_1	/* Additional specs */
};

