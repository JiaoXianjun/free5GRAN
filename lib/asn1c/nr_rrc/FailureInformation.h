/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_FailureInformation_H_
#define	_FailureInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FailureInformation-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureInformation__criticalExtensions_PR {
	FailureInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	FailureInformation__criticalExtensions_PR_failureInformation,
	FailureInformation__criticalExtensions_PR_criticalExtensionsFuture
} FailureInformation__criticalExtensions_PR;

/* FailureInformation */
typedef struct FailureInformation {
	struct FailureInformation__criticalExtensions {
		FailureInformation__criticalExtensions_PR present;
		union FailureInformation__criticalExtensions_u {
			FailureInformation_IEs_t	 failureInformation;
			struct FailureInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FailureInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureInformation_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureInformation_H_ */
#include "asn_internal.h"
