// BrnBurnoutSkillzManager.h:53
struct BrnGameState::BurnoutSkillzManager {
private:
	// BrnBurnoutSkillzManager.h:130
	int32_t[8] maiRoadsPlayersAreOn;

	// BrnBurnoutSkillzManager.h:131
	int32_t[8] maiBurnoutSkillsUpdatedFlags;

	// BrnBurnoutSkillzManager.h:133
	ChallengePlayerScoreEntry mBufferedChallengeScore;

	// BrnBurnoutSkillzManager.h:134
	Road::ChallengeIndex mBufferedScoreChallengeIndex;

	// BrnBurnoutSkillzManager.h:135
	BrnStreetData::ScoreType meBufferedScoreType;

	// BrnBurnoutSkillzManager.h:137
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnBurnoutSkillzManager.h:138
	StreetManager * mpStreetManager;

	// BrnBurnoutSkillzManager.h:139
	BrnGameState::MugshotManager * mpMugshotManager;

	// BrnBurnoutSkillzManager.h:140
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnBurnoutSkillzManager.h:142
	float32_t mfCurrentTimeInAir;

	// BrnBurnoutSkillzManager.h:143
	int32_t miCurrentBoostChains;

	// BrnBurnoutSkillzManager.h:144
	int32_t miCurrentTrafficChain;

	// BrnBurnoutSkillzManager.h:145
	SpanBase::RoadIndex miCurrentRoadIndex;

	// BrnBurnoutSkillzManager.h:147
	FastBitArray<8> mabDirtyFlags;

	// BrnBurnoutSkillzManager.h:149
	bool mbIsInCrashedState;

public:
	// BrnBurnoutSkillzManager.h:59
	void Construct(BrnGameState::ModeManager *);

	// BrnBurnoutSkillzManager.h:67
	void PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnBurnoutSkillzManager.h:72
	void UpdatePostWorld(const PostWorldInputBuffer *);

	// BrnBurnoutSkillzManager.h:78
	void SendUpdatePlayerSkillsEvent(EActiveRaceCarIndex, bool);

	// BrnBurnoutSkillzManager.h:87
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, EActiveRaceCarIndex);

	// BrnBurnoutSkillzManager.h:94
	void BufferNewRoadScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex);

	// BrnBurnoutSkillzManager.h:99
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnBurnoutSkillzManager.h:104
	void SetStreetManager(StreetManager *);

	// BrnBurnoutSkillzManager.h:108
	void SetMugshotManager(BrnGameState::MugshotManager *);

	// BrnBurnoutSkillzManager.h:113
	void OnModeEnd(bool);

private:
	// BrnBurnoutSkillzManager.h:153
	void ClearAllBurnoutSkillzData();

	// BrnBurnoutSkillzManager.h:157
	void ClearAllCurrentSkillzEarningData();

	// BrnBurnoutSkillzManager.h:164
	void UpdateBoostChains(BurnoutSkillzData *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex);

	// BrnBurnoutSkillzManager.h:169
	void UpdateLobbyRoadRulesScores(const NetworkToGameStateInterface::RoadRulesReceivedQueue *);

	// BrnBurnoutSkillzManager.h:176
	void ProcessNetworkRoadRulePB(InputBuffer::GameActionQueue *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *, EActiveRaceCarIndex);

	// BrnBurnoutSkillzManager.h:183
	bool GetRoadRuleHighScore(RoadRulesRecvData::NetworkPlayerID, Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnBurnoutSkillzManager.h:190
	void SetRoadRuleHighScore(RoadRulesRecvData::NetworkPlayerID, Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnBurnoutSkillzManager.h:197
	void ProcessGameEventInputQueuePreWorld(const GameEventQueue *, InputBuffer::GameActionQueue *, EActiveRaceCarIndex);

	// BrnBurnoutSkillzManager.h:205
	void ProcessGameEventInputQueuePostWorld(BurnoutSkillzData *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const GameEventQueue *, EActiveRaceCarIndex);

	// BrnBurnoutSkillzManager.h:214
	void SetNewSkillIfGreater(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, BurnoutSkillzData *, EActiveRaceCarIndex, float32_t);

	// BrnBurnoutSkillzManager.h:219
	bool AreAllCarWheelsOnTheGround(const RaceCarState *);

	// BrnBurnoutSkillzManager.h:224
	EActiveRaceCarIndex GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnBurnoutSkillzManager.h:228
	void UpdateBurnoutSkillzTotals(EActiveRaceCarIndex);

}

