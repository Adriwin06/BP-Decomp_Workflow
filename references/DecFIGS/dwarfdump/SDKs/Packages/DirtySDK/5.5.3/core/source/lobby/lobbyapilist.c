// lobbyapilist.c:35
struct LobbyDispListT {
	// lobbyapilist.c:36
	HasherRef * pHash;

	// lobbyapilist.c:37
	DispListRef * pDisp;

	// lobbyapilist.c:38
	LobbyApiCallbackT * pCallback;

	// lobbyapilist.c:39
	void * pUserData;

	// lobbyapilist.c:40
	uint32_t uLast;

}

// lobbyapilist.c:41
typedef LobbyDispListT LobbyDispListT;

// lobbyapilist.c:72
void _LobbyApiListFlush(LobbyListRefT *  pListRef, int32_t  iList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:73
	DispListT * pDisp;

}

// lobbyapilist.c:104
extern void LobbyApiListCreate(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:105
	int32_t iMemGroup;

}

// lobbyapilist.c:130
extern void LobbyApiListFlush(LobbyApiRefT *  pLobbyApi, int32_t  iListType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:131
	LobbyListRefT * pListRef;

	{
		// lobbyapilist.c:142
		int32_t iList;

	}
}

// lobbyapilist.c:173
extern void LobbyApiListDestroy(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:174
	LobbyListRefT * pListRef;

	// lobbyapilist.c:175
	int32_t iListType;

}

// lobbyapilist.c:220
extern DispListRef * LobbyApiListGetDisp(LobbyApiRefT *  pLobbyApi, int32_t  iListType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:221
	LobbyListRefT * pListRef;

}

// lobbyapilist.c:246
extern HasherRef * LobbyApiListGetHash(LobbyApiRefT *  pLobbyApi, int32_t  iListType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:247
	LobbyListRefT * pListRef;

}

// lobbyapilist.c:274
extern DispListRef * LobbyApiListAlloc(LobbyApiRefT *  pLobbyApi, int32_t  iListType, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:275
	LobbyListRefT * pListRef;

	// lobbyapilist.c:276
	DispListRef * pDisp;

}

// lobbyapilist.c:327
extern DispListRef * LobbyApiListCallback(LobbyApiRefT *  pLobbyApi, int32_t  iListType, LobbyApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:328
	LobbyListRefT * pListRef;

	// lobbyapilist.c:329
	DispListRef * pDisp;

}

// lobbyapilist.c:364
extern void LobbyApiListFree(LobbyApiRefT *  pLobbyApi, int32_t  iListType, DispListRef *  pDisp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:365
	LobbyListRefT * pListRef;

	// lobbyapilist.c:366
	HasherRef * pHash;

	// lobbyapilist.c:367
	DispListT * pRec;

}

// lobbyapilist.c:418
extern int32_t LobbyApiListAdd(LobbyApiRefT *  pLobbyApi, int32_t  iListType, const void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:419
	LobbyListRefT * pListRef;

	// lobbyapilist.c:420
	DispListT * pDisp;

	{
		// lobbyapilist.c:437
		const char * pName;

		// lobbyapilist.c:438
		LobbyApiUserT * pUser;

	}
	{
		// lobbyapilist.c:461
		LobbyApiRankT * pRank;

	}
}

// lobbyapilist.c:505
extern int32_t LobbyApiListDel(LobbyApiRefT *  pLobbyApi, int32_t  iListType, const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:506
	LobbyListRefT * pListRef;

	// lobbyapilist.c:507
	DispListT * pDisp;

}

// lobbyapilist.c:560
extern DispListT * LobbyApiListFindByName(LobbyApiRefT *  pLobbyApi, int32_t  iListType, const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:561
	LobbyListRefT * pListRef;

	// lobbyapilist.c:562
	DispListT * pDispElem;

	// lobbyapilist.c:563
	HasherRef * pHash;

	{
		// lobbyapilist.c:579
		LobbyApiRoomT * pRoom;

	}
}

// lobbyapilist.c:619
extern DispListT * LobbyApiListFindByKey(LobbyApiRefT *  pLobbyApi, int32_t  iListType, int32_t  iKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:620
	LobbyListRefT * pListRef;

}

// lobbyapilist.c:657
extern int32_t LobbyApiListAvailable(LobbyApiRefT *  pLobbyApi, int32_t  iStartListType, int32_t  iEndListType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:658
	LobbyListRefT * pListRef;

	// lobbyapilist.c:659
	int32_t iIdx;

}

// lobbyapilist.c:707
extern void LobbyApiPopul(LobbyApiRefT *  pLobbyApi, int32_t  iIdent, int32_t  iPopul, int32_t  iInGame, int32_t  iGameCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:708
	LobbyListRefT * pListRef;

	// lobbyapilist.c:709
	LobbyApiRoomT * pRoom;

	// lobbyapilist.c:710
	DispListT * pDisp;

}

// lobbyapilist.c:779
extern int32_t LobbyApiRoomDefault(LobbyApiRefT *  pLobbyApi, int32_t  iPercent, int32_t  iFlagAnd, int32_t  iFlagCmp, const char *  pPrefix, int32_t  iNoMatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:780
	int32_t iCalc;

	// lobbyapilist.c:781
	int32_t iIndex;

	// lobbyapilist.c:782
	int32_t iHitPct;

	// lobbyapilist.c:783
	int32_t iHitIdx;

	// lobbyapilist.c:784
	int32_t iLowPct;

	// lobbyapilist.c:785
	int32_t iLowIdx;

	// lobbyapilist.c:786
	LobbyApiRoomT * pRoom;

	// lobbyapilist.c:787
	LobbyListRefT * pListRef;

}

// lobbyapilist.c:861
extern void LobbyApiListObjectUpdate(LobbyApiRefT *  pLobbyApi, int32_t  iListType, void *  pObject, int32_t  iListOp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:862
	LobbyApiMsgT Msg;

	// lobbyapilist.c:863
	LobbyListRefT * pListRef;

	// lobbyapilist.c:864
	LobbyDispListT * pDispList;

}

// lobbyapilist.c:905
extern void LobbyApiListUpdate(LobbyApiRefT *  pLobbyApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapilist.c:906
	int32_t iList;

	// lobbyapilist.c:907
	LobbyDispListT * pDispList;

	// lobbyapilist.c:908
	LobbyListRefT * pListRef;

	{
		// lobbyapilist.c:932
		LobbyApiMsgT msg;

	}
}

