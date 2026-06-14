// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkRoadRulesManager {
		// BrnNetworkRoadRulesManager.h:190
		enum ERoadRulesState {
			E_ROAD_RULES_STATE_BOOTING = 0,
			E_ROAD_RULES_STATE_CONNECTING = 1,
			E_ROAD_RULES_STATE_IN_GAME = 2,
			E_ROAD_RULES_STATE_WAIT_TO_DOWNLOAD = 3,
			E_ROAD_RULES_STATE_UPLOADING = 4,
			E_ROAD_RULES_STATE_DOWNLOADING = 5,
			E_ROAD_RULES_STATE_DOWNLOADING_LOCAL = 6,
			E_ROAD_RULES_STATE_COUNT = 7,
		}

		// BrnNetworkRoadRulesManager.h:212
		struct RoadRulesData {
			// BrnNetworkRoadRulesManager.h:214
			BrnNetwork::RoadRulesMessage mRoadRulesMessageSend;

			// BrnNetworkRoadRulesManager.h:215
			BrnNetwork::RoadRulesMessage mRoadRulesMessageRecv;

			// BrnNetworkRoadRulesManager.h:216
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageSend;

			// BrnNetworkRoadRulesManager.h:217
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageRecv;

			// BrnNetworkRoadRulesManager.h:218
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkRoadRulesManager.h:219
			Road::ChallengeIndex mIndexOfNextChallengeToSend;

		}

	}

}

// BrnNetworkRoadRulesManager.h:102
struct BrnNetwork::NetworkRoadRulesManager {
private:
	// BrnNetworkRoadRulesManager.h:222
	extern const int32_t KI_SERVER_KEY_LENGTH = 16;

	// BrnNetworkRoadRulesManager.h:224
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData[7] maRoadRulesData;

	// BrnNetworkRoadRulesManager.h:225
	ChallengePlayerScoreEntry[64] maLocalRoadScoresToUpload;

	// BrnNetworkRoadRulesManager.h:226
	ChallengeData[64] maLocalLobbyScores;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:80
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> RoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:227
	NetworkRoadRulesManager::RoadRulesPersonalBestBuffer mRoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:228
	NetworkToGameStateInterface::RoadRulesReceivedQueue mBufferedRoadRulesRecvQueue;

	// BrnNetworkRoadRulesManager.h:229
	char[16] macRoadRulesServerKey;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:91
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> RoadRulesPBBuffer;

	// BrnNetworkRoadRulesManager.h:230
	NetworkRoadRulesManager::RoadRulesPBBuffer mPersonalBestToSendBuffer;

	// BrnNetworkRoadRulesManager.h:231
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesManager.h:232
	Time mTimeUntilNextResultUpload;

	// BrnNetworkRoadRulesManager.h:233
	Time mTimeUntilNextResultDownload;

	// BrnNetworkRoadRulesManager.h:234
	Time mTimeBetweenRoadRulesDownloadBatches;

	// BrnNetworkRoadRulesManager.h:235
	Road::ChallengeIndex mIndexOfNextChallengeToUpload;

	// BrnNetworkRoadRulesManager.h:236
	Road::ChallengeIndex mIndexOfNextChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:237
	Road::ChallengeIndex mIndexOfNextLocalChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:238
	uint32_t muTimeStampOfLastDownload;

	// BrnNetworkRoadRulesManager.h:239
	int32_t miNumRoadsConsideredForUpload;

	// BrnNetworkRoadRulesManager.h:240
	BrnNetwork::NetworkRoadRulesManager::ERoadRulesState meState;

	// BrnNetworkRoadRulesManager.h:241
	bool mbBufferRoadRulesReceived;

	// BrnNetworkRoadRulesManager.h:242
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkRoadRulesManager.h:243
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkRoadRulesManager.h:244
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkRoadRulesManager.h:245
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkRoadRulesManager.h:246
	bool mbDownloadedLocalScores;

	// BrnNetworkRoadRulesManager.h:247
	bool mbForceOverwriteServerRecords;

	// BrnNetworkRoadRulesManager.h:252
	BrnNetwork::RoadRulesManagerDebugComponent mRoadRulesDebugComponent;

public:
	// BrnNetworkRoadRulesManager.h:107
	void Construct();

	// BrnNetworkRoadRulesManager.h:115
	bool Prepare(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkRoadRulesManager.h:119
	bool Release();

	// BrnNetworkRoadRulesManager.h:123
	void Destruct();

	// BrnNetworkRoadRulesManager.h:130
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t, BrnUpdateSet);

	// BrnNetworkRoadRulesManager.h:136
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, bool);

	// BrnNetworkRoadRulesManager.h:141
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:146
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:150
	void Disconnected();

	// BrnNetworkRoadRulesManager.h:154
	void Connect();

	// BrnNetworkRoadRulesManager.h:158
	void OnEnterGame();

	// BrnNetworkRoadRulesManager.h:162
	void OnGameLaunching();

	// BrnNetworkRoadRulesManager.h:166
	void OnGameFinish();

	// BrnNetworkRoadRulesManager.h:170
	void OnRoundFinish();

	// BrnNetworkRoadRulesManager.h:174
	void OnLeaveGame();

	// BrnNetworkRoadRulesManager.h:178
	void FinishedBooting();

private:
	// BrnNetworkRoadRulesManager.h:258
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetRoadRulesDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:262
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetNextFreeRoadRulesDataEntry();

	// BrnNetworkRoadRulesManager.h:267
	void StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *);

	// BrnNetworkRoadRulesManager.h:271
	void StartUploadingRoadRulesScoresToServer();

	// BrnNetworkRoadRulesManager.h:275
	void StartDownloadingRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:279
	void StartDownloadingLocalRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:284
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkRoadRulesManager.h:289
	void ProcessGameActions(const InputBuffer::GameActionQueue *);

	// BrnNetworkRoadRulesManager.h:294
	void HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:299
	void UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:304
	void UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:308
	void SendPersonalBestScore();

	// BrnNetworkRoadRulesManager.h:312
	void AttemptToUploadNewRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:316
	void AttemptToDownloadRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:320
	void AttemptToDownloadLocalRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:325
	void HandleSendingRoadRulesScores(bool);

	// BrnNetworkRoadRulesManager.h:332
	Road::ChallengeIndex GetRoadRulesDataToSend(RoadRulesMessageData *, int32_t *, Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:336
	void HandleUploadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:341
	void GetRoadRulesDataToUpload(RoadRulesUploadData *);

	// BrnNetworkRoadRulesManager.h:345
	void HandleDownloadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:349
	void HandleDownloadingLocalRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:354
	bool DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:361
	void _RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:370
	void _RoadRulesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:377
	void _RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:386
	void _RoadRulesPersonalBestDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:393
	void _UploadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:400
	void _DownloadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:407
	void _DownloadLocalRoadRulesCallback(void *, void *, bool);

}

// BrnNetworkRoadRulesManager.h:222
extern const int32_t KI_SERVER_KEY_LENGTH = 16;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkRoadRulesManager {
		// BrnNetworkRoadRulesManager.h:190
		enum ERoadRulesState {
			E_ROAD_RULES_STATE_BOOTING = 0,
			E_ROAD_RULES_STATE_CONNECTING = 1,
			E_ROAD_RULES_STATE_IN_GAME = 2,
			E_ROAD_RULES_STATE_WAIT_TO_DOWNLOAD = 3,
			E_ROAD_RULES_STATE_UPLOADING = 4,
			E_ROAD_RULES_STATE_DOWNLOADING = 5,
			E_ROAD_RULES_STATE_DOWNLOADING_LOCAL = 6,
			E_ROAD_RULES_STATE_COUNT = 7,
		}

		// BrnNetworkRoadRulesManager.h:212
		struct RoadRulesData {
			// BrnNetworkRoadRulesManager.h:214
			BrnNetwork::RoadRulesMessage mRoadRulesMessageSend;

			// BrnNetworkRoadRulesManager.h:215
			BrnNetwork::RoadRulesMessage mRoadRulesMessageRecv;

			// BrnNetworkRoadRulesManager.h:216
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageSend;

			// BrnNetworkRoadRulesManager.h:217
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageRecv;

			// BrnNetworkRoadRulesManager.h:218
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkRoadRulesManager.h:219
			Road::ChallengeIndex mIndexOfNextChallengeToSend;

		}

	}

}

// BrnNetworkRoadRulesManager.h:102
struct BrnNetwork::NetworkRoadRulesManager {
private:
	// BrnNetworkRoadRulesManager.h:222
	extern const int32_t KI_SERVER_KEY_LENGTH = 16;

	// BrnNetworkRoadRulesManager.h:224
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData[7] maRoadRulesData;

	// BrnNetworkRoadRulesManager.h:225
	ChallengePlayerScoreEntry[64] maLocalRoadScoresToUpload;

	// BrnNetworkRoadRulesManager.h:226
	ChallengeData[64] maLocalLobbyScores;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:80
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> RoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:227
	NetworkRoadRulesManager::RoadRulesPersonalBestBuffer mRoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:228
	NetworkToGameStateInterface::RoadRulesReceivedQueue mBufferedRoadRulesRecvQueue;

	// BrnNetworkRoadRulesManager.h:229
	char[16] macRoadRulesServerKey;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:91
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> RoadRulesPBBuffer;

	// BrnNetworkRoadRulesManager.h:230
	NetworkRoadRulesManager::RoadRulesPBBuffer mPersonalBestToSendBuffer;

	// BrnNetworkRoadRulesManager.h:231
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesManager.h:232
	Time mTimeUntilNextResultUpload;

	// BrnNetworkRoadRulesManager.h:233
	Time mTimeUntilNextResultDownload;

	// BrnNetworkRoadRulesManager.h:234
	Time mTimeBetweenRoadRulesDownloadBatches;

	// BrnNetworkRoadRulesManager.h:235
	Road::ChallengeIndex mIndexOfNextChallengeToUpload;

	// BrnNetworkRoadRulesManager.h:236
	Road::ChallengeIndex mIndexOfNextChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:237
	Road::ChallengeIndex mIndexOfNextLocalChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:238
	uint32_t muTimeStampOfLastDownload;

	// BrnNetworkRoadRulesManager.h:239
	int32_t miNumRoadsConsideredForUpload;

	// BrnNetworkRoadRulesManager.h:240
	BrnNetwork::NetworkRoadRulesManager::ERoadRulesState meState;

	// BrnNetworkRoadRulesManager.h:241
	bool mbBufferRoadRulesReceived;

	// BrnNetworkRoadRulesManager.h:242
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkRoadRulesManager.h:243
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkRoadRulesManager.h:244
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkRoadRulesManager.h:245
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkRoadRulesManager.h:246
	bool mbDownloadedLocalScores;

	// BrnNetworkRoadRulesManager.h:247
	bool mbForceOverwriteServerRecords;

	// BrnNetworkRoadRulesManager.h:252
	BrnNetwork::RoadRulesManagerDebugComponent mRoadRulesDebugComponent;

public:
	// BrnNetworkRoadRulesManager.h:107
	void Construct();

	// BrnNetworkRoadRulesManager.h:115
	bool Prepare(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkRoadRulesManager.h:119
	bool Release();

	// BrnNetworkRoadRulesManager.h:123
	void Destruct();

	// BrnNetworkRoadRulesManager.h:130
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t, BrnUpdateSet);

	// BrnNetworkRoadRulesManager.h:136
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, bool);

	// BrnNetworkRoadRulesManager.h:141
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:146
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:150
	void Disconnected();

	// BrnNetworkRoadRulesManager.h:154
	void Connect();

	// BrnNetworkRoadRulesManager.h:158
	void OnEnterGame();

	// BrnNetworkRoadRulesManager.h:162
	void OnGameLaunching();

	// BrnNetworkRoadRulesManager.h:166
	void OnGameFinish();

	// BrnNetworkRoadRulesManager.h:170
	void OnRoundFinish();

	// BrnNetworkRoadRulesManager.h:174
	void OnLeaveGame();

	// BrnNetworkRoadRulesManager.h:178
	void FinishedBooting();

private:
	// BrnNetworkRoadRulesManager.h:258
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetRoadRulesDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:262
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetNextFreeRoadRulesDataEntry();

	// BrnNetworkRoadRulesManager.h:267
	void StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *);

	// BrnNetworkRoadRulesManager.h:271
	void StartUploadingRoadRulesScoresToServer();

	// BrnNetworkRoadRulesManager.h:275
	void StartDownloadingRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:279
	void StartDownloadingLocalRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:284
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkRoadRulesManager.h:289
	void ProcessGameActions(const OutputBuffer::GameActionQueue *);

	// BrnNetworkRoadRulesManager.h:294
	void HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:299
	void UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:304
	void UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:308
	void SendPersonalBestScore();

	// BrnNetworkRoadRulesManager.h:312
	void AttemptToUploadNewRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:316
	void AttemptToDownloadRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:320
	void AttemptToDownloadLocalRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:325
	void HandleSendingRoadRulesScores(bool);

	// BrnNetworkRoadRulesManager.h:332
	Road::ChallengeIndex GetRoadRulesDataToSend(RoadRulesMessageData *, int32_t *, Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:336
	void HandleUploadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:341
	void GetRoadRulesDataToUpload(RoadRulesUploadData *);

	// BrnNetworkRoadRulesManager.h:345
	void HandleDownloadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:349
	void HandleDownloadingLocalRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:354
	bool DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:361
	void _RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:370
	void _RoadRulesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:377
	void _RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:386
	void _RoadRulesPersonalBestDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:393
	void _UploadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:400
	void _DownloadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:407
	void _DownloadLocalRoadRulesCallback(void *, void *, bool);

}

// BrnNetworkRoadRulesManager.h:102
struct BrnNetwork::NetworkRoadRulesManager {
private:
	// BrnNetworkRoadRulesManager.h:222
	extern const int32_t KI_SERVER_KEY_LENGTH = 16;

	// BrnNetworkRoadRulesManager.h:224
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData[7] maRoadRulesData;

	// BrnNetworkRoadRulesManager.h:225
	ChallengePlayerScoreEntry[64] maLocalRoadScoresToUpload;

	// BrnNetworkRoadRulesManager.h:226
	ChallengeData[64] maLocalLobbyScores;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:80
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> RoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:227
	NetworkRoadRulesManager::RoadRulesPersonalBestBuffer mRoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:228
	NetworkToGameStateInterface::RoadRulesReceivedQueue mBufferedRoadRulesRecvQueue;

	// BrnNetworkRoadRulesManager.h:229
	char[16] macRoadRulesServerKey;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:91
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> RoadRulesPBBuffer;

	// BrnNetworkRoadRulesManager.h:230
	NetworkRoadRulesManager::RoadRulesPBBuffer mPersonalBestToSendBuffer;

	// BrnNetworkRoadRulesManager.h:231
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesManager.h:232
	Time mTimeUntilNextResultUpload;

	// BrnNetworkRoadRulesManager.h:233
	Time mTimeUntilNextResultDownload;

	// BrnNetworkRoadRulesManager.h:234
	Time mTimeBetweenRoadRulesDownloadBatches;

	// BrnNetworkRoadRulesManager.h:235
	Road::ChallengeIndex mIndexOfNextChallengeToUpload;

	// BrnNetworkRoadRulesManager.h:236
	Road::ChallengeIndex mIndexOfNextChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:237
	Road::ChallengeIndex mIndexOfNextLocalChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:238
	uint32_t muTimeStampOfLastDownload;

	// BrnNetworkRoadRulesManager.h:239
	int32_t miNumRoadsConsideredForUpload;

	// BrnNetworkRoadRulesManager.h:240
	BrnNetwork::NetworkRoadRulesManager::ERoadRulesState meState;

	// BrnNetworkRoadRulesManager.h:241
	bool mbBufferRoadRulesReceived;

	// BrnNetworkRoadRulesManager.h:242
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkRoadRulesManager.h:243
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkRoadRulesManager.h:244
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkRoadRulesManager.h:245
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkRoadRulesManager.h:246
	bool mbDownloadedLocalScores;

	// BrnNetworkRoadRulesManager.h:247
	bool mbForceOverwriteServerRecords;

	// BrnNetworkRoadRulesManager.h:252
	BrnNetwork::RoadRulesManagerDebugComponent mRoadRulesDebugComponent;

public:
	// BrnNetworkRoadRulesManager.h:107
	void Construct();

	// BrnNetworkRoadRulesManager.h:115
	bool Prepare(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkRoadRulesManager.h:119
	bool Release();

	// BrnNetworkRoadRulesManager.h:123
	void Destruct();

	// BrnNetworkRoadRulesManager.h:130
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t, BrnUpdateSet);

	// BrnNetworkRoadRulesManager.h:136
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, bool);

	// BrnNetworkRoadRulesManager.h:141
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:146
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:150
	void Disconnected();

	// BrnNetworkRoadRulesManager.h:154
	void Connect();

	// BrnNetworkRoadRulesManager.h:158
	void OnEnterGame();

	// BrnNetworkRoadRulesManager.h:162
	void OnGameLaunching();

	// BrnNetworkRoadRulesManager.h:166
	void OnGameFinish();

	// BrnNetworkRoadRulesManager.h:170
	void OnRoundFinish();

	// BrnNetworkRoadRulesManager.h:174
	void OnLeaveGame();

	// BrnNetworkRoadRulesManager.h:178
	void FinishedBooting();

private:
	// BrnNetworkRoadRulesManager.h:258
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetRoadRulesDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:262
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetNextFreeRoadRulesDataEntry();

	// BrnNetworkRoadRulesManager.h:267
	void StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *);

	// BrnNetworkRoadRulesManager.h:271
	void StartUploadingRoadRulesScoresToServer();

	// BrnNetworkRoadRulesManager.h:275
	void StartDownloadingRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:279
	void StartDownloadingLocalRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:284
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkRoadRulesManager.h:289
	void ProcessGameActions(const OutputBuffer::GameActionQueue *);

	// BrnNetworkRoadRulesManager.h:294
	void HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:299
	void UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:304
	void UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:308
	void SendPersonalBestScore();

	// BrnNetworkRoadRulesManager.h:312
	void AttemptToUploadNewRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:316
	void AttemptToDownloadRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:320
	void AttemptToDownloadLocalRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:325
	void HandleSendingRoadRulesScores(bool);

	// BrnNetworkRoadRulesManager.h:332
	Road::ChallengeIndex GetRoadRulesDataToSend(RoadRulesMessageData *, int32_t *, Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:336
	void HandleUploadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:341
	void GetRoadRulesDataToUpload(RoadRulesUploadData *);

	// BrnNetworkRoadRulesManager.h:345
	void HandleDownloadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:349
	void HandleDownloadingLocalRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:354
	bool DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:361
	void _RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:370
	void _RoadRulesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:377
	void _RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:386
	void _RoadRulesPersonalBestDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:393
	void _UploadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:400
	void _DownloadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:407
	void _DownloadLocalRoadRulesCallback(void *, void *, bool);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkRoadRulesManager {
		// BrnNetworkRoadRulesManager.h:190
		enum ERoadRulesState {
			E_ROAD_RULES_STATE_BOOTING = 0,
			E_ROAD_RULES_STATE_CONNECTING = 1,
			E_ROAD_RULES_STATE_IN_GAME = 2,
			E_ROAD_RULES_STATE_WAIT_TO_DOWNLOAD = 3,
			E_ROAD_RULES_STATE_UPLOADING = 4,
			E_ROAD_RULES_STATE_DOWNLOADING = 5,
			E_ROAD_RULES_STATE_DOWNLOADING_LOCAL = 6,
			E_ROAD_RULES_STATE_COUNT = 7,
		}

		// BrnNetworkRoadRulesManager.h:212
		struct RoadRulesData {
			// BrnNetworkRoadRulesManager.h:214
			BrnNetwork::RoadRulesMessage mRoadRulesMessageSend;

			// BrnNetworkRoadRulesManager.h:215
			BrnNetwork::RoadRulesMessage mRoadRulesMessageRecv;

			// BrnNetworkRoadRulesManager.h:216
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageSend;

			// BrnNetworkRoadRulesManager.h:217
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageRecv;

			// BrnNetworkRoadRulesManager.h:218
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkRoadRulesManager.h:219
			Road::ChallengeIndex mIndexOfNextChallengeToSend;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkRoadRulesManager {
		// BrnNetworkRoadRulesManager.h:190
		enum ERoadRulesState {
			E_ROAD_RULES_STATE_BOOTING = 0,
			E_ROAD_RULES_STATE_CONNECTING = 1,
			E_ROAD_RULES_STATE_IN_GAME = 2,
			E_ROAD_RULES_STATE_WAIT_TO_DOWNLOAD = 3,
			E_ROAD_RULES_STATE_UPLOADING = 4,
			E_ROAD_RULES_STATE_DOWNLOADING = 5,
			E_ROAD_RULES_STATE_DOWNLOADING_LOCAL = 6,
			E_ROAD_RULES_STATE_COUNT = 7,
		}

		// BrnNetworkRoadRulesManager.h:212
		struct RoadRulesData {
			// BrnNetworkRoadRulesManager.h:214
			BrnNetwork::RoadRulesMessage mRoadRulesMessageSend;

			// BrnNetworkRoadRulesManager.h:215
			BrnNetwork::RoadRulesMessage mRoadRulesMessageRecv;

			// BrnNetworkRoadRulesManager.h:216
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageSend;

			// BrnNetworkRoadRulesManager.h:217
			BrnNetwork::RoadRulesPersonalBestMessage mRoadRulesPBMessageRecv;

			// BrnNetworkRoadRulesManager.h:218
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkRoadRulesManager.h:219
			Road::ChallengeIndex mIndexOfNextChallengeToSend;

		}

	}

}

// BrnNetworkRoadRulesManager.h:102
struct BrnNetwork::NetworkRoadRulesManager {
private:
	// BrnNetworkRoadRulesManager.h:222
	extern const int32_t KI_SERVER_KEY_LENGTH = 16;

	// BrnNetworkRoadRulesManager.h:224
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData[7] maRoadRulesData;

	// BrnNetworkRoadRulesManager.h:225
	ChallengePlayerScoreEntry[64] maLocalRoadScoresToUpload;

	// BrnNetworkRoadRulesManager.h:226
	ChallengeData[64] maLocalLobbyScores;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:80
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> RoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:227
	NetworkRoadRulesManager::RoadRulesPersonalBestBuffer mRoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:228
	NetworkToGameStateInterface::RoadRulesReceivedQueue mBufferedRoadRulesRecvQueue;

	// BrnNetworkRoadRulesManager.h:229
	char[16] macRoadRulesServerKey;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:91
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> RoadRulesPBBuffer;

	// BrnNetworkRoadRulesManager.h:230
	NetworkRoadRulesManager::RoadRulesPBBuffer mPersonalBestToSendBuffer;

	// BrnNetworkRoadRulesManager.h:231
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesManager.h:232
	Time mTimeUntilNextResultUpload;

	// BrnNetworkRoadRulesManager.h:233
	Time mTimeUntilNextResultDownload;

	// BrnNetworkRoadRulesManager.h:234
	Time mTimeBetweenRoadRulesDownloadBatches;

	// BrnNetworkRoadRulesManager.h:235
	Road::ChallengeIndex mIndexOfNextChallengeToUpload;

	// BrnNetworkRoadRulesManager.h:236
	Road::ChallengeIndex mIndexOfNextChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:237
	Road::ChallengeIndex mIndexOfNextLocalChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:238
	uint32_t muTimeStampOfLastDownload;

	// BrnNetworkRoadRulesManager.h:239
	int32_t miNumRoadsConsideredForUpload;

	// BrnNetworkRoadRulesManager.h:240
	BrnNetwork::NetworkRoadRulesManager::ERoadRulesState meState;

	// BrnNetworkRoadRulesManager.h:241
	bool mbBufferRoadRulesReceived;

	// BrnNetworkRoadRulesManager.h:242
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkRoadRulesManager.h:243
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkRoadRulesManager.h:244
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkRoadRulesManager.h:245
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkRoadRulesManager.h:246
	bool mbDownloadedLocalScores;

	// BrnNetworkRoadRulesManager.h:247
	bool mbForceOverwriteServerRecords;

	// BrnNetworkRoadRulesManager.h:252
	BrnNetwork::RoadRulesManagerDebugComponent mRoadRulesDebugComponent;

public:
	// BrnNetworkRoadRulesManager.h:107
	void Construct();

	// BrnNetworkRoadRulesManager.h:115
	bool Prepare(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkRoadRulesManager.h:119
	bool Release();

	// BrnNetworkRoadRulesManager.h:123
	void Destruct();

	// BrnNetworkRoadRulesManager.h:130
	// Declaration
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t, BrnUpdateSet) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkRoadRulesManager.cpp:340
		using namespace CgsDev::Message;

		// BrnNetworkRoadRulesManager.cpp:349
		using namespace CgsDev::Message;

		// BrnNetworkRoadRulesManager.cpp:444
		using namespace CgsDev::Message;

	}

	// BrnNetworkRoadRulesManager.h:136
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, bool);

	// BrnNetworkRoadRulesManager.h:141
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:146
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:150
	void Disconnected();

	// BrnNetworkRoadRulesManager.h:154
	void Connect();

	// BrnNetworkRoadRulesManager.h:158
	void OnEnterGame();

	// BrnNetworkRoadRulesManager.h:162
	void OnGameLaunching();

	// BrnNetworkRoadRulesManager.h:166
	void OnGameFinish();

	// BrnNetworkRoadRulesManager.h:170
	void OnRoundFinish();

	// BrnNetworkRoadRulesManager.h:174
	void OnLeaveGame();

	// BrnNetworkRoadRulesManager.h:178
	void FinishedBooting();

private:
	// BrnNetworkRoadRulesManager.h:258
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetRoadRulesDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:262
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetNextFreeRoadRulesDataEntry();

	// BrnNetworkRoadRulesManager.h:267
	void StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *);

	// BrnNetworkRoadRulesManager.h:271
	void StartUploadingRoadRulesScoresToServer();

	// BrnNetworkRoadRulesManager.h:275
	void StartDownloadingRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:279
	void StartDownloadingLocalRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:284
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkRoadRulesManager.h:289
	void ProcessGameActions(const InputBuffer::GameActionQueue *);

	// BrnNetworkRoadRulesManager.h:294
	void HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:299
	void UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:304
	void UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:308
	void SendPersonalBestScore();

	// BrnNetworkRoadRulesManager.h:312
	void AttemptToUploadNewRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:316
	void AttemptToDownloadRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:320
	void AttemptToDownloadLocalRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:325
	void HandleSendingRoadRulesScores(bool);

	// BrnNetworkRoadRulesManager.h:332
	Road::ChallengeIndex GetRoadRulesDataToSend(RoadRulesMessageData *, int32_t *, Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:336
	void HandleUploadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:341
	void GetRoadRulesDataToUpload(RoadRulesUploadData *);

	// BrnNetworkRoadRulesManager.h:345
	void HandleDownloadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:349
	void HandleDownloadingLocalRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:354
	bool DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:361
	void _RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:370
	// Declaration
	void _RoadRulesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkRoadRulesManager.cpp:1850
		using namespace CgsDev::Message;

	}

	// BrnNetworkRoadRulesManager.h:377
	void _RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:386
	// Declaration
	void _RoadRulesPersonalBestDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkRoadRulesManager.cpp:1935
		using namespace CgsDev::Message;

	}

	// BrnNetworkRoadRulesManager.h:393
	void _UploadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:400
	// Declaration
	void _DownloadRoadRulesCallback(void *, void *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkRoadRulesManager.cpp:2114
		using namespace CgsDev::Message;

		// BrnNetworkRoadRulesManager.cpp:2119
		using namespace CgsDev::Message;

	}

	// BrnNetworkRoadRulesManager.h:407
	void _DownloadLocalRoadRulesCallback(void *, void *, bool);

}

// BrnNetworkRoadRulesManager.h:102
struct BrnNetwork::NetworkRoadRulesManager {
private:
	// BrnNetworkRoadRulesManager.h:222
	extern const int32_t KI_SERVER_KEY_LENGTH = 16;

	// BrnNetworkRoadRulesManager.h:224
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData[7] maRoadRulesData;

	// BrnNetworkRoadRulesManager.h:225
	ChallengePlayerScoreEntry[64] maLocalRoadScoresToUpload;

	// BrnNetworkRoadRulesManager.h:226
	ChallengeData[64] maLocalLobbyScores;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:80
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> RoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:227
	NetworkRoadRulesManager::RoadRulesPersonalBestBuffer mRoadRulesPersonalBestBuffer;

	// BrnNetworkRoadRulesManager.h:228
	NetworkToGameStateInterface::RoadRulesReceivedQueue mBufferedRoadRulesRecvQueue;

	// BrnNetworkRoadRulesManager.h:229
	char[16] macRoadRulesServerKey;

	// Unknown accessibility
	// BrnNetworkRoadRulesManager.h:91
	typedef FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> RoadRulesPBBuffer;

	// BrnNetworkRoadRulesManager.h:230
	NetworkRoadRulesManager::RoadRulesPBBuffer mPersonalBestToSendBuffer;

	// BrnNetworkRoadRulesManager.h:231
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesManager.h:232
	Time mTimeUntilNextResultUpload;

	// BrnNetworkRoadRulesManager.h:233
	Time mTimeUntilNextResultDownload;

	// BrnNetworkRoadRulesManager.h:234
	Time mTimeBetweenRoadRulesDownloadBatches;

	// BrnNetworkRoadRulesManager.h:235
	Road::ChallengeIndex mIndexOfNextChallengeToUpload;

	// BrnNetworkRoadRulesManager.h:236
	Road::ChallengeIndex mIndexOfNextChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:237
	Road::ChallengeIndex mIndexOfNextLocalChallengeToDownload;

	// BrnNetworkRoadRulesManager.h:238
	uint32_t muTimeStampOfLastDownload;

	// BrnNetworkRoadRulesManager.h:239
	int32_t miNumRoadsConsideredForUpload;

	// BrnNetworkRoadRulesManager.h:240
	BrnNetwork::NetworkRoadRulesManager::ERoadRulesState meState;

	// BrnNetworkRoadRulesManager.h:241
	bool mbBufferRoadRulesReceived;

	// BrnNetworkRoadRulesManager.h:242
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkRoadRulesManager.h:243
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkRoadRulesManager.h:244
	BrnNetwork::BrnServerInterface * mpServerInterface;

	// BrnNetworkRoadRulesManager.h:245
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkRoadRulesManager.h:246
	bool mbDownloadedLocalScores;

	// BrnNetworkRoadRulesManager.h:247
	bool mbForceOverwriteServerRecords;

	// BrnNetworkRoadRulesManager.h:252
	BrnNetwork::RoadRulesManagerDebugComponent mRoadRulesDebugComponent;

public:
	// BrnNetworkRoadRulesManager.h:107
	void Construct();

	// BrnNetworkRoadRulesManager.h:115
	bool Prepare(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkRoadRulesManager.h:119
	bool Release();

	// BrnNetworkRoadRulesManager.h:123
	void Destruct();

	// BrnNetworkRoadRulesManager.h:130
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t, BrnUpdateSet);

	// BrnNetworkRoadRulesManager.h:136
	void ProcessAfterSimulation(const PostSimulationInputBuffer *, bool);

	// BrnNetworkRoadRulesManager.h:141
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:146
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:150
	void Disconnected();

	// BrnNetworkRoadRulesManager.h:154
	void Connect();

	// BrnNetworkRoadRulesManager.h:158
	void OnEnterGame();

	// BrnNetworkRoadRulesManager.h:162
	void OnGameLaunching();

	// BrnNetworkRoadRulesManager.h:166
	void OnGameFinish();

	// BrnNetworkRoadRulesManager.h:170
	void OnRoundFinish();

	// BrnNetworkRoadRulesManager.h:174
	void OnLeaveGame();

	// BrnNetworkRoadRulesManager.h:178
	void FinishedBooting();

private:
	// BrnNetworkRoadRulesManager.h:258
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetRoadRulesDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkRoadRulesManager.h:262
	BrnNetwork::NetworkRoadRulesManager::RoadRulesData * GetNextFreeRoadRulesDataEntry();

	// BrnNetworkRoadRulesManager.h:267
	void StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *);

	// BrnNetworkRoadRulesManager.h:271
	void StartUploadingRoadRulesScoresToServer();

	// BrnNetworkRoadRulesManager.h:275
	void StartDownloadingRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:279
	void StartDownloadingLocalRoadRulesScoresFromServer();

	// BrnNetworkRoadRulesManager.h:284
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkRoadRulesManager.h:289
	void ProcessGameActions(const InputBuffer::GameActionQueue *);

	// BrnNetworkRoadRulesManager.h:294
	void HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:299
	void UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:304
	void UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *);

	// BrnNetworkRoadRulesManager.h:308
	void SendPersonalBestScore();

	// BrnNetworkRoadRulesManager.h:312
	void AttemptToUploadNewRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:316
	void AttemptToDownloadRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:320
	void AttemptToDownloadLocalRoadRulesHighScores();

	// BrnNetworkRoadRulesManager.h:325
	void HandleSendingRoadRulesScores(bool);

	// BrnNetworkRoadRulesManager.h:332
	Road::ChallengeIndex GetRoadRulesDataToSend(RoadRulesMessageData *, int32_t *, Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:336
	void HandleUploadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:341
	void GetRoadRulesDataToUpload(RoadRulesUploadData *);

	// BrnNetworkRoadRulesManager.h:345
	void HandleDownloadingRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:349
	void HandleDownloadingLocalRoadRulesScores();

	// BrnNetworkRoadRulesManager.h:354
	bool DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex);

	// BrnNetworkRoadRulesManager.h:361
	void _RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:370
	void _RoadRulesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:377
	void _RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:386
	void _RoadRulesPersonalBestDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkRoadRulesManager.h:393
	void _UploadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:400
	void _DownloadRoadRulesCallback(void *, void *, bool);

	// BrnNetworkRoadRulesManager.h:407
	void _DownloadLocalRoadRulesCallback(void *, void *, bool);

}

