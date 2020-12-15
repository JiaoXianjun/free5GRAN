/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PowSav_ParametersFRX_Diff_r16_H_
#define	_PowSav_ParametersFRX_Diff_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowSav_ParametersFRX_Diff_r16__maxBW_Preference_r16 {
	PowSav_ParametersFRX_Diff_r16__maxBW_Preference_r16_supported	= 0
} e_PowSav_ParametersFRX_Diff_r16__maxBW_Preference_r16;
typedef enum PowSav_ParametersFRX_Diff_r16__maxMIMO_LayerPreference_r16 {
	PowSav_ParametersFRX_Diff_r16__maxMIMO_LayerPreference_r16_supported	= 0
} e_PowSav_ParametersFRX_Diff_r16__maxMIMO_LayerPreference_r16;

/* PowSav-ParametersFRX-Diff-r16 */
typedef struct PowSav_ParametersFRX_Diff_r16 {
	long	*maxBW_Preference_r16	/* OPTIONAL */;
	long	*maxMIMO_LayerPreference_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowSav_ParametersFRX_Diff_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxBW_Preference_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxMIMO_LayerPreference_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PowSav_ParametersFRX_Diff_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PowSav_ParametersFRX_Diff_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PowSav_ParametersFRX_Diff_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PowSav_ParametersFRX_Diff_r16_H_ */
#include "asn_internal.h"
