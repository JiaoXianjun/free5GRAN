/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_RRCResume_H_
#define	_RRCResume_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCResume__criticalExtensions_PR {
	RRCResume__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCResume__criticalExtensions_PR_rrcResume,
	RRCResume__criticalExtensions_PR_criticalExtensionsFuture
} RRCResume__criticalExtensions_PR;

/* Forward declarations */
struct RRCResume_IEs;

/* RRCResume */
typedef struct RRCResume {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCResume__criticalExtensions {
		RRCResume__criticalExtensions_PR present;
		union RRCResume__criticalExtensions_u {
			struct RRCResume_IEs	*rrcResume;
			struct RRCResume__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResume_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResume;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResume_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResume_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCResume-IEs.h"

#endif	/* _RRCResume_H_ */
#include "asn_internal.h"
