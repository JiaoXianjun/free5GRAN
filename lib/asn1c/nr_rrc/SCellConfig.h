/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SCellConfig_H_
#define	_SCellConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SCellIndex.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCellConfig__sCellState_r16 {
	SCellConfig__sCellState_r16_activated	= 0
} e_SCellConfig__sCellState_r16;
typedef enum SCellConfig__secondaryDRX_GroupConfig_r16 {
	SCellConfig__secondaryDRX_GroupConfig_r16_true	= 0
} e_SCellConfig__secondaryDRX_GroupConfig_r16;

/* Forward declarations */
struct ServingCellConfigCommon;
struct ServingCellConfig;
struct SSB_MTC;

/* SCellConfig */
typedef struct SCellConfig {
	SCellIndex_t	 sCellIndex;
	struct ServingCellConfigCommon	*sCellConfigCommon	/* OPTIONAL */;
	struct ServingCellConfig	*sCellConfigDedicated	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SSB_MTC	*smtc	/* OPTIONAL */;
	long	*sCellState_r16	/* OPTIONAL */;
	long	*secondaryDRX_GroupConfig_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sCellState_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_secondaryDRX_GroupConfig_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellConfig_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ServingCellConfigCommon.h"
#include "ServingCellConfig.h"
#include "SSB-MTC.h"

#endif	/* _SCellConfig_H_ */
#include "asn_internal.h"
