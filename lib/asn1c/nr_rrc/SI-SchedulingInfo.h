/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_SI_SchedulingInfo_H_
#define	_SI_SchedulingInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "BIT_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SI_SchedulingInfo__si_WindowLength {
	SI_SchedulingInfo__si_WindowLength_s5	= 0,
	SI_SchedulingInfo__si_WindowLength_s10	= 1,
	SI_SchedulingInfo__si_WindowLength_s20	= 2,
	SI_SchedulingInfo__si_WindowLength_s40	= 3,
	SI_SchedulingInfo__si_WindowLength_s80	= 4,
	SI_SchedulingInfo__si_WindowLength_s160	= 5,
	SI_SchedulingInfo__si_WindowLength_s320	= 6,
	SI_SchedulingInfo__si_WindowLength_s640	= 7,
	SI_SchedulingInfo__si_WindowLength_s1280	= 8
} e_SI_SchedulingInfo__si_WindowLength;

/* Forward declarations */
struct SI_RequestConfig;
struct SchedulingInfo;

/* SI-SchedulingInfo */
typedef struct SI_SchedulingInfo {
	struct SI_SchedulingInfo__schedulingInfoList {
		A_SEQUENCE_OF(struct SchedulingInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingInfoList;
	long	 si_WindowLength;
	struct SI_RequestConfig	*si_RequestConfig;	/* OPTIONAL */
	struct SI_RequestConfig	*si_RequestConfigSUL;	/* OPTIONAL */
	BIT_STRING_t	*systemInformationAreaID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SI_SchedulingInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_WindowLength_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SI_SchedulingInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SI_SchedulingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SI_SchedulingInfo_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SI-RequestConfig.h"
#include "SchedulingInfo.h"

#endif	/* _SI_SchedulingInfo_H_ */
#include "asn_internal.h"
