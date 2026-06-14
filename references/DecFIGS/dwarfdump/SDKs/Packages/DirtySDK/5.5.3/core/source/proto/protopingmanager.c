// protopingmanager.c:68
struct PingRecT {
	// protopingmanager.c:69
	DirtyAddrT Addr;

	// protopingmanager.c:70
	uint16_t uPing;

	// protopingmanager.c:71
	unsigned char uCreatedTime;

	// protopingmanager.c:72
	unsigned char uTouchedTime;

	// protopingmanager.c:73
	PingManagerCallbackT * pCallback;

	// protopingmanager.c:74
	void * pCallbackData;

}

// protopingmanager.c:75
typedef PingRecT PingRecT;

// protopingmanager.c:79
struct ServerPingRecT {
	// protopingmanager.c:80
	PingManagerCallbackT * pServCb;

	// protopingmanager.c:81
	void * pServCbData;

	// protopingmanager.c:82
	uint32_t uSeqn;

}

// protopingmanager.c:83
typedef ServerPingRecT ServerPingRecT;

// protopingmanager.c:134
int32_t _PingManagerFindRecordByAddress(PingManagerRefT *  pPingManager, DirtyAddrT *  pAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:135
	uint32_t uRecord;

}

// protopingmanager.c:163
uint32_t _PingManagerFindRecordLRU(PingManagerRefT *  pPingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:164
	uint32_t uRecord;

	// protopingmanager.c:164
	uint32_t uOldest;

	// protopingmanager.c:164
	uint32_t uOldestTime;

	// protopingmanager.c:164
	uint32_t uTemp;

}

// protopingmanager.c:196
void _PingManagerInvalidateRecord(PingManagerRefT *  pPingManager, PingRecT *  pRecord) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protopingmanager.c:218
void _PingManagerUpdateTimer(PingManagerRefT *  pPingManager, uint32_t  uCurTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:219
	uint32_t uTimeElapsed;

	// protopingmanager.c:219
	uint32_t uTicksElapsed;

}

// protopingmanager.c:249
int32_t _PingManagerGetPing(uint32_t  uPingData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:250
	uint32_t uPingValue;

}

// protopingmanager.c:291
extern PingManagerRefT * PingManagerCreate(uint32_t  uMaxRecords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:292
	PingManagerRefT * pPingManager;

	// protopingmanager.c:293
	uint32_t uSize;

	// protopingmanager.c:294
	int32_t iMemGroup;

}

// protopingmanager.c:364
extern void PingManagerDestroy(PingManagerRefT *  pPingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protopingmanager.c:395
extern void PingManagerUpdate(PingManagerRefT *  pPingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:396
	uint32_t uRecord;

	// protopingmanager.c:396
	uint32_t uPingCount;

	// protopingmanager.c:396
	uint32_t uCurTick;

	// protopingmanager.c:396
	uint32_t uMaxPingIssue;

	// protopingmanager.c:397
	ProtoPingResponseT PingResp;

	// protopingmanager.c:398
	PingRecT * pPingCache;

	// protopingmanager.c:398
	PingRecT * pRecord;

	// protopingmanager.c:399
	int32_t iIndex;

	{
		// protopingmanager.c:463
		ServerPingRecT * pServerPing;

		// protopingmanager.c:464
		int32_t iServerPing;

	}
}

// protopingmanager.c:554
extern int32_t PingManagerPingAddress(PingManagerRefT *  pPingManager, DirtyAddrT *  pAddr, PingManagerCallbackT *  pCallback, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:555
	PingRecT * pRecord;

	// protopingmanager.c:556
	int32_t iIndex;

}

// protopingmanager.c:622
extern int32_t PingManagerPingServer(PingManagerRefT *  pPingManager, uint32_t  uServerAddress, PingManagerCallbackT *  pCallback, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protopingmanager.c:648
extern int32_t PingManagerPingServer2(PingManagerRefT *  pPingManager, uint32_t  uServerAddress, PingManagerCallbackT *  pCallback, void *  pCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:649
	ServerPingRecT * pServerPing;

	// protopingmanager.c:650
	int32_t iServerPing;

}

// protopingmanager.c:693
extern int32_t PingManagerInvalidateAddress(PingManagerRefT *  pPingManager, DirtyAddrT *  pAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:694
	int32_t iIndex;

}

// protopingmanager.c:732
extern void PingManagerInvalidateCache(PingManagerRefT *  pPingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:733
	uint32_t uRecord;

}

// protopingmanager.c:759
extern void PingManagerCancelRequest(PingManagerRefT *  pPingManager, DirtyAddrT *  pAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:760
	uint32_t uRecord;

	// protopingmanager.c:761
	PingRecT * pRecord;

}

// protopingmanager.c:791
extern void PingManagerCancelServerRequest(PingManagerRefT *  pPingManager, uint32_t  uSeqn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protopingmanager.c:792
	ServerPingRecT * pServerPing;

	// protopingmanager.c:793
	int32_t iServerPing;

}

// protopingmanager.c:108
PingManagerRefT * _PingManager_pRef;

// protopingmanager.c:111
int32_t _PingManager_iRefCount;

