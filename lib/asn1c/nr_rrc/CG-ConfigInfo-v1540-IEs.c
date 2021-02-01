/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "CG-ConfigInfo-v1540-IEs.h"

static asn_TYPE_member_t asn_MBR_measResultReportCGI_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CG_ConfigInfo_v1540_IEs__measResultReportCGI, ssbFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbFrequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CG_ConfigInfo_v1540_IEs__measResultReportCGI, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CG_ConfigInfo_v1540_IEs__measResultReportCGI, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGI_InfoNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultReportCGI_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultReportCGI_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssbFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cgi-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultReportCGI_specs_3 = {
	sizeof(struct CG_ConfigInfo_v1540_IEs__measResultReportCGI),
	offsetof(struct CG_ConfigInfo_v1540_IEs__measResultReportCGI, _asn_ctx),
	asn_MAP_measResultReportCGI_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultReportCGI_3 = {
	"measResultReportCGI",
	"measResultReportCGI",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultReportCGI_tags_3,
	sizeof(asn_DEF_measResultReportCGI_tags_3)
		/sizeof(asn_DEF_measResultReportCGI_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResultReportCGI_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResultReportCGI_tags_3)
		/sizeof(asn_DEF_measResultReportCGI_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultReportCGI_3,
	3,	/* Elements count */
	&asn_SPC_measResultReportCGI_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CG_ConfigInfo_v1540_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CG_ConfigInfo_v1540_IEs, ph_InfoMCG),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PH_TypeListMCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ph-InfoMCG"
		},
	{ ATF_POINTER, 2, offsetof(struct CG_ConfigInfo_v1540_IEs, measResultReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultReportCGI_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultReportCGI"
		},
	{ ATF_POINTER, 1, offsetof(struct CG_ConfigInfo_v1540_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CG_ConfigInfo_v1560_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_CG_ConfigInfo_v1540_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CG_ConfigInfo_v1540_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ph-InfoMCG */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_CG_ConfigInfo_v1540_IEs_specs_1 = {
	sizeof(struct CG_ConfigInfo_v1540_IEs),
	offsetof(struct CG_ConfigInfo_v1540_IEs, _asn_ctx),
	asn_MAP_CG_ConfigInfo_v1540_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CG_ConfigInfo_v1540_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CG_ConfigInfo_v1540_IEs = {
	"CG-ConfigInfo-v1540-IEs",
	"CG-ConfigInfo-v1540-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1,
	sizeof(asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1[0]), /* 1 */
	asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_v1540_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CG_ConfigInfo_v1540_IEs_1,
	3,	/* Elements count */
	&asn_SPC_CG_ConfigInfo_v1540_IEs_specs_1	/* Additional specs */
};

