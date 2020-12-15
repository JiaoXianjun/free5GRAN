/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-TxResourceReq-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sl_RLC_ModeIndicationList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 512)) {
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
memb_sl_QoS_InfoList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 64)) {
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
memb_sl_TypeTxSyncList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sl_CastType_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_CastType_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_RLC_ModeIndicationList_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..512)) */};
static asn_per_constraints_t asn_PER_type_sl_RLC_ModeIndicationList_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_QoS_InfoList_r16_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_sl_QoS_InfoList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_TypeTxSyncList_r16_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_sl_TypeTxSyncList_r16_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_RLC_ModeIndicationList_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..512)) */};
static asn_per_constraints_t asn_PER_memb_sl_RLC_ModeIndicationList_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_QoS_InfoList_r16_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_memb_sl_QoS_InfoList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_TypeTxSyncList_r16_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_sl_TypeTxSyncList_r16_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_CastType_r16_value2enum_3[] = {
	{ 0,	9,	"broadcast" },
	{ 1,	9,	"groupcast" },
	{ 2,	7,	"unicast" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_sl_CastType_r16_enum2value_3[] = {
	0,	/* broadcast(0) */
	1,	/* groupcast(1) */
	3,	/* spare1(3) */
	2	/* unicast(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_CastType_r16_specs_3 = {
	asn_MAP_sl_CastType_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_CastType_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_CastType_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_CastType_r16_3 = {
	"sl-CastType-r16",
	"sl-CastType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_CastType_r16_tags_3,
	sizeof(asn_DEF_sl_CastType_r16_tags_3)
		/sizeof(asn_DEF_sl_CastType_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_sl_CastType_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_sl_CastType_r16_tags_3)
		/sizeof(asn_DEF_sl_CastType_r16_tags_3[0]), /* 2 */
	{ &asn_OER_type_sl_CastType_r16_constr_3, &asn_PER_type_sl_CastType_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_CastType_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_RLC_ModeIndicationList_r16_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SL_RLC_ModeIndication_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_RLC_ModeIndicationList_r16_specs_8 = {
	sizeof(struct SL_TxResourceReq_r16__sl_RLC_ModeIndicationList_r16),
	offsetof(struct SL_TxResourceReq_r16__sl_RLC_ModeIndicationList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_RLC_ModeIndicationList_r16_8 = {
	"sl-RLC-ModeIndicationList-r16",
	"sl-RLC-ModeIndicationList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8,
	sizeof(asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8)
		/sizeof(asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8)
		/sizeof(asn_DEF_sl_RLC_ModeIndicationList_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_sl_RLC_ModeIndicationList_r16_constr_8, &asn_PER_type_sl_RLC_ModeIndicationList_r16_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_sl_RLC_ModeIndicationList_r16_8,
	1,	/* Single element */
	&asn_SPC_sl_RLC_ModeIndicationList_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_QoS_InfoList_r16_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SL_QoS_Info_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_QoS_InfoList_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_QoS_InfoList_r16_specs_10 = {
	sizeof(struct SL_TxResourceReq_r16__sl_QoS_InfoList_r16),
	offsetof(struct SL_TxResourceReq_r16__sl_QoS_InfoList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_QoS_InfoList_r16_10 = {
	"sl-QoS-InfoList-r16",
	"sl-QoS-InfoList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_QoS_InfoList_r16_tags_10,
	sizeof(asn_DEF_sl_QoS_InfoList_r16_tags_10)
		/sizeof(asn_DEF_sl_QoS_InfoList_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_sl_QoS_InfoList_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_sl_QoS_InfoList_r16_tags_10)
		/sizeof(asn_DEF_sl_QoS_InfoList_r16_tags_10[0]), /* 2 */
	{ &asn_OER_type_sl_QoS_InfoList_r16_constr_10, &asn_PER_type_sl_QoS_InfoList_r16_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_sl_QoS_InfoList_r16_10,
	1,	/* Single element */
	&asn_SPC_sl_QoS_InfoList_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_TypeTxSyncList_r16_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_SL_TypeTxSync_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_TypeTxSyncList_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_TypeTxSyncList_r16_specs_12 = {
	sizeof(struct SL_TxResourceReq_r16__sl_TypeTxSyncList_r16),
	offsetof(struct SL_TxResourceReq_r16__sl_TypeTxSyncList_r16, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_TypeTxSyncList_r16_12 = {
	"sl-TypeTxSyncList-r16",
	"sl-TypeTxSyncList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_TypeTxSyncList_r16_tags_12,
	sizeof(asn_DEF_sl_TypeTxSyncList_r16_tags_12)
		/sizeof(asn_DEF_sl_TypeTxSyncList_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_sl_TypeTxSyncList_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_sl_TypeTxSyncList_r16_tags_12)
		/sizeof(asn_DEF_sl_TypeTxSyncList_r16_tags_12[0]), /* 2 */
	{ &asn_OER_type_sl_TypeTxSyncList_r16_constr_12, &asn_PER_type_sl_TypeTxSyncList_r16_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_sl_TypeTxSyncList_r16_12,
	1,	/* Single element */
	&asn_SPC_sl_TypeTxSyncList_r16_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_TxResourceReq_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_TxResourceReq_r16, sl_DestinationIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DestinationIdentity_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-DestinationIdentity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_TxResourceReq_r16, sl_CastType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_CastType_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CastType-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_TxResourceReq_r16, sl_RLC_ModeIndicationList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_sl_RLC_ModeIndicationList_r16_8,
		0,
		{ &asn_OER_memb_sl_RLC_ModeIndicationList_r16_constr_8, &asn_PER_memb_sl_RLC_ModeIndicationList_r16_constr_8,  memb_sl_RLC_ModeIndicationList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-RLC-ModeIndicationList-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_TxResourceReq_r16, sl_QoS_InfoList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_sl_QoS_InfoList_r16_10,
		0,
		{ &asn_OER_memb_sl_QoS_InfoList_r16_constr_10, &asn_PER_memb_sl_QoS_InfoList_r16_constr_10,  memb_sl_QoS_InfoList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-QoS-InfoList-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_TxResourceReq_r16, sl_TypeTxSyncList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_sl_TypeTxSyncList_r16_12,
		0,
		{ &asn_OER_memb_sl_TypeTxSyncList_r16_constr_12, &asn_PER_memb_sl_TypeTxSyncList_r16_constr_12,  memb_sl_TypeTxSyncList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-TypeTxSyncList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_TxResourceReq_r16, sl_TxInterestedFreqList_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxInterestedFreqList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-TxInterestedFreqList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_TxResourceReq_r16, sl_CapabilityInformationSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CapabilityInformationSidelink-r16"
		},
};
static const int asn_MAP_SL_TxResourceReq_r16_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SL_TxResourceReq_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_TxResourceReq_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DestinationIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-CastType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-RLC-ModeIndicationList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-QoS-InfoList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-TypeTxSyncList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sl-TxInterestedFreqList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* sl-CapabilityInformationSidelink-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_TxResourceReq_r16_specs_1 = {
	sizeof(struct SL_TxResourceReq_r16),
	offsetof(struct SL_TxResourceReq_r16, _asn_ctx),
	asn_MAP_SL_TxResourceReq_r16_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SL_TxResourceReq_r16_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_TxResourceReq_r16 = {
	"SL-TxResourceReq-r16",
	"SL-TxResourceReq-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_TxResourceReq_r16_tags_1,
	sizeof(asn_DEF_SL_TxResourceReq_r16_tags_1)
		/sizeof(asn_DEF_SL_TxResourceReq_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_TxResourceReq_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_TxResourceReq_r16_tags_1)
		/sizeof(asn_DEF_SL_TxResourceReq_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_TxResourceReq_r16_1,
	7,	/* Elements count */
	&asn_SPC_SL_TxResourceReq_r16_specs_1	/* Additional specs */
};

