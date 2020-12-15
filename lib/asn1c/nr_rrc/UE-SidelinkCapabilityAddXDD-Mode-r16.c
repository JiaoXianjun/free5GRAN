/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "UE-SidelinkCapabilityAddXDD-Mode-r16.h"

asn_TYPE_member_t asn_MBR_UE_SidelinkCapabilityAddXDD_Mode_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_SidelinkCapabilityAddXDD_Mode_r16, mac_ParametersSidelinkXDD_Diff_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_ParametersSidelinkXDD_Diff_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ParametersSidelinkXDD-Diff-r16"
		},
};
static const int asn_MAP_UE_SidelinkCapabilityAddXDD_Mode_r16_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_SidelinkCapabilityAddXDD_Mode_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mac-ParametersSidelinkXDD-Diff-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_SidelinkCapabilityAddXDD_Mode_r16_specs_1 = {
	sizeof(struct UE_SidelinkCapabilityAddXDD_Mode_r16),
	offsetof(struct UE_SidelinkCapabilityAddXDD_Mode_r16, _asn_ctx),
	asn_MAP_UE_SidelinkCapabilityAddXDD_Mode_r16_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_UE_SidelinkCapabilityAddXDD_Mode_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16 = {
	"UE-SidelinkCapabilityAddXDD-Mode-r16",
	"UE-SidelinkCapabilityAddXDD-Mode-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1,
	sizeof(asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1)
		/sizeof(asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1[0]), /* 1 */
	asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1)
		/sizeof(asn_DEF_UE_SidelinkCapabilityAddXDD_Mode_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_SidelinkCapabilityAddXDD_Mode_r16_1,
	1,	/* Elements count */
	&asn_SPC_UE_SidelinkCapabilityAddXDD_Mode_r16_specs_1	/* Additional specs */
};

