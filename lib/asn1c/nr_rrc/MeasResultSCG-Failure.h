/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_MeasResultSCG_Failure_H_
#define	_MeasResultSCG_Failure_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasResultList2NR.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultSCG-Failure */
typedef struct MeasResultSCG_Failure {
	MeasResultList2NR_t	 measResultPerMOList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSCG_Failure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSCG_Failure;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultSCG_Failure_H_ */
#include "asn_internal.h"
