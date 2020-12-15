/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BandParameters.h"

static asn_oer_constraints_t asn_OER_type_BandParameters_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_BandParameters_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_eutra_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters__eutra, bandEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters__eutra, ca_BandwidthClassDL_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassDL-EUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters__eutra, ca_BandwidthClassUL_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassUL-EUTRA"
		},
};
static const int asn_MAP_eutra_oms_2[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_eutra_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eutra_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-BandwidthClassDL-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ca-BandwidthClassUL-EUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_eutra_specs_2 = {
	sizeof(struct BandParameters__eutra),
	offsetof(struct BandParameters__eutra, _asn_ctx),
	asn_MAP_eutra_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_eutra_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_2 = {
	"eutra",
	"eutra",
	&asn_OP_SEQUENCE,
	asn_DEF_eutra_tags_2,
	sizeof(asn_DEF_eutra_tags_2)
		/sizeof(asn_DEF_eutra_tags_2[0]) - 1, /* 1 */
	asn_DEF_eutra_tags_2,	/* Same as above */
	sizeof(asn_DEF_eutra_tags_2)
		/sizeof(asn_DEF_eutra_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eutra_2,
	3,	/* Elements count */
	&asn_SPC_eutra_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nr_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters__nr, bandNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandNR"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters__nr, ca_BandwidthClassDL_NR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassDL-NR"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters__nr, ca_BandwidthClassUL_NR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassUL-NR"
		},
};
static const int asn_MAP_nr_oms_6[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_nr_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nr_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-BandwidthClassDL-NR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ca-BandwidthClassUL-NR */
};
static asn_SEQUENCE_specifics_t asn_SPC_nr_specs_6 = {
	sizeof(struct BandParameters__nr),
	offsetof(struct BandParameters__nr, _asn_ctx),
	asn_MAP_nr_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_nr_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_6 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_nr_tags_6,
	sizeof(asn_DEF_nr_tags_6)
		/sizeof(asn_DEF_nr_tags_6[0]) - 1, /* 1 */
	asn_DEF_nr_tags_6,	/* Same as above */
	sizeof(asn_DEF_nr_tags_6)
		/sizeof(asn_DEF_nr_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nr_6,
	3,	/* Elements count */
	&asn_SPC_nr_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_eutra_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nr_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr */
};
asn_CHOICE_specifics_t asn_SPC_BandParameters_specs_1 = {
	sizeof(struct BandParameters),
	offsetof(struct BandParameters, _asn_ctx),
	offsetof(struct BandParameters, present),
	sizeof(((struct BandParameters *)0)->present),
	asn_MAP_BandParameters_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters = {
	"BandParameters",
	"BandParameters",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_BandParameters_constr_1, &asn_PER_type_BandParameters_constr_1, CHOICE_constraint },
	asn_MBR_BandParameters_1,
	2,	/* Elements count */
	&asn_SPC_BandParameters_specs_1	/* Additional specs */
};

