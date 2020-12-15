/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-PriorityTxConfigIndex-r16.h"

static int
memb_sl_PriorityThreshold_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_DefaultTxConfigIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_CBR_ConfigIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_sl_Tx_ConfigIndexList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_Tx_ConfigIndexList_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_sl_Tx_ConfigIndexList_r16_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PriorityThreshold_r16_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_PriorityThreshold_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_DefaultTxConfigIndex_r16_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_DefaultTxConfigIndex_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_CBR_ConfigIndex_r16_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_CBR_ConfigIndex_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_Tx_ConfigIndexList_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_sl_Tx_ConfigIndexList_r16_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sl_Tx_ConfigIndexList_r16_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SL_TxConfigIndex_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_Tx_ConfigIndexList_r16_specs_5 = {
	sizeof(struct SL_PriorityTxConfigIndex_r16__sl_Tx_ConfigIndexList_r16),
	offsetof(struct SL_PriorityTxConfigIndex_r16__sl_Tx_ConfigIndexList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Tx_ConfigIndexList_r16_5 = {
	"sl-Tx-ConfigIndexList-r16",
	"sl-Tx-ConfigIndexList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5,
	sizeof(asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5)
		/sizeof(asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5)
		/sizeof(asn_DEF_sl_Tx_ConfigIndexList_r16_tags_5[0]), /* 2 */
	{ &asn_OER_type_sl_Tx_ConfigIndexList_r16_constr_5, &asn_PER_type_sl_Tx_ConfigIndexList_r16_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_sl_Tx_ConfigIndexList_r16_5,
	1,	/* Single element */
	&asn_SPC_sl_Tx_ConfigIndexList_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PriorityTxConfigIndex_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SL_PriorityTxConfigIndex_r16, sl_PriorityThreshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_PriorityThreshold_r16_constr_2, &asn_PER_memb_sl_PriorityThreshold_r16_constr_2,  memb_sl_PriorityThreshold_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PriorityThreshold-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_PriorityTxConfigIndex_r16, sl_DefaultTxConfigIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_DefaultTxConfigIndex_r16_constr_3, &asn_PER_memb_sl_DefaultTxConfigIndex_r16_constr_3,  memb_sl_DefaultTxConfigIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-DefaultTxConfigIndex-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_PriorityTxConfigIndex_r16, sl_CBR_ConfigIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_CBR_ConfigIndex_r16_constr_4, &asn_PER_memb_sl_CBR_ConfigIndex_r16_constr_4,  memb_sl_CBR_ConfigIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-CBR-ConfigIndex-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PriorityTxConfigIndex_r16, sl_Tx_ConfigIndexList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_sl_Tx_ConfigIndexList_r16_5,
		0,
		{ &asn_OER_memb_sl_Tx_ConfigIndexList_r16_constr_5, &asn_PER_memb_sl_Tx_ConfigIndexList_r16_constr_5,  memb_sl_Tx_ConfigIndexList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-Tx-ConfigIndexList-r16"
		},
};
static const int asn_MAP_SL_PriorityTxConfigIndex_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PriorityTxConfigIndex_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-PriorityThreshold-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-DefaultTxConfigIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-CBR-ConfigIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-Tx-ConfigIndexList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PriorityTxConfigIndex_r16_specs_1 = {
	sizeof(struct SL_PriorityTxConfigIndex_r16),
	offsetof(struct SL_PriorityTxConfigIndex_r16, _asn_ctx),
	asn_MAP_SL_PriorityTxConfigIndex_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SL_PriorityTxConfigIndex_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PriorityTxConfigIndex_r16 = {
	"SL-PriorityTxConfigIndex-r16",
	"SL-PriorityTxConfigIndex-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1,
	sizeof(asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1)
		/sizeof(asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1)
		/sizeof(asn_DEF_SL_PriorityTxConfigIndex_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PriorityTxConfigIndex_r16_1,
	4,	/* Elements count */
	&asn_SPC_SL_PriorityTxConfigIndex_r16_specs_1	/* Additional specs */
};

