/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SSB_MTC2_LP_r16_H_
#define	_SSB_MTC2_LP_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "PhysCellId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SSB_MTC2_LP_r16__periodicity {
	SSB_MTC2_LP_r16__periodicity_sf10	= 0,
	SSB_MTC2_LP_r16__periodicity_sf20	= 1,
	SSB_MTC2_LP_r16__periodicity_sf40	= 2,
	SSB_MTC2_LP_r16__periodicity_sf80	= 3,
	SSB_MTC2_LP_r16__periodicity_sf160	= 4,
	SSB_MTC2_LP_r16__periodicity_spare3	= 5,
	SSB_MTC2_LP_r16__periodicity_spare2	= 6,
	SSB_MTC2_LP_r16__periodicity_spare1	= 7
} e_SSB_MTC2_LP_r16__periodicity;

/* SSB-MTC2-LP-r16 */
typedef struct SSB_MTC2_LP_r16 {
	struct SSB_MTC2_LP_r16__pci_List {
		A_SEQUENCE_OF(PhysCellId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pci_List;
	long	 periodicity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_MTC2_LP_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicity_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SSB_MTC2_LP_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SSB_MTC2_LP_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_MTC2_LP_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_MTC2_LP_r16_H_ */
#include "asn_internal.h"
