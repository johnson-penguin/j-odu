/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "RAT-Type.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_RAT_Type_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RAT_Type_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RAT_Type_value2enum_1[] = {
	{ 0,	2,	"nr" },
	{ 1,	8,	"eutra-nr" },
	{ 2,	5,	"eutra" },
	{ 3,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RAT_Type_enum2value_1[] = {
	2,	/* eutra(2) */
	1,	/* eutra-nr(1) */
	0,	/* nr(0) */
	3	/* spare1(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RAT_Type_specs_1 = {
	asn_MAP_RAT_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RAT_Type_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RAT_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RAT_Type = {
	"RAT-Type",
	"RAT-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_RAT_Type_tags_1,
	sizeof(asn_DEF_RAT_Type_tags_1)
		/sizeof(asn_DEF_RAT_Type_tags_1[0]), /* 1 */
	asn_DEF_RAT_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_RAT_Type_tags_1)
		/sizeof(asn_DEF_RAT_Type_tags_1[0]), /* 1 */
	{ &asn_OER_type_RAT_Type_constr_1, &asn_PER_type_RAT_Type_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RAT_Type_specs_1	/* Additional specs */
};

