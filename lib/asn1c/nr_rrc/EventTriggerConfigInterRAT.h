/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_EventTriggerConfigInterRAT_H_
#define	_EventTriggerConfigInterRAT_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NR-RS-Type.h"
#include "ReportInterval.h"
#include "NativeEnumerated.h"
#include "MeasReportQuantity.h"
#include "NativeInteger.h"
#include "MeasTriggerQuantityEUTRA.h"
#include "BOOLEAN.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include "constr_SEQUENCE.h"
#include "MeasTriggerQuantity.h"
#include "MeasTriggerQuantityUTRA-FDD-r16.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventTriggerConfigInterRAT__eventId_PR {
	EventTriggerConfigInterRAT__eventId_PR_NOTHING,	/* No components present */
	EventTriggerConfigInterRAT__eventId_PR_eventB1,
	EventTriggerConfigInterRAT__eventId_PR_eventB2,
	/* Extensions may appear below */
	EventTriggerConfigInterRAT__eventId_PR_eventB1_UTRA_FDD_r16,
	EventTriggerConfigInterRAT__eventId_PR_eventB2_UTRA_FDD_r16
} EventTriggerConfigInterRAT__eventId_PR;
typedef enum EventTriggerConfigInterRAT__reportAmount {
	EventTriggerConfigInterRAT__reportAmount_r1	= 0,
	EventTriggerConfigInterRAT__reportAmount_r2	= 1,
	EventTriggerConfigInterRAT__reportAmount_r4	= 2,
	EventTriggerConfigInterRAT__reportAmount_r8	= 3,
	EventTriggerConfigInterRAT__reportAmount_r16	= 4,
	EventTriggerConfigInterRAT__reportAmount_r32	= 5,
	EventTriggerConfigInterRAT__reportAmount_r64	= 6,
	EventTriggerConfigInterRAT__reportAmount_infinity	= 7
} e_EventTriggerConfigInterRAT__reportAmount;

/* Forward declarations */
struct MeasReportQuantityUTRA_FDD_r16;

/* EventTriggerConfigInterRAT */
typedef struct EventTriggerConfigInterRAT {
	struct EventTriggerConfigInterRAT__eventId {
		EventTriggerConfigInterRAT__eventId_PR present;
		union EventTriggerConfigInterRAT__eventId_u {
			struct EventTriggerConfigInterRAT__eventId__eventB1 {
				MeasTriggerQuantityEUTRA_t	 b1_ThresholdEUTRA;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eventB1;
			struct EventTriggerConfigInterRAT__eventId__eventB2 {
				MeasTriggerQuantity_t	 b2_Threshold1;
				MeasTriggerQuantityEUTRA_t	 b2_Threshold2EUTRA;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eventB2;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct EventTriggerConfigInterRAT__eventId__eventB1_UTRA_FDD_r16 {
				MeasTriggerQuantityUTRA_FDD_r16_t	 b1_ThresholdUTRA_FDD_r16;
				BOOLEAN_t	 reportOnLeave_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eventB1_UTRA_FDD_r16;
			struct EventTriggerConfigInterRAT__eventId__eventB2_UTRA_FDD_r16 {
				MeasTriggerQuantity_t	 b2_Threshold1_r16;
				MeasTriggerQuantityUTRA_FDD_r16_t	 b2_Threshold2UTRA_FDD_r16;
				BOOLEAN_t	 reportOnLeave_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eventB2_UTRA_FDD_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} eventId;
	NR_RS_Type_t	 rsType;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	MeasReportQuantity_t	 reportQuantity;
	long	 maxReportCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasReportQuantityUTRA_FDD_r16	*reportQuantityUTRA_FDD_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTriggerConfigInterRAT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EventTriggerConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_EventTriggerConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_EventTriggerConfigInterRAT_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasReportQuantityUTRA-FDD-r16.h"

#endif	/* _EventTriggerConfigInterRAT_H_ */
#include "asn_internal.h"
