// cryptmd5.c:135
void _CryptMD5Transform(CryptMD5T *  pContext, const unsigned char *  pBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptmd5.c:136
	uint32_t a;

	// cryptmd5.c:137
	uint32_t b;

	// cryptmd5.c:138
	uint32_t c;

	// cryptmd5.c:139
	uint32_t d;

	// cryptmd5.c:140
	uint32_t[16] uData;

	// cryptmd5.c:143
	uint32_t volatile* pVector;

}

// cryptmd5.c:272
extern void CryptMD5Init(CryptMD5T *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptmd5.c:305
extern void CryptMD5Update(CryptMD5T *  pContext, const void *  _pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptmd5.c:306
	int32_t uAdd;

	// cryptmd5.c:307
	uint32_t uCount;

	// cryptmd5.c:308
	const unsigned char * pBuffer;

}

// cryptmd5.c:378
extern void CryptMD5Final(CryptMD5T *  pContext, void *  _pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptmd5.c:379
	int32_t uIndex;

	// cryptmd5.c:380
	uint32_t uZero;

	// cryptmd5.c:381
	uint32_t * pZero;

	// cryptmd5.c:382
	uint32_t uData;

	// cryptmd5.c:383
	unsigned char * pBuffer;

}

// cryptmd5.c:107
char * _MD5_HexChars;

