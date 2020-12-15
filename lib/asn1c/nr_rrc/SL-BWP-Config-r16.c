/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-BWP-Config-r16.h"

asn_TYPE_member_t asn_MBR_SL_BWP_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_BWP_Config_r16, sl_BWP_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-BWP-Id"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_BWP_Config_r16, sl_BWP_Generic_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_BWP_Generic_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-BWP-Generic-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_BWP_Config_r16, sl_BWP_PoolConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_BWP_PoolConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-BWP-PoolConfig-r16"
		},
};
static const int asn_MAP_SL_BWP_Config_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SL_BWP_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_BWP_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-BWP-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-BWP-Generic-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-BWP-PoolConfig-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_BWP_Config_r16_specs_1 = {
	sizeof(struct SL_BWP_Config_r16),
	offsetof(struct SL_BWP_Config_r16, _asn_ctx),
	asn_MAP_SL_BWP_Config_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_BWP_Config_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_BWP_Config_r16 = {
	"SL-BWP-Config-r16",
	"SL-BWP-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_BWP_Config_r16_tags_1,
	sizeof(asn_DEF_SL_BWP_Config_r16_tags_1)
		/sizeof(asn_DEF_SL_BWP_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_BWP_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_BWP_Config_r16_tags_1)
		/sizeof(asn_DEF_SL_BWP_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_BWP_Config_r16_1,
	3,	/* Elements count */
	&asn_SPC_SL_BWP_Config_r16_specs_1	/* Additional specs */
};

