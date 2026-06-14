// protoping.h:66
typedef ProtoPingRefT ProtoPingRefT;

// protoping.h:70
struct ProtoPingResponseT {
	// protoping.h:71
	DirtyAddrT Addr;

	// protoping.h:72
	uint32_t uAddr;

	// protoping.h:73
	int16_t iPing;

	// protoping.h:74
	uint16_t uSeqn;

	// protoping.h:75
	uint16_t uNumRetries;

	// protoping.h:76
	uint8_t uType;

	// protoping.h:77
	uint8_t bServer;

}

// protoping.h:78
typedef ProtoPingResponseT ProtoPingResponseT;

// protoping.h:66
struct ProtoPingRefT {
	// protoping.c:124
	SocketT * pSocket;

	// protoping.c:125
	NetCritT ThreadCrit;

	// protoping.c:126
	int32_t iMemGroup;

	// protoping.c:127
	int32_t iSeqn;

	// protoping.c:128
	int32_t iRefCount;

	// protoping.c:129
	int32_t iQueueSize;

	// protoping.c:130
	int32_t iQueueTail;

	// protoping.c:131
	int16_t iIdentToken;

	// protoping.c:132
	uint8_t bVerbose;

	// protoping.c:133
	uint8_t _pad;

	// protoping.c:134
	ProtoPingQueueT[1] RequestQueue;

}

