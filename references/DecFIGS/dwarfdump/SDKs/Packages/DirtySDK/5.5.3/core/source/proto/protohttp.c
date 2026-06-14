// protohttp.c:52
enum ProtoHttpRequestTypeE {
	PROTOHTTP_REQUESTTYPE_HEAD = 0,
	PROTOHTTP_REQUESTTYPE_GET = 1,
	PROTOHTTP_REQUESTTYPE_POST = 2,
	PROTOHTTP_REQUESTTYPE_PUT = 3,
	PROTOHTTP_NUMREQUESTTYPES = 4,
}

// protohttp.c:59
typedef ProtoHttpRequestTypeE ProtoHttpRequestTypeE;

// protohttp.c:79
enum {
	ST_IDLE = 0,
	ST_CONN = 1,
	ST_SEND = 2,
	ST_RESP = 3,
	ST_HEAD = 4,
	ST_BODY = 5,
	ST_DONE = 6,
	ST_FAIL = 7,
}

// protohttp.c:161
const char * _ProtoHttpParseUrl(const char *  pUrl, char *  pKind, int32_t  iKindSize, char *  pHost, int32_t  iHostSize, int32_t *  pPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:162
	const char * s;

	// protohttp.c:163
	int32_t i;

	// protohttp.c:163
	int32_t iPort;

}

// protohttp.c:249
void _ProtoHttpClose(ProtoHttpRefT *  pState, const char *  pReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:278
void _ProtoHttpReset(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:317
int32_t _ProtoHttpFormatRequest(ProtoHttpRefT *  pState, const char *  pUrl, const char *  pHost, int32_t  iPort, const char *  pRequest, const char *  pData, uint32_t  uDataLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:318
	int32_t iQueryPos;

	{
		// protohttp.c:338
		char * pAppend;

	}
}

// protohttp.c:391
int32_t _ProtoHttpRequest(ProtoHttpRefT *  pState, const char *  pUrl, const char *  pData, int32_t  iDataSize, ProtoHttpRequestTypeE  eRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:392
	const char[4][6] _strRequestNames;

	// protohttp.c:393
	char[256] strHost;

	// protohttp.c:393
	char[8] strKind;

	// protohttp.c:394
	int32_t iPort;

	// protohttp.c:394
	int32_t iResult;

	// protohttp.c:394
	int32_t iSecure;

	// protohttp.c:395
	int32_t eState;

	// protohttp.c:396
	uint8_t uTest;

	// protohttp.c:396
	uint8_t bNewConnection;

}

// protohttp.c:532
int32_t _ProtoHttpParseHeader(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:533
	char * s;

	// protohttp.c:534
	char * t;

}

// protohttp.c:659
void _ProtoHttpRedirect(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:660
	const char * pStr;

	// protohttp.c:660
	const char * pUrl;

	// protohttp.c:661
	int32_t iUrl;

}

// protohttp.c:731
int32_t _ProtoHttpChunkProcess(ProtoHttpRefT *  pState, int32_t  iBufMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:732
	int32_t iChkSize;

	// protohttp.c:732
	int32_t iLen;

	{
		// protohttp.c:743
		char * s;

		// protohttp.c:743
		char * s2;

		// protohttp.c:744
		char * t;

	}
}

// protohttp.c:824
int32_t _ProtoHttpSend(ProtoHttpRefT *  pState, const char *  pStrBuf, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:825
	int32_t iResult;

}

// protohttp.c:860
int32_t _ProtoHttpRecv(ProtoHttpRefT *  pState, char *  pStrBuf, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:861
	int32_t iResult;

}

// protohttp.c:899
extern ProtoHttpRefT * ProtoHttpCreate(int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:900
	ProtoHttpRefT * pState;

	// protohttp.c:901
	int32_t iMemGroup;

}

// protohttp.c:960
extern void ProtoHttpCallback(ProtoHttpRefT *  pState, ProtoHttpCustomHeaderCbT *  pCustomHeaderCb, void *  pCallbackRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:981
extern void ProtoHttpDestroy(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1012
extern int32_t ProtoHttpGet(ProtoHttpRefT *  pState, const char *  pUrl, uint32_t  bHeadOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1035
extern int32_t ProtoHttpRecv(ProtoHttpRefT *  pState, char *  pBuffer, int32_t  iBufMin, int32_t  iBufMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:1036
	int32_t iLen;

}

// protohttp.c:1139
extern int32_t ProtoHttpRecvAll(ProtoHttpRefT *  pState, char *  pBuffer, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:1140
	int32_t iRecvMax;

	// protohttp.c:1140
	int32_t iRecvResult;

}

// protohttp.c:1206
extern int32_t ProtoHttpPost(ProtoHttpRefT *  pState, const char *  pUrl, const char *  pData, int32_t  iDataSize, uint32_t  bDoPut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1228
extern int32_t ProtoHttpSend(ProtoHttpRefT *  pState, const char *  pData, int32_t  iDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1269
extern void ProtoHttpAbort(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1314
extern int32_t ProtoHttpControl(ProtoHttpRefT *  pState, int32_t  iSelect, int32_t  iValue, int32_t  iValue2, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1393
extern int32_t ProtoHttpStatus(ProtoHttpRefT *  pState, int32_t  iSelect, void *  pBuffer, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protohttp.c:1485
extern void ProtoHttpUpdate(ProtoHttpRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:1486
	int32_t iResult;

	// protohttp.c:1487
	char[256] strData;

}

// protohttp.c:1703
extern int32_t ProtoHttpUrlEncodeIntParm(char *  pBuffer, int32_t  iLength, const char *  pParm, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:1704
	char[32] strValue;

	// protohttp.c:1705
	char * pData;

}

// protohttp.c:1757
extern int32_t ProtoHttpUrlEncodeStrParm(char *  pBuffer, int32_t  iLength, const char *  pParm, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protohttp.c:1760
	char[256] _strSafe;

	// protohttp.c:1771
	char[16] _strHex;

	{
		// protohttp.c:1794
		uint8_t ch;

	}
}

