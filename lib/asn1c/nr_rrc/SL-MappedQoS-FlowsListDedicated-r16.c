/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-MappedQoS-FlowsListDedicated-r16.h"

static int
memb_sl_MappedQoS_FlowsToAddList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 2048)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_MappedQoS_FlowsToReleaseList_16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 2048)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_MappedQoS_FlowsToAddList_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
static asn_per_constraints_t asn_PER_type_sl_MappedQoS_FlowsToAddList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_MappedQoS_FlowsToReleaseList_16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
static asn_per_constraints_t asn_PER_type_sl_MappedQoS_FlowsToReleaseList_16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_MappedQoS_FlowsToAddList_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
static asn_per_constraints_t asn_PER_memb_sl_MappedQoS_FlowsToAddList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_MappedQoS_FlowsToReleaseList_16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
static asn_per_constraints_t asn_PER_memb_sl_MappedQoS_FlowsToReleaseList_16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sl_MappedQoS_FlowsToAddList_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SL_QoS_FlowIdentity_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_MappedQoS_FlowsToAddList_r16_specs_2 = {
	sizeof(struct SL_MappedQoS_FlowsListDedicated_r16__sl_MappedQoS_FlowsToAddList_r16),
	offsetof(struct SL_MappedQoS_FlowsListDedicated_r16__sl_MappedQoS_FlowsToAddList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_MappedQoS_FlowsToAddList_r16_2 = {
	"sl-MappedQoS-FlowsToAddList-r16",
	"sl-MappedQoS-FlowsToAddList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2,
	sizeof(asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2)
		/sizeof(asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2)
		/sizeof(asn_DEF_sl_MappedQoS_FlowsToAddList_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_sl_MappedQoS_FlowsToAddList_r16_constr_2, &asn_PER_type_sl_MappedQoS_FlowsToAddList_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_sl_MappedQoS_FlowsToAddList_r16_2,
	1,	/* Single element */
	&asn_SPC_sl_MappedQoS_FlowsToAddList_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_MappedQoS_FlowsToReleaseList_16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SL_QoS_FlowIdentity_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_MappedQoS_FlowsToReleaseList_16_specs_4 = {
	sizeof(struct SL_MappedQoS_FlowsListDedicated_r16__sl_MappedQoS_FlowsToReleaseList_16),
	offsetof(struct SL_MappedQoS_FlowsListDedicated_r16__sl_MappedQoS_FlowsToReleaseList_16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_4 = {
	"sl-MappedQoS-FlowsToReleaseList-16",
	"sl-MappedQoS-FlowsToReleaseList-16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4,
	sizeof(asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4)
		/sizeof(asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4[0]) - 1, /* 1 */
	asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4,	/* Same as above */
	sizeof(asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4)
		/sizeof(asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_tags_4[0]), /* 2 */
	{ &asn_OER_type_sl_MappedQoS_FlowsToReleaseList_16_constr_4, &asn_PER_type_sl_MappedQoS_FlowsToReleaseList_16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_sl_MappedQoS_FlowsToReleaseList_16_4,
	1,	/* Single element */
	&asn_SPC_sl_MappedQoS_FlowsToReleaseList_16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_MappedQoS_FlowsListDedicated_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_MappedQoS_FlowsListDedicated_r16, sl_MappedQoS_FlowsToAddList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sl_MappedQoS_FlowsToAddList_r16_2,
		0,
		{ &asn_OER_memb_sl_MappedQoS_FlowsToAddList_r16_constr_2, &asn_PER_memb_sl_MappedQoS_FlowsToAddList_r16_constr_2,  memb_sl_MappedQoS_FlowsToAddList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MappedQoS-FlowsToAddList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_MappedQoS_FlowsListDedicated_r16, sl_MappedQoS_FlowsToReleaseList_16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sl_MappedQoS_FlowsToReleaseList_16_4,
		0,
		{ &asn_OER_memb_sl_MappedQoS_FlowsToReleaseList_16_constr_4, &asn_PER_memb_sl_MappedQoS_FlowsToReleaseList_16_constr_4,  memb_sl_MappedQoS_FlowsToReleaseList_16_constraint_1 },
		0, 0, /* No default value */
		"sl-MappedQoS-FlowsToReleaseList-16"
		},
};
static const int asn_MAP_SL_MappedQoS_FlowsListDedicated_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_MappedQoS_FlowsListDedicated_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-MappedQoS-FlowsToAddList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-MappedQoS-FlowsToReleaseList-16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_MappedQoS_FlowsListDedicated_r16_specs_1 = {
	sizeof(struct SL_MappedQoS_FlowsListDedicated_r16),
	offsetof(struct SL_MappedQoS_FlowsListDedicated_r16, _asn_ctx),
	asn_MAP_SL_MappedQoS_FlowsListDedicated_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_MappedQoS_FlowsListDedicated_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_MappedQoS_FlowsListDedicated_r16 = {
	"SL-MappedQoS-FlowsListDedicated-r16",
	"SL-MappedQoS-FlowsListDedicated-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1,
	sizeof(asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1)
		/sizeof(asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1)
		/sizeof(asn_DEF_SL_MappedQoS_FlowsListDedicated_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_MappedQoS_FlowsListDedicated_r16_1,
	2,	/* Elements count */
	&asn_SPC_SL_MappedQoS_FlowsListDedicated_r16_specs_1	/* Additional specs */
};

