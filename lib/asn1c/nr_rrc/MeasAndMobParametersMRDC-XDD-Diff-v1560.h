/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasAndMobParametersMRDC_XDD_Diff_v1560_H_
#define	_MeasAndMobParametersMRDC_XDD_Diff_v1560_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasAndMobParametersMRDC_XDD_Diff_v1560__sftd_MeasPSCell_NEDC {
	MeasAndMobParametersMRDC_XDD_Diff_v1560__sftd_MeasPSCell_NEDC_supported	= 0
} e_MeasAndMobParametersMRDC_XDD_Diff_v1560__sftd_MeasPSCell_NEDC;

/* MeasAndMobParametersMRDC-XDD-Diff-v1560 */
typedef struct MeasAndMobParametersMRDC_XDD_Diff_v1560 {
	long	*sftd_MeasPSCell_NEDC	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasAndMobParametersMRDC_XDD_Diff_v1560_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sftd_MeasPSCell_NEDC_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersMRDC_XDD_Diff_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersMRDC_XDD_Diff_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasAndMobParametersMRDC_XDD_Diff_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasAndMobParametersMRDC_XDD_Diff_v1560_H_ */
#include "asn_internal.h"
