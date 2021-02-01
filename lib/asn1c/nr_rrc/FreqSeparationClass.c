/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "FreqSeparationClass.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_FreqSeparationClass_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_FreqSeparationClass_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_FreqSeparationClass_value2enum_1[] = {
	{ 0,	2,	"c1" },
	{ 1,	2,	"c2" },
	{ 2,	2,	"c3" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_FreqSeparationClass_enum2value_1[] = {
	0,	/* c1(0) */
	1,	/* c2(1) */
	2	/* c3(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_FreqSeparationClass_specs_1 = {
	asn_MAP_FreqSeparationClass_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FreqSeparationClass_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_FreqSeparationClass_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FreqSeparationClass = {
	"FreqSeparationClass",
	"FreqSeparationClass",
	&asn_OP_NativeEnumerated,
	asn_DEF_FreqSeparationClass_tags_1,
	sizeof(asn_DEF_FreqSeparationClass_tags_1)
		/sizeof(asn_DEF_FreqSeparationClass_tags_1[0]), /* 1 */
	asn_DEF_FreqSeparationClass_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreqSeparationClass_tags_1)
		/sizeof(asn_DEF_FreqSeparationClass_tags_1[0]), /* 1 */
	{ &asn_OER_type_FreqSeparationClass_constr_1, &asn_PER_type_FreqSeparationClass_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FreqSeparationClass_specs_1	/* Additional specs */
};

