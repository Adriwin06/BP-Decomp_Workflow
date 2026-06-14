// lobbyapi.c:131
void _LobbyApiDebugWrap(LobbyApiRefT *  pLobbyApi, const char *  pData, int32_t  iWrapCol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:132
	const char * pTemp;

	// lobbyapi.c:132
	const char * pEnd;

	// lobbyapi.c:132
	const char * pEqual;

	// lobbyapi.c:132
	const char * pSpace;

	// lobbyapi.c:133
	char[128] strTemp;

	// lobbyapi.c:134
	uint32_t bDone;

	// lobbyapi.c:135
	int32_t iLen;

}

// lobbyapi.c:226
void _LobbyApiDebug(LobbyApiRefT *  pLobbyApi, int32_t  iKind, int32_t  iCode, const char *  pData, const char *  pHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:227
	int32_t iIdx;

	// lobbyapi.c:227
	int32_t bBinData;

}

// lobbyapi.c:320
void _LobbyApiInitRequest(LobbyApiRefT *  pLobbyApi, LobbyCBQueueRefT *  pNewRef, int32_t  iKind, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:349
LobbyCBQueueRefT * _LobbyApiEnqueueRequestCallback(LobbyApiRefT *  pLobbyApi, int32_t  iKind, LobbyApiCallbackT *  pCallback, void *  pUserCBData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:350
	LobbyCBQueueRefT * pNewRef;

}

// lobbyapi.c:404
int32_t _LobbyApiDequeueRequestCallback(LobbyApiRefT *  pLobbyApi, LobbyCBQueueRefT *  pUserRef, int32_t  iKind) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyapi.c:411
		int32_t iLowSeqn;

		// lobbyapi.c:411
		int32_t iLowSeqnIndex;

		// lobbyapi.c:412
		int32_t iQueueIndex;

	}
}

// lobbyapi.c:468
void _LobbyApiClearQueue(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:469
	LobbyCBQueueRefT qRef;

}

// lobbyapi.c:493
void _LobbyApiOneShotCB(LobbyApiRefT *  pLobbyApi, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:494
	LobbyCBQueueRefT * pCBRef;

}

// lobbyapi.c:532
int32_t _LobbyApiSetOneShotCB(LobbyApiRefT *  pLobbyApi, LobbyApiCBTypeE  eKind, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:533
	LobbyCBQueueRefT * pCBRef;

}

// lobbyapi.c:566
int32_t _LobbyApiCancelOneShotCB(LobbyApiRefT *  pLobbyApi, int32_t  iId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:567
	LobbyCBQueueRefT * pCBRef;

	// lobbyapi.c:568
	int32_t iCallback;

}

// lobbyapi.c:608
void _LobbyApiPingCallback(DirtyAddrT *  pAddr, uint32_t  uPing, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:609
	PingManagerCBRefT * pPingRef;

	// lobbyapi.c:610
	LobbyApiRefT * pLobbyApi;

	// lobbyapi.c:611
	LobbyApiMsgT Msg;

	// lobbyapi.c:612
	char[128] strMesg;

	// lobbyapi.c:613
	int32_t iCode;

}

// lobbyapi.c:653
void _LobbyApiUpdatePing(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyapi.c:667
		LobbyApiUserT * pUser;

		// lobbyapi.c:668
		DispListRef * pDisp;

		{
			// lobbyapi.c:681
			int32_t iPing;

			{
				// lobbyapi.c:686
				char[32] strTemp;

			}
		}
	}
}

// lobbyapi.c:740
void _LobbyApiPingServerCb(DirtyAddrT *  pAddr, uint32_t  uPing, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:741
	LobbyApiRefT * pLobbyApi;

}

// lobbyapi.c:789
void _LobbyApiPingServer(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:812
int32_t _LobbyApiUserCount(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:813
	int32_t iUserCount;

	{
		// lobbyapi.c:822
		int32_t iRoom;

		// lobbyapi.c:823
		DispListRef * pList;

		// lobbyapi.c:824
		LobbyApiRoomT * pRoom;

	}
}

// lobbyapi.c:857
void _LobbyApiResetServerIcmpPingState(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:884
void _LobbyApiConfigCallback(LobbyApiRefT *  pLobbyApi, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:924
void _LobbyApiUpdateInit(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:925
	const char * pServer;

	// lobbyapi.c:926
	int32_t bUseSSL;

}

// lobbyapi.c:976
void _LobbyApiCheckTimeout(LobbyApiRefT *  pLobbyApi, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyapi.c:999
		LobbyCBQueueRefT * pQueueRef;

	}
}

// lobbyapi.c:1036
void _LobbyApiDisconnect(LobbyApiRefT *  pLobbyApi, int32_t  iCode, const char *  pInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:1094
int32_t _LobbyApiUpdateRdir(LobbyApiRefT *  pLobbyApi, int32_t  iLen, int32_t  iKind, int32_t  iCode, char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1095
	char[256] strBuf;

}

// lobbyapi.c:1193
extern LobbyApiRefT * LobbyApiCreate(const char *  pTagField, void *  pDebugRef, void (*)(void *, const char *)  pDebugFnc, int32_t  iRefMemGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:1228
extern LobbyApiRefT * LobbyApiCreate2(const char *  pTagField, void *  pDebugRef, void (*)(void *, const char *)  pDebugFnc, uint32_t (*)(void *, int32_t, int32_t, const char *)  pDebugFlt, int32_t  iRefMemGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1229
	LobbyApiRefT * pLobbyApi;

	// lobbyapi.c:1230
	int32_t iMemGroup;

	// lobbyapi.c:1231
	int32_t iGlobalCb;

	{
		// lobbyapi.c:1261
		char[32] strBuf;

	}
}

// lobbyapi.c:1359
extern void LobbyApiDestroy(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:1409
extern int32_t LobbyApiConnect(LobbyApiRefT *  pLobbyApi, const char *  pName, int32_t  iPort, LobbyApiCallbackT *  pCallback, void *  pUserCBData, uint32_t  uConnTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1410
	int32_t iCallbackID;

}

// lobbyapi.c:1477
extern void LobbyApiDisconnect(LobbyApiRefT *  pLobbyApi, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:1497
extern void LobbyApiSuspend(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1498
	char[256] strTagField;

}

// lobbyapi.c:1551
extern void LobbyApiResume(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1552
	char[32] strMesg;

}

// lobbyapi.c:1607
extern int32_t LobbyApiSetCallback(LobbyApiRefT *  pLobbyApi, LobbyApiCBTypeE  eType, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1608
	int32_t iCallback;

}

// lobbyapi.c:1641
extern int32_t LobbyApiClearCallback(LobbyApiRefT *  pLobbyApi, int32_t  iCallbackID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:1677
extern void LobbyApiGlobalCallback(LobbyApiRefT *  pLobbyApi, int32_t  iId, int32_t  iType, int32_t  iKind, int32_t  iCode, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1678
	LobbyApiMsgT Msg;

	// lobbyapi.c:1679
	int32_t iCallback;

}

// lobbyapi.c:1723
extern void LobbyApiAriesRequest(LobbyApiRefT *  pLobbyApi, int32_t  iKind, const char *  pRequest, int32_t  iCallbackId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1724
	int32_t iQueueIndex;

}

// lobbyapi.c:1779
extern int32_t LobbyApiRequestCB(LobbyApiRefT *  pLobbyApi, int32_t  iKind, const char *  pRequest, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1780
	LobbyCBQueueRefT * pQueueRef;

	// lobbyapi.c:1781
	char[768] strData;

	{
		// lobbyapi.c:1798
		DispListRef * pDispList;

		// lobbyapi.c:1799
		char[128] strMesg;

		// lobbyapi.c:1799
		char[20] strPersona;

		// lobbyapi.c:1800
		int32_t iUser;

		// lobbyapi.c:1800
		int32_t iNumUsers;

		// lobbyapi.c:1801
		LobbyApiUserT * pUser;

		// lobbyapi.c:1802
		LobbyApiMsgT Msg;

	}
	{
		// lobbyapi.c:1843
		char[32] strPass;

	}
	{
		// lobbyapi.c:1858
		int32_t iChan;

	}
	{
		// lobbyapi.c:1875
		HasherRef * pHash;

		{
			// lobbyapi.c:1878
			LobbyApiRoomT * pRoom;

			// lobbyapi.c:1879
			char[36] strRoom;

			{
				// lobbyapi.c:1886
				DispListRef * pDispList;

				// lobbyapi.c:1887
				DispListT * pDispElem;

			}
		}
	}
	{
		// lobbyapi.c:1905
		int32_t iResult;

		{
			// lobbyapi.c:1915
			LobbyCBQueueRefT TheRef;

		}
	}
}

// lobbyapi.c:1951
extern int32_t LobbyApiCancelCB(LobbyApiRefT *  pLobbyApi, int32_t  iId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:1952
	int32_t iCBCancelled;

	{
		// lobbyapi.c:1964
		LobbyCBQueueRefT * pQueueRef;

		// lobbyapi.c:1965
		int32_t iQueuePos;

	}
}

// lobbyapi.c:2050
extern int32_t LobbyApiStatus(LobbyApiRefT *  pLobbyApi, int32_t  iSelect, void *  pBuf, int32_t  iBufLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyapi.c:2107
		const char * pSrc;

	}
}

// lobbyapi.c:2178
extern const void * LobbyApiInfo(LobbyApiRefT *  pLobbyApi, int32_t  iSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2179
	const void * pData;

}

// lobbyapi.c:2222
extern int32_t LobbyApiControl(LobbyApiRefT *  pLobbyApi, int32_t  iKind, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2223
	int32_t iReturn;

}

// lobbyapi.c:2265
extern void * LobbyApiPing(LobbyApiRefT *  pLobbyApi, const char *  name, DirtyAddrT *  pAddr, LobbyApiCallbackT *  pCallback, void *  pUserCBData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2266
	PingManagerCBRefT * pPingRef;

}

// lobbyapi.c:2329
extern void LobbyApiCancelPingCallback(LobbyApiRefT *  pLobbyApi, void *  pPingRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2330
	PingManagerCBRefT * pPingReq;

}

// lobbyapi.c:2353
extern void LobbyApiPrintfCode(LobbyApiRefT *  pLobbyApi, const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2354
	va_list pFmtArgs;

	// lobbyapi.c:2355
	char[4096] strText;

	// lobbyapi.c:2356
	const char * pText;

}

// lobbyapi.c:2397
extern void LobbyApiDebug(LobbyApiRefT *  pLobbyApi, LobbyApiMsgT *  pMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:2419
extern int32_t LobbyApiRoomEntry(LobbyApiRefT *  pLobbyApi, LobbyApiRoomT *  pRoom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:2446
extern LobbyApiUserT * LobbyApiGetUserInfo(LobbyApiRefT *  pLobbyApi, const char *  pUserName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2447
	LobbyApiUserT * pUser;

	// lobbyapi.c:2448
	DispListRef * pDispList;

	// lobbyapi.c:2449
	DispListT * pDispItem;

	// lobbyapi.c:2450
	HasherRef * pHash;

}

// lobbyapi.c:2501
extern LobbyApiUserSetT * LobbyApiGetUserSetInfo(LobbyApiRefT *  pLobbyApi, const char *  pSetName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:2527
extern LobbyApiUserSetT * LobbyApiGetUserSetInfoByIdent(LobbyApiRefT *  pLobbyApi, int32_t  iUserSetIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapi.c:2551
extern void LobbyApiUpdate(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapi.c:2552
	char * pData;

	// lobbyapi.c:2552
	char[256] strBuf;

	// lobbyapi.c:2553
	int32_t iLen;

	// lobbyapi.c:2553
	int32_t iKind;

	// lobbyapi.c:2553
	int32_t iCode;

	// lobbyapi.c:2554
	uint32_t uTick;

	// lobbyapi.c:2555
	LobbyCBQueueRefT QueueRef;

	{
		// lobbyapi.c:2662
		LobbyApiMsgT Msg;

	}
	{
		// lobbyapi.c:2686
		uint32_t ourport;

	}
	{
		// lobbyapi.c:2799
		int32_t iStats;

	}
}

