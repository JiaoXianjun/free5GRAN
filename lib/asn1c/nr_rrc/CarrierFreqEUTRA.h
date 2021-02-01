/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_CarrierFreqEUTRA_H_
#define	_CarrierFreqEUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "EUTRA-AllowedMeasBandwidth.h"
#include "EUTRA-PresenceAntennaPort1.h"
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority.h"
#include "ReselectionThreshold.h"
#include "NativeInteger.h"
#include "ReselectionThresholdQ.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_MultiBandInfoList;
struct EUTRA_FreqNeighCellList;
struct EUTRA_FreqBlackCellList;

/* CarrierFreqEUTRA */
typedef struct CarrierFreqEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	struct EUTRA_MultiBandInfoList	*eutra_multiBandInfoList;	/* OPTIONAL */
	struct EUTRA_FreqNeighCellList	*eutra_FreqNeighCellList;	/* OPTIONAL */
	struct EUTRA_FreqBlackCellList	*eutra_BlackCellList;	/* OPTIONAL */
	EUTRA_AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	EUTRA_PresenceAntennaPort1_t	 presenceAntennaPort1;
	CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	CellReselectionSubPriority_t	*cellReselectionSubPriority;	/* OPTIONAL */
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	long	 q_RxLevMin;
	long	 q_QualMin;
	long	 p_MaxEUTRA;
	struct CarrierFreqEUTRA__threshX_Q {
		ReselectionThresholdQ_t	 threshX_HighQ;
		ReselectionThresholdQ_t	 threshX_LowQ;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqEUTRA_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-MultiBandInfoList.h"
#include "EUTRA-FreqNeighCellList.h"
#include "EUTRA-FreqBlackCellList.h"

#endif	/* _CarrierFreqEUTRA_H_ */
#include "asn_internal.h"
