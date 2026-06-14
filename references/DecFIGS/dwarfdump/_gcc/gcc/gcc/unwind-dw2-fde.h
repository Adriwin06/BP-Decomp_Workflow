// unwind-dw2-fde.h:43
struct dwarf_fde {
	// unwind-dw2-fde.h:151
	uword length;

	// unwind-dw2-fde.h:152
	sword CIE_delta;

	// unwind-dw2-fde.h:153
	unsigned char[] pc_begin;

}

// unwind-dw2-fde.h:92
struct dwarf_eh_bases {
	// unwind-dw2-fde.h:93
	void * tbase;

	// unwind-dw2-fde.h:94
	void * dbase;

	// unwind-dw2-fde.h:95
	void * func;

}

// unwind-dw2-fde.h:112
typedef int sword;

// unwind-dw2-fde.h:113
typedef unsigned int uword;

// unwind-dw2-fde.h:116
typedef unsigned char ubyte;

// unwind-dw2-fde.h:141
struct dwarf_cie {
	// unwind-dw2-fde.h:142
	uword length;

	// unwind-dw2-fde.h:143
	sword CIE_id;

	// unwind-dw2-fde.h:144
	ubyte version;

	// unwind-dw2-fde.h:145
	unsigned char[] augmentation;

}

// unwind-dw2-fde.h:156
typedef dwarf_fde fde;

// unwind-dw2-fde.h:162
const dwarf_cie * get_cie(const dwarf_fde *  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.h:168
const fde * next_fde(const fde *  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2-fde.h:40
struct fde_vector {
	// unwind-dw2-fde.h:41
	const void * orig_data;

	// unwind-dw2-fde.h:42
	size_t count;

	// unwind-dw2-fde.h:43
	const dwarf_fde *[] array;

}

// unwind-dw2-fde.h:55
union {
	// unwind-dw2-fde.h:52
	const dwarf_fde * single;

	// unwind-dw2-fde.h:53
	dwarf_fde ** array;

	// unwind-dw2-fde.h:54
	fde_vector * sort;

}
// unwind-dw2-fde.h:66
struct {
	// unwind-dw2-fde.h:59
	long unsigned int sorted;

	// unwind-dw2-fde.h:60
	long unsigned int from_array;

	// unwind-dw2-fde.h:61
	long unsigned int mixed_encoding;

	// unwind-dw2-fde.h:62
	long unsigned int encoding;

	// unwind-dw2-fde.h:65
	long unsigned int count;

}

// unwind-dw2-fde.h:68
union {
	// unwind-dw2-fde.h:66
	// unwind-dw2-fde.h:66
	struct {
		// unwind-dw2-fde.h:59
		long unsigned int sorted;

		// unwind-dw2-fde.h:60
		long unsigned int from_array;

		// unwind-dw2-fde.h:61
		long unsigned int mixed_encoding;

		// unwind-dw2-fde.h:62
		long unsigned int encoding;

		// unwind-dw2-fde.h:65
		long unsigned int count;

	}

 b;

	// unwind-dw2-fde.h:67
	size_t i;

}
// unwind-dw2-fde.h:47
struct object {
	// unwind-dw2-fde.h:48
	void * pc_begin;

	// unwind-dw2-fde.h:49
	void * tbase;

	// unwind-dw2-fde.h:50
	void * dbase;

	// unwind-dw2-fde.h:55
	// unwind-dw2-fde.h:55
	union {
		// unwind-dw2-fde.h:52
		const dwarf_fde * single;

		// unwind-dw2-fde.h:53
		dwarf_fde ** array;

		// unwind-dw2-fde.h:54
		fde_vector * sort;

	}
 u;

	// unwind-dw2-fde.h:68
	// unwind-dw2-fde.h:68
	union {
		// unwind-dw2-fde.h:66
		// unwind-dw2-fde.h:66
		struct {
			// unwind-dw2-fde.h:59
			long unsigned int sorted;

			// unwind-dw2-fde.h:60
			long unsigned int from_array;

			// unwind-dw2-fde.h:61
			long unsigned int mixed_encoding;

			// unwind-dw2-fde.h:62
			long unsigned int encoding;

			// unwind-dw2-fde.h:65
			long unsigned int count;

		}

 b;

		// unwind-dw2-fde.h:67
		size_t i;

	}
 s;

	// unwind-dw2-fde.h:74
	object * next;

}

// unwind-dw2-fde.h:114
typedef unsigned int uaddr;

// unwind-dw2-fde.h:176
int last_fde(object *  obj, const fde *  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

