/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "RRCReconfiguration-IEs.h"

static int
memb_secondaryCellGroup_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_secondaryCellGroup_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_secondaryCellGroup_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRCReconfiguration_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCReconfiguration_IEs, radioBearerConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioBearerConfig"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCReconfiguration_IEs, secondaryCellGroup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_secondaryCellGroup_constr_3, &asn_PER_memb_secondaryCellGroup_constr_3,  memb_secondaryCellGroup_constraint_1 },
		0, 0, /* No default value */
		"secondaryCellGroup"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCReconfiguration_IEs, measConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCReconfiguration_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCReconfiguration_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCReconfiguration_v1530_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCReconfiguration_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCReconfiguration_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCReconfiguration_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioBearerConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* secondaryCellGroup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_IEs_specs_1 = {
	sizeof(struct RRCReconfiguration_IEs),
	offsetof(struct RRCReconfiguration_IEs, _asn_ctx),
	asn_MAP_RRCReconfiguration_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCReconfiguration_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_IEs = {
	"RRCReconfiguration-IEs",
	"RRCReconfiguration-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCReconfiguration_IEs_tags_1,
	sizeof(asn_DEF_RRCReconfiguration_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCReconfiguration_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCReconfiguration_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCReconfiguration_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCReconfiguration_IEs_specs_1	/* Additional specs */
};

