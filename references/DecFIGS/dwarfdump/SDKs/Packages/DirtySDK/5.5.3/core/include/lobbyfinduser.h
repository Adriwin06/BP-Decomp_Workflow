// lobbyfinduser.h:48
typedef void (void *, const char *, LobbyApiUserT *) LobbyFindUserCallbackF;

// lobbyfinduser.h:50
typedef LobbyFindUserT LobbyFindUserT;

// lobbyfinduser.h:50
struct LobbyFindUserT {
	// lobbyfinduser.c:67
	LobbyApiRefT * pLobby;

	// lobbyfinduser.c:68
	LobbyFindUserStateE eState;

	// lobbyfinduser.c:70
	int32_t iMemGroup;

	// lobbyfinduser.c:71
	char[20] strUser;

	// lobbyfinduser.c:72
	uint32_t uReqTime;

	// lobbyfinduser.c:73
	int32_t iReqId;

	// lobbyfinduser.c:74
	int32_t bOnlineOnly;

	// lobbyfinduser.c:75
	LobbyFindUserCallbackF * pCallback;

	// lobbyfinduser.c:76
	void * pCalldata;

	// lobbyfinduser.c:78
	LobbyApiUserT[8] aCache;

	// lobbyfinduser.c:79
	uint32_t[8] aCacheExpire;

	// lobbyfinduser.c:81
	uint32_t uCacheExpire;

	// lobbyfinduser.c:82
	uint32_t uRate;

}

