// unwind-dw2.h:51
union {
	// unwind-dw2.h:48
	_Unwind_Word reg;

	// unwind-dw2.h:49
	_Unwind_Sword offset;

	// unwind-dw2.h:50
	const unsigned char * exp;

}
// unwind-dw2.h:52
enum {
	REG_UNSAVED = 0,
	REG_SAVED_OFFSET = 1,
	REG_SAVED_REG = 2,
	REG_SAVED_EXP = 3,
}

// unwind-dw2.h:58
struct {
	// unwind-dw2.h:51
	// unwind-dw2.h:51
	union {
		// unwind-dw2.h:48
		_Unwind_Word reg;

		// unwind-dw2.h:49
		_Unwind_Sword offset;

		// unwind-dw2.h:50
		const unsigned char * exp;

	}
 loc;

	// unwind-dw2.h:57
	enumeration  how;

}

// unwind-dw2.h:45
struct frame_state_reg_info {
	// unwind-dw2.h:58
	structure [146] reg;

	// unwind-dw2.h:61
	frame_state_reg_info * prev;

}

// unwind-dw2.h:69
enum {
	CFA_UNSET = 0,
	CFA_REG_OFFSET = 1,
	CFA_EXP = 2,
}

// unwind-dw2.h:87
struct {
	// unwind-dw2.h:62
	frame_state_reg_info regs;

	// unwind-dw2.h:66
	_Unwind_Sword cfa_offset;

	// unwind-dw2.h:67
	_Unwind_Word cfa_reg;

	// unwind-dw2.h:68
	const unsigned char * cfa_exp;

	// unwind-dw2.h:73
	enumeration  cfa_how;

	// unwind-dw2.h:76
	void * pc;

	// unwind-dw2.h:79
	_Unwind_Personality_Fn personality;

	// unwind-dw2.h:80
	_Unwind_Sword data_align;

	// unwind-dw2.h:81
	_Unwind_Word code_align;

	// unwind-dw2.h:82
	_Unwind_Word retaddr_column;

	// unwind-dw2.h:83
	unsigned char fde_encoding;

	// unwind-dw2.h:84
	unsigned char lsda_encoding;

	// unwind-dw2.h:85
	unsigned char saw_z;

	// unwind-dw2.h:86
	void * eh_ptr;

}

// unwind-dw2.h:87
typedef structure  _Unwind_FrameState;

