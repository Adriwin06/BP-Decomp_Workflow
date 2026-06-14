// BrnModeManager.h:103
struct BrnGameState::ModeManager {
private:
	// BrnModeManager.h:907
	BrnGameState::GameMode *[17] mapGameModes;

	// BrnModeManager.h:910
	BrnGameState::RaceMode mRace;

	// BrnModeManager.h:911
	BrnGameState::FaceOffMode mFaceOff;

	// BrnModeManager.h:912
	BrnGameState::CrashMode mCrashMode;

	// BrnModeManager.h:913
	BrnGameState::RoadRageMode mRoadRage;

	// BrnModeManager.h:914
	BrnGameState::PursuitMode mPursuit;

	// BrnModeManager.h:915
	BrnGameState::BurningRouteMode mBurningRoute;

	// BrnModeManager.h:916
	BrnGameState::StuntAttackMode mStuntAttackMode;

	// BrnModeManager.h:917
	BrnGameState::SurvivorMode mSurvivor;

	// BrnModeManager.h:920
	BrnGameState::OnlineRaceMode mOnlineRace;

	// BrnModeManager.h:921
	BrnGameState::OnlineRoadRageMode mOnlineRoadRage;

	// BrnModeManager.h:922
	BrnGameState::OnlineFugitiveMode mOnlineFugitive;

	// BrnModeManager.h:923
	BrnGameState::OnlineBurningHomeRunMode mOnlineBurningHomeRun;

	// BrnModeManager.h:924
	BrnGameState::OnlineFreeBurnMode mOnlineFreeBurn;

	// BrnModeManager.h:925
	BrnGameState::OnlineFreeBurnLobbyMode mOnlineFreeBurnLobby;

	// BrnModeManager.h:926
	BrnGameState::OnlineShowtimeMode mOnlineShowtime;

	// BrnModeManager.h:929
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnModeManager.h:930
	BrnGameState::GameMode * mpCurrentGameMode;

	// BrnModeManager.h:932
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameModeType;

	// BrnModeManager.h:933
	BrnGameState::GameStateModuleIO::EGameModeState mePreviousGameModeState;

	// BrnModeManager.h:936
	BrnGameState::GameStateModuleIO::EGameModeType meLastAttemptedGameModeType;

	// BrnModeManager.h:937
	int32_t miNumUnsucessfulGameModeAttempts;

	// BrnModeManager.h:939
	ScoringSystem mScoringSystem;

	// BrnModeManager.h:940
	HUDMessageLogic mHUDMessageLogic;

	// BrnModeManager.h:943
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnModeManager.h:944
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnModeManager.h:945
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnModeManager.h:946
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnModeManager.h:948
	InputBuffer::GameActionQueue * mpGameActionQueue;

	// BrnModeManager.h:950
	Random mRandom;

	// BrnModeManager.h:951
	TimerStatusInterface mTimerStatusInterface;

	// BrnModeManager.h:954
	BrnGameState::ModeManagerDebugComponent mModeManagerDebugComponent;

	// BrnModeManager.h:956
	ChallengeManager mChallengeManager;

	// BrnModeManager.h:959
	LandmarkIndex[16] maLandmarkIndices;

	// BrnModeManager.h:960
	CgsID[16] maLandmarkCgsIDs;

	// BrnModeManager.h:961
	uint16_t[16] mauLandmarkSectionIndices;

	// BrnModeManager.h:963
	uint8_t[35] mauNextLandmark;

	// BrnModeManager.h:964
	uint8_t[35] mauLastLandmarkHit;

	// BrnModeManager.h:966
	uint32_t muNumLandmarks;

	// BrnModeManager.h:967
	LandmarkIndex mPlayerCurrentLandmark;

	// BrnModeManager.h:969
	float32_t mfModeTimeLimit;

	// BrnModeManager.h:970
	float32_t mfPlayerTotalledTime;

	// BrnModeManager.h:972
	CgsID mRaceId;

	// BrnModeManager.h:973
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnModeManager.h:974
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnModeManager.h:976
	StartGameModeParams mStartGameModeParams;

	// BrnModeManager.h:977
	GameModeParams mCurrentGameModeParams;

	// BrnModeManager.h:979
	BitArray<35u> mRaceCarReachedCheckpoint;

	// BrnModeManager.h:980
	BitArray<35u> mRaceCarReachedFinish;

	// BrnModeManager.h:983
	CgsID mPlayersPreSpecialEventCarID;

	// BrnModeManager.h:986
	uint32_t muNextDistanceRequestCheckpoint;

	// BrnModeManager.h:987
	bool mbNeedToSendNextRequest;

	// BrnModeManager.h:988
	bool mbIsCalculatingCheckpointDistances;

	// BrnModeManager.h:991
	PrepareForModeAction mPFMActionCache;

	// BrnModeManager.h:992
	float32_t mfPFMSecondPhaseTimer;

	// BrnModeManager.h:993
	bool mbIsWaitingForSecondPFM;

	// BrnModeManager.h:996
	bool mbInModeStartRegion;

	// BrnModeManager.h:997
	bool mbLastInModeStartRegion;

	// BrnModeManager.h:1000
	bool mbFinishCurrentModeNextUpdate;

	// BrnModeManager.h:1002
	bool mbRivalShutDown;

	// BrnModeManager.h:1003
	bool mbHasAborted;

	// BrnModeManager.h:1004
	bool mbAbortedDuringIntro;

	// BrnModeManager.h:1005
	bool mbHasTimedOut;

	// BrnModeManager.h:1006
	bool mbHasCrashedOut;

	// BrnModeManager.h:1007
	bool mbHasBeenEliminated;

	// BrnModeManager.h:1008
	bool mbHasAbortedDueToDisconnect;

	// BrnModeManager.h:1009
	bool mbHasPlayerFinished;

	// BrnModeManager.h:1010
	bool mbModeStartFromRegionEnabled;

	// BrnModeManager.h:1011
	bool mbModeDataIsLoading;

	// BrnModeManager.h:1012
	bool mbReadyForModeIntro;

	// BrnModeManager.h:1013
	bool mbIsModePrepared;

	// BrnModeManager.h:1014
	bool mbDistanceToFinishLineTransmitted;

	// BrnModeManager.h:1015
	bool mbFinishedOnlineEvent;

	// BrnModeManager.h:1016
	bool mbFinishedOnlineLobbyMode;

	// BrnModeManager.h:1017
	bool mbPersuitModeStartNextFrame;

	// BrnModeManager.h:1018
	bool mbPlayerCrashedLastFrame;

	// BrnModeManager.h:1019
	bool mbEventJustFinished;

	// BrnModeManager.h:1020
	bool mbIsInTimeUpOutro;

	// BrnModeManager.h:1021
	int32_t miFramesUntilModeSwitchSend;

	// BrnModeManager.h:1022
	float32_t mfTimeUpStateTimer;

	// BrnModeManager.h:1023
	int32_t miDebugFinishPosition;

	// BrnModeManager.h:1025
	float32_t mfTimeInFreeBurn;

	// BrnModeManager.h:1026
	float32_t mfTimeInMode;

	// BrnModeManager.h:1027
	float32_t mfTimeInOnline;

	// BrnModeManager.h:1030
	extern int32_t miPreWorldUpdatePM;

	// BrnModeManager.h:1031
	extern int32_t miPostWorldUpdatePM;

public:
	// BrnModeManager.h:122
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::NetworkRoundManager *, StreetManager *, MugshotManager *, const BrnGameState::RoadRulesManager *, StuntModeScoring::AchievementManager *);

	// BrnModeManager.h:128
	bool Prepare(const ChallengeList *, HeapMalloc *);

	// BrnModeManager.h:132
	bool Release();

	// BrnModeManager.h:136
	void Destruct();

	// BrnModeManager.h:150
	void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const TimerStatusInterface &, EActiveRaceCarIndex, EGlobalRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:156
	void PostWorldUpdate(const PostWorldInputBuffer *, const InputBuffer::TakedownEventQueue *, float32_t);

	// BrnModeManager.h:160
	void ProcessPlayerCrashes(const PostWorldInputBuffer *);

	// BrnModeManager.h:164
	void CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *);

	// BrnModeManager.h:168
	void PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:174
	void StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, StartGameModeParams *);

	// BrnModeManager.h:179
	bool IsInGameMode() const;

	// BrnModeManager.h:183
	bool IsInOfflineRaceMode() const;

	// BrnModeManager.h:188
	bool IsInProgress() const;

	// BrnModeManager.h:192
	bool IsInPreEvent() const;

	// BrnModeManager.h:196
	bool IsInPostEvent() const;

	// BrnModeManager.h:200
	BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameModeType() const;

	// BrnModeManager.h:204
	bool CurrentGameModeHasRoute() const;

	// BrnModeManager.h:208
	bool CurrentGameModeUsesNavigation() const;

	// BrnModeManager.h:212
	bool CurrentGameModeAllowsTakedowns() const;

	// BrnModeManager.h:216
	bool CurrentGameModeAllowsRevengeTakedowns() const;

	// BrnModeManager.h:220
	bool CurrentGameModeDisablesAftertouchTakedowns() const;

	// BrnModeManager.h:224
	bool CurrentGameModeDisablesUpcomingRoads() const;

	// BrnModeManager.h:227
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentGameModeState() const;

	// BrnModeManager.h:231
	bool WasPreviousGameModeOnlineFreeBurnLobby() const;

	// BrnModeManager.h:239
	void SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, GameModeParams *, StartGameModeParams *);

	// BrnModeManager.h:245
	void FinishCurrentModeNextUpdate();

	// BrnModeManager.h:250
	void FinishCurrentModeNextUpdateWithFinishPosition(int32_t);

	// BrnModeManager.h:258
	void ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:262
	void ResultsAccept();

	// BrnModeManager.h:266
	void FinishedSplashScreen();

	// BrnModeManager.h:270
	void FinishedMapPan();

	// BrnModeManager.h:274
	void FinishOfflineModeIntro();

	// BrnModeManager.h:278
	void FinishedLoadingDataForMode();

	// BrnModeManager.h:284
	void UserCancelCurrentMode();

	// BrnModeManager.h:289
	void FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *);

	// BrnModeManager.h:293
	BrnGameState::ScoringSystem * GetScoringSystem();

	// BrnModeManager.h:296
	Random * GetRandom();

	// BrnModeManager.h:300
	const ScoringSystem * GetScoringSystem() const;

	// BrnModeManager.h:304
	BrnGameState::GameMode ** GetGameModePtrArray();

	// BrnModeManager.h:307
	const TriggerData * GetTriggerData() const;

	// BrnModeManager.h:310
	const BrnGameState::NetworkRoundManager * GetNetworkRoundManager() const;

	// BrnModeManager.h:313
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnModeManager.h:316
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnModeManager.h:319
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnModeManager.h:323
	TriggerQueryManager * DEBUG_GetTriggerQueryManager();

	// BrnModeManager.h:333
	void RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EGlobalRaceCarIndex, EActiveRaceCarIndex, LandmarkIndex, bool);

	// BrnModeManager.h:337
	LandmarkIndex GetPlayerCurrentLandmark() const;

	// BrnModeManager.h:342
	void SetAborted(bool);

	// BrnModeManager.h:346
	bool HasAborted() const;

	// BrnModeManager.h:351
	void SetAbortedDuringIntro(bool);

	// BrnModeManager.h:355
	void SetAbortedDueToDisconnect();

	// BrnModeManager.h:360
	void SetTimedOut(bool);

	// BrnModeManager.h:364
	bool HasTimedOut() const;

	// BrnModeManager.h:370
	void SetRivalShutDown(bool);

	// BrnModeManager.h:374
	bool HasRivalShutDown() const;

	// BrnModeManager.h:378
	bool HasCrashedOut() const;

	// BrnModeManager.h:383
	void SetCrashedOut(bool);

	// BrnModeManager.h:388
	void SetBeenEliminated(bool);

	// BrnModeManager.h:392
	bool HasBeenEliminated() const;

	// BrnModeManager.h:397
	void PlayerFinishedMode(const PlayerFinishedModeEvent *);

	// BrnModeManager.h:401
	bool IsPlayerInStartRegion() const;

	// BrnModeManager.h:404
	bool WasPlayerInStartRegionLastFrame() const;

	// BrnModeManager.h:408
	void SetPlayerIsInStartRegion(bool);

	// BrnModeManager.h:414
	void ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:421
	void StartModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:426
	void SetModeStartFromRegionEnabled(bool);

	// BrnModeManager.h:429
	bool IsWaitingForModeDataToLoad() const;

	// BrnModeManager.h:432
	bool IsOnlineGameMode() const;

	// BrnModeManager.h:435
	bool IsOnlineFreeBurnLobby() const;

	// BrnModeManager.h:438
	CgsID GetCurrentRaceId() const;

	// BrnModeManager.h:441
	bool IsShowtimeGameMode() const;

	// BrnModeManager.h:444
	int32_t GetNumberOfCarsInFlyby();

	// BrnModeManager.h:448
	float32_t GetCountdownTimeForMode() const;

	// BrnModeManager.h:454
	void HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::TakedownEventQueue *);

	// BrnModeManager.h:461
	void SetStartingGrid(GameModeParams *, int32_t, bool) const;

	// BrnModeManager.h:469
	void SetupOnlineStartingGrid(GameModeParams *, int32_t, Random *, bool) const;

	// BrnModeManager.h:476
	void SetOnlineLandmarks(GameModeParams *, const StartNetworkRoundEvent *, int32_t) const;

	// BrnModeManager.h:483
	void SetOnlineRaceCars(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:489
	void SetTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:496
	void SetOnlineRoadRageTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *, int32_t) const;

	// BrnModeManager.h:502
	int32_t ChooseStartGridIndex(const Landmark *, const Landmark *) const;

	// BrnModeManager.h:509
	int32_t GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:514
	int32_t GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *);

	// BrnModeManager.h:519
	int32_t GetPursuitThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:524
	int32_t GetRoadRageThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:529
	int32_t GetRoadRageTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:533
	const GameModeParams * GetCurrentGameModeParams() const;

	// BrnModeManager.h:537
	bool IsWaitingForActiveRaceCars() const;

	// BrnModeManager.h:542
	void SetupPathfinding(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:548
	void SetUpCheckPointsForGameMode(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnModeManager.h:552
	bool IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:557
	void SetupOpponentData(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:561
	void SetupCheckpointDistricts(GameModeParams *);

	// BrnModeManager.h:566
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId) const;

	// BrnModeManager.h:572
	void HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:579
	void HandleNewHostEvent(const OnlineNewHostEvent *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:584
	void HandleLoadingScreenLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:587
	uint32_t GetRoadRageTakedownTarget();

	// BrnModeManager.h:594
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:599
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:604
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:608
	void OnProfileLoaded();

	// BrnModeManager.h:615
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:624
	void HandleLocalStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnModeManager.h:631
	void HandleRemoteStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:637
	void HandleRemoteTriggeredFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:643
	void HandleOnlineEndFreeburnChallengeMessage(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus, bool);

	// BrnModeManager.h:649
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnModeManager.h:654
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnModeManager.h:659
	void HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *);

	// BrnModeManager.h:662
	CgsID GetCurrentFreeburnChallengeID();

	// BrnModeManager.h:669
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnModeManager.h:673
	bool ShouldForcePersuitNextFrame();

	// BrnModeManager.h:677
	HUDMessageLogic * GetHUDMessageLogic();

	// BrnModeManager.h:686
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID, Road::ChallengeIndex);

	// BrnModeManager.h:691
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnModeManager.h:697
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnModeManager.h:704
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:711
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:718
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:723
	void LocalPlayerDisconnected(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:726
	BrnGameState::GameMode * GetCurrentGameMode() const;

	// BrnModeManager.h:730
	void MarkedManLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:735
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnModeManager.h:738
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnModeManager.h:741
	bool IsChallengeActive() const;

	// BrnModeManager.h:746
	void RemoteRaceCarHitsCheckpoint(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnModeManager.h:749
	bool HasPlayerJustFinished() const;

	// BrnModeManager.h:753
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnModeManager.h:756
	void LeftOnlinePostEvent();

	// BrnModeManager.h:759
	const TrafficData * GetTrafficData();

	// BrnModeManager.h:762
	float32_t GetTimeInFreeBurn() const;

	// BrnModeManager.h:765
	float32_t GetTimeInMode() const;

	// BrnModeManager.h:769
	Vector3 GetCheckpointPosition(uint32_t) const;

private:
	// BrnModeManager.h:786
	void UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const InGamePlayerStatusInterface *, EActiveRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:791
	void UpdateCheckpointDistanceRequests(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:799
	void FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const Time &);

	// BrnModeManager.h:804
	void CheckCountdownDisplay(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:812
	void PrepareForMode(InputBuffer::GameActionQueue *, GameModeParams *, int32_t, StartGameModeParams *);

	// BrnModeManager.h:817
	void UpdateConsecutiveLosses(bool);

	// BrnModeManager.h:822
	void StopModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:828
	void StartPlayingMode(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:833
	void SendFinishedModeAction(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:840
	void SendModeStopMessages(InputBuffer::GameActionQueue *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:844
	int32_t GetPlayersFinishPosition();

	// BrnModeManager.h:847
	bool HasPlayerFinished() const;

	// BrnModeManager.h:852
	void PlayerTriggersLandmark(LandmarkIndex);

	// BrnModeManager.h:859
	void RaceCarFinishes(EGlobalRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnModeManager.h:864
	void ResetNextLandmarks(bool);

	// BrnModeManager.h:868
	void ClearLandmarkAndFinishLineData();

	// BrnModeManager.h:874
	void TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *, ScoringSystem &);

	// BrnModeManager.h:878
	void TransmitAndIncrementCheckPointsReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:882
	void TransmitAndIncrementFinishReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:888
	void HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *, const InputBuffer::TakedownEventQueue *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:891
	void HandleOnlineTeamCheckForModeFinished();

	// BrnModeManager.h:894
	void HandleOnlineBurningHomeRunCheckForModeFinished();

	// BrnModeManager.h:899
	void SendGameResultsToNetwork(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:902
	uint16_t GetLastLandmarkIndex();

}

// BrnModeManager.h:103
struct BrnGameState::ModeManager {
private:
	// BrnModeManager.h:907
	BrnGameState::GameMode *[17] mapGameModes;

	// BrnModeManager.h:910
	BrnGameState::RaceMode mRace;

	// BrnModeManager.h:911
	BrnGameState::FaceOffMode mFaceOff;

	// BrnModeManager.h:912
	BrnGameState::CrashMode mCrashMode;

	// BrnModeManager.h:913
	BrnGameState::RoadRageMode mRoadRage;

	// BrnModeManager.h:914
	BrnGameState::PursuitMode mPursuit;

	// BrnModeManager.h:915
	BrnGameState::BurningRouteMode mBurningRoute;

	// BrnModeManager.h:916
	BrnGameState::StuntAttackMode mStuntAttackMode;

	// BrnModeManager.h:917
	BrnGameState::SurvivorMode mSurvivor;

	// BrnModeManager.h:920
	BrnGameState::OnlineRaceMode mOnlineRace;

	// BrnModeManager.h:921
	BrnGameState::OnlineRoadRageMode mOnlineRoadRage;

	// BrnModeManager.h:922
	BrnGameState::OnlineFugitiveMode mOnlineFugitive;

	// BrnModeManager.h:923
	BrnGameState::OnlineBurningHomeRunMode mOnlineBurningHomeRun;

	// BrnModeManager.h:924
	BrnGameState::OnlineFreeBurnMode mOnlineFreeBurn;

	// BrnModeManager.h:925
	BrnGameState::OnlineFreeBurnLobbyMode mOnlineFreeBurnLobby;

	// BrnModeManager.h:926
	BrnGameState::OnlineShowtimeMode mOnlineShowtime;

	// BrnModeManager.h:929
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnModeManager.h:930
	BrnGameState::GameMode * mpCurrentGameMode;

	// BrnModeManager.h:932
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameModeType;

	// BrnModeManager.h:933
	BrnGameState::GameStateModuleIO::EGameModeState mePreviousGameModeState;

	// BrnModeManager.h:936
	BrnGameState::GameStateModuleIO::EGameModeType meLastAttemptedGameModeType;

	// BrnModeManager.h:937
	int32_t miNumUnsucessfulGameModeAttempts;

	// BrnModeManager.h:939
	ScoringSystem mScoringSystem;

	// BrnModeManager.h:940
	HUDMessageLogic mHUDMessageLogic;

	// BrnModeManager.h:943
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnModeManager.h:944
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnModeManager.h:945
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnModeManager.h:946
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnModeManager.h:948
	InputBuffer::GameActionQueue * mpGameActionQueue;

	// BrnModeManager.h:950
	Random mRandom;

	// BrnModeManager.h:951
	TimerStatusInterface mTimerStatusInterface;

	// BrnModeManager.h:954
	BrnGameState::ModeManagerDebugComponent mModeManagerDebugComponent;

	// BrnModeManager.h:956
	ChallengeManager mChallengeManager;

	// BrnModeManager.h:959
	LandmarkIndex[16] maLandmarkIndices;

	// BrnModeManager.h:960
	CgsID[16] maLandmarkCgsIDs;

	// BrnModeManager.h:961
	uint16_t[16] mauLandmarkSectionIndices;

	// BrnModeManager.h:963
	uint8_t[35] mauNextLandmark;

	// BrnModeManager.h:964
	uint8_t[35] mauLastLandmarkHit;

	// BrnModeManager.h:966
	uint32_t muNumLandmarks;

	// BrnModeManager.h:967
	LandmarkIndex mPlayerCurrentLandmark;

	// BrnModeManager.h:969
	float32_t mfModeTimeLimit;

	// BrnModeManager.h:970
	float32_t mfPlayerTotalledTime;

	// BrnModeManager.h:972
	CgsID mRaceId;

	// BrnModeManager.h:973
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnModeManager.h:974
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnModeManager.h:976
	StartGameModeParams mStartGameModeParams;

	// BrnModeManager.h:977
	GameModeParams mCurrentGameModeParams;

	// BrnModeManager.h:979
	BitArray<35u> mRaceCarReachedCheckpoint;

	// BrnModeManager.h:980
	BitArray<35u> mRaceCarReachedFinish;

	// BrnModeManager.h:983
	CgsID mPlayersPreSpecialEventCarID;

	// BrnModeManager.h:986
	uint32_t muNextDistanceRequestCheckpoint;

	// BrnModeManager.h:987
	bool mbNeedToSendNextRequest;

	// BrnModeManager.h:988
	bool mbIsCalculatingCheckpointDistances;

	// BrnModeManager.h:991
	PrepareForModeAction mPFMActionCache;

	// BrnModeManager.h:992
	float32_t mfPFMSecondPhaseTimer;

	// BrnModeManager.h:993
	bool mbIsWaitingForSecondPFM;

	// BrnModeManager.h:996
	bool mbInModeStartRegion;

	// BrnModeManager.h:997
	bool mbLastInModeStartRegion;

	// BrnModeManager.h:1000
	bool mbFinishCurrentModeNextUpdate;

	// BrnModeManager.h:1002
	bool mbRivalShutDown;

	// BrnModeManager.h:1003
	bool mbHasAborted;

	// BrnModeManager.h:1004
	bool mbAbortedDuringIntro;

	// BrnModeManager.h:1005
	bool mbHasTimedOut;

	// BrnModeManager.h:1006
	bool mbHasCrashedOut;

	// BrnModeManager.h:1007
	bool mbHasBeenEliminated;

	// BrnModeManager.h:1008
	bool mbHasAbortedDueToDisconnect;

	// BrnModeManager.h:1009
	bool mbHasPlayerFinished;

	// BrnModeManager.h:1010
	bool mbModeStartFromRegionEnabled;

	// BrnModeManager.h:1011
	bool mbModeDataIsLoading;

	// BrnModeManager.h:1012
	bool mbReadyForModeIntro;

	// BrnModeManager.h:1013
	bool mbIsModePrepared;

	// BrnModeManager.h:1014
	bool mbDistanceToFinishLineTransmitted;

	// BrnModeManager.h:1015
	bool mbFinishedOnlineEvent;

	// BrnModeManager.h:1016
	bool mbFinishedOnlineLobbyMode;

	// BrnModeManager.h:1017
	bool mbPersuitModeStartNextFrame;

	// BrnModeManager.h:1018
	bool mbPlayerCrashedLastFrame;

	// BrnModeManager.h:1019
	bool mbEventJustFinished;

	// BrnModeManager.h:1020
	bool mbIsInTimeUpOutro;

	// BrnModeManager.h:1021
	int32_t miFramesUntilModeSwitchSend;

	// BrnModeManager.h:1022
	float32_t mfTimeUpStateTimer;

	// BrnModeManager.h:1023
	int32_t miDebugFinishPosition;

	// BrnModeManager.h:1025
	float32_t mfTimeInFreeBurn;

	// BrnModeManager.h:1026
	float32_t mfTimeInMode;

	// BrnModeManager.h:1027
	float32_t mfTimeInOnline;

	// BrnModeManager.h:1030
	extern int32_t miPreWorldUpdatePM;

	// BrnModeManager.h:1031
	extern int32_t miPostWorldUpdatePM;

public:
	// BrnModeManager.h:122
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::NetworkRoundManager *, StreetManager *, BrnGameState::MugshotManager *, const BrnGameState::RoadRulesManager *, StuntModeScoring::AchievementManager *);

	// BrnModeManager.h:128
	bool Prepare(const ChallengeList *, HeapMalloc *);

	// BrnModeManager.h:132
	bool Release();

	// BrnModeManager.h:136
	void Destruct();

	// BrnModeManager.h:150
	void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const TimerStatusInterface &, EActiveRaceCarIndex, EGlobalRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:156
	void PostWorldUpdate(const PostWorldInputBuffer *, const InputBuffer::TakedownEventQueue *, float32_t);

	// BrnModeManager.h:160
	void ProcessPlayerCrashes(const PostWorldInputBuffer *);

	// BrnModeManager.h:164
	void CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *);

	// BrnModeManager.h:168
	void PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:174
	void StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, StartGameModeParams *);

	// BrnModeManager.h:179
	bool IsInGameMode() const;

	// BrnModeManager.h:183
	bool IsInOfflineRaceMode() const;

	// BrnModeManager.h:188
	bool IsInProgress() const;

	// BrnModeManager.h:192
	bool IsInPreEvent() const;

	// BrnModeManager.h:196
	bool IsInPostEvent() const;

	// BrnModeManager.h:200
	BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameModeType() const;

	// BrnModeManager.h:204
	bool CurrentGameModeHasRoute() const;

	// BrnModeManager.h:208
	bool CurrentGameModeUsesNavigation() const;

	// BrnModeManager.h:212
	bool CurrentGameModeAllowsTakedowns() const;

	// BrnModeManager.h:216
	bool CurrentGameModeAllowsRevengeTakedowns() const;

	// BrnModeManager.h:220
	bool CurrentGameModeDisablesAftertouchTakedowns() const;

	// BrnModeManager.h:224
	bool CurrentGameModeDisablesUpcomingRoads() const;

	// BrnModeManager.h:227
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentGameModeState() const;

	// BrnModeManager.h:231
	bool WasPreviousGameModeOnlineFreeBurnLobby() const;

	// BrnModeManager.h:239
	void SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, GameModeParams *, StartGameModeParams *);

	// BrnModeManager.h:245
	void FinishCurrentModeNextUpdate();

	// BrnModeManager.h:250
	void FinishCurrentModeNextUpdateWithFinishPosition(int32_t);

	// BrnModeManager.h:258
	// Declaration
	void ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnModeManager.cpp:1590
		using namespace CgsDev::Message;

	}

	// BrnModeManager.h:262
	void ResultsAccept();

	// BrnModeManager.h:266
	void FinishedSplashScreen();

	// BrnModeManager.h:270
	void FinishedMapPan();

	// BrnModeManager.h:274
	void FinishOfflineModeIntro();

	// BrnModeManager.h:278
	void FinishedLoadingDataForMode();

	// BrnModeManager.h:284
	void UserCancelCurrentMode();

	// BrnModeManager.h:289
	void FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *);

	// BrnModeManager.h:293
	BrnGameState::ScoringSystem * GetScoringSystem();

	// BrnModeManager.h:296
	Random * GetRandom();

	// BrnModeManager.h:300
	const ScoringSystem * GetScoringSystem() const;

	// BrnModeManager.h:304
	BrnGameState::GameMode ** GetGameModePtrArray();

	// BrnModeManager.h:307
	const TriggerData * GetTriggerData() const;

	// BrnModeManager.h:310
	const BrnGameState::NetworkRoundManager * GetNetworkRoundManager() const;

	// BrnModeManager.h:313
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnModeManager.h:316
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnModeManager.h:319
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnModeManager.h:323
	TriggerQueryManager * DEBUG_GetTriggerQueryManager();

	// BrnModeManager.h:333
	void RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EGlobalRaceCarIndex, EActiveRaceCarIndex, LandmarkIndex, bool);

	// BrnModeManager.h:337
	LandmarkIndex GetPlayerCurrentLandmark() const;

	// BrnModeManager.h:342
	void SetAborted(bool);

	// BrnModeManager.h:346
	bool HasAborted() const;

	// BrnModeManager.h:351
	void SetAbortedDuringIntro(bool);

	// BrnModeManager.h:355
	void SetAbortedDueToDisconnect();

	// BrnModeManager.h:360
	void SetTimedOut(bool);

	// BrnModeManager.h:364
	bool HasTimedOut() const;

	// BrnModeManager.h:370
	void SetRivalShutDown(bool);

	// BrnModeManager.h:374
	bool HasRivalShutDown() const;

	// BrnModeManager.h:378
	bool HasCrashedOut() const;

	// BrnModeManager.h:383
	void SetCrashedOut(bool);

	// BrnModeManager.h:388
	void SetBeenEliminated(bool);

	// BrnModeManager.h:392
	bool HasBeenEliminated() const;

	// BrnModeManager.h:397
	void PlayerFinishedMode(const PlayerFinishedModeEvent *);

	// BrnModeManager.h:401
	bool IsPlayerInStartRegion() const;

	// BrnModeManager.h:404
	bool WasPlayerInStartRegionLastFrame() const;

	// BrnModeManager.h:408
	void SetPlayerIsInStartRegion(bool);

	// BrnModeManager.h:414
	void ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:421
	void StartModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:426
	void SetModeStartFromRegionEnabled(bool);

	// BrnModeManager.h:429
	bool IsWaitingForModeDataToLoad() const;

	// BrnModeManager.h:432
	bool IsOnlineGameMode() const;

	// BrnModeManager.h:435
	bool IsOnlineFreeBurnLobby() const;

	// BrnModeManager.h:438
	CgsID GetCurrentRaceId() const;

	// BrnModeManager.h:441
	bool IsShowtimeGameMode() const;

	// BrnModeManager.h:444
	int32_t GetNumberOfCarsInFlyby();

	// BrnModeManager.h:448
	float32_t GetCountdownTimeForMode() const;

	// BrnModeManager.h:454
	void HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::TakedownEventQueue *);

	// BrnModeManager.h:461
	void SetStartingGrid(GameModeParams *, int32_t, bool) const;

	// BrnModeManager.h:469
	void SetupOnlineStartingGrid(GameModeParams *, int32_t, Random *, bool) const;

	// BrnModeManager.h:476
	void SetOnlineLandmarks(GameModeParams *, const StartNetworkRoundEvent *, int32_t) const;

	// BrnModeManager.h:483
	void SetOnlineRaceCars(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:489
	void SetTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:496
	void SetOnlineRoadRageTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *, int32_t) const;

	// BrnModeManager.h:502
	int32_t ChooseStartGridIndex(const Landmark *, const Landmark *) const;

	// BrnModeManager.h:509
	int32_t GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:514
	int32_t GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *);

	// BrnModeManager.h:519
	int32_t GetPursuitThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:524
	int32_t GetRoadRageThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:529
	int32_t GetRoadRageTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:533
	const GameModeParams * GetCurrentGameModeParams() const;

	// BrnModeManager.h:537
	bool IsWaitingForActiveRaceCars() const;

	// BrnModeManager.h:542
	void SetupPathfinding(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:548
	// Declaration
	void SetUpCheckPointsForGameMode(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnModeManager.cpp:4730
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4737
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4742
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4753
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4754
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4759
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4763
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:4764
		using namespace CgsDev::Message;

	}

	// BrnModeManager.h:552
	bool IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:557
	void SetupOpponentData(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:561
	void SetupCheckpointDistricts(GameModeParams *);

	// BrnModeManager.h:566
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId) const;

	// BrnModeManager.h:572
	void HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:579
	void HandleNewHostEvent(const OnlineNewHostEvent *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:584
	void HandleLoadingScreenLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:587
	// Declaration
	uint32_t GetRoadRageTakedownTarget() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnModeManager.cpp:1171
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1172
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1189
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1190
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1191
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1192
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1193
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1194
		using namespace CgsDev::Message;

		// BrnModeManager.cpp:1195
		using namespace CgsDev::Message;

	}

	// BrnModeManager.h:594
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:599
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:604
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:608
	void OnProfileLoaded();

	// BrnModeManager.h:615
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:624
	void HandleLocalStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnModeManager.h:631
	void HandleRemoteStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:637
	void HandleRemoteTriggeredFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:643
	void HandleOnlineEndFreeburnChallengeMessage(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus, bool);

	// BrnModeManager.h:649
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnModeManager.h:654
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnModeManager.h:659
	void HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *);

	// BrnModeManager.h:662
	CgsID GetCurrentFreeburnChallengeID();

	// BrnModeManager.h:669
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnModeManager.h:673
	bool ShouldForcePersuitNextFrame();

	// BrnModeManager.h:677
	HUDMessageLogic * GetHUDMessageLogic();

	// BrnModeManager.h:686
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID, Road::ChallengeIndex);

	// BrnModeManager.h:691
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnModeManager.h:697
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnModeManager.h:704
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:711
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:718
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:723
	void LocalPlayerDisconnected(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:726
	BrnGameState::GameMode * GetCurrentGameMode() const;

	// BrnModeManager.h:730
	void MarkedManLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:735
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnModeManager.h:738
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnModeManager.h:741
	bool IsChallengeActive() const;

	// BrnModeManager.h:746
	void RemoteRaceCarHitsCheckpoint(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnModeManager.h:749
	bool HasPlayerJustFinished() const;

	// BrnModeManager.h:753
	void ApplyVehicleList(const VehicleList *);

	// BrnModeManager.h:756
	void LeftOnlinePostEvent();

	// BrnModeManager.h:759
	const TrafficData * GetTrafficData();

	// BrnModeManager.h:762
	float32_t GetTimeInFreeBurn() const;

	// BrnModeManager.h:765
	float32_t GetTimeInMode() const;

	// BrnModeManager.h:769
	Vector3 GetCheckpointPosition(uint32_t) const;

private:
	// BrnModeManager.h:786
	void UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const InGamePlayerStatusInterface *, EActiveRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:791
	void UpdateCheckpointDistanceRequests(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:799
	void FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const Time &);

	// BrnModeManager.h:804
	void CheckCountdownDisplay(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:812
	void PrepareForMode(InputBuffer::GameActionQueue *, GameModeParams *, int32_t, StartGameModeParams *);

	// BrnModeManager.h:817
	void UpdateConsecutiveLosses(bool);

	// BrnModeManager.h:822
	void StopModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:828
	void StartPlayingMode(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:833
	void SendFinishedModeAction(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:840
	void SendModeStopMessages(InputBuffer::GameActionQueue *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:844
	int32_t GetPlayersFinishPosition();

	// BrnModeManager.h:847
	bool HasPlayerFinished() const;

	// BrnModeManager.h:852
	void PlayerTriggersLandmark(LandmarkIndex);

	// BrnModeManager.h:859
	void RaceCarFinishes(EGlobalRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnModeManager.h:864
	void ResetNextLandmarks(bool);

	// BrnModeManager.h:868
	void ClearLandmarkAndFinishLineData();

	// BrnModeManager.h:874
	void TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *, ScoringSystem &);

	// BrnModeManager.h:878
	void TransmitAndIncrementCheckPointsReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:882
	void TransmitAndIncrementFinishReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:888
	void HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *, const InputBuffer::TakedownEventQueue *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:891
	void HandleOnlineTeamCheckForModeFinished();

	// BrnModeManager.h:894
	void HandleOnlineBurningHomeRunCheckForModeFinished();

	// BrnModeManager.h:899
	void SendGameResultsToNetwork(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:902
	uint16_t GetLastLandmarkIndex();

}

// BrnModeManager.h:103
struct BrnGameState::ModeManager {
private:
	// BrnModeManager.h:907
	BrnGameState::GameMode *[17] mapGameModes;

	// BrnModeManager.h:910
	BrnGameState::RaceMode mRace;

	// BrnModeManager.h:911
	BrnGameState::FaceOffMode mFaceOff;

	// BrnModeManager.h:912
	BrnGameState::CrashMode mCrashMode;

	// BrnModeManager.h:913
	BrnGameState::RoadRageMode mRoadRage;

	// BrnModeManager.h:914
	BrnGameState::PursuitMode mPursuit;

	// BrnModeManager.h:915
	BrnGameState::BurningRouteMode mBurningRoute;

	// BrnModeManager.h:916
	BrnGameState::StuntAttackMode mStuntAttackMode;

	// BrnModeManager.h:917
	BrnGameState::SurvivorMode mSurvivor;

	// BrnModeManager.h:920
	BrnGameState::OnlineRaceMode mOnlineRace;

	// BrnModeManager.h:921
	BrnGameState::OnlineRoadRageMode mOnlineRoadRage;

	// BrnModeManager.h:922
	BrnGameState::OnlineFugitiveMode mOnlineFugitive;

	// BrnModeManager.h:923
	BrnGameState::OnlineBurningHomeRunMode mOnlineBurningHomeRun;

	// BrnModeManager.h:924
	BrnGameState::OnlineFreeBurnMode mOnlineFreeBurn;

	// BrnModeManager.h:925
	BrnGameState::OnlineFreeBurnLobbyMode mOnlineFreeBurnLobby;

	// BrnModeManager.h:926
	BrnGameState::OnlineShowtimeMode mOnlineShowtime;

	// BrnModeManager.h:929
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnModeManager.h:930
	BrnGameState::GameMode * mpCurrentGameMode;

	// BrnModeManager.h:932
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameModeType;

	// BrnModeManager.h:933
	BrnGameState::GameStateModuleIO::EGameModeState mePreviousGameModeState;

	// BrnModeManager.h:936
	BrnGameState::GameStateModuleIO::EGameModeType meLastAttemptedGameModeType;

	// BrnModeManager.h:937
	int32_t miNumUnsucessfulGameModeAttempts;

	// BrnModeManager.h:939
	ScoringSystem mScoringSystem;

	// BrnModeManager.h:940
	HUDMessageLogic mHUDMessageLogic;

	// BrnModeManager.h:943
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnModeManager.h:944
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnModeManager.h:945
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnModeManager.h:946
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnModeManager.h:948
	InputBuffer::GameActionQueue * mpGameActionQueue;

	// BrnModeManager.h:950
	Random mRandom;

	// BrnModeManager.h:951
	TimerStatusInterface mTimerStatusInterface;

	// BrnModeManager.h:954
	BrnGameState::ModeManagerDebugComponent mModeManagerDebugComponent;

	// BrnModeManager.h:956
	ChallengeManager mChallengeManager;

	// BrnModeManager.h:959
	LandmarkIndex[16] maLandmarkIndices;

	// BrnModeManager.h:960
	CgsID[16] maLandmarkCgsIDs;

	// BrnModeManager.h:961
	uint16_t[16] mauLandmarkSectionIndices;

	// BrnModeManager.h:963
	uint8_t[35] mauNextLandmark;

	// BrnModeManager.h:964
	uint8_t[35] mauLastLandmarkHit;

	// BrnModeManager.h:966
	uint32_t muNumLandmarks;

	// BrnModeManager.h:967
	LandmarkIndex mPlayerCurrentLandmark;

	// BrnModeManager.h:969
	float32_t mfModeTimeLimit;

	// BrnModeManager.h:970
	float32_t mfPlayerTotalledTime;

	// BrnModeManager.h:972
	CgsID mRaceId;

	// BrnModeManager.h:973
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnModeManager.h:974
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnModeManager.h:976
	StartGameModeParams mStartGameModeParams;

	// BrnModeManager.h:977
	GameModeParams mCurrentGameModeParams;

	// BrnModeManager.h:979
	BitArray<35u> mRaceCarReachedCheckpoint;

	// BrnModeManager.h:980
	BitArray<35u> mRaceCarReachedFinish;

	// BrnModeManager.h:983
	CgsID mPlayersPreSpecialEventCarID;

	// BrnModeManager.h:986
	uint32_t muNextDistanceRequestCheckpoint;

	// BrnModeManager.h:987
	bool mbNeedToSendNextRequest;

	// BrnModeManager.h:988
	bool mbIsCalculatingCheckpointDistances;

	// BrnModeManager.h:991
	PrepareForModeAction mPFMActionCache;

	// BrnModeManager.h:992
	float32_t mfPFMSecondPhaseTimer;

	// BrnModeManager.h:993
	bool mbIsWaitingForSecondPFM;

	// BrnModeManager.h:996
	bool mbInModeStartRegion;

	// BrnModeManager.h:997
	bool mbLastInModeStartRegion;

	// BrnModeManager.h:1000
	bool mbFinishCurrentModeNextUpdate;

	// BrnModeManager.h:1002
	bool mbRivalShutDown;

	// BrnModeManager.h:1003
	bool mbHasAborted;

	// BrnModeManager.h:1004
	bool mbAbortedDuringIntro;

	// BrnModeManager.h:1005
	bool mbHasTimedOut;

	// BrnModeManager.h:1006
	bool mbHasCrashedOut;

	// BrnModeManager.h:1007
	bool mbHasBeenEliminated;

	// BrnModeManager.h:1008
	bool mbHasAbortedDueToDisconnect;

	// BrnModeManager.h:1009
	bool mbHasPlayerFinished;

	// BrnModeManager.h:1010
	bool mbModeStartFromRegionEnabled;

	// BrnModeManager.h:1011
	bool mbModeDataIsLoading;

	// BrnModeManager.h:1012
	bool mbReadyForModeIntro;

	// BrnModeManager.h:1013
	bool mbIsModePrepared;

	// BrnModeManager.h:1014
	bool mbDistanceToFinishLineTransmitted;

	// BrnModeManager.h:1015
	bool mbFinishedOnlineEvent;

	// BrnModeManager.h:1016
	bool mbFinishedOnlineLobbyMode;

	// BrnModeManager.h:1017
	bool mbPersuitModeStartNextFrame;

	// BrnModeManager.h:1018
	bool mbPlayerCrashedLastFrame;

	// BrnModeManager.h:1019
	bool mbEventJustFinished;

	// BrnModeManager.h:1020
	bool mbIsInTimeUpOutro;

	// BrnModeManager.h:1021
	int32_t miFramesUntilModeSwitchSend;

	// BrnModeManager.h:1022
	float32_t mfTimeUpStateTimer;

	// BrnModeManager.h:1023
	int32_t miDebugFinishPosition;

	// BrnModeManager.h:1025
	float32_t mfTimeInFreeBurn;

	// BrnModeManager.h:1026
	float32_t mfTimeInMode;

	// BrnModeManager.h:1027
	float32_t mfTimeInOnline;

	// BrnModeManager.h:1030
	extern int32_t miPreWorldUpdatePM;

	// BrnModeManager.h:1031
	extern int32_t miPostWorldUpdatePM;

public:
	// BrnModeManager.h:122
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::NetworkRoundManager *, StreetManager *, MugshotManager *, const BrnGameState::RoadRulesManager *, StuntModeScoring::AchievementManager *);

	// BrnModeManager.h:128
	bool Prepare(const ChallengeList *, HeapMalloc *);

	// BrnModeManager.h:132
	bool Release();

	// BrnModeManager.h:136
	void Destruct();

	// BrnModeManager.h:150
	void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const TimerStatusInterface &, EActiveRaceCarIndex, EGlobalRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:156
	void PostWorldUpdate(const PostWorldInputBuffer *, const InputBuffer::TakedownEventQueue *, float32_t);

	// BrnModeManager.h:160
	void ProcessPlayerCrashes(const PostWorldInputBuffer *);

	// BrnModeManager.h:164
	void CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *);

	// BrnModeManager.h:168
	void PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:174
	void StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, StartGameModeParams *);

	// BrnModeManager.h:179
	bool IsInGameMode() const;

	// BrnModeManager.h:183
	bool IsInOfflineRaceMode() const;

	// BrnModeManager.h:188
	bool IsInProgress() const;

	// BrnModeManager.h:192
	bool IsInPreEvent() const;

	// BrnModeManager.h:196
	bool IsInPostEvent() const;

	// BrnModeManager.h:200
	BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameModeType() const;

	// BrnModeManager.h:204
	bool CurrentGameModeHasRoute() const;

	// BrnModeManager.h:208
	bool CurrentGameModeUsesNavigation() const;

	// BrnModeManager.h:212
	bool CurrentGameModeAllowsTakedowns() const;

	// BrnModeManager.h:216
	bool CurrentGameModeAllowsRevengeTakedowns() const;

	// BrnModeManager.h:220
	bool CurrentGameModeDisablesAftertouchTakedowns() const;

	// BrnModeManager.h:224
	bool CurrentGameModeDisablesUpcomingRoads() const;

	// BrnModeManager.h:227
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentGameModeState() const;

	// BrnModeManager.h:231
	bool WasPreviousGameModeOnlineFreeBurnLobby() const;

	// BrnModeManager.h:239
	void SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, GameModeParams *, StartGameModeParams *);

	// BrnModeManager.h:245
	void FinishCurrentModeNextUpdate();

	// BrnModeManager.h:250
	void FinishCurrentModeNextUpdateWithFinishPosition(int32_t);

	// BrnModeManager.h:258
	void ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:262
	void ResultsAccept();

	// BrnModeManager.h:266
	void FinishedSplashScreen();

	// BrnModeManager.h:270
	void FinishedMapPan();

	// BrnModeManager.h:274
	void FinishOfflineModeIntro();

	// BrnModeManager.h:278
	void FinishedLoadingDataForMode();

	// BrnModeManager.h:284
	void UserCancelCurrentMode();

	// BrnModeManager.h:289
	void FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *);

	// BrnModeManager.h:293
	BrnGameState::ScoringSystem * GetScoringSystem();

	// BrnModeManager.h:296
	Random * GetRandom();

	// BrnModeManager.h:300
	const ScoringSystem * GetScoringSystem() const;

	// BrnModeManager.h:304
	BrnGameState::GameMode ** GetGameModePtrArray();

	// BrnModeManager.h:307
	const TriggerData * GetTriggerData() const;

	// BrnModeManager.h:310
	const BrnGameState::NetworkRoundManager * GetNetworkRoundManager() const;

	// BrnModeManager.h:313
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnModeManager.h:316
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnModeManager.h:319
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnModeManager.h:323
	TriggerQueryManager * DEBUG_GetTriggerQueryManager();

	// BrnModeManager.h:333
	void RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EGlobalRaceCarIndex, EActiveRaceCarIndex, LandmarkIndex, bool);

	// BrnModeManager.h:337
	LandmarkIndex GetPlayerCurrentLandmark() const;

	// BrnModeManager.h:342
	void SetAborted(bool);

	// BrnModeManager.h:346
	bool HasAborted() const;

	// BrnModeManager.h:351
	void SetAbortedDuringIntro(bool);

	// BrnModeManager.h:355
	void SetAbortedDueToDisconnect();

	// BrnModeManager.h:360
	void SetTimedOut(bool);

	// BrnModeManager.h:364
	bool HasTimedOut() const;

	// BrnModeManager.h:370
	void SetRivalShutDown(bool);

	// BrnModeManager.h:374
	bool HasRivalShutDown() const;

	// BrnModeManager.h:378
	bool HasCrashedOut() const;

	// BrnModeManager.h:383
	void SetCrashedOut(bool);

	// BrnModeManager.h:388
	void SetBeenEliminated(bool);

	// BrnModeManager.h:392
	bool HasBeenEliminated() const;

	// BrnModeManager.h:397
	void PlayerFinishedMode(const PlayerFinishedModeEvent *);

	// BrnModeManager.h:401
	bool IsPlayerInStartRegion() const;

	// BrnModeManager.h:404
	bool WasPlayerInStartRegionLastFrame() const;

	// BrnModeManager.h:408
	void SetPlayerIsInStartRegion(bool);

	// BrnModeManager.h:414
	void ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:421
	void StartModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:426
	void SetModeStartFromRegionEnabled(bool);

	// BrnModeManager.h:429
	bool IsWaitingForModeDataToLoad() const;

	// BrnModeManager.h:432
	bool IsOnlineGameMode() const;

	// BrnModeManager.h:435
	bool IsOnlineFreeBurnLobby() const;

	// BrnModeManager.h:438
	CgsID GetCurrentRaceId() const;

	// BrnModeManager.h:441
	bool IsShowtimeGameMode() const;

	// BrnModeManager.h:444
	int32_t GetNumberOfCarsInFlyby();

	// BrnModeManager.h:448
	float32_t GetCountdownTimeForMode() const;

	// BrnModeManager.h:454
	void HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::TakedownEventQueue *);

	// BrnModeManager.h:461
	void SetStartingGrid(GameModeParams *, int32_t, bool) const;

	// BrnModeManager.h:469
	void SetupOnlineStartingGrid(GameModeParams *, int32_t, Random *, bool) const;

	// BrnModeManager.h:476
	void SetOnlineLandmarks(GameModeParams *, const StartNetworkRoundEvent *, int32_t) const;

	// BrnModeManager.h:483
	void SetOnlineRaceCars(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:489
	void SetTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:496
	void SetOnlineRoadRageTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *, int32_t) const;

	// BrnModeManager.h:502
	int32_t ChooseStartGridIndex(const Landmark *, const Landmark *) const;

	// BrnModeManager.h:509
	int32_t GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:514
	int32_t GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *);

	// BrnModeManager.h:519
	int32_t GetPursuitThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:524
	int32_t GetRoadRageThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:529
	int32_t GetRoadRageTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:533
	const GameModeParams * GetCurrentGameModeParams() const;

	// BrnModeManager.h:537
	bool IsWaitingForActiveRaceCars() const;

	// BrnModeManager.h:542
	void SetupPathfinding(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:548
	void SetUpCheckPointsForGameMode(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnModeManager.h:552
	bool IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:557
	void SetupOpponentData(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:561
	void SetupCheckpointDistricts(GameModeParams *);

	// BrnModeManager.h:566
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId) const;

	// BrnModeManager.h:572
	void HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:579
	void HandleNewHostEvent(const OnlineNewHostEvent *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:584
	void HandleLoadingScreenLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:587
	uint32_t GetRoadRageTakedownTarget();

	// BrnModeManager.h:594
	void TriggerFreeburnChallenge(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:599
	void CancelFreeburnChallenge(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:604
	void OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:608
	void OnProfileLoaded();

	// BrnModeManager.h:615
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:624
	void HandleLocalStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnModeManager.h:631
	void HandleRemoteStartFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:637
	void HandleRemoteTriggeredFreeburnChallengeMessage(CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:643
	void HandleOnlineEndFreeburnChallengeMessage(InputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus, bool);

	// BrnModeManager.h:649
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnModeManager.h:654
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnModeManager.h:659
	void HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *);

	// BrnModeManager.h:662
	CgsID GetCurrentFreeburnChallengeID();

	// BrnModeManager.h:669
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnModeManager.h:673
	bool ShouldForcePersuitNextFrame();

	// BrnModeManager.h:677
	HUDMessageLogic * GetHUDMessageLogic();

	// BrnModeManager.h:686
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID, Road::ChallengeIndex);

	// BrnModeManager.h:691
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnModeManager.h:697
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnModeManager.h:704
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:711
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:718
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, InputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:723
	void LocalPlayerDisconnected(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:726
	BrnGameState::GameMode * GetCurrentGameMode() const;

	// BrnModeManager.h:730
	void MarkedManLoaded(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:735
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnModeManager.h:738
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnModeManager.h:741
	bool IsChallengeActive() const;

	// BrnModeManager.h:746
	void RemoteRaceCarHitsCheckpoint(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnModeManager.h:749
	bool HasPlayerJustFinished() const;

	// BrnModeManager.h:753
	void ApplyVehicleList(const VehicleList *);

	// BrnModeManager.h:756
	void LeftOnlinePostEvent();

	// BrnModeManager.h:759
	const TrafficData * GetTrafficData();

	// BrnModeManager.h:762
	float32_t GetTimeInFreeBurn() const;

	// BrnModeManager.h:765
	float32_t GetTimeInMode() const;

	// BrnModeManager.h:769
	Vector3 GetCheckpointPosition(uint32_t) const;

private:
	// BrnModeManager.h:786
	void UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const InGamePlayerStatusInterface *, EActiveRaceCarIndex, bool, InputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:791
	void UpdateCheckpointDistanceRequests(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:799
	void FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const Time &);

	// BrnModeManager.h:804
	void CheckCountdownDisplay(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:812
	void PrepareForMode(InputBuffer::GameActionQueue *, GameModeParams *, int32_t, StartGameModeParams *);

	// BrnModeManager.h:817
	void UpdateConsecutiveLosses(bool);

	// BrnModeManager.h:822
	void StopModeIntro(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:828
	void StartPlayingMode(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:833
	void SendFinishedModeAction(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:840
	void SendModeStopMessages(InputBuffer::GameActionQueue *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:844
	int32_t GetPlayersFinishPosition();

	// BrnModeManager.h:847
	bool HasPlayerFinished() const;

	// BrnModeManager.h:852
	void PlayerTriggersLandmark(LandmarkIndex);

	// BrnModeManager.h:859
	void RaceCarFinishes(EGlobalRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnModeManager.h:864
	void ResetNextLandmarks(bool);

	// BrnModeManager.h:868
	void ClearLandmarkAndFinishLineData();

	// BrnModeManager.h:874
	void TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *, ScoringSystem &);

	// BrnModeManager.h:878
	void TransmitAndIncrementCheckPointsReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:882
	void TransmitAndIncrementFinishReached(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:888
	void HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *, const InputBuffer::TakedownEventQueue *, InputBuffer::GameActionQueue *);

	// BrnModeManager.h:891
	void HandleOnlineTeamCheckForModeFinished();

	// BrnModeManager.h:894
	void HandleOnlineBurningHomeRunCheckForModeFinished();

	// BrnModeManager.h:899
	void SendGameResultsToNetwork(InputBuffer::GameActionQueue *);

	// BrnModeManager.h:902
	uint16_t GetLastLandmarkIndex();

}

// BrnModeManager.h:103
struct BrnGameState::ModeManager {
private:
	// BrnModeManager.h:907
	BrnGameState::GameMode *[17] mapGameModes;

	// BrnModeManager.h:910
	BrnGameState::RaceMode mRace;

	// BrnModeManager.h:911
	BrnGameState::FaceOffMode mFaceOff;

	// BrnModeManager.h:912
	BrnGameState::CrashMode mCrashMode;

	// BrnModeManager.h:913
	BrnGameState::RoadRageMode mRoadRage;

	// BrnModeManager.h:914
	BrnGameState::PursuitMode mPursuit;

	// BrnModeManager.h:915
	BrnGameState::BurningRouteMode mBurningRoute;

	// BrnModeManager.h:916
	BrnGameState::StuntAttackMode mStuntAttackMode;

	// BrnModeManager.h:917
	BrnGameState::SurvivorMode mSurvivor;

	// BrnModeManager.h:920
	BrnGameState::OnlineRaceMode mOnlineRace;

	// BrnModeManager.h:921
	BrnGameState::OnlineRoadRageMode mOnlineRoadRage;

	// BrnModeManager.h:922
	BrnGameState::OnlineFugitiveMode mOnlineFugitive;

	// BrnModeManager.h:923
	BrnGameState::OnlineBurningHomeRunMode mOnlineBurningHomeRun;

	// BrnModeManager.h:924
	BrnGameState::OnlineFreeBurnMode mOnlineFreeBurn;

	// BrnModeManager.h:925
	BrnGameState::OnlineFreeBurnLobbyMode mOnlineFreeBurnLobby;

	// BrnModeManager.h:926
	BrnGameState::OnlineShowtimeMode mOnlineShowtime;

	// BrnModeManager.h:929
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnModeManager.h:930
	BrnGameState::GameMode * mpCurrentGameMode;

	// BrnModeManager.h:932
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameModeType;

	// BrnModeManager.h:933
	BrnGameState::GameStateModuleIO::EGameModeState mePreviousGameModeState;

	// BrnModeManager.h:936
	BrnGameState::GameStateModuleIO::EGameModeType meLastAttemptedGameModeType;

	// BrnModeManager.h:937
	int32_t miNumUnsucessfulGameModeAttempts;

	// BrnModeManager.h:939
	ScoringSystem mScoringSystem;

	// BrnModeManager.h:940
	HUDMessageLogic mHUDMessageLogic;

	// BrnModeManager.h:943
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnModeManager.h:944
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnModeManager.h:945
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnModeManager.h:946
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnModeManager.h:948
	OutputBuffer::GameActionQueue * mpGameActionQueue;

	// BrnModeManager.h:950
	Random mRandom;

	// BrnModeManager.h:951
	TimerStatusInterface mTimerStatusInterface;

	// BrnModeManager.h:954
	BrnGameState::ModeManagerDebugComponent mModeManagerDebugComponent;

	// BrnModeManager.h:956
	ChallengeManager mChallengeManager;

	// BrnModeManager.h:959
	LandmarkIndex[16] maLandmarkIndices;

	// BrnModeManager.h:960
	CgsID[16] maLandmarkCgsIDs;

	// BrnModeManager.h:961
	uint16_t[16] mauLandmarkSectionIndices;

	// BrnModeManager.h:963
	uint8_t[35] mauNextLandmark;

	// BrnModeManager.h:964
	uint8_t[35] mauLastLandmarkHit;

	// BrnModeManager.h:966
	uint32_t muNumLandmarks;

	// BrnModeManager.h:967
	LandmarkIndex mPlayerCurrentLandmark;

	// BrnModeManager.h:969
	float32_t mfModeTimeLimit;

	// BrnModeManager.h:970
	float32_t mfPlayerTotalledTime;

	// BrnModeManager.h:972
	CgsID mRaceId;

	// BrnModeManager.h:973
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnModeManager.h:974
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnModeManager.h:976
	StartGameModeParams mStartGameModeParams;

	// BrnModeManager.h:977
	GameModeParams mCurrentGameModeParams;

	// BrnModeManager.h:979
	BitArray<35u> mRaceCarReachedCheckpoint;

	// BrnModeManager.h:980
	BitArray<35u> mRaceCarReachedFinish;

	// BrnModeManager.h:983
	CgsID mPlayersPreSpecialEventCarID;

	// BrnModeManager.h:986
	uint32_t muNextDistanceRequestCheckpoint;

	// BrnModeManager.h:987
	bool mbNeedToSendNextRequest;

	// BrnModeManager.h:988
	bool mbIsCalculatingCheckpointDistances;

	// BrnModeManager.h:991
	PrepareForModeAction mPFMActionCache;

	// BrnModeManager.h:992
	float32_t mfPFMSecondPhaseTimer;

	// BrnModeManager.h:993
	bool mbIsWaitingForSecondPFM;

	// BrnModeManager.h:996
	bool mbInModeStartRegion;

	// BrnModeManager.h:997
	bool mbLastInModeStartRegion;

	// BrnModeManager.h:1000
	bool mbFinishCurrentModeNextUpdate;

	// BrnModeManager.h:1002
	bool mbRivalShutDown;

	// BrnModeManager.h:1003
	bool mbHasAborted;

	// BrnModeManager.h:1004
	bool mbAbortedDuringIntro;

	// BrnModeManager.h:1005
	bool mbHasTimedOut;

	// BrnModeManager.h:1006
	bool mbHasCrashedOut;

	// BrnModeManager.h:1007
	bool mbHasBeenEliminated;

	// BrnModeManager.h:1008
	bool mbHasAbortedDueToDisconnect;

	// BrnModeManager.h:1009
	bool mbHasPlayerFinished;

	// BrnModeManager.h:1010
	bool mbModeStartFromRegionEnabled;

	// BrnModeManager.h:1011
	bool mbModeDataIsLoading;

	// BrnModeManager.h:1012
	bool mbReadyForModeIntro;

	// BrnModeManager.h:1013
	bool mbIsModePrepared;

	// BrnModeManager.h:1014
	bool mbDistanceToFinishLineTransmitted;

	// BrnModeManager.h:1015
	bool mbFinishedOnlineEvent;

	// BrnModeManager.h:1016
	bool mbFinishedOnlineLobbyMode;

	// BrnModeManager.h:1017
	bool mbPersuitModeStartNextFrame;

	// BrnModeManager.h:1018
	bool mbPlayerCrashedLastFrame;

	// BrnModeManager.h:1019
	bool mbEventJustFinished;

	// BrnModeManager.h:1020
	bool mbIsInTimeUpOutro;

	// BrnModeManager.h:1021
	int32_t miFramesUntilModeSwitchSend;

	// BrnModeManager.h:1022
	float32_t mfTimeUpStateTimer;

	// BrnModeManager.h:1023
	int32_t miDebugFinishPosition;

	// BrnModeManager.h:1025
	float32_t mfTimeInFreeBurn;

	// BrnModeManager.h:1026
	float32_t mfTimeInMode;

	// BrnModeManager.h:1027
	float32_t mfTimeInOnline;

	// BrnModeManager.h:1030
	extern int32_t miPreWorldUpdatePM;

	// BrnModeManager.h:1031
	extern int32_t miPostWorldUpdatePM;

public:
	// BrnModeManager.h:122
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::NetworkRoundManager *, StreetManager *, MugshotManager *, const BrnGameState::RoadRulesManager *, StuntModeScoring::AchievementManager *);

	// BrnModeManager.h:128
	bool Prepare(const ChallengeList *, CgsMemory::HeapMalloc *);

	// BrnModeManager.h:132
	bool Release();

	// BrnModeManager.h:136
	void Destruct();

	// BrnModeManager.h:150
	void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const TimerStatusInterface &, EActiveRaceCarIndex, EGlobalRaceCarIndex, bool, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:156
	void PostWorldUpdate(const PostWorldInputBuffer *, const InputBuffer::TakedownEventQueue *, float32_t);

	// BrnModeManager.h:160
	void ProcessPlayerCrashes(const PostWorldInputBuffer *);

	// BrnModeManager.h:164
	void CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *);

	// BrnModeManager.h:168
	void PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:174
	void StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, StartGameModeParams *);

	// BrnModeManager.h:179
	bool IsInGameMode() const;

	// BrnModeManager.h:183
	bool IsInOfflineRaceMode() const;

	// BrnModeManager.h:188
	bool IsInProgress() const;

	// BrnModeManager.h:192
	bool IsInPreEvent() const;

	// BrnModeManager.h:196
	bool IsInPostEvent() const;

	// BrnModeManager.h:200
	BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameModeType() const;

	// BrnModeManager.h:204
	bool CurrentGameModeHasRoute() const;

	// BrnModeManager.h:208
	bool CurrentGameModeUsesNavigation() const;

	// BrnModeManager.h:212
	bool CurrentGameModeAllowsTakedowns() const;

	// BrnModeManager.h:216
	bool CurrentGameModeAllowsRevengeTakedowns() const;

	// BrnModeManager.h:220
	bool CurrentGameModeDisablesAftertouchTakedowns() const;

	// BrnModeManager.h:224
	bool CurrentGameModeDisablesUpcomingRoads() const;

	// BrnModeManager.h:227
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentGameModeState() const;

	// BrnModeManager.h:231
	bool WasPreviousGameModeOnlineFreeBurnLobby() const;

	// BrnModeManager.h:239
	void SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, GameModeParams *, StartGameModeParams *);

	// BrnModeManager.h:245
	void FinishCurrentModeNextUpdate();

	// BrnModeManager.h:250
	void FinishCurrentModeNextUpdateWithFinishPosition(int32_t);

	// BrnModeManager.h:258
	void ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:262
	void ResultsAccept();

	// BrnModeManager.h:266
	void FinishedSplashScreen();

	// BrnModeManager.h:270
	void FinishedMapPan();

	// BrnModeManager.h:274
	void FinishOfflineModeIntro();

	// BrnModeManager.h:278
	void FinishedLoadingDataForMode();

	// BrnModeManager.h:284
	void UserCancelCurrentMode();

	// BrnModeManager.h:289
	void FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *);

	// BrnModeManager.h:293
	BrnGameState::ScoringSystem * GetScoringSystem();

	// BrnModeManager.h:296
	Random * GetRandom();

	// BrnModeManager.h:300
	const ScoringSystem * GetScoringSystem() const;

	// BrnModeManager.h:304
	BrnGameState::GameMode ** GetGameModePtrArray();

	// BrnModeManager.h:307
	const TriggerData * GetTriggerData() const;

	// BrnModeManager.h:310
	const BrnGameState::NetworkRoundManager * GetNetworkRoundManager() const;

	// BrnModeManager.h:313
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnModeManager.h:316
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnModeManager.h:319
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnModeManager.h:323
	TriggerQueryManager * DEBUG_GetTriggerQueryManager();

	// BrnModeManager.h:333
	void RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EGlobalRaceCarIndex, EActiveRaceCarIndex, LandmarkIndex, bool);

	// BrnModeManager.h:337
	LandmarkIndex GetPlayerCurrentLandmark() const;

	// BrnModeManager.h:342
	void SetAborted(bool);

	// BrnModeManager.h:346
	bool HasAborted() const;

	// BrnModeManager.h:351
	void SetAbortedDuringIntro(bool);

	// BrnModeManager.h:355
	void SetAbortedDueToDisconnect();

	// BrnModeManager.h:360
	void SetTimedOut(bool);

	// BrnModeManager.h:364
	bool HasTimedOut() const;

	// BrnModeManager.h:370
	void SetRivalShutDown(bool);

	// BrnModeManager.h:374
	bool HasRivalShutDown() const;

	// BrnModeManager.h:378
	bool HasCrashedOut() const;

	// BrnModeManager.h:383
	void SetCrashedOut(bool);

	// BrnModeManager.h:388
	void SetBeenEliminated(bool);

	// BrnModeManager.h:392
	bool HasBeenEliminated() const;

	// BrnModeManager.h:397
	void PlayerFinishedMode(const PlayerFinishedModeEvent *);

	// BrnModeManager.h:401
	bool IsPlayerInStartRegion() const;

	// BrnModeManager.h:404
	bool WasPlayerInStartRegionLastFrame() const;

	// BrnModeManager.h:408
	void SetPlayerIsInStartRegion(bool);

	// BrnModeManager.h:414
	void ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:421
	void StartModeIntro(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:426
	void SetModeStartFromRegionEnabled(bool);

	// BrnModeManager.h:429
	bool IsWaitingForModeDataToLoad() const;

	// BrnModeManager.h:432
	bool IsOnlineGameMode() const;

	// BrnModeManager.h:435
	bool IsOnlineFreeBurnLobby() const;

	// BrnModeManager.h:438
	CgsID GetCurrentRaceId() const;

	// BrnModeManager.h:441
	bool IsShowtimeGameMode() const;

	// BrnModeManager.h:444
	int32_t GetNumberOfCarsInFlyby();

	// BrnModeManager.h:448
	float32_t GetCountdownTimeForMode() const;

	// BrnModeManager.h:454
	void HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::TakedownEventQueue *);

	// BrnModeManager.h:461
	void SetStartingGrid(GameModeParams *, int32_t, bool) const;

	// BrnModeManager.h:469
	void SetupOnlineStartingGrid(GameModeParams *, int32_t, Random *, bool) const;

	// BrnModeManager.h:476
	void SetOnlineLandmarks(GameModeParams *, const StartNetworkRoundEvent *, int32_t) const;

	// BrnModeManager.h:483
	void SetOnlineRaceCars(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:489
	void SetTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:496
	void SetOnlineRoadRageTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *, int32_t) const;

	// BrnModeManager.h:502
	int32_t ChooseStartGridIndex(const Landmark *, const Landmark *) const;

	// BrnModeManager.h:509
	int32_t GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:514
	int32_t GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *);

	// BrnModeManager.h:519
	int32_t GetPursuitThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:524
	int32_t GetRoadRageThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:529
	int32_t GetRoadRageTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:533
	const GameModeParams * GetCurrentGameModeParams() const;

	// BrnModeManager.h:537
	bool IsWaitingForActiveRaceCars() const;

	// BrnModeManager.h:542
	void SetupPathfinding(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:548
	void SetUpCheckPointsForGameMode(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnModeManager.h:552
	bool IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:557
	void SetupOpponentData(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:561
	void SetupCheckpointDistricts(GameModeParams *);

	// BrnModeManager.h:566
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId) const;

	// BrnModeManager.h:572
	void HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:579
	void HandleNewHostEvent(const OnlineNewHostEvent *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:584
	void HandleLoadingScreenLoaded(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:587
	uint32_t GetRoadRageTakedownTarget();

	// BrnModeManager.h:594
	void TriggerFreeburnChallenge(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:599
	void CancelFreeburnChallenge(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:604
	void OutputFreeburnChallengeEveryPlayerStatusEvent(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:608
	void OnProfileLoaded();

	// BrnModeManager.h:615
	void SetPlayerDisconnected(GuiEventNetworkLaunching::NetworkPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:624
	void HandleLocalStartFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnModeManager.h:631
	void HandleRemoteStartFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:637
	void HandleRemoteTriggeredFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:643
	void HandleOnlineEndFreeburnChallengeMessage(OutputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus, bool);

	// BrnModeManager.h:649
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnModeManager.h:654
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnModeManager.h:659
	void HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *);

	// BrnModeManager.h:662
	CgsID GetCurrentFreeburnChallengeID();

	// BrnModeManager.h:669
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnModeManager.h:673
	bool ShouldForcePersuitNextFrame();

	// BrnModeManager.h:677
	HUDMessageLogic * GetHUDMessageLogic();

	// BrnModeManager.h:686
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID, Road::ChallengeIndex);

	// BrnModeManager.h:691
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnModeManager.h:697
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnModeManager.h:704
	void NetworkPlayerAdded(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:711
	void NetworkPlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:718
	void NetworkPlayerRemoved(GuiEventNetworkLaunching::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:723
	void LocalPlayerDisconnected(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:726
	BrnGameState::GameMode * GetCurrentGameMode() const;

	// BrnModeManager.h:730
	void MarkedManLoaded(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:735
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnModeManager.h:738
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnModeManager.h:741
	bool IsChallengeActive() const;

	// BrnModeManager.h:746
	void RemoteRaceCarHitsCheckpoint(GuiEventNetworkLaunching::NetworkPlayerID, int32_t);

	// BrnModeManager.h:749
	bool HasPlayerJustFinished() const;

	// BrnModeManager.h:753
	void ApplyVehicleList(const VehicleList *);

	// BrnModeManager.h:756
	void LeftOnlinePostEvent();

	// BrnModeManager.h:759
	const TrafficData * GetTrafficData();

	// BrnModeManager.h:762
	float32_t GetTimeInFreeBurn() const;

	// BrnModeManager.h:765
	float32_t GetTimeInMode() const;

	// BrnModeManager.h:769
	Vector3 GetCheckpointPosition(uint32_t) const;

private:
	// BrnModeManager.h:786
	void UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const InGamePlayerStatusInterface *, EActiveRaceCarIndex, bool, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:791
	void UpdateCheckpointDistanceRequests(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:799
	void FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const Time &);

	// BrnModeManager.h:804
	void CheckCountdownDisplay(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:812
	void PrepareForMode(OutputBuffer::GameActionQueue *, GameModeParams *, int32_t, StartGameModeParams *);

	// BrnModeManager.h:817
	void UpdateConsecutiveLosses(bool);

	// BrnModeManager.h:822
	void StopModeIntro(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:828
	void StartPlayingMode(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:833
	void SendFinishedModeAction(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:840
	void SendModeStopMessages(OutputBuffer::GameActionQueue *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:844
	int32_t GetPlayersFinishPosition();

	// BrnModeManager.h:847
	bool HasPlayerFinished() const;

	// BrnModeManager.h:852
	void PlayerTriggersLandmark(LandmarkIndex);

	// BrnModeManager.h:859
	void RaceCarFinishes(EGlobalRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnModeManager.h:864
	void ResetNextLandmarks(bool);

	// BrnModeManager.h:868
	void ClearLandmarkAndFinishLineData();

	// BrnModeManager.h:874
	void TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *, ScoringSystem &);

	// BrnModeManager.h:878
	void TransmitAndIncrementCheckPointsReached(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:882
	void TransmitAndIncrementFinishReached(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:888
	void HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *, const InputBuffer::TakedownEventQueue *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:891
	void HandleOnlineTeamCheckForModeFinished();

	// BrnModeManager.h:894
	void HandleOnlineBurningHomeRunCheckForModeFinished();

	// BrnModeManager.h:899
	void SendGameResultsToNetwork(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:902
	uint16_t GetLastLandmarkIndex();

}

// BrnModeManager.h:103
struct BrnGameState::ModeManager {
private:
	// BrnModeManager.h:907
	BrnGameState::GameMode *[17] mapGameModes;

	// BrnModeManager.h:910
	BrnGameState::RaceMode mRace;

	// BrnModeManager.h:911
	BrnGameState::FaceOffMode mFaceOff;

	// BrnModeManager.h:912
	BrnGameState::CrashMode mCrashMode;

	// BrnModeManager.h:913
	BrnGameState::RoadRageMode mRoadRage;

	// BrnModeManager.h:914
	BrnGameState::PursuitMode mPursuit;

	// BrnModeManager.h:915
	BrnGameState::BurningRouteMode mBurningRoute;

	// BrnModeManager.h:916
	BrnGameState::StuntAttackMode mStuntAttackMode;

	// BrnModeManager.h:917
	BrnGameState::SurvivorMode mSurvivor;

	// BrnModeManager.h:920
	BrnGameState::OnlineRaceMode mOnlineRace;

	// BrnModeManager.h:921
	BrnGameState::OnlineRoadRageMode mOnlineRoadRage;

	// BrnModeManager.h:922
	BrnGameState::OnlineFugitiveMode mOnlineFugitive;

	// BrnModeManager.h:923
	BrnGameState::OnlineBurningHomeRunMode mOnlineBurningHomeRun;

	// BrnModeManager.h:924
	BrnGameState::OnlineFreeBurnMode mOnlineFreeBurn;

	// BrnModeManager.h:925
	BrnGameState::OnlineFreeBurnLobbyMode mOnlineFreeBurnLobby;

	// BrnModeManager.h:926
	BrnGameState::OnlineShowtimeMode mOnlineShowtime;

	// BrnModeManager.h:929
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnModeManager.h:930
	BrnGameState::GameMode * mpCurrentGameMode;

	// BrnModeManager.h:932
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameModeType;

	// BrnModeManager.h:933
	BrnGameState::GameStateModuleIO::EGameModeState mePreviousGameModeState;

	// BrnModeManager.h:936
	BrnGameState::GameStateModuleIO::EGameModeType meLastAttemptedGameModeType;

	// BrnModeManager.h:937
	int32_t miNumUnsucessfulGameModeAttempts;

	// BrnModeManager.h:939
	ScoringSystem mScoringSystem;

	// BrnModeManager.h:940
	HUDMessageLogic mHUDMessageLogic;

	// BrnModeManager.h:943
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnModeManager.h:944
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnModeManager.h:945
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnModeManager.h:946
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnModeManager.h:948
	OutputBuffer::GameActionQueue * mpGameActionQueue;

	// BrnModeManager.h:950
	Random mRandom;

	// BrnModeManager.h:951
	TimerStatusInterface mTimerStatusInterface;

	// BrnModeManager.h:954
	BrnGameState::ModeManagerDebugComponent mModeManagerDebugComponent;

	// BrnModeManager.h:956
	ChallengeManager mChallengeManager;

	// BrnModeManager.h:959
	LandmarkIndex[16] maLandmarkIndices;

	// BrnModeManager.h:960
	CgsID[16] maLandmarkCgsIDs;

	// BrnModeManager.h:961
	uint16_t[16] mauLandmarkSectionIndices;

	// BrnModeManager.h:963
	uint8_t[35] mauNextLandmark;

	// BrnModeManager.h:964
	uint8_t[35] mauLastLandmarkHit;

	// BrnModeManager.h:966
	uint32_t muNumLandmarks;

	// BrnModeManager.h:967
	LandmarkIndex mPlayerCurrentLandmark;

	// BrnModeManager.h:969
	float32_t mfModeTimeLimit;

	// BrnModeManager.h:970
	float32_t mfPlayerTotalledTime;

	// BrnModeManager.h:972
	CgsID mRaceId;

	// BrnModeManager.h:973
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnModeManager.h:974
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnModeManager.h:976
	StartGameModeParams mStartGameModeParams;

	// BrnModeManager.h:977
	GameModeParams mCurrentGameModeParams;

	// BrnModeManager.h:979
	BitArray<35u> mRaceCarReachedCheckpoint;

	// BrnModeManager.h:980
	BitArray<35u> mRaceCarReachedFinish;

	// BrnModeManager.h:983
	CgsID mPlayersPreSpecialEventCarID;

	// BrnModeManager.h:986
	uint32_t muNextDistanceRequestCheckpoint;

	// BrnModeManager.h:987
	bool mbNeedToSendNextRequest;

	// BrnModeManager.h:988
	bool mbIsCalculatingCheckpointDistances;

	// BrnModeManager.h:991
	PrepareForModeAction mPFMActionCache;

	// BrnModeManager.h:992
	float32_t mfPFMSecondPhaseTimer;

	// BrnModeManager.h:993
	bool mbIsWaitingForSecondPFM;

	// BrnModeManager.h:996
	bool mbInModeStartRegion;

	// BrnModeManager.h:997
	bool mbLastInModeStartRegion;

	// BrnModeManager.h:1000
	bool mbFinishCurrentModeNextUpdate;

	// BrnModeManager.h:1002
	bool mbRivalShutDown;

	// BrnModeManager.h:1003
	bool mbHasAborted;

	// BrnModeManager.h:1004
	bool mbAbortedDuringIntro;

	// BrnModeManager.h:1005
	bool mbHasTimedOut;

	// BrnModeManager.h:1006
	bool mbHasCrashedOut;

	// BrnModeManager.h:1007
	bool mbHasBeenEliminated;

	// BrnModeManager.h:1008
	bool mbHasAbortedDueToDisconnect;

	// BrnModeManager.h:1009
	bool mbHasPlayerFinished;

	// BrnModeManager.h:1010
	bool mbModeStartFromRegionEnabled;

	// BrnModeManager.h:1011
	bool mbModeDataIsLoading;

	// BrnModeManager.h:1012
	bool mbReadyForModeIntro;

	// BrnModeManager.h:1013
	bool mbIsModePrepared;

	// BrnModeManager.h:1014
	bool mbDistanceToFinishLineTransmitted;

	// BrnModeManager.h:1015
	bool mbFinishedOnlineEvent;

	// BrnModeManager.h:1016
	bool mbFinishedOnlineLobbyMode;

	// BrnModeManager.h:1017
	bool mbPersuitModeStartNextFrame;

	// BrnModeManager.h:1018
	bool mbPlayerCrashedLastFrame;

	// BrnModeManager.h:1019
	bool mbEventJustFinished;

	// BrnModeManager.h:1020
	bool mbIsInTimeUpOutro;

	// BrnModeManager.h:1021
	int32_t miFramesUntilModeSwitchSend;

	// BrnModeManager.h:1022
	float32_t mfTimeUpStateTimer;

	// BrnModeManager.h:1023
	int32_t miDebugFinishPosition;

	// BrnModeManager.h:1025
	float32_t mfTimeInFreeBurn;

	// BrnModeManager.h:1026
	float32_t mfTimeInMode;

	// BrnModeManager.h:1027
	float32_t mfTimeInOnline;

	// BrnModeManager.h:1030
	extern int32_t miPreWorldUpdatePM;

	// BrnModeManager.h:1031
	extern int32_t miPostWorldUpdatePM;

public:
	// BrnModeManager.h:122
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::NetworkRoundManager *, StreetManager *, MugshotManager *, const BrnGameState::RoadRulesManager *, StuntModeScoring::AchievementManager *);

	// BrnModeManager.h:128
	bool Prepare(const ChallengeList *, HeapMalloc *);

	// BrnModeManager.h:132
	bool Release();

	// BrnModeManager.h:136
	void Destruct();

	// BrnModeManager.h:150
	void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const TimerStatusInterface &, EActiveRaceCarIndex, EGlobalRaceCarIndex, bool, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:156
	void PostWorldUpdate(const PostWorldInputBuffer *, const LiveRevengeManager::TakedownEventQueue *, float32_t);

	// BrnModeManager.h:160
	void ProcessPlayerCrashes(const PostWorldInputBuffer *);

	// BrnModeManager.h:164
	void CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *);

	// BrnModeManager.h:168
	void PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:174
	void StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, StartGameModeParams *);

	// BrnModeManager.h:179
	bool IsInGameMode() const;

	// BrnModeManager.h:183
	bool IsInOfflineRaceMode() const;

	// BrnModeManager.h:188
	bool IsInProgress() const;

	// BrnModeManager.h:192
	bool IsInPreEvent() const;

	// BrnModeManager.h:196
	bool IsInPostEvent() const;

	// BrnModeManager.h:200
	BrnGameState::GameStateModuleIO::EGameModeType GetCurrentGameModeType() const;

	// BrnModeManager.h:204
	bool CurrentGameModeHasRoute() const;

	// BrnModeManager.h:208
	bool CurrentGameModeUsesNavigation() const;

	// BrnModeManager.h:212
	bool CurrentGameModeAllowsTakedowns() const;

	// BrnModeManager.h:216
	bool CurrentGameModeAllowsRevengeTakedowns() const;

	// BrnModeManager.h:220
	bool CurrentGameModeDisablesAftertouchTakedowns() const;

	// BrnModeManager.h:224
	bool CurrentGameModeDisablesUpcomingRoads() const;

	// BrnModeManager.h:227
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentGameModeState() const;

	// BrnModeManager.h:231
	bool WasPreviousGameModeOnlineFreeBurnLobby() const;

	// BrnModeManager.h:239
	void SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *, GameModeParams *, StartGameModeParams *);

	// BrnModeManager.h:245
	void FinishCurrentModeNextUpdate();

	// BrnModeManager.h:250
	void FinishCurrentModeNextUpdateWithFinishPosition(int32_t);

	// BrnModeManager.h:258
	void ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:262
	void ResultsAccept();

	// BrnModeManager.h:266
	void FinishedSplashScreen();

	// BrnModeManager.h:270
	void FinishedMapPan();

	// BrnModeManager.h:274
	void FinishOfflineModeIntro();

	// BrnModeManager.h:278
	void FinishedLoadingDataForMode();

	// BrnModeManager.h:284
	void UserCancelCurrentMode();

	// BrnModeManager.h:289
	void FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *);

	// BrnModeManager.h:293
	BrnGameState::ScoringSystem * GetScoringSystem();

	// BrnModeManager.h:296
	Random * GetRandom();

	// BrnModeManager.h:300
	const ScoringSystem * GetScoringSystem() const;

	// BrnModeManager.h:304
	BrnGameState::GameMode ** GetGameModePtrArray();

	// BrnModeManager.h:307
	const TriggerData * GetTriggerData() const;

	// BrnModeManager.h:310
	const BrnGameState::NetworkRoundManager * GetNetworkRoundManager() const;

	// BrnModeManager.h:313
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnModeManager.h:316
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnModeManager.h:319
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnModeManager.h:323
	TriggerQueryManager * DEBUG_GetTriggerQueryManager();

	// BrnModeManager.h:333
	void RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EGlobalRaceCarIndex, EActiveRaceCarIndex, LandmarkIndex, bool);

	// BrnModeManager.h:337
	LandmarkIndex GetPlayerCurrentLandmark() const;

	// BrnModeManager.h:342
	void SetAborted(bool);

	// BrnModeManager.h:346
	bool HasAborted() const;

	// BrnModeManager.h:351
	void SetAbortedDuringIntro(bool);

	// BrnModeManager.h:355
	void SetAbortedDueToDisconnect();

	// BrnModeManager.h:360
	void SetTimedOut(bool);

	// BrnModeManager.h:364
	bool HasTimedOut() const;

	// BrnModeManager.h:370
	void SetRivalShutDown(bool);

	// BrnModeManager.h:374
	bool HasRivalShutDown() const;

	// BrnModeManager.h:378
	bool HasCrashedOut() const;

	// BrnModeManager.h:383
	void SetCrashedOut(bool);

	// BrnModeManager.h:388
	void SetBeenEliminated(bool);

	// BrnModeManager.h:392
	bool HasBeenEliminated() const;

	// BrnModeManager.h:397
	void PlayerFinishedMode(const PlayerFinishedModeEvent *);

	// BrnModeManager.h:401
	bool IsPlayerInStartRegion() const;

	// BrnModeManager.h:404
	bool WasPlayerInStartRegionLastFrame() const;

	// BrnModeManager.h:408
	void SetPlayerIsInStartRegion(bool);

	// BrnModeManager.h:414
	void ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:421
	void StartModeIntro(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:426
	void SetModeStartFromRegionEnabled(bool);

	// BrnModeManager.h:429
	bool IsWaitingForModeDataToLoad() const;

	// BrnModeManager.h:432
	bool IsOnlineGameMode() const;

	// BrnModeManager.h:435
	bool IsOnlineFreeBurnLobby() const;

	// BrnModeManager.h:438
	CgsID GetCurrentRaceId() const;

	// BrnModeManager.h:441
	bool IsShowtimeGameMode() const;

	// BrnModeManager.h:444
	int32_t GetNumberOfCarsInFlyby();

	// BrnModeManager.h:448
	float32_t GetCountdownTimeForMode() const;

	// BrnModeManager.h:454
	void HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, LiveRevengeManager::TakedownEventQueue *);

	// BrnModeManager.h:461
	void SetStartingGrid(GameModeParams *, int32_t, bool) const;

	// BrnModeManager.h:469
	void SetupOnlineStartingGrid(GameModeParams *, int32_t, Random *, bool) const;

	// BrnModeManager.h:476
	void SetOnlineLandmarks(GameModeParams *, const StartNetworkRoundEvent *, int32_t) const;

	// BrnModeManager.h:483
	void SetOnlineRaceCars(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:489
	void SetTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *) const;

	// BrnModeManager.h:496
	void SetOnlineRoadRageTeamsGameParams(GameModeParams *, const StartNetworkGameEvent *, int32_t) const;

	// BrnModeManager.h:502
	int32_t ChooseStartGridIndex(const Landmark *, const Landmark *) const;

	// BrnModeManager.h:509
	int32_t GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:514
	int32_t GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *);

	// BrnModeManager.h:519
	int32_t GetPursuitThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:524
	int32_t GetRoadRageThresholdForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:529
	int32_t GetRoadRageTargetForActiveRaceCar(EActiveRaceCarIndex, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnModeManager.h:533
	const GameModeParams * GetCurrentGameModeParams() const;

	// BrnModeManager.h:537
	bool IsWaitingForActiveRaceCars() const;

	// BrnModeManager.h:542
	void SetupPathfinding(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:548
	void SetUpCheckPointsForGameMode(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnModeManager.h:552
	bool IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:557
	void SetupOpponentData(const StartGameModeParams *, GameModeParams *);

	// BrnModeManager.h:561
	void SetupCheckpointDistricts(GameModeParams *);

	// BrnModeManager.h:566
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId) const;

	// BrnModeManager.h:572
	void HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:579
	void HandleNewHostEvent(const OnlineNewHostEvent *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnModeManager.h:584
	void HandleLoadingScreenLoaded(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:587
	uint32_t GetRoadRageTakedownTarget();

	// BrnModeManager.h:594
	void TriggerFreeburnChallenge(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:599
	void CancelFreeburnChallenge(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:604
	void OutputFreeburnChallengeEveryPlayerStatusEvent(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:608
	void OnProfileLoaded();

	// BrnModeManager.h:615
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:624
	void HandleLocalStartFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool);

	// BrnModeManager.h:631
	void HandleRemoteStartFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:637
	void HandleRemoteTriggeredFreeburnChallengeMessage(CgsID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:643
	void HandleOnlineEndFreeburnChallengeMessage(OutputBuffer::GameActionQueue *, BrnGameState::EChallengeStatus, bool);

	// BrnModeManager.h:649
	void HandleSuccessUpdateEvent(const TimerStatusInterface *, const FburnChallengeSuccessUpdateEvent *);

	// BrnModeManager.h:654
	void HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *);

	// BrnModeManager.h:659
	void HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *);

	// BrnModeManager.h:662
	CgsID GetCurrentFreeburnChallengeID();

	// BrnModeManager.h:669
	void GetChallengeDescription(CgsID, char *, int32_t) const;

	// BrnModeManager.h:673
	bool ShouldForcePersuitNextFrame();

	// BrnModeManager.h:677
	HUDMessageLogic * GetHUDMessageLogic();

	// BrnModeManager.h:686
	void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, CgsID, Road::ChallengeIndex);

	// BrnModeManager.h:691
	void OnEnterRoad(SpanBase::RoadIndex);

	// BrnModeManager.h:697
	void HandleWorldStunt(BrnGameState::StuntElementType, CgsID);

	// BrnModeManager.h:704
	void NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:711
	void NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:718
	void NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID, OutputBuffer::GameActionQueue *, bool);

	// BrnModeManager.h:723
	void LocalPlayerDisconnected(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:726
	BrnGameState::GameMode * GetCurrentGameMode() const;

	// BrnModeManager.h:730
	void MarkedManLoaded(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:735
	void ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType, const CgsModule::Event *);

	// BrnModeManager.h:738
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// BrnModeManager.h:741
	bool IsChallengeActive() const;

	// BrnModeManager.h:746
	void RemoteRaceCarHitsCheckpoint(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnModeManager.h:749
	bool HasPlayerJustFinished() const;

	// BrnModeManager.h:753
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnModeManager.h:756
	void LeftOnlinePostEvent();

	// BrnModeManager.h:759
	const TrafficData * GetTrafficData();

	// BrnModeManager.h:762
	float32_t GetTimeInFreeBurn() const;

	// BrnModeManager.h:765
	float32_t GetTimeInMode() const;

	// BrnModeManager.h:769
	Vector3 GetCheckpointPosition(uint32_t) const;

private:
	// BrnModeManager.h:786
	void UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const InGamePlayerStatusInterface *, EActiveRaceCarIndex, bool, OutputBuffer::GameActionQueue *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool);

	// BrnModeManager.h:791
	void UpdateCheckpointDistanceRequests(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:799
	void FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *, const Time &);

	// BrnModeManager.h:804
	void CheckCountdownDisplay(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:812
	void PrepareForMode(OutputBuffer::GameActionQueue *, GameModeParams *, int32_t, StartGameModeParams *);

	// BrnModeManager.h:817
	void UpdateConsecutiveLosses(bool);

	// BrnModeManager.h:822
	void StopModeIntro(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:828
	void StartPlayingMode(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:833
	void SendFinishedModeAction(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:840
	void SendModeStopMessages(OutputBuffer::GameActionQueue *, bool, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnModeManager.h:844
	int32_t GetPlayersFinishPosition();

	// BrnModeManager.h:847
	bool HasPlayerFinished() const;

	// BrnModeManager.h:852
	void PlayerTriggersLandmark(LandmarkIndex);

	// BrnModeManager.h:859
	void RaceCarFinishes(EGlobalRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnModeManager.h:864
	void ResetNextLandmarks(bool);

	// BrnModeManager.h:868
	void ClearLandmarkAndFinishLineData();

	// BrnModeManager.h:874
	void TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *, ScoringSystem &);

	// BrnModeManager.h:878
	void TransmitAndIncrementCheckPointsReached(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:882
	void TransmitAndIncrementFinishReached(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:888
	void HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *, const LiveRevengeManager::TakedownEventQueue *, OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:891
	void HandleOnlineTeamCheckForModeFinished();

	// BrnModeManager.h:894
	void HandleOnlineBurningHomeRunCheckForModeFinished();

	// BrnModeManager.h:899
	void SendGameResultsToNetwork(OutputBuffer::GameActionQueue *);

	// BrnModeManager.h:902
	uint16_t GetLastLandmarkIndex();

}

