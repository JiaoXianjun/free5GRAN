/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "DLDedicatedMessageSegment-r16-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_segmentNumber_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_rrc_MessageSegmentType_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rrc_MessageSegmentType_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_segmentNumber_r16_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_segmentNumber_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rrc_MessageSegmentType_r16_value2enum_4[] = {
	{ 0,	14,	"notLastSegment" },
	{ 1,	11,	"lastSegment" }
};
static const unsigned int asn_MAP_rrc_MessageSegmentType_r16_enum2value_4[] = {
	1,	/* lastSegment(1) */
	0	/* notLastSegment(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rrc_MessageSegmentType_r16_specs_4 = {
	asn_MAP_rrc_MessageSegmentType_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_rrc_MessageSegmentType_r16_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rrc_MessageSegmentType_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rrc_MessageSegmentType_r16_4 = {
	"rrc-MessageSegmentType-r16",
	"rrc-MessageSegmentType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rrc_MessageSegmentType_r16_tags_4,
	sizeof(asn_DEF_rrc_MessageSegmentType_r16_tags_4)
		/sizeof(asn_DEF_rrc_MessageSegmentType_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_rrc_MessageSegmentType_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_rrc_MessageSegmentType_r16_tags_4)
		/sizeof(asn_DEF_rrc_MessageSegmentType_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_rrc_MessageSegmentType_r16_constr_4, &asn_PER_type_rrc_MessageSegmentType_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rrc_MessageSegmentType_r16_specs_4	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_8 = {
	sizeof(struct DLDedicatedMessageSegment_r16_IEs__nonCriticalExtension),
	offsetof(struct DLDedicatedMessageSegment_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_8 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_8,
	sizeof(asn_DEF_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_nonCriticalExtension_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_nonCriticalExtension_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DLDedicatedMessageSegment_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLDedicatedMessageSegment_r16_IEs, segmentNumber_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_segmentNumber_r16_constr_2, &asn_PER_memb_segmentNumber_r16_constr_2,  memb_segmentNumber_r16_constraint_1 },
		0, 0, /* No default value */
		"segmentNumber-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLDedicatedMessageSegment_r16_IEs, rrc_MessageSegmentContainer_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-MessageSegmentContainer-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLDedicatedMessageSegment_r16_IEs, rrc_MessageSegmentType_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rrc_MessageSegmentType_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-MessageSegmentType-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct DLDedicatedMessageSegment_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct DLDedicatedMessageSegment_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_DLDedicatedMessageSegment_r16_IEs_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DLDedicatedMessageSegment_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* segmentNumber-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrc-MessageSegmentContainer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrc-MessageSegmentType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_DLDedicatedMessageSegment_r16_IEs_specs_1 = {
	sizeof(struct DLDedicatedMessageSegment_r16_IEs),
	offsetof(struct DLDedicatedMessageSegment_r16_IEs, _asn_ctx),
	asn_MAP_DLDedicatedMessageSegment_r16_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DLDedicatedMessageSegment_r16_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DLDedicatedMessageSegment_r16_IEs = {
	"DLDedicatedMessageSegment-r16-IEs",
	"DLDedicatedMessageSegment-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1,
	sizeof(asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1)
		/sizeof(asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1)
		/sizeof(asn_DEF_DLDedicatedMessageSegment_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DLDedicatedMessageSegment_r16_IEs_1,
	5,	/* Elements count */
	&asn_SPC_DLDedicatedMessageSegment_r16_IEs_specs_1	/* Additional specs */
};

