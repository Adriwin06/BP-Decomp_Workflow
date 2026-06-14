// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStatsManager {
		// BrnNetworkPlayerStatsManager.h:69
		enum EStatsStatus {
			E_STATS_STATUS_UNPREPARED = 0,
			E_STATS_STATUS_IDLE = 1,
			E_STATS_STATUS_PROCESSING_EVENT = 2,
			E_STATS_STATUS_DOWNLOADING_VIEWS = 3,
			E_STATS_STATUS_SELECTING_VIEW = 4,
			E_STATS_STATUS_DOWNLOADING_STATS = 5,
			E_STATS_STATUS_UPLOADING_FREE_BURN_STATS = 6,
			E_STATS_STATUS_OFFLINE_PROGRESSION = 7,
			E_STATS_STATUS_COUNT = 8,
		}

		// BrnNetworkPlayerStatsManager.h:194
		struct StatsUpdateEntry {
			// BrnNetworkPlayerStatsManager.h:196
			BrnNetwork::StatsUpdateMessage mSendMessage;

			// BrnNetworkPlayerStatsManager.h:197
			BrnNetwork::StatsUpdateMessage mRecieveMessage;

			// BrnNetworkPlayerStatsManager.h:198
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkPlayerStatsManager.h:199
			bool mbOutOfDate;

		}

	}

}

// BrnNetworkPlayerStatsManager.h:66
struct BrnNetwork::NetworkPlayerStatsManager {
private:
	// BrnNetworkPlayerStatsManager.h:202
	extern const int32_t KI_STATS_EVENT_QUEUE_BUFFER_SIZE = 32;

	// BrnNetworkPlayerStatsManager.h:205
	FifoQueue<BrnNetwork::StatsRequestEvent,32> mEventQueue;

	// BrnNetworkPlayerStatsManager.h:207
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry[7] maStatsUpdateEntry;

	// BrnNetworkPlayerStatsManager.h:209
	StatsRequestEvent mCurrentEventBeingProcessed;

	// BrnNetworkPlayerStatsManager.h:210
	NetworkPlayerStatsResults mPlayerStatsCache;

	// BrnNetworkPlayerStatsManager.h:211
	OnlineGameResults mBufferedOnlineStats;

	// BrnNetworkPlayerStatsManager.h:212
	NetworkInOfflineProgression mBufferedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:214
	Time mTimeSinceUploadedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkPlayerStatsManager.h:217
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsManager.h:218
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkPlayerStatsManager.h:219
	CgsNetwork::ServerInterfacePlayerInfo * mpServerInterfacePlayerInfo;

	// BrnNetworkPlayerStatsManager.h:221
	BrnNetwork::NetworkPlayerStatsManager::EStatsStatus meCurrentStatus;

	// BrnNetworkPlayerStatsManager.h:222
	int32_t miCachedNumberOfChallegesCompleted;

	// BrnNetworkPlayerStatsManager.h:224
	bool mbWaitingToUploadStats;

	// BrnNetworkPlayerStatsManager.h:225
	bool mbWaitingToUploadOfflineProgress;

	// BrnNetworkPlayerStatsManager.h:226
	bool mbWaitingForOfflineProgressFromGamestate;

public:
	// BrnNetworkPlayerStatsManager.h:91
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkPlayerStatsManager.h:95
	bool Prepare();

	// BrnNetworkPlayerStatsManager.h:100
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:105
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkPlayerStatsManager.h:109
	bool Release();

	// BrnNetworkPlayerStatsManager.h:113
	void Destruct();

	// BrnNetworkPlayerStatsManager.h:118
	void AddEvent(const StatsRequestEvent *);

	// BrnNetworkPlayerStatsManager.h:123
	const NetworkPlayerStats * GetPlayerStatsByName(const char *);

	// BrnNetworkPlayerStatsManager.h:128
	const NetworkPlayerStats * GetPlayerStatsByID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:132
	const NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:137
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:142
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:147
	void RequestPlayerStats(const char *);

	// BrnNetworkPlayerStatsManager.h:151
	void OnGameStart();

	// BrnNetworkPlayerStatsManager.h:156
	void HandleGameResults(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:161
	void HandleFreeburnChallengeEvent(const NetworkInFreeburnChallengeEvent *);

	// BrnNetworkPlayerStatsManager.h:166
	void ValidateQueueAndPostGettingStatsEvents(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:171
	void UploadFreeBurnLobbyStats(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:176
	void UploadOfflineProgression(const NetworkInOfflineProgression *);

	// BrnNetworkPlayerStatsManager.h:180
	void Disconnected();

	// BrnNetworkPlayerStatsManager.h:184
	void HandleNewNumberOfRivals();

	// BrnNetworkPlayerStatsManager.h:189
	void HandleNewNumberOfAchievements(int32_t);

private:
	// BrnNetworkPlayerStatsManager.h:231
	void CopyEvents(const StatsInputInterface::StatsInputQueue *);

	// BrnNetworkPlayerStatsManager.h:236
	void AddEventFromNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:241
	void CopyResultsToOutputBuffer(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:245
	void ProcessResults();

	// BrnNetworkPlayerStatsManager.h:250
	bool CheckForAndHandleServerErrors(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:254
	bool CopyNextValidEventOutOfQueue();

	// BrnNetworkPlayerStatsManager.h:259
	bool ServerBusy(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:264
	const char * GetPlayerNameFromID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:269
	bool IsThisLocalPlayer(const char *);

	// BrnNetworkPlayerStatsManager.h:273
	NetworkPlayerStats * GetNonConstLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:277
	void ClearAllMessaage();

	// BrnNetworkPlayerStatsManager.h:282
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * GetStatsUpdateEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:286
	void MarkNeedsUpdatingFlagInAllPlayers();

	// BrnNetworkPlayerStatsManager.h:290
	void SendAndRecieveUpdateMessages();

	// BrnNetworkPlayerStatsManager.h:299
	void UpdatePlayersStats(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, int32_t, int32_t);

	// BrnNetworkPlayerStatsManager.h:305
	void UpdateLocalPlayersStat(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t);

	// BrnNetworkPlayerStatsManager.h:309
	void CheckForLocalPlayerTakedowns();

}

// BrnNetworkPlayerStatsManager.h:202
extern const int32_t KI_STATS_EVENT_QUEUE_BUFFER_SIZE = 32;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStatsManager {
		// BrnNetworkPlayerStatsManager.h:69
		enum EStatsStatus {
			E_STATS_STATUS_UNPREPARED = 0,
			E_STATS_STATUS_IDLE = 1,
			E_STATS_STATUS_PROCESSING_EVENT = 2,
			E_STATS_STATUS_DOWNLOADING_VIEWS = 3,
			E_STATS_STATUS_SELECTING_VIEW = 4,
			E_STATS_STATUS_DOWNLOADING_STATS = 5,
			E_STATS_STATUS_UPLOADING_FREE_BURN_STATS = 6,
			E_STATS_STATUS_OFFLINE_PROGRESSION = 7,
			E_STATS_STATUS_COUNT = 8,
		}

		// BrnNetworkPlayerStatsManager.h:194
		struct StatsUpdateEntry {
			// BrnNetworkPlayerStatsManager.h:196
			BrnNetwork::StatsUpdateMessage mSendMessage;

			// BrnNetworkPlayerStatsManager.h:197
			BrnNetwork::StatsUpdateMessage mRecieveMessage;

			// BrnNetworkPlayerStatsManager.h:198
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkPlayerStatsManager.h:199
			bool mbOutOfDate;

		}

	}

}

// BrnNetworkPlayerStatsManager.h:66
struct BrnNetwork::NetworkPlayerStatsManager {
private:
	// BrnNetworkPlayerStatsManager.h:202
	extern const int32_t KI_STATS_EVENT_QUEUE_BUFFER_SIZE = 32;

	// BrnNetworkPlayerStatsManager.h:205
	FifoQueue<BrnNetwork::StatsRequestEvent,32> mEventQueue;

	// BrnNetworkPlayerStatsManager.h:207
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry[7] maStatsUpdateEntry;

	// BrnNetworkPlayerStatsManager.h:209
	StatsRequestEvent mCurrentEventBeingProcessed;

	// BrnNetworkPlayerStatsManager.h:210
	NetworkPlayerStatsResults mPlayerStatsCache;

	// BrnNetworkPlayerStatsManager.h:211
	OnlineGameResults mBufferedOnlineStats;

	// BrnNetworkPlayerStatsManager.h:212
	NetworkInOfflineProgression mBufferedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:214
	Time mTimeSinceUploadedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkPlayerStatsManager.h:217
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsManager.h:218
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkPlayerStatsManager.h:219
	CgsNetwork::ServerInterfacePlayerInfo * mpServerInterfacePlayerInfo;

	// BrnNetworkPlayerStatsManager.h:221
	BrnNetwork::NetworkPlayerStatsManager::EStatsStatus meCurrentStatus;

	// BrnNetworkPlayerStatsManager.h:222
	int32_t miCachedNumberOfChallegesCompleted;

	// BrnNetworkPlayerStatsManager.h:224
	bool mbWaitingToUploadStats;

	// BrnNetworkPlayerStatsManager.h:225
	bool mbWaitingToUploadOfflineProgress;

	// BrnNetworkPlayerStatsManager.h:226
	bool mbWaitingForOfflineProgressFromGamestate;

public:
	// BrnNetworkPlayerStatsManager.h:91
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkPlayerStatsManager.h:95
	bool Prepare();

	// BrnNetworkPlayerStatsManager.h:100
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:105
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkPlayerStatsManager.h:109
	bool Release();

	// BrnNetworkPlayerStatsManager.h:113
	void Destruct();

	// BrnNetworkPlayerStatsManager.h:118
	void AddEvent(const StatsRequestEvent *);

	// BrnNetworkPlayerStatsManager.h:123
	const NetworkPlayerStats * GetPlayerStatsByName(const char *);

	// BrnNetworkPlayerStatsManager.h:128
	const NetworkPlayerStats * GetPlayerStatsByID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:132
	const NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:137
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:142
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:147
	void RequestPlayerStats(const char *);

	// BrnNetworkPlayerStatsManager.h:151
	void OnGameStart();

	// BrnNetworkPlayerStatsManager.h:156
	void HandleGameResults(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:161
	void HandleFreeburnChallengeEvent(const NetworkInFreeburnChallengeEvent *);

	// BrnNetworkPlayerStatsManager.h:166
	void ValidateQueueAndPostGettingStatsEvents(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:171
	void UploadFreeBurnLobbyStats(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:176
	void UploadOfflineProgression(const NetworkInOfflineProgression *);

	// BrnNetworkPlayerStatsManager.h:180
	void Disconnected();

	// BrnNetworkPlayerStatsManager.h:184
	void HandleNewNumberOfRivals();

	// BrnNetworkPlayerStatsManager.h:189
	void HandleNewNumberOfAchievements(int32_t);

private:
	// BrnNetworkPlayerStatsManager.h:231
	void CopyEvents(const StatsInputInterface::StatsInputQueue *);

	// BrnNetworkPlayerStatsManager.h:236
	void AddEventFromNetworkPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:241
	void CopyResultsToOutputBuffer(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:245
	void ProcessResults();

	// BrnNetworkPlayerStatsManager.h:250
	bool CheckForAndHandleServerErrors(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:254
	bool CopyNextValidEventOutOfQueue();

	// BrnNetworkPlayerStatsManager.h:259
	bool ServerBusy(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:264
	const char * GetPlayerNameFromID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:269
	bool IsThisLocalPlayer(const char *);

	// BrnNetworkPlayerStatsManager.h:273
	NetworkPlayerStats * GetNonConstLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:277
	void ClearAllMessaage();

	// BrnNetworkPlayerStatsManager.h:282
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * GetStatsUpdateEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:286
	void MarkNeedsUpdatingFlagInAllPlayers();

	// BrnNetworkPlayerStatsManager.h:290
	void SendAndRecieveUpdateMessages();

	// BrnNetworkPlayerStatsManager.h:299
	void UpdatePlayersStats(GuiEventNetworkLaunching::NetworkPlayerID, int32_t, int32_t, int32_t, int32_t);

	// BrnNetworkPlayerStatsManager.h:305
	void UpdateLocalPlayersStat(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t);

	// BrnNetworkPlayerStatsManager.h:309
	void CheckForLocalPlayerTakedowns();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStatsManager {
		// BrnNetworkPlayerStatsManager.h:69
		enum EStatsStatus {
			E_STATS_STATUS_UNPREPARED = 0,
			E_STATS_STATUS_IDLE = 1,
			E_STATS_STATUS_PROCESSING_EVENT = 2,
			E_STATS_STATUS_DOWNLOADING_VIEWS = 3,
			E_STATS_STATUS_SELECTING_VIEW = 4,
			E_STATS_STATUS_DOWNLOADING_STATS = 5,
			E_STATS_STATUS_UPLOADING_FREE_BURN_STATS = 6,
			E_STATS_STATUS_OFFLINE_PROGRESSION = 7,
			E_STATS_STATUS_COUNT = 8,
		}

		// BrnNetworkPlayerStatsManager.h:194
		struct StatsUpdateEntry {
			// BrnNetworkPlayerStatsManager.h:196
			BrnNetwork::StatsUpdateMessage mSendMessage;

			// BrnNetworkPlayerStatsManager.h:197
			BrnNetwork::StatsUpdateMessage mRecieveMessage;

			// BrnNetworkPlayerStatsManager.h:198
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkPlayerStatsManager.h:199
			bool mbOutOfDate;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStatsManager {
		// BrnNetworkPlayerStatsManager.h:69
		enum EStatsStatus {
			E_STATS_STATUS_UNPREPARED = 0,
			E_STATS_STATUS_IDLE = 1,
			E_STATS_STATUS_PROCESSING_EVENT = 2,
			E_STATS_STATUS_DOWNLOADING_VIEWS = 3,
			E_STATS_STATUS_SELECTING_VIEW = 4,
			E_STATS_STATUS_DOWNLOADING_STATS = 5,
			E_STATS_STATUS_UPLOADING_FREE_BURN_STATS = 6,
			E_STATS_STATUS_OFFLINE_PROGRESSION = 7,
			E_STATS_STATUS_COUNT = 8,
		}

		// BrnNetworkPlayerStatsManager.h:194
		struct StatsUpdateEntry {
			// BrnNetworkPlayerStatsManager.h:196
			BrnNetwork::StatsUpdateMessage mSendMessage;

			// BrnNetworkPlayerStatsManager.h:197
			BrnNetwork::StatsUpdateMessage mRecieveMessage;

			// BrnNetworkPlayerStatsManager.h:198
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkPlayerStatsManager.h:199
			bool mbOutOfDate;

		}

	}

}

// BrnNetworkPlayerStatsManager.h:66
struct BrnNetwork::NetworkPlayerStatsManager {
private:
	// BrnNetworkPlayerStatsManager.h:202
	extern const int32_t KI_STATS_EVENT_QUEUE_BUFFER_SIZE = 32;

	// BrnNetworkPlayerStatsManager.h:205
	FifoQueue<BrnNetwork::StatsRequestEvent,32> mEventQueue;

	// BrnNetworkPlayerStatsManager.h:207
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry[7] maStatsUpdateEntry;

	// BrnNetworkPlayerStatsManager.h:209
	StatsRequestEvent mCurrentEventBeingProcessed;

	// BrnNetworkPlayerStatsManager.h:210
	NetworkPlayerStatsResults mPlayerStatsCache;

	// BrnNetworkPlayerStatsManager.h:211
	OnlineGameResults mBufferedOnlineStats;

	// BrnNetworkPlayerStatsManager.h:212
	NetworkInOfflineProgression mBufferedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:214
	Time mTimeSinceUploadedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkPlayerStatsManager.h:217
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsManager.h:218
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkPlayerStatsManager.h:219
	CgsNetwork::ServerInterfacePlayerInfo * mpServerInterfacePlayerInfo;

	// BrnNetworkPlayerStatsManager.h:221
	BrnNetwork::NetworkPlayerStatsManager::EStatsStatus meCurrentStatus;

	// BrnNetworkPlayerStatsManager.h:222
	int32_t miCachedNumberOfChallegesCompleted;

	// BrnNetworkPlayerStatsManager.h:224
	bool mbWaitingToUploadStats;

	// BrnNetworkPlayerStatsManager.h:225
	bool mbWaitingToUploadOfflineProgress;

	// BrnNetworkPlayerStatsManager.h:226
	bool mbWaitingForOfflineProgressFromGamestate;

public:
	// BrnNetworkPlayerStatsManager.h:91
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkPlayerStatsManager.h:95
	bool Prepare();

	// BrnNetworkPlayerStatsManager.h:100
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:105
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkPlayerStatsManager.h:109
	bool Release();

	// BrnNetworkPlayerStatsManager.h:113
	void Destruct();

	// BrnNetworkPlayerStatsManager.h:118
	void AddEvent(const StatsRequestEvent *);

	// BrnNetworkPlayerStatsManager.h:123
	const NetworkPlayerStats * GetPlayerStatsByName(const char *);

	// BrnNetworkPlayerStatsManager.h:128
	const NetworkPlayerStats * GetPlayerStatsByID(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:132
	const NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:137
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:142
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:147
	void RequestPlayerStats(const char *);

	// BrnNetworkPlayerStatsManager.h:151
	void OnGameStart();

	// BrnNetworkPlayerStatsManager.h:156
	void HandleGameResults(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:161
	void HandleFreeburnChallengeEvent(const NetworkInFreeburnChallengeEvent *);

	// BrnNetworkPlayerStatsManager.h:166
	void ValidateQueueAndPostGettingStatsEvents(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:171
	void UploadFreeBurnLobbyStats(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:176
	void UploadOfflineProgression(const NetworkInOfflineProgression *);

	// BrnNetworkPlayerStatsManager.h:180
	void Disconnected();

	// BrnNetworkPlayerStatsManager.h:184
	void HandleNewNumberOfRivals();

	// BrnNetworkPlayerStatsManager.h:189
	void HandleNewNumberOfAchievements(int32_t);

private:
	// BrnNetworkPlayerStatsManager.h:231
	void CopyEvents(const StatsInputInterface::StatsInputQueue *);

	// BrnNetworkPlayerStatsManager.h:236
	void AddEventFromNetworkPlayerID(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:241
	void CopyResultsToOutputBuffer(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:245
	void ProcessResults();

	// BrnNetworkPlayerStatsManager.h:250
	// Declaration
	bool CheckForAndHandleServerErrors(CgsNetwork::EComponents) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayerStatsManager.cpp:452
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayerStatsManager.h:254
	bool CopyNextValidEventOutOfQueue();

	// BrnNetworkPlayerStatsManager.h:259
	bool ServerBusy(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:264
	const char * GetPlayerNameFromID(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:269
	bool IsThisLocalPlayer(const char *);

	// BrnNetworkPlayerStatsManager.h:273
	NetworkPlayerStats * GetNonConstLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:277
	void ClearAllMessaage();

	// BrnNetworkPlayerStatsManager.h:282
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * GetStatsUpdateEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:286
	void MarkNeedsUpdatingFlagInAllPlayers();

	// BrnNetworkPlayerStatsManager.h:290
	void SendAndRecieveUpdateMessages();

	// BrnNetworkPlayerStatsManager.h:299
	// Declaration
	void UpdatePlayersStats(AggressiveMoveData::NetworkPlayerID, int32_t, int32_t, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayerStatsManager.cpp:1245
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayerStatsManager.h:305
	void UpdateLocalPlayersStat(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t);

	// BrnNetworkPlayerStatsManager.h:309
	void CheckForLocalPlayerTakedowns();

}

// BrnNetworkPlayerStatsManager.h:66
struct BrnNetwork::NetworkPlayerStatsManager {
private:
	// BrnNetworkPlayerStatsManager.h:202
	extern const int32_t KI_STATS_EVENT_QUEUE_BUFFER_SIZE = 32;

	// BrnNetworkPlayerStatsManager.h:205
	FifoQueue<BrnNetwork::StatsRequestEvent,32> mEventQueue;

	// BrnNetworkPlayerStatsManager.h:207
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry[7] maStatsUpdateEntry;

	// BrnNetworkPlayerStatsManager.h:209
	StatsRequestEvent mCurrentEventBeingProcessed;

	// BrnNetworkPlayerStatsManager.h:210
	NetworkPlayerStatsResults mPlayerStatsCache;

	// BrnNetworkPlayerStatsManager.h:211
	OnlineGameResults mBufferedOnlineStats;

	// BrnNetworkPlayerStatsManager.h:212
	NetworkInOfflineProgression mBufferedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:214
	Time mTimeSinceUploadedOfflineProgression;

	// BrnNetworkPlayerStatsManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkPlayerStatsManager.h:217
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsManager.h:218
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkPlayerStatsManager.h:219
	CgsNetwork::ServerInterfacePlayerInfo * mpServerInterfacePlayerInfo;

	// BrnNetworkPlayerStatsManager.h:221
	BrnNetwork::NetworkPlayerStatsManager::EStatsStatus meCurrentStatus;

	// BrnNetworkPlayerStatsManager.h:222
	int32_t miCachedNumberOfChallegesCompleted;

	// BrnNetworkPlayerStatsManager.h:224
	bool mbWaitingToUploadStats;

	// BrnNetworkPlayerStatsManager.h:225
	bool mbWaitingToUploadOfflineProgress;

	// BrnNetworkPlayerStatsManager.h:226
	bool mbWaitingForOfflineProgressFromGamestate;

public:
	// BrnNetworkPlayerStatsManager.h:91
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkPlayerStatsManager.h:95
	bool Prepare();

	// BrnNetworkPlayerStatsManager.h:100
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:105
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnNetworkPlayerStatsManager.h:109
	bool Release();

	// BrnNetworkPlayerStatsManager.h:113
	void Destruct();

	// BrnNetworkPlayerStatsManager.h:118
	void AddEvent(const StatsRequestEvent *);

	// BrnNetworkPlayerStatsManager.h:123
	const NetworkPlayerStats * GetPlayerStatsByName(const char *);

	// BrnNetworkPlayerStatsManager.h:128
	const NetworkPlayerStats * GetPlayerStatsByID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:132
	const NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:137
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:142
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:147
	void RequestPlayerStats(const char *);

	// BrnNetworkPlayerStatsManager.h:151
	void OnGameStart();

	// BrnNetworkPlayerStatsManager.h:156
	void HandleGameResults(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:161
	void HandleFreeburnChallengeEvent(const NetworkInFreeburnChallengeEvent *);

	// BrnNetworkPlayerStatsManager.h:166
	void ValidateQueueAndPostGettingStatsEvents(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:171
	void UploadFreeBurnLobbyStats(const OnlineGameResults *);

	// BrnNetworkPlayerStatsManager.h:176
	void UploadOfflineProgression(const NetworkInOfflineProgression *);

	// BrnNetworkPlayerStatsManager.h:180
	void Disconnected();

	// BrnNetworkPlayerStatsManager.h:184
	void HandleNewNumberOfRivals();

	// BrnNetworkPlayerStatsManager.h:189
	void HandleNewNumberOfAchievements(int32_t);

private:
	// BrnNetworkPlayerStatsManager.h:231
	void CopyEvents(const StatsInputInterface::StatsInputQueue *);

	// BrnNetworkPlayerStatsManager.h:236
	void AddEventFromNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:241
	void CopyResultsToOutputBuffer(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkPlayerStatsManager.h:245
	void ProcessResults();

	// BrnNetworkPlayerStatsManager.h:250
	bool CheckForAndHandleServerErrors(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:254
	bool CopyNextValidEventOutOfQueue();

	// BrnNetworkPlayerStatsManager.h:259
	bool ServerBusy(CgsNetwork::EComponents);

	// BrnNetworkPlayerStatsManager.h:264
	const char * GetPlayerNameFromID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:269
	bool IsThisLocalPlayer(const char *);

	// BrnNetworkPlayerStatsManager.h:273
	NetworkPlayerStats * GetNonConstLocalPlayerStats();

	// BrnNetworkPlayerStatsManager.h:277
	void ClearAllMessaage();

	// BrnNetworkPlayerStatsManager.h:282
	BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * GetStatsUpdateEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsManager.h:286
	void MarkNeedsUpdatingFlagInAllPlayers();

	// BrnNetworkPlayerStatsManager.h:290
	void SendAndRecieveUpdateMessages();

	// BrnNetworkPlayerStatsManager.h:299
	void UpdatePlayersStats(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, int32_t, int32_t);

	// BrnNetworkPlayerStatsManager.h:305
	void UpdateLocalPlayersStat(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t);

	// BrnNetworkPlayerStatsManager.h:309
	void CheckForLocalPlayerTakedowns();

}

