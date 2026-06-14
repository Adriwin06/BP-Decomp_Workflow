// dirtynetps3.c:61
struct SocketLookupPrivT {
	// dirtynetps3.c:62
	HostentT Host;

	// dirtynetps3.c:63
	sys_ppu_thread_t iThreadId;

}

// dirtynetps3.c:64
typedef SocketLookupPrivT SocketLookupPrivT;

// dirtynetps3.c:109
struct HeaderIpv4 {
	// dirtynetps3.c:110
	unsigned char verslen;

	// dirtynetps3.c:111
	unsigned char service;

	// dirtynetps3.c:112
	unsigned char[2] length;

	// dirtynetps3.c:113
	unsigned char[2] ident;

	// dirtynetps3.c:114
	unsigned char[2] frag;

	// dirtynetps3.c:115
	unsigned char time;

	// dirtynetps3.c:116
	unsigned char proto;

	// dirtynetps3.c:117
	unsigned char[2] check;

	// dirtynetps3.c:118
	unsigned char[4] srcaddr;

	// dirtynetps3.c:119
	unsigned char[4] dstaddr;

}

// dirtynetps3.c:120
typedef HeaderIpv4 HeaderIpv4;

// dirtynetps3.c:124
struct SocketStateT {
	// dirtynetps3.c:125
	SocketT * pSockList;

	// dirtynetps3.c:126
	SocketT * pSockKill;

	// dirtynetps3.c:128
	uint16_t[32] aVirtualPorts;

	// dirtynetps3.c:130
	int32_t iMemGroup;

	// dirtynetps3.c:132
	void * pMemPool;

	// dirtynetps3.c:134
	int32_t iSid;

	// dirtynetps3.c:135
	int32_t iHandlerId;

	// dirtynetps3.c:136
	uint32_t uConnStatus;

	// dirtynetps3.c:137
	uint32_t uLocalAddr;

	// dirtynetps3.c:138
	uint8_t[6] aMacAddr;

	// dirtynetps3.c:141
	sys_ppu_thread_t volatile iRecvThread;

	// dirtynetps3.c:142
	int32_t volatile iRecvLife;

	// dirtynetps3.c:143
	int32_t iPollSocket;

	// dirtynetps3.c:144
	NetCritT PollCrit;

	// dirtynetps3.c:145
	NetCritT SockCrit;

	// dirtynetps3.c:148
	SocketSendCallbackT * pSendCallback;

	// dirtynetps3.c:149
	void * pSendCallref;

}

// dirtynetps3.c:150
typedef SocketStateT SocketStateT;

// dirtynetps3.c:181
int32_t _XlatError(int32_t  iErr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:216
void _SockAddrToSceAddr(sockaddr *  pSceAddr, const sockaddr *  pSockAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:239
void _SocketNetCtlHandler(int32_t  iPrevState, int32_t  iNewState, int32_t  iEvent, int32_t  iErrorCode, void *  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:240
	SocketStateT * pState;

	// dirtynetps3.c:241
	int32_t iResult;

	// dirtynetps3.c:244
	const char *[4] _StateNames;

	// dirtynetps3.c:251
	const char *[7] _EventNames;

	{
		// dirtynetps3.c:272
		CellNetCtlInfo CtlInfo;

	}
}

// dirtynetps3.c:331
SocketT * _SocketOpen(int32_t  iSocket, int32_t  iAddrFamily, int32_t  iType, int32_t  iProto, int32_t  iOpened) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:332
	SocketStateT * pState;

	// dirtynetps3.c:333
	SocketT * pSocket;

	{
		// dirtynetps3.c:345
		uint32_t uTrue;

	}
}

// dirtynetps3.c:403
int32_t _SocketClose(SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:404
	SocketStateT * pState;

	// dirtynetps3.c:405
	uint32_t bSockInList;

	// dirtynetps3.c:406
	SocketT ** ppSocket;

}

// dirtynetps3.c:464
void _SocketIdle(void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:465
	SocketStateT * pState;

	// dirtynetps3.c:466
	SocketT * pSocket;

	// dirtynetps3.c:467
	uint32_t uTick;

}

// dirtynetps3.c:517
int32_t _SocketLookupDone(HostentT *  pHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:538
void _SocketLookupFree(HostentT *  pHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:539
	SocketStateT * pState;

	// dirtynetps3.c:540
	SocketLookupPrivT * pPriv;

}

// dirtynetps3.c:577
void _SocketLookupThread(uint64_t  _pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:578
	SocketStateT * pState;

	// dirtynetps3.c:579
	HostentT * pHost;

	// dirtynetps3.c:580
	hostent * pSceHost;

	// dirtynetps3.c:581
	unsigned char * pAddr;

	// dirtynetps3.c:584
	sys_ppu_thread_t uThreadId;

}

// dirtynetps3.c:643
int32_t _SocketRecvfrom(SocketT *  pSocket, char *  pBuf, int32_t  iLen, sockaddr *  pFrom, int32_t *  pFromLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:644
	int32_t iResult;

	{
		// dirtynetps3.c:648
		sockaddr SockAddr;

		// dirtynetps3.c:649
		int32_t iFromLen;

		{
			// dirtynetps3.c:657
			uint32_t val2;

		}
	}
}

// dirtynetps3.c:688
void _SocketRecvData(SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:715
void _SocketRead(SocketStateT *  pState, SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// dirtynetps3.c:725
		int32_t iFromLen;

	}
}

// dirtynetps3.c:759
void _SocketRecvThread(uint64_t  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:760
	SocketT * pSocket;

	// dirtynetps3.c:761
	SocketT *[32] aSocketList;

	// dirtynetps3.c:762
	pollfd[32] aPollList;

	// dirtynetps3.c:763
	int32_t iSocket;

	// dirtynetps3.c:763
	int32_t iNumSockets;

	// dirtynetps3.c:763
	int32_t iResult;

	// dirtynetps3.c:764
	SocketStateT * pState;

}

// dirtynetps3.c:859
extern void SocketCreate(int32_t  iThreadPrio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:860
	SocketStateT * pState;

	// dirtynetps3.c:861
	sys_net_initialize_parameter_t InitParam;

	// dirtynetps3.c:862
	int32_t iMemGroup;

	// dirtynetps3.c:863
	int32_t iResult;

}

// dirtynetps3.c:940
extern void SocketDestroy(uint32_t  uFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:941
	SocketStateT * pState;

	// dirtynetps3.c:942
	int32_t iResult;

}

// dirtynetps3.c:1015
extern SocketT * SocketOpen(int32_t  iAddrFamily, int32_t  iType, int32_t  iProto) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:1035
extern int32_t SocketClose(SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1036
	int32_t iSocket;

}

// dirtynetps3.c:1079
extern SocketT * SocketImport(intptr_t  uSockRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1080
	SocketStateT * pState;

	// dirtynetps3.c:1081
	uint32_t uProtoSize;

	// dirtynetps3.c:1082
	SocketT * pSock;

	// dirtynetps3.c:1083
	int32_t iProto;

}

// dirtynetps3.c:1140
extern void SocketRelease(SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:1169
extern int32_t SocketShutdown(SocketT *  pSocket, int32_t  iHow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1170
	int32_t iResult;

}

// dirtynetps3.c:1228
extern int32_t SocketBind(SocketT *  pSocket, const sockaddr *  pName, int32_t  iNameLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1229
	SocketStateT * pState;

	// dirtynetps3.c:1230
	sockaddr SockAddr;

	// dirtynetps3.c:1231
	int32_t iResult;

	{
		// dirtynetps3.c:1253
		int32_t iPort;

		// dirtynetps3.c:1254
		uint16_t uPort;

	}
}

// dirtynetps3.c:1311
extern int32_t SocketConnect(SocketT *  pSocket, sockaddr *  pName, int32_t  iNameLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1312
	sockaddr SockAddr;

	// dirtynetps3.c:1313
	int32_t iResult;

}

// dirtynetps3.c:1348
extern int32_t SocketListen(SocketT *  pSocket, int32_t  iBacklog) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1350
	int32_t iResult;

}

// dirtynetps3.c:1381
extern SocketT * SocketAccept(SocketT *  pSocket, sockaddr *  pAddr, int32_t *  pAddrLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1382
	int32_t iAddrLen;

	// dirtynetps3.c:1382
	int32_t iIncoming;

	// dirtynetps3.c:1383
	sockaddr SockAddr;

	// dirtynetps3.c:1384
	SocketT * pOpen;

}

// dirtynetps3.c:1440
extern int32_t SocketSendto(SocketT *  pSocket, const char *  pBuf, int32_t  iLen, int32_t  iFlags, const sockaddr *  pTo, int32_t  iToLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1441
	SocketStateT * pState;

	// dirtynetps3.c:1442
	int32_t iResult;

	{
		// dirtynetps3.c:1463
		HeaderIpv4 * pIpv4;

	}
	{
		// dirtynetps3.c:1484
		sockaddr SockAddr;

	}
}

// dirtynetps3.c:1525
extern int32_t SocketRecvfrom(SocketT *  pSocket, char *  pBuf, int32_t  iLen, int32_t  iFlags, sockaddr *  pFrom, int32_t *  pFromLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1526
	int32_t iRecv;

}

// dirtynetps3.c:1647
extern int32_t SocketInfo(SocketT *  pSocket, int32_t  iInfo, int32_t  iData, void *  pBuf, int32_t  iLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1648
	SocketStateT * pState;

	// dirtynetps3.c:1649
	CellNetCtlInfo Info;

	// dirtynetps3.c:1650
	int32_t iResult;

	{
		// dirtynetps3.c:1661
		CellNetCtlInfo CtlInfo;

		{
			// dirtynetps3.c:1681
			sockaddr BindAddr;

			// dirtynetps3.c:1682
			int32_t iFound;

		}
		{
			// dirtynetps3.c:1710
			int32_t iState;

		}
		{
			// dirtynetps3.c:1726
			uint8_t[6] aZeros;

		}
	}
	{
		// dirtynetps3.c:1777
		sockaddr SceAddr;

		// dirtynetps3.c:1777
		sockaddr SockAddr;

		// dirtynetps3.c:1778
		uint32_t iAddrLen;

	}
	{
		// dirtynetps3.c:1807
		sockaddr SceAddr;

		// dirtynetps3.c:1807
		sockaddr SockAddr;

		// dirtynetps3.c:1808
		uint32_t iAddrLen;

	}
	{
		// dirtynetps3.c:1856
		pollfd PollFd;

	}
	{
		// dirtynetps3.c:1883
		sockaddr SockAddr;

		// dirtynetps3.c:1884
		int32_t iAddrLen;

	}
}

// dirtynetps3.c:1931
extern int32_t SocketCallback(SocketT *  sock, int32_t  mask, int32_t  idle, void *  ref, int32_t (*)(SocketT *, int32_t, void *)  proc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// dirtynetps3.c:1973
extern int32_t SocketControl(SocketT *  pSocket, int32_t  iOption, int32_t  iData1, void *  pData2, void *  pData3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:1974
	SocketStateT * pState;

	// dirtynetps3.c:1975
	int32_t iResult;

	{
		// dirtynetps3.c:2035
		uint32_t val2;

	}
	{
		// dirtynetps3.c:2051
		int32_t iPort;

	}
	{
		// dirtynetps3.c:2065
		int32_t iPort;

	}
}

// dirtynetps3.c:2107
extern uint32_t SocketGetLocalAddr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:2108
	SocketStateT * pState;

}

// dirtynetps3.c:2130
extern HostentT * SocketLookup(const char *  pText, int32_t  iTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:2131
	SocketStateT * pState;

	// dirtynetps3.c:2132
	SocketLookupPrivT * pPriv;

	// dirtynetps3.c:2133
	HostentT * pHost;

	// dirtynetps3.c:2134
	int32_t iAddr;

}

// dirtynetps3.c:2201
extern int32_t SocketHost(sockaddr *  host, int32_t  hostlen, const sockaddr *  dest, int32_t  destlen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynetps3.c:2202
	SocketStateT * pState;

	{
		// dirtynetps3.c:2223
		uint32_t val2;

	}
}

// dirtynetps3.c:155
SocketStateT * _Socket_pState;

// dirtynetps3.c:158
int32_t _Socket_iMemPoolSize;

