// lobbyapicore.h:67
struct LobbyCBQueueRefT {
	// lobbyapicore.h:68
	int32_t iId;

	// lobbyapicore.h:69
	int32_t iKind;

	// lobbyapicore.h:70
	int32_t iTick;

	// lobbyapicore.h:71
	int32_t iSeqn;

	// lobbyapicore.h:72
	LobbyApiCallbackT * pCallback;

	// lobbyapicore.h:73
	void * pUserData;

}

// lobbyapicore.h:74
typedef LobbyCBQueueRefT LobbyCBQueueRefT;

// lobbyapicore.h:77
struct PingManagerCBRefT {
	// lobbyapicore.h:78
	DirtyAddrT Addr;

	// lobbyapicore.h:79
	int32_t[4] iData;

	// lobbyapicore.h:80
	char[32] strDataBuf;

	// lobbyapicore.h:81
	LobbyApiRefT * pLobbyApi;

	// lobbyapicore.h:82
	LobbyApiCallbackT * pCallback;

	// lobbyapicore.h:83
	void * pUserData;

}

// lobbyapicore.h:84
typedef PingManagerCBRefT PingManagerCBRefT;

// lobbyapicore.h:88
struct LobbyGlobalCBRefT {
	// lobbyapicore.h:89
	LobbyApiCBTypeE eType;

	// lobbyapicore.h:90
	LobbyApiCallbackT * pCallback;

	// lobbyapicore.h:91
	void * pUserData;

}

// lobbyapicore.h:92
typedef LobbyGlobalCBRefT LobbyGlobalCBRefT;

