// lobbyfinduser.c:58
enum {
	LOBBYFINDUSER_STATE_IDLE = 0,
	LOBBYFINDUSER_STATE_REQ_ONLN = 1,
}

// lobbyfinduser.c:61
typedef enumeration  LobbyFindUserStateE;

// lobbyfinduser.c:103
void _LobbyFindUserResetState(LobbyFindUserT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyfinduser.c:131
int32_t _LobbyFindUserExtractToCache(LobbyFindUserT *  pRef, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyfinduser.c:132
	uint32_t uTick;

	// lobbyfinduser.c:133
	int32_t iIdx;

	// lobbyfinduser.c:134
	int32_t iSlot;

	// lobbyfinduser.c:135
	int32_t iOldest;

	// lobbyfinduser.c:136
	LobbyApiUserT * pUser;

}

// lobbyfinduser.c:199
void _LobbyFindUserOnlnCallback(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyfinduser.c:200
	LobbyFindUserT * pRef;

	// lobbyfinduser.c:201
	char[20] strPers;

	// lobbyfinduser.c:202
	int32_t iSlot;

}

// lobbyfinduser.c:263
extern LobbyFindUserT * LobbyFindUserCreate(LobbyApiRefT *  pLobby) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyfinduser.c:264
	LobbyFindUserT * pRef;

	// lobbyfinduser.c:265
	int32_t iMemGroup;

}

// lobbyfinduser.c:300
extern void LobbyFindUserSetParams(LobbyFindUserT *  pRef, uint32_t  uRate, uint32_t  uCacheExpire) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyfinduser.c:327
extern void LobbyFindUserCancel(LobbyFindUserT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyfinduser.c:352
extern void LobbyFindUserDestroy(LobbyFindUserT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyfinduser.c:385
extern int32_t LobbyFindUser(LobbyFindUserT *  pRef, const char *  pUserName, LobbyFindUserCallbackF *  pCallback, void *  pCalldata, int32_t  bOnlineOnly, int32_t  bUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyfinduser.c:386
	int32_t iResult;

	// lobbyfinduser.c:387
	uint32_t uIdx;

	// lobbyfinduser.c:388
	uint32_t uTick;

	// lobbyfinduser.c:389
	LobbyApiUserT * pUser;

	// lobbyfinduser.c:390
	char[64] strReqBuf;

}

