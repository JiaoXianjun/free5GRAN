/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_PSCCH_Config_r16_H_
#define	_SL_PSCCH_Config_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16 {
	SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16_n2	= 0,
	SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16_n3	= 1
} e_SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16;
typedef enum SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16 {
	SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n10	= 0,
	SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n12	= 1,
	SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n15	= 2,
	SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n20	= 3,
	SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n25	= 4
} e_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16;

/* SL-PSCCH-Config-r16 */
typedef struct SL_PSCCH_Config_r16 {
	long	*sl_TimeResourcePSCCH_r16	/* OPTIONAL */;
	long	*sl_FreqResourcePSCCH_r16	/* OPTIONAL */;
	long	*sl_DMRS_ScrambleID_r16	/* OPTIONAL */;
	long	*sl_NumReservedBits_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PSCCH_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_TimeResourcePSCCH_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_FreqResourcePSCCH_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PSCCH_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PSCCH_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PSCCH_Config_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PSCCH_Config_r16_H_ */
#include "asn_internal.h"
