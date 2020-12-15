/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_UE_SelectedConfig_r16_H_
#define	_SL_UE_SelectedConfig_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16 {
	SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16_v0	= 0,
	SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16_v0dot2	= 1,
	SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16_v0dot4	= 2,
	SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16_v0dot6	= 3,
	SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16_v0dot8	= 4
} e_SL_UE_SelectedConfig_r16__sl_ProbResourceKeep_r16;
typedef enum SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16 {
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n1	= 0,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n2	= 1,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n3	= 2,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n4	= 3,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n5	= 4,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n6	= 5,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n7	= 6,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n8	= 7,
	SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16_n9	= 8
} e_SL_UE_SelectedConfig_r16__sl_ReselectAfter_r16;

/* Forward declarations */
struct SL_PSSCH_TxConfigList_r16;
struct SL_CBR_CommonTxConfigList_r16;

/* SL-UE-SelectedConfig-r16 */
typedef struct SL_UE_SelectedConfig_r16 {
	struct SL_PSSCH_TxConfigList_r16	*sl_PSSCH_TxConfigList_r16	/* OPTIONAL */;
	long	*sl_ProbResourceKeep_r16	/* OPTIONAL */;
	long	*sl_ReselectAfter_r16	/* OPTIONAL */;
	struct SL_CBR_CommonTxConfigList_r16	*sl_CBR_CommonTxConfigList_r16	/* OPTIONAL */;
	long	*ul_PrioritizationThres_r16	/* OPTIONAL */;
	long	*sl_PrioritizationThres_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_UE_SelectedConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_ProbResourceKeep_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_ReselectAfter_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_UE_SelectedConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_UE_SelectedConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_UE_SelectedConfig_r16_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-PSSCH-TxConfigList-r16.h"
#include "SL-CBR-CommonTxConfigList-r16.h"

#endif	/* _SL_UE_SelectedConfig_r16_H_ */
#include "asn_internal.h"
