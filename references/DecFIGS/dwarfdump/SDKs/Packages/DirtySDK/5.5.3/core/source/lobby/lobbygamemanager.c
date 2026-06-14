// lobbygamemanager.c:38
struct GameManagerConnApiCallbackT {
	// lobbygamemanager.c:39
	ConnApiCallbackT * pCallback;

	// lobbygamemanager.c:40
	void * pUserData;

}

// lobbygamemanager.c:41
typedef GameManagerConnApiCallbackT GameManagerConnApiCallbackT;

// lobbygamemanager.c:93
enum {
	ST_IDLE = 0,
	ST_HOST = 1,
	ST_WAITFORIDLE = 2,
	ST_WAITFORSESSION = 3,
	ST_WAITFORLOCK = 4,
	ST_MIGRATING_HOST = 5,
	ST_JOIN = 6,
}

// lobbygamemanager.c:154
void _UpdateRecord(LobbyApiPlayT *  pDest, const LobbyApiPlayT *  pSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:155
	char[64] strAuthBuff;

}

// lobbygamemanager.c:190
int32_t _GameManagerClientId(const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:214
int32_t _GameManagerLobbyCmd(GameManagerRefT *  pGameManager, int32_t  iKind, const char *  pParms, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:234
void _GameManagerInitGame(GameManagerRefT *  pGameManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:260
void _GameManagerExecGameCallback(GameManagerRefT *  pGameManager, GameManagerCBTypeE  eEventId, int32_t  iData, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:289
void _GameManagerDisconnect(GameManagerRefT *  pGameManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:290
	uint8_t bInGame;

}

// lobbygamemanager.c:347
void _GameManagerConnApiCallback(ConnApiRefT *  pConnApi, ConnApiCbInfoT *  pCbInfo, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:349
	const char *[7] _StateNames;

	// lobbygamemanager.c:359
	const char *[3] _TypeNames;

	// lobbygamemanager.c:366
	GameManagerRefT * pGameManager;

}

// lobbygamemanager.c:449
void _GameManagerProcessPlayRecord(GameManagerRefT *  pGameManager, LobbyApiPlayT *  pPlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:450
	int32_t idx;

	// lobbygamemanager.c:450
	int32_t count;

	// lobbygamemanager.c:450
	int32_t iHostIndex;

}

// lobbygamemanager.c:496
int32_t _GameManagerPersInPlayRecord(const LobbyApiPlayT *  pPlay, const char *  pCheckPers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:497
	int32_t iClient;

}

// lobbygamemanager.c:525
uint32_t _GameManagerCreateGame(GameManagerRefT *  pGameManager, LobbyApiPlayT *  pPlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:526
	ConnApiUserInfoT[9] ClientList;

	// lobbygamemanager.c:527
	uint32_t uGameFlags;

	// lobbygamemanager.c:528
	char * pGameType;

	// lobbygamemanager.c:529
	int32_t iClient;

	// lobbygamemanager.c:530
	int32_t bConnApiIsIdle;

}

// lobbygamemanager.c:657
uint32_t _GameManagerUpdateGame(GameManagerRefT *  pGameManager, LobbyApiPlayT *  pPlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:658
	int32_t iClient;

	{
		// lobbygamemanager.c:663
		const char * pPers;

	}
	{
		// lobbygamemanager.c:682
		const char * pPers;

		{
			// lobbygamemanager.c:685
			ConnApiUserInfoT ClientInfo;

		}
	}
}

// lobbygamemanager.c:718
void _GameManagerEvent_game(GameManagerRefT *  pGameManager, LobbyApiPlayT *  pPlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:719
	uint32_t bUpdate;

}

// lobbygamemanager.c:882
void _GameManagerEvent_play(GameManagerRefT *  pGameManager, LobbyApiPlayT *  pPlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:912
void _GameManagerLobbyEventCallback(LobbyApiRefT *  pRef, LobbyApiMsgT *  pMsg, void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:913
	GameManagerRefT * pGameManager;

	// lobbygamemanager.c:914
	LobbyApiUserT Self;

	{
		// lobbygamemanager.c:932
		LobbyApiPlayT Play;

	}
}

// lobbygamemanager.c:1004
void _GameManagerLobbyDisconnectCb(LobbyApiRefT *  pRef, LobbyApiMsgT *  pMsg, void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1032
void _GameManagerIdle(void *  pData, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1033
	GameManagerRefT * pGameManager;

}

// lobbygamemanager.c:1063
extern GameManagerRefT * GameManagerCreate(LobbyApiRefT *  pLobbyApi, ConnApiRefT *  pConnApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1064
	GameManagerRefT * pGameManager;

	// lobbygamemanager.c:1065
	int32_t iMemGroup;

}

// lobbygamemanager.c:1126
extern void GameManagerOnline(GameManagerRefT *  pGameManager, const char *  pSelfName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1146
extern void GameManagerDestroy(GameManagerRefT *  pGameManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1184
extern int32_t GameManagerRequestCb(GameManagerRefT *  pGameManager, int32_t  iKind, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1229
extern int32_t GameManagerHostCb(GameManagerRefT *  pGameManager, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1230
	char[512] strParams;

	{
		// lobbygamemanager.c:1248
		int32_t iSysFlags;

	}
}

// lobbygamemanager.c:1278
extern int32_t GameManagerJoinCb(GameManagerRefT *  pGameManager, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1323
extern int32_t GameManagerQuickJoinCb(GameManagerRefT *  pGameManager, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1362
extern int32_t GameManagerStartCb(GameManagerRefT *  pGameManager, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1393
extern int32_t GameManagerLeaveCb(GameManagerRefT *  pGameManager, const char *  pParams, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1394
	int32_t iCmd;

	// lobbygamemanager.c:1395
	char[20] strGuest;

}

// lobbygamemanager.c:1443
extern int32_t GameManagerInviteCb(GameManagerRefT *  pGameManager, const char *  pUsername, const char *  pInviteText, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1444
	char[32] strMesg;

}

// lobbygamemanager.c:1485
extern int32_t GameManagerInviteProcessCallback(GameManagerRefT *  pGameManager, LobbyApiMsgT *  pMsg, void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1486
	char[32] strPers;

	// lobbygamemanager.c:1487
	int32_t iResult;

	{
		// lobbygamemanager.c:1495
		char[32] strMaddr;

	}
}

// lobbygamemanager.c:1552
extern int32_t GameManagerInviteProcessAcceptCb(GameManagerRefT *  pGameManager, char *  pSessBuf, int32_t  iBufSize, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbygamemanager.c:1553
	char[128] strSess;

	// lobbygamemanager.c:1554
	int32_t iResult;

	{
		// lobbygamemanager.c:1562
		char[128] strMesg;

	}
}

// lobbygamemanager.c:1611
extern int32_t GameManagerStatus(GameManagerRefT *  pGameManager, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1668
extern int32_t GameManagerControl(GameManagerRefT *  pGameManager, int32_t  iControl, int32_t  iValue, int32_t  iValue2, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1748
extern void GameManagerSetCallback(GameManagerRefT *  pGameManager, GameManagerCallbackT *  pCB, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbygamemanager.c:1775
extern void GameManagerUpdate(GameManagerRefT *  pGameManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbygamemanager.c:1778
		int32_t bConnApiIsIdle;

	}
}

