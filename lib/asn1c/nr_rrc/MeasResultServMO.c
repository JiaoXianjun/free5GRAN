/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MeasResultServMO.h"

asn_TYPE_member_t asn_MBR_MeasResultServMO_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServMO, servCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServMO, measResultServingCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServingCell"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServMO, measResultBestNeighCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultBestNeighCell"
		},
};
static const int asn_MAP_MeasResultServMO_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultServMO_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServMO_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultServingCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultBestNeighCell */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultServMO_specs_1 = {
	sizeof(struct MeasResultServMO),
	offsetof(struct MeasResultServMO, _asn_ctx),
	asn_MAP_MeasResultServMO_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultServMO_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServMO = {
	"MeasResultServMO",
	"MeasResultServMO",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultServMO_tags_1,
	sizeof(asn_DEF_MeasResultServMO_tags_1)
		/sizeof(asn_DEF_MeasResultServMO_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServMO_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServMO_tags_1)
		/sizeof(asn_DEF_MeasResultServMO_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultServMO_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultServMO_specs_1	/* Additional specs */
};

