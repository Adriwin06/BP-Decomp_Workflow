// protoaries.c:101
int32_t _ProtoAriesBuff(ProtoAriesRefT *  pProtoAries, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:102
	ProtoAriesMsgHdrT * pHdr;

	// protoaries.c:103
	int32_t iDone;

	// protoaries.c:103
	int32_t iStep;

}

// protoaries.c:162
extern ProtoAriesRefT * ProtoAriesCreate(int32_t  iMaxBuf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:163
	ProtoAriesRefT * pProtoAries;

	// protoaries.c:164
	int32_t iMemGroup;

}

// protoaries.c:206
extern void ProtoAriesDestroy(ProtoAriesRefT *  pProtoAries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:251
extern int32_t ProtoAriesStatus(ProtoAriesRefT *  pProtoAries, int32_t  iSelect, void *  pBuf, int32_t  iBufLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:322
extern int32_t ProtoAriesConnect(ProtoAriesRefT *  pProtoAries, const char *  pServer, uint32_t  uAddr, int32_t  iPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protoaries.c:355
		CryptStp1SecretT Secret;

		// protoaries.c:356
		CryptStp1TicketT Ticket;

	}
}

// protoaries.c:393
extern int32_t ProtoAriesUnconnect(ProtoAriesRefT *  pProtoAries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:427
extern int32_t ProtoAriesListen(ProtoAriesRefT *  pProtoAries, uint32_t  uAddr, int32_t  iPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:481
extern int32_t ProtoAriesUnlisten(ProtoAriesRefT *  pProtoAries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:514
extern void ProtoAriesSecure(ProtoAriesRefT *  pProtoAries, ProtoAriesSecureE  eSecure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoaries.c:540
extern void ProtoAriesSetKey(ProtoAriesRefT *  pProtoAries, const void *  pKey, uint32_t  uKeySize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:541
	const CryptStp1WalletT * pWallet;

}

// protoaries.c:572
extern void ProtoAriesUpdate(ProtoAriesRefT *  pProtoAries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:573
	ProtoAriesMsgHdrT * pHdr;

	// protoaries.c:574
	sockaddr_in SockAddr;

	// protoaries.c:575
	int32_t iLen;

	{
		// protoaries.c:604
		ProtoSSLRefT * pSsl;

	}
	{
		// protoaries.c:637
		int32_t iStat;

	}
}

// protoaries.c:844
extern int32_t ProtoAriesSend(ProtoAriesRefT *  pProtoAries, int32_t  iKind, int32_t  iCode, const char *  pBody, int32_t  iBodyLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:845
	ProtoAriesMsgHdrT * pHdr;

	// protoaries.c:846
	unsigned char * pStart;

	// protoaries.c:847
	int32_t iSize;

}

// protoaries.c:933
extern int32_t ProtoAriesPeek(ProtoAriesRefT *  pProtoAries, int32_t *  pKind, int32_t *  pCode, char **  ppBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:934
	ProtoAriesMsgHdrT * pHdr;

	// protoaries.c:935
	char * pData;

	// protoaries.c:936
	int32_t iLen;

}

// protoaries.c:1011
extern int32_t ProtoAriesRecv(ProtoAriesRefT *  pProtoAries, int32_t *  pKind, int32_t *  pCode, char *  pBody, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoaries.c:1013
	int32_t iLen;

}

// protoaries.c:1053
extern uint32_t ProtoAriesTick(ProtoAriesRefT *  pProtoAries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

