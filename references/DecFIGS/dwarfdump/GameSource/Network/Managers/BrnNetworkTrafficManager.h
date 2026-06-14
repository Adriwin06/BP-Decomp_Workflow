// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			RoadRulesRecvData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

}

// BrnNetworkTrafficManager.h:69
struct BrnNetwork::TrafficManager {
private:
	// BrnNetworkTrafficManager.h:195
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_50HZ = 50;

	// BrnNetworkTrafficManager.h:196
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_60HZ = 60;

	// BrnNetworkTrafficManager.h:197
	extern const int32_t KI_MAX_BUFFERED_CRASHING_TRAFFIC_MESSAGES = 35;

	// BrnNetworkTrafficManager.h:199
	BrnNetwork::TrafficManager::BufferedMessage[35] maBufferedCrashingTrafficMessages;

	// BrnNetworkTrafficManager.h:200
	BrnNetwork::TrafficManager::TrafficSyncData[7] maTrafficData;

	// BrnNetworkTrafficManager.h:201
	BrnNetwork::TrafficManager::BufferedRestartMessage mBufferedRestartTrafficMessage;

	// BrnNetworkTrafficManager.h:202
	int32_t miNumMessagesBuffered;

	// BrnNetworkTrafficManager.h:203
	int32_t miNumRestartMessagesBuffered;

	// BrnNetworkTrafficManager.h:204
	uint16_t mu16LastBufferReadFrame;

	// BrnNetworkTrafficManager.h:205
	uint16_t mu16LastTrafficResetFrame;

	// BrnNetworkTrafficManager.h:206
	uint16_t mu16NumFramesSinceLastReset;

	// BrnNetworkTrafficManager.h:207
	BitArray<7u> mPendingTrafficResetBitArray;

	// BrnNetworkTrafficManager.h:208
	bool mbHasRoundStarted;

	// BrnNetworkTrafficManager.h:209
	bool mbRestartNetworkTraffic;

	// BrnNetworkTrafficManager.h:210
	bool mbSuppressTrafficRestart;

	// BrnNetworkTrafficManager.h:211
	bool mbSuppressingHullSyncsUntilReset;

	// BrnNetworkTrafficManager.h:212
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkTrafficManager.h:213
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkTrafficManager.h:214
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkTrafficManager.h:216
	bool mbSyncingTime;

	// BrnNetworkTrafficManager.h:388
	extern const int32_t KI_NUM_TRAFFIC_HASH_TO_STORE = 128;

	// BrnNetworkTrafficManager.h:389
	extern const int32_t KI_UPDATE_FRAME_WRAP_MARGIN = 10000;

	// BrnNetworkTrafficManager.h:395
	uint16_t muLastHashUpdate10HzFrame;

	// BrnNetworkTrafficManager.h:396
	uint16_t muLastTrafficHash;

	// BrnNetworkTrafficManager.h:397
	bool mbLastHashDataValid;

	// BrnNetworkTrafficManager.h:399
	FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128> maStoredTrafficHashes;

	// BrnNetworkTrafficManager.h:400
	uint16_t muCurrentTrafficUpdateFrame;

	// BrnNetworkTrafficManager.h:401
	bool mbHasTrafficDiverged;

	// BrnNetworkTrafficManager.h:402
	bool mbIsThisMachineInThePast;

	// BrnNetworkTrafficManager.h:403
	bool mbShowTrafficDivergence;

	// BrnNetworkTrafficManager.h:404
	int32_t miInThePastAmount;

public:
	// BrnNetworkTrafficManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkTrafficManager.h:81
	bool Prepare();

	// BrnNetworkTrafficManager.h:85
	bool Release();

	// BrnNetworkTrafficManager.h:89
	void Destruct();

	// BrnNetworkTrafficManager.h:94
	void Update(bool);

	// BrnNetworkTrafficManager.h:99
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:104
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:108
	void Disconnected();

	// BrnNetworkTrafficManager.h:112
	void ClearCrashingTraffic();

	// BrnNetworkTrafficManager.h:116
	void ClearHullSyncData();

	// BrnNetworkTrafficManager.h:120
	void OnGameLaunching();

	// BrnNetworkTrafficManager.h:124
	void OnGameStart();

	// BrnNetworkTrafficManager.h:129
	void OnRoundStart(bool);

	// BrnNetworkTrafficManager.h:133
	void OnRoundFinish();

	// BrnNetworkTrafficManager.h:137
	void OnLeaveGame();

	// BrnNetworkTrafficManager.h:142
	void SuppressTrafficRestart(bool);

	// BrnNetworkTrafficManager.h:147
	void RestartNetworkTraffic(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:151
	void RestartNetworkTrafficForHost();

private:
	// BrnNetworkTrafficManager.h:220
	void ResetData();

	// BrnNetworkTrafficManager.h:225
	BrnNetwork::TrafficManager::TrafficSyncData * GetTrafficSyncDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:230
	int32_t GetIndexOfPlayerInTrafficData(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:236
	void RegisterMessages(CgsNetwork::NetworkPlayer *, BrnNetwork::TrafficManager::TrafficSyncData *);

	// BrnNetworkTrafficManager.h:240
	void UpdateHullSync();

	// BrnNetworkTrafficManager.h:247
	void HandleHullSyncMessage(EActiveRaceCarIndex, uint16_t, int32_t);

	// BrnNetworkTrafficManager.h:252
	void UpdateCrashingTraffic(bool);

	// BrnNetworkTrafficManager.h:257
	void SendCrashingTrafficMessages(bool);

	// BrnNetworkTrafficManager.h:263
	bool GetCrashingTrafficData(CrashingTrafficData *, int32_t *);

	// BrnNetworkTrafficManager.h:267
	void ReceiveCrashingTrafficMessages();

	// BrnNetworkTrafficManager.h:275
	void StoreBufferedMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::CrashingTrafficMessage *, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:280
	BrnNetwork::TrafficManager::BufferedMessage * RetrieveBufferedMessage(uint16_t);

	// BrnNetworkTrafficManager.h:287
	uint16_t ConvertReceivedMessageFrameToLocalFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:294
	uint16_t ConvertLocalFrameToReceivedMessageFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:300
	bool IsMessageFromBeforeTrafficReset(uint16_t, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:304
	bool IsTrafficSystemResetPending();

	// BrnNetworkTrafficManager.h:309
	void RemoveBufferedMessage(BrnNetwork::TrafficManager::BufferedMessage *);

	// BrnNetworkTrafficManager.h:314
	void DeleteOutOfDateBufferedMesssages(uint16_t);

	// BrnNetworkTrafficManager.h:318
	void UpdateRestartTraffic();

	// BrnNetworkTrafficManager.h:322
	void OnTrafficRestarted();

	// BrnNetworkTrafficManager.h:326
	void HandleSendingRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:330
	void ProcessBufferedRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:335
	void BufferRestartTrafficMessage(BrnNetwork::TrafficManager::BufferedRestartMessage);

	// BrnNetworkTrafficManager.h:341
	bool IsTrafficRestartRequired(uint16_t *, uint16_t *);

	// BrnNetworkTrafficManager.h:345
	void SendHullSyncMessages();

	// BrnNetworkTrafficManager.h:352
	void _HullSyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:361
	void _HullSyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:368
	void _RestartTrafficMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:377
	void _RestartTrafficMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:410
	void UpdateTrafficHashing(bool);

	// BrnNetworkTrafficManager.h:416
	void StoreTrafficHash(uint16_t, uint16_t);

	// BrnNetworkTrafficManager.h:421
	void SendTrafficHashingMessage(bool);

	// BrnNetworkTrafficManager.h:425
	void ReceiveTrafficHashingMessages();

	// BrnNetworkTrafficManager.h:431
	bool FindHashForFrame(uint16_t, uint16_t *) const;

	// BrnNetworkTrafficManager.h:437
	int32_t CalcWrappedUpdateFrameDifference(int32_t, int32_t) const;

}

// BrnNetworkTrafficManager.h:196
extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_60HZ = 60;

// BrnNetworkTrafficManager.h:197
extern const int32_t KI_MAX_BUFFERED_CRASHING_TRAFFIC_MESSAGES = 35;

// BrnNetworkTrafficManager.h:388
extern const int32_t KI_NUM_TRAFFIC_HASH_TO_STORE = 128;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			GuiEventNetworkLaunching::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

}

// BrnNetworkTrafficManager.h:69
struct BrnNetwork::TrafficManager {
private:
	// BrnNetworkTrafficManager.h:195
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_50HZ = 50;

	// BrnNetworkTrafficManager.h:196
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_60HZ = 60;

	// BrnNetworkTrafficManager.h:197
	extern const int32_t KI_MAX_BUFFERED_CRASHING_TRAFFIC_MESSAGES = 35;

	// BrnNetworkTrafficManager.h:199
	BrnNetwork::TrafficManager::BufferedMessage[35] maBufferedCrashingTrafficMessages;

	// BrnNetworkTrafficManager.h:200
	BrnNetwork::TrafficManager::TrafficSyncData[7] maTrafficData;

	// BrnNetworkTrafficManager.h:201
	BrnNetwork::TrafficManager::BufferedRestartMessage mBufferedRestartTrafficMessage;

	// BrnNetworkTrafficManager.h:202
	int32_t miNumMessagesBuffered;

	// BrnNetworkTrafficManager.h:203
	int32_t miNumRestartMessagesBuffered;

	// BrnNetworkTrafficManager.h:204
	uint16_t mu16LastBufferReadFrame;

	// BrnNetworkTrafficManager.h:205
	uint16_t mu16LastTrafficResetFrame;

	// BrnNetworkTrafficManager.h:206
	uint16_t mu16NumFramesSinceLastReset;

	// BrnNetworkTrafficManager.h:207
	BitArray<7u> mPendingTrafficResetBitArray;

	// BrnNetworkTrafficManager.h:208
	bool mbHasRoundStarted;

	// BrnNetworkTrafficManager.h:209
	bool mbRestartNetworkTraffic;

	// BrnNetworkTrafficManager.h:210
	bool mbSuppressTrafficRestart;

	// BrnNetworkTrafficManager.h:211
	bool mbSuppressingHullSyncsUntilReset;

	// BrnNetworkTrafficManager.h:212
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkTrafficManager.h:213
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkTrafficManager.h:214
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkTrafficManager.h:216
	bool mbSyncingTime;

	// BrnNetworkTrafficManager.h:388
	extern const int32_t KI_NUM_TRAFFIC_HASH_TO_STORE = 128;

	// BrnNetworkTrafficManager.h:389
	extern const int32_t KI_UPDATE_FRAME_WRAP_MARGIN = 10000;

	// BrnNetworkTrafficManager.h:395
	uint16_t muLastHashUpdate10HzFrame;

	// BrnNetworkTrafficManager.h:396
	uint16_t muLastTrafficHash;

	// BrnNetworkTrafficManager.h:397
	bool mbLastHashDataValid;

	// BrnNetworkTrafficManager.h:399
	FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128> maStoredTrafficHashes;

	// BrnNetworkTrafficManager.h:400
	uint16_t muCurrentTrafficUpdateFrame;

	// BrnNetworkTrafficManager.h:401
	bool mbHasTrafficDiverged;

	// BrnNetworkTrafficManager.h:402
	bool mbIsThisMachineInThePast;

	// BrnNetworkTrafficManager.h:403
	bool mbShowTrafficDivergence;

	// BrnNetworkTrafficManager.h:404
	int32_t miInThePastAmount;

public:
	// BrnNetworkTrafficManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkTrafficManager.h:81
	bool Prepare();

	// BrnNetworkTrafficManager.h:85
	bool Release();

	// BrnNetworkTrafficManager.h:89
	void Destruct();

	// BrnNetworkTrafficManager.h:94
	void Update(bool);

	// BrnNetworkTrafficManager.h:99
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:104
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:108
	void Disconnected();

	// BrnNetworkTrafficManager.h:112
	void ClearCrashingTraffic();

	// BrnNetworkTrafficManager.h:116
	void ClearHullSyncData();

	// BrnNetworkTrafficManager.h:120
	void OnGameLaunching();

	// BrnNetworkTrafficManager.h:124
	void OnGameStart();

	// BrnNetworkTrafficManager.h:129
	void OnRoundStart(bool);

	// BrnNetworkTrafficManager.h:133
	void OnRoundFinish();

	// BrnNetworkTrafficManager.h:137
	void OnLeaveGame();

	// BrnNetworkTrafficManager.h:142
	void SuppressTrafficRestart(bool);

	// BrnNetworkTrafficManager.h:147
	void RestartNetworkTraffic(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:151
	void RestartNetworkTrafficForHost();

private:
	// BrnNetworkTrafficManager.h:220
	void ResetData();

	// BrnNetworkTrafficManager.h:225
	BrnNetwork::TrafficManager::TrafficSyncData * GetTrafficSyncDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:230
	int32_t GetIndexOfPlayerInTrafficData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:236
	void RegisterMessages(CgsNetwork::NetworkPlayer *, BrnNetwork::TrafficManager::TrafficSyncData *);

	// BrnNetworkTrafficManager.h:240
	void UpdateHullSync();

	// BrnNetworkTrafficManager.h:247
	void HandleHullSyncMessage(EActiveRaceCarIndex, uint16_t, int32_t);

	// BrnNetworkTrafficManager.h:252
	void UpdateCrashingTraffic(bool);

	// BrnNetworkTrafficManager.h:257
	void SendCrashingTrafficMessages(bool);

	// BrnNetworkTrafficManager.h:263
	bool GetCrashingTrafficData(CrashingTrafficData *, int32_t *);

	// BrnNetworkTrafficManager.h:267
	void ReceiveCrashingTrafficMessages();

	// BrnNetworkTrafficManager.h:275
	void StoreBufferedMessage(GuiEventNetworkLaunching::NetworkPlayerID, BrnNetwork::CrashingTrafficMessage *, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:280
	BrnNetwork::TrafficManager::BufferedMessage * RetrieveBufferedMessage(uint16_t);

	// BrnNetworkTrafficManager.h:287
	uint16_t ConvertReceivedMessageFrameToLocalFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:294
	uint16_t ConvertLocalFrameToReceivedMessageFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:300
	bool IsMessageFromBeforeTrafficReset(uint16_t, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:304
	bool IsTrafficSystemResetPending();

	// BrnNetworkTrafficManager.h:309
	void RemoveBufferedMessage(BrnNetwork::TrafficManager::BufferedMessage *);

	// BrnNetworkTrafficManager.h:314
	void DeleteOutOfDateBufferedMesssages(uint16_t);

	// BrnNetworkTrafficManager.h:318
	void UpdateRestartTraffic();

	// BrnNetworkTrafficManager.h:322
	void OnTrafficRestarted();

	// BrnNetworkTrafficManager.h:326
	void HandleSendingRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:330
	void ProcessBufferedRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:335
	void BufferRestartTrafficMessage(BrnNetwork::TrafficManager::BufferedRestartMessage);

	// BrnNetworkTrafficManager.h:341
	bool IsTrafficRestartRequired(uint16_t *, uint16_t *);

	// BrnNetworkTrafficManager.h:345
	void SendHullSyncMessages();

	// BrnNetworkTrafficManager.h:352
	void _HullSyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:361
	void _HullSyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:368
	void _RestartTrafficMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:377
	void _RestartTrafficMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:410
	void UpdateTrafficHashing(bool);

	// BrnNetworkTrafficManager.h:416
	void StoreTrafficHash(uint16_t, uint16_t);

	// BrnNetworkTrafficManager.h:421
	void SendTrafficHashingMessage(bool);

	// BrnNetworkTrafficManager.h:425
	void ReceiveTrafficHashingMessages();

	// BrnNetworkTrafficManager.h:431
	bool FindHashForFrame(uint16_t, uint16_t *) const;

	// BrnNetworkTrafficManager.h:437
	int32_t CalcWrappedUpdateFrameDifference(int32_t, int32_t) const;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			RoadRulesRecvData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			AggressiveMoveData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

}

// BrnNetworkTrafficManager.h:69
struct BrnNetwork::TrafficManager {
private:
	// BrnNetworkTrafficManager.h:195
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_50HZ = 50;

	// BrnNetworkTrafficManager.h:196
	extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_60HZ = 60;

	// BrnNetworkTrafficManager.h:197
	extern const int32_t KI_MAX_BUFFERED_CRASHING_TRAFFIC_MESSAGES = 35;

	// BrnNetworkTrafficManager.h:199
	BrnNetwork::TrafficManager::BufferedMessage[35] maBufferedCrashingTrafficMessages;

	// BrnNetworkTrafficManager.h:200
	BrnNetwork::TrafficManager::TrafficSyncData[7] maTrafficData;

	// BrnNetworkTrafficManager.h:201
	BrnNetwork::TrafficManager::BufferedRestartMessage mBufferedRestartTrafficMessage;

	// BrnNetworkTrafficManager.h:202
	int32_t miNumMessagesBuffered;

	// BrnNetworkTrafficManager.h:203
	int32_t miNumRestartMessagesBuffered;

	// BrnNetworkTrafficManager.h:204
	uint16_t mu16LastBufferReadFrame;

	// BrnNetworkTrafficManager.h:205
	uint16_t mu16LastTrafficResetFrame;

	// BrnNetworkTrafficManager.h:206
	uint16_t mu16NumFramesSinceLastReset;

	// BrnNetworkTrafficManager.h:207
	BitArray<7u> mPendingTrafficResetBitArray;

	// BrnNetworkTrafficManager.h:208
	bool mbHasRoundStarted;

	// BrnNetworkTrafficManager.h:209
	bool mbRestartNetworkTraffic;

	// BrnNetworkTrafficManager.h:210
	bool mbSuppressTrafficRestart;

	// BrnNetworkTrafficManager.h:211
	bool mbSuppressingHullSyncsUntilReset;

	// BrnNetworkTrafficManager.h:212
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkTrafficManager.h:213
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkTrafficManager.h:214
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkTrafficManager.h:216
	bool mbSyncingTime;

	// BrnNetworkTrafficManager.h:388
	extern const int32_t KI_NUM_TRAFFIC_HASH_TO_STORE = 128;

	// BrnNetworkTrafficManager.h:389
	extern const int32_t KI_UPDATE_FRAME_WRAP_MARGIN = 10000;

	// BrnNetworkTrafficManager.h:395
	uint16_t muLastHashUpdate10HzFrame;

	// BrnNetworkTrafficManager.h:396
	uint16_t muLastTrafficHash;

	// BrnNetworkTrafficManager.h:397
	bool mbLastHashDataValid;

	// BrnNetworkTrafficManager.h:399
	FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128> maStoredTrafficHashes;

	// BrnNetworkTrafficManager.h:400
	uint16_t muCurrentTrafficUpdateFrame;

	// BrnNetworkTrafficManager.h:401
	bool mbHasTrafficDiverged;

	// BrnNetworkTrafficManager.h:402
	bool mbIsThisMachineInThePast;

	// BrnNetworkTrafficManager.h:403
	bool mbShowTrafficDivergence;

	// BrnNetworkTrafficManager.h:404
	int32_t miInThePastAmount;

public:
	// BrnNetworkTrafficManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkTrafficManager.h:81
	bool Prepare();

	// BrnNetworkTrafficManager.h:85
	bool Release();

	// BrnNetworkTrafficManager.h:89
	void Destruct();

	// BrnNetworkTrafficManager.h:94
	void Update(bool);

	// BrnNetworkTrafficManager.h:99
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:104
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:108
	void Disconnected();

	// BrnNetworkTrafficManager.h:112
	void ClearCrashingTraffic();

	// BrnNetworkTrafficManager.h:116
	void ClearHullSyncData();

	// BrnNetworkTrafficManager.h:120
	void OnGameLaunching();

	// BrnNetworkTrafficManager.h:124
	void OnGameStart();

	// BrnNetworkTrafficManager.h:129
	void OnRoundStart(bool);

	// BrnNetworkTrafficManager.h:133
	void OnRoundFinish();

	// BrnNetworkTrafficManager.h:137
	void OnLeaveGame();

	// BrnNetworkTrafficManager.h:142
	// Declaration
	void SuppressTrafficRestart(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:1330
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:147
	void RestartNetworkTraffic(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:151
	void RestartNetworkTrafficForHost();

private:
	// BrnNetworkTrafficManager.h:220
	void ResetData();

	// BrnNetworkTrafficManager.h:225
	BrnNetwork::TrafficManager::TrafficSyncData * GetTrafficSyncDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:230
	int32_t GetIndexOfPlayerInTrafficData(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:236
	void RegisterMessages(CgsNetwork::NetworkPlayer *, BrnNetwork::TrafficManager::TrafficSyncData *);

	// BrnNetworkTrafficManager.h:240
	void UpdateHullSync();

	// BrnNetworkTrafficManager.h:247
	void HandleHullSyncMessage(EActiveRaceCarIndex, uint16_t, int32_t);

	// BrnNetworkTrafficManager.h:252
	void UpdateCrashingTraffic(bool);

	// BrnNetworkTrafficManager.h:257
	void SendCrashingTrafficMessages(bool);

	// BrnNetworkTrafficManager.h:263
	bool GetCrashingTrafficData(CrashingTrafficData *, int32_t *);

	// BrnNetworkTrafficManager.h:267
	void ReceiveCrashingTrafficMessages();

	// BrnNetworkTrafficManager.h:275
	// Declaration
	void StoreBufferedMessage(AggressiveMoveData::NetworkPlayerID, BrnNetwork::CrashingTrafficMessage *, CgsSystem::EFrameRate, CgsSystem::EFrameRate) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:1680
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:280
	BrnNetwork::TrafficManager::BufferedMessage * RetrieveBufferedMessage(uint16_t);

	// BrnNetworkTrafficManager.h:287
	uint16_t ConvertReceivedMessageFrameToLocalFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:294
	uint16_t ConvertLocalFrameToReceivedMessageFrame(uint16_t, CgsSystem::EFrameRate, CgsSystem::EFrameRate);

	// BrnNetworkTrafficManager.h:300
	bool IsMessageFromBeforeTrafficReset(uint16_t, AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkTrafficManager.h:304
	bool IsTrafficSystemResetPending();

	// BrnNetworkTrafficManager.h:309
	void RemoveBufferedMessage(BrnNetwork::TrafficManager::BufferedMessage *);

	// BrnNetworkTrafficManager.h:314
	void DeleteOutOfDateBufferedMesssages(uint16_t);

	// BrnNetworkTrafficManager.h:318
	void UpdateRestartTraffic();

	// BrnNetworkTrafficManager.h:322
	void OnTrafficRestarted();

	// BrnNetworkTrafficManager.h:326
	void HandleSendingRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:330
	void ProcessBufferedRestartTrafficMessages();

	// BrnNetworkTrafficManager.h:335
	// Declaration
	void BufferRestartTrafficMessage(BrnNetwork::TrafficManager::BufferedRestartMessage) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:1133
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1137
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1139
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1150
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1154
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1156
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1157
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1160
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:1162
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:341
	// Declaration
	bool IsTrafficRestartRequired(uint16_t *, uint16_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:1209
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:345
	void SendHullSyncMessages();

	// BrnNetworkTrafficManager.h:352
	// Declaration
	void _HullSyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:875
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:901
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:361
	// Declaration
	void _HullSyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:925
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:368
	void _RestartTrafficMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkTrafficManager.h:377
	// Declaration
	void _RestartTrafficMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:1314
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:410
	void UpdateTrafficHashing(bool);

	// BrnNetworkTrafficManager.h:416
	void StoreTrafficHash(uint16_t, uint16_t);

	// BrnNetworkTrafficManager.h:421
	void SendTrafficHashingMessage(bool);

	// BrnNetworkTrafficManager.h:425
	// Declaration
	void ReceiveTrafficHashingMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkTrafficManager.cpp:2160
		using namespace CgsDev::Message;

		// BrnNetworkTrafficManager.cpp:2171
		using namespace CgsDev::Message;

	}

	// BrnNetworkTrafficManager.h:431
	bool FindHashForFrame(uint16_t, uint16_t *) const;

	// BrnNetworkTrafficManager.h:437
	int32_t CalcWrappedUpdateFrameDifference(int32_t, int32_t) const;

}

// BrnNetworkTrafficManager.h:195
extern const int32_t KI_REPORT_CRASHING_TRAFFIC_DELAY_50HZ = 50;

// BrnNetworkTrafficManager.h:389
extern const int32_t KI_UPDATE_FRAME_WRAP_MARGIN = 10000;

