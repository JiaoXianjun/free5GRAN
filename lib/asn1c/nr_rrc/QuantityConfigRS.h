/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_QuantityConfigRS_H_
#define	_QuantityConfigRS_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FilterConfig.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigRS */
typedef struct QuantityConfigRS {
	FilterConfig_t	 ssb_FilterConfig;
	FilterConfig_t	 csi_RS_FilterConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigRS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigRS;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigRS_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigRS_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigRS_H_ */
#include "asn_internal.h"
