/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_UEInformationResponse_r16_H_
#define	_UEInformationResponse_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UEInformationResponse-r16-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEInformationResponse_r16__criticalExtensions_PR {
	UEInformationResponse_r16__criticalExtensions_PR_NOTHING,	/* No components present */
	UEInformationResponse_r16__criticalExtensions_PR_ueInformationResponse_r16,
	UEInformationResponse_r16__criticalExtensions_PR_criticalExtensionsFuture
} UEInformationResponse_r16__criticalExtensions_PR;

/* UEInformationResponse-r16 */
typedef struct UEInformationResponse_r16 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UEInformationResponse_r16__criticalExtensions {
		UEInformationResponse_r16__criticalExtensions_PR present;
		union UEInformationResponse_r16__criticalExtensions_u {
			UEInformationResponse_r16_IEs_t	 ueInformationResponse_r16;
			struct UEInformationResponse_r16__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationResponse_r16_H_ */
#include "asn_internal.h"
