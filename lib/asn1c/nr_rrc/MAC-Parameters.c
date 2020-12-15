/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MAC-Parameters.h"

asn_TYPE_member_t asn_MBR_MAC_Parameters_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_Parameters, mac_ParametersCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_ParametersCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ParametersCommon"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_Parameters, mac_ParametersXDD_Diff),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_ParametersXDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ParametersXDD-Diff"
		},
};
static const int asn_MAP_MAC_Parameters_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MAC_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mac-ParametersCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mac-ParametersXDD-Diff */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_specs_1 = {
	sizeof(struct MAC_Parameters),
	offsetof(struct MAC_Parameters, _asn_ctx),
	asn_MAP_MAC_Parameters_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MAC_Parameters_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_Parameters = {
	"MAC-Parameters",
	"MAC-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_Parameters_tags_1,
	sizeof(asn_DEF_MAC_Parameters_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_tags_1[0]), /* 1 */
	asn_DEF_MAC_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_Parameters_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_Parameters_1,
	2,	/* Elements count */
	&asn_SPC_MAC_Parameters_specs_1	/* Additional specs */
};

