// plat-str.c:63
extern int32_t ds_vsnzprintf(char *  pBuffer, int32_t  iLength, const char *  pFormat, va_list  Args) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:64
	int32_t iResult;

}

// plat-str.c:111
extern int32_t ds_snzprintf(char *  pBuffer, int32_t  iLength, const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:112
	int32_t iResult;

	// plat-str.c:113
	va_list args;

}

// plat-str.c:156
extern char * ds_stristr(const char *  pHaystack, const char *  pNeedle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:157
	int32_t iFirst;

	// plat-str.c:158
	int32_t iIndex;

	// plat-str.c:159
	char * pMatch;

	{
		// plat-str.c:164
		int __x;

	}
	{
		// plat-str.c:168
		int __x;

	}
	{
		// plat-str.c:182
		int __x;

	}
	{
		// plat-str.c:182
		int __x;

	}
}

// plat-str.c:208
extern int32_t ds_stricmp(const char *  pString1, const char *  pString2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:209
	int32_t r;

	// plat-str.c:210
	char c1;

	// plat-str.c:210
	char c2;

}

// plat-str.c:240
extern int32_t ds_strnicmp(const char *  pString1, const char *  pString2, uint32_t  uCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:241
	int32_t r;

	// plat-str.c:242
	char c1;

	// plat-str.c:242
	char c2;

	// plat-str.c:243
	uint32_t uPos;

}

// plat-str.c:278
extern char * ds_strnzcpy(char *  pDest, const char *  pSource, int32_t  iCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// plat-str.c:304
extern int32_t ds_strsubzcpy(char *  pDst, int32_t  iDstLen, const char *  pSrc, int32_t  iSrcLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:305
	int32_t iIndex;

}

// plat-str.c:344
extern int32_t ds_strnzcat(char *  pDst, const char *  pSrc, int32_t  iDstLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:345
	int32_t iDst;

	// plat-str.c:345
	int32_t iSrc;

}

// plat-str.c:390
extern int32_t ds_strsubzcat(char *  pDst, int32_t  iDstLen, const char *  pSrc, int32_t  iSrcLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-str.c:391
	int32_t iDst;

	// plat-str.c:391
	int32_t iSrc;

}

