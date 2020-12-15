/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MeasResultEUTRA.h"

asn_TYPE_member_t asn_MBR_MeasResultEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA, eutra_PhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-PhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultEUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResultsEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultEUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGI_InfoEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
};
static const int asn_MAP_MeasResultEUTRA_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-PhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cgi-Info */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultEUTRA_specs_1 = {
	sizeof(struct MeasResultEUTRA),
	offsetof(struct MeasResultEUTRA, _asn_ctx),
	asn_MAP_MeasResultEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultEUTRA = {
	"MeasResultEUTRA",
	"MeasResultEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultEUTRA_tags_1,
	sizeof(asn_DEF_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultEUTRA_specs_1	/* Additional specs */
};

