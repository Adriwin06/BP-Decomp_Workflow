// dirtylibps3.c:40
struct NetCritPrivT {
	// dirtylibps3.c:41
	sys_ppu_thread_t iThreadId;

	// dirtylibps3.c:42
	sys_mutex_t uMutexId;

	// dirtylibps3.c:43
	int32_t iAccessCt;

	// dirtylibps3.c:44
	const char * pName;

	// dirtylibps3.c:45
	uint32_t _pad;

}

// dirtylibps3.c:46
typedef NetCritPrivT NetCritPrivT;

// dirtylibps3.c:87
void _NetLibThread(uint64_t  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylibps3.c:134
extern void NetLibCreate(int32_t  iThreadPrio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylibps3.c:180
extern void NetLibDestroy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylibps3.c:213
extern int32_t NetPrintfCode(const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:214
	va_list pFmtArgs;

	// dirtylibps3.c:215
	char[4096] strText;

	// dirtylibps3.c:216
	const char * pText;

	// dirtylibps3.c:217
	int32_t iOutput;

}

// dirtylibps3.c:263
extern void NetPrintfHook(int32_t (*)(void *, const char *)  pPrintfDebugHook, void *  pParm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylibps3.c:287
extern uint32_t NetTick() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:288
	uint64_t CurTime;

}

// dirtylibps3.c:314
extern void NetCritInit(NetCritT *  pCrit, const char *  pCritName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:315
	NetCritPrivT * pPriv;

	// dirtylibps3.c:316
	sys_mutex_attribute_t MutexAttr;

	// dirtylibps3.c:317
	int32_t iResult;

}

// dirtylibps3.c:348
extern void NetCritKill(NetCritT *  pCrit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:349
	NetCritPrivT * pPriv;

	// dirtylibps3.c:350
	int32_t iResult;

}

// dirtylibps3.c:378
extern int32_t NetCritTry(NetCritT *  pCrit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:379
	NetCritPrivT * pPriv;

	// dirtylibps3.c:380
	sys_ppu_thread_t iThreadId;

	// dirtylibps3.c:381
	int32_t iResult;

}

// dirtylibps3.c:428
extern void NetCritEnter(NetCritT *  pCrit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:429
	NetCritPrivT * pPriv;

	// dirtylibps3.c:430
	int32_t iResult;

	{
		// dirtylibps3.c:435
		sys_ppu_thread_t iThreadId;

	}
}

// dirtylibps3.c:478
extern void NetCritLeave(NetCritT *  pCrit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylibps3.c:479
	NetCritPrivT * pPriv;

	// dirtylibps3.c:480
	int32_t iResult;

}

// dirtylibps3.c:51
NetCritT _NetLib_IdleCrit;

// dirtylibps3.c:55
NetCritT _NetLib_GlobalCrit;

// dirtylibps3.c:58
int32_t volatile g_idlelife;

// dirtylibps3.c:59
sys_ppu_thread_t g_idlethread;

// dirtylibps3.c:63
void * _NetLib_pDebugParm;

// dirtylibps3.c:64
int32_t (*)(void *, const char *) _NetLib_pDebugHook;

// dirtylibps3.c:65
uint8_t[4096] _NetLib_aPrintfMem;

// dirtylibps3.c:52
extern NetCritT * _NetLib_pIdleCrit;

