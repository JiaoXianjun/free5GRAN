/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SPS-ConfigIndex-r16.h"

int
SPS_ConfigIndex_r16_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SPS_ConfigIndex_r16_constr_1 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
asn_per_constraints_t asn_PER_type_SPS_ConfigIndex_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_SPS_ConfigIndex_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SPS_ConfigIndex_r16 = {
	"SPS-ConfigIndex-r16",
	"SPS-ConfigIndex-r16",
	&asn_OP_NativeInteger,
	asn_DEF_SPS_ConfigIndex_r16_tags_1,
	sizeof(asn_DEF_SPS_ConfigIndex_r16_tags_1)
		/sizeof(asn_DEF_SPS_ConfigIndex_r16_tags_1[0]), /* 1 */
	asn_DEF_SPS_ConfigIndex_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SPS_ConfigIndex_r16_tags_1)
		/sizeof(asn_DEF_SPS_ConfigIndex_r16_tags_1[0]), /* 1 */
	{ &asn_OER_type_SPS_ConfigIndex_r16_constr_1, &asn_PER_type_SPS_ConfigIndex_r16_constr_1, SPS_ConfigIndex_r16_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

