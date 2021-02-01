/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "T-StatusProhibit.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_T_StatusProhibit_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_T_StatusProhibit_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_StatusProhibit_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms5" },
	{ 2,	4,	"ms10" },
	{ 3,	4,	"ms15" },
	{ 4,	4,	"ms20" },
	{ 5,	4,	"ms25" },
	{ 6,	4,	"ms30" },
	{ 7,	4,	"ms35" },
	{ 8,	4,	"ms40" },
	{ 9,	4,	"ms45" },
	{ 10,	4,	"ms50" },
	{ 11,	4,	"ms55" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms65" },
	{ 14,	4,	"ms70" },
	{ 15,	4,	"ms75" },
	{ 16,	4,	"ms80" },
	{ 17,	4,	"ms85" },
	{ 18,	4,	"ms90" },
	{ 19,	4,	"ms95" },
	{ 20,	5,	"ms100" },
	{ 21,	5,	"ms105" },
	{ 22,	5,	"ms110" },
	{ 23,	5,	"ms115" },
	{ 24,	5,	"ms120" },
	{ 25,	5,	"ms125" },
	{ 26,	5,	"ms130" },
	{ 27,	5,	"ms135" },
	{ 28,	5,	"ms140" },
	{ 29,	5,	"ms145" },
	{ 30,	5,	"ms150" },
	{ 31,	5,	"ms155" },
	{ 32,	5,	"ms160" },
	{ 33,	5,	"ms165" },
	{ 34,	5,	"ms170" },
	{ 35,	5,	"ms175" },
	{ 36,	5,	"ms180" },
	{ 37,	5,	"ms185" },
	{ 38,	5,	"ms190" },
	{ 39,	5,	"ms195" },
	{ 40,	5,	"ms200" },
	{ 41,	5,	"ms205" },
	{ 42,	5,	"ms210" },
	{ 43,	5,	"ms215" },
	{ 44,	5,	"ms220" },
	{ 45,	5,	"ms225" },
	{ 46,	5,	"ms230" },
	{ 47,	5,	"ms235" },
	{ 48,	5,	"ms240" },
	{ 49,	5,	"ms245" },
	{ 50,	5,	"ms250" },
	{ 51,	5,	"ms300" },
	{ 52,	5,	"ms350" },
	{ 53,	5,	"ms400" },
	{ 54,	5,	"ms450" },
	{ 55,	5,	"ms500" },
	{ 56,	5,	"ms800" },
	{ 57,	6,	"ms1000" },
	{ 58,	6,	"ms1200" },
	{ 59,	6,	"ms1600" },
	{ 60,	6,	"ms2000" },
	{ 61,	6,	"ms2400" },
	{ 62,	6,	"spare2" },
	{ 63,	6,	"spare1" }
};
static const unsigned int asn_MAP_T_StatusProhibit_enum2value_1[] = {
	0,	/* ms0(0) */
	2,	/* ms10(2) */
	20,	/* ms100(20) */
	57,	/* ms1000(57) */
	21,	/* ms105(21) */
	22,	/* ms110(22) */
	23,	/* ms115(23) */
	24,	/* ms120(24) */
	58,	/* ms1200(58) */
	25,	/* ms125(25) */
	26,	/* ms130(26) */
	27,	/* ms135(27) */
	28,	/* ms140(28) */
	29,	/* ms145(29) */
	3,	/* ms15(3) */
	30,	/* ms150(30) */
	31,	/* ms155(31) */
	32,	/* ms160(32) */
	59,	/* ms1600(59) */
	33,	/* ms165(33) */
	34,	/* ms170(34) */
	35,	/* ms175(35) */
	36,	/* ms180(36) */
	37,	/* ms185(37) */
	38,	/* ms190(38) */
	39,	/* ms195(39) */
	4,	/* ms20(4) */
	40,	/* ms200(40) */
	60,	/* ms2000(60) */
	41,	/* ms205(41) */
	42,	/* ms210(42) */
	43,	/* ms215(43) */
	44,	/* ms220(44) */
	45,	/* ms225(45) */
	46,	/* ms230(46) */
	47,	/* ms235(47) */
	48,	/* ms240(48) */
	61,	/* ms2400(61) */
	49,	/* ms245(49) */
	5,	/* ms25(5) */
	50,	/* ms250(50) */
	6,	/* ms30(6) */
	51,	/* ms300(51) */
	7,	/* ms35(7) */
	52,	/* ms350(52) */
	8,	/* ms40(8) */
	53,	/* ms400(53) */
	9,	/* ms45(9) */
	54,	/* ms450(54) */
	1,	/* ms5(1) */
	10,	/* ms50(10) */
	55,	/* ms500(55) */
	11,	/* ms55(11) */
	12,	/* ms60(12) */
	13,	/* ms65(13) */
	14,	/* ms70(14) */
	15,	/* ms75(15) */
	16,	/* ms80(16) */
	56,	/* ms800(56) */
	17,	/* ms85(17) */
	18,	/* ms90(18) */
	19,	/* ms95(19) */
	63,	/* spare1(63) */
	62	/* spare2(62) */
};
const asn_INTEGER_specifics_t asn_SPC_T_StatusProhibit_specs_1 = {
	asn_MAP_T_StatusProhibit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_StatusProhibit_enum2value_1,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_StatusProhibit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_StatusProhibit = {
	"T-StatusProhibit",
	"T-StatusProhibit",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_StatusProhibit_tags_1,
	sizeof(asn_DEF_T_StatusProhibit_tags_1)
		/sizeof(asn_DEF_T_StatusProhibit_tags_1[0]), /* 1 */
	asn_DEF_T_StatusProhibit_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_StatusProhibit_tags_1)
		/sizeof(asn_DEF_T_StatusProhibit_tags_1[0]), /* 1 */
	{ &asn_OER_type_T_StatusProhibit_constr_1, &asn_PER_type_T_StatusProhibit_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_StatusProhibit_specs_1	/* Additional specs */
};

