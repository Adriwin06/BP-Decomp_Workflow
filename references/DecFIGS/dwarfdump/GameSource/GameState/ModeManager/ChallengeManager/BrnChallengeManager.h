// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnChallengeManager.h:53
	enum EChallengeManagerStatus {
		E_CHALLENGE_MANAGER_STATUS_NONE = 0,
		E_CHALLENGE_MANAGER_STATUS_PENDING = 1,
		E_CHALLENGE_MANAGER_STATUS_RUNNING = 2,
		E_CHALLENGE_MANAGER_STATUS_RESULTS = 3,
		E_CHALLENGE_MANAGER_STATUS_COUNT = 4,
	}

	// BrnChallengeManager.h:63
	enum EFreeburnSkill {
		E_FREEBURN_SKILL_START = 0,
		E_FREEBURN_SKILL_ONCOMING = 0,
		E_FREEBURN_SKILL_FLATSPIN = 1,
		E_FREEBURN_SKILL_FLATSPIN_REVERSE = 2,
		E_FREEBURN_SKILL_DRIFT = 3,
		E_FREEBURN_SKILL_NEAR_MISS = 4,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING = 5,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING_REVERSE = 6,
		E_FREEBURN_SKILL_ROAD_RULE_TIME = 7,
		E_FREEBURN_SKILL_ROAD_RULE_CRASH = 8,
		E_FREEBURN_SKILL_BARREL_ROLL = 9,
		E_FREEBURN_SKILL_BARREL_ROLL_REVERSE = 10,
		E_FREEBURN_SKILL_PLAYER_POWER_PARKING = 11,
		E_FREEBURN_SKILL_TRAFFIC_POWER_PARKING = 12,
		E_FREEBURN_SKILL_BURNOUTS = 13,
		E_FREEBURN_SKILL_BOOST_TIME = 14,
		E_FREEBURN_SKILL_AIR = 15,
		E_FREEBURN_SKILL_AIR_DISTANCE = 16,
		E_FREEBURN_SKILL_BILLBOARDS = 17,
		E_FREEBURN_SKILL_LEAP_CARS = 18,
		E_FREEBURN_SKILL_COUNT = 19,
	}

	// Declaration
	struct ChallengeManager {
		// BrnChallengeManager.h:295
		struct ChallengeCompletionData {
			// BrnChallengeManager.h:297
			CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

			// BrnChallengeManager.h:298
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnChallengeManager.h:299
			bool mbFinalised;

		}

		// BrnChallengeManager.h:325
		struct StoredLeapingData {
			// BrnChallengeManager.h:326
			EActiveRaceCarIndex mActiveRaceCarIndex;

			// BrnChallengeManager.h:327
			Vector3 mLeapRadiusEntryVector;

		}

	}

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const BrnResource::VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

// BrnChallengeManager.h:284
extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

// BrnChallengeManager.h:717
extern bool mbChallengesAreAllOnePlayer;

// BrnChallengeManager.h:718
extern bool mbChallengesAreAllTwoPlayer;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnChallengeManager.h:51
	using GameStateModuleIO;

	// BrnChallengeManager.h:53
	enum EChallengeManagerStatus {
		E_CHALLENGE_MANAGER_STATUS_NONE = 0,
		E_CHALLENGE_MANAGER_STATUS_PENDING = 1,
		E_CHALLENGE_MANAGER_STATUS_RUNNING = 2,
		E_CHALLENGE_MANAGER_STATUS_RESULTS = 3,
		E_CHALLENGE_MANAGER_STATUS_COUNT = 4,
	}

	// BrnChallengeManager.h:63
	enum EFreeburnSkill {
		E_FREEBURN_SKILL_START = 0,
		E_FREEBURN_SKILL_ONCOMING = 0,
		E_FREEBURN_SKILL_FLATSPIN = 1,
		E_FREEBURN_SKILL_FLATSPIN_REVERSE = 2,
		E_FREEBURN_SKILL_DRIFT = 3,
		E_FREEBURN_SKILL_NEAR_MISS = 4,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING = 5,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING_REVERSE = 6,
		E_FREEBURN_SKILL_ROAD_RULE_TIME = 7,
		E_FREEBURN_SKILL_ROAD_RULE_CRASH = 8,
		E_FREEBURN_SKILL_BARREL_ROLL = 9,
		E_FREEBURN_SKILL_BARREL_ROLL_REVERSE = 10,
		E_FREEBURN_SKILL_PLAYER_POWER_PARKING = 11,
		E_FREEBURN_SKILL_TRAFFIC_POWER_PARKING = 12,
		E_FREEBURN_SKILL_BURNOUTS = 13,
		E_FREEBURN_SKILL_BOOST_TIME = 14,
		E_FREEBURN_SKILL_AIR = 15,
		E_FREEBURN_SKILL_AIR_DISTANCE = 16,
		E_FREEBURN_SKILL_BILLBOARDS = 17,
		E_FREEBURN_SKILL_LEAP_CARS = 18,
		E_FREEBURN_SKILL_COUNT = 19,
	}

	// Declaration
	struct ChallengeManager {
		// BrnChallengeManager.h:295
		struct ChallengeCompletionData {
			// BrnChallengeManager.h:297
			CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

			// BrnChallengeManager.h:298
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnChallengeManager.h:299
			bool mbFinalised;

		}

		// BrnChallengeManager.h:311
		struct CarLeapingData {
			// BrnChallengeManager.h:312
			EActiveRaceCarIndex mActiveRaceCarIndex;

			// BrnChallengeManager.h:313
			Vector3 mPlayerToCar;

		}

		// BrnChallengeManager.h:325
		struct StoredLeapingData {
			// BrnChallengeManager.h:326
			EActiveRaceCarIndex mActiveRaceCarIndex;

			// BrnChallengeManager.h:327
			Vector3 mLeapRadiusEntryVector;

		}

	}

	// BrnChallengeManager.h:89
	extern BrnGameState::EFreeburnSkill operator++(BrnGameState::EFreeburnSkill &, int);

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnChallengeManager.h:51
	using GameStateModuleIO;

	// BrnChallengeManager.h:53
	enum EChallengeManagerStatus {
		E_CHALLENGE_MANAGER_STATUS_NONE = 0,
		E_CHALLENGE_MANAGER_STATUS_PENDING = 1,
		E_CHALLENGE_MANAGER_STATUS_RUNNING = 2,
		E_CHALLENGE_MANAGER_STATUS_RESULTS = 3,
		E_CHALLENGE_MANAGER_STATUS_COUNT = 4,
	}

	// BrnChallengeManager.h:63
	enum EFreeburnSkill {
		E_FREEBURN_SKILL_START = 0,
		E_FREEBURN_SKILL_ONCOMING = 0,
		E_FREEBURN_SKILL_FLATSPIN = 1,
		E_FREEBURN_SKILL_FLATSPIN_REVERSE = 2,
		E_FREEBURN_SKILL_DRIFT = 3,
		E_FREEBURN_SKILL_NEAR_MISS = 4,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING = 5,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING_REVERSE = 6,
		E_FREEBURN_SKILL_ROAD_RULE_TIME = 7,
		E_FREEBURN_SKILL_ROAD_RULE_CRASH = 8,
		E_FREEBURN_SKILL_BARREL_ROLL = 9,
		E_FREEBURN_SKILL_BARREL_ROLL_REVERSE = 10,
		E_FREEBURN_SKILL_PLAYER_POWER_PARKING = 11,
		E_FREEBURN_SKILL_TRAFFIC_POWER_PARKING = 12,
		E_FREEBURN_SKILL_BURNOUTS = 13,
		E_FREEBURN_SKILL_BOOST_TIME = 14,
		E_FREEBURN_SKILL_AIR = 15,
		E_FREEBURN_SKILL_AIR_DISTANCE = 16,
		E_FREEBURN_SKILL_BILLBOARDS = 17,
		E_FREEBURN_SKILL_LEAP_CARS = 18,
		E_FREEBURN_SKILL_COUNT = 19,
	}

	// Declaration
	struct ChallengeManager {
		// BrnChallengeManager.h:295
		struct ChallengeCompletionData {
			// BrnChallengeManager.h:297
			CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

			// BrnChallengeManager.h:298
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnChallengeManager.h:299
			bool mbFinalised;

		}

		// BrnChallengeManager.h:325
		struct StoredLeapingData {
			// BrnChallengeManager.h:326
			EActiveRaceCarIndex mActiveRaceCarIndex;

			// BrnChallengeManager.h:327
			Vector3 mLeapRadiusEntryVector;

		}

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnChallengeManager.h:53
	enum EChallengeManagerStatus {
		E_CHALLENGE_MANAGER_STATUS_NONE = 0,
		E_CHALLENGE_MANAGER_STATUS_PENDING = 1,
		E_CHALLENGE_MANAGER_STATUS_RUNNING = 2,
		E_CHALLENGE_MANAGER_STATUS_RESULTS = 3,
		E_CHALLENGE_MANAGER_STATUS_COUNT = 4,
	}

	// BrnChallengeManager.h:63
	enum EFreeburnSkill {
		E_FREEBURN_SKILL_START = 0,
		E_FREEBURN_SKILL_ONCOMING = 0,
		E_FREEBURN_SKILL_FLATSPIN = 1,
		E_FREEBURN_SKILL_FLATSPIN_REVERSE = 2,
		E_FREEBURN_SKILL_DRIFT = 3,
		E_FREEBURN_SKILL_NEAR_MISS = 4,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING = 5,
		E_FREEBURN_SKILL_SUCCESSFUL_LANDING_REVERSE = 6,
		E_FREEBURN_SKILL_ROAD_RULE_TIME = 7,
		E_FREEBURN_SKILL_ROAD_RULE_CRASH = 8,
		E_FREEBURN_SKILL_BARREL_ROLL = 9,
		E_FREEBURN_SKILL_BARREL_ROLL_REVERSE = 10,
		E_FREEBURN_SKILL_PLAYER_POWER_PARKING = 11,
		E_FREEBURN_SKILL_TRAFFIC_POWER_PARKING = 12,
		E_FREEBURN_SKILL_BURNOUTS = 13,
		E_FREEBURN_SKILL_BOOST_TIME = 14,
		E_FREEBURN_SKILL_AIR = 15,
		E_FREEBURN_SKILL_AIR_DISTANCE = 16,
		E_FREEBURN_SKILL_BILLBOARDS = 17,
		E_FREEBURN_SKILL_LEAP_CARS = 18,
		E_FREEBURN_SKILL_COUNT = 19,
	}

	// Declaration
	struct ChallengeManager {
		// BrnChallengeManager.h:295
		struct ChallengeCompletionData {
			// BrnChallengeManager.h:297
			CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

			// BrnChallengeManager.h:298
			GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

			// BrnChallengeManager.h:299
			bool mbFinalised;

		}

		// BrnChallengeManager.h:325
		struct StoredLeapingData {
			// BrnChallengeManager.h:326
			EActiveRaceCarIndex mActiveRaceCarIndex;

			// BrnChallengeManager.h:327
			Vector3 mLeapRadiusEntryVector;

		}

	}

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(OutputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const BrnResource::VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(OutputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const BrnResource::VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(OutputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, OutputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

// BrnChallengeManager.h:104
struct BrnGameState::ChallengeManager {
private:
	// BrnChallengeManager.h:284
	extern const int32_t KI_MAX_BILLBOARDS_TO_TRACK = 80;

	// BrnChallengeManager.h:381
	ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> mPotentiallyLeaptCars;

	// BrnChallengeManager.h:382
	float32_t mfLeapCarsValidTimer;

	// BrnChallengeManager.h:383
	int32_t miNumCarsLeapt;

	// BrnChallengeManager.h:384
	bool mbUpdateLeaptCars;

	// BrnChallengeManager.h:386
	Array<CgsID,80u> maBillboardsCollected;

	// BrnChallengeManager.h:387
	FastBitArray<120>[8] maPlayerSuccessUpdateArray;

	// BrnChallengeManager.h:388
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[8][2] maaePlayersSuccessStatus;

	// BrnChallengeManager.h:389
	float32_t[8][2] maafCurrentActionsScores;

	// BrnChallengeManager.h:390
	float32_t[8][2] maafCumulativeContributions;

	// BrnChallengeManager.h:391
	float32_t[19] mafBankedActionScores;

	// BrnChallengeManager.h:392
	float32_t[2] mafCumulativeActionScores;

	// BrnChallengeManager.h:393
	int32_t[2] maiRemainingTarget;

	// BrnChallengeManager.h:394
	bool[8] mabReceivedSuccessUpdates;

	// BrnChallengeManager.h:395
	bool[8] mabPlayerStartedChallenge;

	// BrnChallengeManager.h:396
	int32_t[8] maiCrashedWithChallengePlayer;

	// BrnChallengeManager.h:397
	const VehicleList * mpVehicleList;

	// BrnChallengeManager.h:399
	BrnGameState::ChallengeManager::ChallengeCompletionData[7] maChallengeCompletionData;

	// BrnChallengeManager.h:400
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

	// BrnChallengeManager.h:402
	NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondSuccessStatus;

	// BrnChallengeManager.h:405
	BrnGameState::EChallengeManagerStatus meChallengeManagerStatus;

	// BrnChallengeManager.h:406
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnChallengeManager.h:407
	int32_t miCurrentChallengeAction;

	// BrnChallengeManager.h:408
	int32_t miCurrentArbitrationIndex;

	// BrnChallengeManager.h:409
	float32_t mfChallengeTimer;

	// BrnChallengeManager.h:410
	bool mbChallengeTimerRunning;

	// BrnChallengeManager.h:411
	float32_t mfConvoyTimer;

	// BrnChallengeManager.h:412
	bool mbConvoyTimerRunning;

	// BrnChallengeManager.h:413
	float32_t mfResultsTimer;

	// BrnChallengeManager.h:414
	bool mbResultsTimerRunning;

	// BrnChallengeManager.h:415
	BrnGameState::EChallengeStatus meLocalChallengeStatus;

	// BrnChallengeManager.h:416
	bool mbChallengeRequiresLeapCars;

	// BrnChallengeManager.h:419
	bool mbRemoteStartPending;

	// BrnChallengeManager.h:420
	bool mbRemoteTriggerPending;

	// BrnChallengeManager.h:421
	bool mbRemoteEndPending;

	// BrnChallengeManager.h:423
	const ChallengeList * mpFreeburnChallengeList;

	// BrnChallengeManager.h:424
	const BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnChallengeManager.h:425
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnChallengeManager.h:427
	BrnProgression::ProgressionManager * mpProgression;

	// BrnChallengeManager.h:428
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnChallengeManager.h:431
	bool[19] mabBankedSkillThisFrame;

	// BrnChallengeManager.h:432
	bool[19] mabActiveSkillThisFrame;

	// BrnChallengeManager.h:433
	float32_t[19] mafActiveSkillValue;

	// BrnChallengeManager.h:434
	float32_t[19] mafCachedActiveSkillValueOnLocationEnter;

	// BrnChallengeManager.h:435
	FastBitArray<19> mScoresSetThisFrameBitArray;

	// BrnChallengeManager.h:438
	bool[2] mabIsLocationOk;

	// BrnChallengeManager.h:441
	bool[2] mabIndividualActionsSuccessUpdateSent;

	// BrnChallengeManager.h:444
	int32_t[8] maChallengePlayerCounts;

	// BrnChallengeManager.h:447
	int32_t miFramesSinceNetworkStart;

	// BrnChallengeManager.h:453
	BrnGameState::ChallengeManagerDebugComponent mChallengeManagerDebugComponent;

	// BrnChallengeManager.h:717
	extern bool mbChallengesAreAllOnePlayer;

	// BrnChallengeManager.h:718
	extern bool mbChallengesAreAllTwoPlayer;

	// BrnChallengeManager.h:719
	bool mbWereAllChallengesOnePlayer;

	// BrnChallengeManager.h:720
	bool mbWereAllChallengesTwoPlayer;

public:
	// BrnChallengeManager.h:112
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, const BrnGameState::RoadRulesManager *, const BrnGameState::TriggerQueryManager *);

	// BrnChallengeManager.h:116
	void Destruct();

	// BrnChallengeManager.h:121
	bool Prepare(const ChallengeList *);

	// BrnChallengeManager.h:125
	bool Release();

	// BrnChallengeManager.h:135
	void PreWorldUpdate(const TimerStatusInterface *, int32_t, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:141
	void PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const TimerStatusInterface *);

	// BrnChallengeManager.h:150
	void BeginChallenge(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:157
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:162
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:169
	void EndChallenge(BrnGameState::EChallengeStatus, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:174
	void RemoteBeginChallenge(CgsID);

	// BrnChallengeManager.h:179
	void RemoteTriggerFreeburnChallenge(CgsID);

	// BrnChallengeManager.h:185
	void RemoteEndChallenge(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus);

	// BrnChallengeManager.h:189
	bool IsChallengeActive() const;

	// BrnChallengeManager.h:193
	bool IsChallengeRunning() const;

	// BrnChallengeManager.h:196
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnChallengeManager.h:203
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnChallengeManager.h:206
	CgsID GetCurrentFreeburnChallengeID();

	// BrnChallengeManager.h:212
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnChallengeManager.h:217
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnChallengeManager.h:224
	void HandleRoadRuleScore(ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID);

	// BrnChallengeManager.h:230
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnChallengeManager.h:234
	void OnProfileLoaded();

	// BrnChallengeManager.h:241
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:248
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:255
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:260
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:265
	void Disconnected(InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:270
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnChallengeManager.h:274
	void ApplyVehicleList(const VehicleList *);

	// BrnChallengeManager.h:277
	bool ChallengesAreAllOnePlayer();

	// BrnChallengeManager.h:280
	bool ChallengesAreAllTwoPlayer();

private:
	// BrnChallengeManager.h:459
	const ChallengeListEntry * GetChallengeFromID(CgsID) const;

	// BrnChallengeManager.h:464
	int32_t GetChallengeIndex(CgsID) const;

	// BrnChallengeManager.h:469
	BrnGameState::ChallengeManager::ChallengeCompletionData * GetChallengeCompletionData(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeManager.h:475
	bool CheckCurrentLocation(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:480
	bool CheckCurrentCar(const ChallengeListEntry *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:486
	bool CheckForModifiers(const ChallengeListEntryAction *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:492
	void UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:499
	void UpdateRemoteRequests(InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:509
	void UpdateRunning(float32_t, int32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnChallengeManager.h:515
	void UpdateResults(float32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:526
	void UpdateActionSuccess(const ChallengeListEntryAction *, int32_t, BrnGameState::EChallengeStatus, EActiveRaceCarIndex, int32_t, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:534
	void UpdateArbitration(float32_t, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:540
	void UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:546
	bool UpdateArbitrationSuccess(int32_t, InputBuffer::GameActionQueue *);

	// BrnChallengeManager.h:551
	void WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnChallengeManager.h:557
	void WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *, int32_t);

	// BrnChallengeManager.h:566
	void UpdateChallenge(float32_t, int32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, bool);

	// BrnChallengeManager.h:575
	BrnGameState::EChallengeStatus UpdateAction(int32_t, const ChallengeListEntryAction *, float32_t, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnChallengeManager.h:584
	void UpdateCurrentActionScore(int32_t, bool, BrnGameState::EFreeburnSkill, EActiveRaceCarIndex, float32_t);

	// BrnChallengeManager.h:590
	bool UpdateLocationOKStatusChange(bool, bool);

	// BrnChallengeManager.h:596
	void UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnChallengeManager.h:601
	void UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnChallengeManager.h:605
	bool IsChallengeCountdownTimerDone();

	// BrnChallengeManager.h:609
	bool IsConvoyTimerDone();

	// BrnChallengeManager.h:613
	bool IsResultsTimerDone();

	// BrnChallengeManager.h:617
	bool ReceivedSuccessUpdatesFromAllPlayers();

	// BrnChallengeManager.h:622
	int32_t GetNumPlayerSucceeding(int32_t);

	// BrnChallengeManager.h:627
	int32_t GetNumPlayersContributing(int32_t);

	// BrnChallengeManager.h:631
	void ResetChallengeCountdownTimer();

	// BrnChallengeManager.h:635
	void ResetConvoyTimer();

	// BrnChallengeManager.h:639
	void ResetChallengeResultsTimer();

	// BrnChallengeManager.h:643
	bool UpdateTimer(float32_t);

	// BrnChallengeManager.h:647
	bool UpdateConvoyTimer(float32_t);

	// BrnChallengeManager.h:652
	bool UpdateResultsTimer(float32_t);

	// BrnChallengeManager.h:657
	bool IsPointInTriggerRegion(const rw::math::vpu::Vector3 *, CgsID);

	// BrnChallengeManager.h:660
	void ClearFreeburnSkillsThisFrame();

	// BrnChallengeManager.h:663
	void ClearPlayerSuccessData();

	// BrnChallengeManager.h:671
	bool IsSkillScoreCurrentlySuccessful(float32_t, const ChallengeListEntryAction *, bool, int32_t, bool);

	// BrnChallengeManager.h:680
	float32_t GetCurrentSkillScore(int32_t, bool, BrnGameState::EFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType, bool, float32_t);

	// BrnChallengeManager.h:686
	void SetCurrentSkillScore(BrnGameState::EFreeburnSkill, float32_t, bool);

	// BrnChallengeManager.h:692
	void BankSkillScore(BrnGameState::EFreeburnSkill, float32_t);

	// BrnChallengeManager.h:697
	void ResetCurrentChallengeData(int32_t);

	// BrnChallengeManager.h:702
	void CheckForOnlineChallengeUnlocks();

	// BrnChallengeManager.h:707
	void SetRemotePlayersChallengeCompleted(int32_t);

	// BrnChallengeManager.h:710
	void RenderHUD();

	// BrnChallengeManager.h:713
	float32_t GetScaleFactor();

	// BrnChallengeManager.h:724
	void HackAllChallenges(int32_t);

	// BrnChallengeManager.h:727
	void UnHackAllChallenges();

}

