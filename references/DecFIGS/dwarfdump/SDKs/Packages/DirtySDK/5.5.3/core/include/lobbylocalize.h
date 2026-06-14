// lobbylocalize.h:55
typedef LobbyLocalizeT LobbyLocalizeT;

// lobbylocalize.h:55
struct LobbyLocalizeT {
	// lobbylocalize.c:89
	int32_t iMemGroup;

	// lobbylocalize.c:90
	int16_t iCountry;

	// lobbylocalize.c:91
	int16_t iLanguage;

	// lobbylocalize.c:92
	int32_t iCurrency;

	// lobbylocalize.c:93
	LangMapT LangRules;

	// lobbylocalize.c:94
	LobbyLocalizeFuncT * pCallback;

	// lobbylocalize.c:95
	void * pUserData;

}

// lobbylocalize.h:58
typedef int32_t (int32_t, char *, int32_t, const char *, void *) LobbyLocalizeFuncT;

