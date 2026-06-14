// telemetryapi.c:126
struct TelemetryApiFilterRuleT {
	// telemetryapi.c:127
	int32_t iEnable;

	// telemetryapi.c:128
	uint32_t uModuleID;

	// telemetryapi.c:129
	uint32_t uGroupID;

}

// telemetryapi.c:130
typedef TelemetryApiFilterRuleT TelemetryApiFilterRuleT;

// telemetryapi.c:134
struct TelemetryApiCallbackDataT {
	// telemetryapi.c:135
	TelemetryApiCallbackT * pCallback;

	// telemetryapi.c:136
	void * pUserData;

}

// telemetryapi.c:137
typedef TelemetryApiCallbackDataT TelemetryApiCallbackDataT;

// telemetryapi.c:194
struct TelemetryApiSnapshotHeaderT {
	// telemetryapi.c:195
	uint32_t uBufferSize;

	// telemetryapi.c:196
	uint32_t uEventsChecksum;

	// telemetryapi.c:197
	uint32_t uNumEvents;

}

// telemetryapi.c:198
typedef TelemetryApiSnapshotHeaderT TelemetryApiSnapshotHeaderT;

// telemetryapi.c:230
void _TelemetryApiTriggerCallback(TelemetryApiRefT *  pTelemetryRef, TelemetryApiCBTypeE  eType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:255
void _TelemetryApiClearEvents(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:285
uint32_t _TelemetryApiChecksum(const void *  pBuf, uint32_t  uSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:286
	uint32_t uChecksum;

	// telemetryapi.c:287
	const char * pCharBuf;

}

// telemetryapi.c:316
uint32_t _TelemetryApiNumEvents(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:363
uint32_t _TelemetryApiFilterEvent(TelemetryApiRefT *  pTelemetryRef, uint32_t  uModuleID, uint32_t  uGroupID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:364
	TelemetryApiFilterRuleT * pRule;

	// telemetryapi.c:365
	int32_t bEnabled;

	// telemetryapi.c:366
	uint32_t uLoop;

}

// telemetryapi.c:403
void _TelemetryApiSendData(TelemetryApiRefT *  pTelemetryRef, int32_t  iMsgType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:435
void _TelemetryApiTrySendToServer(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:436
	uint32_t uLoop;

	// telemetryapi.c:436
	uint32_t uCurrentTime;

	// telemetryapi.c:436
	uint32_t uCurrentNumOfMessages;

	// telemetryapi.c:436
	uint32_t uCharsWritten;

	// telemetryapi.c:437
	TelemetryApiEventT TempEvent;

	// telemetryapi.c:438
	char * pBufPtr;

	{
		// telemetryapi.c:478
		uint32_t uServerTimeStart;

		// telemetryapi.c:479
		uint32_t uCurrentLocalTime;

		// telemetryapi.c:480
		int32_t iDiffTime;

	}
}

// telemetryapi.c:549
int32_t _TelemetryApiGetFilterTokenFromChars(const char *  pChars, uint32_t *  pDestToken) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:550
	const char * pChar1;

	// telemetryapi.c:551
	const char * pChar2;

	// telemetryapi.c:552
	const char * pChar3;

	// telemetryapi.c:553
	const char * pChar4;

}

// telemetryapi.c:610
void _TelemetryApiSetFilter(TelemetryApiRefT *  pTelemetryRef, const char *  pFilterRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:611
	TelemetryApiFilterRuleT TempRule;

	// telemetryapi.c:612
	const char * pRule;

	// telemetryapi.c:613
	uint32_t uToken;

	// telemetryapi.c:613
	uint32_t uDone;

	// telemetryapi.c:616
	enum TelemetryApiFilterParseStateE {
		TELEMETRY_FILTERPARSE_IDLE = 0,
		TELEMETRY_FILTERPARSE_PLUSMINUS = 1,
		TELEMETRY_FILTERPARSE_MODULEID = 2,
		TELEMETRY_FILTERPARSE_SLASH = 3,
		TELEMETRY_FILTERPARSE_GROUPID = 4,
		TELEMETRY_FILTERPARSE_BUFFERFULL = 5,
	}

	// telemetryapi.c:624
	TelemetryApiFilterParseStateE eState;

}

// telemetryapi.c:783
void _TelemetryApiEventBufferApplyFilter(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:784
	TelemetryApiEventT * pEvent;

	// telemetryapi.c:785
	uint32_t uLoop;

	// telemetryapi.c:785
	uint32_t uEntry;

	// telemetryapi.c:785
	uint32_t uCopyToSlot;

	// telemetryapi.c:785
	uint32_t bKeptAnEntry;

	// telemetryapi.c:785
	uint32_t bKilledAnEntry;

}

// telemetryapi.c:882
void _TelemetryApiSetCountryDisabledFlag(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:883
	char * pCountry;

	// telemetryapi.c:884
	char[3] strCountry;

}

// telemetryapi.c:932
int32_t _TelemetryApiCanSendTelemetry(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:961
int32_t _TelemetryApiGetMessage(TelemetryApiRefT *  pTelemetryRef, int32_t *  pKind, int32_t *  pCode, char **  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:962
	int32_t iRetVal;

}

// telemetryapi.c:999
extern TelemetryApiRefT * TelemetryApiCreate(uint32_t  uNumEvents, TelemetryApiBufferTypeE  eBufferType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1000
	TelemetryApiRefT * pTelemetryRef;

	// telemetryapi.c:1001
	int32_t iMemGroup;

	// telemetryapi.c:1002
	uint32_t uMemAllocSize;

}

// telemetryapi.c:1055
extern void TelemetryApiDestroy(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1087
extern void TelemetryApiDisconnect(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1126
extern int32_t TelemetryApiAuthent(TelemetryApiRefT *  pTelemetryRef, const char *  pAuth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1127
	const char * pDelimiter;

	// telemetryapi.c:1128
	char * pEnd;

}

// telemetryapi.c:1205
extern void TelemetryApiUpdate(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1206
	int32_t iKind;

	// telemetryapi.c:1207
	int32_t iCode;

	// telemetryapi.c:1208
	char * pData;

	// telemetryapi.c:1209
	uint32_t uCurrentTime;

	// telemetryapi.c:1209
	uint32_t uCurrentNumOfMessages;

	{
		// telemetryapi.c:1252
		int32_t iTransactionId;

	}
}

// telemetryapi.c:1325
extern void TelemetryApiEventPrint(TelemetryApiEventT *  pEvent, uint32_t  uEventNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1369
extern void TelemetryApiEventsPrint(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1370
	uint32_t uLoop;

}

// telemetryapi.c:1403
extern void TelemetryApiFiltersPrint(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1404
	uint32_t uLoop;

	// telemetryapi.c:1405
	char cEnable;

	// telemetryapi.c:1406
	const TelemetryApiFilterRuleT * pRule;

}

// telemetryapi.c:1450
extern void TelemetryApiSetCallback(TelemetryApiRefT *  pTelemetryRef, TelemetryApiCBTypeE  eType, TelemetryApiCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1488
extern int32_t TelemetryApiConnect(TelemetryApiRefT *  pTelemetryRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1549
extern int32_t TelemetryApiStatus(TelemetryApiRefT *  pTelemetryRef, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1619
extern int32_t TelemetryApiControl(TelemetryApiRefT *  pTelemetryRef, int32_t  iKind, int32_t  iValue, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1620
	int32_t iReturn;

}

// telemetryapi.c:1744
extern void TelemetryApiFilter(TelemetryApiRefT *  pTelemetryRef, const char *  pFilterRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:1780
extern void TelemetryApiEvent(TelemetryApiRefT *  pTelemetryRef, uint32_t  uModuleID, uint32_t  uGroupID, const char *  pEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// telemetryapi.c:1804
		TelemetryApiEventT NewEvent;

		{
			// telemetryapi.c:1810
			uint32_t uLoop;

			// telemetryapi.c:1811
			char cTemp;

		}
	}
}

// telemetryapi.c:1871
extern TelemetryApiEventT * TelemetryApiPopFront(TelemetryApiRefT *  pTelemetryRef, TelemetryApiEventT *  pEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1872
	TelemetryApiEventT * pPoppedEvent;

}

// telemetryapi.c:1937
extern TelemetryApiEventT * TelemetryApiPopBack(TelemetryApiRefT *  pTelemetryRef, TelemetryApiEventT *  pEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:1938
	TelemetryApiEventT * pPoppedEvent;

}

// telemetryapi.c:2002
extern int32_t TelemetryApiPushFront(TelemetryApiRefT *  pTelemetryRef, const TelemetryApiEventT *  pEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:2081
extern int32_t TelemetryApiPushBack(TelemetryApiRefT *  pTelemetryRef, const TelemetryApiEventT *  pEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:2170
extern uint32_t TelemetryApiSnapshotSave(TelemetryApiRefT *  pTelemetryRef, void *  pDestBuf, uint32_t  uDestSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2171
	uint32_t uBufferSaveSize;

	// telemetryapi.c:2171
	uint32_t uNumEvents;

	// telemetryapi.c:2171
	uint32_t uAmtToCopy;

	// telemetryapi.c:2172
	TelemetryApiSnapshotHeaderT * pHeader;

	// telemetryapi.c:2173
	TelemetryApiEventT * pEvents;

	{
		// telemetryapi.c:2213
		TelemetryApiEventT * pEventsPtr;

	}
}

// telemetryapi.c:2246
extern uint32_t TelemetryApiSnapshotSize(const void *  pSourceBuf, uint32_t  uSourceSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2247
	const TelemetryApiSnapshotHeaderT * pHeader;

	// telemetryapi.c:2248
	uint32_t uHeaderMemSize;

	// telemetryapi.c:2248
	uint32_t uEventMemSize;

}

// telemetryapi.c:2292
extern uint32_t TelemetryApiSnapshotLoad(TelemetryApiRefT *  pTelemetryRef, const void *  pSourceBuf, uint32_t  uSourceSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2293
	const TelemetryApiSnapshotHeaderT * pHeader;

	// telemetryapi.c:2294
	const TelemetryApiEventT * pEvents;

	// telemetryapi.c:2295
	uint32_t uHeaderMemSize;

	// telemetryapi.c:2295
	uint32_t uEventMemSize;

	// telemetryapi.c:2295
	uint32_t uEventChecksum;

	// telemetryapi.c:2295
	uint32_t uNumEventsToCopy;

}

// telemetryapi.c:2379
extern char * TelemetryApiEventStringFormat(char *  pDest, const char *  pSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2380
	char * pDestPtr;

	// telemetryapi.c:2381
	uint32_t uNumCharsCopied;

}

// telemetryapi.c:2425
extern const char * TelemetryApiStringRight(const char *  pString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2426
	uint32_t uLength;

}

// telemetryapi.c:2465
extern int32_t TelemetryApiBeginTransaction(TelemetryApiRefT *  pTelemetryRef, TelemetryApiBeginTransactionCBT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:2520
extern int32_t TelemetryApiSendTransactionData(TelemetryApiRefT *  pTelemetryRef, int32_t  iTransactionId, const char *  strData, int32_t  iDataLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// telemetryapi.c:2521
	int32_t iSendLength;

}

// telemetryapi.c:2561
extern int32_t TelemetryApiCancelTransaction(TelemetryApiRefT *  pTelemetryRef, int32_t  iTransactionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// telemetryapi.c:2601
extern int32_t TelemetryApiEndTransaction(TelemetryApiRefT *  pTelemetryRef, int32_t  iTransactionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

