/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_ZP_CSI_RS_Resource_H_
#define	_ZP_CSI_RS_Resource_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ZP-CSI-RS-ResourceId.h"
#include "CSI-RS-ResourceMapping.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_ResourcePeriodicityAndOffset;

/* ZP-CSI-RS-Resource */
typedef struct ZP_CSI_RS_Resource {
	ZP_CSI_RS_ResourceId_t	 zp_CSI_RS_ResourceId;
	CSI_RS_ResourceMapping_t	 resourceMapping;
	struct CSI_ResourcePeriodicityAndOffset	*periodicityAndOffset	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ZP_CSI_RS_Resource_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ZP_CSI_RS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_ZP_CSI_RS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_ZP_CSI_RS_Resource_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-ResourcePeriodicityAndOffset.h"

#endif	/* _ZP_CSI_RS_Resource_H_ */
#include "asn_internal.h"
