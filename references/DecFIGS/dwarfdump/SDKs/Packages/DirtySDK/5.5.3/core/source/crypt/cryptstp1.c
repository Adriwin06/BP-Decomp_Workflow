// cryptstp1.c:108
uint32_t _CryptStp1MakeMasterSecret(CryptStp1SharedT *  pShared, CryptStp1TicketT *  pTicket, char *  pMasterSecret) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:141
extern void CryptStp1SetShared(CryptStp1SharedT *  pShared, const void *  pData, uint32_t  uDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cryptstp1.c:151
		uint32_t i;

		// cryptstp1.c:151
		uint32_t j;

		// cryptstp1.c:152
		const char * pBytes;

	}
}

// cryptstp1.c:180
extern void CryptStp1MakeWallet(CryptStp1WalletT *  pWallet, CryptStp1SharedT *  pShared, uint32_t  uTime, const char *  pRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptstp1.c:181
	CryptMD5T MD5;

	// cryptstp1.c:182
	CryptArc4T Arc4;

	// cryptstp1.c:183
	char[256] strCrypt;

	// cryptstp1.c:184
	uint32_t uSize;

}

// cryptstp1.c:235
extern int32_t CryptStp1OpenWallet(CryptStp1WalletT *  pWallet, CryptStp1SecretT *  pSecret, CryptStp1TicketT *  pTicket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:267
extern int32_t CryptStp1UseSecret(CryptStp1StreamT *  pStream, CryptStp1SecretT *  pSecret) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:300
extern int32_t CryptStp1UseTicket(CryptStp1StreamT *  pStream, CryptStp1TicketT *  pTicket, CryptStp1SharedT *  pShared, uint32_t  uTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptstp1.c:301
	CryptArc4T Arc4;

	// cryptstp1.c:302
	CryptStp1TicketT Ticket;

	// cryptstp1.c:303
	uint32_t uSize;

	// cryptstp1.c:304
	char[256] strCrypt;

}

// cryptstp1.c:351
extern void CryptStp1DecryptData(CryptStp1StreamT *  pStream, char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:377
extern int32_t CryptStp1DecryptHash(CryptStp1StreamT *  pStream, char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptstp1.c:378
	CryptMD5T RecvHash;

	// cryptstp1.c:379
	char[16] strHash;

}

// cryptstp1.c:423
extern int32_t CryptStp1DecryptSize(CryptStp1StreamT *  pStream, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:448
extern int32_t CryptStp1EncryptSize(CryptStp1StreamT *  pStream, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:474
extern int32_t CryptStp1EncryptHash(CryptStp1StreamT *  pStream, char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// cryptstp1.c:475
	CryptMD5T SendHash;

	// cryptstp1.c:476
	int32_t iHash;

}

// cryptstp1.c:515
extern void CryptStp1EncryptData(CryptStp1StreamT *  pStream, char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// cryptstp1.c:538
extern int32_t CryptStp1Enabled(CryptStp1StreamT *  pStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

