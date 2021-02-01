/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_RRCReconfiguration_v1540_IEs_H_
#define	_RRCReconfiguration_v1540_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OtherConfig_v1540;
struct RRCReconfiguration_v1560_IEs;

/* RRCReconfiguration-v1540-IEs */
typedef struct RRCReconfiguration_v1540_IEs {
	struct OtherConfig_v1540	*otherConfig_v1540;	/* OPTIONAL */
	struct RRCReconfiguration_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfiguration_v1540_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfiguration_v1540_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OtherConfig-v1540.h"
#include "RRCReconfiguration-v1560-IEs.h"

#endif	/* _RRCReconfiguration_v1540_IEs_H_ */
#include "asn_internal.h"
