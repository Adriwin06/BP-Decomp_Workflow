// protoping.c:50
struct HeaderIpv4 {
	// protoping.c:51
	unsigned char verslen;

	// protoping.c:52
	unsigned char service;

	// protoping.c:53
	unsigned char[2] length;

	// protoping.c:54
	unsigned char[2] ident;

	// protoping.c:55
	unsigned char[2] frag;

	// protoping.c:56
	unsigned char time;

	// protoping.c:57
	unsigned char proto;

	// protoping.c:58
	unsigned char[2] check;

	// protoping.c:59
	unsigned char[4] srcaddr;

	// protoping.c:60
	unsigned char[4] dstaddr;

}

// protoping.c:61
typedef HeaderIpv4 HeaderIpv4;

// protoping.c:65
struct HeaderIcmp {
	// protoping.c:66
	unsigned char type;

	// protoping.c:67
	unsigned char code;

	// protoping.c:68
	unsigned char[2] check;

	// protoping.c:69
	unsigned char[2] idn;

	// protoping.c:70
	unsigned char[2] seq;

}

// protoping.c:71
typedef HeaderIcmp HeaderIcmp;

// protoping.c:75
struct EchoHeaderT {
	// protoping.c:76
	HeaderIpv4 ipv4;

	// protoping.c:77
	HeaderIcmp icmp;

}

// protoping.c:78
typedef EchoHeaderT EchoHeaderT;

// protoping.c:82
struct EchoDataT {
	// protoping.c:83
	char[256] userdata;

}

// protoping.c:84
typedef EchoDataT EchoDataT;

// protoping.c:88
struct EchoRequestT {
	// protoping.c:89
	EchoHeaderT header;

	// protoping.c:90
	EchoDataT data;

}

// protoping.c:91
typedef EchoRequestT EchoRequestT;

// protoping.c:101
union {
	// protoping.c:99
	EchoDataT data;

	// protoping.c:100
	EchoHeaderT header_org;

}
// protoping.c:95
struct EchoResponseT {
	// protoping.c:96
	EchoHeaderT header;

	// protoping.c:101
	// protoping.c:101
	union {
		// protoping.c:99
		EchoDataT data;

		// protoping.c:100
		EchoHeaderT header_org;

	}
 body;

}

// protoping.c:102
typedef EchoResponseT EchoResponseT;

// protoping.c:106
struct ProtoPingQueueT {
	// protoping.c:107
	uint32_t uAddr;

	// protoping.c:108
	uint32_t uTime;

	// protoping.c:109
	uint32_t uTick;

	// protoping.c:110
	void * pData;

	// protoping.c:112
	const char * pType;

	// protoping.c:114
	uint16_t uSize;

	// protoping.c:115
	uint16_t uSeqn;

	// protoping.c:116
	uint16_t uPing;

	// protoping.c:117
	uint8_t uType;

	// protoping.c:118
	uint8_t uFlag;

}

// protoping.c:119
typedef ProtoPingQueueT ProtoPingQueueT;

// protoping.c:193
int32_t _ParseResponse(ProtoPingRefT *  pProtoPing, ProtoPingQueueT *  pQueueEntry, EchoResponseT *  pResponse, sockaddr *  pSockAddr, int32_t  iLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:194
	int32_t iIdentToken;

}

// protoping.c:243
int32_t _ProtoPingCallback(SocketT *  pSocket, int32_t  iFlags, void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:244
	ProtoPingRefT * pProtoPing;

	// protoping.c:245
	char[284] strResponse;

	// protoping.c:246
	ProtoPingQueueT Response;

	// protoping.c:246
	ProtoPingQueueT * pRequest;

	// protoping.c:247
	sockaddr SockAddr;

	// protoping.c:248
	int32_t iLen;

	// protoping.c:248
	int32_t iIdentToken;

	// protoping.c:248
	int32_t iQueue;

	// protoping.c:249
	EchoResponseT * pEchoResponse;

}

// protoping.c:355
int32_t _ProtoPingRequest(ProtoPingRefT *  pProtoPing, uint32_t  uAddress, const unsigned char *  pData, int32_t  iDataLen, int32_t  iTimeout, int32_t  iTtl, uint32_t  bServer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:356
	EchoRequestT EchoRequest;

	// protoping.c:357
	sockaddr SockAddr;

	// protoping.c:358
	unsigned char * pCheck;

	// protoping.c:359
	uint32_t uCheckVal;

	// protoping.c:360
	int32_t iLen;

	{
		// protoping.c:384
		uint32_t val2;

	}
	{
		// protoping.c:461
		ProtoPingQueueT * pRequest;

	}
}

// protoping.c:499
extern ProtoPingRefT * ProtoPingCreate(int32_t  iMaxPings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:500
	ProtoPingRefT * pProtoPing;

	// protoping.c:501
	sockaddr BindAddr;

	// protoping.c:502
	int32_t iMemGroup;

	// protoping.c:503
	int32_t iResult;

	// protoping.c:503
	int32_t iStateSize;

}

// protoping.c:581
extern void ProtoPingDestroy(ProtoPingRefT *  pProtoPing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:582
	ProtoPingQueueT * pQueue;

	// protoping.c:583
	int iQueue;

}

// protoping.c:641
extern int32_t ProtoPingControl(ProtoPingRefT *  pProtoPing, int32_t  iControl, int32_t  iValue, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoping.c:677
extern int32_t ProtoPingRequest(ProtoPingRefT *  pRef, DirtyAddrT *  pAddr, const unsigned char *  pData, int32_t  iDataLen, int32_t  iTimeout, int32_t  iTtl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:678
	uint32_t uAddress;

}

// protoping.c:708
extern int32_t ProtoPingRequestServer(ProtoPingRefT *  pRef, uint32_t  uServerAddress, const unsigned char *  pData, int32_t  iDataLen, int32_t  iTimeout, int32_t  iTtl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoping.c:731
extern int32_t ProtoPingResponse(ProtoPingRefT *  pProtoPing, unsigned char *  pBuffer, int32_t *  pBufLen, ProtoPingResponseT *  pResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoping.c:732
	ProtoPingQueueT * pRequest;

	// protoping.c:733
	int32_t iPing;

	// protoping.c:733
	int32_t iQueue;

	// protoping.c:734
	uint32_t uCurTime;

	// protoping.c:735
	uint8_t bTimeout;

}

// protoping.c:144
const char *[17] _ProtoPing_strResponseTypes;

// protoping.c:166
ProtoPingRefT * _ProtoPing_pRef;

