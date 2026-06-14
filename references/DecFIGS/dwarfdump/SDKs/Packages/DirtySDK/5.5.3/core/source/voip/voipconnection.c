// voipconnection.c:93
uint32_t _VoipDecodeU32(const uint8_t *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:94
	uint32_t uValue;

}

// voipconnection.c:118
void _VoipEncodeU32(uint8_t *  pValue, uint32_t  uValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:143
VoipConnectionT * _VoipConnectionAllocate(VoipConnectionlistT *  pConnectionlist, int32_t  iConnID, VoipUserT *  pUserID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:144
	VoipConnectionT * pConnection;

	// voipconnection.c:145
	int32_t iConnTest;

}

// voipconnection.c:223
int32_t _VoipSocketSendto(SocketT *  pSocket, uint32_t  uClientId, VoipPacketHeadT *  pBuf, int32_t  iLen, int32_t  iFlags, sockaddr *  pTo, int32_t  iToLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:255
void _VoipConnectionConn(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:256
	VoipConnPacketT ConnPacket;

}

// voipconnection.c:298
void _VoipConnectionDisc(uint32_t  uClientId, uint32_t  uRemoteClientId, uint32_t  uSessionId, sockaddr_in *  pRemoteAddr, SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:299
	VoipDiscPacketT DiscPacket;

}

// voipconnection.c:333
void _VoipConnectionInit(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:368
void _VoipConnectionPing(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:369
	VoipPingPacketT PingPacket;

}

// voipconnection.c:408
void _VoipConnectionSendSingle(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, uint32_t  uTick, unsigned char  uSendSeqn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:410
	VoipPacketT * pPacket;

	// voipconnection.c:411
	uint32_t bSendPacket;

}

// voipconnection.c:502
void _VoipConnectionRecvSingle(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, sockaddr_in *  pRemoteAddr, VoipPacketT *  pPacket, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:503
	int32_t iConnID;

	// voipconnection.c:505
	uint32_t uClientId;

	// voipconnection.c:507
	uint32_t uTick;

	{
		// voipconnection.c:534
		VoipConnPacketT * pConnPacket;

		// voipconnection.c:535
		uint32_t uSessionId;

	}
	{
		// voipconnection.c:611
		VoipDiscPacketT * pDiscPacket;

		// voipconnection.c:612
		uint32_t uSessionId;

	}
}

// voipconnection.c:653
uint32_t _VoipConnectionUpdateSingle(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, int32_t  iConnId, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:654
	int32_t iTimeout;

}

// voipconnection.c:712
void _VoipConnectionMatch(VoipConnectionlistT *  pConnectionlist, VoipPacketT *  pRecvPacket, sockaddr_in *  pRecvAddr, int32_t  iRecvSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:713
	VoipConnPacketT * pConnPacket;

	// voipconnection.c:714
	VoipConnectionT * pConnection;

	// voipconnection.c:715
	uint32_t uSessionId;

	// voipconnection.c:716
	int32_t iConnID;

}

// voipconnection.c:775
int32_t _VoipConnectionRecv(VoipConnectionlistT *  pConnectionlist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:776
	sockaddr_in RecvAddr;

	// voipconnection.c:777
	int32_t iAddrLen;

	// voipconnection.c:777
	int32_t iRecvSize;

	// voipconnection.c:778
	VoipPacketT RecvPacket;

	{
		// voipconnection.c:789
		VoipConnectionT * pConnection;

		// voipconnection.c:790
		int32_t iConnID;

		// voipconnection.c:791
		uint32_t uClientId;

	}
}

// voipconnection.c:863
int32_t _VoipConnectionRecvCallback(SocketT *  pSocket, int32_t  iFlags, void *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:864
	VoipConnectionlistT * pConnectionlist;

}

// voipconnection.c:903
void _VoipConnectionStop(VoipConnectionlistT *  pConnectionlist, VoipConnectionT *  pConnection, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:951
extern uint32_t VoipConnectionRemoveConnFromMask(uint32_t  uSrcMask, uint32_t  uConnId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:952
	uint32_t uHi;

	// voipconnection.c:952
	uint32_t uLo;

	// voipconnection.c:952
	uint32_t uMask;

}

// voipconnection.c:983
extern int32_t VoipConnectionStartup(VoipConnectionlistT *  pConnectionlist, VoipUserT *  pLocalUser, int32_t  iMaxPeers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:1026
extern void VoipConnectionSetCallbacks(VoipConnectionlistT *  pConnectionlist, VoipConnectRecvVoiceCbT *  pVoiceCb, VoipConnectRegUserCbT *  pRegUserCb, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:1049
extern void VoipConnectionShutdown(VoipConnectionlistT *  pConnectionlist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:1090
extern int32_t VoipConnectionStart(VoipConnectionlistT *  pConnectionlist, int32_t  iConnID, VoipUserT *  pUserID, uint32_t  uAddr, uint32_t  uConnPort, uint32_t  uBindPort, uint32_t  uClientId, uint32_t  uSessionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:1091
	VoipConnectionT * pConnection;

	// voipconnection.c:1092
	sockaddr BindAddr;

	{
		// voipconnection.c:1097
		int iResult;

	}
}

// voipconnection.c:1194
extern void VoipConnectionUpdate(VoipConnectionlistT *  pConnectionlist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:1195
	int32_t iConnId;

	// voipconnection.c:1195
	int32_t iNumConnections;

	// voipconnection.c:1196
	uint32_t uTick;

}

// voipconnection.c:1249
extern void VoipConnectionStop(VoipConnectionlistT *  pConnectionlist, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:1286
extern void VoipConnectionRemove(VoipConnectionlistT *  pConnectionlist, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// voipconnection.c:1292
		VoipConnectionT * pConnection;

		// voipconnection.c:1293
		int32_t iNumMoveConns;

	}
}

// voipconnection.c:1334
extern void VoipConnectionSend(VoipConnectionlistT *  pConnectionlist, const void *  pVoiceData, int32_t  iDataSize, unsigned char  uSendSeqn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipconnection.c:1335
	uint32_t uCurTick;

	// voipconnection.c:1336
	int32_t iConnID;

	{
		// voipconnection.c:1342
		VoipConnectionT * pConnection;

		{
			// voipconnection.c:1348
			VoipPacketT * pPacket;

		}
	}
}

// voipconnection.c:1392
extern void VoipConnectionSetSendMask(VoipConnectionlistT *  pConnectionlist, uint32_t  uSendMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipconnection.c:1417
extern void VoipConnectionSetRecvMask(VoipConnectionlistT *  pConnectionlist, uint32_t  uRecvMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// voipconnection.c:1420
		uint32_t uConnMask;

		// voipconnection.c:1421
		unsigned char bRegister;

		// voipconnection.c:1422
		int32_t iConnID;

		{
			// voipconnection.c:1432
			VoipConnectionT * pConnection;

		}
	}
}

// voipconnection.c:63
VoipPacketHeadT _Voip_ConnPacket;

// voipconnection.c:66
VoipPacketHeadT _Voip_DiscPacket;

// voipconnection.c:69
VoipPacketHeadT _Voip_PingPacket;

// voipconnection.c:72
VoipPacketHeadT _Voip_MicrPacket;

