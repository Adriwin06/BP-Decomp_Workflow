// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct TriggerQueryManager {
		// BrnTriggerQueryManager.h:184
		enum ETriggerLoadStage {
			E_TRIGGER_LOAD_NOT_STARTED = 0,
			E_TRIGGER_LOAD_REQUESTED = 1,
			E_TRIGGER_ACQUIRE_NOT_STARTED = 2,
			E_TRIGGER_ACQUIRE_REQUESTED = 3,
			E_TRIGGER_LOAD_TRAFFIC = 4,
			E_TRIGGER_WFLOAD_TRAFFIC = 5,
			E_TRIGGER_LOAD_DONE = 6,
		}

	}

}

// BrnTriggerQueryManager.h:69
struct BrnGameState::TriggerQueryManager {
private:
	// BrnTriggerQueryManager.h:197
	extern const int32_t KI_MAX_TRIGGER_COUNT = 32;

	// BrnTriggerQueryManager.h:198
	extern const int32_t KI_MAX_ACTIVE_TRIGGERS = 256;

	// BrnTriggerQueryManager.h:199
	extern const float32_t KF_MAX_LINE_TEST_LENGTH;

	// BrnTriggerQueryManager.h:200
	extern const float32_t KF_TRIGGER_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:201
	extern const float32_t KF_TRIGGER_MIN_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:202
	extern const float32_t KF_TRIGGER_REFRESH_DISTANCE;

	// BrnTriggerQueryManager.h:204
	extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

	// BrnTriggerQueryManager.h:211
	BrnGameState::TriggerQueryManagerDebugComponent mDebugComponent;

	// BrnTriggerQueryManager.h:212
	CgsID mPlayerSigTakedownGroupID;

	// BrnTriggerQueryManager.h:213
	CgsID mPlayerSuperJumpGroupID;

	// BrnTriggerQueryManager.h:214
	CgsID mPlayerRoadLimitGroupID;

	// BrnTriggerQueryManager.h:217
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> maSoundActions;

	// BrnTriggerQueryManager.h:220
	Array<uint16_t,256u> maActiveTriggers;

	// BrnTriggerQueryManager.h:221
	Array<uint16_t,32u> maLastPlayerTriggers;

	// BrnTriggerQueryManager.h:222
	Array<uint16_t,32u> maLastFrameTriggers;

	// BrnTriggerQueryManager.h:225
	BrnGameState::TriggerQueryManager::ETriggerLoadStage meTriggerLoadStage;

	// BrnTriggerQueryManager.h:226
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnTriggerQueryManager.h:227
	ResourcePtr<BrnTraffic::TrafficData> mpTrafficData;

	// BrnTriggerQueryManager.h:229
	Vector3[8] maActiveRaceCarPosLastFrame;

	// BrnTriggerQueryManager.h:230
	Vector3 mPlayerLookAheadPos;

	// BrnTriggerQueryManager.h:231
	Vector3 mLastPlayerPosition;

	// BrnTriggerQueryManager.h:232
	Vector2 mLastPlayerPosition2D;

	// BrnTriggerQueryManager.h:234
	bool mbTriggersUpdated;

	// BrnTriggerQueryManager.h:236
	bool mbPlayerInTrafficLightRegion;

	// BrnTriggerQueryManager.h:237
	LightTriggerId mPlayerCurrentTrafficLightId;

	// BrnTriggerQueryManager.h:240
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTriggerQueryManager.h:241
	TakedownManager * mpTakedownManager;

	// BrnTriggerQueryManager.h:242
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnTriggerQueryManager.h:243
	BrnGameState::ModeManager * mpModeManager;

	// Unknown accessibility
	// BrnTriggerQueryManager.h:56
	typedef Array<BrnGameState::LandmarkIndex,16u> LandmarkIndexArray;

	// BrnTriggerQueryManager.h:245
	TriggerQueryManager::LandmarkIndexArray mLandmarkIndexArray;

	// BrnTriggerQueryManager.h:246
	bool mbDoSoundLookAheadThisFrame;

	// BrnTriggerQueryManager.h:247
	bool mbCarHasTeleported;

	// BrnTriggerQueryManager.h:248
	SoundTriggerAction mCachedLookAheadSoundAction;

	// BrnTriggerQueryManager.h:251
	bool mbActivateRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:252
	bool mbContinueRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:254
	int32_t miCurrentRoundRobinChunk;

	// BrnTriggerQueryManager.h:255
	int32_t miCurrentTriggerIndex;

	// BrnTriggerQueryManager.h:256
	int32_t miCurrentNoOfRoundRobinPasses;

	// BrnTriggerQueryManager.h:261
	extern int32_t miPreWorldUpdatePM;

	// BrnTriggerQueryManager.h:262
	extern int32_t miPostWorldUpdatePM;

	// BrnTriggerQueryManager.h:263
	extern int32_t miUpdateTriggersPM;

	// BrnTriggerQueryManager.h:265
	extern int32_t miSpikeTrigger1;

	// BrnTriggerQueryManager.h:266
	extern int32_t miSpikeTrigger2;

public:
	// BrnTriggerQueryManager.h:83
	void Construct(BrnProgression::ProgressionManager *, TakedownManager *, BrnGameState::RoadRulesManager *);

	// BrnTriggerQueryManager.h:89
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnTriggerQueryManager.h:93
	bool Release();

	// BrnTriggerQueryManager.h:97
	void Destruct();

	// BrnTriggerQueryManager.h:107
	void PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const BrnResource::VehicleList *);

	// BrnTriggerQueryManager.h:113
	void PostWorldUpdate(const PostWorldInputBuffer *, BrnGameState::ModeManager *, EActiveRaceCarIndex);

	// BrnTriggerQueryManager.h:116
	const TriggerData * GetTriggerData() const;

	// BrnTriggerQueryManager.h:119
	const TrafficData * GetTrafficData() const;

	// BrnTriggerQueryManager.h:123
	bool IsPlayerInTrafficLightRegion() const;

	// BrnTriggerQueryManager.h:127
	LightTriggerId GetPlayerCurrentTrafficLightId() const;

	// BrnTriggerQueryManager.h:130
	int32_t GetActiveTriggerCount() const;

	// BrnTriggerQueryManager.h:134
	uint16_t GetActiveTrigger(int32_t) const;

	// BrnTriggerQueryManager.h:138
	// Declaration
	void AddLandmarkIndexForGameMode(LandmarkIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTriggerQueryManager.h:373
		using namespace CgsDev::Message;

	}

	// BrnTriggerQueryManager.h:142
	void ClearLandmarkIndexesForGameMode(OutputBuffer::TriggerManagementInputInterface *);

private:
	// BrnTriggerQueryManager.h:150
	void UpdateTriggers(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:154
	bool IsFirstFrame(uint32_t);

	// BrnTriggerQueryManager.h:160
	void SubmitTriggerQueries(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:166
	void CheckSoundActions(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:172
	bool IsSoundActionPresent(EntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType) const;

	// BrnTriggerQueryManager.h:182
	void ProcessPlayerTriggers(bool, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const TriggerRegion *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const BrnResource::VehicleList *);

}

// BrnTriggerQueryManager.h:197
extern const int32_t KI_MAX_TRIGGER_COUNT = 32;

// BrnTriggerQueryManager.h:198
extern const int32_t KI_MAX_ACTIVE_TRIGGERS = 256;

// BrnTriggerQueryManager.h:199
extern const float32_t KF_MAX_LINE_TEST_LENGTH;

// BrnTriggerQueryManager.h:200
extern const float32_t KF_TRIGGER_CLIP_DISTANCE;

// BrnTriggerQueryManager.h:201
extern const float32_t KF_TRIGGER_MIN_CLIP_DISTANCE;

// BrnTriggerQueryManager.h:202
extern const float32_t KF_TRIGGER_REFRESH_DISTANCE;

// BrnTriggerQueryManager.h:204
extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

// BrnTriggerQueryManager.h:69
struct BrnGameState::TriggerQueryManager {
private:
	// BrnTriggerQueryManager.h:197
	extern const int32_t KI_MAX_TRIGGER_COUNT = 32;

	// BrnTriggerQueryManager.h:198
	extern const int32_t KI_MAX_ACTIVE_TRIGGERS = 256;

	// BrnTriggerQueryManager.h:199
	extern const float32_t KF_MAX_LINE_TEST_LENGTH;

	// BrnTriggerQueryManager.h:200
	extern const float32_t KF_TRIGGER_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:201
	extern const float32_t KF_TRIGGER_MIN_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:202
	extern const float32_t KF_TRIGGER_REFRESH_DISTANCE;

	// BrnTriggerQueryManager.h:204
	extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

	// BrnTriggerQueryManager.h:211
	BrnGameState::TriggerQueryManagerDebugComponent mDebugComponent;

	// BrnTriggerQueryManager.h:212
	CgsID mPlayerSigTakedownGroupID;

	// BrnTriggerQueryManager.h:213
	CgsID mPlayerSuperJumpGroupID;

	// BrnTriggerQueryManager.h:214
	CgsID mPlayerRoadLimitGroupID;

	// BrnTriggerQueryManager.h:217
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> maSoundActions;

	// BrnTriggerQueryManager.h:220
	Array<uint16_t,256u> maActiveTriggers;

	// BrnTriggerQueryManager.h:221
	Array<uint16_t,32u> maLastPlayerTriggers;

	// BrnTriggerQueryManager.h:222
	Array<uint16_t,32u> maLastFrameTriggers;

	// BrnTriggerQueryManager.h:225
	BrnGameState::TriggerQueryManager::ETriggerLoadStage meTriggerLoadStage;

	// BrnTriggerQueryManager.h:226
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnTriggerQueryManager.h:227
	ResourcePtr<BrnTraffic::TrafficData> mpTrafficData;

	// BrnTriggerQueryManager.h:229
	Vector3[8] maActiveRaceCarPosLastFrame;

	// BrnTriggerQueryManager.h:230
	Vector3 mPlayerLookAheadPos;

	// BrnTriggerQueryManager.h:231
	Vector3 mLastPlayerPosition;

	// BrnTriggerQueryManager.h:232
	Vector2 mLastPlayerPosition2D;

	// BrnTriggerQueryManager.h:234
	bool mbTriggersUpdated;

	// BrnTriggerQueryManager.h:236
	bool mbPlayerInTrafficLightRegion;

	// BrnTriggerQueryManager.h:237
	LightTriggerId mPlayerCurrentTrafficLightId;

	// BrnTriggerQueryManager.h:240
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTriggerQueryManager.h:241
	TakedownManager * mpTakedownManager;

	// BrnTriggerQueryManager.h:242
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnTriggerQueryManager.h:243
	BrnGameState::ModeManager * mpModeManager;

	// Unknown accessibility
	// BrnTriggerQueryManager.h:56
	typedef Array<BrnGameState::LandmarkIndex,16u> LandmarkIndexArray;

	// BrnTriggerQueryManager.h:245
	TriggerQueryManager::LandmarkIndexArray mLandmarkIndexArray;

	// BrnTriggerQueryManager.h:246
	bool mbDoSoundLookAheadThisFrame;

	// BrnTriggerQueryManager.h:247
	bool mbCarHasTeleported;

	// BrnTriggerQueryManager.h:248
	SoundTriggerAction mCachedLookAheadSoundAction;

	// BrnTriggerQueryManager.h:251
	bool mbActivateRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:252
	bool mbContinueRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:254
	int32_t miCurrentRoundRobinChunk;

	// BrnTriggerQueryManager.h:255
	int32_t miCurrentTriggerIndex;

	// BrnTriggerQueryManager.h:256
	int32_t miCurrentNoOfRoundRobinPasses;

	// BrnTriggerQueryManager.h:261
	extern int32_t miPreWorldUpdatePM;

	// BrnTriggerQueryManager.h:262
	extern int32_t miPostWorldUpdatePM;

	// BrnTriggerQueryManager.h:263
	extern int32_t miUpdateTriggersPM;

	// BrnTriggerQueryManager.h:265
	extern int32_t miSpikeTrigger1;

	// BrnTriggerQueryManager.h:266
	extern int32_t miSpikeTrigger2;

public:
	// BrnTriggerQueryManager.h:83
	void Construct(BrnProgression::ProgressionManager *, TakedownManager *, BrnGameState::RoadRulesManager *);

	// BrnTriggerQueryManager.h:89
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnTriggerQueryManager.h:93
	bool Release();

	// BrnTriggerQueryManager.h:97
	void Destruct();

	// BrnTriggerQueryManager.h:107
	void PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *);

	// BrnTriggerQueryManager.h:113
	void PostWorldUpdate(const PostWorldInputBuffer *, BrnGameState::ModeManager *, EActiveRaceCarIndex);

	// BrnTriggerQueryManager.h:116
	const TriggerData * GetTriggerData() const;

	// BrnTriggerQueryManager.h:119
	const TrafficData * GetTrafficData() const;

	// BrnTriggerQueryManager.h:123
	bool IsPlayerInTrafficLightRegion() const;

	// BrnTriggerQueryManager.h:127
	LightTriggerId GetPlayerCurrentTrafficLightId() const;

	// BrnTriggerQueryManager.h:130
	int32_t GetActiveTriggerCount() const;

	// BrnTriggerQueryManager.h:134
	uint16_t GetActiveTrigger(int32_t) const;

	// BrnTriggerQueryManager.h:138
	// Declaration
	void AddLandmarkIndexForGameMode(LandmarkIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTriggerQueryManager.h:373
		using namespace CgsDev::Message;

	}

	// BrnTriggerQueryManager.h:142
	void ClearLandmarkIndexesForGameMode(OutputBuffer::TriggerManagementInputInterface *);

private:
	// BrnTriggerQueryManager.h:150
	void UpdateTriggers(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:154
	bool IsFirstFrame(uint32_t);

	// BrnTriggerQueryManager.h:160
	void SubmitTriggerQueries(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:166
	void CheckSoundActions(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:172
	bool IsSoundActionPresent(EntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType) const;

	// BrnTriggerQueryManager.h:182
	void ProcessPlayerTriggers(bool, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const TriggerRegion *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const VehicleList *);

}

// BrnTriggerQueryManager.h:69
struct BrnGameState::TriggerQueryManager {
private:
	// BrnTriggerQueryManager.h:197
	extern const int32_t KI_MAX_TRIGGER_COUNT = 32;

	// BrnTriggerQueryManager.h:198
	extern const int32_t KI_MAX_ACTIVE_TRIGGERS = 256;

	// BrnTriggerQueryManager.h:199
	extern const float32_t KF_MAX_LINE_TEST_LENGTH;

	// BrnTriggerQueryManager.h:200
	extern const float32_t KF_TRIGGER_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:201
	extern const float32_t KF_TRIGGER_MIN_CLIP_DISTANCE;

	// BrnTriggerQueryManager.h:202
	extern const float32_t KF_TRIGGER_REFRESH_DISTANCE;

	// BrnTriggerQueryManager.h:204
	extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

	// BrnTriggerQueryManager.h:211
	BrnGameState::TriggerQueryManagerDebugComponent mDebugComponent;

	// BrnTriggerQueryManager.h:212
	CgsID mPlayerSigTakedownGroupID;

	// BrnTriggerQueryManager.h:213
	CgsID mPlayerSuperJumpGroupID;

	// BrnTriggerQueryManager.h:214
	CgsID mPlayerRoadLimitGroupID;

	// BrnTriggerQueryManager.h:217
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> maSoundActions;

	// BrnTriggerQueryManager.h:220
	Array<uint16_t,256u> maActiveTriggers;

	// BrnTriggerQueryManager.h:221
	Array<uint16_t,32u> maLastPlayerTriggers;

	// BrnTriggerQueryManager.h:222
	Array<uint16_t,32u> maLastFrameTriggers;

	// BrnTriggerQueryManager.h:225
	BrnGameState::TriggerQueryManager::ETriggerLoadStage meTriggerLoadStage;

	// BrnTriggerQueryManager.h:226
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnTriggerQueryManager.h:227
	ResourcePtr<BrnTraffic::TrafficData> mpTrafficData;

	// BrnTriggerQueryManager.h:229
	Vector3[8] maActiveRaceCarPosLastFrame;

	// BrnTriggerQueryManager.h:230
	Vector3 mPlayerLookAheadPos;

	// BrnTriggerQueryManager.h:231
	Vector3 mLastPlayerPosition;

	// BrnTriggerQueryManager.h:232
	Vector2 mLastPlayerPosition2D;

	// BrnTriggerQueryManager.h:234
	bool mbTriggersUpdated;

	// BrnTriggerQueryManager.h:236
	bool mbPlayerInTrafficLightRegion;

	// BrnTriggerQueryManager.h:237
	LightTriggerId mPlayerCurrentTrafficLightId;

	// BrnTriggerQueryManager.h:240
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTriggerQueryManager.h:241
	TakedownManager * mpTakedownManager;

	// BrnTriggerQueryManager.h:242
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnTriggerQueryManager.h:243
	BrnGameState::ModeManager * mpModeManager;

	// Unknown accessibility
	// BrnTriggerQueryManager.h:56
	typedef Array<BrnGameState::LandmarkIndex,16u> LandmarkIndexArray;

	// BrnTriggerQueryManager.h:245
	TriggerQueryManager::LandmarkIndexArray mLandmarkIndexArray;

	// BrnTriggerQueryManager.h:246
	bool mbDoSoundLookAheadThisFrame;

	// BrnTriggerQueryManager.h:247
	bool mbCarHasTeleported;

	// BrnTriggerQueryManager.h:248
	SoundTriggerAction mCachedLookAheadSoundAction;

	// BrnTriggerQueryManager.h:251
	bool mbActivateRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:252
	bool mbContinueRoundRobinTriggerUpdate;

	// BrnTriggerQueryManager.h:254
	int32_t miCurrentRoundRobinChunk;

	// BrnTriggerQueryManager.h:255
	int32_t miCurrentTriggerIndex;

	// BrnTriggerQueryManager.h:256
	int32_t miCurrentNoOfRoundRobinPasses;

	// BrnTriggerQueryManager.h:261
	extern int32_t miPreWorldUpdatePM;

	// BrnTriggerQueryManager.h:262
	extern int32_t miPostWorldUpdatePM;

	// BrnTriggerQueryManager.h:263
	extern int32_t miUpdateTriggersPM;

	// BrnTriggerQueryManager.h:265
	extern int32_t miSpikeTrigger1;

	// BrnTriggerQueryManager.h:266
	extern int32_t miSpikeTrigger2;

public:
	// BrnTriggerQueryManager.h:83
	void Construct(BrnProgression::ProgressionManager *, TakedownManager *, BrnGameState::RoadRulesManager *);

	// BrnTriggerQueryManager.h:89
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnTriggerQueryManager.h:93
	bool Release();

	// BrnTriggerQueryManager.h:97
	void Destruct();

	// BrnTriggerQueryManager.h:107
	void PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *);

	// BrnTriggerQueryManager.h:113
	void PostWorldUpdate(const PostWorldInputBuffer *, BrnGameState::ModeManager *, EActiveRaceCarIndex);

	// BrnTriggerQueryManager.h:116
	const TriggerData * GetTriggerData() const;

	// BrnTriggerQueryManager.h:119
	const TrafficData * GetTrafficData() const;

	// BrnTriggerQueryManager.h:123
	bool IsPlayerInTrafficLightRegion() const;

	// BrnTriggerQueryManager.h:127
	LightTriggerId GetPlayerCurrentTrafficLightId() const;

	// BrnTriggerQueryManager.h:130
	int32_t GetActiveTriggerCount() const;

	// BrnTriggerQueryManager.h:134
	uint16_t GetActiveTrigger(int32_t) const;

	// BrnTriggerQueryManager.h:138
	// Declaration
	void AddLandmarkIndexForGameMode(LandmarkIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTriggerQueryManager.h:373
		using namespace CgsDev::Message;

	}

	// BrnTriggerQueryManager.h:142
	void ClearLandmarkIndexesForGameMode(OutputBuffer::TriggerManagementInputInterface *);

private:
	// BrnTriggerQueryManager.h:150
	// Declaration
	void UpdateTriggers(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTriggerQueryManager.cpp:709
		using namespace CgsDev::Message;

	}

	// BrnTriggerQueryManager.h:154
	bool IsFirstFrame(uint32_t);

	// BrnTriggerQueryManager.h:160
	void SubmitTriggerQueries(BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:166
	void CheckSoundActions(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTriggerQueryManager.h:172
	bool IsSoundActionPresent(EntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType) const;

	// BrnTriggerQueryManager.h:182
	void ProcessPlayerTriggers(bool, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const TriggerRegion *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::StuntManager *, BrnGameState::DriveThruManager *, const VehicleList *);

}

// BrnTriggerQueryManager.h:395
struct PackedIndex {
private:
	// BrnTriggerQueryManager.h:418
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnTriggerQueryManager.h:419
	EActiveRaceCarIndex meActiveRaceCarIndex;

public:
	// BrnTriggerQueryManager.h:399
	void SetPackedData(int32_t);

	// BrnTriggerQueryManager.h:402
	void SetGlobalRaceCarIndex(EGlobalRaceCarIndex);

	// BrnTriggerQueryManager.h:405
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnTriggerQueryManager.h:408
	int32_t GetPackedRaceCarIndex() const;

	// BrnTriggerQueryManager.h:411
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnTriggerQueryManager.h:414
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

}

