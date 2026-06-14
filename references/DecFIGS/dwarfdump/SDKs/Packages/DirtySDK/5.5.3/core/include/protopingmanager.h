// protopingmanager.h:44
typedef PingManagerRefT PingManagerRefT;

// protopingmanager.h:44
struct PingManagerRefT {
	// protopingmanager.c:88
	int32_t iMemGroup;

	// protopingmanager.c:89
	uint32_t uMaxRecords;

	// protopingmanager.c:90
	uint32_t uNumRecords;

	// protopingmanager.c:91
	unsigned char uTime;

	// protopingmanager.c:92
	uint32_t uTickCount;

	// protopingmanager.c:93
	uint32_t uLastPingTick;

	// protopingmanager.c:95
	ServerPingRecT[8] ServerPings;

	// protopingmanager.c:97
	ProtoPingRefT * pPingRef;

	// protopingmanager.c:98
	PingRecT[1] PingCache;

}

// protopingmanager.h:47
typedef void (DirtyAddrT *, uint32_t, void *) PingManagerCallbackT;

