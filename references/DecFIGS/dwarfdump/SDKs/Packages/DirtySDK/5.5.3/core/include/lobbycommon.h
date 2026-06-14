// lobbycommon.h:55
struct LobbyApiRoomCriteria_t {
	// lobbycommon.h:56
	uint32_t uFlags;

	// lobbycommon.h:57
	uint32_t uMask;

	// lobbycommon.h:58
	int32_t iNumVals;

	// lobbycommon.h:59
	uint32_t[8] uVals;

}

// lobbycommon.h:60
typedef LobbyApiRoomCriteria_t LobbyApiRoomCriteriaT;

// lobbycommon.h:65
struct LobbyApiTrophy_t {
	// lobbycommon.h:68
	int32_t iIdent;

	// lobbycommon.h:69
	char[36] strName;

	// lobbycommon.h:70
	char[132] strDesc;

	// lobbycommon.h:71
	char[36] strImage;

	// lobbycommon.h:72
	uint32_t uDate;

	// lobbycommon.h:73
	int32_t iCount;

}

// lobbycommon.h:74
typedef LobbyApiTrophy_t LobbyApiTrophyT;

