/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_DRB_CountMSB_Info_H_
#define	_DRB_CountMSB_Info_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DRB-Identity.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-CountMSB-Info */
typedef struct DRB_CountMSB_Info {
	DRB_Identity_t	 drb_Identity;
	long	 countMSB_Uplink;
	long	 countMSB_Downlink;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_CountMSB_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_CountMSB_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_CountMSB_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_CountMSB_Info_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_CountMSB_Info_H_ */
#include "asn_internal.h"
