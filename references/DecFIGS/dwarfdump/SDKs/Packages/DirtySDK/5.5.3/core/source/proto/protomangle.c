// protomangle.c:47
enum ProtoMangleResponseE {
	PROTOMANGLE_RESP_INVALID = -1,
	PROTOMANGLE_RESP_SUCCESS = 0,
	PROTOMANGLE_RESP_PROBE = 1,
	PROTOMANGLE_RESP_FAILURE = 2,
	PROTOMANGLE_NUMRESP = 3,
}

// protomangle.c:54
typedef ProtoMangleResponseE ProtoMangleResponseE;

// protomangle.c:58
struct ProtoMangleProbeT {
	// protomangle.c:59
	int32_t iCurCnt;

	// protomangle.c:60
	int32_t iSndCnt;

	// protomangle.c:61
	int32_t iAddr;

	// protomangle.c:62
	int32_t iPort;

	// protomangle.c:63
	int32_t iSrcPort;

	// protomangle.c:64
	int32_t iId;

	// protomangle.c:65
	char[64] strTag;

}

// protomangle.c:66
typedef ProtoMangleProbeT ProtoMangleProbeT;

// protomangle.c:95
enum {
	ST_MNGL_IDLE = 0,
	ST_MNGL_WAIT = 1,
	ST_MNGL_DONE = 2,
	ST_MNGL_FAIL = 3,
	ST_MNGL_REPT = 4,
}

// protomangle.c:150
void _ProtoMangleSockClose(ProtoMangleRefT *  pRef, uint32_t  bRelease) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:188
int32_t _ProtoMangleHttpPost(ProtoMangleRefT *  pRef, const char *  pUrl, const char *  pCookie, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:189
	char[256] strBuffer;

}

// protomangle.c:223
void _ProtoMangleHttpRequest(ProtoMangleRefT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:224
	char[256] strAppend;

	// protomangle.c:224
	char[256] strUrl;

}

// protomangle.c:264
int32_t _ProtoMangleGetParm(char *  pDst, int32_t  iBufLen, const char *  pSrc, const char *  pParmName, int32_t  bParseCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:265
	const char * pParm;

	// protomangle.c:266
	int32_t iStr;

	// protomangle.c:266
	int32_t iId;

	{
		// protomangle.c:277
		char * pId;

	}
}

// protomangle.c:329
const char * _ProtoMangleParseAdvance(const char *  pSrc, const char *  pTerminator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:358
const char * _ProtoMangleParseResponseType(const char *  pSrc, ProtoMangleResponseE *  pResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:359
	char[32] strCmd;

	// protomangle.c:360
	int32_t iResp;

}

// protomangle.c:395
int32_t _ProtoMangleParseSuccess(ProtoMangleRefT *  pRef, const char *  pStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:396
	char[32] strParm;

	// protomangle.c:397
	int32_t bLinesParsed;

}

// protomangle.c:434
int32_t _ProtoMangleParseProbeRequest(ProtoMangleProbeT *  pProbe, ProtoMangleRefT *  pRef, const char *  pSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:435
	int32_t bLinesParsed;

	// protomangle.c:435
	int32_t iParm;

	// protomangle.c:436
	char[64] strParm;

}

// protomangle.c:512
int32_t _ProtoMangleSetupProbeSocket(ProtoMangleRefT *  pRef, ProtoMangleProbeT *  pProbe) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:513
	sockaddr BindAddr;

}

// protomangle.c:573
void _ProtoMangleSendProbe(ProtoMangleRefT *  pRef, ProtoMangleProbeT *  pProbe, int32_t  iSrcPort, int32_t  iProbeReq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:574
	sockaddr PeerAddr;

	// protomangle.c:575
	char[128] strMesg;

	// protomangle.c:576
	int32_t iErr;

	// protomangle.c:576
	int32_t iMsgSize;

	{
		// protomangle.c:580
		uint32_t val2;

	}
}

// protomangle.c:621
int32_t _ProtoMangleHandleProbeRequest(ProtoMangleRefT *  pRef, const char *  pSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:622
	ProtoMangleProbeT Probe;

	// protomangle.c:623
	int32_t iProbeReq;

	// protomangle.c:623
	int32_t iSrcPort;

}

// protomangle.c:678
extern ProtoMangleRefT * ProtoMangleCreate(const char *  pServer, int32_t  iPort, const char *  pGameID, const char *  pLKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:679
	ProtoMangleRefT * pRef;

	// protomangle.c:680
	int32_t iMemGroup;

}

// protomangle.c:735
extern void ProtoMangleDestroy(ProtoMangleRefT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:766
extern void ProtoMangleConnect(ProtoMangleRefT *  pRef, int32_t  iMyPort, const char *  pSessID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:801
extern int32_t ProtoMangleConnectSocket(ProtoMangleRefT *  pRef, intptr_t  uSockRef, const char *  pSessID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:802
	sockaddr SockAddr;

}

// protomangle.c:851
extern void ProtoMangleUpdate(ProtoMangleRefT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protomangle.c:855
		int32_t iRecvLen;

		{
			// protomangle.c:863
			const char * pStr;

		}
	}
}

// protomangle.c:931
extern int32_t ProtoMangleComplete(ProtoMangleRefT *  pRef, int32_t *  pAddr, int32_t *  pPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:984
extern int32_t ProtoMangleReport(ProtoMangleRefT *  pRef, ProtoMangleStatusE  eStatus, int32_t  iLatency) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protomangle.c:985
	char[128] strData;

	{
		// protomangle.c:1001
		char[32] strData2;

	}
}

// protomangle.c:1030
extern void ProtoMangleDisconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:1053
extern int32_t ProtoMangleControl(ProtoMangleRefT *  pRef, int32_t  iControl, int32_t  iValue, int32_t  iValue2, const void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:1081
extern int32_t ProtoMangleStatus(ProtoMangleRefT *  pRef, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protomangle.c:114
const char *[3] _ProtoMangle_pResponseTable;

// protomangle.c:122
const char *[2] _ProtoMangle_pReportTable;

