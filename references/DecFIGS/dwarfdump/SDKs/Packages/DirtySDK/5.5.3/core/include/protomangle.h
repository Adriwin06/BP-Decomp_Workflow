// protomangle.h:72
enum ProtoMangleStatusE {
	PROTOMANGLE_STATUS_CONNECTED = 0,
	PROTOMANGLE_STATUS_FAILED = 1,
	PROTOMANGLE_NUMSTATUS = 2,
}

// protomangle.h:77
typedef ProtoMangleStatusE ProtoMangleStatusE;

// protomangle.h:83
typedef ProtoMangleRefT ProtoMangleRefT;

// protomangle.h:83
struct ProtoMangleRefT {
	// protomangle.c:71
	ProtoHttpRefT * pHttp;

	// protomangle.c:73
	SocketT * pProbeSock;

	// protomangle.c:74
	SocketT * pSharedProbeSock;

	// protomangle.c:76
	int32_t iMemGroup;

	// protomangle.c:78
	int32_t iHostAddr;

	// protomangle.c:79
	int32_t iGamePort;

	// protomangle.c:81
	int32_t iPeerAddr;

	// protomangle.c:82
	int32_t iPeerPort;

	// protomangle.c:84
	char[64] strCookie;

	// protomangle.c:85
	char[32] strGameID;

	// protomangle.c:86
	char[64] strLKey;

	// protomangle.c:87
	char[32] strServer;

	// protomangle.c:88
	int32_t iServerPort;

	// protomangle.c:90
	ProtoMangleResponseE eResponse;

	// protomangle.c:92
	int32_t iRandPort;

	// protomangle.c:101
	enumeration  eMangleState;

	// protomangle.c:103
	int32_t iRecvSize;

	// protomangle.c:104
	char[1024] strBuf;

}

