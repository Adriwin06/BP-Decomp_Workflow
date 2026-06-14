// lobbyrank.h:82
typedef LobbyRankT LobbyRankT;

// lobbyrank.h:82
struct LobbyRankT {
	// lobbyrank.c:124
	LobbyApiRefT * pLobby;

	// lobbyrank.c:125
	LobbyLocalizeT * pLocalize;

	// lobbyrank.c:126
	int32_t iMemGroup;

	// lobbyrank.c:127
	char[11] strView;

	// lobbyrank.c:128
	LobbyRankCallbackT * pCallback;

	// lobbyrank.c:129
	void * pUserData;

	// lobbyrank.c:130
	LobbyRankStatusE eStatus;

	// lobbyrank.c:131
	LobbyRankDownloadStatusE eDownloadStatus;

	// lobbyrank.c:132
	LobbyRankCategoryT * pCategories;

	// lobbyrank.c:133
	LobbyRankListT * pLists;

	// lobbyrank.c:134
	uint32_t uListCount;

	// lobbyrank.c:135
	uint32_t uCategoryCount;

	// lobbyrank.c:136
	uint32_t uCategoryIndex;

	// lobbyrank.c:137
	uint32_t uIndexIndex;

	// lobbyrank.c:138
	uint32_t uVariationIndex;

	// lobbyrank.c:139
	uint32_t uListIndex;

	// lobbyrank.c:140
	int32_t iId;

	// lobbyrank.c:141
	int32_t iLastCallbackId;

	// lobbyrank.c:142
	int32_t iLastError;

	// lobbyrank.c:143
	uint16_t uCurrentScrollColumn;

	// lobbyrank.c:144
	uint16_t uCurrentScrollRow;

	// lobbyrank.c:145
	char * pSymTab;

	// lobbyrank.c:146
	int32_t iSymCount;

}

// lobbyrank.h:86
typedef void (LobbyRankT *, LobbyApiMsgT *, void *) LobbyRankCallbackT;

