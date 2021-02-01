/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_AS_Config_H_
#define	_AS_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AS-Config */
typedef struct AS_Config {
	OCTET_STRING_t	 rrcReconfiguration;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct AS_Config__ext1 {
		OCTET_STRING_t	*sourceRB_SN_Config;	/* OPTIONAL */
		OCTET_STRING_t	*sourceSCG_NR_Config;	/* OPTIONAL */
		OCTET_STRING_t	*sourceSCG_EUTRA_Config;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Config_H_ */
#include "asn_internal.h"
