/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "PDCP-Parameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_maxNumberROHC_ContextSessions_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberROHC_ContextSessions_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_uplinkOnlyROHC_Profiles_constr_30 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_uplinkOnlyROHC_Profiles_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_continueROHC_Context_constr_32 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_continueROHC_Context_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_outOfOrderDelivery_constr_34 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_outOfOrderDelivery_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_shortSN_constr_36 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_shortSN_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdcp_DuplicationSRB_constr_38 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdcp_DuplicationSRB_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdcp_DuplicationMCG_OrSCG_DRB_constr_40 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdcp_DuplicationMCG_OrSCG_DRB_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_supportedROHC_Profiles_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0000),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0001),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0001"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0002),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0002"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0003),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0003"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0004),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0004"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0006),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0101),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0101"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0102),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0102"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0103),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0103"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters__supportedROHC_Profiles, profile0x0104),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0104"
		},
};
static const ber_tlv_tag_t asn_DEF_supportedROHC_Profiles_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_supportedROHC_Profiles_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0000 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0001 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0002 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0003 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0004 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0006 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* profile0x0101 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* profile0x0102 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* profile0x0103 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* profile0x0104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_supportedROHC_Profiles_specs_2 = {
	sizeof(struct PDCP_Parameters__supportedROHC_Profiles),
	offsetof(struct PDCP_Parameters__supportedROHC_Profiles, _asn_ctx),
	asn_MAP_supportedROHC_Profiles_tag2el_2,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedROHC_Profiles_2 = {
	"supportedROHC-Profiles",
	"supportedROHC-Profiles",
	&asn_OP_SEQUENCE,
	asn_DEF_supportedROHC_Profiles_tags_2,
	sizeof(asn_DEF_supportedROHC_Profiles_tags_2)
		/sizeof(asn_DEF_supportedROHC_Profiles_tags_2[0]) - 1, /* 1 */
	asn_DEF_supportedROHC_Profiles_tags_2,	/* Same as above */
	sizeof(asn_DEF_supportedROHC_Profiles_tags_2)
		/sizeof(asn_DEF_supportedROHC_Profiles_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_supportedROHC_Profiles_2,
	10,	/* Elements count */
	&asn_SPC_supportedROHC_Profiles_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberROHC_ContextSessions_value2enum_13[] = {
	{ 0,	3,	"cs2" },
	{ 1,	3,	"cs4" },
	{ 2,	3,	"cs8" },
	{ 3,	4,	"cs12" },
	{ 4,	4,	"cs16" },
	{ 5,	4,	"cs24" },
	{ 6,	4,	"cs32" },
	{ 7,	4,	"cs48" },
	{ 8,	4,	"cs64" },
	{ 9,	5,	"cs128" },
	{ 10,	5,	"cs256" },
	{ 11,	5,	"cs512" },
	{ 12,	6,	"cs1024" },
	{ 13,	7,	"cs16384" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_maxNumberROHC_ContextSessions_enum2value_13[] = {
	12,	/* cs1024(12) */
	3,	/* cs12(3) */
	9,	/* cs128(9) */
	4,	/* cs16(4) */
	13,	/* cs16384(13) */
	0,	/* cs2(0) */
	5,	/* cs24(5) */
	10,	/* cs256(10) */
	6,	/* cs32(6) */
	1,	/* cs4(1) */
	7,	/* cs48(7) */
	11,	/* cs512(11) */
	8,	/* cs64(8) */
	2,	/* cs8(2) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberROHC_ContextSessions_specs_13 = {
	asn_MAP_maxNumberROHC_ContextSessions_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberROHC_ContextSessions_enum2value_13,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberROHC_ContextSessions_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberROHC_ContextSessions_13 = {
	"maxNumberROHC-ContextSessions",
	"maxNumberROHC-ContextSessions",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberROHC_ContextSessions_tags_13,
	sizeof(asn_DEF_maxNumberROHC_ContextSessions_tags_13)
		/sizeof(asn_DEF_maxNumberROHC_ContextSessions_tags_13[0]) - 1, /* 1 */
	asn_DEF_maxNumberROHC_ContextSessions_tags_13,	/* Same as above */
	sizeof(asn_DEF_maxNumberROHC_ContextSessions_tags_13)
		/sizeof(asn_DEF_maxNumberROHC_ContextSessions_tags_13[0]), /* 2 */
	{ &asn_OER_type_maxNumberROHC_ContextSessions_constr_13, &asn_PER_type_maxNumberROHC_ContextSessions_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberROHC_ContextSessions_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_uplinkOnlyROHC_Profiles_value2enum_30[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_uplinkOnlyROHC_Profiles_enum2value_30[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_uplinkOnlyROHC_Profiles_specs_30 = {
	asn_MAP_uplinkOnlyROHC_Profiles_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_uplinkOnlyROHC_Profiles_enum2value_30,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_uplinkOnlyROHC_Profiles_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uplinkOnlyROHC_Profiles_30 = {
	"uplinkOnlyROHC-Profiles",
	"uplinkOnlyROHC-Profiles",
	&asn_OP_NativeEnumerated,
	asn_DEF_uplinkOnlyROHC_Profiles_tags_30,
	sizeof(asn_DEF_uplinkOnlyROHC_Profiles_tags_30)
		/sizeof(asn_DEF_uplinkOnlyROHC_Profiles_tags_30[0]) - 1, /* 1 */
	asn_DEF_uplinkOnlyROHC_Profiles_tags_30,	/* Same as above */
	sizeof(asn_DEF_uplinkOnlyROHC_Profiles_tags_30)
		/sizeof(asn_DEF_uplinkOnlyROHC_Profiles_tags_30[0]), /* 2 */
	{ &asn_OER_type_uplinkOnlyROHC_Profiles_constr_30, &asn_PER_type_uplinkOnlyROHC_Profiles_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_uplinkOnlyROHC_Profiles_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_continueROHC_Context_value2enum_32[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_continueROHC_Context_enum2value_32[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_continueROHC_Context_specs_32 = {
	asn_MAP_continueROHC_Context_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_continueROHC_Context_enum2value_32,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_continueROHC_Context_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_continueROHC_Context_32 = {
	"continueROHC-Context",
	"continueROHC-Context",
	&asn_OP_NativeEnumerated,
	asn_DEF_continueROHC_Context_tags_32,
	sizeof(asn_DEF_continueROHC_Context_tags_32)
		/sizeof(asn_DEF_continueROHC_Context_tags_32[0]) - 1, /* 1 */
	asn_DEF_continueROHC_Context_tags_32,	/* Same as above */
	sizeof(asn_DEF_continueROHC_Context_tags_32)
		/sizeof(asn_DEF_continueROHC_Context_tags_32[0]), /* 2 */
	{ &asn_OER_type_continueROHC_Context_constr_32, &asn_PER_type_continueROHC_Context_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_continueROHC_Context_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_outOfOrderDelivery_value2enum_34[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_outOfOrderDelivery_enum2value_34[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_outOfOrderDelivery_specs_34 = {
	asn_MAP_outOfOrderDelivery_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_outOfOrderDelivery_enum2value_34,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_outOfOrderDelivery_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_outOfOrderDelivery_34 = {
	"outOfOrderDelivery",
	"outOfOrderDelivery",
	&asn_OP_NativeEnumerated,
	asn_DEF_outOfOrderDelivery_tags_34,
	sizeof(asn_DEF_outOfOrderDelivery_tags_34)
		/sizeof(asn_DEF_outOfOrderDelivery_tags_34[0]) - 1, /* 1 */
	asn_DEF_outOfOrderDelivery_tags_34,	/* Same as above */
	sizeof(asn_DEF_outOfOrderDelivery_tags_34)
		/sizeof(asn_DEF_outOfOrderDelivery_tags_34[0]), /* 2 */
	{ &asn_OER_type_outOfOrderDelivery_constr_34, &asn_PER_type_outOfOrderDelivery_constr_34, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_outOfOrderDelivery_specs_34	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_shortSN_value2enum_36[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_shortSN_enum2value_36[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortSN_specs_36 = {
	asn_MAP_shortSN_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_shortSN_enum2value_36,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortSN_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortSN_36 = {
	"shortSN",
	"shortSN",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortSN_tags_36,
	sizeof(asn_DEF_shortSN_tags_36)
		/sizeof(asn_DEF_shortSN_tags_36[0]) - 1, /* 1 */
	asn_DEF_shortSN_tags_36,	/* Same as above */
	sizeof(asn_DEF_shortSN_tags_36)
		/sizeof(asn_DEF_shortSN_tags_36[0]), /* 2 */
	{ &asn_OER_type_shortSN_constr_36, &asn_PER_type_shortSN_constr_36, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortSN_specs_36	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdcp_DuplicationSRB_value2enum_38[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pdcp_DuplicationSRB_enum2value_38[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdcp_DuplicationSRB_specs_38 = {
	asn_MAP_pdcp_DuplicationSRB_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_DuplicationSRB_enum2value_38,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdcp_DuplicationSRB_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_DuplicationSRB_38 = {
	"pdcp-DuplicationSRB",
	"pdcp-DuplicationSRB",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdcp_DuplicationSRB_tags_38,
	sizeof(asn_DEF_pdcp_DuplicationSRB_tags_38)
		/sizeof(asn_DEF_pdcp_DuplicationSRB_tags_38[0]) - 1, /* 1 */
	asn_DEF_pdcp_DuplicationSRB_tags_38,	/* Same as above */
	sizeof(asn_DEF_pdcp_DuplicationSRB_tags_38)
		/sizeof(asn_DEF_pdcp_DuplicationSRB_tags_38[0]), /* 2 */
	{ &asn_OER_type_pdcp_DuplicationSRB_constr_38, &asn_PER_type_pdcp_DuplicationSRB_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_DuplicationSRB_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdcp_DuplicationMCG_OrSCG_DRB_value2enum_40[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pdcp_DuplicationMCG_OrSCG_DRB_enum2value_40[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdcp_DuplicationMCG_OrSCG_DRB_specs_40 = {
	asn_MAP_pdcp_DuplicationMCG_OrSCG_DRB_value2enum_40,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_DuplicationMCG_OrSCG_DRB_enum2value_40,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_40 = {
	"pdcp-DuplicationMCG-OrSCG-DRB",
	"pdcp-DuplicationMCG-OrSCG-DRB",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40,
	sizeof(asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40)
		/sizeof(asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40[0]) - 1, /* 1 */
	asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40,	/* Same as above */
	sizeof(asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40)
		/sizeof(asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_tags_40[0]), /* 2 */
	{ &asn_OER_type_pdcp_DuplicationMCG_OrSCG_DRB_constr_40, &asn_PER_type_pdcp_DuplicationMCG_OrSCG_DRB_constr_40, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_DuplicationMCG_OrSCG_DRB_specs_40	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCP_Parameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters, supportedROHC_Profiles),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_supportedROHC_Profiles_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedROHC-Profiles"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Parameters, maxNumberROHC_ContextSessions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberROHC_ContextSessions_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberROHC-ContextSessions"
		},
	{ ATF_POINTER, 6, offsetof(struct PDCP_Parameters, uplinkOnlyROHC_Profiles),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_uplinkOnlyROHC_Profiles_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkOnlyROHC-Profiles"
		},
	{ ATF_POINTER, 5, offsetof(struct PDCP_Parameters, continueROHC_Context),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_continueROHC_Context_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"continueROHC-Context"
		},
	{ ATF_POINTER, 4, offsetof(struct PDCP_Parameters, outOfOrderDelivery),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_outOfOrderDelivery_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"outOfOrderDelivery"
		},
	{ ATF_POINTER, 3, offsetof(struct PDCP_Parameters, shortSN),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortSN_36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortSN"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCP_Parameters, pdcp_DuplicationSRB),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_DuplicationSRB_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-DuplicationSRB"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Parameters, pdcp_DuplicationMCG_OrSCG_DRB),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_DuplicationMCG_OrSCG_DRB_40,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-DuplicationMCG-OrSCG-DRB"
		},
};
static const int asn_MAP_PDCP_Parameters_oms_1[] = { 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PDCP_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedROHC-Profiles */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberROHC-ContextSessions */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkOnlyROHC-Profiles */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* continueROHC-Context */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* outOfOrderDelivery */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* shortSN */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdcp-DuplicationSRB */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* pdcp-DuplicationMCG-OrSCG-DRB */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCP_Parameters_specs_1 = {
	sizeof(struct PDCP_Parameters),
	offsetof(struct PDCP_Parameters, _asn_ctx),
	asn_MAP_PDCP_Parameters_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PDCP_Parameters_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters = {
	"PDCP-Parameters",
	"PDCP-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCP_Parameters_tags_1,
	sizeof(asn_DEF_PDCP_Parameters_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Parameters_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCP_Parameters_1,
	8,	/* Elements count */
	&asn_SPC_PDCP_Parameters_specs_1	/* Additional specs */
};

