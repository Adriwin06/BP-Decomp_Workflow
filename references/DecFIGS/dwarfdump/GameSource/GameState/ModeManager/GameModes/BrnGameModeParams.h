// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameModeParams.h:41
	enum EGameModeStartMechanism {
		E_GAMEMODESTARTMECHANISM_DEFAULT = 0,
		E_GAMEMODESTARTMECHANISM_SPIN_WHEELS_ANYWHERE = 1,
		E_GAMEMODESTARTMECHANISM_SPIN_WHEELS_AT_LIGHTS = 2,
		E_GAMEMODESTARTMECHANISM_OVERTAKE_RIVAL = 3,
		E_GAMEMODESTARTMECHANISM_COUNT = 4,
	}

}

// BrnGameModeParams.h:55
struct BrnGameState::StartLocation {
	// BrnGameModeParams.h:57
	Vector3 mPosition;

	// BrnGameModeParams.h:58
	Vector3 mDirection;

}

// BrnGameModeParams.h:62
struct BrnGameState::CheckpointData {
private:
	// BrnGameModeParams.h:92
	LandmarkIndex muLandmarkIndex;

	// BrnGameModeParams.h:93
	uint16_t muAISectionIndex;

	// BrnGameModeParams.h:94
	BrnWorld::EDistrict meDistrict;

	// BrnGameModeParams.h:95
	Array<std::uint32_t,8u> mauBlockSectionIds;

public:
	// BrnGameModeParams.h:69
	void Construct(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:73
	void AddBlockSectionId(uint32_t);

	// BrnGameModeParams.h:77
	void SetDistrict(BrnWorld::EDistrict);

	// BrnGameModeParams.h:80
	LandmarkIndex GetLandmarkIndex() const;

	// BrnGameModeParams.h:83
	uint16_t GetAISectionIndex() const;

	// BrnGameModeParams.h:86
	BrnWorld::EDistrict GetDistrict() const;

	// BrnGameModeParams.h:89
	const Array<std::uint32_t,8u> * GetBlockSectionIds() const;

}

// BrnGameModeParams.h:112
struct BrnGameState::OpponentData {
private:
	// BrnGameModeParams.h:134
	CgsID mCarModelId;

	// BrnGameModeParams.h:135
	EventStartGridSlot mStartGridSlot;

	// BrnGameModeParams.h:136
	OpponentBalanceData mRaceBalanceData;

	// BrnGameModeParams.h:137
	EventRacerPersonality mPersonality;

public:
	// BrnGameModeParams.h:119
	void Construct(CgsID, const EventStartGridSlot *, const OpponentBalanceData *, const EventRacerPersonality *);

	// BrnGameModeParams.h:122
	CgsID GetCarModelId() const;

	// BrnGameModeParams.h:125
	const EventStartGridSlot * GetStartGridSlot() const;

	// BrnGameModeParams.h:128
	const OpponentBalanceData * GetRaceBalanceData() const;

	// BrnGameModeParams.h:131
	const EventRacerPersonality * GetPersonality() const;

}

// BrnGameModeParams.h:153
struct BrnGameState::StartGameModeParams {
	// BrnGameModeParams.h:99
	typedef Array<BrnGameState::CheckpointData,16u> CheckpointDataArray;

private:
	// BrnGameModeParams.h:303
	StartGameModeParams::CheckpointDataArray maCheckpointDataArray;

	// BrnGameModeParams.h:304
	CgsID miRaceId;

	// BrnGameModeParams.h:305
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGameModeParams.h:306
	Vector3 mPlayerPosition;

	// BrnGameModeParams.h:307
	Vector3 mStartDirection;

	// BrnGameModeParams.h:308
	int32_t miTakedownTarget;

	// BrnGameModeParams.h:309
	EGlobalRaceCarIndex mePursuedCarGlobalIndex;

	// BrnGameModeParams.h:310
	CgsID mPursuedCarID;

	// BrnGameModeParams.h:311
	BrnGameState::EGameModeStartMechanism meStartMechanism;

	// BrnGameModeParams.h:312
	LightTriggerId mTrafficLightTriggerId;

	// BrnGameModeParams.h:314
	float32_t mfTrafficDensity;

	// BrnGameModeParams.h:315
	float32_t mfBoostEarning;

	// BrnGameModeParams.h:317
	int32_t miShotGroup;

	// BrnGameModeParams.h:319
	float32_t mfPlayerBaseDeformation;

	// BrnGameModeParams.h:321
	uint32_t muEventJunctionId;

	// BrnGameModeParams.h:322
	const BrnProgression::RaceEventData * mpEventData;

	// BrnGameModeParams.h:323
	uint32_t muJunctionID;

	// BrnGameModeParams.h:324
	const ProgressionRankData * mpProgressionRankData;

	// BrnGameModeParams.h:325
	float32_t mfProgressionRankAsRatio;

	// BrnGameModeParams.h:327
	const VehicleListEntry * mpPlayerCarVehicleListEntry;

public:
	// BrnGameModeParams.h:159
	void Construct(BrnGameState::GameStateModuleIO::EGameModeType, Vector3, BrnGameState::EGameModeStartMechanism);

	// BrnGameModeParams.h:164
	void AddCheckpoint(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:167
	BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

	// BrnGameModeParams.h:171
	void SetRaceId(CgsID);

	// BrnGameModeParams.h:174
	CgsID GetRaceId() const;

	// BrnGameModeParams.h:178
	void SetPlayerPosition(Vector3);

	// BrnGameModeParams.h:182
	void SetStartDirection(Vector3);

	// BrnGameModeParams.h:185
	Vector3 GetPlayerPosition() const;

	// BrnGameModeParams.h:188
	Vector3 GetStartDirection() const;

	// BrnGameModeParams.h:191
	BrnGameState::EGameModeStartMechanism GetStartMechanism() const;

	// BrnGameModeParams.h:195
	void SetTrafficDensity(float32_t);

	// BrnGameModeParams.h:198
	float32_t GetTrafficDensity() const;

	// BrnGameModeParams.h:202
	void SetBoostEarning(float32_t);

	// BrnGameModeParams.h:205
	float32_t GetBoostEarning() const;

	// BrnGameModeParams.h:209
	void SetShotGroup(int32_t);

	// BrnGameModeParams.h:212
	int32_t GetShotGroup() const;

	// BrnGameModeParams.h:216
	void SetTrafficLightTriggerId(LightTriggerId);

	// BrnGameModeParams.h:219
	LightTriggerId GetTrafficLightTriggerId() const;

	// BrnGameModeParams.h:222
	int32_t GetCheckpointCount() const;

	// BrnGameModeParams.h:226
	const CheckpointData * GetCheckpointData(int32_t) const;

	// BrnGameModeParams.h:229
	const StartGameModeParams::CheckpointDataArray * GetCheckpoints() const;

	// BrnGameModeParams.h:232
	int32_t GetTakedownTarget() const;

	// BrnGameModeParams.h:236
	void SetTakedownTarget(int32_t);

	// BrnGameModeParams.h:240
	void SetPursuedCarGlobalIndex(EGlobalRaceCarIndex);

	// BrnGameModeParams.h:243
	EGlobalRaceCarIndex GetPursuedCarGlobalIndex() const;

	// BrnGameModeParams.h:247
	void SetPursuedCarID(CgsID);

	// BrnGameModeParams.h:250
	CgsID GetPursuedCarID() const;

	// BrnGameModeParams.h:254
	void SetEventJunctionId(uint32_t);

	// BrnGameModeParams.h:257
	uint32_t GetEventJunctionId() const;

	// BrnGameModeParams.h:261
	void SetEventData(const BrnProgression::RaceEventData *);

	// BrnGameModeParams.h:264
	const BrnProgression::RaceEventData * GetEventData() const;

	// BrnGameModeParams.h:268
	void SetProgressionRankData(const ProgressionRankData *);

	// BrnGameModeParams.h:271
	const ProgressionRankData * GetProgressionRankData() const;

	// BrnGameModeParams.h:275
	void SetJunctionID(uint32_t);

	// BrnGameModeParams.h:278
	uint32_t GetJunctionID() const;

	// BrnGameModeParams.h:283
	void SetPlayerVehicleGamePlayData(const VehicleListEntry *);

	// BrnGameModeParams.h:286
	const VehicleListEntry * GetPlayerVehicleGamePlayData() const;

	// BrnGameModeParams.h:289
	float32_t GetProgressionRankAsRatio() const;

	// BrnGameModeParams.h:293
	// Declaration
	void SetProgressionRankAsRatio(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameModeParams.h:960
		using namespace CgsDev::Message;

	}

	// BrnGameModeParams.h:296
	float32_t GetPlayerBaseDeformation() const;

	// BrnGameModeParams.h:300
	void SetPlayerBaseDeformation(float32_t);

}

// BrnGameModeParams.h:340
struct BrnGameState::GameModeParams {
	// BrnGameModeParams.h:344
	extern const uint64_t KU_FLAG_SET_CARS_TO_START_GRID = 1;

	// BrnGameModeParams.h:345
	extern const uint64_t KU_FLAG_REMOVE_RIVALS_FROM_WORLD = 2;

	// BrnGameModeParams.h:346
	extern const uint64_t KU_FLAG_DISABLE_CRASH_CLEAN_UP = 4;

	// BrnGameModeParams.h:347
	extern const uint64_t KU_FLAG_ENABLE_EASY_CRASHING = 8;

	// BrnGameModeParams.h:348
	extern const uint64_t KU_FLAG_PLAYER_MUST_BE_CRASHING = 16;

	// BrnGameModeParams.h:349
	extern const uint64_t KU_FLAG_WRAP_AI_CARS_WHEN_OUT_OF_RANGE = 32;

	// BrnGameModeParams.h:350
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_SWERVING = 64;

	// BrnGameModeParams.h:351
	extern const uint64_t KU_FLAG_SET_DIRECTOR_TO_CRASH_MODE_AFTER_INTRO = 128;

	// BrnGameModeParams.h:352
	extern const uint64_t KU_FLAG_ALLOW_CRASH_PLAY_CONTROLS = 256;

	// BrnGameModeParams.h:353
	extern const uint64_t KU_FLAG_USE_SHOWTIME_VEHICLE_BEHAVIOUR = 512;

	// BrnGameModeParams.h:354
	extern const uint64_t KU_FLAG_CAR_SELECT_ALLOWED = 1024;

	// BrnGameModeParams.h:355
	extern const uint64_t KU_FLAG_CLEAR_NEARBY_TRAFFIC = 2048;

	// BrnGameModeParams.h:356
	extern const uint64_t KU_FLAG_HARDCORE_TRAFFIC_SWERVING = 4096;

	// BrnGameModeParams.h:357
	extern const uint64_t KU_FLAG_HAS_ROUTE = 8192;

	// BrnGameModeParams.h:358
	extern const uint64_t KU_FLAG_AI_DRIVE_BY_START = 16384;

	// BrnGameModeParams.h:359
	extern const uint64_t KU_FLAG_USE_RACE_BALANCING = 32768;

	// BrnGameModeParams.h:360
	extern const uint64_t KU_FLAG_SET_ALL_CARS_TO_STARTING_AI_CONTROL = 65536;

	// BrnGameModeParams.h:361
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_RESET = 131072;

	// BrnGameModeParams.h:362
	extern const uint64_t KU_FLAG_RAPID_CRASHES = 262144;

	// BrnGameModeParams.h:363
	extern const uint64_t KU_FLAG_TRAFFIC_CHECKING_NOT_ALLOWED = 524288;

	// BrnGameModeParams.h:364
	extern const uint64_t KU_FLAG_DISABLE_UPCOMING_ROAD_SIGNS = 1048576;

	// BrnGameModeParams.h:365
	extern const uint64_t KU_FLAG_DISABLE_AFTERTOUCH_TDS = 2097152;

	// BrnGameModeParams.h:366
	extern const uint64_t KU_FLAG_DISABLE_ALL_TDS = 4194304;

	// BrnGameModeParams.h:367
	extern const uint64_t KU_FLAG_DISABLE_CRASH_EXTENSIONS = 8388608;

	// BrnGameModeParams.h:368
	extern const uint64_t KU_FLAG_LIMITED_CRASH_EXTENSIONS = 16777216;

	// BrnGameModeParams.h:369
	extern const uint64_t KU_FLAG_SHORT_CRASH_TIME = 33554432;

	// BrnGameModeParams.h:370
	extern const uint64_t KU_FLAG_ROLLING_START = 67108864;

	// BrnGameModeParams.h:371
	extern const uint64_t KU_FLAG_DONUT_START = 134217728;

	// BrnGameModeParams.h:372
	extern const uint64_t KU_FLAG_EASY_SMASH_PROPS = 268435456;

	// BrnGameModeParams.h:373
	extern const uint64_t KU_FLAG_USES_NAVIGATION = 536870912;

	// BrnGameModeParams.h:374
	extern const uint64_t KU_FLAG_AI_PERSISTENT_DAMAGE = 1073741824;

	// BrnGameModeParams.h:375
	extern const uint64_t KU_FLAG_AI_RESET_ON_TRACK_BEHIND = 2147483648;

	// BrnGameModeParams.h:376
	extern const uint64_t KU_FLAG_DISABLE_PROP_PROGRESSION;

	// BrnGameModeParams.h:377
	extern const uint64_t KU_FLAG_ENFORCE_SOFT_TAKEDOWNS;

	// BrnGameModeParams.h:378
	extern const uint64_t KU_FLAG_SET_OPPONENTS_TO_COPS;

	// BrnGameModeParams.h:379
	extern const uint64_t KU_FLAG_ALLOW_REVENGE_TAKEDOWNS;

	// BrnGameModeParams.h:503
	int8_t miNumRivals;

	// BrnGameModeParams.h:504
	int8_t miNumNetworkPlayers;

	// BrnGameModeParams.h:505
	float32_t mfProgressionRankAsRatio;

	// BrnGameModeParams.h:506
	RoadRulesRecvData::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameModeParams.h:509
	CgsID mSpecialEventCarId;

	// BrnGameModeParams.h:510
	float32_t mfTrafficDensityScale;

	// BrnGameModeParams.h:511
	float32_t mfLargeVehicleProbability;

	// BrnGameModeParams.h:512
	float32_t mfTrafficSpeedScale;

	// BrnGameModeParams.h:513
	BrnGameState::EGameModeStartMechanism meStartMechanism;

	// BrnGameModeParams.h:514
	LightTriggerId mTrafficLightTriggerId;

	// BrnGameModeParams.h:515
	uint32_t muEventJunctionID;

	// BrnGameModeParams.h:516
	uint32_t muJunctionID;

	// BrnGameModeParams.h:519
	int32_t miRoadRageThreshold;

	// BrnGameModeParams.h:520
	int32_t miPursuitRivalTotalDamage;

	// BrnGameModeParams.h:521
	EGlobalRaceCarIndex mePursuedCarGlobalIndex;

	// BrnGameModeParams.h:522
	CgsID mPursuedCarID;

	// BrnGameModeParams.h:524
	float32_t mfOnlineFreeburnDeformationAmount;

	// BrnGameModeParams.h:526
	float32_t mfNeedForBronze;

	// BrnGameModeParams.h:527
	float32_t mfNeedForSilver;

	// BrnGameModeParams.h:528
	float32_t mfNeedForGold;

	// BrnGameModeParams.h:530
	float32_t mfModeTimeLimit;

	// BrnGameModeParams.h:532
	uint8_t muDifficultyLevel;

	// BrnGameModeParams.h:534
	float32_t[8] mfOvertakingDifficulty;

	// BrnGameModeParams.h:537
	bool mbIsOnline;

	// BrnGameModeParams.h:538
	CgsID[8] maModelIds;

	// BrnGameModeParams.h:539
	uint16_t[8] mau16CarColourIndex;

	// BrnGameModeParams.h:540
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameModeParams.h:541
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameModeParams.h:542
	RoadRulesRecvData::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameModeParams.h:543
	bool mbInfiniteBoost;

	// BrnGameModeParams.h:544
	BrnNetwork::EBoostType meOnlineBoostStrategy;

	// BrnGameModeParams.h:546
	uint32_t muNumberOfCheckpointsInEvent;

private:
	// BrnGameModeParams.h:550
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// Unknown accessibility
	// BrnGameModeParams.h:98
	typedef Array<BrnGameState::StartLocation,8u> StartLocationArray;

	// BrnGameModeParams.h:553
	GameModeParams::StartLocationArray maStartLocations;

	// BrnGameModeParams.h:556
	StartGameModeParams::CheckpointDataArray maCheckpointDataArray;

	// Unknown accessibility
	// BrnGameModeParams.h:140
	typedef Array<BrnGameState::OpponentData,7u> OpponentDataArray;

	// BrnGameModeParams.h:559
	GameModeParams::OpponentDataArray maOpponentData;

	// BrnGameModeParams.h:562
	BrnAI::ERouteFindingStyle meDefaultPlayerRouteFindingStyle;

	// BrnGameModeParams.h:563
	BrnAI::ERouteFindingStyle meDefaultAIRouteFindingStyle;

	// BrnGameModeParams.h:564
	BrnAI::EAISpeedSelectionMethod meAISpeedSelectionMethod;

	// BrnGameModeParams.h:565
	int32_t miAIAggressiveCarCount;

	// BrnGameModeParams.h:566
	float32_t mfOnlineModeTimeLimit;

	// BrnGameModeParams.h:567
	BrnAI::AStarDistanceFunction meAStarDistanceFunction;

	// BrnGameModeParams.h:570
	int32_t miPlayerWreckCount;

	// BrnGameModeParams.h:573
	uint64_t muFlags;

public:
	// BrnGameModeParams.h:383
	void Construct(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameModeParams.h:388
	void AddCheckpoint(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:391
	int32_t GetCheckpointCount() const;

	// BrnGameModeParams.h:395
	const CheckpointData * GetCheckpointData(int32_t) const;

	// BrnGameModeParams.h:399
	CheckpointData * GetCheckpointData(int32_t);

	// BrnGameModeParams.h:403
	void AddOpponentData(const OpponentData *);

	// BrnGameModeParams.h:406
	int32_t GetOpponentCount() const;

	// BrnGameModeParams.h:410
	const OpponentData * GetOpponentData(int32_t) const;

	// BrnGameModeParams.h:414
	void AddBlockSectionId(AISection::AISectionId);

	// BrnGameModeParams.h:417
	BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

	// BrnGameModeParams.h:422
	void AddStartLocation(Vector3, Vector3);

	// BrnGameModeParams.h:426
	Vector3 GetStartPosition(int32_t) const;

	// BrnGameModeParams.h:430
	Vector3 GetStartDirection(int32_t) const;

	// BrnGameModeParams.h:433
	int32_t GetStartLocationCount() const;

	// BrnGameModeParams.h:438
	void SetAISpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod);

	// BrnGameModeParams.h:442
	void SetDefaultPlayerRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:446
	void SetDefaultAIRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:450
	void SetAIAggresiveCarCount(int32_t);

	// BrnGameModeParams.h:454
	void SetOnlineTimeLimit(float32_t);

	// BrnGameModeParams.h:458
	void SetAStarDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnGameModeParams.h:461
	BrnAI::EAISpeedSelectionMethod GetAISpeedSelectionMethod() const;

	// BrnGameModeParams.h:464
	BrnAI::ERouteFindingStyle GetDefaultPlayerRouteFindingStyle() const;

	// BrnGameModeParams.h:467
	BrnAI::ERouteFindingStyle GetDefaultAIRouteFindingStyle() const;

	// BrnGameModeParams.h:470
	int32_t GetAIAggresiveCarCount() const;

	// BrnGameModeParams.h:473
	float32_t GetOnlineTimeLimit() const;

	// BrnGameModeParams.h:476
	BrnAI::AStarDistanceFunction GetAStarDistanceFunction() const;

	// BrnGameModeParams.h:479
	int32_t GetPlayerWreckCount() const;

	// BrnGameModeParams.h:483
	void SetPlayerWreckCount(int32_t);

	// BrnGameModeParams.h:488
	void SetFlag(uint64_t);

	// BrnGameModeParams.h:492
	bool GetFlag(uint64_t) const;

	// BrnGameModeParams.h:495
	uint64_t GetFlags() const;

	// BrnGameModeParams.h:498
	void SetOnlineFreeburnDeformationAmount(float32_t);

	// BrnGameModeParams.h:501
	float32_t GetOnlineFreeburnDeformationAmount() const;

}

// BrnGameModeParams.h:351
extern const uint64_t KU_FLAG_SET_DIRECTOR_TO_CRASH_MODE_AFTER_INTRO = 128;

// BrnGameModeParams.h:344
extern const uint64_t KU_FLAG_SET_CARS_TO_START_GRID = 1;

// BrnGameModeParams.h:345
extern const uint64_t KU_FLAG_REMOVE_RIVALS_FROM_WORLD = 2;

// BrnGameModeParams.h:349
extern const uint64_t KU_FLAG_WRAP_AI_CARS_WHEN_OUT_OF_RANGE = 32;

// BrnGameModeParams.h:352
extern const uint64_t KU_FLAG_ALLOW_CRASH_PLAY_CONTROLS = 256;

// BrnGameModeParams.h:353
extern const uint64_t KU_FLAG_USE_SHOWTIME_VEHICLE_BEHAVIOUR = 512;

// BrnGameModeParams.h:354
extern const uint64_t KU_FLAG_CAR_SELECT_ALLOWED = 1024;

// BrnGameModeParams.h:357
extern const uint64_t KU_FLAG_HAS_ROUTE = 8192;

// BrnGameModeParams.h:358
extern const uint64_t KU_FLAG_AI_DRIVE_BY_START = 16384;

// BrnGameModeParams.h:360
extern const uint64_t KU_FLAG_SET_ALL_CARS_TO_STARTING_AI_CONTROL = 65536;

// BrnGameModeParams.h:364
extern const uint64_t KU_FLAG_DISABLE_UPCOMING_ROAD_SIGNS = 1048576;

// BrnGameModeParams.h:365
extern const uint64_t KU_FLAG_DISABLE_AFTERTOUCH_TDS = 2097152;

// BrnGameModeParams.h:366
extern const uint64_t KU_FLAG_DISABLE_ALL_TDS = 4194304;

// BrnGameModeParams.h:370
extern const uint64_t KU_FLAG_ROLLING_START = 67108864;

// BrnGameModeParams.h:371
extern const uint64_t KU_FLAG_DONUT_START = 134217728;

// BrnGameModeParams.h:373
extern const uint64_t KU_FLAG_USES_NAVIGATION = 536870912;

// BrnGameModeParams.h:374
extern const uint64_t KU_FLAG_AI_PERSISTENT_DAMAGE = 1073741824;

// BrnGameModeParams.h:375
extern const uint64_t KU_FLAG_AI_RESET_ON_TRACK_BEHIND = 2147483648;

// BrnGameModeParams.h:378
extern const uint64_t KU_FLAG_SET_OPPONENTS_TO_COPS;

// BrnGameModeParams.h:379
extern const uint64_t KU_FLAG_ALLOW_REVENGE_TAKEDOWNS;

// BrnGameModeParams.h:346
extern const uint64_t KU_FLAG_DISABLE_CRASH_CLEAN_UP = 4;

// BrnGameModeParams.h:347
extern const uint64_t KU_FLAG_ENABLE_EASY_CRASHING = 8;

// BrnGameModeParams.h:348
extern const uint64_t KU_FLAG_PLAYER_MUST_BE_CRASHING = 16;

// BrnGameModeParams.h:355
extern const uint64_t KU_FLAG_CLEAR_NEARBY_TRAFFIC = 2048;

// BrnGameModeParams.h:356
extern const uint64_t KU_FLAG_HARDCORE_TRAFFIC_SWERVING = 4096;

// BrnGameModeParams.h:359
extern const uint64_t KU_FLAG_USE_RACE_BALANCING = 32768;

// BrnGameModeParams.h:361
extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_RESET = 131072;

// BrnGameModeParams.h:362
extern const uint64_t KU_FLAG_RAPID_CRASHES = 262144;

// BrnGameModeParams.h:363
extern const uint64_t KU_FLAG_TRAFFIC_CHECKING_NOT_ALLOWED = 524288;

// BrnGameModeParams.h:367
extern const uint64_t KU_FLAG_DISABLE_CRASH_EXTENSIONS = 8388608;

// BrnGameModeParams.h:372
extern const uint64_t KU_FLAG_EASY_SMASH_PROPS = 268435456;

// BrnGameModeParams.h:376
extern const uint64_t KU_FLAG_DISABLE_PROP_PROGRESSION;

// BrnGameModeParams.h:377
extern const uint64_t KU_FLAG_ENFORCE_SOFT_TAKEDOWNS;

// BrnGameModeParams.h:340
struct BrnGameState::GameModeParams {
	// BrnGameModeParams.h:344
	extern const uint64_t KU_FLAG_SET_CARS_TO_START_GRID = 1;

	// BrnGameModeParams.h:345
	extern const uint64_t KU_FLAG_REMOVE_RIVALS_FROM_WORLD = 2;

	// BrnGameModeParams.h:346
	extern const uint64_t KU_FLAG_DISABLE_CRASH_CLEAN_UP = 4;

	// BrnGameModeParams.h:347
	extern const uint64_t KU_FLAG_ENABLE_EASY_CRASHING = 8;

	// BrnGameModeParams.h:348
	extern const uint64_t KU_FLAG_PLAYER_MUST_BE_CRASHING = 16;

	// BrnGameModeParams.h:349
	extern const uint64_t KU_FLAG_WRAP_AI_CARS_WHEN_OUT_OF_RANGE = 32;

	// BrnGameModeParams.h:350
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_SWERVING = 64;

	// BrnGameModeParams.h:351
	extern const uint64_t KU_FLAG_SET_DIRECTOR_TO_CRASH_MODE_AFTER_INTRO = 128;

	// BrnGameModeParams.h:352
	extern const uint64_t KU_FLAG_ALLOW_CRASH_PLAY_CONTROLS = 256;

	// BrnGameModeParams.h:353
	extern const uint64_t KU_FLAG_USE_SHOWTIME_VEHICLE_BEHAVIOUR = 512;

	// BrnGameModeParams.h:354
	extern const uint64_t KU_FLAG_CAR_SELECT_ALLOWED = 1024;

	// BrnGameModeParams.h:355
	extern const uint64_t KU_FLAG_CLEAR_NEARBY_TRAFFIC = 2048;

	// BrnGameModeParams.h:356
	extern const uint64_t KU_FLAG_HARDCORE_TRAFFIC_SWERVING = 4096;

	// BrnGameModeParams.h:357
	extern const uint64_t KU_FLAG_HAS_ROUTE = 8192;

	// BrnGameModeParams.h:358
	extern const uint64_t KU_FLAG_AI_DRIVE_BY_START = 16384;

	// BrnGameModeParams.h:359
	extern const uint64_t KU_FLAG_USE_RACE_BALANCING = 32768;

	// BrnGameModeParams.h:360
	extern const uint64_t KU_FLAG_SET_ALL_CARS_TO_STARTING_AI_CONTROL = 65536;

	// BrnGameModeParams.h:361
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_RESET = 131072;

	// BrnGameModeParams.h:362
	extern const uint64_t KU_FLAG_RAPID_CRASHES = 262144;

	// BrnGameModeParams.h:363
	extern const uint64_t KU_FLAG_TRAFFIC_CHECKING_NOT_ALLOWED = 524288;

	// BrnGameModeParams.h:364
	extern const uint64_t KU_FLAG_DISABLE_UPCOMING_ROAD_SIGNS = 1048576;

	// BrnGameModeParams.h:365
	extern const uint64_t KU_FLAG_DISABLE_AFTERTOUCH_TDS = 2097152;

	// BrnGameModeParams.h:366
	extern const uint64_t KU_FLAG_DISABLE_ALL_TDS = 4194304;

	// BrnGameModeParams.h:367
	extern const uint64_t KU_FLAG_DISABLE_CRASH_EXTENSIONS = 8388608;

	// BrnGameModeParams.h:368
	extern const uint64_t KU_FLAG_LIMITED_CRASH_EXTENSIONS = 16777216;

	// BrnGameModeParams.h:369
	extern const uint64_t KU_FLAG_SHORT_CRASH_TIME = 33554432;

	// BrnGameModeParams.h:370
	extern const uint64_t KU_FLAG_ROLLING_START = 67108864;

	// BrnGameModeParams.h:371
	extern const uint64_t KU_FLAG_DONUT_START = 134217728;

	// BrnGameModeParams.h:372
	extern const uint64_t KU_FLAG_EASY_SMASH_PROPS = 268435456;

	// BrnGameModeParams.h:373
	extern const uint64_t KU_FLAG_USES_NAVIGATION = 536870912;

	// BrnGameModeParams.h:374
	extern const uint64_t KU_FLAG_AI_PERSISTENT_DAMAGE = 1073741824;

	// BrnGameModeParams.h:375
	extern const uint64_t KU_FLAG_AI_RESET_ON_TRACK_BEHIND = 2147483648;

	// BrnGameModeParams.h:376
	extern const uint64_t KU_FLAG_DISABLE_PROP_PROGRESSION;

	// BrnGameModeParams.h:377
	extern const uint64_t KU_FLAG_ENFORCE_SOFT_TAKEDOWNS;

	// BrnGameModeParams.h:378
	extern const uint64_t KU_FLAG_SET_OPPONENTS_TO_COPS;

	// BrnGameModeParams.h:379
	extern const uint64_t KU_FLAG_ALLOW_REVENGE_TAKEDOWNS;

	// BrnGameModeParams.h:503
	int8_t miNumRivals;

	// BrnGameModeParams.h:504
	int8_t miNumNetworkPlayers;

	// BrnGameModeParams.h:505
	float32_t mfProgressionRankAsRatio;

	// BrnGameModeParams.h:506
	GuiEventNetworkLaunching::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameModeParams.h:509
	CgsID mSpecialEventCarId;

	// BrnGameModeParams.h:510
	float32_t mfTrafficDensityScale;

	// BrnGameModeParams.h:511
	float32_t mfLargeVehicleProbability;

	// BrnGameModeParams.h:512
	float32_t mfTrafficSpeedScale;

	// BrnGameModeParams.h:513
	BrnGameState::EGameModeStartMechanism meStartMechanism;

	// BrnGameModeParams.h:514
	LightTriggerId mTrafficLightTriggerId;

	// BrnGameModeParams.h:515
	uint32_t muEventJunctionID;

	// BrnGameModeParams.h:516
	uint32_t muJunctionID;

	// BrnGameModeParams.h:519
	int32_t miRoadRageThreshold;

	// BrnGameModeParams.h:520
	int32_t miPursuitRivalTotalDamage;

	// BrnGameModeParams.h:521
	EGlobalRaceCarIndex mePursuedCarGlobalIndex;

	// BrnGameModeParams.h:522
	CgsID mPursuedCarID;

	// BrnGameModeParams.h:524
	float32_t mfOnlineFreeburnDeformationAmount;

	// BrnGameModeParams.h:526
	float32_t mfNeedForBronze;

	// BrnGameModeParams.h:527
	float32_t mfNeedForSilver;

	// BrnGameModeParams.h:528
	float32_t mfNeedForGold;

	// BrnGameModeParams.h:530
	float32_t mfModeTimeLimit;

	// BrnGameModeParams.h:532
	uint8_t muDifficultyLevel;

	// BrnGameModeParams.h:534
	float32_t[8] mfOvertakingDifficulty;

	// BrnGameModeParams.h:537
	bool mbIsOnline;

	// BrnGameModeParams.h:538
	CgsID[8] maModelIds;

	// BrnGameModeParams.h:539
	uint16_t[8] mau16CarColourIndex;

	// BrnGameModeParams.h:540
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameModeParams.h:541
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameModeParams.h:542
	GuiEventNetworkLaunching::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameModeParams.h:543
	bool mbInfiniteBoost;

	// BrnGameModeParams.h:544
	BrnNetwork::EBoostType meOnlineBoostStrategy;

	// BrnGameModeParams.h:546
	uint32_t muNumberOfCheckpointsInEvent;

private:
	// BrnGameModeParams.h:550
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// Unknown accessibility
	// BrnGameModeParams.h:98
	typedef Array<BrnGameState::StartLocation,8u> StartLocationArray;

	// BrnGameModeParams.h:553
	GameModeParams::StartLocationArray maStartLocations;

	// BrnGameModeParams.h:556
	StartGameModeParams::CheckpointDataArray maCheckpointDataArray;

	// Unknown accessibility
	// BrnGameModeParams.h:140
	typedef Array<BrnGameState::OpponentData,7u> OpponentDataArray;

	// BrnGameModeParams.h:559
	GameModeParams::OpponentDataArray maOpponentData;

	// BrnGameModeParams.h:562
	BrnAI::ERouteFindingStyle meDefaultPlayerRouteFindingStyle;

	// BrnGameModeParams.h:563
	BrnAI::ERouteFindingStyle meDefaultAIRouteFindingStyle;

	// BrnGameModeParams.h:564
	BrnAI::EAISpeedSelectionMethod meAISpeedSelectionMethod;

	// BrnGameModeParams.h:565
	int32_t miAIAggressiveCarCount;

	// BrnGameModeParams.h:566
	float32_t mfOnlineModeTimeLimit;

	// BrnGameModeParams.h:567
	BrnAI::AStarDistanceFunction meAStarDistanceFunction;

	// BrnGameModeParams.h:570
	int32_t miPlayerWreckCount;

	// BrnGameModeParams.h:573
	uint64_t muFlags;

public:
	// BrnGameModeParams.h:383
	void Construct(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameModeParams.h:388
	void AddCheckpoint(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:391
	int32_t GetCheckpointCount() const;

	// BrnGameModeParams.h:395
	const CheckpointData * GetCheckpointData(int32_t) const;

	// BrnGameModeParams.h:399
	CheckpointData * GetCheckpointData(int32_t);

	// BrnGameModeParams.h:403
	void AddOpponentData(const OpponentData *);

	// BrnGameModeParams.h:406
	int32_t GetOpponentCount() const;

	// BrnGameModeParams.h:410
	const OpponentData * GetOpponentData(int32_t) const;

	// BrnGameModeParams.h:414
	void AddBlockSectionId(AISection::AISectionId);

	// BrnGameModeParams.h:417
	BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

	// BrnGameModeParams.h:422
	void AddStartLocation(Vector3, Vector3);

	// BrnGameModeParams.h:426
	Vector3 GetStartPosition(int32_t) const;

	// BrnGameModeParams.h:430
	Vector3 GetStartDirection(int32_t) const;

	// BrnGameModeParams.h:433
	int32_t GetStartLocationCount() const;

	// BrnGameModeParams.h:438
	void SetAISpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod);

	// BrnGameModeParams.h:442
	void SetDefaultPlayerRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:446
	void SetDefaultAIRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:450
	void SetAIAggresiveCarCount(int32_t);

	// BrnGameModeParams.h:454
	void SetOnlineTimeLimit(float32_t);

	// BrnGameModeParams.h:458
	void SetAStarDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnGameModeParams.h:461
	BrnAI::EAISpeedSelectionMethod GetAISpeedSelectionMethod() const;

	// BrnGameModeParams.h:464
	BrnAI::ERouteFindingStyle GetDefaultPlayerRouteFindingStyle() const;

	// BrnGameModeParams.h:467
	BrnAI::ERouteFindingStyle GetDefaultAIRouteFindingStyle() const;

	// BrnGameModeParams.h:470
	int32_t GetAIAggresiveCarCount() const;

	// BrnGameModeParams.h:473
	float32_t GetOnlineTimeLimit() const;

	// BrnGameModeParams.h:476
	BrnAI::AStarDistanceFunction GetAStarDistanceFunction() const;

	// BrnGameModeParams.h:479
	int32_t GetPlayerWreckCount() const;

	// BrnGameModeParams.h:483
	void SetPlayerWreckCount(int32_t);

	// BrnGameModeParams.h:488
	void SetFlag(uint64_t);

	// BrnGameModeParams.h:492
	bool GetFlag(uint64_t) const;

	// BrnGameModeParams.h:495
	uint64_t GetFlags() const;

	// BrnGameModeParams.h:498
	void SetOnlineFreeburnDeformationAmount(float32_t);

	// BrnGameModeParams.h:501
	float32_t GetOnlineFreeburnDeformationAmount() const;

}

// BrnGameModeParams.h:340
struct BrnGameState::GameModeParams {
	// BrnGameModeParams.h:344
	extern const uint64_t KU_FLAG_SET_CARS_TO_START_GRID = 1;

	// BrnGameModeParams.h:345
	extern const uint64_t KU_FLAG_REMOVE_RIVALS_FROM_WORLD = 2;

	// BrnGameModeParams.h:346
	extern const uint64_t KU_FLAG_DISABLE_CRASH_CLEAN_UP = 4;

	// BrnGameModeParams.h:347
	extern const uint64_t KU_FLAG_ENABLE_EASY_CRASHING = 8;

	// BrnGameModeParams.h:348
	extern const uint64_t KU_FLAG_PLAYER_MUST_BE_CRASHING = 16;

	// BrnGameModeParams.h:349
	extern const uint64_t KU_FLAG_WRAP_AI_CARS_WHEN_OUT_OF_RANGE = 32;

	// BrnGameModeParams.h:350
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_SWERVING = 64;

	// BrnGameModeParams.h:351
	extern const uint64_t KU_FLAG_SET_DIRECTOR_TO_CRASH_MODE_AFTER_INTRO = 128;

	// BrnGameModeParams.h:352
	extern const uint64_t KU_FLAG_ALLOW_CRASH_PLAY_CONTROLS = 256;

	// BrnGameModeParams.h:353
	extern const uint64_t KU_FLAG_USE_SHOWTIME_VEHICLE_BEHAVIOUR = 512;

	// BrnGameModeParams.h:354
	extern const uint64_t KU_FLAG_CAR_SELECT_ALLOWED = 1024;

	// BrnGameModeParams.h:355
	extern const uint64_t KU_FLAG_CLEAR_NEARBY_TRAFFIC = 2048;

	// BrnGameModeParams.h:356
	extern const uint64_t KU_FLAG_HARDCORE_TRAFFIC_SWERVING = 4096;

	// BrnGameModeParams.h:357
	extern const uint64_t KU_FLAG_HAS_ROUTE = 8192;

	// BrnGameModeParams.h:358
	extern const uint64_t KU_FLAG_AI_DRIVE_BY_START = 16384;

	// BrnGameModeParams.h:359
	extern const uint64_t KU_FLAG_USE_RACE_BALANCING = 32768;

	// BrnGameModeParams.h:360
	extern const uint64_t KU_FLAG_SET_ALL_CARS_TO_STARTING_AI_CONTROL = 65536;

	// BrnGameModeParams.h:361
	extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_RESET = 131072;

	// BrnGameModeParams.h:362
	extern const uint64_t KU_FLAG_RAPID_CRASHES = 262144;

	// BrnGameModeParams.h:363
	extern const uint64_t KU_FLAG_TRAFFIC_CHECKING_NOT_ALLOWED = 524288;

	// BrnGameModeParams.h:364
	extern const uint64_t KU_FLAG_DISABLE_UPCOMING_ROAD_SIGNS = 1048576;

	// BrnGameModeParams.h:365
	extern const uint64_t KU_FLAG_DISABLE_AFTERTOUCH_TDS = 2097152;

	// BrnGameModeParams.h:366
	extern const uint64_t KU_FLAG_DISABLE_ALL_TDS = 4194304;

	// BrnGameModeParams.h:367
	extern const uint64_t KU_FLAG_DISABLE_CRASH_EXTENSIONS = 8388608;

	// BrnGameModeParams.h:368
	extern const uint64_t KU_FLAG_LIMITED_CRASH_EXTENSIONS = 16777216;

	// BrnGameModeParams.h:369
	extern const uint64_t KU_FLAG_SHORT_CRASH_TIME = 33554432;

	// BrnGameModeParams.h:370
	extern const uint64_t KU_FLAG_ROLLING_START = 67108864;

	// BrnGameModeParams.h:371
	extern const uint64_t KU_FLAG_DONUT_START = 134217728;

	// BrnGameModeParams.h:372
	extern const uint64_t KU_FLAG_EASY_SMASH_PROPS = 268435456;

	// BrnGameModeParams.h:373
	extern const uint64_t KU_FLAG_USES_NAVIGATION = 536870912;

	// BrnGameModeParams.h:374
	extern const uint64_t KU_FLAG_AI_PERSISTENT_DAMAGE = 1073741824;

	// BrnGameModeParams.h:375
	extern const uint64_t KU_FLAG_AI_RESET_ON_TRACK_BEHIND = 2147483648;

	// BrnGameModeParams.h:376
	extern const uint64_t KU_FLAG_DISABLE_PROP_PROGRESSION;

	// BrnGameModeParams.h:377
	extern const uint64_t KU_FLAG_ENFORCE_SOFT_TAKEDOWNS;

	// BrnGameModeParams.h:378
	extern const uint64_t KU_FLAG_SET_OPPONENTS_TO_COPS;

	// BrnGameModeParams.h:379
	extern const uint64_t KU_FLAG_ALLOW_REVENGE_TAKEDOWNS;

	// BrnGameModeParams.h:503
	int8_t miNumRivals;

	// BrnGameModeParams.h:504
	int8_t miNumNetworkPlayers;

	// BrnGameModeParams.h:505
	float32_t mfProgressionRankAsRatio;

	// BrnGameModeParams.h:506
	AggressiveMoveData::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameModeParams.h:509
	CgsID mSpecialEventCarId;

	// BrnGameModeParams.h:510
	float32_t mfTrafficDensityScale;

	// BrnGameModeParams.h:511
	float32_t mfLargeVehicleProbability;

	// BrnGameModeParams.h:512
	float32_t mfTrafficSpeedScale;

	// BrnGameModeParams.h:513
	BrnGameState::EGameModeStartMechanism meStartMechanism;

	// BrnGameModeParams.h:514
	LightTriggerId mTrafficLightTriggerId;

	// BrnGameModeParams.h:515
	uint32_t muEventJunctionID;

	// BrnGameModeParams.h:516
	uint32_t muJunctionID;

	// BrnGameModeParams.h:519
	int32_t miRoadRageThreshold;

	// BrnGameModeParams.h:520
	int32_t miPursuitRivalTotalDamage;

	// BrnGameModeParams.h:521
	EGlobalRaceCarIndex mePursuedCarGlobalIndex;

	// BrnGameModeParams.h:522
	CgsID mPursuedCarID;

	// BrnGameModeParams.h:524
	float32_t mfOnlineFreeburnDeformationAmount;

	// BrnGameModeParams.h:526
	float32_t mfNeedForBronze;

	// BrnGameModeParams.h:527
	float32_t mfNeedForSilver;

	// BrnGameModeParams.h:528
	float32_t mfNeedForGold;

	// BrnGameModeParams.h:530
	float32_t mfModeTimeLimit;

	// BrnGameModeParams.h:532
	uint8_t muDifficultyLevel;

	// BrnGameModeParams.h:534
	float32_t[8] mfOvertakingDifficulty;

	// BrnGameModeParams.h:537
	bool mbIsOnline;

	// BrnGameModeParams.h:538
	CgsID[8] maModelIds;

	// BrnGameModeParams.h:539
	uint16_t[8] mau16CarColourIndex;

	// BrnGameModeParams.h:540
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameModeParams.h:541
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameModeParams.h:542
	AggressiveMoveData::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameModeParams.h:543
	bool mbInfiniteBoost;

	// BrnGameModeParams.h:544
	BrnNetwork::EBoostType meOnlineBoostStrategy;

	// BrnGameModeParams.h:546
	uint32_t muNumberOfCheckpointsInEvent;

private:
	// BrnGameModeParams.h:550
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// Unknown accessibility
	// BrnGameModeParams.h:98
	typedef Array<BrnGameState::StartLocation,8u> StartLocationArray;

	// BrnGameModeParams.h:553
	GameModeParams::StartLocationArray maStartLocations;

	// BrnGameModeParams.h:556
	StartGameModeParams::CheckpointDataArray maCheckpointDataArray;

	// Unknown accessibility
	// BrnGameModeParams.h:140
	typedef Array<BrnGameState::OpponentData,7u> OpponentDataArray;

	// BrnGameModeParams.h:559
	GameModeParams::OpponentDataArray maOpponentData;

	// BrnGameModeParams.h:562
	BrnAI::ERouteFindingStyle meDefaultPlayerRouteFindingStyle;

	// BrnGameModeParams.h:563
	BrnAI::ERouteFindingStyle meDefaultAIRouteFindingStyle;

	// BrnGameModeParams.h:564
	BrnAI::EAISpeedSelectionMethod meAISpeedSelectionMethod;

	// BrnGameModeParams.h:565
	int32_t miAIAggressiveCarCount;

	// BrnGameModeParams.h:566
	float32_t mfOnlineModeTimeLimit;

	// BrnGameModeParams.h:567
	BrnAI::AStarDistanceFunction meAStarDistanceFunction;

	// BrnGameModeParams.h:570
	int32_t miPlayerWreckCount;

	// BrnGameModeParams.h:573
	uint64_t muFlags;

public:
	// BrnGameModeParams.h:383
	void Construct(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameModeParams.h:388
	void AddCheckpoint(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:391
	int32_t GetCheckpointCount() const;

	// BrnGameModeParams.h:395
	const CheckpointData * GetCheckpointData(int32_t) const;

	// BrnGameModeParams.h:399
	CheckpointData * GetCheckpointData(int32_t);

	// BrnGameModeParams.h:403
	void AddOpponentData(const OpponentData *);

	// BrnGameModeParams.h:406
	int32_t GetOpponentCount() const;

	// BrnGameModeParams.h:410
	const OpponentData * GetOpponentData(int32_t) const;

	// BrnGameModeParams.h:414
	void AddBlockSectionId(AISection::AISectionId);

	// BrnGameModeParams.h:417
	BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

	// BrnGameModeParams.h:422
	void AddStartLocation(Vector3, Vector3);

	// BrnGameModeParams.h:426
	Vector3 GetStartPosition(int32_t) const;

	// BrnGameModeParams.h:430
	Vector3 GetStartDirection(int32_t) const;

	// BrnGameModeParams.h:433
	int32_t GetStartLocationCount() const;

	// BrnGameModeParams.h:438
	void SetAISpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod);

	// BrnGameModeParams.h:442
	void SetDefaultPlayerRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:446
	void SetDefaultAIRouteFindingStyle(BrnAI::ERouteFindingStyle);

	// BrnGameModeParams.h:450
	void SetAIAggresiveCarCount(int32_t);

	// BrnGameModeParams.h:454
	void SetOnlineTimeLimit(float32_t);

	// BrnGameModeParams.h:458
	void SetAStarDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnGameModeParams.h:461
	BrnAI::EAISpeedSelectionMethod GetAISpeedSelectionMethod() const;

	// BrnGameModeParams.h:464
	BrnAI::ERouteFindingStyle GetDefaultPlayerRouteFindingStyle() const;

	// BrnGameModeParams.h:467
	BrnAI::ERouteFindingStyle GetDefaultAIRouteFindingStyle() const;

	// BrnGameModeParams.h:470
	int32_t GetAIAggresiveCarCount() const;

	// BrnGameModeParams.h:473
	float32_t GetOnlineTimeLimit() const;

	// BrnGameModeParams.h:476
	BrnAI::AStarDistanceFunction GetAStarDistanceFunction() const;

	// BrnGameModeParams.h:479
	int32_t GetPlayerWreckCount() const;

	// BrnGameModeParams.h:483
	void SetPlayerWreckCount(int32_t);

	// BrnGameModeParams.h:488
	void SetFlag(uint64_t);

	// BrnGameModeParams.h:492
	bool GetFlag(uint64_t) const;

	// BrnGameModeParams.h:495
	uint64_t GetFlags() const;

	// BrnGameModeParams.h:498
	void SetOnlineFreeburnDeformationAmount(float32_t);

	// BrnGameModeParams.h:501
	float32_t GetOnlineFreeburnDeformationAmount() const;

}

// BrnGameModeParams.h:350
extern const uint64_t KU_FLAG_DISABLE_TRAFFIC_SWERVING = 64;

// BrnGameModeParams.h:62
struct BrnGameState::CheckpointData {
private:
	// BrnGameModeParams.h:92
	LandmarkIndex muLandmarkIndex;

	// BrnGameModeParams.h:93
	uint16_t muAISectionIndex;

	// BrnGameModeParams.h:94
	BrnWorld::EDistrict meDistrict;

	// BrnGameModeParams.h:95
	Array<uint32_t,8u> mauBlockSectionIds;

public:
	// BrnGameModeParams.h:69
	void Construct(LandmarkIndex, uint16_t);

	// BrnGameModeParams.h:73
	void AddBlockSectionId(uint32_t);

	// BrnGameModeParams.h:77
	void SetDistrict(BrnWorld::EDistrict);

	// BrnGameModeParams.h:80
	LandmarkIndex GetLandmarkIndex() const;

	// BrnGameModeParams.h:83
	uint16_t GetAISectionIndex() const;

	// BrnGameModeParams.h:86
	BrnWorld::EDistrict GetDistrict() const;

	// BrnGameModeParams.h:89
	const Array<uint32_t,8u> * GetBlockSectionIds() const;

}

// BrnGameModeParams.h:368
extern const uint64_t KU_FLAG_LIMITED_CRASH_EXTENSIONS = 16777216;

// BrnGameModeParams.h:369
extern const uint64_t KU_FLAG_SHORT_CRASH_TIME = 33554432;

