// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct CarData {
		// BrnScoringSystem.h:126
		enum EPlayerStatus {
			E_PLAYER_STATUS_PLAYING = 0,
			E_PLAYER_STATUS_ELIMINATED = 1,
			E_PLAYER_STATUS_COUNT = 2,
		}

	}

	// BrnScoringSystem.h:52
	const int32_t KI_MAX_ROAD_RAGE_TAKEDOWN_COUNT = 3;

	// BrnScoringSystem.h:53
	const int32_t KI_MAX_MARKED_MAN_TAKEDOWN_COUNT = 3;

}

// BrnScoringSystem.h:69
struct BrnGameState::NetworkRoundData {
	// BrnScoringSystem.h:73
	Time mSecondsInEvent;

	// BrnScoringSystem.h:74
	int32_t miNumberOfCrashes;

	// BrnScoringSystem.h:75
	float32_t mfMetersDriven;

	// BrnScoringSystem.h:76
	int32_t miNumberOfRounds;

	// BrnScoringSystem.h:78
	int32_t miTakedownsFor;

	// BrnScoringSystem.h:79
	int32_t miTakedownsAgainst;

	// BrnScoringSystem.h:81
	int32_t miTraitorousTakedownsFor;

	// BrnScoringSystem.h:82
	int32_t miTraitorousTakedownsAgainst;

	// BrnScoringSystem.h:85
	int32_t miMarksFor;

	// BrnScoringSystem.h:86
	int32_t miMarksAgainst;

	// BrnScoringSystem.h:87
	int32_t miMarkedManTakedownsFor;

	// BrnScoringSystem.h:88
	int32_t miMarkedManTakedownsAgainst;

	// BrnScoringSystem.h:89
	int32_t miPaybacksUsedFor;

	// BrnScoringSystem.h:90
	int32_t miPaybacksUsedAgainst;

	// BrnScoringSystem.h:91
	int32_t miPaybacksSuceededFor;

	// BrnScoringSystem.h:92
	int32_t miPaybacksSuccededAgainst;

private:
	// BrnScoringSystem.h:104
	int32_t[10] maiPositions;

public:
	// BrnScoringSystem.h:97
	void SetPosition(int32_t, int32_t);

	// BrnScoringSystem.h:101
	int32_t GetPosition(int32_t) const;

}

// BrnScoringSystem.h:109
struct BrnGameState::RaceCarPositioningData {
	// BrnScoringSystem.h:111
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnScoringSystem.h:112
	float32_t mfDistanceToNextCheckpoint;

	// BrnScoringSystem.h:113
	float32_t mfDistanceToFinish;

	// BrnScoringSystem.h:114
	int32_t miCurrentCheckpoint;

	// BrnScoringSystem.h:115
	int32_t miFinishPosition;

	// BrnScoringSystem.h:116
	bool mbDisconnected;

public:
	// BrnScoringSystem.h:119
	void Construct();

}

// BrnScoringSystem.h:123
struct BrnGameState::CarData {
private:
	// BrnScoringSystem.h:268
	CarScoreData mCarScoreData;

	// BrnScoringSystem.h:269
	CgsID mCarId;

	// BrnScoringSystem.h:270
	int32_t miCumulativePoints;

	// BrnScoringSystem.h:271
	int32_t miRoundDisconnectedIn;

	// BrnScoringSystem.h:272
	float32_t mfCurrentDriftDistance;

	// BrnScoringSystem.h:275
	BrnGameState::CarData::EPlayerStatus mePlayerStatus;

	// BrnScoringSystem.h:276
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnScoringSystem.h:279
	BrnGameState::GameStateModuleIO::EPlayerTeam meRoundStartPlayerTeam;

	// BrnScoringSystem.h:281
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnScoringSystem.h:282
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnScoringSystem.h:285
	ChallengeHighScoreEntry * mpaOnlineGameRoadRuleHighScores;

	// BrnScoringSystem.h:286
	HeapMalloc * mpNetworkHeapMalloc;

	// BrnScoringSystem.h:288
	bool mbIsEliminated;

	// BrnScoringSystem.h:289
	int8_t miCurrentCheckPoint;

	// BrnScoringSystem.h:290
	bool mbHasFever;

public:
	// BrnScoringSystem.h:135
	void Construct();

	// BrnScoringSystem.h:139
	bool Prepare(HeapMalloc *);

	// BrnScoringSystem.h:142
	bool Release();

	// BrnScoringSystem.h:145
	void Clear();

	// BrnScoringSystem.h:148
	void ClearCumulativeData();

	// BrnScoringSystem.h:151
	CarScoreData * GetScoreData();

	// BrnScoringSystem.h:154
	const CarScoreData * GetScoreData() const;

	// BrnScoringSystem.h:157
	CgsID GetCarID() const;

	// BrnScoringSystem.h:160
	int32_t GetCumulativePoints() const;

	// BrnScoringSystem.h:163
	int32_t GetRoundDisconnected() const;

	// BrnScoringSystem.h:166
	float32_t GetDriftDistance() const;

	// BrnScoringSystem.h:169
	BrnGameState::CarData::EPlayerStatus GetStatus() const;

	// BrnScoringSystem.h:172
	BrnGameState::GameStateModuleIO::EPlayerTeam GetTeam() const;

	// BrnScoringSystem.h:175
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartTeam() const;

	// BrnScoringSystem.h:178
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnScoringSystem.h:181
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnScoringSystem.h:186
	void SetCarID(CgsID);

	// BrnScoringSystem.h:190
	void SetCumulativePoints(int32_t);

	// BrnScoringSystem.h:194
	void SetRoundDisconnected(int32_t);

	// BrnScoringSystem.h:198
	void SetDriftDistance(float32_t);

	// BrnScoringSystem.h:202
	void SetStatus(BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:206
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:210
	void SetRoundStartTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:216
	void GetRoadRulesScores(Road::ChallengeIndex, ChallengeHighScoreEntry *) const;

	// BrnScoringSystem.h:222
	void SetRoadRulesScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:226
	void ResetRoadRulesScores();

	// BrnScoringSystem.h:230
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnScoringSystem.h:234
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:239
	void IncrementCumulativePoints(int32_t);

	// BrnScoringSystem.h:243
	void IncrementDriftDistance(float32_t);

	// BrnScoringSystem.h:246
	void SetEliminated();

	// BrnScoringSystem.h:249
	void IncrementCheckpointCount();

	// BrnScoringSystem.h:252
	int8_t GetCurrentCheckPoint();

	// BrnScoringSystem.h:256
	void SetCurrentCheckPoint(int8_t);

	// BrnScoringSystem.h:260
	void SetHasFever(bool);

	// BrnScoringSystem.h:263
	bool HasFever();

}

// BrnScoringSystem.h:306
struct BrnGameState::ScoringSystem {
private:
	// BrnScoringSystem.h:1199
	Time mStartTime;

	// BrnScoringSystem.h:1200
	Time mEndTime;

	// BrnScoringSystem.h:1201
	Time mTotalTime;

	// BrnScoringSystem.h:1202
	Time mTimeRemaining;

	// BrnScoringSystem.h:1206
	CrashModeScoring mCrashModeScoring;

	// BrnScoringSystem.h:1209
	StuntModeScoring mStuntModeScoring;

	// BrnScoringSystem.h:1212
	RoadRageModeScoring mRoadRageModeScoring;

	// BrnScoringSystem.h:1213
	int32_t miMaximumPlayerCrashedNumber;

	// BrnScoringSystem.h:1214
	int32_t miCurrentPlayerCrashedNumber;

	// BrnScoringSystem.h:1215
	bool mbPlayerTotalled;

	// BrnScoringSystem.h:1216
	uint32_t[4] mauiMedalScores;

	// BrnScoringSystem.h:1219
	BrnGameState::OnlineRaceModeScoring mOnlineRaceModeScoring;

	// BrnScoringSystem.h:1220
	BrnGameState::OnlineRoadRageModeScoring mOnlineRoadRageScoring;

	// BrnScoringSystem.h:1221
	BrnGameState::OnlineBurningHomeRunModeScoring mOnlineBurningHomeRunScoring;

	// BrnScoringSystem.h:1224
	BrnGameState::BaseOnlineModeScoring * mpCurrentOnlineModeScoring;

	// BrnScoringSystem.h:1227
	NetworkRoundData mNetworkRoundData;

	// BrnScoringSystem.h:1230
	uint32_t muTotalLaps;

	// BrnScoringSystem.h:1231
	uint32_t muNumCarsFinishedRace;

	// BrnScoringSystem.h:1232
	int32_t miTotalCheckpoints;

	// BrnScoringSystem.h:1233
	int32_t miTotalOnlineLandmarks;

	// BrnScoringSystem.h:1234
	uint32_t muCarsInCurrentMode;

	// BrnScoringSystem.h:1235
	uint32_t muActualNumberOfCarsInCurrentMode;

	// BrnScoringSystem.h:1236
	EActiveRaceCarIndex meLeadRaceCarIndex;

	// BrnScoringSystem.h:1237
	EActiveRaceCarIndex meLastRaceCarIndex;

	// BrnScoringSystem.h:1238
	bool mbNewLeader;

	// BrnScoringSystem.h:1239
	bool mbNewLastPlace;

	// BrnScoringSystem.h:1240
	bool mbACarHasFinishedTheRace;

	// BrnScoringSystem.h:1243
	CarData[8] maCarData;

	// BrnScoringSystem.h:1244
	RaceCarPositioningData[8] maRaceCarPositioningData;

	// BrnScoringSystem.h:1245
	RoadRulesRecvData::NetworkPlayerID[8] maBurnoutSkillzPlayerIDs;

	// BrnScoringSystem.h:1246
	BurnoutSkillzData[8] maBurnoutSkillzData;

	// BrnScoringSystem.h:1248
	float32_t[16] mafCheckpointSeparations;

	// BrnScoringSystem.h:1249
	float32_t[16] mafCheckpointDistancesToFinish;

	// BrnScoringSystem.h:1250
	bool mbCheckPointDistancesToFinishReady;

	// BrnScoringSystem.h:1252
	float32_t mfTotalRaceDistance;

	// BrnScoringSystem.h:1255
	float32_t mfPlayerDistanceToFinishLastFrame;

	// BrnScoringSystem.h:1256
	float32_t mfPlayerTimeHeadingTheWrongWay;

	// BrnScoringSystem.h:1257
	float32_t mfPlayerTimeStationary;

	// BrnScoringSystem.h:1258
	float32_t mfPlayerTimeWithoutInput;

	// BrnScoringSystem.h:1261
	bool mbMedalMode;

	// BrnScoringSystem.h:1262
	float32_t[4] mafMedalTimes;

	// BrnScoringSystem.h:1263
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalTarget;

	// BrnScoringSystem.h:1264
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalAchieved;

	// BrnScoringSystem.h:1267
	bool mbEliminationMode;

	// BrnScoringSystem.h:1268
	bool mbPlayerElimated;

	// BrnScoringSystem.h:1269
	EActiveRaceCarIndex mLastCarRaceCarIndex;

	// BrnScoringSystem.h:1270
	float32_t mfEliminatorTimeStep;

	// BrnScoringSystem.h:1271
	bool mbEliminationRequired;

	// BrnScoringSystem.h:1272
	uint32_t muCarsThatHaventBeenEliminated;

	// BrnScoringSystem.h:1275
	Array<EActiveRaceCarIndex,7u> maEliminatedActiveRaceCarIndexs;

	// BrnScoringSystem.h:1279
	int32_t miUpdateRacePositionsPM;

public:
	// BrnScoringSystem.h:314
	void Construct(StuntModeScoring::AchievementManager *);

	// BrnScoringSystem.h:319
	bool Prepare(HeapMalloc *);

	// BrnScoringSystem.h:323
	bool Release();

	// BrnScoringSystem.h:330
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType, const GameModeParams *, bool);

	// BrnScoringSystem.h:333
	void OnModeEnd(bool);

	// BrnScoringSystem.h:337
	void ClearCumulativeData();

	// BrnScoringSystem.h:341
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer();

	// BrnScoringSystem.h:347
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer(RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:353
	void SetPlayerRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:358
	void RemovePlayer(EActiveRaceCarIndex);

	// BrnScoringSystem.h:362
	void SetRivalEliminated(EActiveRaceCarIndex);

	// BrnScoringSystem.h:367
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:374
	void WriteDataToOutput(ScoringOutputInterface *, OnlineScoringOutputInterface *, bool);

	// BrnScoringSystem.h:381
	void StartModeTimer(const Time &);

	// BrnScoringSystem.h:385
	bool IsPlayerTotalled() const;

	// BrnScoringSystem.h:391
	void OnRoadRagePlayerCrashed(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::ERoadRageCrashType);

	// BrnScoringSystem.h:394
	void ResetRoadRageCrashesForPlayer();

	// BrnScoringSystem.h:397
	int32_t GetRoadRagePlayerCrashes();

	// BrnScoringSystem.h:400
	int32_t GetPlayerCrashesRemaining();

	// BrnScoringSystem.h:407
	void StopModeTimer(const Time &, EActiveRaceCarIndex, bool);

	// BrnScoringSystem.h:412
	void StartOnlineGameModeScoring(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:417
	void ClearModeTimer();

	// BrnScoringSystem.h:422
	void ClearHighestPositions();

	// BrnScoringSystem.h:426
	bool IsTimerActive() const;

	// BrnScoringSystem.h:432
	void SetTimeLimitSeconds(float32_t);

	// BrnScoringSystem.h:439
	void SetMedalModeTimer(float32_t, float32_t, float32_t);

	// BrnScoringSystem.h:445
	void SetTimeLimitPerKm(float32_t);

	// BrnScoringSystem.h:449
	const Time GetTimeLimit() const;

	// BrnScoringSystem.h:453
	bool IsTimeLimitActive() const;

	// BrnScoringSystem.h:458
	void IncreaseTimeLimit(float32_t);

	// BrnScoringSystem.h:462
	void ClearTimeLimit();

	// BrnScoringSystem.h:468
	const Time GetElapsedTime(const Time &) const;

	// BrnScoringSystem.h:474
	const Time GetModeTimeRemaining(const Time &);

	// BrnScoringSystem.h:480
	bool HasModeTimeExpired(const Time &);

	// BrnScoringSystem.h:485
	void UpdateTimerForEliminator(const Time &);

	// BrnScoringSystem.h:490
	void SetCheckPointsForCarsWithinRace(int32_t);

	// BrnScoringSystem.h:493
	bool AcheivedGold();

	// BrnScoringSystem.h:497
	bool HasCrashModeEnded() const;

	// BrnScoringSystem.h:501
	bool HasStuntAttackModeEnded(Time);

	// BrnScoringSystem.h:508
	void SetTotalLaps(uint32_t);

	// BrnScoringSystem.h:512
	uint32_t GetTotalLaps() const;

	// BrnScoringSystem.h:517
	void SetTotalCheckpoints(int32_t);

	// BrnScoringSystem.h:521
	int32_t GetTotalCheckpoints() const;

	// BrnScoringSystem.h:527
	void SetOnlineLandmarks(LandmarkIndex *, int32_t);

	// BrnScoringSystem.h:531
	int32_t GetTotalOnlineLandmarks() const;

	// BrnScoringSystem.h:537
	void SetCheckpointDistances(uint32_t, float32_t);

	// BrnScoringSystem.h:542
	void SetPlayerDistanceToFinish(float32_t);

	// BrnScoringSystem.h:546
	float32_t GetPlayerDistanceToFinish();

	// BrnScoringSystem.h:551
	float32_t GetCheckpointDistanceToFinish(uint32_t) const;

	// BrnScoringSystem.h:555
	bool IsCheckPointDistanceToFinishReady() const;

	// BrnScoringSystem.h:560
	void ProcessFinishDistances(int32_t);

	// BrnScoringSystem.h:563
	const float32_t GetTotalRaceDistance() const;

	// BrnScoringSystem.h:569
	void OnPlayerDoesATakedown(Time, InputBuffer::GameActionQueue *);

	// BrnScoringSystem.h:574
	void OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType);

	// BrnScoringSystem.h:582
	void RegisterFinishForCar(bool, EActiveRaceCarIndex, const Time &);

	// BrnScoringSystem.h:589
	void RegisterCheckpointForCar(BrnGameState::GameStateModuleIO::EGameModeType, int32_t, LandmarkIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:594
	void RaceCarHasReachedCheckPointWithinEvent(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:599
	bool IsOnlineLandmarkVisited(EActiveRaceCarIndex, LandmarkIndex);

	// BrnScoringSystem.h:603
	int32_t GetOnlineLandmarksVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:610
	float32_t GetRaceCarLapTimeSeconds(EActiveRaceCarIndex, uint32_t) const;

	// BrnScoringSystem.h:615
	uint32_t GetRaceCarNumCompletedLaps(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:620
	Time GetRaceCarTimeInCurrentTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:625
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:630
	uint32_t GetCarRacePosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:635
	int32_t GetCarRaceFinishPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:640
	float_t GetRaceCarDistanceToFinish(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:645
	float_t GetRaceCarDistanceToPlayer(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:650
	float32_t GetPositionedCarDistanceToFinish(int32_t) const;

	// BrnScoringSystem.h:655
	float_t GetRaceCarDistanceToFinishAtRoundEnd(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:659
	bool HasAnyCarFinished() const;

	// BrnScoringSystem.h:664
	EActiveRaceCarIndex GetPositionedCarIndex(int32_t) const;

	// BrnScoringSystem.h:669
	EActiveRaceCarIndex GetRaceCarEliminatorIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:674
	int32_t GetNumberOfEliminations(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:679
	bool GetOvertakenRival(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:683
	EActiveRaceCarIndex GetLead() const;

	// BrnScoringSystem.h:687
	EActiveRaceCarIndex GetLast() const;

	// BrnScoringSystem.h:691
	bool GetNewLeader() const;

	// BrnScoringSystem.h:695
	bool GetNewLast() const;

	// BrnScoringSystem.h:700
	Time GetFinishTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:707
	const Time GetRaceCarTotalTime(EActiveRaceCarIndex, const Time &) const;

	// BrnScoringSystem.h:711
	EActiveRaceCarIndex GetCurrentLastPlaceActiveRaceCar();

	// BrnScoringSystem.h:716
	void SetNumberOfCarsForEliminator(uint32_t);

	// BrnScoringSystem.h:721
	const Time GetRaceCarFastestLapTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:726
	const int32_t GetNumberOfTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:731
	const int32_t GetNumberOfCrashes(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:736
	const int32_t GetNumberOfTakedownsAgainst(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:739
	const uint32_t GetNumberOfActiveCars() const;

	// BrnScoringSystem.h:743
	const int32_t GetNumberOfFinishedCars() const;

	// BrnScoringSystem.h:749
	void GetOnlinePlayersChallengeHighScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:757
	void GetHighestLobbyRoadRuleScore(Road::ChallengeIndex, BrnStreetData::ScoreType, int32_t *, EActiveRaceCarIndex *);

	// BrnScoringSystem.h:762
	void UpdateNumberOfCarsInMode(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:770
	// Declaration
	void UpdateRacePositions(const ActiveRaceCarOutputInterface *, const GlobalRaceCarOutputInterface *, const AICarOutputInterface *, BrnGameState::ModeManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:46
		typedef RCEntityGlobalRaceCarOutputInterface GlobalRaceCarOutputInterface;

		// BrnScoringSystem.h:48
		typedef AICarOutputInterface AICarOutputInterface;

	}

	// BrnScoringSystem.h:775
	void UpdateTeamStats(float_t);

	// BrnScoringSystem.h:780
	void UpdateTakedowns(const InputBuffer::TakedownEventQueue *);

	// BrnScoringSystem.h:786
	void UpdatePaybackTakedowns(const GameStateToNetworkInterface::DirtyTrickQueue *, const GameStateToNetworkInterface::DirtyTrickQueue *);

	// BrnScoringSystem.h:791
	void UpdateCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnScoringSystem.h:797
	void UpdateNetworkPlayerResults(const PlayerResultsInterface *, bool);

	// BrnScoringSystem.h:804
	void UpdateCumulativeResults(uint32_t, int32_t, bool);

	// BrnScoringSystem.h:810
	int CompareRaceCarDistances(const void *, const void *);

	// BrnScoringSystem.h:815
	void UpdateDistanceToPlayer(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:821
	void DetectPlayerDrivingWrongWay(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:827
	void DetectPlayerStationary(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:834
	void UpdateCrashModeScore(const ActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnScoringSystem.h:840
	void UpdateStuntAttackModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:846
	void UpdateRoadRageModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:851
	void SetRoadRageDetails(uint32_t, uint32_t);

	// BrnScoringSystem.h:855
	void CheckRoadRageMedalAwarded(uint32_t);

	// BrnScoringSystem.h:864
	void UpdateGeneralStats(const ActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnScoringSystem.h:868
	RoadRulesRecvData::NetworkPlayerID GetPointsLeader() const;

	// BrnScoringSystem.h:872
	EActiveRaceCarIndex GetPointsLoser() const;

	// BrnScoringSystem.h:877
	int32_t GetRaceCarStandingsPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:882
	int32_t GetCumulativePoints(EActiveRaceCarIndex);

	// BrnScoringSystem.h:886
	BrnGameState::CarData::EPlayerStatus GetPlayerStatus(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:891
	void SetPlayerStatus(EActiveRaceCarIndex, BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:897
	void SetPlayerEliminated(EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:902
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:907
	bool GetPlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:911
	bool GetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:915
	void ClearDisconnectedPlayers();

	// BrnScoringSystem.h:919
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:924
	void SetPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:929
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:935
	void SetRoundStartPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:939
	CrashModeScoring * GetCrashScorer();

	// BrnScoringSystem.h:943
	StuntModeScoring * GetStuntScorer();

	// BrnScoringSystem.h:947
	RoadRageModeScoring * GetRoadRageScoring();

	// BrnScoringSystem.h:950
	const RoadRageModeScoring * GetRoadRageScoring() const;

	// BrnScoringSystem.h:954
	bool IsBlueTeamEliminated() const;

	// BrnScoringSystem.h:960
	bool PrepareRoadRageScoring(int32_t, uint16_t);

	// BrnScoringSystem.h:965
	bool AreAllRemotePlayersDisconnected(EActiveRaceCarIndex);

	// BrnScoringSystem.h:969
	int32_t GetNumberOfNonDisconnectedPlayers();

	// BrnScoringSystem.h:974
	void SetCheckPointDistancesToFinishReady(bool);

	// BrnScoringSystem.h:979
	void StoreCarIds(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:984
	float32_t GetTotalDistanceDriven(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:989
	bool IsNetworkCarsDistanceDrivenValid(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:994
	Time GetTimeSpentInFirstPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:999
	Time GetTimeSpentInLastPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1003
	bool HaveCarsBeenSortedIntoRacePositions() const;

	// BrnScoringSystem.h:1008
	Time GetTimeSpentBoosting(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1013
	float32_t GetLongestDrift(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1018
	int32_t GetMarkedManTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1025
	void SaveNetworkRoundData(RoadRulesRecvData::NetworkPlayerID, Time, EActiveRaceCarIndex);

	// BrnScoringSystem.h:1029
	void ClearNetworkRoundData();

	// BrnScoringSystem.h:1033
	NetworkRoundData * GetNetworkRoundData();

	// BrnScoringSystem.h:1037
	float32_t GetPlayerWrongWayTime() const;

	// BrnScoringSystem.h:1041
	float32_t GetPlayerStationaryTime() const;

	// BrnScoringSystem.h:1045
	float32_t GetPlayerNoInputTime() const;

	// BrnScoringSystem.h:1049
	void ResetPlayerNoInputTime();

	// BrnScoringSystem.h:1053
	void ResetPlayerStationaryTime();

	// BrnScoringSystem.h:1057
	const CarData * GetCarData(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1061
	CarData * GetCarData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1065
	CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1069
	const CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1073
	CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnScoringSystem.h:1077
	const CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1081
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1085
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1089
	bool IsPlayerInScoringSystem(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1093
	bool IsNetworkPlayerInScoringSystem(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1098
	int32_t GetNumberOfNetworkPlayers() const;

	// BrnScoringSystem.h:1101
	int32_t GetNumberOfNetworkPlayersStillConnected() const;

	// BrnScoringSystem.h:1104
	bool AreAllRaceCarsSetup() const;

	// BrnScoringSystem.h:1108
	void LocalPlayerQuit(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1111
	void SetNextMedalTargetTime();

	// BrnScoringSystem.h:1114
	void SetNextEliminatorTargetTime();

	// BrnScoringSystem.h:1117
	void SetNextTargetTime();

	// BrnScoringSystem.h:1120
	float32_t GetCurrentLandmarkDistance();

	// BrnScoringSystem.h:1123
	const Time GetCurrentModeTimeTarget() const;

	// BrnScoringSystem.h:1126
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalTarget();

	// BrnScoringSystem.h:1129
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalAchieved();

	// BrnScoringSystem.h:1135
	EActiveRaceCarIndex GetNextTeamMember(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam) const;

	// BrnScoringSystem.h:1141
	// Declaration
	void AddPlayerBurnoutSkillz(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:3611
		using namespace CgsDev::Message;

	}

	// BrnScoringSystem.h:1146
	BurnoutSkillzData * GetBurnoutSkillzData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1151
	BurnoutSkillzData * GetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1155
	void ClearAllBurnoutSkillzData();

	// BrnScoringSystem.h:1160
	void ClearPlayersBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1166
	void SetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID, const BurnoutSkillzData *);

	// BrnScoringSystem.h:1171
	bool DidPlayerFinishOnlineEventFirst(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1176
	int32_t GetOnlineFinishPosition(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1180
	bool HasBeatenRoadRageTarget();

	// BrnScoringSystem.h:1183
	bool HasTargetScoreBeenExceeded() const;

	// BrnScoringSystem.h:1188
	void ResetOnlineCheckpointsVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1192
	void ReducePlayerDurability();

private:
	// BrnScoringSystem.h:1197
	void ClearData(bool);

}

// BrnScoringSystem.h:306
struct BrnGameState::ScoringSystem {
private:
	// BrnScoringSystem.h:1199
	Time mStartTime;

	// BrnScoringSystem.h:1200
	Time mEndTime;

	// BrnScoringSystem.h:1201
	Time mTotalTime;

	// BrnScoringSystem.h:1202
	Time mTimeRemaining;

	// BrnScoringSystem.h:1206
	CrashModeScoring mCrashModeScoring;

	// BrnScoringSystem.h:1209
	StuntModeScoring mStuntModeScoring;

	// BrnScoringSystem.h:1212
	RoadRageModeScoring mRoadRageModeScoring;

	// BrnScoringSystem.h:1213
	int32_t miMaximumPlayerCrashedNumber;

	// BrnScoringSystem.h:1214
	int32_t miCurrentPlayerCrashedNumber;

	// BrnScoringSystem.h:1215
	bool mbPlayerTotalled;

	// BrnScoringSystem.h:1216
	uint32_t[4] mauiMedalScores;

	// BrnScoringSystem.h:1219
	BrnGameState::OnlineRaceModeScoring mOnlineRaceModeScoring;

	// BrnScoringSystem.h:1220
	BrnGameState::OnlineRoadRageModeScoring mOnlineRoadRageScoring;

	// BrnScoringSystem.h:1221
	BrnGameState::OnlineBurningHomeRunModeScoring mOnlineBurningHomeRunScoring;

	// BrnScoringSystem.h:1224
	BrnGameState::BaseOnlineModeScoring * mpCurrentOnlineModeScoring;

	// BrnScoringSystem.h:1227
	NetworkRoundData mNetworkRoundData;

	// BrnScoringSystem.h:1230
	uint32_t muTotalLaps;

	// BrnScoringSystem.h:1231
	uint32_t muNumCarsFinishedRace;

	// BrnScoringSystem.h:1232
	int32_t miTotalCheckpoints;

	// BrnScoringSystem.h:1233
	int32_t miTotalOnlineLandmarks;

	// BrnScoringSystem.h:1234
	uint32_t muCarsInCurrentMode;

	// BrnScoringSystem.h:1235
	uint32_t muActualNumberOfCarsInCurrentMode;

	// BrnScoringSystem.h:1236
	EActiveRaceCarIndex meLeadRaceCarIndex;

	// BrnScoringSystem.h:1237
	EActiveRaceCarIndex meLastRaceCarIndex;

	// BrnScoringSystem.h:1238
	bool mbNewLeader;

	// BrnScoringSystem.h:1239
	bool mbNewLastPlace;

	// BrnScoringSystem.h:1240
	bool mbACarHasFinishedTheRace;

	// BrnScoringSystem.h:1243
	CarData[8] maCarData;

	// BrnScoringSystem.h:1244
	RaceCarPositioningData[8] maRaceCarPositioningData;

	// BrnScoringSystem.h:1245
	RoadRulesRecvData::NetworkPlayerID[8] maBurnoutSkillzPlayerIDs;

	// BrnScoringSystem.h:1246
	BurnoutSkillzData[8] maBurnoutSkillzData;

	// BrnScoringSystem.h:1248
	float32_t[16] mafCheckpointSeparations;

	// BrnScoringSystem.h:1249
	float32_t[16] mafCheckpointDistancesToFinish;

	// BrnScoringSystem.h:1250
	bool mbCheckPointDistancesToFinishReady;

	// BrnScoringSystem.h:1252
	float32_t mfTotalRaceDistance;

	// BrnScoringSystem.h:1255
	float32_t mfPlayerDistanceToFinishLastFrame;

	// BrnScoringSystem.h:1256
	float32_t mfPlayerTimeHeadingTheWrongWay;

	// BrnScoringSystem.h:1257
	float32_t mfPlayerTimeStationary;

	// BrnScoringSystem.h:1258
	float32_t mfPlayerTimeWithoutInput;

	// BrnScoringSystem.h:1261
	bool mbMedalMode;

	// BrnScoringSystem.h:1262
	float32_t[4] mafMedalTimes;

	// BrnScoringSystem.h:1263
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalTarget;

	// BrnScoringSystem.h:1264
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalAchieved;

	// BrnScoringSystem.h:1267
	bool mbEliminationMode;

	// BrnScoringSystem.h:1268
	bool mbPlayerElimated;

	// BrnScoringSystem.h:1269
	EActiveRaceCarIndex mLastCarRaceCarIndex;

	// BrnScoringSystem.h:1270
	float32_t mfEliminatorTimeStep;

	// BrnScoringSystem.h:1271
	bool mbEliminationRequired;

	// BrnScoringSystem.h:1272
	uint32_t muCarsThatHaventBeenEliminated;

	// BrnScoringSystem.h:1275
	Array<EActiveRaceCarIndex,7u> maEliminatedActiveRaceCarIndexs;

	// BrnScoringSystem.h:1279
	int32_t miUpdateRacePositionsPM;

public:
	// BrnScoringSystem.h:314
	void Construct(StuntModeScoring::AchievementManager *);

	// BrnScoringSystem.h:319
	bool Prepare(HeapMalloc *);

	// BrnScoringSystem.h:323
	bool Release();

	// BrnScoringSystem.h:330
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType, const GameModeParams *, bool);

	// BrnScoringSystem.h:333
	void OnModeEnd(bool);

	// BrnScoringSystem.h:337
	void ClearCumulativeData();

	// BrnScoringSystem.h:341
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer();

	// BrnScoringSystem.h:347
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer(RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:353
	void SetPlayerRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:358
	void RemovePlayer(EActiveRaceCarIndex);

	// BrnScoringSystem.h:362
	void SetRivalEliminated(EActiveRaceCarIndex);

	// BrnScoringSystem.h:367
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:374
	void WriteDataToOutput(ScoringOutputInterface *, OnlineScoringOutputInterface *, bool);

	// BrnScoringSystem.h:381
	void StartModeTimer(const Time &);

	// BrnScoringSystem.h:385
	bool IsPlayerTotalled() const;

	// BrnScoringSystem.h:391
	void OnRoadRagePlayerCrashed(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::ERoadRageCrashType);

	// BrnScoringSystem.h:394
	void ResetRoadRageCrashesForPlayer();

	// BrnScoringSystem.h:397
	int32_t GetRoadRagePlayerCrashes();

	// BrnScoringSystem.h:400
	int32_t GetPlayerCrashesRemaining();

	// BrnScoringSystem.h:407
	void StopModeTimer(const Time &, EActiveRaceCarIndex, bool);

	// BrnScoringSystem.h:412
	void StartOnlineGameModeScoring(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:417
	void ClearModeTimer();

	// BrnScoringSystem.h:422
	void ClearHighestPositions();

	// BrnScoringSystem.h:426
	bool IsTimerActive() const;

	// BrnScoringSystem.h:432
	void SetTimeLimitSeconds(float32_t);

	// BrnScoringSystem.h:439
	void SetMedalModeTimer(float32_t, float32_t, float32_t);

	// BrnScoringSystem.h:445
	void SetTimeLimitPerKm(float32_t);

	// BrnScoringSystem.h:449
	const Time GetTimeLimit() const;

	// BrnScoringSystem.h:453
	bool IsTimeLimitActive() const;

	// BrnScoringSystem.h:458
	void IncreaseTimeLimit(float32_t);

	// BrnScoringSystem.h:462
	void ClearTimeLimit();

	// BrnScoringSystem.h:468
	const Time GetElapsedTime(const Time &) const;

	// BrnScoringSystem.h:474
	const Time GetModeTimeRemaining(const Time &);

	// BrnScoringSystem.h:480
	bool HasModeTimeExpired(const Time &);

	// BrnScoringSystem.h:485
	void UpdateTimerForEliminator(const Time &);

	// BrnScoringSystem.h:490
	void SetCheckPointsForCarsWithinRace(int32_t);

	// BrnScoringSystem.h:493
	bool AcheivedGold();

	// BrnScoringSystem.h:497
	bool HasCrashModeEnded() const;

	// BrnScoringSystem.h:501
	bool HasStuntAttackModeEnded(Time);

	// BrnScoringSystem.h:508
	void SetTotalLaps(uint32_t);

	// BrnScoringSystem.h:512
	uint32_t GetTotalLaps() const;

	// BrnScoringSystem.h:517
	void SetTotalCheckpoints(int32_t);

	// BrnScoringSystem.h:521
	int32_t GetTotalCheckpoints() const;

	// BrnScoringSystem.h:527
	void SetOnlineLandmarks(LandmarkIndex *, int32_t);

	// BrnScoringSystem.h:531
	int32_t GetTotalOnlineLandmarks() const;

	// BrnScoringSystem.h:537
	void SetCheckpointDistances(uint32_t, float32_t);

	// BrnScoringSystem.h:542
	void SetPlayerDistanceToFinish(float32_t);

	// BrnScoringSystem.h:546
	float32_t GetPlayerDistanceToFinish();

	// BrnScoringSystem.h:551
	float32_t GetCheckpointDistanceToFinish(uint32_t) const;

	// BrnScoringSystem.h:555
	bool IsCheckPointDistanceToFinishReady() const;

	// BrnScoringSystem.h:560
	void ProcessFinishDistances(int32_t);

	// BrnScoringSystem.h:563
	const float32_t GetTotalRaceDistance() const;

	// BrnScoringSystem.h:569
	void OnPlayerDoesATakedown(Time, InputBuffer::GameActionQueue *);

	// BrnScoringSystem.h:574
	void OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType);

	// BrnScoringSystem.h:582
	void RegisterFinishForCar(bool, EActiveRaceCarIndex, const Time &);

	// BrnScoringSystem.h:589
	// Declaration
	void RegisterCheckpointForCar(BrnGameState::GameStateModuleIO::EGameModeType, int32_t, LandmarkIndex, EActiveRaceCarIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.cpp:493
		using namespace CgsDev::Message;

	}

	// BrnScoringSystem.h:594
	void RaceCarHasReachedCheckPointWithinEvent(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:599
	bool IsOnlineLandmarkVisited(EActiveRaceCarIndex, LandmarkIndex);

	// BrnScoringSystem.h:603
	int32_t GetOnlineLandmarksVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:610
	float32_t GetRaceCarLapTimeSeconds(EActiveRaceCarIndex, uint32_t) const;

	// BrnScoringSystem.h:615
	uint32_t GetRaceCarNumCompletedLaps(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:620
	Time GetRaceCarTimeInCurrentTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:625
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:630
	uint32_t GetCarRacePosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:635
	int32_t GetCarRaceFinishPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:640
	float_t GetRaceCarDistanceToFinish(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:645
	float_t GetRaceCarDistanceToPlayer(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:650
	float32_t GetPositionedCarDistanceToFinish(int32_t) const;

	// BrnScoringSystem.h:655
	float_t GetRaceCarDistanceToFinishAtRoundEnd(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:659
	bool HasAnyCarFinished() const;

	// BrnScoringSystem.h:664
	EActiveRaceCarIndex GetPositionedCarIndex(int32_t) const;

	// BrnScoringSystem.h:669
	EActiveRaceCarIndex GetRaceCarEliminatorIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:674
	int32_t GetNumberOfEliminations(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:679
	bool GetOvertakenRival(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:683
	EActiveRaceCarIndex GetLead() const;

	// BrnScoringSystem.h:687
	EActiveRaceCarIndex GetLast() const;

	// BrnScoringSystem.h:691
	bool GetNewLeader() const;

	// BrnScoringSystem.h:695
	bool GetNewLast() const;

	// BrnScoringSystem.h:700
	Time GetFinishTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:707
	const Time GetRaceCarTotalTime(EActiveRaceCarIndex, const Time &) const;

	// BrnScoringSystem.h:711
	EActiveRaceCarIndex GetCurrentLastPlaceActiveRaceCar();

	// BrnScoringSystem.h:716
	void SetNumberOfCarsForEliminator(uint32_t);

	// BrnScoringSystem.h:721
	const Time GetRaceCarFastestLapTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:726
	const int32_t GetNumberOfTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:731
	const int32_t GetNumberOfCrashes(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:736
	const int32_t GetNumberOfTakedownsAgainst(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:739
	const uint32_t GetNumberOfActiveCars() const;

	// BrnScoringSystem.h:743
	const int32_t GetNumberOfFinishedCars() const;

	// BrnScoringSystem.h:749
	void GetOnlinePlayersChallengeHighScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:757
	void GetHighestLobbyRoadRuleScore(Road::ChallengeIndex, BrnStreetData::ScoreType, int32_t *, EActiveRaceCarIndex *);

	// BrnScoringSystem.h:762
	void UpdateNumberOfCarsInMode(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:770
	// Declaration
	void UpdateRacePositions(const ActiveRaceCarOutputInterface *, const GlobalRaceCarOutputInterface *, const AICarOutputInterface *, BrnGameState::ModeManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:46
		typedef RCEntityGlobalRaceCarOutputInterface GlobalRaceCarOutputInterface;

		// BrnScoringSystem.h:48
		typedef AICarOutputInterface AICarOutputInterface;

	}

	// BrnScoringSystem.h:775
	void UpdateTeamStats(float_t);

	// BrnScoringSystem.h:780
	void UpdateTakedowns(const InputBuffer::TakedownEventQueue *);

	// BrnScoringSystem.h:786
	void UpdatePaybackTakedowns(const GameStateToNetworkInterface::DirtyTrickQueue *, const GameStateToNetworkInterface::DirtyTrickQueue *);

	// BrnScoringSystem.h:791
	void UpdateCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnScoringSystem.h:797
	void UpdateNetworkPlayerResults(const PlayerResultsInterface *, bool);

	// BrnScoringSystem.h:804
	void UpdateCumulativeResults(uint32_t, int32_t, bool);

	// BrnScoringSystem.h:810
	int CompareRaceCarDistances(const void *, const void *);

	// BrnScoringSystem.h:815
	void UpdateDistanceToPlayer(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:821
	void DetectPlayerDrivingWrongWay(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:827
	void DetectPlayerStationary(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:834
	void UpdateCrashModeScore(const ActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnScoringSystem.h:840
	void UpdateStuntAttackModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:846
	void UpdateRoadRageModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:851
	void SetRoadRageDetails(uint32_t, uint32_t);

	// BrnScoringSystem.h:855
	void CheckRoadRageMedalAwarded(uint32_t);

	// BrnScoringSystem.h:864
	void UpdateGeneralStats(const ActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnScoringSystem.h:868
	RoadRulesRecvData::NetworkPlayerID GetPointsLeader() const;

	// BrnScoringSystem.h:872
	EActiveRaceCarIndex GetPointsLoser() const;

	// BrnScoringSystem.h:877
	int32_t GetRaceCarStandingsPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:882
	int32_t GetCumulativePoints(EActiveRaceCarIndex);

	// BrnScoringSystem.h:886
	BrnGameState::CarData::EPlayerStatus GetPlayerStatus(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:891
	void SetPlayerStatus(EActiveRaceCarIndex, BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:897
	void SetPlayerEliminated(EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:902
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:907
	bool GetPlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:911
	bool GetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:915
	void ClearDisconnectedPlayers();

	// BrnScoringSystem.h:919
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:924
	void SetPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:929
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:935
	void SetRoundStartPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:939
	CrashModeScoring * GetCrashScorer();

	// BrnScoringSystem.h:943
	StuntModeScoring * GetStuntScorer();

	// BrnScoringSystem.h:947
	RoadRageModeScoring * GetRoadRageScoring();

	// BrnScoringSystem.h:950
	const RoadRageModeScoring * GetRoadRageScoring() const;

	// BrnScoringSystem.h:954
	bool IsBlueTeamEliminated() const;

	// BrnScoringSystem.h:960
	bool PrepareRoadRageScoring(int32_t, uint16_t);

	// BrnScoringSystem.h:965
	bool AreAllRemotePlayersDisconnected(EActiveRaceCarIndex);

	// BrnScoringSystem.h:969
	int32_t GetNumberOfNonDisconnectedPlayers();

	// BrnScoringSystem.h:974
	void SetCheckPointDistancesToFinishReady(bool);

	// BrnScoringSystem.h:979
	void StoreCarIds(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:984
	float32_t GetTotalDistanceDriven(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:989
	bool IsNetworkCarsDistanceDrivenValid(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:994
	Time GetTimeSpentInFirstPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:999
	Time GetTimeSpentInLastPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1003
	bool HaveCarsBeenSortedIntoRacePositions() const;

	// BrnScoringSystem.h:1008
	Time GetTimeSpentBoosting(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1013
	float32_t GetLongestDrift(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1018
	int32_t GetMarkedManTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1025
	void SaveNetworkRoundData(RoadRulesRecvData::NetworkPlayerID, Time, EActiveRaceCarIndex);

	// BrnScoringSystem.h:1029
	void ClearNetworkRoundData();

	// BrnScoringSystem.h:1033
	NetworkRoundData * GetNetworkRoundData();

	// BrnScoringSystem.h:1037
	float32_t GetPlayerWrongWayTime() const;

	// BrnScoringSystem.h:1041
	float32_t GetPlayerStationaryTime() const;

	// BrnScoringSystem.h:1045
	float32_t GetPlayerNoInputTime() const;

	// BrnScoringSystem.h:1049
	void ResetPlayerNoInputTime();

	// BrnScoringSystem.h:1053
	void ResetPlayerStationaryTime();

	// BrnScoringSystem.h:1057
	const CarData * GetCarData(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1061
	CarData * GetCarData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1065
	CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1069
	const CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1073
	CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnScoringSystem.h:1077
	const CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1081
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1085
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1089
	bool IsPlayerInScoringSystem(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1093
	bool IsNetworkPlayerInScoringSystem(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1098
	int32_t GetNumberOfNetworkPlayers() const;

	// BrnScoringSystem.h:1101
	int32_t GetNumberOfNetworkPlayersStillConnected() const;

	// BrnScoringSystem.h:1104
	bool AreAllRaceCarsSetup() const;

	// BrnScoringSystem.h:1108
	void LocalPlayerQuit(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1111
	void SetNextMedalTargetTime();

	// BrnScoringSystem.h:1114
	void SetNextEliminatorTargetTime();

	// BrnScoringSystem.h:1117
	void SetNextTargetTime();

	// BrnScoringSystem.h:1120
	float32_t GetCurrentLandmarkDistance();

	// BrnScoringSystem.h:1123
	const Time GetCurrentModeTimeTarget() const;

	// BrnScoringSystem.h:1126
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalTarget();

	// BrnScoringSystem.h:1129
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalAchieved();

	// BrnScoringSystem.h:1135
	EActiveRaceCarIndex GetNextTeamMember(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam) const;

	// BrnScoringSystem.h:1141
	// Declaration
	void AddPlayerBurnoutSkillz(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:3611
		using namespace CgsDev::Message;

	}

	// BrnScoringSystem.h:1146
	BurnoutSkillzData * GetBurnoutSkillzData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1151
	BurnoutSkillzData * GetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1155
	void ClearAllBurnoutSkillzData();

	// BrnScoringSystem.h:1160
	void ClearPlayersBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1166
	void SetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID, const BurnoutSkillzData *);

	// BrnScoringSystem.h:1171
	bool DidPlayerFinishOnlineEventFirst(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1176
	int32_t GetOnlineFinishPosition(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1180
	bool HasBeatenRoadRageTarget();

	// BrnScoringSystem.h:1183
	bool HasTargetScoreBeenExceeded() const;

	// BrnScoringSystem.h:1188
	void ResetOnlineCheckpointsVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1192
	void ReducePlayerDurability();

private:
	// BrnScoringSystem.h:1197
	void ClearData(bool);

}

// BrnScoringSystem.h:123
struct BrnGameState::CarData {
private:
	// BrnScoringSystem.h:268
	CarScoreData mCarScoreData;

	// BrnScoringSystem.h:269
	CgsID mCarId;

	// BrnScoringSystem.h:270
	int32_t miCumulativePoints;

	// BrnScoringSystem.h:271
	int32_t miRoundDisconnectedIn;

	// BrnScoringSystem.h:272
	float32_t mfCurrentDriftDistance;

	// BrnScoringSystem.h:275
	BrnGameState::CarData::EPlayerStatus mePlayerStatus;

	// BrnScoringSystem.h:276
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnScoringSystem.h:279
	BrnGameState::GameStateModuleIO::EPlayerTeam meRoundStartPlayerTeam;

	// BrnScoringSystem.h:281
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnScoringSystem.h:282
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnScoringSystem.h:285
	ChallengeHighScoreEntry * mpaOnlineGameRoadRuleHighScores;

	// BrnScoringSystem.h:286
	CgsMemory::HeapMalloc * mpNetworkHeapMalloc;

	// BrnScoringSystem.h:288
	bool mbIsEliminated;

	// BrnScoringSystem.h:289
	int8_t miCurrentCheckPoint;

	// BrnScoringSystem.h:290
	bool mbHasFever;

public:
	// BrnScoringSystem.h:135
	void Construct();

	// BrnScoringSystem.h:139
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnScoringSystem.h:142
	bool Release();

	// BrnScoringSystem.h:145
	void Clear();

	// BrnScoringSystem.h:148
	void ClearCumulativeData();

	// BrnScoringSystem.h:151
	CarScoreData * GetScoreData();

	// BrnScoringSystem.h:154
	const CarScoreData * GetScoreData() const;

	// BrnScoringSystem.h:157
	CgsID GetCarID() const;

	// BrnScoringSystem.h:160
	int32_t GetCumulativePoints() const;

	// BrnScoringSystem.h:163
	int32_t GetRoundDisconnected() const;

	// BrnScoringSystem.h:166
	float32_t GetDriftDistance() const;

	// BrnScoringSystem.h:169
	BrnGameState::CarData::EPlayerStatus GetStatus() const;

	// BrnScoringSystem.h:172
	BrnGameState::GameStateModuleIO::EPlayerTeam GetTeam() const;

	// BrnScoringSystem.h:175
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartTeam() const;

	// BrnScoringSystem.h:178
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnScoringSystem.h:181
	GuiEventNetworkLaunching::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnScoringSystem.h:186
	void SetCarID(CgsID);

	// BrnScoringSystem.h:190
	void SetCumulativePoints(int32_t);

	// BrnScoringSystem.h:194
	void SetRoundDisconnected(int32_t);

	// BrnScoringSystem.h:198
	void SetDriftDistance(float32_t);

	// BrnScoringSystem.h:202
	void SetStatus(BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:206
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:210
	void SetRoundStartTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:216
	void GetRoadRulesScores(Road::ChallengeIndex, ChallengeHighScoreEntry *) const;

	// BrnScoringSystem.h:222
	void SetRoadRulesScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:226
	void ResetRoadRulesScores();

	// BrnScoringSystem.h:230
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnScoringSystem.h:234
	void SetNetworkPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:239
	void IncrementCumulativePoints(int32_t);

	// BrnScoringSystem.h:243
	void IncrementDriftDistance(float32_t);

	// BrnScoringSystem.h:246
	void SetEliminated();

	// BrnScoringSystem.h:249
	void IncrementCheckpointCount();

	// BrnScoringSystem.h:252
	int8_t GetCurrentCheckPoint();

	// BrnScoringSystem.h:256
	void SetCurrentCheckPoint(int8_t);

	// BrnScoringSystem.h:260
	void SetHasFever(bool);

	// BrnScoringSystem.h:263
	bool HasFever();

}

// BrnScoringSystem.h:306
struct BrnGameState::ScoringSystem {
private:
	// BrnScoringSystem.h:1199
	Time mStartTime;

	// BrnScoringSystem.h:1200
	Time mEndTime;

	// BrnScoringSystem.h:1201
	Time mTotalTime;

	// BrnScoringSystem.h:1202
	Time mTimeRemaining;

	// BrnScoringSystem.h:1206
	CrashModeScoring mCrashModeScoring;

	// BrnScoringSystem.h:1209
	StuntModeScoring mStuntModeScoring;

	// BrnScoringSystem.h:1212
	RoadRageModeScoring mRoadRageModeScoring;

	// BrnScoringSystem.h:1213
	int32_t miMaximumPlayerCrashedNumber;

	// BrnScoringSystem.h:1214
	int32_t miCurrentPlayerCrashedNumber;

	// BrnScoringSystem.h:1215
	bool mbPlayerTotalled;

	// BrnScoringSystem.h:1216
	uint32_t[4] mauiMedalScores;

	// BrnScoringSystem.h:1219
	BrnGameState::OnlineRaceModeScoring mOnlineRaceModeScoring;

	// BrnScoringSystem.h:1220
	BrnGameState::OnlineRoadRageModeScoring mOnlineRoadRageScoring;

	// BrnScoringSystem.h:1221
	BrnGameState::OnlineBurningHomeRunModeScoring mOnlineBurningHomeRunScoring;

	// BrnScoringSystem.h:1224
	BrnGameState::BaseOnlineModeScoring * mpCurrentOnlineModeScoring;

	// BrnScoringSystem.h:1227
	NetworkRoundData mNetworkRoundData;

	// BrnScoringSystem.h:1230
	uint32_t muTotalLaps;

	// BrnScoringSystem.h:1231
	uint32_t muNumCarsFinishedRace;

	// BrnScoringSystem.h:1232
	int32_t miTotalCheckpoints;

	// BrnScoringSystem.h:1233
	int32_t miTotalOnlineLandmarks;

	// BrnScoringSystem.h:1234
	uint32_t muCarsInCurrentMode;

	// BrnScoringSystem.h:1235
	uint32_t muActualNumberOfCarsInCurrentMode;

	// BrnScoringSystem.h:1236
	EActiveRaceCarIndex meLeadRaceCarIndex;

	// BrnScoringSystem.h:1237
	EActiveRaceCarIndex meLastRaceCarIndex;

	// BrnScoringSystem.h:1238
	bool mbNewLeader;

	// BrnScoringSystem.h:1239
	bool mbNewLastPlace;

	// BrnScoringSystem.h:1240
	bool mbACarHasFinishedTheRace;

	// BrnScoringSystem.h:1243
	CarData[8] maCarData;

	// BrnScoringSystem.h:1244
	RaceCarPositioningData[8] maRaceCarPositioningData;

	// BrnScoringSystem.h:1245
	GuiEventNetworkLaunching::NetworkPlayerID[8] maBurnoutSkillzPlayerIDs;

	// BrnScoringSystem.h:1246
	BurnoutSkillzData[8] maBurnoutSkillzData;

	// BrnScoringSystem.h:1248
	float32_t[16] mafCheckpointSeparations;

	// BrnScoringSystem.h:1249
	float32_t[16] mafCheckpointDistancesToFinish;

	// BrnScoringSystem.h:1250
	bool mbCheckPointDistancesToFinishReady;

	// BrnScoringSystem.h:1252
	float32_t mfTotalRaceDistance;

	// BrnScoringSystem.h:1255
	float32_t mfPlayerDistanceToFinishLastFrame;

	// BrnScoringSystem.h:1256
	float32_t mfPlayerTimeHeadingTheWrongWay;

	// BrnScoringSystem.h:1257
	float32_t mfPlayerTimeStationary;

	// BrnScoringSystem.h:1258
	float32_t mfPlayerTimeWithoutInput;

	// BrnScoringSystem.h:1261
	bool mbMedalMode;

	// BrnScoringSystem.h:1262
	float32_t[4] mafMedalTimes;

	// BrnScoringSystem.h:1263
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalTarget;

	// BrnScoringSystem.h:1264
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalAchieved;

	// BrnScoringSystem.h:1267
	bool mbEliminationMode;

	// BrnScoringSystem.h:1268
	bool mbPlayerElimated;

	// BrnScoringSystem.h:1269
	EActiveRaceCarIndex mLastCarRaceCarIndex;

	// BrnScoringSystem.h:1270
	float32_t mfEliminatorTimeStep;

	// BrnScoringSystem.h:1271
	bool mbEliminationRequired;

	// BrnScoringSystem.h:1272
	uint32_t muCarsThatHaventBeenEliminated;

	// BrnScoringSystem.h:1275
	Array<EActiveRaceCarIndex,7u> maEliminatedActiveRaceCarIndexs;

	// BrnScoringSystem.h:1279
	int32_t miUpdateRacePositionsPM;

public:
	// BrnScoringSystem.h:314
	void Construct(StuntModeScoring::AchievementManager *);

	// BrnScoringSystem.h:319
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnScoringSystem.h:323
	bool Release();

	// BrnScoringSystem.h:330
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType, const GameModeParams *, bool);

	// BrnScoringSystem.h:333
	void OnModeEnd(bool);

	// BrnScoringSystem.h:337
	void ClearCumulativeData();

	// BrnScoringSystem.h:341
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer();

	// BrnScoringSystem.h:347
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:353
	void SetPlayerRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:358
	void RemovePlayer(EActiveRaceCarIndex);

	// BrnScoringSystem.h:362
	void SetRivalEliminated(EActiveRaceCarIndex);

	// BrnScoringSystem.h:367
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:374
	void WriteDataToOutput(ScoringOutputInterface *, OnlineScoringOutputInterface *, bool);

	// BrnScoringSystem.h:381
	void StartModeTimer(const Time &);

	// BrnScoringSystem.h:385
	bool IsPlayerTotalled() const;

	// BrnScoringSystem.h:391
	void OnRoadRagePlayerCrashed(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::ERoadRageCrashType);

	// BrnScoringSystem.h:394
	void ResetRoadRageCrashesForPlayer();

	// BrnScoringSystem.h:397
	int32_t GetRoadRagePlayerCrashes();

	// BrnScoringSystem.h:400
	int32_t GetPlayerCrashesRemaining();

	// BrnScoringSystem.h:407
	void StopModeTimer(const Time &, EActiveRaceCarIndex, bool);

	// BrnScoringSystem.h:412
	void StartOnlineGameModeScoring(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:417
	void ClearModeTimer();

	// BrnScoringSystem.h:422
	void ClearHighestPositions();

	// BrnScoringSystem.h:426
	bool IsTimerActive() const;

	// BrnScoringSystem.h:432
	void SetTimeLimitSeconds(float32_t);

	// BrnScoringSystem.h:439
	void SetMedalModeTimer(float32_t, float32_t, float32_t);

	// BrnScoringSystem.h:445
	void SetTimeLimitPerKm(float32_t);

	// BrnScoringSystem.h:449
	const Time GetTimeLimit() const;

	// BrnScoringSystem.h:453
	bool IsTimeLimitActive() const;

	// BrnScoringSystem.h:458
	void IncreaseTimeLimit(float32_t);

	// BrnScoringSystem.h:462
	void ClearTimeLimit();

	// BrnScoringSystem.h:468
	const Time GetElapsedTime(const Time &) const;

	// BrnScoringSystem.h:474
	const Time GetModeTimeRemaining(const Time &);

	// BrnScoringSystem.h:480
	bool HasModeTimeExpired(const Time &);

	// BrnScoringSystem.h:485
	void UpdateTimerForEliminator(const Time &);

	// BrnScoringSystem.h:490
	void SetCheckPointsForCarsWithinRace(int32_t);

	// BrnScoringSystem.h:493
	bool AcheivedGold();

	// BrnScoringSystem.h:497
	bool HasCrashModeEnded() const;

	// BrnScoringSystem.h:501
	bool HasStuntAttackModeEnded(Time);

	// BrnScoringSystem.h:508
	void SetTotalLaps(uint32_t);

	// BrnScoringSystem.h:512
	uint32_t GetTotalLaps() const;

	// BrnScoringSystem.h:517
	void SetTotalCheckpoints(int32_t);

	// BrnScoringSystem.h:521
	int32_t GetTotalCheckpoints() const;

	// BrnScoringSystem.h:527
	void SetOnlineLandmarks(LandmarkIndex *, int32_t);

	// BrnScoringSystem.h:531
	int32_t GetTotalOnlineLandmarks() const;

	// BrnScoringSystem.h:537
	void SetCheckpointDistances(uint32_t, float32_t);

	// BrnScoringSystem.h:542
	void SetPlayerDistanceToFinish(float32_t);

	// BrnScoringSystem.h:546
	float32_t GetPlayerDistanceToFinish();

	// BrnScoringSystem.h:551
	float32_t GetCheckpointDistanceToFinish(uint32_t) const;

	// BrnScoringSystem.h:555
	bool IsCheckPointDistanceToFinishReady() const;

	// BrnScoringSystem.h:560
	void ProcessFinishDistances(int32_t);

	// BrnScoringSystem.h:563
	const float32_t GetTotalRaceDistance() const;

	// BrnScoringSystem.h:569
	void OnPlayerDoesATakedown(Time, OutputBuffer::GameActionQueue *);

	// BrnScoringSystem.h:574
	void OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType);

	// BrnScoringSystem.h:582
	void RegisterFinishForCar(bool, EActiveRaceCarIndex, const Time &);

	// BrnScoringSystem.h:589
	void RegisterCheckpointForCar(BrnGameState::GameStateModuleIO::EGameModeType, int32_t, LandmarkIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:594
	void RaceCarHasReachedCheckPointWithinEvent(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:599
	bool IsOnlineLandmarkVisited(EActiveRaceCarIndex, LandmarkIndex);

	// BrnScoringSystem.h:603
	int32_t GetOnlineLandmarksVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:610
	float32_t GetRaceCarLapTimeSeconds(EActiveRaceCarIndex, uint32_t) const;

	// BrnScoringSystem.h:615
	uint32_t GetRaceCarNumCompletedLaps(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:620
	Time GetRaceCarTimeInCurrentTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:625
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:630
	uint32_t GetCarRacePosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:635
	int32_t GetCarRaceFinishPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:640
	float_t GetRaceCarDistanceToFinish(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:645
	float_t GetRaceCarDistanceToPlayer(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:650
	float32_t GetPositionedCarDistanceToFinish(int32_t) const;

	// BrnScoringSystem.h:655
	float_t GetRaceCarDistanceToFinishAtRoundEnd(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:659
	bool HasAnyCarFinished() const;

	// BrnScoringSystem.h:664
	EActiveRaceCarIndex GetPositionedCarIndex(int32_t) const;

	// BrnScoringSystem.h:669
	EActiveRaceCarIndex GetRaceCarEliminatorIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:674
	int32_t GetNumberOfEliminations(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:679
	bool GetOvertakenRival(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:683
	EActiveRaceCarIndex GetLead() const;

	// BrnScoringSystem.h:687
	EActiveRaceCarIndex GetLast() const;

	// BrnScoringSystem.h:691
	bool GetNewLeader() const;

	// BrnScoringSystem.h:695
	bool GetNewLast() const;

	// BrnScoringSystem.h:700
	Time GetFinishTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:707
	const Time GetRaceCarTotalTime(EActiveRaceCarIndex, const Time &) const;

	// BrnScoringSystem.h:711
	EActiveRaceCarIndex GetCurrentLastPlaceActiveRaceCar();

	// BrnScoringSystem.h:716
	void SetNumberOfCarsForEliminator(uint32_t);

	// BrnScoringSystem.h:721
	const Time GetRaceCarFastestLapTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:726
	const int32_t GetNumberOfTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:731
	const int32_t GetNumberOfCrashes(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:736
	const int32_t GetNumberOfTakedownsAgainst(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:739
	const uint32_t GetNumberOfActiveCars() const;

	// BrnScoringSystem.h:743
	const int32_t GetNumberOfFinishedCars() const;

	// BrnScoringSystem.h:749
	void GetOnlinePlayersChallengeHighScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:757
	void GetHighestLobbyRoadRuleScore(Road::ChallengeIndex, BrnStreetData::ScoreType, int32_t *, EActiveRaceCarIndex *);

	// BrnScoringSystem.h:762
	void UpdateNumberOfCarsInMode(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:770
	// Declaration
	void UpdateRacePositions(const ActiveRaceCarOutputInterface *, const GlobalRaceCarOutputInterface *, const AICarOutputInterface *, BrnGameState::ModeManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:46
		typedef RCEntityGlobalRaceCarOutputInterface GlobalRaceCarOutputInterface;

		// BrnScoringSystem.h:48
		typedef AICarOutputInterface AICarOutputInterface;

	}

	// BrnScoringSystem.h:775
	void UpdateTeamStats(float_t);

	// BrnScoringSystem.h:780
	void UpdateTakedowns(const InputBuffer::TakedownEventQueue *);

	// BrnScoringSystem.h:786
	void UpdatePaybackTakedowns(const GameStateToNetworkInterface::DirtyTrickQueue *, const GameStateToNetworkInterface::DirtyTrickQueue *);

	// BrnScoringSystem.h:791
	void UpdateCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnScoringSystem.h:797
	void UpdateNetworkPlayerResults(const PlayerResultsInterface *, bool);

	// BrnScoringSystem.h:804
	void UpdateCumulativeResults(uint32_t, int32_t, bool);

	// BrnScoringSystem.h:810
	int CompareRaceCarDistances(const void *, const void *);

	// BrnScoringSystem.h:815
	void UpdateDistanceToPlayer(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:821
	void DetectPlayerDrivingWrongWay(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:827
	void DetectPlayerStationary(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:834
	void UpdateCrashModeScore(const ActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnScoringSystem.h:840
	void UpdateStuntAttackModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:846
	void UpdateRoadRageModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:851
	void SetRoadRageDetails(uint32_t, uint32_t);

	// BrnScoringSystem.h:855
	void CheckRoadRageMedalAwarded(uint32_t);

	// BrnScoringSystem.h:864
	void UpdateGeneralStats(const ActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnScoringSystem.h:868
	GuiEventNetworkLaunching::NetworkPlayerID GetPointsLeader() const;

	// BrnScoringSystem.h:872
	EActiveRaceCarIndex GetPointsLoser() const;

	// BrnScoringSystem.h:877
	int32_t GetRaceCarStandingsPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:882
	int32_t GetCumulativePoints(EActiveRaceCarIndex);

	// BrnScoringSystem.h:886
	BrnGameState::CarData::EPlayerStatus GetPlayerStatus(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:891
	void SetPlayerStatus(EActiveRaceCarIndex, BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:897
	void SetPlayerEliminated(EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:902
	void SetPlayerDisconnected(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:907
	bool GetPlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:911
	bool GetPlayerDisconnected(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnScoringSystem.h:915
	void ClearDisconnectedPlayers();

	// BrnScoringSystem.h:919
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:924
	void SetPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:929
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:935
	void SetRoundStartPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:939
	CrashModeScoring * GetCrashScorer();

	// BrnScoringSystem.h:943
	StuntModeScoring * GetStuntScorer();

	// BrnScoringSystem.h:947
	RoadRageModeScoring * GetRoadRageScoring();

	// BrnScoringSystem.h:950
	const RoadRageModeScoring * GetRoadRageScoring() const;

	// BrnScoringSystem.h:954
	bool IsBlueTeamEliminated() const;

	// BrnScoringSystem.h:960
	bool PrepareRoadRageScoring(int32_t, uint16_t);

	// BrnScoringSystem.h:965
	bool AreAllRemotePlayersDisconnected(EActiveRaceCarIndex);

	// BrnScoringSystem.h:969
	int32_t GetNumberOfNonDisconnectedPlayers();

	// BrnScoringSystem.h:974
	void SetCheckPointDistancesToFinishReady(bool);

	// BrnScoringSystem.h:979
	void StoreCarIds(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:984
	float32_t GetTotalDistanceDriven(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:989
	bool IsNetworkCarsDistanceDrivenValid(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:994
	Time GetTimeSpentInFirstPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:999
	Time GetTimeSpentInLastPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1003
	bool HaveCarsBeenSortedIntoRacePositions() const;

	// BrnScoringSystem.h:1008
	Time GetTimeSpentBoosting(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1013
	float32_t GetLongestDrift(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1018
	int32_t GetMarkedManTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1025
	void SaveNetworkRoundData(GuiEventNetworkLaunching::NetworkPlayerID, Time, EActiveRaceCarIndex);

	// BrnScoringSystem.h:1029
	void ClearNetworkRoundData();

	// BrnScoringSystem.h:1033
	NetworkRoundData * GetNetworkRoundData();

	// BrnScoringSystem.h:1037
	float32_t GetPlayerWrongWayTime() const;

	// BrnScoringSystem.h:1041
	float32_t GetPlayerStationaryTime() const;

	// BrnScoringSystem.h:1045
	float32_t GetPlayerNoInputTime() const;

	// BrnScoringSystem.h:1049
	void ResetPlayerNoInputTime();

	// BrnScoringSystem.h:1053
	void ResetPlayerStationaryTime();

	// BrnScoringSystem.h:1057
	const CarData * GetCarData(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1061
	CarData * GetCarData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1065
	CarData * GetCarData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:1069
	const CarData * GetCarData(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnScoringSystem.h:1073
	CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnScoringSystem.h:1077
	const CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1081
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1085
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnScoringSystem.h:1089
	bool IsPlayerInScoringSystem(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1093
	bool IsNetworkPlayerInScoringSystem(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnScoringSystem.h:1098
	int32_t GetNumberOfNetworkPlayers() const;

	// BrnScoringSystem.h:1101
	int32_t GetNumberOfNetworkPlayersStillConnected() const;

	// BrnScoringSystem.h:1104
	bool AreAllRaceCarsSetup() const;

	// BrnScoringSystem.h:1108
	void LocalPlayerQuit(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:1111
	void SetNextMedalTargetTime();

	// BrnScoringSystem.h:1114
	void SetNextEliminatorTargetTime();

	// BrnScoringSystem.h:1117
	void SetNextTargetTime();

	// BrnScoringSystem.h:1120
	float32_t GetCurrentLandmarkDistance();

	// BrnScoringSystem.h:1123
	const Time GetCurrentModeTimeTarget() const;

	// BrnScoringSystem.h:1126
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalTarget();

	// BrnScoringSystem.h:1129
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalAchieved();

	// BrnScoringSystem.h:1135
	EActiveRaceCarIndex GetNextTeamMember(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam) const;

	// BrnScoringSystem.h:1141
	// Declaration
	void AddPlayerBurnoutSkillz(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:3611
		using namespace CgsDev::Message;

	}

	// BrnScoringSystem.h:1146
	BurnoutSkillzData * GetBurnoutSkillzData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1151
	BurnoutSkillzData * GetBurnoutSkillzData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:1155
	void ClearAllBurnoutSkillzData();

	// BrnScoringSystem.h:1160
	void ClearPlayersBurnoutSkillzData(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnScoringSystem.h:1166
	void SetBurnoutSkillzData(GuiEventNetworkLaunching::NetworkPlayerID, const BurnoutSkillzData *);

	// BrnScoringSystem.h:1171
	bool DidPlayerFinishOnlineEventFirst(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1176
	int32_t GetOnlineFinishPosition(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1180
	bool HasBeatenRoadRageTarget();

	// BrnScoringSystem.h:1183
	bool HasTargetScoreBeenExceeded() const;

	// BrnScoringSystem.h:1188
	void ResetOnlineCheckpointsVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1192
	void ReducePlayerDurability();

private:
	// BrnScoringSystem.h:1197
	void ClearData(bool);

}

// BrnScoringSystem.h:306
struct BrnGameState::ScoringSystem {
private:
	// BrnScoringSystem.h:1199
	Time mStartTime;

	// BrnScoringSystem.h:1200
	Time mEndTime;

	// BrnScoringSystem.h:1201
	Time mTotalTime;

	// BrnScoringSystem.h:1202
	Time mTimeRemaining;

	// BrnScoringSystem.h:1206
	CrashModeScoring mCrashModeScoring;

	// BrnScoringSystem.h:1209
	StuntModeScoring mStuntModeScoring;

	// BrnScoringSystem.h:1212
	RoadRageModeScoring mRoadRageModeScoring;

	// BrnScoringSystem.h:1213
	int32_t miMaximumPlayerCrashedNumber;

	// BrnScoringSystem.h:1214
	int32_t miCurrentPlayerCrashedNumber;

	// BrnScoringSystem.h:1215
	bool mbPlayerTotalled;

	// BrnScoringSystem.h:1216
	uint32_t[4] mauiMedalScores;

	// BrnScoringSystem.h:1219
	BrnGameState::OnlineRaceModeScoring mOnlineRaceModeScoring;

	// BrnScoringSystem.h:1220
	BrnGameState::OnlineRoadRageModeScoring mOnlineRoadRageScoring;

	// BrnScoringSystem.h:1221
	BrnGameState::OnlineBurningHomeRunModeScoring mOnlineBurningHomeRunScoring;

	// BrnScoringSystem.h:1224
	BrnGameState::BaseOnlineModeScoring * mpCurrentOnlineModeScoring;

	// BrnScoringSystem.h:1227
	NetworkRoundData mNetworkRoundData;

	// BrnScoringSystem.h:1230
	uint32_t muTotalLaps;

	// BrnScoringSystem.h:1231
	uint32_t muNumCarsFinishedRace;

	// BrnScoringSystem.h:1232
	int32_t miTotalCheckpoints;

	// BrnScoringSystem.h:1233
	int32_t miTotalOnlineLandmarks;

	// BrnScoringSystem.h:1234
	uint32_t muCarsInCurrentMode;

	// BrnScoringSystem.h:1235
	uint32_t muActualNumberOfCarsInCurrentMode;

	// BrnScoringSystem.h:1236
	EActiveRaceCarIndex meLeadRaceCarIndex;

	// BrnScoringSystem.h:1237
	EActiveRaceCarIndex meLastRaceCarIndex;

	// BrnScoringSystem.h:1238
	bool mbNewLeader;

	// BrnScoringSystem.h:1239
	bool mbNewLastPlace;

	// BrnScoringSystem.h:1240
	bool mbACarHasFinishedTheRace;

	// BrnScoringSystem.h:1243
	CarData[8] maCarData;

	// BrnScoringSystem.h:1244
	RaceCarPositioningData[8] maRaceCarPositioningData;

	// BrnScoringSystem.h:1245
	RoadRulesRecvData::NetworkPlayerID[8] maBurnoutSkillzPlayerIDs;

	// BrnScoringSystem.h:1246
	BurnoutSkillzData[8] maBurnoutSkillzData;

	// BrnScoringSystem.h:1248
	float32_t[16] mafCheckpointSeparations;

	// BrnScoringSystem.h:1249
	float32_t[16] mafCheckpointDistancesToFinish;

	// BrnScoringSystem.h:1250
	bool mbCheckPointDistancesToFinishReady;

	// BrnScoringSystem.h:1252
	float32_t mfTotalRaceDistance;

	// BrnScoringSystem.h:1255
	float32_t mfPlayerDistanceToFinishLastFrame;

	// BrnScoringSystem.h:1256
	float32_t mfPlayerTimeHeadingTheWrongWay;

	// BrnScoringSystem.h:1257
	float32_t mfPlayerTimeStationary;

	// BrnScoringSystem.h:1258
	float32_t mfPlayerTimeWithoutInput;

	// BrnScoringSystem.h:1261
	bool mbMedalMode;

	// BrnScoringSystem.h:1262
	float32_t[4] mafMedalTimes;

	// BrnScoringSystem.h:1263
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalTarget;

	// BrnScoringSystem.h:1264
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalAchieved;

	// BrnScoringSystem.h:1267
	bool mbEliminationMode;

	// BrnScoringSystem.h:1268
	bool mbPlayerElimated;

	// BrnScoringSystem.h:1269
	EActiveRaceCarIndex mLastCarRaceCarIndex;

	// BrnScoringSystem.h:1270
	float32_t mfEliminatorTimeStep;

	// BrnScoringSystem.h:1271
	bool mbEliminationRequired;

	// BrnScoringSystem.h:1272
	uint32_t muCarsThatHaventBeenEliminated;

	// BrnScoringSystem.h:1275
	Array<EActiveRaceCarIndex,7u> maEliminatedActiveRaceCarIndexs;

	// BrnScoringSystem.h:1279
	int32_t miUpdateRacePositionsPM;

public:
	// BrnScoringSystem.h:314
	void Construct(StuntModeScoring::AchievementManager *);

	// BrnScoringSystem.h:319
	bool Prepare(HeapMalloc *);

	// BrnScoringSystem.h:323
	bool Release();

	// BrnScoringSystem.h:330
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType, const GameModeParams *, bool);

	// BrnScoringSystem.h:333
	void OnModeEnd(bool);

	// BrnScoringSystem.h:337
	void ClearCumulativeData();

	// BrnScoringSystem.h:341
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer();

	// BrnScoringSystem.h:347
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex AddPlayer(RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:353
	void SetPlayerRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:358
	void RemovePlayer(EActiveRaceCarIndex);

	// BrnScoringSystem.h:362
	void SetRivalEliminated(EActiveRaceCarIndex);

	// BrnScoringSystem.h:367
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:374
	void WriteDataToOutput(ScoringOutputInterface *, OnlineScoringOutputInterface *, bool);

	// BrnScoringSystem.h:381
	void StartModeTimer(const Time &);

	// BrnScoringSystem.h:385
	bool IsPlayerTotalled() const;

	// BrnScoringSystem.h:391
	void OnRoadRagePlayerCrashed(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::ERoadRageCrashType);

	// BrnScoringSystem.h:394
	void ResetRoadRageCrashesForPlayer();

	// BrnScoringSystem.h:397
	int32_t GetRoadRagePlayerCrashes();

	// BrnScoringSystem.h:400
	int32_t GetPlayerCrashesRemaining();

	// BrnScoringSystem.h:407
	void StopModeTimer(const Time &, EActiveRaceCarIndex, bool);

	// BrnScoringSystem.h:412
	void StartOnlineGameModeScoring(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:417
	void ClearModeTimer();

	// BrnScoringSystem.h:422
	void ClearHighestPositions();

	// BrnScoringSystem.h:426
	bool IsTimerActive() const;

	// BrnScoringSystem.h:432
	void SetTimeLimitSeconds(float32_t);

	// BrnScoringSystem.h:439
	void SetMedalModeTimer(float32_t, float32_t, float32_t);

	// BrnScoringSystem.h:445
	void SetTimeLimitPerKm(float32_t);

	// BrnScoringSystem.h:449
	const Time GetTimeLimit() const;

	// BrnScoringSystem.h:453
	bool IsTimeLimitActive() const;

	// BrnScoringSystem.h:458
	void IncreaseTimeLimit(float32_t);

	// BrnScoringSystem.h:462
	void ClearTimeLimit();

	// BrnScoringSystem.h:468
	const Time GetElapsedTime(const Time &) const;

	// BrnScoringSystem.h:474
	const Time GetModeTimeRemaining(const Time &);

	// BrnScoringSystem.h:480
	bool HasModeTimeExpired(const Time &);

	// BrnScoringSystem.h:485
	void UpdateTimerForEliminator(const Time &);

	// BrnScoringSystem.h:490
	void SetCheckPointsForCarsWithinRace(int32_t);

	// BrnScoringSystem.h:493
	bool AcheivedGold();

	// BrnScoringSystem.h:497
	bool HasCrashModeEnded() const;

	// BrnScoringSystem.h:501
	bool HasStuntAttackModeEnded(Time);

	// BrnScoringSystem.h:508
	void SetTotalLaps(uint32_t);

	// BrnScoringSystem.h:512
	uint32_t GetTotalLaps() const;

	// BrnScoringSystem.h:517
	void SetTotalCheckpoints(int32_t);

	// BrnScoringSystem.h:521
	int32_t GetTotalCheckpoints() const;

	// BrnScoringSystem.h:527
	void SetOnlineLandmarks(LandmarkIndex *, int32_t);

	// BrnScoringSystem.h:531
	int32_t GetTotalOnlineLandmarks() const;

	// BrnScoringSystem.h:537
	void SetCheckpointDistances(uint32_t, float32_t);

	// BrnScoringSystem.h:542
	void SetPlayerDistanceToFinish(float32_t);

	// BrnScoringSystem.h:546
	float32_t GetPlayerDistanceToFinish();

	// BrnScoringSystem.h:551
	float32_t GetCheckpointDistanceToFinish(uint32_t) const;

	// BrnScoringSystem.h:555
	bool IsCheckPointDistanceToFinishReady() const;

	// BrnScoringSystem.h:560
	void ProcessFinishDistances(int32_t);

	// BrnScoringSystem.h:563
	const float32_t GetTotalRaceDistance() const;

	// BrnScoringSystem.h:569
	void OnPlayerDoesATakedown(Time, OutputBuffer::GameActionQueue *);

	// BrnScoringSystem.h:574
	void OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType);

	// BrnScoringSystem.h:582
	void RegisterFinishForCar(bool, EActiveRaceCarIndex, const Time &);

	// BrnScoringSystem.h:589
	void RegisterCheckpointForCar(BrnGameState::GameStateModuleIO::EGameModeType, int32_t, LandmarkIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:594
	void RaceCarHasReachedCheckPointWithinEvent(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnScoringSystem.h:599
	bool IsOnlineLandmarkVisited(EActiveRaceCarIndex, LandmarkIndex);

	// BrnScoringSystem.h:603
	int32_t GetOnlineLandmarksVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:610
	float32_t GetRaceCarLapTimeSeconds(EActiveRaceCarIndex, uint32_t) const;

	// BrnScoringSystem.h:615
	uint32_t GetRaceCarNumCompletedLaps(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:620
	Time GetRaceCarTimeInCurrentTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:625
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:630
	uint32_t GetCarRacePosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:635
	int32_t GetCarRaceFinishPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:640
	float_t GetRaceCarDistanceToFinish(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:645
	float_t GetRaceCarDistanceToPlayer(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:650
	float32_t GetPositionedCarDistanceToFinish(int32_t) const;

	// BrnScoringSystem.h:655
	float_t GetRaceCarDistanceToFinishAtRoundEnd(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:659
	bool HasAnyCarFinished() const;

	// BrnScoringSystem.h:664
	EActiveRaceCarIndex GetPositionedCarIndex(int32_t) const;

	// BrnScoringSystem.h:669
	EActiveRaceCarIndex GetRaceCarEliminatorIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:674
	int32_t GetNumberOfEliminations(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:679
	bool GetOvertakenRival(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:683
	EActiveRaceCarIndex GetLead() const;

	// BrnScoringSystem.h:687
	EActiveRaceCarIndex GetLast() const;

	// BrnScoringSystem.h:691
	bool GetNewLeader() const;

	// BrnScoringSystem.h:695
	bool GetNewLast() const;

	// BrnScoringSystem.h:700
	Time GetFinishTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:707
	const Time GetRaceCarTotalTime(EActiveRaceCarIndex, const Time &) const;

	// BrnScoringSystem.h:711
	EActiveRaceCarIndex GetCurrentLastPlaceActiveRaceCar();

	// BrnScoringSystem.h:716
	void SetNumberOfCarsForEliminator(uint32_t);

	// BrnScoringSystem.h:721
	const Time GetRaceCarFastestLapTime(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:726
	const int32_t GetNumberOfTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:731
	const int32_t GetNumberOfCrashes(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:736
	const int32_t GetNumberOfTakedownsAgainst(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:739
	const uint32_t GetNumberOfActiveCars() const;

	// BrnScoringSystem.h:743
	const int32_t GetNumberOfFinishedCars() const;

	// BrnScoringSystem.h:749
	void GetOnlinePlayersChallengeHighScores(Road::ChallengeIndex, ChallengeHighScoreEntry *);

	// BrnScoringSystem.h:757
	void GetHighestLobbyRoadRuleScore(Road::ChallengeIndex, BrnStreetData::ScoreType, int32_t *, EActiveRaceCarIndex *);

	// BrnScoringSystem.h:762
	void UpdateNumberOfCarsInMode(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:770
	// Declaration
	void UpdateRacePositions(const ActiveRaceCarOutputInterface *, const GlobalRaceCarOutputInterface *, const AICarOutputInterface *, BrnGameState::ModeManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:46
		typedef RCEntityGlobalRaceCarOutputInterface GlobalRaceCarOutputInterface;

		// BrnScoringSystem.h:48
		typedef AICarOutputInterface AICarOutputInterface;

	}

	// BrnScoringSystem.h:775
	void UpdateTeamStats(float_t);

	// BrnScoringSystem.h:780
	void UpdateTakedowns(const LiveRevengeManager::TakedownEventQueue *);

	// BrnScoringSystem.h:786
	void UpdatePaybackTakedowns(const GameStateToNetworkInterface::DirtyTrickQueue *, const GameStateToNetworkInterface::DirtyTrickQueue *);

	// BrnScoringSystem.h:791
	void UpdateCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnScoringSystem.h:797
	void UpdateNetworkPlayerResults(const PlayerResultsInterface *, bool);

	// BrnScoringSystem.h:804
	void UpdateCumulativeResults(uint32_t, int32_t, bool);

	// BrnScoringSystem.h:810
	int CompareRaceCarDistances(const void *, const void *);

	// BrnScoringSystem.h:815
	void UpdateDistanceToPlayer(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:821
	void DetectPlayerDrivingWrongWay(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:827
	void DetectPlayerStationary(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:834
	void UpdateCrashModeScore(const ActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnScoringSystem.h:840
	void UpdateStuntAttackModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:846
	void UpdateRoadRageModeScore(const ActiveRaceCarOutputInterface *, float32_t);

	// BrnScoringSystem.h:851
	void SetRoadRageDetails(uint32_t, uint32_t);

	// BrnScoringSystem.h:855
	void CheckRoadRageMedalAwarded(uint32_t);

	// BrnScoringSystem.h:864
	void UpdateGeneralStats(const ActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnScoringSystem.h:868
	RoadRulesRecvData::NetworkPlayerID GetPointsLeader() const;

	// BrnScoringSystem.h:872
	EActiveRaceCarIndex GetPointsLoser() const;

	// BrnScoringSystem.h:877
	int32_t GetRaceCarStandingsPosition(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:882
	int32_t GetCumulativePoints(EActiveRaceCarIndex);

	// BrnScoringSystem.h:886
	BrnGameState::CarData::EPlayerStatus GetPlayerStatus(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:891
	void SetPlayerStatus(EActiveRaceCarIndex, BrnGameState::CarData::EPlayerStatus);

	// BrnScoringSystem.h:897
	void SetPlayerEliminated(EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnScoringSystem.h:902
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:907
	bool GetPlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:911
	bool GetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:915
	void ClearDisconnectedPlayers();

	// BrnScoringSystem.h:919
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:924
	void SetPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:929
	BrnGameState::GameStateModuleIO::EPlayerTeam GetRoundStartPlayerTeam(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:935
	void SetRoundStartPlayerTeam(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnScoringSystem.h:939
	CrashModeScoring * GetCrashScorer();

	// BrnScoringSystem.h:943
	StuntModeScoring * GetStuntScorer();

	// BrnScoringSystem.h:947
	RoadRageModeScoring * GetRoadRageScoring();

	// BrnScoringSystem.h:950
	const RoadRageModeScoring * GetRoadRageScoring() const;

	// BrnScoringSystem.h:954
	bool IsBlueTeamEliminated() const;

	// BrnScoringSystem.h:960
	bool PrepareRoadRageScoring(int32_t, uint16_t);

	// BrnScoringSystem.h:965
	bool AreAllRemotePlayersDisconnected(EActiveRaceCarIndex);

	// BrnScoringSystem.h:969
	int32_t GetNumberOfNonDisconnectedPlayers();

	// BrnScoringSystem.h:974
	void SetCheckPointDistancesToFinishReady(bool);

	// BrnScoringSystem.h:979
	void StoreCarIds(const ActiveRaceCarOutputInterface *);

	// BrnScoringSystem.h:984
	float32_t GetTotalDistanceDriven(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:989
	bool IsNetworkCarsDistanceDrivenValid(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:994
	Time GetTimeSpentInFirstPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:999
	Time GetTimeSpentInLastPlace(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1003
	bool HaveCarsBeenSortedIntoRacePositions() const;

	// BrnScoringSystem.h:1008
	Time GetTimeSpentBoosting(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1013
	float32_t GetLongestDrift(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1018
	int32_t GetMarkedManTakedowns(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1025
	void SaveNetworkRoundData(RoadRulesRecvData::NetworkPlayerID, Time, EActiveRaceCarIndex);

	// BrnScoringSystem.h:1029
	void ClearNetworkRoundData();

	// BrnScoringSystem.h:1033
	NetworkRoundData * GetNetworkRoundData();

	// BrnScoringSystem.h:1037
	float32_t GetPlayerWrongWayTime() const;

	// BrnScoringSystem.h:1041
	float32_t GetPlayerStationaryTime() const;

	// BrnScoringSystem.h:1045
	float32_t GetPlayerNoInputTime() const;

	// BrnScoringSystem.h:1049
	void ResetPlayerNoInputTime();

	// BrnScoringSystem.h:1053
	void ResetPlayerStationaryTime();

	// BrnScoringSystem.h:1057
	const CarData * GetCarData(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1061
	CarData * GetCarData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1065
	CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1069
	const CarData * GetCarData(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1073
	CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnScoringSystem.h:1077
	const CarData * GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1081
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(EActiveRaceCarIndex) const;

	// BrnScoringSystem.h:1085
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1089
	bool IsPlayerInScoringSystem(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnScoringSystem.h:1093
	bool IsNetworkPlayerInScoringSystem(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnScoringSystem.h:1098
	int32_t GetNumberOfNetworkPlayers() const;

	// BrnScoringSystem.h:1101
	int32_t GetNumberOfNetworkPlayersStillConnected() const;

	// BrnScoringSystem.h:1104
	bool AreAllRaceCarsSetup() const;

	// BrnScoringSystem.h:1108
	void LocalPlayerQuit(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1111
	void SetNextMedalTargetTime();

	// BrnScoringSystem.h:1114
	void SetNextEliminatorTargetTime();

	// BrnScoringSystem.h:1117
	void SetNextTargetTime();

	// BrnScoringSystem.h:1120
	float32_t GetCurrentLandmarkDistance();

	// BrnScoringSystem.h:1123
	const Time GetCurrentModeTimeTarget() const;

	// BrnScoringSystem.h:1126
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalTarget();

	// BrnScoringSystem.h:1129
	const BrnGameState::ECurrentMedalTargetTime GetCurrentMedalAchieved();

	// BrnScoringSystem.h:1135
	EActiveRaceCarIndex GetNextTeamMember(EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam) const;

	// BrnScoringSystem.h:1141
	// Declaration
	void AddPlayerBurnoutSkillz(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScoringSystem.h:3611
		using namespace CgsDev::Message;

	}

	// BrnScoringSystem.h:1146
	BurnoutSkillzData * GetBurnoutSkillzData(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1151
	BurnoutSkillzData * GetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1155
	void ClearAllBurnoutSkillzData();

	// BrnScoringSystem.h:1160
	void ClearPlayersBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID);

	// BrnScoringSystem.h:1166
	void SetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID, const BurnoutSkillzData *);

	// BrnScoringSystem.h:1171
	bool DidPlayerFinishOnlineEventFirst(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1176
	int32_t GetOnlineFinishPosition(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1180
	bool HasBeatenRoadRageTarget();

	// BrnScoringSystem.h:1183
	bool HasTargetScoreBeenExceeded() const;

	// BrnScoringSystem.h:1188
	void ResetOnlineCheckpointsVisited(EActiveRaceCarIndex);

	// BrnScoringSystem.h:1192
	void ReducePlayerDurability();

private:
	// BrnScoringSystem.h:1197
	void ClearData(bool);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnScoringSystem.h:52
	const int32_t KI_MAX_ROAD_RAGE_TAKEDOWN_COUNT = 3;

	// BrnScoringSystem.h:53
	const int32_t KI_MAX_MARKED_MAN_TAKEDOWN_COUNT = 3;

}

