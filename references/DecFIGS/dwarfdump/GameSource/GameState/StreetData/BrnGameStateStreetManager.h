// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateStreetManager.h:102
	const int32_t KI_MAX_CHALLENGES = 64;

	// BrnGameStateStreetManager.h:103
	const int32_t KI_MAX_BUFFERED_HIGH_SCORES = 5;

	// BrnGameStateStreetManager.h:106
	const int32_t KI_MAX_SECTIONS_TO_WALK = 25;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateStreetManager.h:92
	using GameStateModuleIO;

	// BrnGameStateStreetManager.h:93
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGameStateStreetManager.h:102
	const int32_t KI_MAX_CHALLENGES = 64;

	// BrnGameStateStreetManager.h:103
	const int32_t KI_MAX_BUFFERED_HIGH_SCORES = 5;

	// BrnGameStateStreetManager.h:106
	const int32_t KI_MAX_SECTIONS_TO_WALK = 25;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateStreetManager.h:112
	enum ERoadRuleCompletionStatus {
		E_ROAD_RULE_COMPLETION_STATUS_NO_DATA = 0,
		E_ROAD_RULE_COMPLETION_STATUS_BEATEN = 1,
		E_ROAD_RULE_COMPLETION_STATUS_NOT_BEATEN = 2,
		E_ROAD_RULE_COMPLETION_STATUS_COUNT = 3,
	}

	// BrnGameStateStreetManager.h:122
	enum ESectionEntryDirection {
		E_SECTION_ENTRY_DIRECTION_LEFT = 0,
		E_SECTION_ENTRY_DIRECTION_SIGNIFICANT_LEFT = 1,
		E_SECTION_ENTRY_DIRECTION_FORWARDS = 2,
		E_SECTION_ENTRY_DIRECTION_RIGHT = 3,
		E_SECTION_ENTRY_DIRECTION_SIGNIFICANT_RIGHT = 4,
		E_SECTION_ENTRY_DIRECTION_COUNT = 5,
	}

	// Declaration
	struct StreetManager {
		// BrnGameStateStreetManager.h:573
		enum LoadStage {
			E_LOAD_NOT_STARTED = 0,
			E_LOAD_REQUESTED = 1,
			E_ACQUIRE_NOT_STARTED = 2,
			E_ACQUIRE_REQUESTED = 3,
			E_LOAD_COMPLETE = 4,
		}

		// BrnGameStateStreetManager.h:583
		enum AILoadStage {
			E_AI_DATA_LOAD_NOT_STARTED = 0,
			E_AI_DATA_LOAD_REQUESTED = 1,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 2,
			E_AI_DATA_ACQUIRE_REQUESTED = 3,
			E_AI_DATA_LOAD_COMPLETE = 4,
		}

		// BrnGameStateStreetManager.h:593
		enum DistrictMapLoadStage {
			E_DISTRICT_MAP_LOAD_REQUEST = 0,
			E_DISTRICT_MAP_LOAD_RESPONSE = 1,
			E_DISTRICT_MAP_ACQUIRE_REQUEST = 2,
			E_DISTRICT_MAP_ACQUIRE_RESPONSE = 3,
			E_DISTRICT_MAP_DONE = 4,
		}

	}

	// BrnGameStateStreetManager.h:102
	const int32_t KI_MAX_CHALLENGES = 64;

	// BrnGameStateStreetManager.h:103
	const int32_t KI_MAX_BUFFERED_HIGH_SCORES = 5;

	// BrnGameStateStreetManager.h:106
	const int32_t KI_MAX_SECTIONS_TO_WALK = 25;

}

// BrnGameStateStreetManager.h:161
struct BrnGameState::BufferedNewHighScore {
	// BrnGameStateStreetManager.h:163
	PlayerName mPlayerName;

	// BrnGameStateStreetManager.h:164
	CgsID mRoadID;

	// BrnGameStateStreetManager.h:165
	BrnStreetData::ScoreType meScoreType;

	// BrnGameStateStreetManager.h:166
	bool mbIsRoadWhollyOwnedByOnePlayer;

	// BrnGameStateStreetManager.h:167
	bool mbWasRoadRuledByPlayerBefore;

}

// BrnGameStateStreetManager.h:179
struct BrnGameState::NewHighScoreBuffer : public Array<BrnGameState::BufferedNewHighScore,5u> {
public:
	// BrnGameStateStreetManager.h:186
	void EraseMatchingEntries(CgsID, BrnStreetData::ScoreType);

}

// BrnGameStateStreetManager.h:199
struct BrnGameState::StreetManager {
private:
	// BrnGameStateStreetManager.h:499
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnGameStateStreetManager.h:500
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnGameStateStreetManager.h:502
	CgsID[64][2] maaParRivalIds;

	// BrnGameStateStreetManager.h:505
	NewHighScoreBuffer mNewHighScoreBuffer;

	// BrnGameStateStreetManager.h:506
	BitArray<64u>[2] maRoadRulesChangedBitArrays;

	// BrnGameStateStreetManager.h:507
	float32_t mfUnbufferTimer;

	// BrnGameStateStreetManager.h:508
	int32_t miNumScoresLost;

	// BrnGameStateStreetManager.h:509
	BrnStreetData::ScoreType meActiveRoadRuleType;

	// BrnGameStateStreetManager.h:510
	bool mbTooManyHighScoresToBuffer;

	// BrnGameStateStreetManager.h:511
	bool mbFirstDownload;

	// BrnGameStateStreetManager.h:514
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGameStateStreetManager.h:515
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnGameStateStreetManager.h:516
	ResourceHandle mDistrictMapResourceHandle;

	// BrnGameStateStreetManager.h:518
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateStreetManager.h:519
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateStreetManager.h:520
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnGameStateStreetManager.h:523
	SpanBase::RoadIndex miCurrentPlayerRoadIndex;

	// BrnGameStateStreetManager.h:524
	SpanBase::RoadIndex miLastPlayerRoadIndex;

	// BrnGameStateStreetManager.h:526
	SpanBase::RoadIndex miHopefulForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:527
	SpanBase::RoadIndex miHopefulLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:528
	SpanBase::RoadIndex miHopefulRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:530
	SpanBase::RoadIndex miNewestForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:531
	SpanBase::RoadIndex miNewestLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:532
	SpanBase::RoadIndex miNewestRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:533
	SpanBase::RoadIndex miOriginalInterStateRoadIndex;

	// BrnGameStateStreetManager.h:535
	SmoothStep::Vector3 mCurrentPlayerSectionExitRight;

	// BrnGameStateStreetManager.h:537
	SmoothStep::Vector3 mFirstJunctionPosition;

	// BrnGameStateStreetManager.h:539
	SmoothStep::Vector3 mLastNode;

	// BrnGameStateStreetManager.h:540
	SmoothStep::Vector3 mSecondLastNode;

	// BrnGameStateStreetManager.h:542
	int32_t miNewRoadNodeIndex;

	// BrnGameStateStreetManager.h:543
	int32_t miLastRoadNodeIndex;

	// BrnGameStateStreetManager.h:545
	float32_t mfHopefulRoadTimer;

	// BrnGameStateStreetManager.h:546
	float32_t mfTimeInJunction;

	// BrnGameStateStreetManager.h:548
	SpanBase::RoadIndex mLeftRoadIndex;

	// BrnGameStateStreetManager.h:549
	SpanBase::RoadIndex mRightRoadIndex;

	// BrnGameStateStreetManager.h:551
	float32_t mfTotalTimeGoinTheWrongWay;

	// BrnGameStateStreetManager.h:552
	float32_t mfGuidanceLockTime;

	// BrnGameStateStreetManager.h:554
	int32_t miNextFreeSectionSlot;

	// BrnGameStateStreetManager.h:555
	uint16_t[25] mauWalkedSections;

	// BrnGameStateStreetManager.h:556
	bool mbNeedToUpdateUpcomingRoads;

	// BrnGameStateStreetManager.h:558
	bool mbRightRoadHighlighted;

	// BrnGameStateStreetManager.h:559
	bool mbLeftRoadHighlighted;

	// BrnGameStateStreetManager.h:560
	bool mbNewRoadIsInterStateExit;

	// BrnGameStateStreetManager.h:561
	bool mbPlayerOnInterstateExit;

	// BrnGameStateStreetManager.h:562
	bool mbJunctionPosSet;

	// BrnGameStateStreetManager.h:564
	bool mbWrongWay;

	// BrnGameStateStreetManager.h:566
	bool mbLockRightSign;

	// BrnGameStateStreetManager.h:567
	bool mbLockLeftSign;

	// BrnGameStateStreetManager.h:570
	bool mbPlayerIsInAShortcut;

	// BrnGameStateStreetManager.h:602
	BrnGameState::StreetManager::LoadStage meLoadStage;

	// BrnGameStateStreetManager.h:603
	BrnGameState::StreetManager::AILoadStage meAILoadStage;

	// BrnGameStateStreetManager.h:604
	BrnGameState::StreetManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnGameStateStreetManager.h:607
	int32_t miUpcomingRoadsPM;

	// BrnGameStateStreetManager.h:608
	int32_t miUpcomingRoadsSentMessagePM;

	// BrnGameStateStreetManager.h:609
	int32_t miUpcomingRoadsQSortPM;

	// BrnGameStateStreetManager.h:610
	int32_t miSetRoadRuleChallengeDataPM;

	// BrnGameStateStreetManager.h:611
	int32_t miSetRoadRuleNetworkHighScoresPM;

	// BrnGameStateStreetManager.h:618
	BrnGameState::StreetManagerDebugComponent mStreetManagerDebugComponent;

public:
	// BrnGameStateStreetManager.h:215
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, BrnGameState::RoadRulesManager *);

	// BrnGameStateStreetManager.h:222
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *, const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:226
	bool Release();

	// BrnGameStateStreetManager.h:230
	void Destruct();

	// BrnGameStateStreetManager.h:244
	void Update(bool, float32_t, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, bool, bool, float32_t);

	// BrnGameStateStreetManager.h:255
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, bool);

	// BrnGameStateStreetManager.h:260
	void OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:266
	void ProcessNetworkHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *);

	// BrnGameStateStreetManager.h:271
	void ProcessUploadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent *);

	// BrnGameStateStreetManager.h:276
	void ProcessDownloadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent *);

	// BrnGameStateStreetManager.h:282
	void ProcessConnectedOnlineEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent *);

	// BrnGameStateStreetManager.h:288
	void ProcessScoreRequestEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent *);

	// BrnGameStateStreetManager.h:292
	void ProcessOnlineGameLaunchedEvent();

	// BrnGameStateStreetManager.h:297
	void ProcessActiveRoadRuleChange(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:303
	void ProcessBuddyRemoved(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::BuddyRemovedEvent *);

	// BrnGameStateStreetManager.h:310
	bool LoadStreetData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:315
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:320
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:326
	const StreetData * GetStreetData();

	// BrnGameStateStreetManager.h:334
	int32_t GetRoadCount() const;

	// BrnGameStateStreetManager.h:338
	void OnEnterNewRoad();

	// BrnGameStateStreetManager.h:343
	const Road * GetRoad(SpanBase::RoadIndex) const;

	// BrnGameStateStreetManager.h:351
	const Junction * GetJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:356
	const bool IsJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:364
	const Street * GetStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:369
	const bool IsStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:377
	const SpanBase * GetSpan(Road::SpanIndex);

	// BrnGameStateStreetManager.h:381
	Road::SpanIndex GetSpanIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:385
	SpanBase::RoadIndex GetRoadIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:397
	void GetChallengeUserScore(Road::ChallengeIndex, ChallengePlayerScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:405
	void GetChallengeFriendHighScore(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:412
	void GetChallengeParScore(Road::ChallengeIndex, ChallengeParScoresEntry *) const;

	// BrnGameStateStreetManager.h:417
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:422
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:427
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParAndFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:437
	void CopyFriendHighScoreChallengeData(ChallengeHighScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:447
	void CopyUserChallengeData(ChallengePlayerScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:452
	CgsID GetParRivalId(int32_t, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:456
	SpanBase::RoadIndex GetCurrentPlayerRoadIndex();

	// BrnGameStateStreetManager.h:459
	CgsID GetForwardPlayerRoadId();

	// BrnGameStateStreetManager.h:462
	CgsID GetLeftPlayerRoadId();

	// BrnGameStateStreetManager.h:465
	CgsID GetRightPlayerRoadId();

	// BrnGameStateStreetManager.h:468
	const ResourceHandle * GetDistrictMapResourceHandle() const;

	// BrnGameStateStreetManager.h:472
	int32_t GetNumberOfCompleteRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:476
	int32_t GetNumberOfParShowTimeRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:480
	int32_t GetNumberOfParTimeTrialRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:484
	void ClearUpcomingRoadIds();

	// BrnGameStateStreetManager.h:489
	void FillInRoadRulesQuery(BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction *);

private:
	// BrnGameStateStreetManager.h:629
	void UpdateUpcomingStreets(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t, bool);

	// BrnGameStateStreetManager.h:636
	void UpdateWrongWayMessages(float32_t, float32_t);

	// BrnGameStateStreetManager.h:646
	void FindUpcomingStreetsByRecursiveWalking(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, float32_t, uint16_t, bool);

	// BrnGameStateStreetManager.h:660
	void WalkAISection(const Vector3Template<float> &, const Vector3Template<float> &, const AISection *, uint16_t, const Vector3Template<float> &, const Vector3Template<float> &, BrnGameState::ESectionEntryDirection, int32_t, int32_t, bool);

	// BrnGameStateStreetManager.h:669
	void FindUpcomingStreetsFromRoute(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnGameStateStreetManager.h:677
	void SendUpcomingRoadMessage(BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, bool, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:683
	float32_t GetOverallAngleForRoadTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:689
	void DrawCurrentNodeRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:695
	void DrawPlayerRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:700
	bool IsRoadOnTheInterState(SpanBase::RoadIndex);

	// BrnGameStateStreetManager.h:705
	void UpdateTrophyUnlockOnRoadRuleWin(BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:711
	// Declaration
	void UpdateFriendHighScores() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:390
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> RoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:717
	float32_t CalculateDistanceToTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:723
	// Declaration
	void UpdateUserScoresFromServerRecords(const LocalRoadRulesDownloadedQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:400
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40> LocalRoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:730
	void UpdateBufferedHighScores(float32_t, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:734
	void UpdateRoadRulesProfileScores();

	// BrnGameStateStreetManager.h:740
	ChallengeHighScoreEntry CreateHighScoreEntryFromRoadRulesData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:746
	ChallengeHighScoreEntry CreateHighScoreEntryFromDownloadData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:751
	ChallengePlayerScoreEntry CreateUserChallengeScoreFromRoadRulesData(const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:755
	int32_t GetNumberOfRoadsRulesByLocalPlayer();

	// BrnGameStateStreetManager.h:761
	bool CheckForNewHighScore(int32_t, ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:766
	BrnStreetData::ScoreType GetActiveRoadRuleType(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:773
	void GetHighScoreEntry(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool);

	// BrnGameStateStreetManager.h:780
	void SetChallengeUserScore(Road::ChallengeIndex, const ChallengePlayerScoreEntry *, bool);

	// BrnGameStateStreetManager.h:786
	void SetChallengeFriendHighScore(Road::ChallengeIndex, const ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:791
	void SetChallengeFriendDownloadTimestamp(uint32_t);

	// BrnGameStateStreetManager.h:798
	void ProcessLocalHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:802
	void SetupParRivals(const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:808
	int32_t FindRivalsByDistrict(BrnWorld::EDistrict, CgsID *, int32_t);

	// BrnGameStateStreetManager.h:811
	void ClearSectionWalkingData();

	// BrnGameStateStreetManager.h:814
	void ClearUpcomingRoadStickiness();

	// BrnGameStateStreetManager.h:818
	void ClearAllChallengeData();

	// BrnGameStateStreetManager.h:823
	bool ClearAllChallengeDataForBuddy(const PlayerName *);

	// BrnGameStateStreetManager.h:827
	void PushSectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:831
	bool HasSectionAlreadyBeenWalked(uint16_t);

	// BrnGameStateStreetManager.h:834
	bool CanContinueWalking();

	// BrnGameStateStreetManager.h:839
	int32_t GetSaveGameChallengeIndexByRoadID(CgsID) const;

	// BrnGameStateStreetManager.h:844
	bool AreRoadsAFollowOnPair(SpanBase::RoadIndex, SpanBase::RoadIndex);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateStreetManager.h:92
	using GameStateModuleIO;

	// BrnGameStateStreetManager.h:93
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGameStateStreetManager.h:112
	enum ERoadRuleCompletionStatus {
		E_ROAD_RULE_COMPLETION_STATUS_NO_DATA = 0,
		E_ROAD_RULE_COMPLETION_STATUS_BEATEN = 1,
		E_ROAD_RULE_COMPLETION_STATUS_NOT_BEATEN = 2,
		E_ROAD_RULE_COMPLETION_STATUS_COUNT = 3,
	}

	// BrnGameStateStreetManager.h:122
	enum ESectionEntryDirection {
		E_SECTION_ENTRY_DIRECTION_LEFT = 0,
		E_SECTION_ENTRY_DIRECTION_SIGNIFICANT_LEFT = 1,
		E_SECTION_ENTRY_DIRECTION_FORWARDS = 2,
		E_SECTION_ENTRY_DIRECTION_RIGHT = 3,
		E_SECTION_ENTRY_DIRECTION_SIGNIFICANT_RIGHT = 4,
		E_SECTION_ENTRY_DIRECTION_COUNT = 5,
	}

	// Declaration
	struct StreetManager {
		// BrnGameStateStreetManager.h:573
		enum LoadStage {
			E_LOAD_NOT_STARTED = 0,
			E_LOAD_REQUESTED = 1,
			E_ACQUIRE_NOT_STARTED = 2,
			E_ACQUIRE_REQUESTED = 3,
			E_LOAD_COMPLETE = 4,
		}

		// BrnGameStateStreetManager.h:583
		enum AILoadStage {
			E_AI_DATA_LOAD_NOT_STARTED = 0,
			E_AI_DATA_LOAD_REQUESTED = 1,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 2,
			E_AI_DATA_ACQUIRE_REQUESTED = 3,
			E_AI_DATA_LOAD_COMPLETE = 4,
		}

		// BrnGameStateStreetManager.h:593
		enum DistrictMapLoadStage {
			E_DISTRICT_MAP_LOAD_REQUEST = 0,
			E_DISTRICT_MAP_LOAD_RESPONSE = 1,
			E_DISTRICT_MAP_ACQUIRE_REQUEST = 2,
			E_DISTRICT_MAP_ACQUIRE_RESPONSE = 3,
			E_DISTRICT_MAP_DONE = 4,
		}

	}

	// BrnGameStateStreetManager.h:102
	const int32_t KI_MAX_CHALLENGES = 64;

	// BrnGameStateStreetManager.h:103
	const int32_t KI_MAX_BUFFERED_HIGH_SCORES = 5;

	// BrnGameStateStreetManager.h:106
	const int32_t KI_MAX_SECTIONS_TO_WALK = 25;

}

// BrnGameStateStreetManager.h:142
struct BrnGameState::SectionWalkData {
	// BrnGameStateStreetManager.h:144
	const AISection * mpLinkSection;

	// BrnGameStateStreetManager.h:145
	const Portal * mpLinkPortal;

	// BrnGameStateStreetManager.h:146
	Road::Vector3 mEntryPos;

	// BrnGameStateStreetManager.h:147
	Road::Vector3 mEntryDir;

	// BrnGameStateStreetManager.h:148
	float32_t mfEntryAngle;

	// BrnGameStateStreetManager.h:149
	uint16_t muSectionIndex;

}

// BrnGameStateStreetManager.h:199
struct BrnGameState::StreetManager {
private:
	// BrnGameStateStreetManager.h:499
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnGameStateStreetManager.h:500
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnGameStateStreetManager.h:502
	CgsID[64][2] maaParRivalIds;

	// BrnGameStateStreetManager.h:505
	NewHighScoreBuffer mNewHighScoreBuffer;

	// BrnGameStateStreetManager.h:506
	BitArray<64u>[2] maRoadRulesChangedBitArrays;

	// BrnGameStateStreetManager.h:507
	float32_t mfUnbufferTimer;

	// BrnGameStateStreetManager.h:508
	int32_t miNumScoresLost;

	// BrnGameStateStreetManager.h:509
	BrnStreetData::ScoreType meActiveRoadRuleType;

	// BrnGameStateStreetManager.h:510
	bool mbTooManyHighScoresToBuffer;

	// BrnGameStateStreetManager.h:511
	bool mbFirstDownload;

	// BrnGameStateStreetManager.h:514
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGameStateStreetManager.h:515
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnGameStateStreetManager.h:516
	ResourceHandle mDistrictMapResourceHandle;

	// BrnGameStateStreetManager.h:518
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateStreetManager.h:519
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateStreetManager.h:520
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnGameStateStreetManager.h:523
	SpanBase::RoadIndex miCurrentPlayerRoadIndex;

	// BrnGameStateStreetManager.h:524
	SpanBase::RoadIndex miLastPlayerRoadIndex;

	// BrnGameStateStreetManager.h:526
	SpanBase::RoadIndex miHopefulForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:527
	SpanBase::RoadIndex miHopefulLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:528
	SpanBase::RoadIndex miHopefulRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:530
	SpanBase::RoadIndex miNewestForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:531
	SpanBase::RoadIndex miNewestLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:532
	SpanBase::RoadIndex miNewestRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:533
	SpanBase::RoadIndex miOriginalInterStateRoadIndex;

	// BrnGameStateStreetManager.h:535
	Road::Vector3 mCurrentPlayerSectionExitRight;

	// BrnGameStateStreetManager.h:537
	Road::Vector3 mFirstJunctionPosition;

	// BrnGameStateStreetManager.h:539
	Road::Vector3 mLastNode;

	// BrnGameStateStreetManager.h:540
	Road::Vector3 mSecondLastNode;

	// BrnGameStateStreetManager.h:542
	int32_t miNewRoadNodeIndex;

	// BrnGameStateStreetManager.h:543
	int32_t miLastRoadNodeIndex;

	// BrnGameStateStreetManager.h:545
	float32_t mfHopefulRoadTimer;

	// BrnGameStateStreetManager.h:546
	float32_t mfTimeInJunction;

	// BrnGameStateStreetManager.h:548
	SpanBase::RoadIndex mLeftRoadIndex;

	// BrnGameStateStreetManager.h:549
	SpanBase::RoadIndex mRightRoadIndex;

	// BrnGameStateStreetManager.h:551
	float32_t mfTotalTimeGoinTheWrongWay;

	// BrnGameStateStreetManager.h:552
	float32_t mfGuidanceLockTime;

	// BrnGameStateStreetManager.h:554
	int32_t miNextFreeSectionSlot;

	// BrnGameStateStreetManager.h:555
	uint16_t[25] mauWalkedSections;

	// BrnGameStateStreetManager.h:556
	bool mbNeedToUpdateUpcomingRoads;

	// BrnGameStateStreetManager.h:558
	bool mbRightRoadHighlighted;

	// BrnGameStateStreetManager.h:559
	bool mbLeftRoadHighlighted;

	// BrnGameStateStreetManager.h:560
	bool mbNewRoadIsInterStateExit;

	// BrnGameStateStreetManager.h:561
	bool mbPlayerOnInterstateExit;

	// BrnGameStateStreetManager.h:562
	bool mbJunctionPosSet;

	// BrnGameStateStreetManager.h:564
	bool mbWrongWay;

	// BrnGameStateStreetManager.h:566
	bool mbLockRightSign;

	// BrnGameStateStreetManager.h:567
	bool mbLockLeftSign;

	// BrnGameStateStreetManager.h:570
	bool mbPlayerIsInAShortcut;

	// BrnGameStateStreetManager.h:602
	BrnGameState::StreetManager::LoadStage meLoadStage;

	// BrnGameStateStreetManager.h:603
	BrnGameState::StreetManager::AILoadStage meAILoadStage;

	// BrnGameStateStreetManager.h:604
	BrnGameState::StreetManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnGameStateStreetManager.h:607
	int32_t miUpcomingRoadsPM;

	// BrnGameStateStreetManager.h:608
	int32_t miUpcomingRoadsSentMessagePM;

	// BrnGameStateStreetManager.h:609
	int32_t miUpcomingRoadsQSortPM;

	// BrnGameStateStreetManager.h:610
	int32_t miSetRoadRuleChallengeDataPM;

	// BrnGameStateStreetManager.h:611
	int32_t miSetRoadRuleNetworkHighScoresPM;

	// BrnGameStateStreetManager.h:618
	BrnGameState::StreetManagerDebugComponent mStreetManagerDebugComponent;

public:
	// BrnGameStateStreetManager.h:215
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, BrnGameState::RoadRulesManager *);

	// BrnGameStateStreetManager.h:222
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *, const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:226
	bool Release();

	// BrnGameStateStreetManager.h:230
	void Destruct();

	// BrnGameStateStreetManager.h:244
	void Update(bool, float32_t, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, bool, bool, float32_t);

	// BrnGameStateStreetManager.h:255
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, bool);

	// BrnGameStateStreetManager.h:260
	void OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:266
	void ProcessNetworkHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *);

	// BrnGameStateStreetManager.h:271
	void ProcessUploadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent *);

	// BrnGameStateStreetManager.h:276
	void ProcessDownloadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent *);

	// BrnGameStateStreetManager.h:282
	void ProcessConnectedOnlineEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent *);

	// BrnGameStateStreetManager.h:288
	void ProcessScoreRequestEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent *);

	// BrnGameStateStreetManager.h:292
	void ProcessOnlineGameLaunchedEvent();

	// BrnGameStateStreetManager.h:297
	void ProcessActiveRoadRuleChange(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:303
	void ProcessBuddyRemoved(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::BuddyRemovedEvent *);

	// BrnGameStateStreetManager.h:310
	// Declaration
	bool LoadStreetData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameStateStreetManager.cpp:3341
		using namespace CgsDev::Message;

		// BrnGameStateStreetManager.cpp:3345
		using namespace CgsDev::Message;

		// BrnGameStateStreetManager.cpp:3349
		using namespace CgsDev::Message;

	}

	// BrnGameStateStreetManager.h:315
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:320
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:326
	const StreetData * GetStreetData();

	// BrnGameStateStreetManager.h:334
	int32_t GetRoadCount() const;

	// BrnGameStateStreetManager.h:338
	void OnEnterNewRoad();

	// BrnGameStateStreetManager.h:343
	const Road * GetRoad(SpanBase::RoadIndex) const;

	// BrnGameStateStreetManager.h:351
	const Junction * GetJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:356
	const bool IsJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:364
	const Street * GetStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:369
	const bool IsStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:377
	const SpanBase * GetSpan(Road::SpanIndex);

	// BrnGameStateStreetManager.h:381
	Road::SpanIndex GetSpanIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:385
	SpanBase::RoadIndex GetRoadIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:397
	void GetChallengeUserScore(Road::ChallengeIndex, ChallengePlayerScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:405
	void GetChallengeFriendHighScore(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:412
	void GetChallengeParScore(Road::ChallengeIndex, ChallengeParScoresEntry *) const;

	// BrnGameStateStreetManager.h:417
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:422
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:427
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParAndFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:437
	void CopyFriendHighScoreChallengeData(ChallengeHighScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:447
	void CopyUserChallengeData(ChallengePlayerScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:452
	CgsID GetParRivalId(int32_t, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:456
	SpanBase::RoadIndex GetCurrentPlayerRoadIndex();

	// BrnGameStateStreetManager.h:459
	CgsID GetForwardPlayerRoadId();

	// BrnGameStateStreetManager.h:462
	CgsID GetLeftPlayerRoadId();

	// BrnGameStateStreetManager.h:465
	CgsID GetRightPlayerRoadId();

	// BrnGameStateStreetManager.h:468
	const ResourceHandle * GetDistrictMapResourceHandle() const;

	// BrnGameStateStreetManager.h:472
	int32_t GetNumberOfCompleteRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:476
	int32_t GetNumberOfParShowTimeRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:480
	int32_t GetNumberOfParTimeTrialRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:484
	void ClearUpcomingRoadIds();

	// BrnGameStateStreetManager.h:489
	void FillInRoadRulesQuery(BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction *);

private:
	// BrnGameStateStreetManager.h:629
	void UpdateUpcomingStreets(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t, bool);

	// BrnGameStateStreetManager.h:636
	void UpdateWrongWayMessages(float32_t, float32_t);

	// BrnGameStateStreetManager.h:646
	void FindUpcomingStreetsByRecursiveWalking(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, float32_t, uint16_t, bool);

	// BrnGameStateStreetManager.h:660
	void WalkAISection(const Vector3Template<float> &, const Vector3Template<float> &, const AISection *, uint16_t, const Vector3Template<float> &, const Vector3Template<float> &, BrnGameState::ESectionEntryDirection, int32_t, int32_t, bool);

	// BrnGameStateStreetManager.h:669
	void FindUpcomingStreetsFromRoute(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnGameStateStreetManager.h:677
	void SendUpcomingRoadMessage(BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, bool, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:683
	float32_t GetOverallAngleForRoadTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:689
	void DrawCurrentNodeRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:695
	void DrawPlayerRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:700
	bool IsRoadOnTheInterState(SpanBase::RoadIndex);

	// BrnGameStateStreetManager.h:705
	void UpdateTrophyUnlockOnRoadRuleWin(BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:711
	// Declaration
	void UpdateFriendHighScores(const RoadRulesDownloadedQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:390
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> RoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:717
	float32_t CalculateDistanceToTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:723
	// Declaration
	void UpdateUserScoresFromServerRecords(const LocalRoadRulesDownloadedQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:400
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40> LocalRoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:730
	void UpdateBufferedHighScores(float32_t, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:734
	void UpdateRoadRulesProfileScores();

	// BrnGameStateStreetManager.h:740
	ChallengeHighScoreEntry CreateHighScoreEntryFromRoadRulesData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:746
	ChallengeHighScoreEntry CreateHighScoreEntryFromDownloadData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:751
	ChallengePlayerScoreEntry CreateUserChallengeScoreFromRoadRulesData(const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:755
	int32_t GetNumberOfRoadsRulesByLocalPlayer();

	// BrnGameStateStreetManager.h:761
	bool CheckForNewHighScore(int32_t, ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:766
	BrnStreetData::ScoreType GetActiveRoadRuleType(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:773
	void GetHighScoreEntry(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool);

	// BrnGameStateStreetManager.h:780
	void SetChallengeUserScore(Road::ChallengeIndex, const ChallengePlayerScoreEntry *, bool);

	// BrnGameStateStreetManager.h:786
	void SetChallengeFriendHighScore(Road::ChallengeIndex, const ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:791
	void SetChallengeFriendDownloadTimestamp(uint32_t);

	// BrnGameStateStreetManager.h:798
	void ProcessLocalHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:802
	void SetupParRivals(const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:808
	int32_t FindRivalsByDistrict(BrnWorld::EDistrict, CgsID *, int32_t);

	// BrnGameStateStreetManager.h:811
	void ClearSectionWalkingData();

	// BrnGameStateStreetManager.h:814
	void ClearUpcomingRoadStickiness();

	// BrnGameStateStreetManager.h:818
	void ClearAllChallengeData();

	// BrnGameStateStreetManager.h:823
	bool ClearAllChallengeDataForBuddy(const PlayerName *);

	// BrnGameStateStreetManager.h:827
	void PushSectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:831
	bool HasSectionAlreadyBeenWalked(uint16_t);

	// BrnGameStateStreetManager.h:834
	bool CanContinueWalking();

	// BrnGameStateStreetManager.h:839
	int32_t GetSaveGameChallengeIndexByRoadID(CgsID) const;

	// BrnGameStateStreetManager.h:844
	bool AreRoadsAFollowOnPair(SpanBase::RoadIndex, SpanBase::RoadIndex);

}

// BrnGameStateStreetManager.h:199
struct BrnGameState::StreetManager {
private:
	// BrnGameStateStreetManager.h:499
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnGameStateStreetManager.h:500
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnGameStateStreetManager.h:502
	CgsID[64][2] maaParRivalIds;

	// BrnGameStateStreetManager.h:505
	NewHighScoreBuffer mNewHighScoreBuffer;

	// BrnGameStateStreetManager.h:506
	BitArray<64u>[2] maRoadRulesChangedBitArrays;

	// BrnGameStateStreetManager.h:507
	float32_t mfUnbufferTimer;

	// BrnGameStateStreetManager.h:508
	int32_t miNumScoresLost;

	// BrnGameStateStreetManager.h:509
	BrnStreetData::ScoreType meActiveRoadRuleType;

	// BrnGameStateStreetManager.h:510
	bool mbTooManyHighScoresToBuffer;

	// BrnGameStateStreetManager.h:511
	bool mbFirstDownload;

	// BrnGameStateStreetManager.h:514
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGameStateStreetManager.h:515
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnGameStateStreetManager.h:516
	ResourceHandle mDistrictMapResourceHandle;

	// BrnGameStateStreetManager.h:518
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateStreetManager.h:519
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateStreetManager.h:520
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnGameStateStreetManager.h:523
	SpanBase::RoadIndex miCurrentPlayerRoadIndex;

	// BrnGameStateStreetManager.h:524
	SpanBase::RoadIndex miLastPlayerRoadIndex;

	// BrnGameStateStreetManager.h:526
	SpanBase::RoadIndex miHopefulForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:527
	SpanBase::RoadIndex miHopefulLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:528
	SpanBase::RoadIndex miHopefulRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:530
	SpanBase::RoadIndex miNewestForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:531
	SpanBase::RoadIndex miNewestLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:532
	SpanBase::RoadIndex miNewestRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:533
	SpanBase::RoadIndex miOriginalInterStateRoadIndex;

	// BrnGameStateStreetManager.h:535
	Road::Vector3 mCurrentPlayerSectionExitRight;

	// BrnGameStateStreetManager.h:537
	Road::Vector3 mFirstJunctionPosition;

	// BrnGameStateStreetManager.h:539
	Road::Vector3 mLastNode;

	// BrnGameStateStreetManager.h:540
	Road::Vector3 mSecondLastNode;

	// BrnGameStateStreetManager.h:542
	int32_t miNewRoadNodeIndex;

	// BrnGameStateStreetManager.h:543
	int32_t miLastRoadNodeIndex;

	// BrnGameStateStreetManager.h:545
	float32_t mfHopefulRoadTimer;

	// BrnGameStateStreetManager.h:546
	float32_t mfTimeInJunction;

	// BrnGameStateStreetManager.h:548
	SpanBase::RoadIndex mLeftRoadIndex;

	// BrnGameStateStreetManager.h:549
	SpanBase::RoadIndex mRightRoadIndex;

	// BrnGameStateStreetManager.h:551
	float32_t mfTotalTimeGoinTheWrongWay;

	// BrnGameStateStreetManager.h:552
	float32_t mfGuidanceLockTime;

	// BrnGameStateStreetManager.h:554
	int32_t miNextFreeSectionSlot;

	// BrnGameStateStreetManager.h:555
	uint16_t[25] mauWalkedSections;

	// BrnGameStateStreetManager.h:556
	bool mbNeedToUpdateUpcomingRoads;

	// BrnGameStateStreetManager.h:558
	bool mbRightRoadHighlighted;

	// BrnGameStateStreetManager.h:559
	bool mbLeftRoadHighlighted;

	// BrnGameStateStreetManager.h:560
	bool mbNewRoadIsInterStateExit;

	// BrnGameStateStreetManager.h:561
	bool mbPlayerOnInterstateExit;

	// BrnGameStateStreetManager.h:562
	bool mbJunctionPosSet;

	// BrnGameStateStreetManager.h:564
	bool mbWrongWay;

	// BrnGameStateStreetManager.h:566
	bool mbLockRightSign;

	// BrnGameStateStreetManager.h:567
	bool mbLockLeftSign;

	// BrnGameStateStreetManager.h:570
	bool mbPlayerIsInAShortcut;

	// BrnGameStateStreetManager.h:602
	BrnGameState::StreetManager::LoadStage meLoadStage;

	// BrnGameStateStreetManager.h:603
	BrnGameState::StreetManager::AILoadStage meAILoadStage;

	// BrnGameStateStreetManager.h:604
	BrnGameState::StreetManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnGameStateStreetManager.h:607
	int32_t miUpcomingRoadsPM;

	// BrnGameStateStreetManager.h:608
	int32_t miUpcomingRoadsSentMessagePM;

	// BrnGameStateStreetManager.h:609
	int32_t miUpcomingRoadsQSortPM;

	// BrnGameStateStreetManager.h:610
	int32_t miSetRoadRuleChallengeDataPM;

	// BrnGameStateStreetManager.h:611
	int32_t miSetRoadRuleNetworkHighScoresPM;

	// BrnGameStateStreetManager.h:618
	BrnGameState::StreetManagerDebugComponent mStreetManagerDebugComponent;

public:
	// BrnGameStateStreetManager.h:215
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, BrnGameState::RoadRulesManager *);

	// BrnGameStateStreetManager.h:222
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *, const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:226
	bool Release();

	// BrnGameStateStreetManager.h:230
	void Destruct();

	// BrnGameStateStreetManager.h:244
	void Update(bool, float32_t, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, bool, bool, float32_t);

	// BrnGameStateStreetManager.h:255
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, bool);

	// BrnGameStateStreetManager.h:260
	void OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:266
	void ProcessNetworkHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *);

	// BrnGameStateStreetManager.h:271
	void ProcessUploadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent *);

	// BrnGameStateStreetManager.h:276
	void ProcessDownloadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent *);

	// BrnGameStateStreetManager.h:282
	void ProcessConnectedOnlineEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent *);

	// BrnGameStateStreetManager.h:288
	void ProcessScoreRequestEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent *);

	// BrnGameStateStreetManager.h:292
	void ProcessOnlineGameLaunchedEvent();

	// BrnGameStateStreetManager.h:297
	void ProcessActiveRoadRuleChange(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:303
	void ProcessBuddyRemoved(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::BuddyRemovedEvent *);

	// BrnGameStateStreetManager.h:310
	bool LoadStreetData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:315
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:320
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:326
	const StreetData * GetStreetData();

	// BrnGameStateStreetManager.h:334
	int32_t GetRoadCount() const;

	// BrnGameStateStreetManager.h:338
	void OnEnterNewRoad();

	// BrnGameStateStreetManager.h:343
	const Road * GetRoad(SpanBase::RoadIndex) const;

	// BrnGameStateStreetManager.h:351
	const Junction * GetJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:356
	const bool IsJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:364
	const Street * GetStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:369
	const bool IsStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:377
	const SpanBase * GetSpan(Road::SpanIndex);

	// BrnGameStateStreetManager.h:381
	Road::SpanIndex GetSpanIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:385
	SpanBase::RoadIndex GetRoadIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:397
	void GetChallengeUserScore(Road::ChallengeIndex, ChallengePlayerScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:405
	void GetChallengeFriendHighScore(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:412
	void GetChallengeParScore(Road::ChallengeIndex, ChallengeParScoresEntry *) const;

	// BrnGameStateStreetManager.h:417
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:422
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:427
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParAndFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:437
	void CopyFriendHighScoreChallengeData(ChallengeHighScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:447
	void CopyUserChallengeData(ChallengePlayerScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:452
	CgsID GetParRivalId(int32_t, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:456
	SpanBase::RoadIndex GetCurrentPlayerRoadIndex();

	// BrnGameStateStreetManager.h:459
	CgsID GetForwardPlayerRoadId();

	// BrnGameStateStreetManager.h:462
	CgsID GetLeftPlayerRoadId();

	// BrnGameStateStreetManager.h:465
	CgsID GetRightPlayerRoadId();

	// BrnGameStateStreetManager.h:468
	const ResourceHandle * GetDistrictMapResourceHandle() const;

	// BrnGameStateStreetManager.h:472
	int32_t GetNumberOfCompleteRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:476
	int32_t GetNumberOfParShowTimeRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:480
	int32_t GetNumberOfParTimeTrialRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:484
	void ClearUpcomingRoadIds();

	// BrnGameStateStreetManager.h:489
	void FillInRoadRulesQuery(BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction *);

private:
	// BrnGameStateStreetManager.h:629
	void UpdateUpcomingStreets(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t, bool);

	// BrnGameStateStreetManager.h:636
	void UpdateWrongWayMessages(float32_t, float32_t);

	// BrnGameStateStreetManager.h:646
	void FindUpcomingStreetsByRecursiveWalking(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, float32_t, uint16_t, bool);

	// BrnGameStateStreetManager.h:660
	void WalkAISection(const Vector3Template<float> &, const Vector3Template<float> &, const AISection *, uint16_t, const Vector3Template<float> &, const Vector3Template<float> &, BrnGameState::ESectionEntryDirection, int32_t, int32_t, bool);

	// BrnGameStateStreetManager.h:669
	void FindUpcomingStreetsFromRoute(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnGameStateStreetManager.h:677
	void SendUpcomingRoadMessage(BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, bool, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:683
	float32_t GetOverallAngleForRoadTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:689
	void DrawCurrentNodeRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:695
	void DrawPlayerRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:700
	bool IsRoadOnTheInterState(SpanBase::RoadIndex);

	// BrnGameStateStreetManager.h:705
	void UpdateTrophyUnlockOnRoadRuleWin(BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:711
	// Declaration
	void UpdateFriendHighScores() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:390
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> RoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:717
	float32_t CalculateDistanceToTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:723
	// Declaration
	void UpdateUserScoresFromServerRecords() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:400
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40> LocalRoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:730
	void UpdateBufferedHighScores(float32_t, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:734
	void UpdateRoadRulesProfileScores();

	// BrnGameStateStreetManager.h:740
	ChallengeHighScoreEntry CreateHighScoreEntryFromRoadRulesData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:746
	ChallengeHighScoreEntry CreateHighScoreEntryFromDownloadData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:751
	ChallengePlayerScoreEntry CreateUserChallengeScoreFromRoadRulesData(const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:755
	int32_t GetNumberOfRoadsRulesByLocalPlayer();

	// BrnGameStateStreetManager.h:761
	bool CheckForNewHighScore(int32_t, ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:766
	BrnStreetData::ScoreType GetActiveRoadRuleType(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:773
	void GetHighScoreEntry(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool);

	// BrnGameStateStreetManager.h:780
	void SetChallengeUserScore(Road::ChallengeIndex, const ChallengePlayerScoreEntry *, bool);

	// BrnGameStateStreetManager.h:786
	void SetChallengeFriendHighScore(Road::ChallengeIndex, const ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:791
	void SetChallengeFriendDownloadTimestamp(uint32_t);

	// BrnGameStateStreetManager.h:798
	void ProcessLocalHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:802
	void SetupParRivals(const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:808
	int32_t FindRivalsByDistrict(BrnWorld::EDistrict, CgsID *, int32_t);

	// BrnGameStateStreetManager.h:811
	void ClearSectionWalkingData();

	// BrnGameStateStreetManager.h:814
	void ClearUpcomingRoadStickiness();

	// BrnGameStateStreetManager.h:818
	void ClearAllChallengeData();

	// BrnGameStateStreetManager.h:823
	bool ClearAllChallengeDataForBuddy(const PlayerName *);

	// BrnGameStateStreetManager.h:827
	void PushSectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:831
	bool HasSectionAlreadyBeenWalked(uint16_t);

	// BrnGameStateStreetManager.h:834
	bool CanContinueWalking();

	// BrnGameStateStreetManager.h:839
	int32_t GetSaveGameChallengeIndexByRoadID(CgsID) const;

	// BrnGameStateStreetManager.h:844
	bool AreRoadsAFollowOnPair(SpanBase::RoadIndex, SpanBase::RoadIndex);

}

// BrnGameStateStreetManager.h:199
struct BrnGameState::StreetManager {
private:
	// BrnGameStateStreetManager.h:499
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnGameStateStreetManager.h:500
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnGameStateStreetManager.h:502
	CgsID[64][2] maaParRivalIds;

	// BrnGameStateStreetManager.h:505
	NewHighScoreBuffer mNewHighScoreBuffer;

	// BrnGameStateStreetManager.h:506
	BitArray<64u>[2] maRoadRulesChangedBitArrays;

	// BrnGameStateStreetManager.h:507
	float32_t mfUnbufferTimer;

	// BrnGameStateStreetManager.h:508
	int32_t miNumScoresLost;

	// BrnGameStateStreetManager.h:509
	BrnStreetData::ScoreType meActiveRoadRuleType;

	// BrnGameStateStreetManager.h:510
	bool mbTooManyHighScoresToBuffer;

	// BrnGameStateStreetManager.h:511
	bool mbFirstDownload;

	// BrnGameStateStreetManager.h:514
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGameStateStreetManager.h:515
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnGameStateStreetManager.h:516
	ResourceHandle mDistrictMapResourceHandle;

	// BrnGameStateStreetManager.h:518
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateStreetManager.h:519
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateStreetManager.h:520
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnGameStateStreetManager.h:523
	SpanBase::RoadIndex miCurrentPlayerRoadIndex;

	// BrnGameStateStreetManager.h:524
	SpanBase::RoadIndex miLastPlayerRoadIndex;

	// BrnGameStateStreetManager.h:526
	SpanBase::RoadIndex miHopefulForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:527
	SpanBase::RoadIndex miHopefulLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:528
	SpanBase::RoadIndex miHopefulRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:530
	SpanBase::RoadIndex miNewestForwardPlayerRoadIndex;

	// BrnGameStateStreetManager.h:531
	SpanBase::RoadIndex miNewestLeftPlayerRoadIndex;

	// BrnGameStateStreetManager.h:532
	SpanBase::RoadIndex miNewestRightPlayerRoadIndex;

	// BrnGameStateStreetManager.h:533
	SpanBase::RoadIndex miOriginalInterStateRoadIndex;

	// BrnGameStateStreetManager.h:535
	Road::Vector3 mCurrentPlayerSectionExitRight;

	// BrnGameStateStreetManager.h:537
	Road::Vector3 mFirstJunctionPosition;

	// BrnGameStateStreetManager.h:539
	Road::Vector3 mLastNode;

	// BrnGameStateStreetManager.h:540
	Road::Vector3 mSecondLastNode;

	// BrnGameStateStreetManager.h:542
	int32_t miNewRoadNodeIndex;

	// BrnGameStateStreetManager.h:543
	int32_t miLastRoadNodeIndex;

	// BrnGameStateStreetManager.h:545
	float32_t mfHopefulRoadTimer;

	// BrnGameStateStreetManager.h:546
	float32_t mfTimeInJunction;

	// BrnGameStateStreetManager.h:548
	SpanBase::RoadIndex mLeftRoadIndex;

	// BrnGameStateStreetManager.h:549
	SpanBase::RoadIndex mRightRoadIndex;

	// BrnGameStateStreetManager.h:551
	float32_t mfTotalTimeGoinTheWrongWay;

	// BrnGameStateStreetManager.h:552
	float32_t mfGuidanceLockTime;

	// BrnGameStateStreetManager.h:554
	int32_t miNextFreeSectionSlot;

	// BrnGameStateStreetManager.h:555
	uint16_t[25] mauWalkedSections;

	// BrnGameStateStreetManager.h:556
	bool mbNeedToUpdateUpcomingRoads;

	// BrnGameStateStreetManager.h:558
	bool mbRightRoadHighlighted;

	// BrnGameStateStreetManager.h:559
	bool mbLeftRoadHighlighted;

	// BrnGameStateStreetManager.h:560
	bool mbNewRoadIsInterStateExit;

	// BrnGameStateStreetManager.h:561
	bool mbPlayerOnInterstateExit;

	// BrnGameStateStreetManager.h:562
	bool mbJunctionPosSet;

	// BrnGameStateStreetManager.h:564
	bool mbWrongWay;

	// BrnGameStateStreetManager.h:566
	bool mbLockRightSign;

	// BrnGameStateStreetManager.h:567
	bool mbLockLeftSign;

	// BrnGameStateStreetManager.h:570
	bool mbPlayerIsInAShortcut;

	// BrnGameStateStreetManager.h:602
	BrnGameState::StreetManager::LoadStage meLoadStage;

	// BrnGameStateStreetManager.h:603
	BrnGameState::StreetManager::AILoadStage meAILoadStage;

	// BrnGameStateStreetManager.h:604
	BrnGameState::StreetManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnGameStateStreetManager.h:607
	int32_t miUpcomingRoadsPM;

	// BrnGameStateStreetManager.h:608
	int32_t miUpcomingRoadsSentMessagePM;

	// BrnGameStateStreetManager.h:609
	int32_t miUpcomingRoadsQSortPM;

	// BrnGameStateStreetManager.h:610
	int32_t miSetRoadRuleChallengeDataPM;

	// BrnGameStateStreetManager.h:611
	int32_t miSetRoadRuleNetworkHighScoresPM;

	// BrnGameStateStreetManager.h:618
	BrnGameState::StreetManagerDebugComponent mStreetManagerDebugComponent;

public:
	// BrnGameStateStreetManager.h:215
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, BrnGameState::RoadRulesManager *);

	// BrnGameStateStreetManager.h:222
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *, const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:226
	bool Release();

	// BrnGameStateStreetManager.h:230
	void Destruct();

	// BrnGameStateStreetManager.h:244
	void Update(bool, float32_t, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, bool, bool, float32_t);

	// BrnGameStateStreetManager.h:255
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, bool);

	// BrnGameStateStreetManager.h:260
	void OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:266
	void ProcessNetworkHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *);

	// BrnGameStateStreetManager.h:271
	void ProcessUploadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent *);

	// BrnGameStateStreetManager.h:276
	void ProcessDownloadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent *);

	// BrnGameStateStreetManager.h:282
	void ProcessConnectedOnlineEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent *);

	// BrnGameStateStreetManager.h:288
	void ProcessScoreRequestEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent *);

	// BrnGameStateStreetManager.h:292
	void ProcessOnlineGameLaunchedEvent();

	// BrnGameStateStreetManager.h:297
	void ProcessActiveRoadRuleChange(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:303
	void ProcessBuddyRemoved(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::BuddyRemovedEvent *);

	// BrnGameStateStreetManager.h:310
	bool LoadStreetData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:315
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:320
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnGameStateStreetManager.h:326
	const StreetData * GetStreetData();

	// BrnGameStateStreetManager.h:334
	int32_t GetRoadCount() const;

	// BrnGameStateStreetManager.h:338
	void OnEnterNewRoad();

	// BrnGameStateStreetManager.h:343
	const Road * GetRoad(SpanBase::RoadIndex) const;

	// BrnGameStateStreetManager.h:351
	const Junction * GetJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:356
	const bool IsJunction(Road::SpanIndex);

	// BrnGameStateStreetManager.h:364
	const Street * GetStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:369
	const bool IsStreet(Road::SpanIndex);

	// BrnGameStateStreetManager.h:377
	const SpanBase * GetSpan(Road::SpanIndex);

	// BrnGameStateStreetManager.h:381
	Road::SpanIndex GetSpanIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:385
	SpanBase::RoadIndex GetRoadIndexFromAISectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:397
	void GetChallengeUserScore(Road::ChallengeIndex, ChallengePlayerScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:405
	void GetChallengeFriendHighScore(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool) const;

	// BrnGameStateStreetManager.h:412
	void GetChallengeParScore(Road::ChallengeIndex, ChallengeParScoresEntry *) const;

	// BrnGameStateStreetManager.h:417
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:422
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:427
	BrnGameState::ERoadRuleCompletionStatus HasPlayerBeatenParAndFriendScore(Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:437
	void CopyFriendHighScoreChallengeData(ChallengeHighScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:447
	void CopyUserChallengeData(ChallengePlayerScoreEntry *, int32_t);

	// BrnGameStateStreetManager.h:452
	CgsID GetParRivalId(int32_t, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:456
	SpanBase::RoadIndex GetCurrentPlayerRoadIndex();

	// BrnGameStateStreetManager.h:459
	CgsID GetForwardPlayerRoadId();

	// BrnGameStateStreetManager.h:462
	CgsID GetLeftPlayerRoadId();

	// BrnGameStateStreetManager.h:465
	CgsID GetRightPlayerRoadId();

	// BrnGameStateStreetManager.h:468
	const ResourceHandle * GetDistrictMapResourceHandle() const;

	// BrnGameStateStreetManager.h:472
	int32_t GetNumberOfCompleteRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:476
	int32_t GetNumberOfParShowTimeRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:480
	int32_t GetNumberOfParTimeTrialRoadsRuledByLocalPlayer();

	// BrnGameStateStreetManager.h:484
	void ClearUpcomingRoadIds();

	// BrnGameStateStreetManager.h:489
	void FillInRoadRulesQuery(BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction *);

private:
	// BrnGameStateStreetManager.h:629
	void UpdateUpcomingStreets(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t, bool);

	// BrnGameStateStreetManager.h:636
	void UpdateWrongWayMessages(float32_t, float32_t);

	// BrnGameStateStreetManager.h:646
	void FindUpcomingStreetsByRecursiveWalking(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, float32_t, uint16_t, bool);

	// BrnGameStateStreetManager.h:660
	void WalkAISection(const Vector3Template<float> &, const Vector3Template<float> &, const AISection *, uint16_t, const Vector3Template<float> &, const Vector3Template<float> &, BrnGameState::ESectionEntryDirection, int32_t, int32_t, bool);

	// BrnGameStateStreetManager.h:669
	void FindUpcomingStreetsFromRoute(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, AICarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnGameStateStreetManager.h:677
	void SendUpcomingRoadMessage(BrnGameState::GameStateModuleIO::OutputBuffer *, AICarOutputInterface *, bool, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:683
	float32_t GetOverallAngleForRoadTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:689
	void DrawCurrentNodeRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:695
	void DrawPlayerRoute(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:700
	bool IsRoadOnTheInterState(SpanBase::RoadIndex);

	// BrnGameStateStreetManager.h:705
	void UpdateTrophyUnlockOnRoadRuleWin(BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:711
	// Declaration
	void UpdateFriendHighScores() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:390
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> RoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:717
	float32_t CalculateDistanceToTurning(AICarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnGameStateStreetManager.h:723
	// Declaration
	void UpdateUserScoresFromServerRecords(const LocalRoadRulesDownloadedQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedIO.h:400
		typedef CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40> LocalRoadRulesDownloadedQueue;

	}

	// BrnGameStateStreetManager.h:730
	void UpdateBufferedHighScores(float32_t, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateStreetManager.h:734
	void UpdateRoadRulesProfileScores();

	// BrnGameStateStreetManager.h:740
	ChallengeHighScoreEntry CreateHighScoreEntryFromRoadRulesData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:746
	ChallengeHighScoreEntry CreateHighScoreEntryFromDownloadData(const PlayerName *, const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:751
	ChallengePlayerScoreEntry CreateUserChallengeScoreFromRoadRulesData(const RoadRulesMessageData *);

	// BrnGameStateStreetManager.h:755
	int32_t GetNumberOfRoadsRulesByLocalPlayer();

	// BrnGameStateStreetManager.h:761
	bool CheckForNewHighScore(int32_t, ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:766
	BrnStreetData::ScoreType GetActiveRoadRuleType(BrnGameState::EActiveRoadRule);

	// BrnGameStateStreetManager.h:773
	void GetHighScoreEntry(Road::ChallengeIndex, ChallengeHighScoreEntry *, bool);

	// BrnGameStateStreetManager.h:780
	void SetChallengeUserScore(Road::ChallengeIndex, const ChallengePlayerScoreEntry *, bool);

	// BrnGameStateStreetManager.h:786
	void SetChallengeFriendHighScore(Road::ChallengeIndex, const ChallengeHighScoreEntry *);

	// BrnGameStateStreetManager.h:791
	void SetChallengeFriendDownloadTimestamp(uint32_t);

	// BrnGameStateStreetManager.h:798
	void ProcessLocalHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, Road::ChallengeIndex, BrnStreetData::ScoreType);

	// BrnGameStateStreetManager.h:802
	void SetupParRivals(const BrnGameState::TriggerQueryManager *);

	// BrnGameStateStreetManager.h:808
	int32_t FindRivalsByDistrict(BrnWorld::EDistrict, CgsID *, int32_t);

	// BrnGameStateStreetManager.h:811
	void ClearSectionWalkingData();

	// BrnGameStateStreetManager.h:814
	void ClearUpcomingRoadStickiness();

	// BrnGameStateStreetManager.h:818
	void ClearAllChallengeData();

	// BrnGameStateStreetManager.h:823
	bool ClearAllChallengeDataForBuddy(const PlayerName *);

	// BrnGameStateStreetManager.h:827
	void PushSectionIndex(uint16_t);

	// BrnGameStateStreetManager.h:831
	bool HasSectionAlreadyBeenWalked(uint16_t);

	// BrnGameStateStreetManager.h:834
	bool CanContinueWalking();

	// BrnGameStateStreetManager.h:839
	int32_t GetSaveGameChallengeIndexByRoadID(CgsID) const;

	// BrnGameStateStreetManager.h:844
	bool AreRoadsAFollowOnPair(SpanBase::RoadIndex, SpanBase::RoadIndex);

}

