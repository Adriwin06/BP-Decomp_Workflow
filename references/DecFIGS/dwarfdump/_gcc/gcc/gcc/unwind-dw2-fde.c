// unwind-dw2-fde.c:395
typedef int (*)(object *, const fde *, const fde *) fde_compare_t;

// unwind-dw2-fde.c:410
struct fde_accumulator {
	// unwind-dw2-fde.c:411
	fde_vector * linear;

	// unwind-dw2-fde.c:412
	fde_vector * erratic;

}

// unwind-dw2-fde.c:264
_Unwind_Ptr base_from_object(unsigned char  encoding, object *  ob) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:288
int get_cie_encoding(const dwarf_cie *  cie) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:289
	const unsigned char * aug;

	// unwind-dw2-fde.c:289
	const unsigned char * p;

	// unwind-dw2-fde.c:290
	_Unwind_Ptr dummy;

	// unwind-dw2-fde.c:291
	_Unwind_Word utmp;

	// unwind-dw2-fde.c:292
	_Unwind_Sword stmp;

}

// unwind-dw2-fde.c:347
int fde_unencoded_compare(object *  ob, const fde *  x, const fde *  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:348
	_Unwind_Ptr x_ptr;

	// unwind-dw2-fde.c:349
	_Unwind_Ptr y_ptr;

}

// unwind-dw2-fde.c:360
int fde_single_encoding_compare(object *  ob, const fde *  x, const fde *  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:361
	_Unwind_Ptr base;

	// unwind-dw2-fde.c:361
	_Unwind_Ptr x_ptr;

	// unwind-dw2-fde.c:361
	_Unwind_Ptr y_ptr;

}

// unwind-dw2-fde.c:510
void frame_downheap(object *  ob, fde_compare_t  fde_compare, const fde **  a, int  lo, int  hi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:511
	int i;

	// unwind-dw2-fde.c:511
	int j;

	{
		// unwind-dw2-fde.c:522
		const fde * tmp;

	}
}

// unwind-dw2-fde.c:536
void frame_heapsort(object *  ob, fde_compare_t  fde_compare, fde_vector *  erratic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:540
	const fde ** a;

	// unwind-dw2-fde.c:544
	size_t n;

	// unwind-dw2-fde.c:545
	int m;

	{
		// unwind-dw2-fde.c:558
		const fde * tmp;

	}
}

// unwind-dw2-fde.c:631
size_t classify_object_over_fdes(object *  ob, const fde *  this_fde) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:632
	const dwarf_cie * last_cie;

	// unwind-dw2-fde.c:633
	size_t count;

	// unwind-dw2-fde.c:634
	int encoding;

	// unwind-dw2-fde.c:635
	_Unwind_Ptr base;

	{
		// unwind-dw2-fde.c:639
		const dwarf_cie * this_cie;

		// unwind-dw2-fde.c:640
		_Unwind_Ptr mask;

		// unwind-dw2-fde.c:640
		_Unwind_Ptr pc_begin;

	}
	next_fde(/* parameters */);
	get_cie(/* parameters */);
}

// unwind-dw2-fde.c:101
extern void __register_frame_info_bases(const void *  begin, object *  ob, void *  tbase, void *  dbase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:127
extern void __register_frame_info(const void *  begin, object *  ob) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:133
extern void __register_frame(void *  begin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:134
	object * ob;

}

// unwind-dw2-fde.c:151
extern void __register_frame_info_table_bases(void *  begin, object *  ob, void *  tbase, void *  dbase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:171
extern void __register_frame_info_table(void *  begin, object *  ob) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:177
extern void __register_frame_table(void *  begin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:178
	object * ob;

}

// unwind-dw2-fde.c:196
extern void * __deregister_frame_info_bases(const void *  begin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:197
	object ** p;

	// unwind-dw2-fde.c:198
	object * ob;

	// unwind-dw2-fde.c:239
out:
}

// unwind-dw2-fde.c:246
extern void * __deregister_frame_info(const void *  begin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:252
extern void __deregister_frame(void *  begin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:803
const fde * linear_search_fdes(object *  ob, const fde *  this_fde, void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:804
	const dwarf_cie * last_cie;

	// unwind-dw2-fde.c:805
	int encoding;

	// unwind-dw2-fde.c:806
	_Unwind_Ptr base;

	{
		// unwind-dw2-fde.c:810
		const dwarf_cie * this_cie;

		// unwind-dw2-fde.c:811
		_Unwind_Ptr pc_begin;

		// unwind-dw2-fde.c:811
		_Unwind_Ptr pc_range;

		get_cie(/* parameters */);
	}
	next_fde(/* parameters */);
	{
		// unwind-dw2-fde.c:839
		_Unwind_Ptr mask;

		// unwind-dw2-fde.c:840
		const unsigned char * p;

	}
}

// unwind-dw2-fde.c:436
void fde_insert(fde_accumulator *  accu, const fde *  this_fde) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:686
void add_fdes(object *  ob, fde_accumulator *  accu, const fde *  this_fde) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:687
	const dwarf_cie * last_cie;

	// unwind-dw2-fde.c:688
	int encoding;

	// unwind-dw2-fde.c:689
	_Unwind_Ptr base;

	{
		// unwind-dw2-fde.c:693
		const dwarf_cie * this_cie;

		fde_insert(/* parameters */);
	}
	next_fde(/* parameters */);
	get_cie(/* parameters */);
	{
		// unwind-dw2-fde.c:719
		_Unwind_Ptr pc_begin;

		// unwind-dw2-fde.c:719
		_Unwind_Ptr mask;

	}
}

// unwind-dw2-fde.c:749
void init_object(object *  ob) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:750
	fde_accumulator accu;

	// unwind-dw2-fde.c:751
	size_t count;

	{
		// unwind-dw2-fde.c:758
		fde ** p;

	}
	{
		// unwind-dw2-fde.c:780
		fde ** p;

	}
}

// unwind-dw2-fde.c:417
int start_fde_sort(fde_accumulator *  accu, size_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:418
	size_t size;

}

// unwind-dw2-fde.c:594
void end_fde_sort(object *  ob, fde_accumulator *  accu, size_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:595
	fde_compare_t fde_compare;

}

// unwind-dw2-fde.c:456
void fde_split(object *  ob, fde_compare_t  fde_compare, fde_vector *  linear, fde_vector *  erratic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:458
	fde * marker;

	// unwind-dw2-fde.c:462
	const fde ** chain_end;

	// unwind-dw2-fde.c:463
	size_t count;

	// unwind-dw2-fde.c:464
	size_t i;

	// unwind-dw2-fde.c:464
	size_t j;

	// unwind-dw2-fde.c:464
	size_t k;

	{
		// unwind-dw2-fde.c:474
		const fde ** probe;

	}
}

// unwind-dw2-fde.c:568
void fde_merge(object *  ob, fde_compare_t  fde_compare, fde_vector *  v1, fde_vector *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:569
	size_t i1;

	// unwind-dw2-fde.c:569
	size_t i2;

	// unwind-dw2-fde.c:570
	const fde * fde2;

}

// unwind-dw2-fde.c:929
const fde * binary_search_mixed_encoding_fdes(object *  ob, void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:930
	fde_vector * vec;

	// unwind-dw2-fde.c:931
	size_t lo;

	// unwind-dw2-fde.c:931
	size_t hi;

	{
		// unwind-dw2-fde.c:935
		size_t i;

		// unwind-dw2-fde.c:936
		const fde * f;

		// unwind-dw2-fde.c:937
		_Unwind_Ptr pc_begin;

		// unwind-dw2-fde.c:937
		_Unwind_Ptr pc_range;

		// unwind-dw2-fde.c:938
		const unsigned char * p;

		// unwind-dw2-fde.c:939
		int encoding;

	}
}

// unwind-dw2-fde.c:333
int get_fde_encoding(const dwarf_fde *  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.c:872
const fde * binary_search_unencoded_fdes(object *  ob, void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:873
	fde_vector * vec;

	// unwind-dw2-fde.c:874
	size_t lo;

	// unwind-dw2-fde.c:874
	size_t hi;

	{
		// unwind-dw2-fde.c:878
		size_t i;

		// unwind-dw2-fde.c:879
		const fde * f;

		// unwind-dw2-fde.c:880
		void * pc_begin;

		// unwind-dw2-fde.c:881
		uaddr pc_range;

	}
}

// unwind-dw2-fde.c:899
const fde * binary_search_single_encoding_fdes(object *  ob, void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:900
	fde_vector * vec;

	// unwind-dw2-fde.c:901
	int encoding;

	// unwind-dw2-fde.c:902
	_Unwind_Ptr base;

	// unwind-dw2-fde.c:903
	size_t lo;

	// unwind-dw2-fde.c:903
	size_t hi;

	{
		// unwind-dw2-fde.c:907
		size_t i;

		// unwind-dw2-fde.c:908
		const fde * f;

		// unwind-dw2-fde.c:909
		_Unwind_Ptr pc_begin;

		// unwind-dw2-fde.c:909
		_Unwind_Ptr pc_range;

		// unwind-dw2-fde.c:910
		const unsigned char * p;

	}
}

// unwind-dw2-fde.c:960
const fde * search_object(object *  ob, void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	init_object(/* parameters */);
	binary_search_unencoded_fdes(/* parameters */);
	{
	}
	binary_search_single_encoding_fdes(/* parameters */);
	binary_search_mixed_encoding_fdes(/* parameters */);
	{
		// unwind-dw2-fde.c:988
		fde ** p;

		{
			// unwind-dw2-fde.c:991
			const fde * f;

		}
	}
}

// unwind-dw2-fde.c:1004
extern const fde * _Unwind_Find_FDE(void *  pc, dwarf_eh_bases *  bases) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:1005
	object * ob;

	// unwind-dw2-fde.c:1006
	const fde * f;

	// unwind-dw2-fde.c:1042
fini:
	{
		// unwind-dw2-fde.c:1047
		int encoding;

	}
	{
		// unwind-dw2-fde.c:1026
		object ** p;

	}
	get_fde_encoding(/* parameters */);
}

// unwind-dw2-fde.c:376
int fde_mixed_encoding_compare(object *  ob, const fde *  x, const fde *  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2-fde.c:377
	int x_encoding;

	// unwind-dw2-fde.c:377
	int y_encoding;

	// unwind-dw2-fde.c:378
	_Unwind_Ptr x_ptr;

	// unwind-dw2-fde.c:378
	_Unwind_Ptr y_ptr;

	get_fde_encoding(/* parameters */);
	get_fde_encoding(/* parameters */);
}

// unwind-dw2-fde.c:55
object * unseen_objects;

// unwind-dw2-fde.c:56
object * seen_objects;

// unwind-dw2-fde.c:64
__gthread_mutex_t object_mutex;

