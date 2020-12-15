/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB1_v1610_IEs_H_
#define	_SIB1_v1610_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16 {
	SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16_true	= 0
} e_SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16;
typedef enum SIB1_v1610_IEs__idleModeMeasurementsNR_r16 {
	SIB1_v1610_IEs__idleModeMeasurementsNR_r16_true	= 0
} e_SIB1_v1610_IEs__idleModeMeasurementsNR_r16;

/* Forward declarations */
struct PosSI_SchedulingInfo_r16;

/* SIB1-v1610-IEs */
typedef struct SIB1_v1610_IEs {
	long	*idleModeMeasurementsEUTRA_r16	/* OPTIONAL */;
	long	*idleModeMeasurementsNR_r16	/* OPTIONAL */;
	struct PosSI_SchedulingInfo_r16	*posSI_SchedulingInfo_r16	/* OPTIONAL */;
	struct SIB1_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB1_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_idleModeMeasurementsEUTRA_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idleModeMeasurementsNR_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB1_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB1_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB1_v1610_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PosSI-SchedulingInfo-r16.h"

#endif	/* _SIB1_v1610_IEs_H_ */
#include "asn_internal.h"
