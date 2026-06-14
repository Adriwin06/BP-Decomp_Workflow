// cryptsha1.c:72
void _CryptSha1CopyHash(CryptSha1T *  pSha1, void *  pBuffer, uint32_t  uLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptsha1.c:73
	unsigned char * pOutput;

	// cryptsha1.c:74
	uint32_t i;

}

// cryptsha1.c:124
void _CryptSha1ProcessBlock(CryptSha1T *  pSha1, const unsigned char *  M) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptsha1.c:125
	uint32_t i;

	// cryptsha1.c:126
	uint32_t t;

	// cryptsha1.c:127
	unsigned int A;

	// cryptsha1.c:127
	unsigned int B;

	// cryptsha1.c:127
	unsigned int C;

	// cryptsha1.c:127
	unsigned int D;

	// cryptsha1.c:127
	unsigned int E;

	// cryptsha1.c:128
	uint32_t[80] W;

	{
		// cryptsha1.c:151
		uint32_t TEMP;

	}
	{
		// cryptsha1.c:157
		uint32_t TEMP;

	}
	{
		// cryptsha1.c:163
		uint32_t TEMP;

	}
	{
		// cryptsha1.c:169
		uint32_t TEMP;

	}
}

// cryptsha1.c:200
extern void CryptSha1Init(CryptSha1T *  pSha1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptsha1.c:228
extern void CryptSha1Update(CryptSha1T *  pSha1, const unsigned char *  pInput, uint32_t  uInputLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cryptsha1.c:231
		uint32_t uWant;

		// cryptsha1.c:232
		uint32_t uHave;

	}
}

// cryptsha1.c:288
extern void CryptSha1Final(CryptSha1T *  pSha1, void *  pBuffer, uint32_t  uLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptsha1.c:289
	uint32_t i;

	// cryptsha1.c:290
	uint8_t uPad;

	// cryptsha1.c:291
	uint32_t uSpace;

}

