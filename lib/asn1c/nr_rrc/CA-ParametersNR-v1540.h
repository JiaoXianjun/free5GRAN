/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_CA_ParametersNR_v1540_H_
#define	_CA_ParametersNR_v1540_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_ParametersNR_v1540__dualPA_Architecture {
	CA_ParametersNR_v1540__dualPA_Architecture_supported	= 0
} e_CA_ParametersNR_v1540__dualPA_Architecture;

/* CA-ParametersNR-v1540 */
typedef struct CA_ParametersNR_v1540 {
	long	*simultaneousSRS_AssocCSI_RS_AllCC;	/* OPTIONAL */
	struct CA_ParametersNR_v1540__csi_RS_IM_ReceptionForFeedbackPerBandComb {
		long	*maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC;	/* OPTIONAL */
		long	*totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_RS_IM_ReceptionForFeedbackPerBandComb;
	long	*simultaneousCSI_ReportsAllCC;	/* OPTIONAL */
	long	*dualPA_Architecture;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_ParametersNR_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dualPA_Architecture_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CA_ParametersNR_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersNR_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_ParametersNR_v1540_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_ParametersNR_v1540_H_ */
#include "asn_internal.h"
