// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct HUDMessageLogic {
		// BrnHUDMessageLogic.h:244
		struct BufferedCrashingCar {
			// BrnHUDMessageLogic.h:246
			CgsID mRivalID;

			// BrnHUDMessageLogic.h:247
			float32_t mfTimeUntilUnbuffered;

			// BrnHUDMessageLogic.h:248
			EActiveRaceCarIndex meActiveRaceCarIndex;

		}

	}

}

// BrnHUDMessageLogic.h:47
struct BrnGameState::HUDMessageLogic {
	// BrnGameActions.h:513
	typedef BaseGameActionQueue<256> SmallGameActionQueue;

private:
	// BrnHUDMessageLogic.h:262
	HUDMessageLogic::SmallGameActionQueue mActionQueue;

	// BrnHUDMessageLogic.h:265
	ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t> mBufferedCrashingCars;

	// BrnHUDMessageLogic.h:268
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnHUDMessageLogic.h:271
	float32_t mfTimeSinceModeStarted;

	// BrnHUDMessageLogic.h:274
	EActiveRaceCarIndex meFinishedRaceCarIndex;

	// BrnHUDMessageLogic.h:275
	int32_t miFinishPosition;

	// BrnHUDMessageLogic.h:278
	CgsID mCurrentPlayerCheckpointID;

	// BrnHUDMessageLogic.h:279
	CgsID mNextPlayerCheckpointID;

	// BrnHUDMessageLogic.h:280
	bool mbIsLastCheckpoint;

	// BrnHUDMessageLogic.h:281
	bool mbPlayerHasJustTriggeredCheckpoint;

	// BrnHUDMessageLogic.h:284
	float_t mfNextMileBoundaryForMessage;

	// BrnHUDMessageLogic.h:285
	float_t mfNextKMBoundaryForMessage;

	// BrnHUDMessageLogic.h:286
	float_t mfBlueTeamIsAheadTime;

	// BrnHUDMessageLogic.h:287
	float_t mfBlueTeamIsBehindTime;

	// BrnHUDMessageLogic.h:288
	Time mTimeSinceNewLeader;

	// BrnHUDMessageLogic.h:289
	Time mTimeSinceNewLast;

	// BrnHUDMessageLogic.h:292
	int32_t miNextRivalCheckpoint;

	// BrnHUDMessageLogic.h:293
	EActiveRaceCarIndex meCheckpointTriggeringRaceCarIndex;

	// BrnHUDMessageLogic.h:294
	CgsID mRivalCheckpointID;

	// BrnHUDMessageLogic.h:297
	bool mbDoneNeckAndNeck;

	// BrnHUDMessageLogic.h:300
	BitArray<8u> mOnlineTeamChangedBitArray;

	// BrnHUDMessageLogic.h:303
	EActiveRaceCarIndex meBurningHomeRunRunnerIndex;

	// BrnHUDMessageLogic.h:304
	int32_t miNumberOfRunnerCrashesRemaining;

	// BrnHUDMessageLogic.h:307
	float32_t mfNextDistanceToFinishMessage;

	// BrnHUDMessageLogic.h:310
	float32_t mfWrongWayTime;

public:
	// BrnHUDMessageLogic.h:52
	void Construct();

	// BrnHUDMessageLogic.h:57
	void PreWorldUpdate(InputBuffer::GameActionQueue *);

	// BrnHUDMessageLogic.h:69
	void PostWorldUpdate(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const VehicleOutputInterface *, const InputBuffer::TakedownEventQueue *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:73
	void Destruct();

	// BrnHUDMessageLogic.h:79
	void HandleRaceCarFinishing(EActiveRaceCarIndex, int32_t);

	// BrnHUDMessageLogic.h:86
	void PlayerReachesCheckpoint(CgsID, CgsID, bool);

	// BrnHUDMessageLogic.h:94
	void RaceCarReachesCheckpoint(CgsID, EActiveRaceCarIndex, int32_t, int32_t);

	// BrnHUDMessageLogic.h:99
	void RaceCarReachesBHRCheckpoint(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:104
	void OnlineTeamChange(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:110
	void BurningHomeRunRunnerCrashes(int32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:113
	void SendQuitMessageNextFrame();

private:
	// BrnHUDMessageLogic.h:118
	void OnGameModeChange();

	// BrnHUDMessageLogic.h:128
	void GenerateRaceModeMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const InputBuffer::TakedownEventQueue *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:133
	void GenerateBurningHomeRunMessages(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:138
	void GenerateLeaderMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:143
	void DetectNeckAndNeck(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:147
	void GenerateFinisherMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:150
	void GeneratePlayerCheckpointMessage();

	// BrnHUDMessageLogic.h:155
	void GenerateRivalCheckpointMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:160
	void DetectCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnHUDMessageLogic.h:166
	void DetectOnlineCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, float32_t);

	// BrnHUDMessageLogic.h:173
	void GenerateWrongWayMessage(BrnGameState::ScoringSystem *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:178
	void GenerateStuntMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:183
	void GenerateBurningHomeRunCheckpointMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:187
	void GenerateBurningHomeRunRunnerCrashMessage();

	// BrnHUDMessageLogic.h:193
	void GenerateOnlineTeamChangeMessages(const VehicleOutputInterface *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:199
	void GenerateOnlineBlueTeamEscapingMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:205
	void GenerateOnlineBlueTeamAreBehindYouMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:212
	void GenerateOnlineLeaderMilestoneMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:219
	void GenerateFirstOrLastMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:224
	void GenerateDistanceToFinishMessage(BrnGameState::ScoringSystem *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:229
	void GenerateCriticalDamageMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:233
	void RemoveCrashingMessagesForTakendownPlayers(const InputBuffer::TakedownEventQueue *);

}

// BrnHUDMessageLogic.h:47
struct BrnGameState::HUDMessageLogic {
	// BrnGameActions.h:513
	typedef BaseGameActionQueue<256> SmallGameActionQueue;

private:
	// BrnHUDMessageLogic.h:262
	HUDMessageLogic::SmallGameActionQueue mActionQueue;

	// BrnHUDMessageLogic.h:265
	ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t> mBufferedCrashingCars;

	// BrnHUDMessageLogic.h:268
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnHUDMessageLogic.h:271
	float32_t mfTimeSinceModeStarted;

	// BrnHUDMessageLogic.h:274
	EActiveRaceCarIndex meFinishedRaceCarIndex;

	// BrnHUDMessageLogic.h:275
	int32_t miFinishPosition;

	// BrnHUDMessageLogic.h:278
	CgsID mCurrentPlayerCheckpointID;

	// BrnHUDMessageLogic.h:279
	CgsID mNextPlayerCheckpointID;

	// BrnHUDMessageLogic.h:280
	bool mbIsLastCheckpoint;

	// BrnHUDMessageLogic.h:281
	bool mbPlayerHasJustTriggeredCheckpoint;

	// BrnHUDMessageLogic.h:284
	float_t mfNextMileBoundaryForMessage;

	// BrnHUDMessageLogic.h:285
	float_t mfNextKMBoundaryForMessage;

	// BrnHUDMessageLogic.h:286
	float_t mfBlueTeamIsAheadTime;

	// BrnHUDMessageLogic.h:287
	float_t mfBlueTeamIsBehindTime;

	// BrnHUDMessageLogic.h:288
	Time mTimeSinceNewLeader;

	// BrnHUDMessageLogic.h:289
	Time mTimeSinceNewLast;

	// BrnHUDMessageLogic.h:292
	int32_t miNextRivalCheckpoint;

	// BrnHUDMessageLogic.h:293
	EActiveRaceCarIndex meCheckpointTriggeringRaceCarIndex;

	// BrnHUDMessageLogic.h:294
	CgsID mRivalCheckpointID;

	// BrnHUDMessageLogic.h:297
	bool mbDoneNeckAndNeck;

	// BrnHUDMessageLogic.h:300
	BitArray<8u> mOnlineTeamChangedBitArray;

	// BrnHUDMessageLogic.h:303
	EActiveRaceCarIndex meBurningHomeRunRunnerIndex;

	// BrnHUDMessageLogic.h:304
	int32_t miNumberOfRunnerCrashesRemaining;

	// BrnHUDMessageLogic.h:307
	float32_t mfNextDistanceToFinishMessage;

	// BrnHUDMessageLogic.h:310
	float32_t mfWrongWayTime;

public:
	// BrnHUDMessageLogic.h:52
	void Construct();

	// BrnHUDMessageLogic.h:57
	void PreWorldUpdate(OutputBuffer::GameActionQueue *);

	// BrnHUDMessageLogic.h:69
	void PostWorldUpdate(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const VehicleOutputInterface *, const InputBuffer::TakedownEventQueue *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:73
	void Destruct();

	// BrnHUDMessageLogic.h:79
	void HandleRaceCarFinishing(EActiveRaceCarIndex, int32_t);

	// BrnHUDMessageLogic.h:86
	void PlayerReachesCheckpoint(CgsID, CgsID, bool);

	// BrnHUDMessageLogic.h:94
	void RaceCarReachesCheckpoint(CgsID, EActiveRaceCarIndex, int32_t, int32_t);

	// BrnHUDMessageLogic.h:99
	void RaceCarReachesBHRCheckpoint(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:104
	void OnlineTeamChange(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:110
	void BurningHomeRunRunnerCrashes(int32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:113
	void SendQuitMessageNextFrame();

private:
	// BrnHUDMessageLogic.h:118
	void OnGameModeChange();

	// BrnHUDMessageLogic.h:128
	void GenerateRaceModeMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const InputBuffer::TakedownEventQueue *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:133
	void GenerateBurningHomeRunMessages(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:138
	void GenerateLeaderMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:143
	void DetectNeckAndNeck(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:147
	void GenerateFinisherMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:150
	void GeneratePlayerCheckpointMessage();

	// BrnHUDMessageLogic.h:155
	void GenerateRivalCheckpointMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:160
	void DetectCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnHUDMessageLogic.h:166
	void DetectOnlineCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, float32_t);

	// BrnHUDMessageLogic.h:173
	void GenerateWrongWayMessage(BrnGameState::ScoringSystem *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:178
	void GenerateStuntMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:183
	void GenerateBurningHomeRunCheckpointMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:187
	void GenerateBurningHomeRunRunnerCrashMessage();

	// BrnHUDMessageLogic.h:193
	void GenerateOnlineTeamChangeMessages(const VehicleOutputInterface *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:199
	void GenerateOnlineBlueTeamEscapingMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:205
	void GenerateOnlineBlueTeamAreBehindYouMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:212
	void GenerateOnlineLeaderMilestoneMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:219
	void GenerateFirstOrLastMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:224
	void GenerateDistanceToFinishMessage(BrnGameState::ScoringSystem *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:229
	void GenerateCriticalDamageMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:233
	void RemoveCrashingMessagesForTakendownPlayers(const InputBuffer::TakedownEventQueue *);

}

// BrnHUDMessageLogic.h:47
struct BrnGameState::HUDMessageLogic {
	// BrnGameActions.h:513
	typedef BaseGameActionQueue<256> SmallGameActionQueue;

private:
	// BrnHUDMessageLogic.h:262
	HUDMessageLogic::SmallGameActionQueue mActionQueue;

	// BrnHUDMessageLogic.h:265
	ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t> mBufferedCrashingCars;

	// BrnHUDMessageLogic.h:268
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnHUDMessageLogic.h:271
	float32_t mfTimeSinceModeStarted;

	// BrnHUDMessageLogic.h:274
	EActiveRaceCarIndex meFinishedRaceCarIndex;

	// BrnHUDMessageLogic.h:275
	int32_t miFinishPosition;

	// BrnHUDMessageLogic.h:278
	CgsID mCurrentPlayerCheckpointID;

	// BrnHUDMessageLogic.h:279
	CgsID mNextPlayerCheckpointID;

	// BrnHUDMessageLogic.h:280
	bool mbIsLastCheckpoint;

	// BrnHUDMessageLogic.h:281
	bool mbPlayerHasJustTriggeredCheckpoint;

	// BrnHUDMessageLogic.h:284
	float_t mfNextMileBoundaryForMessage;

	// BrnHUDMessageLogic.h:285
	float_t mfNextKMBoundaryForMessage;

	// BrnHUDMessageLogic.h:286
	float_t mfBlueTeamIsAheadTime;

	// BrnHUDMessageLogic.h:287
	float_t mfBlueTeamIsBehindTime;

	// BrnHUDMessageLogic.h:288
	Time mTimeSinceNewLeader;

	// BrnHUDMessageLogic.h:289
	Time mTimeSinceNewLast;

	// BrnHUDMessageLogic.h:292
	int32_t miNextRivalCheckpoint;

	// BrnHUDMessageLogic.h:293
	EActiveRaceCarIndex meCheckpointTriggeringRaceCarIndex;

	// BrnHUDMessageLogic.h:294
	CgsID mRivalCheckpointID;

	// BrnHUDMessageLogic.h:297
	bool mbDoneNeckAndNeck;

	// BrnHUDMessageLogic.h:300
	BitArray<8u> mOnlineTeamChangedBitArray;

	// BrnHUDMessageLogic.h:303
	EActiveRaceCarIndex meBurningHomeRunRunnerIndex;

	// BrnHUDMessageLogic.h:304
	int32_t miNumberOfRunnerCrashesRemaining;

	// BrnHUDMessageLogic.h:307
	float32_t mfNextDistanceToFinishMessage;

	// BrnHUDMessageLogic.h:310
	float32_t mfWrongWayTime;

public:
	// BrnHUDMessageLogic.h:52
	void Construct();

	// BrnHUDMessageLogic.h:57
	void PreWorldUpdate(OutputBuffer::GameActionQueue *);

	// BrnHUDMessageLogic.h:69
	void PostWorldUpdate(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const VehicleOutputInterface *, const LiveRevengeManager::TakedownEventQueue *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:73
	void Destruct();

	// BrnHUDMessageLogic.h:79
	void HandleRaceCarFinishing(EActiveRaceCarIndex, int32_t);

	// BrnHUDMessageLogic.h:86
	void PlayerReachesCheckpoint(CgsID, CgsID, bool);

	// BrnHUDMessageLogic.h:94
	void RaceCarReachesCheckpoint(CgsID, EActiveRaceCarIndex, int32_t, int32_t);

	// BrnHUDMessageLogic.h:99
	void RaceCarReachesBHRCheckpoint(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:104
	void OnlineTeamChange(EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:110
	void BurningHomeRunRunnerCrashes(int32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:113
	void SendQuitMessageNextFrame();

private:
	// BrnHUDMessageLogic.h:118
	void OnGameModeChange();

	// BrnHUDMessageLogic.h:128
	void GenerateRaceModeMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, const LiveRevengeManager::TakedownEventQueue *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:133
	void GenerateBurningHomeRunMessages(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:138
	void GenerateLeaderMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:143
	void DetectNeckAndNeck(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:147
	void GenerateFinisherMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:150
	void GeneratePlayerCheckpointMessage();

	// BrnHUDMessageLogic.h:155
	void GenerateRivalCheckpointMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:160
	void DetectCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnHUDMessageLogic.h:166
	void DetectOnlineCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, float32_t);

	// BrnHUDMessageLogic.h:173
	void GenerateWrongWayMessage(BrnGameState::ScoringSystem *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex, float32_t);

	// BrnHUDMessageLogic.h:178
	void GenerateStuntMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:183
	void GenerateBurningHomeRunCheckpointMessage(BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:187
	void GenerateBurningHomeRunRunnerCrashMessage();

	// BrnHUDMessageLogic.h:193
	void GenerateOnlineTeamChangeMessages(const VehicleOutputInterface *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:199
	void GenerateOnlineBlueTeamEscapingMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:205
	void GenerateOnlineBlueTeamAreBehindYouMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:212
	void GenerateOnlineLeaderMilestoneMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, bool);

	// BrnHUDMessageLogic.h:219
	void GenerateFirstOrLastMessage(BrnGameState::ScoringSystem *, float32_t, EActiveRaceCarIndex, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnHUDMessageLogic.h:224
	void GenerateDistanceToFinishMessage(BrnGameState::ScoringSystem *, EActiveRaceCarIndex);

	// BrnHUDMessageLogic.h:229
	void GenerateCriticalDamageMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::ScoringSystem *);

	// BrnHUDMessageLogic.h:233
	void RemoveCrashingMessagesForTakendownPlayers(const LiveRevengeManager::TakedownEventQueue *);

}

