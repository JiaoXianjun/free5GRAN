/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "NRDC-Parameters.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_9 = {
	sizeof(struct NRDC_Parameters__nonCriticalExtension),
	offsetof(struct NRDC_Parameters__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_9 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_9,
	sizeof(asn_DEF_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_nonCriticalExtension_tags_9[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_9,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_nonCriticalExtension_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NRDC_Parameters_1[] = {
	{ ATF_POINTER, 8, offsetof(struct NRDC_Parameters, measAndMobParametersNRDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasAndMobParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersNRDC"
		},
	{ ATF_POINTER, 7, offsetof(struct NRDC_Parameters, generalParametersNRDC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralParametersMRDC_XDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generalParametersNRDC"
		},
	{ ATF_POINTER, 6, offsetof(struct NRDC_Parameters, fdd_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 5, offsetof(struct NRDC_Parameters, tdd_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 4, offsetof(struct NRDC_Parameters, fr1_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 3, offsetof(struct NRDC_Parameters, fr2_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr2-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 2, offsetof(struct NRDC_Parameters, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NRDC_Parameters, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NRDC_Parameters_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_NRDC_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRDC_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measAndMobParametersNRDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* generalParametersNRDC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fdd-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tdd-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fr1-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* fr2-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NRDC_Parameters_specs_1 = {
	sizeof(struct NRDC_Parameters),
	offsetof(struct NRDC_Parameters, _asn_ctx),
	asn_MAP_NRDC_Parameters_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NRDC_Parameters_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRDC_Parameters = {
	"NRDC-Parameters",
	"NRDC-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_NRDC_Parameters_tags_1,
	sizeof(asn_DEF_NRDC_Parameters_tags_1)
		/sizeof(asn_DEF_NRDC_Parameters_tags_1[0]), /* 1 */
	asn_DEF_NRDC_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRDC_Parameters_tags_1)
		/sizeof(asn_DEF_NRDC_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NRDC_Parameters_1,
	8,	/* Elements count */
	&asn_SPC_NRDC_Parameters_specs_1	/* Additional specs */
};

