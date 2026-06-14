// lobbystatbook.h:55
struct CgsNetwork::DirtySock::LobbyStatbookRowInfoT {
	// lobbystatbook.h:56
	char[48] strName;

	// lobbystatbook.h:57
	char[96] strDesc;

	// lobbystatbook.h:58
	char[128] strParams;

	// lobbystatbook.h:59
	int32_t iType;

}

// lobbystatbook.h:45
typedef LobbyStatbookT LobbyStatbookT;

// lobbystatbook.h:45
struct LobbyStatbookT {
	// lobbystatbook.c:93
	LobbyApiRefT * pLobby;

	// lobbystatbook.c:94
	int32_t iMemGroup;

	// lobbystatbook.c:95
	LobbyStatbookStatusE eStatus;

	// lobbystatbook.c:96
	LobbyStatbookDownloadStatusE eDownloadStatus;

	// lobbystatbook.c:97
	int32_t iError;

	// lobbystatbook.c:98
	LobbyStatbookRowInfoT * pRowDescs;

	// lobbystatbook.c:99
	LobbyStatbookSlotT * pSlots;

	// lobbystatbook.c:100
	LobbyStatbookViewInfoT * pViews;

	// lobbystatbook.c:101
	LobbyLocalizeT * pLocalize;

	// lobbystatbook.c:102
	char[12] strViewName;

	// lobbystatbook.c:103
	uint16_t uRowCount;

	// lobbystatbook.c:104
	uint16_t uViewCount;

	// lobbystatbook.c:105
	uint16_t uSlotCount;

	// lobbystatbook.c:106
	uint16_t uSlotDownloading;

}

// lobbystatbook.h:55
struct LobbyStatbookRowInfoT {
	// lobbystatbook.h:56
	char[48] strName;

	// lobbystatbook.h:57
	char[96] strDesc;

	// lobbystatbook.h:58
	char[128] strParams;

	// lobbystatbook.h:59
	int32_t iType;

}

// lobbystatbook.h:60
typedef LobbyStatbookRowInfoT LobbyStatbookRowInfoT;

// lobbystatbook.h:68
struct LobbyStatbookViewInfoT {
	// lobbystatbook.h:69
	char[12] strName;

	// lobbystatbook.h:70
	char[96] strDesc;

	// lobbystatbook.h:71
	char[32] strStyle;

}

// lobbystatbook.h:72
typedef LobbyStatbookViewInfoT LobbyStatbookViewInfoT;

