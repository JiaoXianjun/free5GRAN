/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_SlotFormatIndicator_H_
#define	_SlotFormatIndicator_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RNTI-Value.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "ServCellIndex.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SlotFormatCombinationsPerCell;

/* SlotFormatIndicator */
typedef struct SlotFormatIndicator {
	RNTI_Value_t	 sfi_RNTI;
	long	 dci_PayloadSize;
	struct SlotFormatIndicator__slotFormatCombToAddModList {
		A_SEQUENCE_OF(struct SlotFormatCombinationsPerCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *slotFormatCombToAddModList;
	struct SlotFormatIndicator__slotFormatCombToReleaseList {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *slotFormatCombToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SlotFormatIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SlotFormatIndicator;
extern asn_SEQUENCE_specifics_t asn_SPC_SlotFormatIndicator_specs_1;
extern asn_TYPE_member_t asn_MBR_SlotFormatIndicator_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SlotFormatCombinationsPerCell.h"

#endif	/* _SlotFormatIndicator_H_ */
#include "asn_internal.h"
