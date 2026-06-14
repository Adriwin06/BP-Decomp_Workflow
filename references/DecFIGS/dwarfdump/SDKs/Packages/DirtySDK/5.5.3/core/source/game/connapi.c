// connapi.c:205
enum {
	ST_IDLE = 0,
	ST_HOSTING = 1,
	ST_JOINING = 2,
}

// connapi.c:240
void _ConnApiDisplayClientInfo(ConnApiClientT *  pClient, int32_t  iClient) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:264
void _ConnApiDisplayClientList(ConnApiClientListT *  pClientList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:265
	int32_t iClient;

}

// connapi.c:293
void _ConnApiInitClient(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, ConnApiUserInfoT *  pUserInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:339
void _ConnApiUpdateClientFlags(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:340
	ConnApiClientT * pClient;

	// connapi.c:341
	int32_t iClient;

}

// connapi.c:373
void _ConnApiInitClientList(ConnApiRefT *  pConnApi, ConnApiUserInfoT *  pClientList, int32_t  iNumClients) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:374
	ConnApiClientT * pClient;

	// connapi.c:375
	int32_t iClient;

}

// connapi.c:468
int32_t _ConnApiFindClientByName(ConnApiClientListT *  pClientList, const char *  pClientName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:469
	int32_t iClientId;

}

// connapi.c:505
void _ConnApiGenerateSessionKey(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId, char *  pSess, int32_t  iSessSize, const char *  pSessType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:506
	char * pNameA;

	// connapi.c:506
	char * pNameB;

}

// connapi.c:541
int32_t _ConnApiTunnelAlloc(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId, uint32_t  uRemoteAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:542
	ProtoTunnelInfoT TunnelInfo;

	// connapi.c:543
	char[128] strKey;

}

// connapi.c:577
void _ConnApiTunnelFree(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:606
char * _ConnApiParseAdvertField(char *  pOutBuf, int32_t  iOutSize, char *  pInpBuf, char  cTerminator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:607
	char * pEndPtr;

}

// connapi.c:633
void _ConnApiCheckAdvert(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:634
	char[512] strAdvtList;

	// connapi.c:634
	char * pAdvt;

	// connapi.c:634
	char * pTemp;

	// connapi.c:635
	char[32] strName;

	// connapi.c:635
	char[32] strNote;

	// connapi.c:635
	char[32] strAddr;

	// connapi.c:636
	ConnApiClientT * pClient;

	// connapi.c:637
	int32_t iAdvt;

	// connapi.c:637
	int32_t iNumAdvt;

	// connapi.c:637
	int32_t iClient;

	// connapi.c:638
	uint32_t uLocalAddr;

}

// connapi.c:691
uint32_t _ConnApiGameServerEnabled(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, uint32_t  uGameServConnMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:692
	uint32_t bUseGameServer;

	{
		// connapi.c:703
		ConnApiConnInfoT * pInfo;

	}
}

// connapi.c:736
int32_t _ConnApiGetConnectAddr(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, uint32_t  uGameServConnMode, uint16_t *  pBindPort, uint16_t *  pConnPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:737
	ConnApiClientT * pSelf;

	// connapi.c:738
	int32_t uAddr;

	// connapi.c:741
	const char * pConn;

}

// connapi.c:817
int32_t _ConnApiGetConnectParms(ConnApiRefT *  pConnApi, ConnApiClientT *  pClientA, char *  pConnName, int32_t  iNameSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:818
	ConnApiClientT * pClientB;

	// connapi.c:819
	char * pAddrA;

	// connapi.c:819
	char * pAddrB;

	// connapi.c:819
	char * pAddrT;

	// connapi.c:820
	uint32_t bHosting;

	// connapi.c:821
	int32_t iConnFlags;

}

// connapi.c:887
void _ConnApiSetGamelinkOpt(NetGameUtilRefT *  pUtilRef, int32_t  iOpt, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:912
void _ConnApiDemangleReport(ConnApiRefT *  pConnApi, ConnApiConnInfoT *  pInfo, ProtoMangleStatusE  eStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:945
void _ConnApiUpdateCallback(ConnApiRefT *  pConnApi, int32_t  iClientId, ConnApiCbTypeE  eType, ConnApiConnStatusE  eOldStatus, ConnApiConnStatusE  eNewStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:946
	ConnApiCbInfoT CbInfo;

}

// connapi.c:985
void _ConnApiDestroyGameConnection(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId, const char *  pReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:987
	uint32_t bRefsDestroyed;

}

// connapi.c:1028
void _ConnApiDestroyVoipConnection(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, const char *  pReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:1059
void _ConnApiDisconnectClient(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId, const char *  pReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:1084
void _ConnApiDefaultCallback(ConnApiRefT *  pConnApi, ConnApiCbInfoT *  pCbInfo, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1086
	const char *[7] _StateNames;

	// connapi.c:1096
	const char *[3] _TypeNames;

}

// connapi.c:1126
void _ConnApiRemoveClient(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1127
	ConnApiConnStatusE eGameStatus;

	// connapi.c:1128
	ConnApiConnStatusE eVoipStatus;

	{
		// connapi.c:1156
		int32_t iNumMoveClients;

	}
}

// connapi.c:1191
ConnApiConnStatusE _ConnApiCheckGameServerFallback(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, uint32_t  uGameServConnMode, int32_t  iClientId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1192
	ConnApiConnStatusE eStatus;

	// connapi.c:1193
	ConnApiConnInfoT * pInfo;

	// connapi.c:1196
	const char * pConn;

}

// connapi.c:1233
int32_t _ConnApiUpdateGameClient(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1234
	ConnApiConnStatusE eStatus;

	{
		// connapi.c:1252
		uint16_t uBindPort;

		// connapi.c:1252
		uint16_t uConnPort;

		// connapi.c:1253
		int32_t iConnectAddr;

		{
			// connapi.c:1284
			char[128] strConn;

			// connapi.c:1284
			char[64] strConnName;

			// connapi.c:1285
			int32_t iConnFlags;

		}
	}
	{
		// connapi.c:1328
		void * pCommRef;

	}
	{
		// connapi.c:1391
		const NetGameLinkStatT * pStat;

	}
}

// connapi.c:1430
int32_t _ConnApiUpdateVoipClient(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1431
	ConnApiConnStatusE eStatus;

	// connapi.c:1432
	int32_t iVoipConnId;

	// connapi.c:1432
	int32_t iVoipStatus;

	{
		// connapi.c:1450
		uint16_t uBindPort;

		// connapi.c:1450
		uint16_t uConnPort;

		// connapi.c:1451
		int32_t iConnectAddr;

	}
}

// connapi.c:1582
uint32_t _ConnApiUpdateDemangleReport(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1583
	int32_t iUnused1;

	// connapi.c:1583
	int32_t iUnused2;

}

// connapi.c:1622
void _ConnApiUpdateDemangle(ConnApiRefT *  pConnApi, ConnApiClientT *  pClient, int32_t  iClientId, ConnApiConnInfoT *  pConnInfo, int32_t  iType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1623
	const char[2][5] _Types;

	// connapi.c:1624
	uint32_t[2] _Flags;

	// connapi.c:1625
	int32_t iClient;

	{
		// connapi.c:1647
		ConnApiConnInfoT * pConnInfo2;

	}
	{
		// connapi.c:1660
		char[64] strSess;

		// connapi.c:1661
		intptr_t * pSockRef;

		{
			// connapi.c:1685
			uint32_t uDemanglePort;

		}
	}
	{
		// connapi.c:1695
		int32_t iAddr;

		// connapi.c:1695
		int32_t iPort;

		// connapi.c:1695
		int32_t iResult;

		{
			// connapi.c:1703
			ConnApiConnStatusE eStatus;

		}
	}
}

// connapi.c:1744
void _ConnApiUpdateRemoval(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1745
	ConnApiClientT * pClient;

	// connapi.c:1746
	int32_t iClientId;

}

// connapi.c:1778
int32_t _ConnApiUpdateConnections(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1779
	ConnApiClientT * pClient;

	// connapi.c:1780
	int32_t iActive;

	// connapi.c:1780
	int32_t iClientId;

	// connapi.c:1781
	uint32_t bDemangling;

}

// connapi.c:1895
int32_t _ConnApiUpdateGameServConnection(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1896
	ConnApiClientT * pClient;

	// connapi.c:1897
	uint32_t bDemangling;

	// connapi.c:1898
	int32_t iClientId;

}

// connapi.c:1993
void _ConnApiIdle(void *  pData, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:1994
	ConnApiRefT * pConnApi;

}

// connapi.c:2024
extern ConnApiRefT * ConnApiCreate(int32_t  iGamePort, int32_t  iMaxClients, ConnApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:2025
	ConnApiRefT * pConnApi;

	// connapi.c:2026
	int32_t iMemGroup;

	// connapi.c:2027
	int32_t iSize;

}

// connapi.c:2093
extern void ConnApiOnline(ConnApiRefT *  pConnApi, const char *  pGameName, const char *  pSelfName, DirtyAddrT *  pSelfAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2196
extern void ConnApiDestroy(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2266
extern void ConnApiHost(ConnApiRefT *  pConnApi, ConnApiUserInfoT *  pClientList, int32_t  iNumClients, int32_t  iSessId, uint32_t  uGameFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2310
extern void ConnApiConnect(ConnApiRefT *  pConnApi, ConnApiUserInfoT *  pClientList, int32_t  iNumClients, int32_t  iSessId, uint32_t  uGameFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2351
extern void ConnApiMigrate(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:2352
	ConnApiClientT * pClient;

	// connapi.c:2353
	int32_t iClientId;

}

// connapi.c:2392
extern void ConnApiAddClient(ConnApiRefT *  pConnApi, ConnApiUserInfoT *  pUserInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:2393
	ConnApiClientT * pClient;

}

// connapi.c:2452
extern void ConnApiRemoveClient(ConnApiRefT *  pConnApi, const char *  pClientName, int32_t  iClientId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:2453
	ConnApiClientT * pClient;

}

// connapi.c:2503
extern void ConnApiStart(ConnApiRefT *  pConnApi, uint32_t  uStartFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2525
extern void ConnApiStop(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2549
extern void ConnApiDisconnect(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// connapi.c:2550
	int32_t iClient;

}

// connapi.c:2605
extern const ConnApiClientListT * ConnApiGetClientList(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2653
extern int32_t ConnApiStatus(ConnApiRefT *  pConnApi, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// connapi.c:2794
extern int32_t ConnApiControl(ConnApiRefT *  pConnApi, int32_t  iControl, int32_t  iValue, int32_t  iValue2, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// connapi.c:2844
		int32_t iTimeout;

	}
}

// connapi.c:3016
extern void ConnApiUpdate(ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

