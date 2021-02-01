/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_CellAccessRelatedInfo_EUTRA_EPC_H_
#define	_CellAccessRelatedInfo_EUTRA_EPC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-IdentityList-EUTRA-EPC.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CellAccessRelatedInfo-EUTRA-EPC */
typedef struct CellAccessRelatedInfo_EUTRA_EPC {
	PLMN_IdentityList_EUTRA_EPC_t	 plmn_IdentityList_eutra_epc;
	BIT_STRING_t	 trackingAreaCode_eutra_epc;
	BIT_STRING_t	 cellIdentity_eutra_epc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAccessRelatedInfo_EUTRA_EPC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_EUTRA_EPC;
extern asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_EUTRA_EPC_specs_1;
extern asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_EUTRA_EPC_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CellAccessRelatedInfo_EUTRA_EPC_H_ */
#include "asn_internal.h"
