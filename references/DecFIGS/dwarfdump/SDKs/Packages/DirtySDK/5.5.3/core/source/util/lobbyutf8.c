// lobbyutf8.c:73
int32_t _Utf8GetNumBytes(unsigned char  cLead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:74
	int32_t iCodeSize;

}

// lobbyutf8.c:120
int32_t _Utf8DecodeToUCS2(uint16_t *  pOutPtr, const unsigned char *  pStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:121
	int32_t iCodeSize;

}

// lobbyutf8.c:166
extern int32_t Utf8EncodeFromUCS2CodePt(char *  pOutPtr, uint16_t  uCodePt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:167
	int32_t iCodeSize;

}

// lobbyutf8.c:210
int32_t _Utf8Translate(char *  pOutBuf, const Utf8TransTblT *  pTransTbl, uint16_t  uCodePt, char  cReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:211
	unsigned char cCode;

	// lobbyutf8.c:212
	char * pOldBuf;

	// lobbyutf8.c:213
	int32_t bFound;

}

// lobbyutf8.c:274
extern int32_t Utf8Strip(char *  pOutStr, int32_t  iBufSize, const char *  pInStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyutf8.c:297
extern int32_t Utf8Replace(char *  pOutStr, int32_t  iBufSize, const char *  pInStr, char  cReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:298
	int32_t iSrcIdx;

	// lobbyutf8.c:298
	int32_t iDstIdx;

	{
		// lobbyutf8.c:315
		int32_t iNumBytes;

	}
}

// lobbyutf8.c:356
extern int32_t Utf8StrLen(const char *  pStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:357
	int32_t iSrcIdx;

	// lobbyutf8.c:357
	int32_t iStrLen;

	{
		// lobbyutf8.c:364
		int32_t iNumBytes;

	}
}

// lobbyutf8.c:396
extern int32_t Utf8EncodeFromUCS2(char *  pOutStr, int32_t  iBufLen, const uint16_t *  pInStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:397
	int32_t iStrLen;

}

// lobbyutf8.c:431
extern int32_t Utf8DecodeToUCS2(uint16_t *  pOutStr, int32_t  iBufLen, const char *  pInStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:432
	int32_t iSrcIdx;

	// lobbyutf8.c:432
	int32_t iStrLen;

	// lobbyutf8.c:432
	int32_t iCodeSize;

}

// lobbyutf8.c:472
extern int32_t Utf8EncodeFrom8Bit(char *  pOutStr, int32_t  iBufLen, const char *  pInStr, const Utf8EncodeTblT *  pEncodeTbl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:473
	int32_t iStrLen;

	// lobbyutf8.c:474
	uint16_t uCodePt;

}

// lobbyutf8.c:515
extern int32_t Utf8TranslateTo8Bit(char *  pOutStr, int32_t  iBufLen, const char *  pInStr, char  cReplace, const Utf8TransTblT *  pTransTbl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyutf8.c:516
	int32_t iSrcIdx;

	// lobbyutf8.c:516
	int32_t iDstIdx;

	// lobbyutf8.c:517
	uint16_t uCodePt;

}

