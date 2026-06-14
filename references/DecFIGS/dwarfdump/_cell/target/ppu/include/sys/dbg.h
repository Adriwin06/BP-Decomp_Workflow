// dbg.h:198
union sys_dbg_vr_t {
	// dbg.h:199
	uint8_t[16] byte;

	// dbg.h:200
	uint16_t[8] halfword;

	// dbg.h:201
	uint32_t[4] word;

	// dbg.h:202
	uint64_t[2] dw;

}
// dbg.h:206
struct sys_dbg_ppu_thread_context_t {
	// dbg.h:207
	uint64_t[32] gpr;

	// dbg.h:208
	uint32_t cr;

	// dbg.h:209
	uint64_t xer;

	// dbg.h:210
	uint64_t lr;

	// dbg.h:211
	uint64_t ctr;

	// dbg.h:212
	uint64_t pc;

	// dbg.h:213
	uint64_t[32] fpr;

	// dbg.h:214
	uint32_t fpscr;

	// dbg.h:215
	sys_dbg_vr_t[32] vr;

	// dbg.h:216
	sys_dbg_vr_t vscr;

}

