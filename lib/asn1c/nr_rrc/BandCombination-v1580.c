/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BandCombination-v1580.h"

asn_TYPE_member_t asn_MBR_BandCombination_v1580_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombination_v1580, mrdc_Parameters_v1580),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MRDC_Parameters_v1580,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-Parameters-v1580"
		},
};
static const ber_tlv_tag_t asn_DEF_BandCombination_v1580_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombination_v1580_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mrdc-Parameters-v1580 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1580_specs_1 = {
	sizeof(struct BandCombination_v1580),
	offsetof(struct BandCombination_v1580, _asn_ctx),
	asn_MAP_BandCombination_v1580_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombination_v1580 = {
	"BandCombination-v1580",
	"BandCombination-v1580",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombination_v1580_tags_1,
	sizeof(asn_DEF_BandCombination_v1580_tags_1)
		/sizeof(asn_DEF_BandCombination_v1580_tags_1[0]), /* 1 */
	asn_DEF_BandCombination_v1580_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombination_v1580_tags_1)
		/sizeof(asn_DEF_BandCombination_v1580_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombination_v1580_1,
	1,	/* Elements count */
	&asn_SPC_BandCombination_v1580_specs_1	/* Additional specs */
};

