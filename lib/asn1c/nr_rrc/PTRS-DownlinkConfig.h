/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PTRS_DownlinkConfig_H_
#define	_PTRS_DownlinkConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PTRS_DownlinkConfig__resourceElementOffset {
	PTRS_DownlinkConfig__resourceElementOffset_offset01	= 0,
	PTRS_DownlinkConfig__resourceElementOffset_offset10	= 1,
	PTRS_DownlinkConfig__resourceElementOffset_offset11	= 2
} e_PTRS_DownlinkConfig__resourceElementOffset;
typedef enum PTRS_DownlinkConfig__maxNrofPorts_r16 {
	PTRS_DownlinkConfig__maxNrofPorts_r16_n1	= 0,
	PTRS_DownlinkConfig__maxNrofPorts_r16_n2	= 1
} e_PTRS_DownlinkConfig__maxNrofPorts_r16;

/* PTRS-DownlinkConfig */
typedef struct PTRS_DownlinkConfig {
	struct PTRS_DownlinkConfig__frequencyDensity {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyDensity;
	struct PTRS_DownlinkConfig__timeDensity {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *timeDensity;
	long	*epre_Ratio	/* OPTIONAL */;
	long	*resourceElementOffset	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*maxNrofPorts_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PTRS_DownlinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceElementOffset_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNrofPorts_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PTRS_DownlinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PTRS_DownlinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PTRS_DownlinkConfig_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PTRS_DownlinkConfig_H_ */
#include "asn_internal.h"
