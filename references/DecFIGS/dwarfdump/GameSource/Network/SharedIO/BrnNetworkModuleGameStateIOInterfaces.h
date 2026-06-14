// BrnNetworkModuleGameStateIOInterfaces.h:58
struct BrnNetwork::BrnNetworkModuleIO::NetworkPlayerMappingData {
	// BrnNetworkModuleGameStateIOInterfaces.h:60
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleGameStateIOInterfaces.h:61
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnNetworkModuleGameStateIOInterfaces.h:74
struct BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface {
	// BrnNetworkSharedIO.h:509
	typedef EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> DirtyTrickQueue;

private:
	// BrnNetworkModuleGameStateIOInterfaces.h:158
	GameStateToNetworkInterface::DirtyTrickQueue mDirtyTrickQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:159
	NetworkPlayerMappingData[8] maMapping;

	// BrnNetworkModuleGameStateIOInterfaces.h:160
	bool[8] mabPlayersInFreeburnChallenge;

	// BrnNetworkModuleGameStateIOInterfaces.h:161
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:162
	bool mbIsInOnlineGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:163
	bool mbIsInCarSelect;

public:
	// BrnNetworkModuleGameStateIOInterfaces.h:79
	void Construct();

	// BrnNetworkModuleGameStateIOInterfaces.h:83
	void Clear();

	// BrnNetworkModuleGameStateIOInterfaces.h:88
	void Append(const GameStateToNetworkInterface *);

	// BrnNetworkModuleGameStateIOInterfaces.h:96
	void AddDirtyTrickEvent(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkModuleGameStateIOInterfaces.h:100
	GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:104
	const GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:108
	bool GetIsInOnlineGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:113
	void SetIsInOnlineGameMode(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:117
	bool GetIsInCarSelect() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:122
	void SetIsCarSelect(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:127
	// Declaration
	void SetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID, EActiveRaceCarIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkModuleGameStateIOInterfaces.h:466
		using namespace CgsDev::Message;

	}

	// BrnNetworkModuleGameStateIOInterfaces.h:131
	const EActiveRaceCarIndex GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:135
	const RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:140
	void SetCurrentGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnNetworkModuleGameStateIOInterfaces.h:144
	const BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:150
	void SetPlayerInFreeburnChallenge(EActiveRaceCarIndex, bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:155
	const bool GetPlayerInFreeburnChallenge(EActiveRaceCarIndex) const;

}

// BrnNetworkModuleGameStateIOInterfaces.h:177
struct BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface {
	// BrnNetworkSharedIO.h:360
	typedef EventQueue<BrnNetwork::RoadRulesRecvData,14> RoadRulesReceivedQueue;

private:
	// BrnNetworkModuleGameStateIOInterfaces.h:252
	NetworkToGameStateInterface::RoadRulesReceivedQueue mRoadRulesReceivedQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:253
	RoadRulesDownloadedQueue mRoadRulesDownloadedQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:254
	LocalRoadRulesDownloadedQueue mLocalRoadRulesDownloadedQueue;

	// Unknown accessibility
	// BrnGameStateSharedIO.h:302
	typedef EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> CompletedFburnChallengesQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:255
	NetworkToGameStateInterface::CompletedFburnChallengesQueue mCompletedChallengesQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:256
	GameStateToNetworkInterface::DirtyTrickQueue mDirtyTrickEventQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:257
	int32_t miNetworkFrameSinceStart;

public:
	// BrnNetworkModuleGameStateIOInterfaces.h:182
	void Construct();

	// BrnNetworkModuleGameStateIOInterfaces.h:187
	void Append(const NetworkToGameStateInterface *);

	// BrnNetworkModuleGameStateIOInterfaces.h:195
	void AddDirtyTrickEvent(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkModuleGameStateIOInterfaces.h:199
	NetworkToGameStateInterface::RoadRulesReceivedQueue * GetRoadRulesReceivedQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:203
	const NetworkToGameStateInterface::RoadRulesReceivedQueue * GetRoadRulesReceivedQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:207
	RoadRulesDownloadedQueue * GetRoadRulesDownloadedQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:211
	const RoadRulesDownloadedQueue * GetRoadRulesDownloadedQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:215
	LocalRoadRulesDownloadedQueue * GetLocalRoadRulesDownloadedQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:219
	const LocalRoadRulesDownloadedQueue * GetLocalRoadRulesDownloadedQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:223
	GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:227
	const GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:231
	NetworkToGameStateInterface::CompletedFburnChallengesQueue * GetCompletedChallengesQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:235
	const NetworkToGameStateInterface::CompletedFburnChallengesQueue * GetCompletedChallengesQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:240
	void SetFramesSinceStart(int32_t);

	// BrnNetworkModuleGameStateIOInterfaces.h:244
	int32_t GetFramesSinceStart();

	// BrnNetworkModuleGameStateIOInterfaces.h:248
	const int32_t GetFramesSinceStart() const;

}

// BrnNetworkModuleGameStateIOInterfaces.h:58
struct BrnNetwork::BrnNetworkModuleIO::NetworkPlayerMappingData {
	// BrnNetworkModuleGameStateIOInterfaces.h:60
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleGameStateIOInterfaces.h:61
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnNetworkModuleGameStateIOInterfaces.h:74
struct BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface {
	// BrnNetworkSharedIO.h:509
	typedef EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> DirtyTrickQueue;

private:
	// BrnNetworkModuleGameStateIOInterfaces.h:158
	GameStateToNetworkInterface::DirtyTrickQueue mDirtyTrickQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:159
	NetworkPlayerMappingData[8] maMapping;

	// BrnNetworkModuleGameStateIOInterfaces.h:160
	bool[8] mabPlayersInFreeburnChallenge;

	// BrnNetworkModuleGameStateIOInterfaces.h:161
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:162
	bool mbIsInOnlineGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:163
	bool mbIsInCarSelect;

public:
	// BrnNetworkModuleGameStateIOInterfaces.h:79
	void Construct();

	// BrnNetworkModuleGameStateIOInterfaces.h:83
	void Clear();

	// BrnNetworkModuleGameStateIOInterfaces.h:88
	void Append(const GameStateToNetworkInterface *);

	// BrnNetworkModuleGameStateIOInterfaces.h:96
	void AddDirtyTrickEvent(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkModuleGameStateIOInterfaces.h:100
	GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:104
	const GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:108
	bool GetIsInOnlineGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:113
	void SetIsInOnlineGameMode(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:117
	bool GetIsInCarSelect() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:122
	void SetIsCarSelect(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:127
	// Declaration
	void SetActiveRaceCarIndex(GuiEventNetworkLaunching::NetworkPlayerID, EActiveRaceCarIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkModuleGameStateIOInterfaces.h:466
		using namespace CgsDev::Message;

	}

	// BrnNetworkModuleGameStateIOInterfaces.h:131
	const EActiveRaceCarIndex GetActiveRaceCarIndex(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:135
	const GuiEventNetworkLaunching::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:140
	void SetCurrentGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnNetworkModuleGameStateIOInterfaces.h:144
	const BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:150
	void SetPlayerInFreeburnChallenge(EActiveRaceCarIndex, bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:155
	const bool GetPlayerInFreeburnChallenge(EActiveRaceCarIndex) const;

}

// BrnNetworkModuleGameStateIOInterfaces.h:58
struct BrnNetwork::BrnNetworkModuleIO::NetworkPlayerMappingData {
	// BrnNetworkModuleGameStateIOInterfaces.h:60
	AggressiveMoveData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleGameStateIOInterfaces.h:61
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnNetworkModuleGameStateIOInterfaces.h:74
struct BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface {
	// BrnNetworkSharedIO.h:509
	typedef EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> DirtyTrickQueue;

private:
	// BrnNetworkModuleGameStateIOInterfaces.h:158
	GameStateToNetworkInterface::DirtyTrickQueue mDirtyTrickQueue;

	// BrnNetworkModuleGameStateIOInterfaces.h:159
	NetworkPlayerMappingData[8] maMapping;

	// BrnNetworkModuleGameStateIOInterfaces.h:160
	bool[8] mabPlayersInFreeburnChallenge;

	// BrnNetworkModuleGameStateIOInterfaces.h:161
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:162
	bool mbIsInOnlineGameMode;

	// BrnNetworkModuleGameStateIOInterfaces.h:163
	bool mbIsInCarSelect;

public:
	// BrnNetworkModuleGameStateIOInterfaces.h:79
	void Construct();

	// BrnNetworkModuleGameStateIOInterfaces.h:83
	void Clear();

	// BrnNetworkModuleGameStateIOInterfaces.h:88
	void Append(const GameStateToNetworkInterface *);

	// BrnNetworkModuleGameStateIOInterfaces.h:96
	void AddDirtyTrickEvent(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkModuleGameStateIOInterfaces.h:100
	GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue();

	// BrnNetworkModuleGameStateIOInterfaces.h:104
	const GameStateToNetworkInterface::DirtyTrickQueue * GetDirtyTrickQueue() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:108
	bool GetIsInOnlineGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:113
	void SetIsInOnlineGameMode(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:117
	bool GetIsInCarSelect() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:122
	void SetIsCarSelect(bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:127
	// Declaration
	void SetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID, EActiveRaceCarIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkModuleGameStateIOInterfaces.h:466
		using namespace CgsDev::Message;

	}

	// BrnNetworkModuleGameStateIOInterfaces.h:131
	const EActiveRaceCarIndex GetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:135
	const AggressiveMoveData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex) const;

	// BrnNetworkModuleGameStateIOInterfaces.h:140
	void SetCurrentGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnNetworkModuleGameStateIOInterfaces.h:144
	const BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameMode() const;

	// BrnNetworkModuleGameStateIOInterfaces.h:150
	void SetPlayerInFreeburnChallenge(EActiveRaceCarIndex, bool);

	// BrnNetworkModuleGameStateIOInterfaces.h:155
	const bool GetPlayerInFreeburnChallenge(EActiveRaceCarIndex) const;

}

