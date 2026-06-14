// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct StuntManager {
		// BrnStuntManager.h:147
		enum DistrictMapLoadStage {
			E_DISTRICT_MAP_LOAD_REQUEST = 0,
			E_DISTRICT_MAP_LOAD_RESPONSE = 1,
			E_DISTRICT_MAP_ACQUIRE_REQUEST = 2,
			E_DISTRICT_MAP_ACQUIRE_RESPONSE = 3,
			E_DISTRICT_MAP_DONE = 4,
		}

	}

}

// BrnStuntManager.h:65
struct BrnGameState::StuntManager {
private:
	// BrnStuntManager.h:156
	extern const float32_t KF_MIN_JUMP_SPEED_MPH;

	// BrnStuntManager.h:157
	extern const int32_t KI_MAX_ELEMENTS_PER_STUNT = 8;

	// BrnStuntManager.h:158
	extern const int32_t KI_MAX_RECENT_PROPS = 8;

	// BrnStuntManager.h:161
	BrnGameState::StuntManagerDebugComponent mStuntManagerDebugComponent;

	// BrnStuntManager.h:162
	BrnGameState::StuntElementType meDebugCompletedUnlockType;

	// BrnStuntManager.h:212
	WorldMap2D mWorldMap2D;

	// BrnStuntManager.h:213
	ResourceHandle mDistrictMapResourceHandle;

	// BrnStuntManager.h:214
	BrnGameState::StuntManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnStuntManager.h:215
	EventReceiverQueue<512,16> mReceiverQueue;

	// BrnStuntManager.h:217
	int16_t[3] maiTotalStuntElementCounts;

	// BrnStuntManager.h:218
	int16_t[3][5] maaiTotalStuntElementCountsPerCounty;

	// BrnStuntManager.h:220
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnStuntManager.h:221
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnStuntManager.h:222
	BrnGameState::ModeManager * mpModeManager;

	// BrnStuntManager.h:223
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnStuntManager.h:224
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnStuntManager.h:226
	const GenericRegion * mpLastStuntOrSmashElement;

	// BrnStuntManager.h:227
	BrnGameState::StuntElementType meLastStuntElementType;

	// BrnStuntManager.h:228
	uint16_t muLastZoneId;

	// BrnStuntManager.h:229
	uint16_t muLastPropId;

	// BrnStuntManager.h:231
	const GenericRegion * mpLastJumpElement;

	// BrnStuntManager.h:234
	float32_t mfJumpLandingTime;

	// BrnStuntManager.h:237
	int32_t miSignatureTakedownCount;

	// BrnStuntManager.h:240
	bool mbJumpActive;

	// BrnStuntManager.h:241
	bool mbHasPlayerLeftGround;

	// BrnStuntManager.h:242
	bool mbShowJumpNameNextFrame;

	// BrnStuntManager.h:243
	bool mbIsAttemptingJumpForFirstTime;

	// BrnStuntManager.h:244
	bool mbNeedToSendJumpFailureMessage;

	// BrnStuntManager.h:247
	bool mbAlwaysToJumpCameras;

public:
	// BrnStuntManager.h:80
	void Construct(BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::ModeManager *, BrnGameState::TrainingManager *, BrnGameState::GameStateModule *);

	// BrnStuntManager.h:84
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnStuntManager.h:88
	void Destruct();

	// BrnStuntManager.h:95
	void Update(InputBuffer::GameActionQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnStuntManager.h:98
	void OnCrash();

	// BrnStuntManager.h:103
	void OnStuntElement(const GenericRegion *, BrnGameState::StuntElementType);

	// BrnStuntManager.h:109
	void OnPropHit(uint16_t, uint16_t, Vector3);

	// BrnStuntManager.h:112
	int32_t GetMaxJumpCount();

	// BrnStuntManager.h:115
	int32_t GetMaxSmashCount();

	// BrnStuntManager.h:118
	int32_t GetMaxStuntCount();

	// BrnStuntManager.h:123
	int32_t GetMaxStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty);

	// BrnStuntManager.h:126
	int32_t GetMaxSignatureTDCount();

	// BrnStuntManager.h:129
	void ClearActiveJump();

	// BrnStuntManager.h:132
	void CompleteAllJumps();

	// BrnStuntManager.h:135
	void CompleteAllStunts();

	// BrnStuntManager.h:138
	void CompleteAllSmashes();

	// BrnStuntManager.h:143
	void CompleteAllStuntType(BrnGameState::StuntElementType, InputBuffer::GameActionQueue *);

private:
	// BrnStuntManager.h:166
	void Clear();

	// BrnStuntManager.h:169
	void ClearPropData();

	// BrnStuntManager.h:173
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnStuntManager.h:179
	void AddStunt(const SignatureStunt *, int32_t, float32_t);

	// BrnStuntManager.h:182
	bool StuntElementTriggered();

	// BrnStuntManager.h:188
	void ProcessStuntElement(InputBuffer::GameActionQueue *, bool, bool);

	// BrnStuntManager.h:195
	void UpdateJumps(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, float32_t, bool);

	// BrnStuntManager.h:199
	void CheckForTrophyUnlocks(OnStuntElementCompleteAction *);

	// BrnStuntManager.h:204
	BrnWorld::ECounty FindTriggersCounty(const GenericRegion *);

	// BrnStuntManager.h:209
	bool IsStuntElement(const GenericRegion *, BrnGameState::StuntElementType *);

}

// BrnStuntManager.h:156
extern const float32_t KF_MIN_JUMP_SPEED_MPH;

// BrnStuntManager.h:65
struct BrnGameState::StuntManager {
private:
	// BrnStuntManager.h:156
	extern const float32_t KF_MIN_JUMP_SPEED_MPH;

	// BrnStuntManager.h:157
	extern const int32_t KI_MAX_ELEMENTS_PER_STUNT = 8;

	// BrnStuntManager.h:158
	extern const int32_t KI_MAX_RECENT_PROPS = 8;

	// BrnStuntManager.h:161
	BrnGameState::StuntManagerDebugComponent mStuntManagerDebugComponent;

	// BrnStuntManager.h:162
	BrnGameState::StuntElementType meDebugCompletedUnlockType;

	// BrnStuntManager.h:212
	WorldMap2D mWorldMap2D;

	// BrnStuntManager.h:213
	ResourceHandle mDistrictMapResourceHandle;

	// BrnStuntManager.h:214
	BrnGameState::StuntManager::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnStuntManager.h:215
	EventReceiverQueue<512,16> mReceiverQueue;

	// BrnStuntManager.h:217
	int16_t[3] maiTotalStuntElementCounts;

	// BrnStuntManager.h:218
	int16_t[3][5] maaiTotalStuntElementCountsPerCounty;

	// BrnStuntManager.h:220
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnStuntManager.h:221
	TriggerQueryManager * mpTriggerQueryManager;

	// BrnStuntManager.h:222
	BrnGameState::ModeManager * mpModeManager;

	// BrnStuntManager.h:223
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnStuntManager.h:224
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnStuntManager.h:226
	const GenericRegion * mpLastStuntOrSmashElement;

	// BrnStuntManager.h:227
	BrnGameState::StuntElementType meLastStuntElementType;

	// BrnStuntManager.h:228
	uint16_t muLastZoneId;

	// BrnStuntManager.h:229
	uint16_t muLastPropId;

	// BrnStuntManager.h:231
	const GenericRegion * mpLastJumpElement;

	// BrnStuntManager.h:234
	float32_t mfJumpLandingTime;

	// BrnStuntManager.h:237
	int32_t miSignatureTakedownCount;

	// BrnStuntManager.h:240
	bool mbJumpActive;

	// BrnStuntManager.h:241
	bool mbHasPlayerLeftGround;

	// BrnStuntManager.h:242
	bool mbShowJumpNameNextFrame;

	// BrnStuntManager.h:243
	bool mbIsAttemptingJumpForFirstTime;

	// BrnStuntManager.h:244
	bool mbNeedToSendJumpFailureMessage;

	// BrnStuntManager.h:247
	bool mbAlwaysToJumpCameras;

public:
	// BrnStuntManager.h:80
	void Construct(BrnProgression::ProgressionManager *, TriggerQueryManager *, BrnGameState::ModeManager *, BrnGameState::TrainingManager *, BrnGameState::GameStateModule *);

	// BrnStuntManager.h:84
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnStuntManager.h:88
	void Destruct();

	// BrnStuntManager.h:95
	void Update(OutputBuffer::GameActionQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnStuntManager.h:98
	void OnCrash();

	// BrnStuntManager.h:103
	void OnStuntElement(const GenericRegion *, BrnGameState::StuntElementType);

	// BrnStuntManager.h:109
	void OnPropHit(uint16_t, uint16_t, Vector3);

	// BrnStuntManager.h:112
	int32_t GetMaxJumpCount();

	// BrnStuntManager.h:115
	int32_t GetMaxSmashCount();

	// BrnStuntManager.h:118
	int32_t GetMaxStuntCount();

	// BrnStuntManager.h:123
	int32_t GetMaxStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty);

	// BrnStuntManager.h:126
	int32_t GetMaxSignatureTDCount();

	// BrnStuntManager.h:129
	void ClearActiveJump();

	// BrnStuntManager.h:132
	void CompleteAllJumps();

	// BrnStuntManager.h:135
	void CompleteAllStunts();

	// BrnStuntManager.h:138
	void CompleteAllSmashes();

	// BrnStuntManager.h:143
	void CompleteAllStuntType(BrnGameState::StuntElementType, OutputBuffer::GameActionQueue *);

private:
	// BrnStuntManager.h:166
	void Clear();

	// BrnStuntManager.h:169
	void ClearPropData();

	// BrnStuntManager.h:173
	bool LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnStuntManager.h:179
	void AddStunt(const SignatureStunt *, int32_t, float32_t);

	// BrnStuntManager.h:182
	bool StuntElementTriggered();

	// BrnStuntManager.h:188
	void ProcessStuntElement(OutputBuffer::GameActionQueue *, bool, bool);

	// BrnStuntManager.h:195
	void UpdateJumps(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *, float32_t, bool);

	// BrnStuntManager.h:199
	void CheckForTrophyUnlocks(OnStuntElementCompleteAction *);

	// BrnStuntManager.h:204
	BrnWorld::ECounty FindTriggersCounty(const GenericRegion *);

	// BrnStuntManager.h:209
	bool IsStuntElement(const GenericRegion *, BrnGameState::StuntElementType *);

}

