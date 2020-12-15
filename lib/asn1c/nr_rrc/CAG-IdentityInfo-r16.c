/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "CAG-IdentityInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_cag_Identity_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_manualCAGselectionAllowed_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_manualCAGselectionAllowed_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cag_Identity_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_cag_Identity_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_manualCAGselectionAllowed_r16_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_manualCAGselectionAllowed_r16_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_manualCAGselectionAllowed_r16_specs_3 = {
	asn_MAP_manualCAGselectionAllowed_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_manualCAGselectionAllowed_r16_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_manualCAGselectionAllowed_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_manualCAGselectionAllowed_r16_3 = {
	"manualCAGselectionAllowed-r16",
	"manualCAGselectionAllowed-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_manualCAGselectionAllowed_r16_tags_3,
	sizeof(asn_DEF_manualCAGselectionAllowed_r16_tags_3)
		/sizeof(asn_DEF_manualCAGselectionAllowed_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_manualCAGselectionAllowed_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_manualCAGselectionAllowed_r16_tags_3)
		/sizeof(asn_DEF_manualCAGselectionAllowed_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_manualCAGselectionAllowed_r16_constr_3, &asn_PER_type_manualCAGselectionAllowed_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_manualCAGselectionAllowed_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CAG_IdentityInfo_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CAG_IdentityInfo_r16, cag_Identity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_cag_Identity_r16_constr_2, &asn_PER_memb_cag_Identity_r16_constr_2,  memb_cag_Identity_r16_constraint_1 },
		0, 0, /* No default value */
		"cag-Identity-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct CAG_IdentityInfo_r16, manualCAGselectionAllowed_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_manualCAGselectionAllowed_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"manualCAGselectionAllowed-r16"
		},
};
static const int asn_MAP_CAG_IdentityInfo_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CAG_IdentityInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CAG_IdentityInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cag-Identity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* manualCAGselectionAllowed-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_CAG_IdentityInfo_r16_specs_1 = {
	sizeof(struct CAG_IdentityInfo_r16),
	offsetof(struct CAG_IdentityInfo_r16, _asn_ctx),
	asn_MAP_CAG_IdentityInfo_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CAG_IdentityInfo_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CAG_IdentityInfo_r16 = {
	"CAG-IdentityInfo-r16",
	"CAG-IdentityInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_CAG_IdentityInfo_r16_tags_1,
	sizeof(asn_DEF_CAG_IdentityInfo_r16_tags_1)
		/sizeof(asn_DEF_CAG_IdentityInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_CAG_IdentityInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_CAG_IdentityInfo_r16_tags_1)
		/sizeof(asn_DEF_CAG_IdentityInfo_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CAG_IdentityInfo_r16_1,
	2,	/* Elements count */
	&asn_SPC_CAG_IdentityInfo_r16_specs_1	/* Additional specs */
};

