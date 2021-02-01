/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "UE-CapabilityRequestFilterNR.h"

static asn_TYPE_member_t asn_MBR_UE_CapabilityRequestFilterNR_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_CapabilityRequestFilterNR, frequencyBandListFilter),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandListFilter"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_CapabilityRequestFilterNR, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_CapabilityRequestFilterNR_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_CapabilityRequestFilterNR_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_CapabilityRequestFilterNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_CapabilityRequestFilterNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyBandListFilter */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_CapabilityRequestFilterNR_specs_1 = {
	sizeof(struct UE_CapabilityRequestFilterNR),
	offsetof(struct UE_CapabilityRequestFilterNR, _asn_ctx),
	asn_MAP_UE_CapabilityRequestFilterNR_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_CapabilityRequestFilterNR_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_CapabilityRequestFilterNR = {
	"UE-CapabilityRequestFilterNR",
	"UE-CapabilityRequestFilterNR",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_CapabilityRequestFilterNR_tags_1,
	sizeof(asn_DEF_UE_CapabilityRequestFilterNR_tags_1)
		/sizeof(asn_DEF_UE_CapabilityRequestFilterNR_tags_1[0]), /* 1 */
	asn_DEF_UE_CapabilityRequestFilterNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_CapabilityRequestFilterNR_tags_1)
		/sizeof(asn_DEF_UE_CapabilityRequestFilterNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_CapabilityRequestFilterNR_1,
	2,	/* Elements count */
	&asn_SPC_UE_CapabilityRequestFilterNR_specs_1	/* Additional specs */
};

