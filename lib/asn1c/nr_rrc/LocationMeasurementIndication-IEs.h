/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_LocationMeasurementIndication_IEs_H_
#define	_LocationMeasurementIndication_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "NULL.h"
#include "LocationMeasurementInfo.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationMeasurementIndication_IEs__measurementIndication_PR {
	LocationMeasurementIndication_IEs__measurementIndication_PR_NOTHING,	/* No components present */
	LocationMeasurementIndication_IEs__measurementIndication_PR_release,
	LocationMeasurementIndication_IEs__measurementIndication_PR_setup
} LocationMeasurementIndication_IEs__measurementIndication_PR;

/* LocationMeasurementIndication-IEs */
typedef struct LocationMeasurementIndication_IEs {
	struct LocationMeasurementIndication_IEs__measurementIndication {
		LocationMeasurementIndication_IEs__measurementIndication_PR present;
		union LocationMeasurementIndication_IEs__measurementIndication_u {
			NULL_t	 release;
			LocationMeasurementInfo_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measurementIndication;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct LocationMeasurementIndication_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationMeasurementIndication_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationMeasurementIndication_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationMeasurementIndication_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationMeasurementIndication_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationMeasurementIndication_IEs_H_ */
#include "asn_internal.h"
