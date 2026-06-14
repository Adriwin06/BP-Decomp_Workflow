// BrnOnlineFreeBurnLobbyMode.h:48
struct BrnGameState::OnlineFreeBurnLobbyMode : public BrnGameState::OnlineGameMode {
private:
	// BrnOnlineFreeBurnLobbyMode.h:142
	BurnoutSkillzManager mBurnoutSkillzManager;

public:
	// BrnOnlineFreeBurnLobbyMode.cpp:47
	virtual void Construct(BrnGameState::ModeManager *);

	// BrnOnlineFreeBurnLobbyMode.cpp:69
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnOnlineFreeBurnLobbyMode.cpp:91
	void BurnoutSkillzOnlyPreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnOnlineFreeBurnLobbyMode.cpp:106
	virtual void PostWorldUpdate(const PostWorldInputBuffer *);

	// BrnOnlineFreeBurnLobbyMode.h:153
	virtual const char * GetName() const;

	// BrnOnlineFreeBurnLobbyMode.cpp:124
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineFreeBurnLobbyMode.cpp:160
	virtual void PlayerHasSpawned(EActiveRaceCarIndex);

	// BrnOnlineFreeBurnLobbyMode.cpp:176
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnOnlineFreeBurnLobbyMode.cpp:257
	virtual void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, EActiveRaceCarIndex);

	// BrnOnlineFreeBurnLobbyMode.cpp:273
	void BufferNewRoadScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex);

	// BrnOnlineFreeBurnLobbyMode.cpp:300
	virtual void OnEnterRoad(SpanBase::RoadIndex);

	// BrnOnlineFreeBurnLobbyMode.h:167
	void SetStreetManager(StreetManager *);

	// BrnOnlineFreeBurnLobbyMode.h:182
	void SetMugshotManager(BrnGameState::MugshotManager *);

	// BrnOnlineFreeBurnLobbyMode.h:195
	virtual bool RequiresStreaming() const;

	// BrnOnlineFreeBurnLobbyMode.cpp:287
	void OnModeEnd(bool);

}

// BrnOnlineFreeBurnLobbyMode.h:48
void BrnGameState::OnlineFreeBurnLobbyMode::OnlineFreeBurnLobbyMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

