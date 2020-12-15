/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MobilityFromNRCommand_H_
#define	_MobilityFromNRCommand_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "MobilityFromNRCommand-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityFromNRCommand__criticalExtensions_PR {
	MobilityFromNRCommand__criticalExtensions_PR_NOTHING,	/* No components present */
	MobilityFromNRCommand__criticalExtensions_PR_mobilityFromNRCommand,
	MobilityFromNRCommand__criticalExtensions_PR_criticalExtensionsFuture
} MobilityFromNRCommand__criticalExtensions_PR;

/* MobilityFromNRCommand */
typedef struct MobilityFromNRCommand {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct MobilityFromNRCommand__criticalExtensions {
		MobilityFromNRCommand__criticalExtensions_PR present;
		union MobilityFromNRCommand__criticalExtensions_u {
			MobilityFromNRCommand_IEs_t	 mobilityFromNRCommand;
			struct MobilityFromNRCommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromNRCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromNRCommand;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityFromNRCommand_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityFromNRCommand_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromNRCommand_H_ */
#include "asn_internal.h"
