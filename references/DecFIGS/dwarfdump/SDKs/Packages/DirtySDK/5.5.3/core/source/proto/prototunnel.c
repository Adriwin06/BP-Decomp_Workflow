// prototunnel.c:169
struct ProtoTunnelControlT {
	// prototunnel.c:170
	uint8_t uPacketType;

	// prototunnel.c:171
	uint8_t[4] aClientId;

	// prototunnel.c:172
	uint8_t uActive;

}

// prototunnel.c:173
typedef ProtoTunnelControlT ProtoTunnelControlT;

// prototunnel.c:176
struct ProtoTunnelT {
	// prototunnel.c:177
	ProtoTunnelInfoT Info;

	// prototunnel.c:178
	uint32_t uVirtualAddr;

	// prototunnel.c:179
	int16_t iDataSize;

	// prototunnel.c:180
	int8_t iNumPackets;

	// prototunnel.c:181
	NetCritT PacketCrit;

	// prototunnel.c:183
	uint16_t uSendOffset;

	// prototunnel.c:184
	uint16_t uRecvOffset;

	// prototunnel.c:185
	CryptArc4T CryptSendState;

	// prototunnel.c:186
	CryptArc4T CryptRecvState;

	// prototunnel.c:189
	uint32_t uLastStatUpdate;

	// prototunnel.c:190
	ProtoTunnelStatT LastSendStat;

	// prototunnel.c:193
	ProtoTunnelStatT SendStat;

	// prototunnel.c:194
	ProtoTunnelStatT RecvStat;

	// prototunnel.c:196
	char[8][128] aKeyList;

	// prototunnel.c:197
	uint8_t uActive;

	// prototunnel.c:198
	uint8_t uRefCount;

	// prototunnel.c:199
	uint8_t uSendKey;

	// prototunnel.c:200
	uint8_t uRecvKey;

	// prototunnel.c:201
	uint8_t bSendCtrlInfo;

	// prototunnel.c:202
	uint8_t[1264] aPacketData;

}

// prototunnel.c:203
typedef ProtoTunnelT ProtoTunnelT;

// prototunnel.c:259
void _ProtoTunnelStreamAdvance(CryptArc4T *  pCryptState, uint16_t *  pOffset, uint32_t  uOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:260
	uint32_t uCryptAlign;

}

// prototunnel.c:293
int32_t _ProtoTunnelVirtualToPhysical(ProtoTunnelRefT *  pProtoTunnel, uint32_t  uVirtualAddr, char *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:294
	ProtoTunnelT * pTunnel;

	// prototunnel.c:295
	uint32_t uRemoteAddr;

	// prototunnel.c:296
	int32_t iTunnel;

	{
		// prototunnel.c:308
		sockaddr SockAddr;

		{
			// prototunnel.c:312
			uint32_t val2;

		}
	}
}

// prototunnel.c:350
int32_t _ProtoTunnelBufferCollect(ProtoTunnelT *  pTunnel, int32_t  iHeadSize, uint8_t *  pPacketData, uint8_t **  ppHeaderDst, uint8_t **  ppPacketDst, uint32_t  uPortFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:351
	int32_t iDataSize;

	// prototunnel.c:351
	int32_t iPacket;

	// prototunnel.c:351
	int32_t iPacketSize;

	// prototunnel.c:352
	uint8_t * pHeaderSrc;

	// prototunnel.c:352
	uint8_t * pPacketSrc;

}

// prototunnel.c:402
void _ProtoTunnelBufferSend(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelT *  pTunnel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:403
	uint8_t[1264] aPacketData;

	// prototunnel.c:404
	int32_t iCryptSize;

	// prototunnel.c:404
	int32_t iDataSize;

	// prototunnel.c:404
	int32_t iHeadSize;

	// prototunnel.c:404
	int32_t iResult;

	// prototunnel.c:405
	uint8_t * pHeaderDst;

	// prototunnel.c:405
	uint8_t * pPacketDst;

	// prototunnel.c:406
	sockaddr SendAddr;

	// prototunnel.c:408
	int32_t iNumPackets;

	{
		// prototunnel.c:423
		uint32_t val2;

	}
	{
		// prototunnel.c:437
		ProtoTunnelControlT ControlPacket;

	}
	{
		// prototunnel.c:517
		ProtoTunnelStatT DiffStat;

	}
}

// prototunnel.c:568
int32_t _ProtoTunnelBufferData(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelT *  pTunnel, const uint8_t *  pData, uint32_t  uSize, uint32_t  uPortIdx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:569
	uint8_t * pBuffer;

}

// prototunnel.c:637
int32_t _ProtoTunnelSendCallback(SocketT *  pSocket, int32_t  iType, const uint8_t *  pData, int32_t  iDataSize, const sockaddr *  pTo, void *  pCallref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:638
	ProtoTunnelRefT * pProtoTunnel;

	// prototunnel.c:639
	ProtoTunnelT * pTunnel;

	// prototunnel.c:640
	uint32_t uAddr;

	// prototunnel.c:640
	uint32_t uPort;

	// prototunnel.c:641
	int32_t iPort;

	// prototunnel.c:641
	int32_t iResult;

	// prototunnel.c:641
	int32_t iTunnel;

	// prototunnel.c:642
	uint32_t bFound;

	{
		// prototunnel.c:680
		uint32_t uPort2;

	}
}

// prototunnel.c:724
int32_t _ProtoTunnelDecryptAndValidatePacket(ProtoTunnelT *  pTunnel, uint8_t *  pPacketData, int32_t  iRecvLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:725
	int32_t iEncryptedSize;

	// prototunnel.c:725
	int32_t iNumPackets;

	// prototunnel.c:725
	int32_t iPacketOffset;

	// prototunnel.c:725
	int32_t iPacketSize;

	// prototunnel.c:726
	uint16_t[18] aPacketHeader;

	// prototunnel.c:727
	uint8_t * pPacketStart;

	// prototunnel.c:728
	uint32_t uRecvOffset;

	// prototunnel.c:729
	CryptArc4T CryptRecvState;

	{
		// prototunnel.c:745
		int32_t iRecvDiff;

	}
}

// prototunnel.c:835
int32_t _ProtoTunnelValidatePacket(const uint8_t *  pPacketData, int32_t  iRecvLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:836
	int32_t iPacketSize;

	// prototunnel.c:837
	int32_t iNumPackets;

}

// prototunnel.c:883
const ProtoTunnelControlT * _ProtoTunnelGetControlPacket(const uint8_t *  pPacketData, int32_t  iPacketSize, int32_t  iNumPackets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:884
	uint32_t uPktHead;

	// prototunnel.c:884
	uint32_t uPktSize;

	// prototunnel.c:884
	uint32_t uPortIdx;

	// prototunnel.c:885
	int32_t iPacket;

	// prototunnel.c:885
	int32_t iPacketOffset;

	// prototunnel.c:886
	const uint8_t * pPacketHead;

}

// prototunnel.c:928
int32_t _ProtoTunnelMatchTunnel(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelT *  pTunnel, const uint8_t *  pPacketData, int32_t  iPacketSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:929
	uint8_t[1264] aPacketData;

	// prototunnel.c:930
	const ProtoTunnelControlT * pControl;

	// prototunnel.c:931
	int32_t iNumPackets;

	// prototunnel.c:932
	int32_t iRecvKey;

	{
		// prototunnel.c:969
		uint32_t uClientId;

	}
}

// prototunnel.c:1032
int32_t _ProtoTunnelRecvData(ProtoTunnelRefT *  pProtoTunnel, uint16_t *  pRemotePortList, int32_t  iPortListSize, uint8_t *  pPacketData, int32_t  iRecvLen, sockaddr *  pRecvAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1033
	uint32_t uRecvAddr;

	// prototunnel.c:1033
	uint32_t uRecvPort;

	// prototunnel.c:1034
	int32_t iNumPackets;

	// prototunnel.c:1034
	int32_t iTunnel;

	// prototunnel.c:1035
	ProtoTunnelT * pTunnel;

	{
		// prototunnel.c:1120
		const ProtoTunnelControlT * pControl;

		{
			// prototunnel.c:1144
			uint32_t val2;

		}
	}
}

// prototunnel.c:1183
int32_t _ProtoTunnelRecvCallback(SocketT *  pSocket, int32_t  iFlags, void *  _pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1184
	ProtoTunnelRefT * pProtoTunnel;

	// prototunnel.c:1185
	sockaddr RecvAddr;

	// prototunnel.c:1186
	int32_t iPacket;

	// prototunnel.c:1186
	int32_t iNumPackets;

	// prototunnel.c:1187
	int32_t iRecvAddrLen;

	// prototunnel.c:1187
	int32_t iRecvLen;

	// prototunnel.c:1188
	uint8_t * pPacketHead;

	// prototunnel.c:1188
	uint8_t * pPacketData;

	// prototunnel.c:1188
	uint8_t[1264] aPacketData;

	// prototunnel.c:1189
	uint16_t[8] aRemotePortList;

	{
		// prototunnel.c:1254
		uint32_t uPktHead;

		// prototunnel.c:1255
		uint32_t uPktSize;

		// prototunnel.c:1256
		uint32_t uPortIdx;

		// prototunnel.c:1257
		uint32_t uPort;

	}
}

// prototunnel.c:1321
int32_t _ProtoTunnelSocketOpen(ProtoTunnelRefT *  pProtoTunnel, int32_t  iPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1322
	sockaddr BindAddr;

	// prototunnel.c:1323
	int32_t iResult;

}

// prototunnel.c:1386
extern ProtoTunnelRefT * ProtoTunnelCreate(int32_t  iMaxTunnels, int32_t  iTunnelPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1387
	ProtoTunnelRefT * pProtoTunnel;

	// prototunnel.c:1388
	int32_t iMemGroup;

	// prototunnel.c:1389
	int32_t iRefSize;

}

// prototunnel.c:1448
extern void ProtoTunnelDestroy(ProtoTunnelRefT *  pProtoTunnel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// prototunnel.c:1481
extern void ProtoTunnelCallback(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// prototunnel.c:1504
extern int32_t ProtoTunnelAlloc(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelInfoT *  pInfo, const char *  pKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1505
	ProtoTunnelT * pTunnel;

	// prototunnel.c:1506
	int32_t iTunnel;

	{
		// prototunnel.c:1518
		int32_t iKey;

		// prototunnel.c:1518
		int32_t iKeySlot;

		// prototunnel.c:1518
		int32_t iResult;

	}
	{
		// prototunnel.c:1601
		int32_t iPort;

	}
}

// prototunnel.c:1637
extern void ProtoTunnelFree(ProtoTunnelRefT *  pProtoTunnel, uint32_t  uTunnelId, const char *  pKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1638
	ProtoTunnelT * pTunnel;

	// prototunnel.c:1639
	int32_t iTunnel;

	// prototunnel.c:1641
	uint32_t bFound;

	{
		// prototunnel.c:1672
		int32_t iNumMoveTunnels;

	}
	{
		// prototunnel.c:1679
		int32_t iKey;

	}
}

// prototunnel.c:1754
extern int32_t ProtoTunnelValidatePacket(ProtoTunnelRefT *  pProtoTunnel, ProtoTunnelT *  pTunnel, uint8_t *  pOutputData, const uint8_t *  pPacketData, int32_t  iPacketSize, const char *  pKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:1755
	uint8_t[1264] aPacketData;

	// prototunnel.c:1755
	uint8_t * _pPacketData;

	// prototunnel.c:1756
	int32_t iEncryptedSize;

	// prototunnel.c:1756
	int32_t iNumPackets;

	// prototunnel.c:1756
	int32_t iPacketOffset;

	// prototunnel.c:1756
	int32_t iSubPacketSize;

	// prototunnel.c:1757
	CryptArc4T CryptRecvState;

	// prototunnel.c:1758
	uint32_t uRecvOffset;

	{
		// prototunnel.c:1787
		int32_t iRecvDiff;

	}
}

// prototunnel.c:1874
extern int32_t ProtoTunnelStatus(ProtoTunnelRefT *  pProtoTunnel, int32_t  iSelect, int32_t  iValue, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// prototunnel.c:1940
extern int32_t ProtoTunnelControl(ProtoTunnelRefT *  pProtoTunnel, int32_t  iControl, int32_t  iValue, int32_t  iValue2, const void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// prototunnel.c:1956
		ProtoTunnelT * pTunnel;

		// prototunnel.c:1957
		int32_t iTunnel;

	}
}

// prototunnel.c:2016
extern void ProtoTunnelUpdate(ProtoTunnelRefT *  pProtoTunnel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// prototunnel.c:2017
	uint32_t uTick;

	{
		// prototunnel.c:2027
		int32_t iTunnel;

	}
}

