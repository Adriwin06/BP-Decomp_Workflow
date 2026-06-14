// lobbylogin.c:139
struct LobbyLoginMapT {
	// lobbylogin.c:140
	uint32_t uCode;

}

// lobbylogin.c:141
typedef LobbyLoginMapT LobbyLoginMapT;

// lobbylogin.c:145
struct LobbyLoginTransitionMapT {
	// lobbylogin.c:146
	char[3] eValidTransition;

}

// lobbylogin.c:147
typedef LobbyLoginTransitionMapT LobbyLoginTransitionMapT;

// lobbylogin.c:247
uint32_t _LobbyLoginValidateLength(const char *  pTagField, int32_t  iLengthMin, int32_t  iLengthMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:248
	char[64] strTemp;

	// lobbylogin.c:249
	uint32_t bRes;

	{
		// lobbylogin.c:252
		int32_t iLength;

	}
}

// lobbylogin.c:283
uint32_t _LobbyLoginValidateEmail(const char *  pTagField) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:284
	char[64] strTemp;

}

// lobbylogin.c:329
uint32_t _LobbyLoginValidateEmailDeactivated(LobbyLoginRefT *  pLogin, const char *  pTagField) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbylogin.c:332
		char[64] strTemp;

	}
}

// lobbylogin.c:359
uint32_t _LobbyLoginIsFlame(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:360
	char[5] strVers;

}

// lobbylogin.c:403
void _LobbyLoginParseNameList(LobbyLoginNameListT *  pPersList, const char *  pFieldName, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:404
	int32_t iPersona;

}

// lobbylogin.c:438
void _LobbyLoginSetAlert(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eAlertContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:463
void _LobbyLoginSetCallback(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext, LobbyLoginCallbackT *  pCallbackProc, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:501
void _LobbyLoginSetContext(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext, uint32_t  bPushContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:971
void _LobbyLoginSetPS3Info(int32_t  iKind, char *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:972
	uint8_t[1024] aTicketInfo;

	// lobbylogin.c:973
	DirtyAddrT DirtyAddr;

	// lobbylogin.c:974
	int32_t iTicketSize;

	// lobbylogin.c:975
	SceNpId NpId;

}

// lobbylogin.c:1267
void _LobbyLoginRequest(LobbyLoginRefT *  pLogin, int32_t  iKind, char *  pMesg, int32_t  iMesgSize, LobbyApiCallbackT *  pCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:1311
void _LobbyLoginSaveResponse(LobbyLoginRefT *  pLogin, LobbyApiMsgT *  pMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:1343
void _LobbyLoginTransitionBack(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eCurContext, LobbyLoginContextE  eTargetContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:1368
unsigned char _LobbyLoginValidateTransition(LobbyLoginContextE  eCurContext, LobbyLoginContextE  eNextContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1369
	unsigned char bValid;

	// lobbylogin.c:1370
	LobbyLoginContextE eMapContext;

	// lobbylogin.c:1371
	int32_t iMapping;

}

// lobbylogin.c:1404
void _LobbyLoginDoLogin(LobbyLoginRefT *  pLogin, char *  pTagfield, int32_t  iTagSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1405
	char[20] strUser;

	// lobbylogin.c:1405
	char[20] strUser0;

	// lobbylogin.c:1406
	const char * pConf;

	// lobbylogin.c:1406
	const char * pLKey;

}

// lobbylogin.c:1471
void _LobbyLoginCreateAccount(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1472
	char[1024] strMesg;

	// lobbylogin.c:1473
	int32_t bMailLength;

	// lobbylogin.c:1474
	int32_t bMailForm;

	// lobbylogin.c:1475
	int32_t bPassLength;

}

// lobbylogin.c:1549
void _LobbyLoginAcctCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1550
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:1626
void _LobbyLoginPersCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1627
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:1686
void _LobbyLoginAuthCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1687
	LobbyLoginRefT * pLogin;

	{
		// lobbylogin.c:1695
		const char * pCheatChal;

		{
			// lobbylogin.c:1711
			char[256] strPat;

		}
		{
			// lobbylogin.c:1741
			char[32] strInit;

		}
	}
}

// lobbylogin.c:1875
void _LobbyLoginLathCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1876
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:1916
void _LobbyLoginLostPasswordCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1917
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:1958
void _LobbyLoginPMailCallbak(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:1959
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:2012
void _LobbyLoginConnCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2013
	LobbyLoginRefT * pLogin;

}

// lobbylogin.c:2080
void _LobbyLoginIdleCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2081
	LobbyLoginRefT * pLogin;

	// lobbylogin.c:2082
	LobbyLoginStatusE eStatus;

	{
		// lobbylogin.c:2093
		LobbyLoginContextE eCallbackContext;

		// lobbylogin.c:2094
		LobbyLoginCallbackT * pCallbackProc;

	}
}

// lobbylogin.c:2125
void _LobbyLoginInit(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2154
extern LobbyLoginRefT * LobbyLoginCreate(LobbyApiRefT *  pLobbyApi, const LobbyLoginAlertT *  pAlertList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2155
	LobbyLoginRefT * pLogin;

	// lobbylogin.c:2156
	int32_t iMemGroup;

}

// lobbylogin.c:2199
extern void LobbyLoginReset(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2200
	int32_t iMemGroup;

	// lobbylogin.c:2200
	int32_t iConnCbID;

	// lobbylogin.c:2200
	int32_t iIdleCbID;

	// lobbylogin.c:2201
	const LobbyLoginAlertT * pAlertList;

	// lobbylogin.c:2202
	LobbyApiRefT * pLobbyApi;

}

// lobbylogin.c:2241
extern void LobbyLoginDestroy(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2280
extern void LobbyLoginAutomaticCB(LobbyLoginRefT *  pLogin, const LobbyLoginNameListT *  pAutoInfo, unsigned char  bEnable, LobbyLoginCallbackT *  pCallbackProc, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2341
extern const char * LobbyLoginParams(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:381
LobbyLoginContextE _LobbyLoginCurContext(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2463
extern int32_t LobbyLoginSubmitCB(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext, const char *  pPacket, LobbyLoginCallbackT *  pCallbackProc, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbylogin.c:2481
		char[64] strName;

		// lobbylogin.c:2482
		int32_t iPort;

		// lobbylogin.c:2482
		int32_t iErr;

		// lobbylogin.c:2483
		uint32_t uTime;

	}
	{
		// lobbylogin.c:2653
		int32_t bMailLength;

		// lobbylogin.c:2654
		int32_t bMailForm;

	}
}

// lobbylogin.c:2693
extern LobbyLoginStatusE LobbyLoginAbort(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2739
extern const LobbyLoginAlertT * LobbyLoginAlert(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2740
	uint32_t uEntry;

	// lobbylogin.c:2741
	LobbyLoginContextE eCurrentContext;

}

// lobbylogin.c:2803
extern LobbyLoginStatusE LobbyLoginGetStatus(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2804
	LobbyLoginStatusE eStatus;

}

// lobbylogin.c:2840
extern void LobbyLoginSetContextCB(LobbyLoginRefT *  pLogin, LobbyLoginContextE  eNextContext, LobbyLoginCallbackT *  pCallbackProc, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2841
	unsigned char bValid;

	// lobbylogin.c:2842
	LobbyLoginContextE eCurContext;

}

// lobbylogin.c:2890
extern LobbyLoginContextE LobbyLoginGetContext(LobbyLoginRefT *  pLogin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2911
extern const LobbyLoginNameListT * LobbyLoginGetNameList(LobbyLoginRefT *  pLogin, LobbyLoginNameListTypeE  eType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2912
	const LobbyLoginNameListT * pPersList;

}

// lobbylogin.c:2944
extern void LobbyLoginGetLastResponse(LobbyLoginRefT *  pLogin, LobbyApiMsgT *  pMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:2968
extern LobbyLoginAlertE LobbyLoginGetAlertEnum(LobbyLoginRefT *  pLogin, const LobbyLoginAlertT *  pAlert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylogin.c:2969
	LobbyLoginAlertE eAlert;

}

// lobbylogin.c:3000
extern void LobbyLoginSetAutoCreate(LobbyLoginRefT *  pLogin, uint8_t  bAutoCreate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylogin.c:165
LobbyLoginMapT[27] _LobbyLogin_CodeMap;

// lobbylogin.c:198
const LobbyLoginTransitionMapT[13] _LobbyLogin_TransitionMap;

