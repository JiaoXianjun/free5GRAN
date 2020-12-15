/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB3_H_
#define	_SIB3_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqNeighCellList;
struct IntraFreqBlackCellList;
struct IntraFreqNeighCellList_v1610;
struct IntraFreqWhiteCellList_r16;
struct IntraFreqCAG_CellListPerPLMN_r16;

/* SIB3 */
typedef struct SIB3 {
	struct IntraFreqNeighCellList	*intraFreqNeighCellList	/* OPTIONAL */;
	struct IntraFreqBlackCellList	*intraFreqBlackCellList	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct IntraFreqNeighCellList_v1610	*intraFreqNeighCellList_v1610	/* OPTIONAL */;
	struct IntraFreqWhiteCellList_r16	*intraFreqWhiteCellList_r16	/* OPTIONAL */;
	struct SIB3__intraFreqCAG_CellList_r16 {
		A_SEQUENCE_OF(struct IntraFreqCAG_CellListPerPLMN_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *intraFreqCAG_CellList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB3;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB3_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB3_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqNeighCellList.h"
#include "IntraFreqBlackCellList.h"
#include "IntraFreqNeighCellList-v1610.h"
#include "IntraFreqWhiteCellList-r16.h"
#include "IntraFreqCAG-CellListPerPLMN-r16.h"

#endif	/* _SIB3_H_ */
#include "asn_internal.h"
