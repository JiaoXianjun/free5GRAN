/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_LogMeasInfo_r16_H_
#define	_LogMeasInfo_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogMeasInfo_r16__anyCellSelectionDetected_r16 {
	LogMeasInfo_r16__anyCellSelectionDetected_r16_true	= 0
} e_LogMeasInfo_r16__anyCellSelectionDetected_r16;

/* Forward declarations */
struct LocationInfo_r16;
struct CGI_Info_Logging_r16;
struct MeasResultServingCell_r16;
struct MeasResultListLogging2NR_r16;
struct MeasResultList2EUTRA_r16;

/* LogMeasInfo-r16 */
typedef struct LogMeasInfo_r16 {
	struct LocationInfo_r16	*locationInfo_r16	/* OPTIONAL */;
	long	 relativeTimeStamp_r16;
	struct CGI_Info_Logging_r16	*servCellIdentity_r16	/* OPTIONAL */;
	struct MeasResultServingCell_r16	*measResultServingCell_r16	/* OPTIONAL */;
	struct LogMeasInfo_r16__measResultNeighCells_r16 {
		struct MeasResultListLogging2NR_r16	*measResultNeighCellListNR	/* OPTIONAL */;
		struct MeasResultList2EUTRA_r16	*measResultNeighCellListEUTRA	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultNeighCells_r16;
	long	*anyCellSelectionDetected_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_anyCellSelectionDetected_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LogMeasInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LogMeasInfo_r16_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LocationInfo-r16.h"
#include "CGI-Info-Logging-r16.h"
#include "MeasResultServingCell-r16.h"
#include "MeasResultListLogging2NR-r16.h"
#include "MeasResultList2EUTRA-r16.h"

#endif	/* _LogMeasInfo_r16_H_ */
#include "asn_internal.h"
