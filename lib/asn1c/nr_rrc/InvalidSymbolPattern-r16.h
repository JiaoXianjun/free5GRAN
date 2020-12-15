/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_InvalidSymbolPattern_r16_H_
#define	_InvalidSymbolPattern_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InvalidSymbolPattern_r16__symbols_r16_PR {
	InvalidSymbolPattern_r16__symbols_r16_PR_NOTHING,	/* No components present */
	InvalidSymbolPattern_r16__symbols_r16_PR_oneSlot,
	InvalidSymbolPattern_r16__symbols_r16_PR_twoSlots
} InvalidSymbolPattern_r16__symbols_r16_PR;
typedef enum InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR {
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_NOTHING,	/* No components present */
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n2,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n4,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n5,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n8,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n10,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n20,
	InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR_n40
} InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR;

/* InvalidSymbolPattern-r16 */
typedef struct InvalidSymbolPattern_r16 {
	struct InvalidSymbolPattern_r16__symbols_r16 {
		InvalidSymbolPattern_r16__symbols_r16_PR present;
		union InvalidSymbolPattern_r16__symbols_r16_u {
			BIT_STRING_t	 oneSlot;
			BIT_STRING_t	 twoSlots;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} symbols_r16;
	struct InvalidSymbolPattern_r16__periodicityAndPattern_r16 {
		InvalidSymbolPattern_r16__periodicityAndPattern_r16_PR present;
		union InvalidSymbolPattern_r16__periodicityAndPattern_r16_u {
			BIT_STRING_t	 n2;
			BIT_STRING_t	 n4;
			BIT_STRING_t	 n5;
			BIT_STRING_t	 n8;
			BIT_STRING_t	 n10;
			BIT_STRING_t	 n20;
			BIT_STRING_t	 n40;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *periodicityAndPattern_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InvalidSymbolPattern_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InvalidSymbolPattern_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_InvalidSymbolPattern_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_InvalidSymbolPattern_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InvalidSymbolPattern_r16_H_ */
#include "asn_internal.h"
