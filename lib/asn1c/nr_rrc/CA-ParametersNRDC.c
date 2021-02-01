/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "CA-ParametersNRDC.h"

asn_TYPE_member_t asn_MBR_CA_ParametersNRDC_1[] = {
	{ ATF_POINTER, 5, offsetof(struct CA_ParametersNRDC, ca_ParametersNR_ForDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-ForDC"
		},
	{ ATF_POINTER, 4, offsetof(struct CA_ParametersNRDC, ca_ParametersNR_ForDC_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-ForDC-v1540"
		},
	{ ATF_POINTER, 3, offsetof(struct CA_ParametersNRDC, ca_ParametersNR_ForDC_v1550),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-ForDC-v1550"
		},
	{ ATF_POINTER, 2, offsetof(struct CA_ParametersNRDC, ca_ParametersNR_ForDC_v1560),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-ForDC-v1560"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_ParametersNRDC, featureSetCombinationDC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeatureSetCombinationId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"featureSetCombinationDC"
		},
};
static const int asn_MAP_CA_ParametersNRDC_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_CA_ParametersNRDC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CA_ParametersNRDC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ca-ParametersNR-ForDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-ParametersNR-ForDC-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ca-ParametersNR-ForDC-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ca-ParametersNR-ForDC-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* featureSetCombinationDC */
};
asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersNRDC_specs_1 = {
	sizeof(struct CA_ParametersNRDC),
	offsetof(struct CA_ParametersNRDC, _asn_ctx),
	asn_MAP_CA_ParametersNRDC_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CA_ParametersNRDC_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CA_ParametersNRDC = {
	"CA-ParametersNRDC",
	"CA-ParametersNRDC",
	&asn_OP_SEQUENCE,
	asn_DEF_CA_ParametersNRDC_tags_1,
	sizeof(asn_DEF_CA_ParametersNRDC_tags_1)
		/sizeof(asn_DEF_CA_ParametersNRDC_tags_1[0]), /* 1 */
	asn_DEF_CA_ParametersNRDC_tags_1,	/* Same as above */
	sizeof(asn_DEF_CA_ParametersNRDC_tags_1)
		/sizeof(asn_DEF_CA_ParametersNRDC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CA_ParametersNRDC_1,
	5,	/* Elements count */
	&asn_SPC_CA_ParametersNRDC_specs_1	/* Additional specs */
};

