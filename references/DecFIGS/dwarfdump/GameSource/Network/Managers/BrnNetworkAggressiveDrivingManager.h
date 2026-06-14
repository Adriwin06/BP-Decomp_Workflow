// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkAggressiveDrivingManager {
		// BrnNetworkAggressiveDrivingManager.h:130
		struct AggressiveDrivingData {
			// BrnNetworkAggressiveDrivingManager.h:132
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkAggressiveDrivingManager.h:133
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageSend;

			// BrnNetworkAggressiveDrivingManager.h:134
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageRecv;

			// BrnNetworkAggressiveDrivingManager.h:136
			AggressiveMoveData[10] maBuffer;

			// BrnNetworkAggressiveDrivingManager.h:137
			int32_t miBufferCount;

		}

	}

	// BrnNetworkAggressiveDrivingManager.h:58
	const int32_t KI_MAX_PLAYER_AGGRESSIVE_MOVES_BUFFER = 10;

}

// BrnNetworkAggressiveDrivingManager.h:73
struct BrnNetwork::NetworkAggressiveDrivingManager {
private:
	// BrnNetworkAggressiveDrivingManager.h:140
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData[7] maAggressiveDrivingData;

	// BrnNetworkAggressiveDrivingManager.h:141
	float32_t mfNoImpactTime;

	// BrnNetworkAggressiveDrivingManager.h:142
	RoadRulesRecvData::NetworkPlayerID mLastVictimNetworkPlayerID;

	// BrnNetworkAggressiveDrivingManager.h:143
	int32_t miConsecutiveImpactsOnSamePlayer;

	// BrnNetworkAggressiveDrivingManager.h:144
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkAggressiveDrivingManager.h:145
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkAggressiveDrivingManager.h:146
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkAggressiveDrivingManager.h:147
	bool mbAreWeInOnlineGame;

public:
	// BrnNetworkAggressiveDrivingManager.h:81
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkAggressiveDrivingManager.h:85
	bool Prepare();

	// BrnNetworkAggressiveDrivingManager.h:89
	bool Release();

	// BrnNetworkAggressiveDrivingManager.h:93
	void Destruct();

	// BrnNetworkAggressiveDrivingManager.h:99
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t);

	// BrnNetworkAggressiveDrivingManager.h:104
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:109
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:114
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:117
	void Disconnected();

	// BrnNetworkAggressiveDrivingManager.h:121
	void OnRoundStart();

	// BrnNetworkAggressiveDrivingManager.h:125
	void OnRoundFinish();

private:
	// BrnNetworkAggressiveDrivingManager.h:152
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * GetAggressiveDrivingDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:156
	void ProcessInputQueue(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:159
	void HandleSendingMessages();

	// BrnNetworkAggressiveDrivingManager.h:162
	void HandleReceivingMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:166
	bool AddImpactEvent(ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:170
	bool AddTakedownEvent(const TakedownEvent *);

	// BrnNetworkAggressiveDrivingManager.h:174
	void RemoveAggressiveMove(int32_t, int32_t);

	// BrnNetworkAggressiveDrivingManager.h:179
	bool UpdateMarkedPlayersOnMarkedManTakeDown(EActiveRaceCarIndex);

	// BrnNetworkAggressiveDrivingManager.h:184
	void UpdateOnlineBattling(const ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:189
	int32_t CompareMove(AggressiveMoveData *, AggressiveMoveData *);

	// BrnNetworkAggressiveDrivingManager.h:194
	bool AddNewMove(BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData *, AggressiveMoveData *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkAggressiveDrivingManager {
		// BrnNetworkAggressiveDrivingManager.h:130
		struct AggressiveDrivingData {
			// BrnNetworkAggressiveDrivingManager.h:132
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkAggressiveDrivingManager.h:133
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageSend;

			// BrnNetworkAggressiveDrivingManager.h:134
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageRecv;

			// BrnNetworkAggressiveDrivingManager.h:136
			AggressiveMoveData[10] maBuffer;

			// BrnNetworkAggressiveDrivingManager.h:137
			int32_t miBufferCount;

		}

	}

	// BrnNetworkAggressiveDrivingManager.h:58
	const int32_t KI_MAX_PLAYER_AGGRESSIVE_MOVES_BUFFER = 10;

}

// BrnNetworkAggressiveDrivingManager.h:73
struct BrnNetwork::NetworkAggressiveDrivingManager {
private:
	// BrnNetworkAggressiveDrivingManager.h:140
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData[7] maAggressiveDrivingData;

	// BrnNetworkAggressiveDrivingManager.h:141
	float32_t mfNoImpactTime;

	// BrnNetworkAggressiveDrivingManager.h:142
	GuiEventNetworkLaunching::NetworkPlayerID mLastVictimNetworkPlayerID;

	// BrnNetworkAggressiveDrivingManager.h:143
	int32_t miConsecutiveImpactsOnSamePlayer;

	// BrnNetworkAggressiveDrivingManager.h:144
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkAggressiveDrivingManager.h:145
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkAggressiveDrivingManager.h:146
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkAggressiveDrivingManager.h:147
	bool mbAreWeInOnlineGame;

public:
	// BrnNetworkAggressiveDrivingManager.h:81
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkAggressiveDrivingManager.h:85
	bool Prepare();

	// BrnNetworkAggressiveDrivingManager.h:89
	bool Release();

	// BrnNetworkAggressiveDrivingManager.h:93
	void Destruct();

	// BrnNetworkAggressiveDrivingManager.h:99
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t);

	// BrnNetworkAggressiveDrivingManager.h:104
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:109
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:114
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:117
	void Disconnected();

	// BrnNetworkAggressiveDrivingManager.h:121
	void OnRoundStart();

	// BrnNetworkAggressiveDrivingManager.h:125
	void OnRoundFinish();

private:
	// BrnNetworkAggressiveDrivingManager.h:152
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * GetAggressiveDrivingDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:156
	void ProcessInputQueue(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:159
	void HandleSendingMessages();

	// BrnNetworkAggressiveDrivingManager.h:162
	void HandleReceivingMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:166
	bool AddImpactEvent(ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:170
	bool AddTakedownEvent(const TakedownEvent *);

	// BrnNetworkAggressiveDrivingManager.h:174
	void RemoveAggressiveMove(int32_t, int32_t);

	// BrnNetworkAggressiveDrivingManager.h:179
	bool UpdateMarkedPlayersOnMarkedManTakeDown(EActiveRaceCarIndex);

	// BrnNetworkAggressiveDrivingManager.h:184
	void UpdateOnlineBattling(const ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:189
	int32_t CompareMove(AggressiveMoveData *, AggressiveMoveData *);

	// BrnNetworkAggressiveDrivingManager.h:194
	bool AddNewMove(BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData *, AggressiveMoveData *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkAggressiveDrivingManager {
		// BrnNetworkAggressiveDrivingManager.h:130
		struct AggressiveDrivingData {
			// BrnNetworkAggressiveDrivingManager.h:132
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkAggressiveDrivingManager.h:133
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageSend;

			// BrnNetworkAggressiveDrivingManager.h:134
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageRecv;

			// BrnNetworkAggressiveDrivingManager.h:136
			AggressiveMoveData[10] maBuffer;

			// BrnNetworkAggressiveDrivingManager.h:137
			int32_t miBufferCount;

		}

	}

	// BrnNetworkAggressiveDrivingManager.h:58
	const int32_t KI_MAX_PLAYER_AGGRESSIVE_MOVES_BUFFER = 10;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkAggressiveDrivingManager {
		// BrnNetworkAggressiveDrivingManager.h:130
		struct AggressiveDrivingData {
			// BrnNetworkAggressiveDrivingManager.h:132
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkAggressiveDrivingManager.h:133
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageSend;

			// BrnNetworkAggressiveDrivingManager.h:134
			BrnNetwork::AggressiveDrivingMessage mAggressiveDrivingMessageRecv;

			// BrnNetworkAggressiveDrivingManager.h:136
			AggressiveMoveData[10] maBuffer;

			// BrnNetworkAggressiveDrivingManager.h:137
			int32_t miBufferCount;

		}

	}

	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkOutAccountSettings;

		struct NetworkEvent<1>;

		struct NetworkOutBuddyCount;

		struct NetworkEvent<2>;

		struct NetworkOutBuddyInformation;

		struct NetworkEvent<3>;

		struct NetworkOutChatMessage;

		struct NetworkEvent<5>;

		struct NetworkEvent<8>;

		struct NetworkOutInviteFailed;

		struct NetworkEvent<6>;

		struct NetworkOutInviteRequest;

		struct NetworkEvent<21>;

		struct NetworkEvent<15>;

		struct NetworkEvent<23>;

		struct NetworkOutPlayerLeftGame;

		struct NetworkEvent<24>;

		struct NetworkOutPostGameProcessingFinished;

		struct NetworkEvent<32>;

		struct NetworkEvent<17>;

		struct NetworkEvent<18>;

		struct NetworkEvent<19>;

		struct NetworkEvent<25>;

		struct NetworkOutLaunchEvent;

		struct NetworkEvent<26>;

		struct NetworkOutLaunchedEvent;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<34>;

		struct NetworkOutRecvRoadRulesUploadedEvent;

		struct NetworkEvent<35>;

		struct NetworkEvent<36>;

		struct NetworkOutRoadRulesConnectedOnlineEvent;

		struct NetworkEvent<10>;

		struct NetworkOutBuddyListChanged;

		struct NetworkEvent<9>;

		struct NetworkOutBuddyNotification;

		struct NetworkEvent<37>;

		struct NetworkOutLocalPlayerConnected;

		struct NetworkEvent<41>;

		struct NetworkOutRestartTrafficEvent;

		struct NetworkEvent<42>;

		struct NetworkEvent<50>;

		struct NetworkOutGetOfflineProgression;

		struct NetworkEvent<51>;

		struct NetworkOutCapturingTheirImageEvent;

		struct NetworkEvent<52>;

		struct NetworkOutImageReceivedEvent;

		struct NetworkEvent<53>;

		struct NetworkOutMugshotToSaveEvent;

		struct NetworkEvent<54>;

		struct NetworkOutAbortImageCaptureEvent;

		struct NetworkEvent<28>;

		struct NetworkOutLiveRevengeProfileData;

		struct NetworkEvent<56>;

		struct NetworkOutSwitchBurningHomeRunRunner;

		struct NetworkEvent<62>;

		struct NetworkOutFburnChallengeSuccessUpdateEvent;

		struct NetworkEvent<63>;

		struct NetworkOutFburnChallengeSuccessEvent;

		struct NetworkEvent<43>;

		struct NetworkOutHostChangedEvent;

		struct NetworkEvent<30>;

		struct NetworkOutEventTimeRemaining;

		struct NetworkEvent<31>;

		struct NetworkOutAutosaveProfile;

		struct NetworkEvent<11>;

		struct NetworkOutInviteSent;

		struct NetworkEvent<12>;

		struct NetworkOutInstantFreeburnEvent;

		struct NetworkEvent<13>;

		struct NetworkOutInstantFreeburnComplete;

		struct NetworkEvent<14>;

		struct NetworkOutBuddyRemovedEvent;

		struct NetworkEvent<67>;

		struct NetworkOutCamPicCompressedEvent;

		struct NetworkEvent<49>;

		struct NetworkEvent<48>;

		struct NetworkOutScoreboardEvent;

		struct NetworkEvent<44>;

		struct NetworkEvent<46>;

		struct NetworkOutRivalCount;

		struct NetworkEvent<47>;

		struct NetworkOutCaughtFever;

		struct NetworkEvent<55>;

		struct NetworkOutSentMugshot;

		struct NetworkInGetChatMessage;

		struct NetworkEvent<4>;

		struct NetworkInSendChatMessage;

		struct NetworkInGetNextUnreadMessage;

		struct NetworkInSendInvite;

		struct NetworkInRevokeInvite;

		struct NetworkInAcceptInvite;

		struct NetworkInDeclineInvite;

		struct NetworkInUpdateRichPresence;

		struct NetworkInJoinBuddy;

		struct NetworkInVoipEvent;

		struct NetworkInRoadRulesDataEvent;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<7>;

		struct NetworkInSendFeedback;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInSettingsUpdateEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkInLiveRevengeProfileLoaded;

		struct NetworkInSwitchBurningHomeRunRunner;

		struct NetworkInShowtimeUpdateEvent;

		struct NetworkInShowtimeSwitchEvent;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkEvent<39>;

		struct NetworkInFburnChallengeStatusEvent;

		struct NetworkEvent<40>;

		struct NetworkInFburnSuccessUpdateEvent;

		struct NetworkInFburnChallengeSuccessEvent;

		struct NetworkInActiveFburnChallengeEvent;

		struct NetworkInChangeDistrictEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct NetworkInAccountUpdate;

		struct NetworkInReqCamPicEvent;

		struct NetworkInLocalPlayerCrashesEvent;

		struct NetworkInLocalPlayerReachesCheckpoint;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct PreSimulationInputBuffer;

		struct NetworkEvent<66>;

		struct NetworkEvent<27>;

		struct NetworkEvent<68>;

	}

	// BrnNetworkAggressiveDrivingManager.h:58
	const int32_t KI_MAX_PLAYER_AGGRESSIVE_MOVES_BUFFER = 10;

}

// BrnNetworkAggressiveDrivingManager.h:73
struct BrnNetwork::NetworkAggressiveDrivingManager {
private:
	// BrnNetworkAggressiveDrivingManager.h:140
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData[7] maAggressiveDrivingData;

	// BrnNetworkAggressiveDrivingManager.h:141
	float32_t mfNoImpactTime;

	// BrnNetworkAggressiveDrivingManager.h:142
	AggressiveMoveData::NetworkPlayerID mLastVictimNetworkPlayerID;

	// BrnNetworkAggressiveDrivingManager.h:143
	int32_t miConsecutiveImpactsOnSamePlayer;

	// BrnNetworkAggressiveDrivingManager.h:144
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkAggressiveDrivingManager.h:145
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkAggressiveDrivingManager.h:146
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkAggressiveDrivingManager.h:147
	bool mbAreWeInOnlineGame;

public:
	// BrnNetworkAggressiveDrivingManager.h:81
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkAggressiveDrivingManager.h:85
	bool Prepare();

	// BrnNetworkAggressiveDrivingManager.h:89
	bool Release();

	// BrnNetworkAggressiveDrivingManager.h:93
	void Destruct();

	// BrnNetworkAggressiveDrivingManager.h:99
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t);

	// BrnNetworkAggressiveDrivingManager.h:104
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:109
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:114
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:117
	void Disconnected();

	// BrnNetworkAggressiveDrivingManager.h:121
	void OnRoundStart();

	// BrnNetworkAggressiveDrivingManager.h:125
	void OnRoundFinish();

private:
	// BrnNetworkAggressiveDrivingManager.h:152
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * GetAggressiveDrivingDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:156
	void ProcessInputQueue(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:159
	// Declaration
	void HandleSendingMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkAggressiveDrivingManager.cpp:1018
		using namespace CgsDev::Message;

	}

	// BrnNetworkAggressiveDrivingManager.h:162
	// Declaration
	void HandleReceivingMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkAggressiveDrivingManager.cpp:407
		using namespace CgsDev::Message;

	}

	// BrnNetworkAggressiveDrivingManager.h:166
	bool AddImpactEvent(ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:170
	// Declaration
	bool AddTakedownEvent(const TakedownEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkAggressiveDrivingManager.cpp:634
		using namespace CgsDev::Message;

	}

	// BrnNetworkAggressiveDrivingManager.h:174
	void RemoveAggressiveMove(int32_t, int32_t);

	// BrnNetworkAggressiveDrivingManager.h:179
	bool UpdateMarkedPlayersOnMarkedManTakeDown(EActiveRaceCarIndex);

	// BrnNetworkAggressiveDrivingManager.h:184
	void UpdateOnlineBattling(const ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:189
	int32_t CompareMove(AggressiveMoveData *, AggressiveMoveData *);

	// BrnNetworkAggressiveDrivingManager.h:194
	// Declaration
	bool AddNewMove(BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData *, AggressiveMoveData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkAggressiveDrivingManager.cpp:502
		using namespace CgsDev::Message;

	}

}

// BrnNetworkAggressiveDrivingManager.h:73
struct BrnNetwork::NetworkAggressiveDrivingManager {
private:
	// BrnNetworkAggressiveDrivingManager.h:140
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData[7] maAggressiveDrivingData;

	// BrnNetworkAggressiveDrivingManager.h:141
	float32_t mfNoImpactTime;

	// BrnNetworkAggressiveDrivingManager.h:142
	RoadRulesRecvData::NetworkPlayerID mLastVictimNetworkPlayerID;

	// BrnNetworkAggressiveDrivingManager.h:143
	int32_t miConsecutiveImpactsOnSamePlayer;

	// BrnNetworkAggressiveDrivingManager.h:144
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkAggressiveDrivingManager.h:145
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkAggressiveDrivingManager.h:146
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkAggressiveDrivingManager.h:147
	bool mbAreWeInOnlineGame;

public:
	// BrnNetworkAggressiveDrivingManager.h:81
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkAggressiveDrivingManager.h:85
	bool Prepare();

	// BrnNetworkAggressiveDrivingManager.h:89
	bool Release();

	// BrnNetworkAggressiveDrivingManager.h:93
	void Destruct();

	// BrnNetworkAggressiveDrivingManager.h:99
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, float32_t);

	// BrnNetworkAggressiveDrivingManager.h:104
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:109
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:114
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:117
	void Disconnected();

	// BrnNetworkAggressiveDrivingManager.h:121
	void OnRoundStart();

	// BrnNetworkAggressiveDrivingManager.h:125
	void OnRoundFinish();

private:
	// BrnNetworkAggressiveDrivingManager.h:152
	BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * GetAggressiveDrivingDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkAggressiveDrivingManager.h:156
	void ProcessInputQueue(const PostSimulationInputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:159
	void HandleSendingMessages();

	// BrnNetworkAggressiveDrivingManager.h:162
	void HandleReceivingMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkAggressiveDrivingManager.h:166
	bool AddImpactEvent(ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:170
	bool AddTakedownEvent(const TakedownEvent *);

	// BrnNetworkAggressiveDrivingManager.h:174
	void RemoveAggressiveMove(int32_t, int32_t);

	// BrnNetworkAggressiveDrivingManager.h:179
	bool UpdateMarkedPlayersOnMarkedManTakeDown(EActiveRaceCarIndex);

	// BrnNetworkAggressiveDrivingManager.h:184
	void UpdateOnlineBattling(const ImpactEvent *);

	// BrnNetworkAggressiveDrivingManager.h:189
	int32_t CompareMove(AggressiveMoveData *, AggressiveMoveData *);

	// BrnNetworkAggressiveDrivingManager.h:194
	bool AddNewMove(BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData *, AggressiveMoveData *);

}

