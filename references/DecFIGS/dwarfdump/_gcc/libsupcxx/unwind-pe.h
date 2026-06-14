// unwind-pe.h:103
_Unwind_Ptr base_of_encoded_value(unsigned char  encoding, _Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-pe.h:133
const unsigned char * read_uleb128(const unsigned char *  p, _Unwind_Word *  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// unwind-pe.h:135
		unsigned int shift;

		// unwind-pe.h:136
		unsigned char byte;

		// unwind-pe.h:137
		_Unwind_Word result;

	}
}

// unwind-pe.h:155
const unsigned char * read_sleb128(const unsigned char *  p, _Unwind_Sword *  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// unwind-pe.h:157
		unsigned int shift;

		// unwind-pe.h:158
		unsigned char byte;

		// unwind-pe.h:159
		_Unwind_Word result;

	}
}

// unwind-pe.h:184
const unsigned char * read_encoded_value_with_base(unsigned char  encoding, _Unwind_Ptr  base, const unsigned char *  p, _Unwind_Ptr *  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// unwind-pe.h:187
		union unaligned {
			// unwind-pe.h:188
			void * ptr;

			// unwind-pe.h:189
			short unsigned int u2;

			// unwind-pe.h:190
			unsigned int u4;

			// unwind-pe.h:191
			long long unsigned int u8;

			// unwind-pe.h:192
			short int s2;

			// unwind-pe.h:193
			int s4;

			// unwind-pe.h:194
			long long int s8;

		}
		// unwind-pe.h:197
		const unaligned * u;

		// unwind-pe.h:198
		_Unwind_Internal_Ptr result;

	}
	{
		// unwind-pe.h:202
		_Unwind_Internal_Ptr a;

	}
	{
		// unwind-pe.h:226
		_Unwind_Sword tmp;

	}
	{
		// unwind-pe.h:218
		_Unwind_Word tmp;

	}
}

// unwind-pe.h:282
const unsigned char * read_encoded_value(_Unwind_Context *  context, unsigned char  encoding, const unsigned char *  p, _Unwind_Ptr *  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-pe.h:74
unsigned int size_of_encoded_value(unsigned char  encoding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

