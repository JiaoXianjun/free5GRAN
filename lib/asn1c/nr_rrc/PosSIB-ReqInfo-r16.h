/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PosSIB_ReqInfo_r16_H_
#define	_PosSIB_ReqInfo_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSIB_ReqInfo_r16__posSibType_r16 {
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_1	= 0,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_2	= 1,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_3	= 2,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_4	= 3,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_5	= 4,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_6	= 5,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_7	= 6,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType1_8	= 7,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_1	= 8,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_2	= 9,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_3	= 10,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_4	= 11,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_5	= 12,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_6	= 13,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_7	= 14,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_8	= 15,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_9	= 16,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_10	= 17,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_11	= 18,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_12	= 19,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_13	= 20,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_14	= 21,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_15	= 22,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_16	= 23,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_17	= 24,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_18	= 25,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_19	= 26,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_20	= 27,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_21	= 28,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_22	= 29,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType2_23	= 30,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType3_1	= 31,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType4_1	= 32,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType5_1	= 33,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType6_1	= 34,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType6_2	= 35,
	PosSIB_ReqInfo_r16__posSibType_r16_posSibType6_3	= 36
	/*
	 * Enumeration is extensible
	 */
} e_PosSIB_ReqInfo_r16__posSibType_r16;

/* Forward declarations */
struct GNSS_ID_r16;
struct SBAS_ID_r16;

/* PosSIB-ReqInfo-r16 */
typedef struct PosSIB_ReqInfo_r16 {
	struct GNSS_ID_r16	*gnss_id_r16	/* OPTIONAL */;
	struct SBAS_ID_r16	*sbas_id_r16	/* OPTIONAL */;
	long	 posSibType_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSIB_ReqInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_posSibType_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PosSIB_ReqInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSIB_ReqInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSIB_ReqInfo_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GNSS-ID-r16.h"
#include "SBAS-ID-r16.h"

#endif	/* _PosSIB_ReqInfo_r16_H_ */
#include "asn_internal.h"
