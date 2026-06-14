// netconn.c:51
struct {
	// netconn.c:49
	void (*)(void *, uint32_t) proc;

	// netconn.c:50
	void * data;

}

// netconn.c:77
void _NetConnIdleProcs(uint32_t  uCurTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:78
	int32_t iProc;

}

// netconn.c:108
extern const char * NetConnMAC() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:115
	union {
		// netconn.c:111
		unsigned char[16] uMac;

	}
	// netconn.c:115
	union  Stack;

	// netconn.c:116
	char[16] strMAC;

}

// netconn.c:164
extern uint32_t NetConnElapsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netconn.c:186
extern int32_t NetConnIdleAdd(void (*)(void *, uint32_t)  proc, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:187
	int32_t i;

}

// netconn.c:233
extern int32_t NetConnIdleDel(void (*)(void *, uint32_t)  proc, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:234
	int32_t i;

}

// netconn.c:275
extern void NetConnIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:276
	uint32_t uCurTick;

}

// netconn.c:321
extern void NetConnIdleShutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconn.c:322
	int32_t iProc;

}

// netconn.c:51
structure [32] _NETidle;

// netconn.c:53
const char[16] _NetConn_HexEncode;

// netconn.c:55
uint32_t _NetConn_uNextIdleTick;

