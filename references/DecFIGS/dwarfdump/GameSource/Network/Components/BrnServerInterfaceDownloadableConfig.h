// BrnServerInterfaceDownloadableConfig.h:166
extern const int32_t KI_MAX_ELEMENTS_IN_MEMADDR_LOOKUP = 19;

// BrnServerInterfaceDownloadableConfig.h:167
extern const int32_t KI_TELEMETRY_FILTERS_MAX_LENGTH = 256;

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnServerInterfaceDownloadableConfig {
	public:
		// BrnServerInterfaceDownloadableConfig.h:500
		const float32_t TimeUntilRetryAfterFailedBuddyUpload();

		// BrnServerInterfaceDownloadableConfig.h:415
		const char * TelemetryFiltersFirstUse();

		// BrnServerInterfaceDownloadableConfig.h:432
		const char * TelemetryFiltersNormalUse();

		// BrnServerInterfaceDownloadableConfig.h:449
		const float32_t TimeTillStatsExpire();

		// BrnServerInterfaceDownloadableConfig.h:466
		const float32_t TimeBetweenRoadRulesUploads();

		// BrnServerInterfaceDownloadableConfig.h:483
		const float32_t TimeBetweenRoadRulesDownloads();

		// BrnServerInterfaceDownloadableConfig.h:313
		float32_t MinSyncTime();

		// BrnServerInterfaceDownloadableConfig.h:330
		float32_t MaxSyncTime();

		// BrnServerInterfaceDownloadableConfig.h:364
		float32_t TimeToWaitForSilentClientReady();

		// BrnServerInterfaceDownloadableConfig.h:381
		float32_t TimeToWaitForCommunicatingClientReady();

		// BrnServerInterfaceDownloadableConfig.h:347
		float32_t WaitForStartTime();

		// BrnServerInterfaceDownloadableConfig.h:398
		float32_t TimeGapBeforeStartTime();

		// BrnServerInterfaceDownloadableConfig.h:517
		const float32_t TimeBetweenOfflineProgressionUpload();

	private:
		// BrnServerInterfaceDownloadableConfig.h:166
		extern const int32_t KI_MAX_ELEMENTS_IN_MEMADDR_LOOKUP = 19;

		// BrnServerInterfaceDownloadableConfig.h:167
		extern const int32_t KI_TELEMETRY_FILTERS_MAX_LENGTH = 256;

	}

}

// BrnServerInterfaceDownloadableConfig.h:56
struct BrnNetwork::BrnServerInterfaceDownloadableConfig : public CgsNetwork::ServerInterfaceDownloadableConfig {
private:
	// BrnServerInterfaceDownloadableConfig.h:166
	extern const int32_t KI_MAX_ELEMENTS_IN_MEMADDR_LOOKUP = 19;

	// BrnServerInterfaceDownloadableConfig.h:167
	extern const int32_t KI_TELEMETRY_FILTERS_MAX_LENGTH = 256;

	// BrnServerInterfaceDownloadableConfig.h:169
	DataIDToMemoryAddr[19] maIDsToMemAddrs;

	// BrnServerInterfaceDownloadableConfig.h:170
	int32_t miSizeOfMemLookupTable;

	// BrnServerInterfaceDownloadableConfig.h:172
	char[256] macTelemetryFiltersFirstUse;

	// BrnServerInterfaceDownloadableConfig.h:173
	char[256] macTelemetryFiltersNormalUse;

	// BrnServerInterfaceDownloadableConfig.h:174
	int32_t miIdleTimeOut;

	// BrnServerInterfaceDownloadableConfig.h:175
	int32_t miSearchQueryTimeInterval;

	// BrnServerInterfaceDownloadableConfig.h:176
	int32_t miNatTestPacketTimeout;

	// BrnServerInterfaceDownloadableConfig.h:177
	int32_t miTOSBufferSize;

	// BrnServerInterfaceDownloadableConfig.h:178
	int32_t miNewsBufferSize;

	// BrnServerInterfaceDownloadableConfig.h:179
	float32_t mfMinSyncingTime;

	// BrnServerInterfaceDownloadableConfig.h:180
	float32_t mfMaxSyncingTime;

	// BrnServerInterfaceDownloadableConfig.h:181
	float32_t mfWaitForStartTime;

	// BrnServerInterfaceDownloadableConfig.h:182
	float32_t mfTimeToWaitForSilentClientReady;

	// BrnServerInterfaceDownloadableConfig.h:183
	float32_t mfTimeToWaitForCommunicatingClientReady;

	// BrnServerInterfaceDownloadableConfig.h:184
	float32_t mfTimeGapToLeaveBeforeStartTime;

	// BrnServerInterfaceDownloadableConfig.h:185
	float32_t mfTimeBetweenStatChecks;

	// BrnServerInterfaceDownloadableConfig.h:186
	float32_t mfTimeBetweenRoadRulesUploads;

	// BrnServerInterfaceDownloadableConfig.h:187
	float32_t mfTimeBetweenRoadRulesDownloads;

	// BrnServerInterfaceDownloadableConfig.h:188
	float32_t mfTimeUntilRetryAfterFailedBuddyUpload;

	// BrnServerInterfaceDownloadableConfig.h:189
	float32_t mfTimeBetweenOfflineProgressionUpload;

	// BrnServerInterfaceDownloadableConfig.h:190
	bool mbDoLogOffOnExitOnline;

public:
	// BrnServerInterfaceDownloadableConfig.cpp:59
	virtual void Construct();

	// BrnServerInterfaceDownloadableConfig.cpp:98
	virtual void Destruct();

	// BrnServerInterfaceDownloadableConfig.cpp:115
	virtual bool Prepare(CgsNetwork::ServerInterface *);

	// BrnServerInterfaceDownloadableConfig.cpp:159
	virtual bool Release();

	// BrnServerInterfaceDownloadableConfig.cpp:203
	void GetConfigDataFromConf();

	// BrnServerInterfaceDownloadableConfig.cpp:221
	void GetConfigDataFromNews(int32_t);

	// BrnServerInterfaceDownloadableConfig.h:211
	bool LogOffOnExitOnline();

	// BrnServerInterfaceDownloadableConfig.h:228
	int32_t IdleTimeOut();

	// BrnServerInterfaceDownloadableConfig.h:245
	int32_t SearchQueryTimeInterval();

	// BrnServerInterfaceDownloadableConfig.h:262
	int32_t NatTestPacketTimeout();

	// BrnServerInterfaceDownloadableConfig.h:279
	int32_t TOSBufferSize();

	// BrnServerInterfaceDownloadableConfig.h:296
	int32_t NewsBufferSize();

	// BrnServerInterfaceDownloadableConfig.h:313
	float32_t MinSyncTime();

	// BrnServerInterfaceDownloadableConfig.h:330
	float32_t MaxSyncTime();

	// BrnServerInterfaceDownloadableConfig.h:347
	float32_t WaitForStartTime();

	// BrnServerInterfaceDownloadableConfig.h:364
	float32_t TimeToWaitForSilentClientReady();

	// BrnServerInterfaceDownloadableConfig.h:381
	float32_t TimeToWaitForCommunicatingClientReady();

	// BrnServerInterfaceDownloadableConfig.h:398
	float32_t TimeGapBeforeStartTime();

	// BrnServerInterfaceDownloadableConfig.h:415
	const char * TelemetryFiltersFirstUse();

	// BrnServerInterfaceDownloadableConfig.h:432
	const char * TelemetryFiltersNormalUse();

	// BrnServerInterfaceDownloadableConfig.h:449
	const float32_t TimeTillStatsExpire();

	// BrnServerInterfaceDownloadableConfig.h:466
	const float32_t TimeBetweenRoadRulesUploads();

	// BrnServerInterfaceDownloadableConfig.h:483
	const float32_t TimeBetweenRoadRulesDownloads();

	// BrnServerInterfaceDownloadableConfig.h:500
	const float32_t TimeUntilRetryAfterFailedBuddyUpload();

	// BrnServerInterfaceDownloadableConfig.h:517
	const float32_t TimeBetweenOfflineProgressionUpload();

	// BrnServerInterfaceDownloadableConfig.cpp:236
	bool IsGamertagInFeverList(const char *);

	// BrnServerInterfaceDownloadableConfig.cpp:270
	const char * GetTelemetryDisabledList();

	virtual void ~BrnServerInterfaceDownloadableConfig();

}

// BrnServerInterfaceDownloadableConfig.h:56
void BrnNetwork::BrnServerInterfaceDownloadableConfig::~BrnServerInterfaceDownloadableConfig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct BrnServerInterfaceDownloadableConfig {
	public:
		virtual ~BrnServerInterfaceDownloadableConfig();

		BrnServerInterfaceDownloadableConfig();

	private:
		// BrnServerInterfaceDownloadableConfig.h:166
		extern const int32_t KI_MAX_ELEMENTS_IN_MEMADDR_LOOKUP = 19;

		// BrnServerInterfaceDownloadableConfig.h:167
		extern const int32_t KI_TELEMETRY_FILTERS_MAX_LENGTH = 256;

	}

}

// BrnServerInterfaceDownloadableConfig.h:56
void BrnNetwork::BrnServerInterfaceDownloadableConfig::BrnServerInterfaceDownloadableConfig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

