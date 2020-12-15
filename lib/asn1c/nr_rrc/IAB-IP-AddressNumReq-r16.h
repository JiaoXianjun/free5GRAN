/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_IAB_IP_AddressNumReq_r16_H_
#define	_IAB_IP_AddressNumReq_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IAB-IP-AddressNumReq-r16 */
typedef struct IAB_IP_AddressNumReq_r16 {
	long	*all_Traffic_NumReq_r16	/* OPTIONAL */;
	long	*f1_C_Traffic_NumReq_r16	/* OPTIONAL */;
	long	*f1_U_Traffic_NumReq_r16	/* OPTIONAL */;
	long	*non_F1_Traffic_NumReq_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IAB_IP_AddressNumReq_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IAB_IP_AddressNumReq_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_IAB_IP_AddressNumReq_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_IAB_IP_AddressNumReq_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_IP_AddressNumReq_r16_H_ */
#include "asn_internal.h"
