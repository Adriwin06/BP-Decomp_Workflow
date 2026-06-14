// cryptssc2.c:127
extern void CryptSSC2Init(CryptSSC2T *  pState, const unsigned char *  pKey, int32_t  iKey, int32_t  iIter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptssc2.c:128
	int32_t iIdx;

	// cryptssc2.c:129
	uint32_t uCrc;

	// cryptssc2.c:130
	unsigned char uSwap0;

	// cryptssc2.c:130
	unsigned char uSwap1;

}

// cryptssc2.c:206
extern void CryptSSC2Apply(CryptSSC2T *  pState, unsigned char *  pData, int32_t  iData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptssc2.c:207
	unsigned char uSwap0;

	// cryptssc2.c:207
	unsigned char uSwap1;

	// cryptssc2.c:208
	unsigned char iIdx;

	// cryptssc2.c:209
	uint32_t uCrc;

}

// cryptssc2.c:258
extern int32_t CryptSSC2StringEncrypt(char *  pDst, int32_t  iLen, const char *  pSrc, const unsigned char *  pKey, int32_t  iKey, int32_t  iIter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptssc2.c:259
	int32_t iSum;

	// cryptssc2.c:260
	CryptSSC2T ref;

	// cryptssc2.c:261
	unsigned char uDat;

	// cryptssc2.c:262
	unsigned char uEnc;

}

// cryptssc2.c:337
extern int32_t CryptSSC2StringDecrypt(char *  pDst, int32_t  iLen, const char *  pSrc, const unsigned char *  pKey, int32_t  iKey, int32_t  iIter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptssc2.c:338
	int32_t iIdx;

	// cryptssc2.c:339
	int32_t iSum;

	// cryptssc2.c:340
	CryptSSC2T ref;

	// cryptssc2.c:341
	unsigned char uDat;

	// cryptssc2.c:342
	unsigned char uDec;

}

// cryptssc2.c:398
extern void CryptSSC2Test() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptssc2.c:399
	int32_t x;

	// cryptssc2.c:400
	char[32] buf;

	// cryptssc2.c:401
	unsigned char[16] skey;

}

// cryptssc2.c:57
const uint32_t[256] _Cipher_Crc32;

// cryptssc2.c:93
int32_t _SSC2_Init;

// cryptssc2.c:94
CryptSSC2T _SSC2_Random;

