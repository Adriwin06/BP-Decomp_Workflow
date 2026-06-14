// dirtylib.c:40
struct {
	// dirtylib.c:38
	void (*)(void *) pProc;

	// dirtylib.c:39
	void * pRef;

}

// dirtylib.c:70
extern void NetIdleReset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylib.c:94
extern void NetIdleAdd(void (*)(void *)  pProc, void *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylib.c:127
extern void NetIdleDel(void (*)(void *)  pProc, void *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:128
	int32_t iProc;

}

// dirtylib.c:167
extern void NetIdleDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtylib.c:190
extern void NetIdleCall() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:191
	int32_t iProc;

	{
		// dirtylib.c:200
		void (*)(void *) pProc;

		// dirtylib.c:201
		void * pRef;

	}
}

// dirtylib.c:245
extern int32_t NetHash(const char *  pString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:246
	int32_t iChar;

	// dirtylib.c:246
	int32_t iHash;

	// dirtylib.c:246
	int32_t iHigh;

}

// dirtylib.c:278
extern void NetPrintfVerboseCode(int32_t  iVerbosityLevel, int32_t  iCheckLevel, const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:279
	va_list Args;

	// dirtylib.c:280
	char[1024] strText;

}

// dirtylib.c:311
extern void NetPrintWrapCode(const char *  pString, int32_t  iWrapCol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:312
	const char * pTemp;

	// dirtylib.c:312
	const char * pEnd;

	// dirtylib.c:312
	const char * pEqual;

	// dirtylib.c:312
	const char * pSpace;

	// dirtylib.c:313
	char[256] strTemp;

	// dirtylib.c:314
	uint32_t bDone;

	// dirtylib.c:315
	int32_t iLen;

}

// dirtylib.c:404
extern void NetPrintMemCode(const void *  pMem, int32_t  iSize, const char *  pTitle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtylib.c:405
	const char[17] _hex;

	// dirtylib.c:406
	char[128] strOutput;

	// dirtylib.c:407
	int32_t iBytes;

	// dirtylib.c:407
	int32_t iOutput;

	{
		// dirtylib.c:416
		unsigned char cByte;

	}
}

// dirtylib.c:33
int32_t _NetLib_iIdleSize;

// dirtylib.c:40
structure [32] _NetLib_IdleList;

// dirtylib.c:45
extern int (*)(const char *, ...) _Platform_pLogPrintf;

// dirtylib.c:24
extern NetCritT * _NetLib_pIdleCrit;

