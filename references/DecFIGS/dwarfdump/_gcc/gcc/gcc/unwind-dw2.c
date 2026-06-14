// unwind-dw2.c:83
union unaligned {
	// unwind-dw2.c:84
	void * p;

	// unwind-dw2.c:85
	short unsigned int u2;

	// unwind-dw2.c:86
	unsigned int u4;

	// unwind-dw2.c:87
	long long unsigned int u8;

	// unwind-dw2.c:88
	short int s2;

	// unwind-dw2.c:89
	int s4;

	// unwind-dw2.c:90
	long long int s8;

}
// unwind-dw2.c:1020
struct frame_state {
	// unwind-dw2.c:1021
	void * cfa;

	// unwind-dw2.c:1022
	void * eh_ptr;

	// unwind-dw2.c:1023
	long int cfa_offset;

	// unwind-dw2.c:1024
	long int args_size;

	// unwind-dw2.c:1025
	long int[78] reg_or_offset;

	// unwind-dw2.c:1026
	short unsigned int cfa_reg;

	// unwind-dw2.c:1027
	short unsigned int retaddr_column;

	// unwind-dw2.c:1028
	char[78] saved;

}

// unwind-dw2.c:1081
union {
	// unwind-dw2.c:1081
	_Unwind_Ptr ptr;

	// unwind-dw2.c:1081
	_Unwind_Word word;

}
// unwind-dw2.c:1081
typedef union  _Unwind_SpTmp;

// unwind-dw2.c:251
extern _Unwind_Ptr _Unwind_GetTextRelBase(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:245
extern _Unwind_Ptr _Unwind_GetDataRelBase(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:227
extern _Unwind_Ptr _Unwind_GetRegionStart(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:124
extern _Unwind_Word _Unwind_GetGR(_Unwind_Context *  context, int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:125
	int size;

	// unwind-dw2.c:126
	void * ptr;

}

// unwind-dw2.c:159
extern _Unwind_Word _Unwind_GetCFA(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:167
extern void _Unwind_SetGR(_Unwind_Context *  context, int  index, _Unwind_Word  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:168
	int size;

	// unwind-dw2.c:169
	void * ptr;

}

// unwind-dw2.c:207
extern _Unwind_Ptr _Unwind_GetIP(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:215
extern void _Unwind_SetIP(_Unwind_Context *  context, _Unwind_Ptr  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:221
extern void * _Unwind_GetLanguageSpecificData(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:233
extern void * _Unwind_FindEnclosingFunction(void *  pc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:234
	dwarf_eh_bases bases;

	// unwind-dw2.c:235
	const dwarf_fde * fde;

}

// unwind-dw2.c:97
int read_1u(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:103
int read_2u(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:103
	const unaligned * up;

}

// unwind-dw2.c:109
unsigned int read_4u(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:109
	const unaligned * up;

}

// unwind-dw2.c:753
void execute_cfa_program(const unsigned char *  insn_ptr, const unsigned char *  insn_end, _Unwind_Context *  context, _Unwind_FrameState *  fs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:754
	frame_state_reg_info * unused_rs;

	{
		// unwind-dw2.c:768
		unsigned char insn;

		// unwind-dw2.c:769
		_Unwind_Word reg;

		// unwind-dw2.c:769
		_Unwind_Word utmp;

		// unwind-dw2.c:770
		_Unwind_Sword offset;

		// unwind-dw2.c:770
		_Unwind_Sword stmp;

	}
	{
		// unwind-dw2.c:861
		frame_state_reg_info * old_rs;

	}
	{
		// unwind-dw2.c:845
		frame_state_reg_info * new_rs;

	}
	{
		// unwind-dw2.c:835
		_Unwind_Word reg2;

	}
	read_encoded_value(/* parameters */);
}

// unwind-dw2.c:267
const unsigned char * extract_cie_info(const dwarf_cie *  cie, _Unwind_Context *  context, _Unwind_FrameState *  fs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:268
	const unsigned char * aug;

	// unwind-dw2.c:269
	const unsigned char * p;

	// unwind-dw2.c:270
	const unsigned char * ret;

	// unwind-dw2.c:271
	_Unwind_Word utmp;

}

// unwind-dw2.c:94
void * read_pointer(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:94
	const unaligned * up;

}

// unwind-dw2.c:959
_Unwind_Reason_Code uw_frame_state_for(_Unwind_Context *  context, _Unwind_FrameState *  fs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:960
	const dwarf_fde * fde;

	// unwind-dw2.c:961
	const dwarf_cie * cie;

	// unwind-dw2.c:962
	const unsigned char * aug;

	// unwind-dw2.c:962
	const unsigned char * insn;

	// unwind-dw2.c:962
	const unsigned char * end;

	get_cie(/* parameters */);
	extract_cie_info(/* parameters */);
	size_of_encoded_value(/* parameters */);
	read_encoded_value(/* parameters */);
	{
		// unwind-dw2.c:1002
		_Unwind_Word i;

	}
}

// unwind-dw2.c:1039
extern frame_state * __frame_state_for(void *  pc_target, frame_state *  state_in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:1040
	_Unwind_Context context;

	// unwind-dw2.c:1041
	_Unwind_FrameState fs;

	// unwind-dw2.c:1042
	int reg;

}

// unwind-dw2.c:189
void * _Unwind_GetGRPtr(_Unwind_Context *  context, int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:1086
void _Unwind_SetSpColumn(_Unwind_Context *  context, void *  cfa, _Unwind_SpTmp *  tmp_sp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:1087
	int size;

}

// unwind-dw2.c:198
void _Unwind_SetGRPtr(_Unwind_Context *  context, int  index, void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:151
void * _Unwind_GetPtr(_Unwind_Context *  context, int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:1282
long int uw_install_context_1(_Unwind_Context *  current, _Unwind_Context *  target) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:1283
	long int i;

	// unwind-dw2.c:1284
	_Unwind_SpTmp sp_slot;

	_Unwind_SetSpColumn(/* parameters */);
	{
		// unwind-dw2.c:1293
		void * c;

		// unwind-dw2.c:1294
		void * t;

	}
	{
		// unwind-dw2.c:1305
		void * target_cfa;

		_Unwind_GetPtr(/* parameters */);
	}
}

// unwind-dw2.c:100
int read_1s(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:106
int read_2s(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:106
	const unaligned * up;

}

// unwind-dw2.c:112
int read_4s(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:112
	const unaligned * up;

}

// unwind-dw2.c:115
long unsigned int read_8u(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:115
	const unaligned * up;

}

// unwind-dw2.c:118
long unsigned int read_8s(const void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:118
	const unaligned * up;

}

// unwind-dw2.c:345
_Unwind_Word execute_stack_op(const unsigned char *  op_ptr, const unsigned char *  op_end, _Unwind_Context *  context, _Unwind_Word  initial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:346
	_Unwind_Word[64] stack;

	// unwind-dw2.c:347
	int stack_elt;

	// unwind-dw2.c:733
no_push:
	{
		// unwind-dw2.c:354
		dwarf_location_atom op;

		// unwind-dw2.c:355
		_Unwind_Word result;

		// unwind-dw2.c:355
		_Unwind_Word reg;

		// unwind-dw2.c:355
		_Unwind_Word utmp;

		// unwind-dw2.c:356
		_Unwind_Sword offset;

		// unwind-dw2.c:356
		_Unwind_Sword stmp;

	}
	_Unwind_GetGR(/* parameters */);
	_Unwind_GetGR(/* parameters */);
	_Unwind_GetGR(/* parameters */);
	_Unwind_GetGR(/* parameters */);
	{
		// unwind-dw2.c:641
		_Unwind_Word first;

		// unwind-dw2.c:641
		_Unwind_Word second;

	}
	{
		// unwind-dw2.c:546
		_Unwind_Word t1;

		// unwind-dw2.c:546
		_Unwind_Word t2;

		// unwind-dw2.c:546
		_Unwind_Word t3;

	}
	{
		// unwind-dw2.c:574
		void * ptr;

	}
	{
		// unwind-dw2.c:581
		void * ptr;

	}
}

// unwind-dw2.c:1100
void uw_update_context_1(_Unwind_Context *  context, _Unwind_FrameState *  fs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:1101
	_Unwind_Context orig_context;

	// unwind-dw2.c:1102
	void * cfa;

	// unwind-dw2.c:1103
	long int i;

	// unwind-dw2.c:1121
	_Unwind_SpTmp tmp_sp;

	_Unwind_SetGRPtr(/* parameters */);
	{
		// unwind-dw2.c:1185
		unsigned int * insn;

		_Unwind_GetGR(/* parameters */);
	}
	{
		// unwind-dw2.c:1138
		const unsigned char * exp;

		// unwind-dw2.c:1139
		_Unwind_Word len;

	}
	{
		// unwind-dw2.c:1172
		const unsigned char * exp;

		// unwind-dw2.c:1173
		_Unwind_Word len;

		// unwind-dw2.c:1174
		_Unwind_Ptr val;

		_Unwind_SetGRPtr(/* parameters */);
	}
	_Unwind_GetGRPtr(/* parameters */);
	_Unwind_SetGRPtr(/* parameters */);
	_Unwind_SetGRPtr(/* parameters */);
	_Unwind_GetPtr(/* parameters */);
	_Unwind_SetGRPtr(/* parameters */);
	_Unwind_SetSpColumn(/* parameters */);
	_Unwind_SetGRPtr(/* parameters */);
}

// unwind-dw2.c:1221
void init_dwarf_reg_size_table() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:1228
void uw_init_context_1(_Unwind_Context *  context, void *  outer_cfa, void *  outer_ra) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind-dw2.c:1229
	void * ra;

	// unwind-dw2.c:1230
	_Unwind_FrameState fs;

	// unwind-dw2.c:1231
	_Unwind_SpTmp sp_slot;

	_Unwind_SetSpColumn(/* parameters */);
	init_dwarf_reg_size_table(/* parameters */);
}

// unwind-dw2.c:1196
void uw_update_context(_Unwind_Context *  context, _Unwind_FrameState *  fs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	_Unwind_GetPtr(/* parameters */);
}

// unwind-dw2.c:1320
_Unwind_Ptr uw_identify_context(_Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind-dw2.c:77
unsigned char[146] dwarf_reg_size_table;

