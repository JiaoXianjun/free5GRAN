/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_InterFreqCarrierFreqInfo_H_
#define	_InterFreqCarrierFreqInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include "NativeInteger.h"
#include "SubcarrierSpacing.h"
#include "BOOLEAN.h"
#include "Q-RxLevMin.h"
#include "Q-QualMin.h"
#include "P-Max.h"
#include "T-Reselection.h"
#include "ReselectionThreshold.h"
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority.h"
#include "Q-OffsetRange.h"
#include "ReselectionThresholdQ.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiFrequencyBandListNR_SIB;
struct ThresholdNR;
struct SSB_MTC;
struct SSB_ToMeasure;
struct SS_RSSI_Measurement;
struct SpeedStateScaleFactors;
struct InterFreqNeighCellList;
struct InterFreqBlackCellList;

/* InterFreqCarrierFreqInfo */
typedef struct InterFreqCarrierFreqInfo {
	ARFCN_ValueNR_t	 dl_CarrierFreq;
	struct MultiFrequencyBandListNR_SIB	*frequencyBandList	/* OPTIONAL */;
	struct MultiFrequencyBandListNR_SIB	*frequencyBandListSUL	/* OPTIONAL */;
	long	*nrofSS_BlocksToAverage	/* OPTIONAL */;
	struct ThresholdNR	*absThreshSS_BlocksConsolidation	/* OPTIONAL */;
	struct SSB_MTC	*smtc	/* OPTIONAL */;
	SubcarrierSpacing_t	 ssbSubcarrierSpacing;
	struct SSB_ToMeasure	*ssb_ToMeasure	/* OPTIONAL */;
	BOOLEAN_t	 deriveSSB_IndexFromCell;
	struct SS_RSSI_Measurement	*ss_RSSI_Measurement	/* OPTIONAL */;
	Q_RxLevMin_t	 q_RxLevMin;
	Q_RxLevMin_t	*q_RxLevMinSUL	/* OPTIONAL */;
	Q_QualMin_t	*q_QualMin	/* OPTIONAL */;
	P_Max_t	*p_Max	/* OPTIONAL */;
	T_Reselection_t	 t_ReselectionNR;
	struct SpeedStateScaleFactors	*t_ReselectionNR_SF	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_HighP;
	ReselectionThreshold_t	 threshX_LowP;
	struct InterFreqCarrierFreqInfo__threshX_Q {
		ReselectionThresholdQ_t	 threshX_HighQ;
		ReselectionThresholdQ_t	 threshX_LowQ;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	CellReselectionSubPriority_t	*cellReselectionSubPriority	/* OPTIONAL */;
	Q_OffsetRange_t	*q_OffsetFreq	/* DEFAULT 15 */;
	struct InterFreqNeighCellList	*interFreqNeighCellList	/* OPTIONAL */;
	struct InterFreqBlackCellList	*interFreqBlackCellList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_1[24];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiFrequencyBandListNR-SIB.h"
#include "ThresholdNR.h"
#include "SSB-MTC.h"
#include "SSB-ToMeasure.h"
#include "SS-RSSI-Measurement.h"
#include "SpeedStateScaleFactors.h"
#include "InterFreqNeighCellList.h"
#include "InterFreqBlackCellList.h"

#endif	/* _InterFreqCarrierFreqInfo_H_ */
#include "asn_internal.h"
