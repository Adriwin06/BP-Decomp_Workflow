// telemetryapi.h:51
struct CgsNetwork::DirtySock::TelemetryApiEventT {
	// telemetryapi.h:52
	uint32_t uModuleID;

	// telemetryapi.h:53
	uint32_t uGroupID;

	// telemetryapi.h:54
	int32_t iTimestamp;

	// telemetryapi.h:55
	char[16] strEvent;

}

// telemetryapi.h:47
typedef TelemetryApiRefT TelemetryApiRefT;

// telemetryapi.h:47
struct TelemetryApiRefT {
	// telemetryapi.c:143
	ProtoAriesRefT * pAries;

	// telemetryapi.c:144
	int32_t iMemGroup;

	// telemetryapi.c:146
	char[128] strAuth;

	// telemetryapi.c:147
	uint32_t uAddr;

	// telemetryapi.c:148
	int32_t iPort;

	// telemetryapi.c:149
	int32_t bCanConnect;

	// telemetryapi.c:150
	int32_t bFullSendPending;

	// telemetryapi.c:152
	char[4] strUserLocale;

	// telemetryapi.c:153
	char[1024] strDisabledCountries;

	// telemetryapi.c:154
	int32_t bCountryDisabled;

	// telemetryapi.c:155
	int32_t bUserDisabled;

	// telemetryapi.c:158
	int32_t bTransactionBegPending;

	// telemetryapi.c:159
	TelemetryApiBeginTransactionCBT * pTransactionBegCB;

	// telemetryapi.c:160
	void * pTransactionBegUserData;

	// telemetryapi.c:163
	uint32_t uTickStartTime;

	// telemetryapi.c:164
	uint32_t uLastServerSendTime;

	// telemetryapi.c:165
	char * pServerString;

	// telemetryapi.c:166
	uint32_t uServerStringSize;

	// telemetryapi.c:167
	char * pTagString;

	// telemetryapi.c:168
	uint32_t uTagStringSize;

	// telemetryapi.c:169
	char cEntryPrepender;

	// telemetryapi.c:170
	char cPad1;

	// telemetryapi.c:171
	char cPad2;

	// telemetryapi.c:172
	char cPad3;

	// telemetryapi.c:175
	uint32_t uNumFilters;

	// telemetryapi.c:176
	TelemetryApiFilterRuleT[32] Filters;

	// telemetryapi.c:179
	TelemetryApiCallbackDataT[3] callbacks;

	// telemetryapi.c:182
	TelemetryApiBufferTypeE eBufferType;

	// telemetryapi.c:183
	uint32_t uEventBufSize;

	// telemetryapi.c:184
	uint32_t uEventHead;

	// telemetryapi.c:185
	uint32_t uEventTail;

	// telemetryapi.c:186
	uint32_t uEventState;

	// telemetryapi.c:187
	uint32_t uEventThreshold;

	// telemetryapi.c:188
	uint32_t uEventTimeout;

	// telemetryapi.c:189
	TelemetryApiEventT * Events;

}

// telemetryapi.h:51
struct TelemetryApiEventT {
	// telemetryapi.h:52
	uint32_t uModuleID;

	// telemetryapi.h:53
	uint32_t uGroupID;

	// telemetryapi.h:54
	int32_t iTimestamp;

	// telemetryapi.h:55
	char[16] strEvent;

}

// telemetryapi.h:56
typedef TelemetryApiEventT TelemetryApiEventT;

// telemetryapi.h:60
enum TelemetryApiBufferTypeE {
	TELEMETRY_BUFFERTYPE_FILLANDSTOP = 0,
	TELEMETRY_BUFFERTYPE_CIRCULAROVERWRITE = 1,
}

// telemetryapi.h:63
typedef TelemetryApiBufferTypeE TelemetryApiBufferTypeE;

// telemetryapi.h:67
enum TelemetryApiCBTypeE {
	TELEMETRY_CBTYPE_BUFFERFULL = 0,
	TELEMETRY_CBTYPE_BUFFEREMPTY = 1,
	TELEMETRY_CBTYPE_FULLSENDCOMPLETE = 2,
	TELEMETRY_CBTYPE_TOTAL = 3,
}

// telemetryapi.h:72
typedef TelemetryApiCBTypeE TelemetryApiCBTypeE;

// telemetryapi.h:75
typedef void (TelemetryApiRefT *, void *) TelemetryApiCallbackT;

// telemetryapi.h:78
typedef void (TelemetryApiRefT *, void *, int32_t) TelemetryApiBeginTransactionCBT;

