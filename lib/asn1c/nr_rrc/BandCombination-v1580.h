/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_BandCombination_v1580_H_
#define	_BandCombination_v1580_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MRDC-Parameters-v1580.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BandCombination-v1580 */
typedef struct BandCombination_v1580 {
	MRDC_Parameters_v1580_t	 mrdc_Parameters_v1580;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_v1580_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_v1580;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1580_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_v1580_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombination_v1580_H_ */
#include "asn_internal.h"
