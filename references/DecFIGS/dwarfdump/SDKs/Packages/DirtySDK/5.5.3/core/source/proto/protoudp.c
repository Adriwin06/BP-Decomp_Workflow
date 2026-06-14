// protoudp.c:107
uint32_t _ProtoUdpGetNextPacket(ProtoUdpT *  pUdp, uint32_t  uPacket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:108
	uint32_t delta;

}

// protoudp.c:141
extern ProtoUdpT * ProtoUdpCreate(int32_t  iMaxPacketSize, int32_t  iMaxPackets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:142
	ProtoUdpT * pUdp;

	// protoudp.c:143
	int32_t uRoundedMaxPacketSize;

	// protoudp.c:144
	int32_t uTotalPacketSpace;

	// protoudp.c:145
	int32_t iMemGroup;

}

// protoudp.c:188
extern int32_t ProtoUdpBind(ProtoUdpT *  pUdp, int32_t  iPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:189
	sockaddr LocalAddr;

	// protoudp.c:190
	int32_t iResult;

}

// protoudp.c:223
extern int32_t ProtoUdpConnect(ProtoUdpT *  pUdp, sockaddr *  pRemoteAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:224
	int32_t iResult;

}

// protoudp.c:253
extern void ProtoUdpDestroy(ProtoUdpT *  pUdp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoudp.c:282
extern void ProtoUdpDisconnect(ProtoUdpT *  pUdp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoudp.c:319
extern void ProtoUdpGetLocalAddr(ProtoUdpT *  pUdp, sockaddr_in *  pLocalAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protoudp.c:328
		uint16_t port;

	}
}

// protoudp.c:355
extern int32_t ProtoUdpRecvFrom(ProtoUdpT *  pUdp, char *  pBuffer, uint32_t  uBufferLen, sockaddr *  pRemoteAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:356
	uint32_t uPacket;

	// protoudp.c:357
	uint32_t * pPacket;

	// protoudp.c:358
	uint32_t uPacketLen;

}

// protoudp.c:406
extern int32_t ProtoUdpSend(ProtoUdpT *  pUdp, const char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoudp.c:432
extern int32_t ProtoUdpSendTo(ProtoUdpT *  pUdp, const char *  pData, int32_t  iSize, sockaddr *  pRemoteAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoudp.c:462
extern void ProtoUdpUpdate(ProtoUdpT *  pUdp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoudp.c:463
	sockaddr_in RemoteAddr;

	// protoudp.c:463
	sockaddr_in * pRemoteAddr;

	// protoudp.c:464
	int32_t iAddrLen;

	// protoudp.c:465
	uint32_t * pPacketLen;

	// protoudp.c:466
	char * pPacketData;

	// protoudp.c:467
	int32_t iResult;

}

