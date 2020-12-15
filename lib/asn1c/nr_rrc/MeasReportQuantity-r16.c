/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MeasReportQuantity-r16.h"

asn_TYPE_member_t asn_MBR_MeasReportQuantity_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasReportQuantity_r16, cbr_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbr-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasReportQuantity_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasReportQuantity_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cbr-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasReportQuantity_r16_specs_1 = {
	sizeof(struct MeasReportQuantity_r16),
	offsetof(struct MeasReportQuantity_r16, _asn_ctx),
	asn_MAP_MeasReportQuantity_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasReportQuantity_r16 = {
	"MeasReportQuantity-r16",
	"MeasReportQuantity-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasReportQuantity_r16_tags_1,
	sizeof(asn_DEF_MeasReportQuantity_r16_tags_1)
		/sizeof(asn_DEF_MeasReportQuantity_r16_tags_1[0]), /* 1 */
	asn_DEF_MeasReportQuantity_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasReportQuantity_r16_tags_1)
		/sizeof(asn_DEF_MeasReportQuantity_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasReportQuantity_r16_1,
	1,	/* Elements count */
	&asn_SPC_MeasReportQuantity_r16_specs_1	/* Additional specs */
};

