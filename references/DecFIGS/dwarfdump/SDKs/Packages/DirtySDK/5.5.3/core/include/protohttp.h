// protohttp.h:123
typedef ProtoHttpRefT ProtoHttpRefT;

// protohttp.h:123
struct ProtoHttpRefT {
	// protohttp.c:68
	ProtoSSLRefT * pSsl;

	// protohttp.c:70
	ProtoHttpCustomHeaderCbT * pCustomHeaderCb;

	// protohttp.c:71
	void * pCallbackRef;

	// protohttp.c:73
	int32_t iMemGroup;

	// protohttp.c:75
	int32_t iPort;

	// protohttp.c:76
	int32_t iSecure;

	// protohttp.c:88
	enumeration  eState;

	// protohttp.c:90
	int32_t iHdrCode;

	// protohttp.c:91
	int32_t iHdrDate;

	// protohttp.c:93
	int32_t iHeadSize;

	// protohttp.c:94
	int32_t iBodySize;

	// protohttp.c:95
	int32_t iRecvSize;

	// protohttp.c:97
	char * pInpBuf;

	// protohttp.c:98
	int32_t iInpMax;

	// protohttp.c:99
	int32_t iInpOff;

	// protohttp.c:100
	int32_t iInpLen;

	// protohttp.c:101
	int32_t iInpCnt;

	// protohttp.c:102
	int32_t iChkLen;

	// protohttp.c:104
	int32_t iNumRedirect;

	// protohttp.c:105
	int32_t iMaxRedirect;

	// protohttp.c:106
	char * pLocation;

	// protohttp.c:108
	uint32_t uTimeout;

	// protohttp.c:109
	uint32_t uTimer;

	// protohttp.c:110
	int32_t iKeepAlive;

	// protohttp.c:111
	int32_t iKeepAliveDflt;

	// protohttp.c:113
	char[1024] strHdr;

	// protohttp.c:114
	char[1024] strRequestHdr;

	// protohttp.c:115
	char[1024] strAppendHdr;

	// protohttp.c:116
	char[256] strHost;

	// protohttp.c:118
	uint8_t bTimeout;

	// protohttp.c:119
	uint8_t bChunked;

	// protohttp.c:120
	uint8_t bHeadOnly;

	// protohttp.c:121
	uint8_t bCloseHdr;

	// protohttp.c:122
	uint8_t iVerbose;

	// protohttp.c:123
	uint8_t bVerifyHdr;

	// protohttp.c:124
	uint8_t bHttp1_0;

	// protohttp.c:125
	uint8_t bCompactRecv;

}

// protohttp.h:126
typedef void (ProtoHttpRefT *, char *, uint32_t, const char *, uint32_t, void *) ProtoHttpCustomHeaderCbT;

// protohttp.h:64
enum ProtoHttpResponseE {
	PROTOHTTP_RESPONSE_INFORMATIONAL = 100,
	PROTOHTTP_RESPONSE_CONTINUE = 100,
	PROTOHTTP_RESPONSE_SWITCHPROTO = 101,
	PROTOHTTP_RESPONSE_SUCCESSFUL = 200,
	PROTOHTTP_RESPONSE_OK = 200,
	PROTOHTTP_RESPONSE_CREATED = 201,
	PROTOHTTP_RESPONSE_ACCEPTED = 202,
	PROTOHTTP_RESPONSE_NONAUTH = 203,
	PROTOHTTP_RESPONSE_NOCONTENT = 204,
	PROTOHTTP_RESPONSE_RESETCONTENT = 205,
	PROTOHTTP_RESPONSE_PARTIALCONTENT = 206,
	PROTOHTTP_RESPONSE_REDIRECTION = 300,
	PROTOHTTP_RESPONSE_MULTIPLECHOICES = 300,
	PROTOHTTP_RESPONSE_MOVEDPERMANENTLY = 301,
	PROTOHTTP_RESPONSE_FOUND = 302,
	PROTOHTTP_RESPONSE_SEEOTHER = 303,
	PROTOHTTP_RESPONSE_NOTMODIFIED = 304,
	PROTOHTTP_RESPONSE_USEPROXY = 305,
	PROTOHTTP_RESPONSE_RESERVED = 306,
	PROTOHTTP_RESPONSE_TEMPREDIRECT = 307,
	PROTOHTTP_RESPONSE_CLIENTERROR = 400,
	PROTOHTTP_RESPONSE_BADREQUEST = 400,
	PROTOHTTP_RESPONSE_UNAUTHORIZED = 401,
	PROTOHTTP_RESPONSE_PAYMENTREQUIRED = 402,
	PROTOHTTP_RESPONSE_FORBIDDEN = 403,
	PROTOHTTP_RESPONSE_NOTFOUND = 404,
	PROTOHTTP_RESPONSE_METHODNOTALLOWED = 405,
	PROTOHTTP_RESPONSE_NOTACCEPTABLE = 406,
	PROTOHTTP_RESPONSE_PROXYAUTHREQ = 407,
	PROTOHTTP_RESPONSE_REQUESTTIMEOUT = 408,
	PROTOHTTP_RESPONSE_CONFLICT = 409,
	PROTOHTTP_RESPONSE_GONE = 410,
	PROTOHTTP_RESPONSE_LENGTHREQUIRED = 411,
	PROTOHTTP_RESPONSE_PRECONFAILED = 412,
	PROTOHTTP_RESPONSE_REQENTITYTOOLARGE = 413,
	PROTOHTTP_RESPONSE_REQURITOOLONG = 414,
	PROTOHTTP_RESPONSE_UNSUPPORTEDMEDIA = 415,
	PROTOHTTP_RESPONSE_REQUESTRANGE = 416,
	PROTOHTTP_RESPONSE_EXPECTATIONFAILED = 417,
	PROTOHTTP_RESPONSE_SERVERERROR = 500,
	PROTOHTTP_RESPONSE_INTERNALSERVERERROR = 500,
	PROTOHTTP_RESPONSE_NOTIMPLEMENTED = 501,
	PROTOHTTP_RESPONSE_BADGATEWAY = 502,
	PROTOHTTP_RESPONSE_SERVICEUNAVAILABLE = 503,
	PROTOHTTP_RESPONSE_GATEWAYTIMEOUT = 504,
	PROTOHTTP_RESPONSE_HTTPVERSUNSUPPORTED = 505,
}

// protohttp.h:120
typedef ProtoHttpResponseE ProtoHttpResponseE;

