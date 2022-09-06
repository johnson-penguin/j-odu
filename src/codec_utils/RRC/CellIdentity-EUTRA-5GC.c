/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "CellIdentity-EUTRA-5GC.h"

static int
memb_cellIdentity_EUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cellId_index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_cellIdentity_EUTRA_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	28	/* (SIZE(28..28)) */};
static asn_per_constraints_t asn_PER_memb_cellIdentity_EUTRA_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cellId_index_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..12) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cellId_index_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_CellIdentity_EUTRA_5GC_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CellIdentity_EUTRA_5GC_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellIdentity_EUTRA_5GC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellIdentity_EUTRA_5GC, choice.cellIdentity_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_cellIdentity_EUTRA_constr_2, &asn_PER_memb_cellIdentity_EUTRA_constr_2,  memb_cellIdentity_EUTRA_constraint_1 },
		0, 0, /* No default value */
		"cellIdentity-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellIdentity_EUTRA_5GC, choice.cellId_index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cellId_index_constr_3, &asn_PER_memb_cellId_index_constr_3,  memb_cellId_index_constraint_1 },
		0, 0, /* No default value */
		"cellId-index"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CellIdentity_EUTRA_5GC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdentity-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellId-index */
};
asn_CHOICE_specifics_t asn_SPC_CellIdentity_EUTRA_5GC_specs_1 = {
	sizeof(struct CellIdentity_EUTRA_5GC),
	offsetof(struct CellIdentity_EUTRA_5GC, _asn_ctx),
	offsetof(struct CellIdentity_EUTRA_5GC, present),
	sizeof(((struct CellIdentity_EUTRA_5GC *)0)->present),
	asn_MAP_CellIdentity_EUTRA_5GC_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CellIdentity_EUTRA_5GC = {
	"CellIdentity-EUTRA-5GC",
	"CellIdentity-EUTRA-5GC",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_CellIdentity_EUTRA_5GC_constr_1, &asn_PER_type_CellIdentity_EUTRA_5GC_constr_1, CHOICE_constraint },
	asn_MBR_CellIdentity_EUTRA_5GC_1,
	2,	/* Elements count */
	&asn_SPC_CellIdentity_EUTRA_5GC_specs_1	/* Additional specs */
};

