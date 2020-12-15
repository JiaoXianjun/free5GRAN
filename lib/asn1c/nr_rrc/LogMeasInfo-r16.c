/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "LogMeasInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_relativeTimeStamp_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_anyCellSelectionDetected_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_anyCellSelectionDetected_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_relativeTimeStamp_r16_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..7200) */,
	-1};
static asn_per_constraints_t asn_PER_memb_relativeTimeStamp_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7200 }	/* (0..7200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measResultNeighCells_r16_6[] = {
	{ ATF_POINTER, 2, offsetof(struct LogMeasInfo_r16__measResultNeighCells_r16, measResultNeighCellListNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListLogging2NR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCellListNR"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r16__measResultNeighCells_r16, measResultNeighCellListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCellListEUTRA"
		},
};
static const int asn_MAP_measResultNeighCells_r16_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_measResultNeighCells_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r16_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultNeighCellListNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultNeighCellListEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultNeighCells_r16_specs_6 = {
	sizeof(struct LogMeasInfo_r16__measResultNeighCells_r16),
	offsetof(struct LogMeasInfo_r16__measResultNeighCells_r16, _asn_ctx),
	asn_MAP_measResultNeighCells_r16_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_measResultNeighCells_r16_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r16_6 = {
	"measResultNeighCells-r16",
	"measResultNeighCells-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultNeighCells_r16_tags_6,
	sizeof(asn_DEF_measResultNeighCells_r16_tags_6)
		/sizeof(asn_DEF_measResultNeighCells_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_measResultNeighCells_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_measResultNeighCells_r16_tags_6)
		/sizeof(asn_DEF_measResultNeighCells_r16_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultNeighCells_r16_6,
	2,	/* Elements count */
	&asn_SPC_measResultNeighCells_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_anyCellSelectionDetected_r16_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_anyCellSelectionDetected_r16_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_anyCellSelectionDetected_r16_specs_9 = {
	asn_MAP_anyCellSelectionDetected_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_anyCellSelectionDetected_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_anyCellSelectionDetected_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_anyCellSelectionDetected_r16_9 = {
	"anyCellSelectionDetected-r16",
	"anyCellSelectionDetected-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_anyCellSelectionDetected_r16_tags_9,
	sizeof(asn_DEF_anyCellSelectionDetected_r16_tags_9)
		/sizeof(asn_DEF_anyCellSelectionDetected_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_anyCellSelectionDetected_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_anyCellSelectionDetected_r16_tags_9)
		/sizeof(asn_DEF_anyCellSelectionDetected_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_anyCellSelectionDetected_r16_constr_9, &asn_PER_type_anyCellSelectionDetected_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_anyCellSelectionDetected_r16_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LogMeasInfo_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r16, locationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r16, relativeTimeStamp_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_relativeTimeStamp_r16_constr_3, &asn_PER_memb_relativeTimeStamp_r16_constr_3,  memb_relativeTimeStamp_r16_constraint_1 },
		0, 0, /* No default value */
		"relativeTimeStamp-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LogMeasInfo_r16, servCellIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGI_Info_Logging_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellIdentity-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r16, measResultServingCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultServingCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServingCell-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogMeasInfo_r16, measResultNeighCells_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_measResultNeighCells_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LogMeasInfo_r16, anyCellSelectionDetected_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_anyCellSelectionDetected_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anyCellSelectionDetected-r16"
		},
};
static const int asn_MAP_LogMeasInfo_r16_oms_1[] = { 0, 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_LogMeasInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LogMeasInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* relativeTimeStamp-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* servCellIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultServingCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measResultNeighCells-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* anyCellSelectionDetected-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LogMeasInfo_r16_specs_1 = {
	sizeof(struct LogMeasInfo_r16),
	offsetof(struct LogMeasInfo_r16, _asn_ctx),
	asn_MAP_LogMeasInfo_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LogMeasInfo_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LogMeasInfo_r16 = {
	"LogMeasInfo-r16",
	"LogMeasInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LogMeasInfo_r16_tags_1,
	sizeof(asn_DEF_LogMeasInfo_r16_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_LogMeasInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LogMeasInfo_r16_tags_1)
		/sizeof(asn_DEF_LogMeasInfo_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LogMeasInfo_r16_1,
	6,	/* Elements count */
	&asn_SPC_LogMeasInfo_r16_specs_1	/* Additional specs */
};

