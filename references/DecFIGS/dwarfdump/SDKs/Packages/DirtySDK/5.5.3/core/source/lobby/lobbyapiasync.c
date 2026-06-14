// lobbyapiasync.c:32
typedef void (LobbyApiRefT *, char *, int32_t) LobbyApiAsyncHandlerT;

// lobbyapiasync.c:36
struct LobbyApiAsyncEntryT {
	// lobbyapiasync.c:37
	int32_t iKind;

	// lobbyapiasync.c:38
	LobbyApiAsyncHandlerT * pAsyncHandler;

}

// lobbyapiasync.c:39
typedef LobbyApiAsyncEntryT LobbyApiAsyncEntryT;

// lobbyapiasync.c:123
void _LobbyApiAsyncProcessRoomChange(LobbyApiRefT *  pLobbyApi, int32_t  iRoom, const char *  pName, int32_t  iPop, int32_t  iInGame, int32_t  iFlags, int32_t  iGameCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:163
void _LobbyApiAsyncProcess_agm(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:164
	DispListRef * pDispList;

	// lobbyapiasync.c:165
	DispListT * pDispElem;

	// lobbyapiasync.c:166
	HasherRef * pHash;

	// lobbyapiasync.c:167
	int32_t iIdx;

	{
		// lobbyapiasync.c:177
		LobbyApiPlayT * pPlay;

		{
			// lobbyapiasync.c:184
			int32_t iListOp;

			{
				// lobbyapiasync.c:195
				LobbyApiPlayT * pExist;

			}
		}
	}
}

// lobbyapiasync.c:244
void _LobbyApiAsyncProcess_bud(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:265
void _LobbyApiAsyncProcess_ctl(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:286
void _LobbyApiAsyncProcess_gam(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:287
	DispListRef * pDispList;

	// lobbyapiasync.c:288
	DispListT * pDispElem;

	// lobbyapiasync.c:289
	HasherRef * pHash;

	// lobbyapiasync.c:290
	LobbyApiPlayT * pPlay;

	{
		// lobbyapiasync.c:305
		int32_t iListOp;

		{
			// lobbyapiasync.c:316
			LobbyApiPlayT * pExist;

		}
	}
	{
		// lobbyapiasync.c:340
		int32_t iIdx;

	}
}

// lobbyapiasync.c:369
void _LobbyApiAsyncProcess_ils(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:390
void _LobbyApiAsyncProcess_koh(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:411
void _LobbyApiAsyncProcess_kik(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:432
void _LobbyApiAsyncProcess_mgm(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:453
void _LobbyApiAsyncProcess_mlg(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:474
void _LobbyApiAsyncProcess_msg(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:475
	int32_t iKind;

}

// lobbyapiasync.c:506
void _LobbyApiAsyncProcess_pop(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:507
	char[768] strList;

	// lobbyapiasync.c:507
	char * pStr;

	// lobbyapiasync.c:508
	char[384] strList2;

	// lobbyapiasync.c:508
	char * pStr2;

	// lobbyapiasync.c:509
	char[384] strList3;

	// lobbyapiasync.c:509
	char * pStr3;

	// lobbyapiasync.c:510
	int32_t iIdx;

	// lobbyapiasync.c:510
	int32_t iPopul;

	// lobbyapiasync.c:510
	int32_t iInGame;

	// lobbyapiasync.c:510
	int32_t iGameCount;

}

// lobbyapiasync.c:589
void _LobbyApiAsyncProcess_rom(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:590
	DispListRef * pDispList;

	// lobbyapiasync.c:591
	DispListT * pDispElem;

	// lobbyapiasync.c:592
	HasherRef * pHash;

	// lobbyapiasync.c:593
	LobbyApiRoomT * pRoom;

	{
		// lobbyapiasync.c:606
		int32_t iListOp;

		{
			// lobbyapiasync.c:615
			LobbyApiRoomT * pRoom2;

		}
	}
	{
		// lobbyapiasync.c:648
		int32_t iRoomIndex;

	}
}

// lobbyapiasync.c:695
void _LobbyApiAsyncProcess_ses(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyapiasync.c:716
void _LobbyApiAsyncProcess_snp(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:717
	DispListRef * pDispList;

	// lobbyapiasync.c:718
	DispListT * pDispElem;

	// lobbyapiasync.c:719
	LobbyApiRankT * pRank;

	// lobbyapiasync.c:720
	HasherRef * pHash;

	// lobbyapiasync.c:721
	int32_t iListOp;

	{
		// lobbyapiasync.c:754
		LobbyApiRankT * pExist;

	}
}

// lobbyapiasync.c:787
void _LobbyApiAsyncProcess_sst(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:788
	LobbyApiServerStatT * pStats;

}

// lobbyapiasync.c:819
void _LobbyApiAsyncProcess_usm(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:820
	DispListRef * pDispList;

	// lobbyapiasync.c:821
	DispListT * pDispElem;

	// lobbyapiasync.c:822
	HasherRef * pHash;

	{
		// lobbyapiasync.c:826
		LobbyApiUserSetMemberT * pMember;

		{
			// lobbyapiasync.c:833
			int32_t iListOp;

			{
				// lobbyapiasync.c:846
				LobbyApiUserSetMemberT * pExist;

			}
		}
		{
			// lobbyapiasync.c:869
			int32_t iIdx;

		}
	}
}

// lobbyapiasync.c:902
void _LobbyApiAsyncProcess_usr(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:903
	DispListRef * pDispList;

	// lobbyapiasync.c:904
	DispListT * pDispElem;

	// lobbyapiasync.c:905
	HasherRef * pHash;

	// lobbyapiasync.c:906
	int32_t iUserIndex;

	{
		// lobbyapiasync.c:916
		LobbyApiUserT * pUser;

		{
			// lobbyapiasync.c:923
			int32_t iListOp;

			{
				// lobbyapiasync.c:934
				LobbyApiUserT * pExist;

			}
		}
	}
}

// lobbyapiasync.c:994
void _LobbyApiAsyncProcess_uss(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:995
	DispListRef * pDispList;

	// lobbyapiasync.c:996
	DispListT * pDispElem;

	// lobbyapiasync.c:997
	HasherRef * pHash;

	{
		// lobbyapiasync.c:1001
		LobbyApiUserSetT * pSet;

		// lobbyapiasync.c:1002
		int32_t iListOp;

		{
			// lobbyapiasync.c:1023
			LobbyApiUserSetT * pExist;

		}
	}
}

// lobbyapiasync.c:1057
void _LobbyApiAsyncProcess_ust(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:1058
	int32_t iIdx;

	// lobbyapiasync.c:1058
	int32_t bCanUse;

}

// lobbyapiasync.c:1109
void _LobbyApiAsyncProcess_who(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:1110
	int32_t iRoom;

	// lobbyapiasync.c:1110
	int32_t iRoomFlags;

	// lobbyapiasync.c:1110
	int32_t iPopul;

	// lobbyapiasync.c:1110
	int32_t iInGame;

	// lobbyapiasync.c:1110
	int32_t iGameCount;

	// lobbyapiasync.c:1111
	char[36] strRoomName;

}

// lobbyapiasync.c:1165
extern void LobbyApiAsyncProcess(LobbyApiRefT *  pLobbyApi, char *  pData, int32_t  iKind, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:1166
	int32_t iMessage;

}

// lobbyapiasync.c:1206
extern void LobbyApiAsyncMoveRoom(LobbyApiRefT *  pLobbyApi, char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyapiasync.c:1207
	char[36] strRoomName;

	// lobbyapiasync.c:1208
	int32_t iRoom;

	// lobbyapiasync.c:1208
	int32_t iRoomFlags;

	// lobbyapiasync.c:1208
	int32_t iPop;

	// lobbyapiasync.c:1208
	int32_t iInGame;

	// lobbyapiasync.c:1208
	int32_t iGameCount;

}

// lobbyapiasync.c:68
LobbyApiAsyncEntryT[21] _LobbyApi_AsyncTable;

