/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "InvalidSymbolPattern-r16.h"

static int
memb_oneSlot_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 14)) {
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
memb_twoSlots_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 28)) {
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
memb_n2_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
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
memb_n4_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
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
memb_n5_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
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
memb_n8_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
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
memb_n10_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
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
memb_n20_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 20)) {
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
memb_n40_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 40)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_oneSlot_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	14	/* (SIZE(14..14)) */};
static asn_per_constraints_t asn_PER_memb_oneSlot_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  14,  14 }	/* (SIZE(14..14)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_twoSlots_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	28	/* (SIZE(28..28)) */};
static asn_per_constraints_t asn_PER_memb_twoSlots_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_symbols_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_symbols_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n2_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_n2_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n4_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_n4_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n5_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_n5_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n8_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_n8_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n10_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_n10_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n20_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	20	/* (SIZE(20..20)) */};
static asn_per_constraints_t asn_PER_memb_n20_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n40_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	40	/* (SIZE(40..40)) */};
static asn_per_constraints_t asn_PER_memb_n40_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_periodicityAndPattern_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_periodicityAndPattern_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_symbols_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__symbols_r16, choice.oneSlot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_oneSlot_constr_3, &asn_PER_memb_oneSlot_constr_3,  memb_oneSlot_constraint_2 },
		0, 0, /* No default value */
		"oneSlot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__symbols_r16, choice.twoSlots),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_twoSlots_constr_4, &asn_PER_memb_twoSlots_constr_4,  memb_twoSlots_constraint_2 },
		0, 0, /* No default value */
		"twoSlots"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_symbols_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneSlot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* twoSlots */
};
static asn_CHOICE_specifics_t asn_SPC_symbols_r16_specs_2 = {
	sizeof(struct InvalidSymbolPattern_r16__symbols_r16),
	offsetof(struct InvalidSymbolPattern_r16__symbols_r16, _asn_ctx),
	offsetof(struct InvalidSymbolPattern_r16__symbols_r16, present),
	sizeof(((struct InvalidSymbolPattern_r16__symbols_r16 *)0)->present),
	asn_MAP_symbols_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_symbols_r16_2 = {
	"symbols-r16",
	"symbols-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_symbols_r16_constr_2, &asn_PER_type_symbols_r16_constr_2, CHOICE_constraint },
	asn_MBR_symbols_r16_2,
	2,	/* Elements count */
	&asn_SPC_symbols_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodicityAndPattern_r16_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n2_constr_6, &asn_PER_memb_n2_constr_6,  memb_n2_constraint_5 },
		0, 0, /* No default value */
		"n2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n4_constr_7, &asn_PER_memb_n4_constr_7,  memb_n4_constraint_5 },
		0, 0, /* No default value */
		"n4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n5),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n5_constr_8, &asn_PER_memb_n5_constr_8,  memb_n5_constraint_5 },
		0, 0, /* No default value */
		"n5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n8_constr_9, &asn_PER_memb_n8_constr_9,  memb_n8_constraint_5 },
		0, 0, /* No default value */
		"n8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n10_constr_10, &asn_PER_memb_n10_constr_10,  memb_n10_constraint_5 },
		0, 0, /* No default value */
		"n10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n20),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n20_constr_11, &asn_PER_memb_n20_constr_11,  memb_n20_constraint_5 },
		0, 0, /* No default value */
		"n20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, choice.n40),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n40_constr_12, &asn_PER_memb_n40_constr_12,  memb_n40_constraint_5 },
		0, 0, /* No default value */
		"n40"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_periodicityAndPattern_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n5 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n8 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n20 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* n40 */
};
static asn_CHOICE_specifics_t asn_SPC_periodicityAndPattern_r16_specs_5 = {
	sizeof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16),
	offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, _asn_ctx),
	offsetof(struct InvalidSymbolPattern_r16__periodicityAndPattern_r16, present),
	sizeof(((struct InvalidSymbolPattern_r16__periodicityAndPattern_r16 *)0)->present),
	asn_MAP_periodicityAndPattern_r16_tag2el_5,
	7,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityAndPattern_r16_5 = {
	"periodicityAndPattern-r16",
	"periodicityAndPattern-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_periodicityAndPattern_r16_constr_5, &asn_PER_type_periodicityAndPattern_r16_constr_5, CHOICE_constraint },
	asn_MBR_periodicityAndPattern_r16_5,
	7,	/* Elements count */
	&asn_SPC_periodicityAndPattern_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_InvalidSymbolPattern_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InvalidSymbolPattern_r16, symbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_symbols_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"symbols-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct InvalidSymbolPattern_r16, periodicityAndPattern_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_periodicityAndPattern_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndPattern-r16"
		},
};
static const int asn_MAP_InvalidSymbolPattern_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_InvalidSymbolPattern_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InvalidSymbolPattern_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* symbols-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicityAndPattern-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_InvalidSymbolPattern_r16_specs_1 = {
	sizeof(struct InvalidSymbolPattern_r16),
	offsetof(struct InvalidSymbolPattern_r16, _asn_ctx),
	asn_MAP_InvalidSymbolPattern_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_InvalidSymbolPattern_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InvalidSymbolPattern_r16 = {
	"InvalidSymbolPattern-r16",
	"InvalidSymbolPattern-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_InvalidSymbolPattern_r16_tags_1,
	sizeof(asn_DEF_InvalidSymbolPattern_r16_tags_1)
		/sizeof(asn_DEF_InvalidSymbolPattern_r16_tags_1[0]), /* 1 */
	asn_DEF_InvalidSymbolPattern_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_InvalidSymbolPattern_r16_tags_1)
		/sizeof(asn_DEF_InvalidSymbolPattern_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InvalidSymbolPattern_r16_1,
	2,	/* Elements count */
	&asn_SPC_InvalidSymbolPattern_r16_specs_1	/* Additional specs */
};

