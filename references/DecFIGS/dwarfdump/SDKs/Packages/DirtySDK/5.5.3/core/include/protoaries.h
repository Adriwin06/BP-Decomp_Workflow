// protoaries.h:75
typedef ProtoAriesRefT ProtoAriesRefT;

// protoaries.h:50
enum ProtoAriesStateE {
	PROTOARIES_STATE_IDLE = 0,
	PROTOARIES_STATE_LIST = 1,
	PROTOARIES_STATE_CONN = 2,
	PROTOARIES_STATE_ONLN = 3,
	PROTOARIES_STATE_DISC = 4,
}

// protoaries.h:56
typedef ProtoAriesStateE ProtoAriesStateE;

// protoaries.h:60
enum ProtoAriesSecureE {
	PROTOARIES_SECURE_NONE = 0,
	PROTOARIES_SECURE_SSL = 1,
	PROTOARIES_SECURE_TICKET = 2,
}

// protoaries.h:64
typedef ProtoAriesSecureE ProtoAriesSecureE;

// protoaries.h:68
struct ProtoAriesMsgHdrT {
	// protoaries.h:69
	uint8_t[4] kind;

	// protoaries.h:70
	uint8_t[4] code;

	// protoaries.h:71
	uint8_t[4] size;

}

// protoaries.h:72
typedef ProtoAriesMsgHdrT ProtoAriesMsgHdrT;

// protoaries.h:75
struct ProtoAriesRefT {
	// protoaries.c:43
	ProtoSSLRefT * pProtoSsl;

	// protoaries.c:44
	int32_t iMemGroup;

	// protoaries.c:45
	sockaddr_in DestAddr;

	// protoaries.c:46
	uint32_t uLocalAddr;

	// protoaries.c:47
	uint32_t uLocalPort;

	// protoaries.c:48
	char[64] strServerName;

	// protoaries.c:50
	ProtoAriesStateE eState;

	// protoaries.c:51
	uint32_t uTimeout;

	// protoaries.c:53
	int32_t iBufSize;

	// protoaries.c:55
	int32_t iOutSize;

	// protoaries.c:56
	int32_t iOutProg;

	// protoaries.c:57
	int32_t iOutMaxm;

	// protoaries.c:58
	uint8_t * pOutData;

	// protoaries.c:60
	int32_t iInpSize;

	// protoaries.c:61
	int32_t iInpProg;

	// protoaries.c:62
	uint8_t * pInpData;

	// protoaries.c:63
	uint8_t[12] aInpHead;

	// protoaries.c:65
	int16_t bUseSSL;

	// protoaries.c:66
	int16_t bHaveWallet;

	// protoaries.c:67
	CryptStp1WalletT Wallet;

	// protoaries.c:68
	CryptStp1StreamT Stream;

	// protoaries.c:70
	char[1] aBufferData;

}

