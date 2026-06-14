// netconnps3.c:81
struct SceNpCommerceDataFlag_ {
	// netconnps3.c:82
	uint32_t type;

	// netconnps3.c:83
	const char * flag_id;

	// netconnps3.c:84
	uint32_t state;

	// netconnps3.c:85
	uint8_t[4] reserved;

}

// netconnps3.c:86
typedef SceNpCommerceDataFlag_ SceNpCommerceDataFlag;

// netconnps3.c:155
enum {
	ST_INIT = 0,
	ST_CONN = 1,
	ST_NPCN = 2,
	ST_TICK = 3,
	ST_IDLE = 4,
}

// netconnps3.c:179
enum {
	ST_DFLAG_IDLE = 0,
	ST_DFLAG_INIT = 1,
	ST_DFLAG_PROC = 2,
	ST_DFLAG_DONE = 3,
	ST_DFLAG_FAIL = 4,
}

// netconnps3.c:151
struct NetConnRefT {
	// netconnps3.c:152
	int32_t iMemGroup;

	// netconnps3.c:161
	enumeration  eState;

	// netconnps3.c:163
	int32_t iNpPoolSize;

	// netconnps3.c:164
	void * pNpPoolMem;

	// netconnps3.c:166
	uint32_t uDisconnectError;

	// netconnps3.c:167
	int32_t iNpStatus;

	// netconnps3.c:168
	int32_t iLastNpStatus;

	// netconnps3.c:170
	uint32_t uConnStatus;

	// netconnps3.c:172
	SceNpId NpId;

	// netconnps3.c:173
	uint8_t * pNpTicket;

	// netconnps3.c:174
	int32_t iTicketSize;

	// netconnps3.c:176
	int32_t uCommerceReqId;

	// netconnps3.c:177
	SceNpCommerceDataFlag DataFlag;

	// netconnps3.c:185
	enumeration  eDataFlagState;

	// netconnps3.c:187
	char[16] strTitleId;

	// netconnps3.c:188
	char[16] strCommId;

	// netconnps3.c:189
	char[16] strSpid;

}

// netconnps3.c:191
typedef NetConnRefT NetConnRefT;

// netconnps3.c:223
int32_t _NetConnCopyParam(char *  pDst, int32_t  iDstLen, const char *  pParamName, const char *  pSrc, const char *  pDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:224
	int32_t iIndex;

}

// netconnps3.c:271
void _NetConnParseParams(NetConnRefT *  pRef, const char *  pParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:272
	char[32] strTemp;

}

// netconnps3.c:312
int32_t _NetConnGetNpInfo(NetConnRefT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:313
	char[32] strServiceId;

	// netconnps3.c:314
	int32_t iResult;

}

// netconnps3.c:371
void _NetConnNpManagerCallback(int32_t  iEvent, int32_t  iResult, void *  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:372
	NetConnRefT * pRef;

}

// netconnps3.c:414
void _NetConnNpCommerceCallback(uint32_t  uCtxId, uint32_t  uSubjectId, int32_t  iEvent, int32_t  iErrorCode, void *  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:415
	NetConnRefT * pRef;

}

// netconnps3.c:458
void _NetConnUpdateDataFlag(NetConnRefT *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:459
	int32_t iResult;

}

// netconnps3.c:535
void _NetConnUpdate(void *  pData, uint32_t  uData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:536
	NetConnRefT * pRef;

	// netconnps3.c:537
	int32_t iResult;

	// netconnps3.c:539
	const char *[5] _NpStatus;

}

// netconnps3.c:709
extern int32_t NetConnStartup(const char *  pParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:710
	NetConnRefT * pRef;

	// netconnps3.c:711
	int32_t iMemGroup;

}

// netconnps3.c:771
extern int32_t NetConnQuery(const char *  pDevice, NetConfigRecT *  pList, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netconnps3.c:793
extern int32_t NetConnConnect(const NetConfigRecT *  pConfig, const char *  pOption) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:794
	int32_t iResult;

	{
		// netconnps3.c:798
		NetConnRefT * pRef;

	}
}

// netconnps3.c:854
extern int32_t NetConnControl(int32_t  iControl, int32_t  iValue, int32_t  iValue2, void *  pValue, void *  pValue2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:855
	NetConnRefT * pRef;

}

// netconnps3.c:911
extern int32_t NetConnStatus(int32_t  iKind, int32_t  iData, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:912
	NetConnRefT * pRef;

	// netconnps3.c:913
	CellNetCtlInfo Info;

	{
		// netconnps3.c:942
		int32_t bIsRestricted;

		// netconnps3.c:942
		int32_t iResult;

	}
	{
		// netconnps3.c:1012
		uint32_t uIfType;

	}
}

// netconnps3.c:1050
extern int32_t NetConnDisconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netconnps3.c:1051
	NetConnRefT * pRef;

	// netconnps3.c:1052
	int32_t iResult;

}

// netconnps3.c:1112
extern int32_t NetConnShutdown(uint32_t  uShutdownFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netconnps3.c:1159
extern void NetConnSleep(int32_t  iMilliSecs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netconnps3.c:197
NetConnRefT * _NetConn_pRef;

// netconnps3.c:198
uint32_t _NetConn_uCommerceCtxId;

