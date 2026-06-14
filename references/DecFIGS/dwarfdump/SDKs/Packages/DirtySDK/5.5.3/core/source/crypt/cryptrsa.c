// cryptrsa.c:78
int32_t _Addition(uint16_t *  pResult, int32_t  iWidth, uint16_t *  pAdd1, uint16_t *  pAdd2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:79
	uint32_t uAccum;

}

// cryptrsa.c:118
int32_t _Subtract(uint16_t *  pResult, int32_t  iWidth, uint16_t *  pSub1, uint16_t *  pSub2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:119
	uint32_t uAccum;

}

// cryptrsa.c:157
int32_t _BitTest(uint16_t *  pValue, int32_t  iWidth, int32_t  iBit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:158
	int32_t iStep;

	// cryptrsa.c:159
	int32_t iWeight;

	// cryptrsa.c:160
	int32_t iOffset;

	// cryptrsa.c:161
	uint16_t uResult;

}

// cryptrsa.c:188
void _Multiply(uint16_t *  pResult, int32_t  iWidth, uint16_t *  pMul1, uint16_t *  pMul2, uint16_t *  pMod) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:189
	int32_t iCount;

	// cryptrsa.c:190
	int32_t iCarry;

	// cryptrsa.c:191
	uint16_t[256] Temp1;

	// cryptrsa.c:192
	uint16_t[256] Temp2;

	// cryptrsa.c:193
	uint16_t * pCur;

	// cryptrsa.c:194
	uint16_t * pAlt;

	{
		// cryptrsa.c:207
		uint16_t * pSwap;

	}
	{
		// cryptrsa.c:220
		uint16_t * pSwap;

	}
}

// cryptrsa.c:250
int32_t _ToWords(uint16_t *  pResult, int32_t  iWidth, const uint8_t *  pSource, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:251
	int32_t iFullWordCount;

	// cryptrsa.c:252
	int32_t iWordCount;

}

// cryptrsa.c:295
void _FromWords(const uint16_t *  pSource, int32_t  iWidth, uint8_t *  pResult, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptrsa.c:331
void _Exponentiate(uint8_t *  pResult, uint8_t *  pPowerof, const uint8_t *  pModulus, int32_t  iModSize, const uint8_t *  pExponent, int32_t  iExpSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:332
	int32_t iIndex;

	// cryptrsa.c:333
	int32_t iWidth;

	// cryptrsa.c:334
	uint32_t uExponent;

	// cryptrsa.c:335
	uint16_t[256] Modulus;

	// cryptrsa.c:336
	uint16_t[256] Powerof;

	// cryptrsa.c:337
	uint16_t[256] Accumul;

}

// cryptrsa.c:438
extern void CryptRSAInit(CryptRSAT *  pState, const uint8_t *  pModulus, int32_t  iModSize, const uint8_t *  pExponent, int32_t  iExpSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptrsa.c:463
extern void CryptRSAInitMaster(CryptRSAT *  pState, const uint8_t *  pMaster, int32_t  iMasterLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptrsa.c:464
	int32_t iIndex;

	// cryptrsa.c:465
	uint32_t uRandom;

}

// cryptrsa.c:515
extern void CryptRSAInitSignature(CryptRSAT *  pState, const uint8_t *  pSig, int32_t  iSigLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptrsa.c:534
extern void CryptRSAEncrypt(CryptRSAT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

