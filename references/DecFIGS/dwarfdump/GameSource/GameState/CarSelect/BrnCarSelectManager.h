// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct CarSelectManager {
		// BrnCarSelectManager.h:66
		enum State {
			E_STATE_NONE = 0,
			E_STATE_TRANSITION_IN = 1,
			E_STATE_DISPLAY_UNLOCKED_CARS = 2,
			E_STATE_DISPLAY_UNLOCKED_SHUTDOWN_CARS = 3,
			E_STATE_CAR_SELECT = 4,
			E_STATE_CAR_MODIFICATION = 5,
			E_STATE_REQUEST_CAR_CHANGE = 6,
			E_STATE_STARTING_CHANGING_CAR = 7,
			E_STATE_CHANGING_CAR = 8,
			E_STATE_EXITING = 9,
		}

	}

	// BrnCarSelectManager.h:43
	const uint32_t KU_CARSELECT_SPAWNLOCATION_COUNT = 5;

	// BrnCarSelectManager.h:44
	const uint32_t KU_CARSELECT_MAX_LIVERIES = 5;

}

// BrnCarSelectManager.h:59
struct BrnGameState::CarSelectManager {
private:
	// BrnCarSelectManager.h:172
	BrnGameState::CarSelectManager::State meState;

	// BrnCarSelectManager.h:173
	float32_t mfStateTimer;

	// BrnCarSelectManager.h:175
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnCarSelectManager.h:176
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnCarSelectManager.h:177
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnCarSelectManager.h:179
	const BrnResource::VehicleList * mpVehicleList;

	// BrnCarSelectManager.h:180
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectManager.h:182
	CgsID mJunkyardId;

	// BrnCarSelectManager.h:184
	const SpawnLocation *[5] maSpawnLocations;

	// BrnCarSelectManager.h:185
	BrnTrigger::SpawnLocation::Type meLastSpawnLocationType;

	// BrnCarSelectManager.h:187
	CgsID mStartCarId;

	// BrnCarSelectManager.h:188
	CgsID mDesiredCarId;

	// BrnCarSelectManager.h:189
	CgsID mCacheDuringChangeCarId;

	// BrnCarSelectManager.h:191
	bool mbWaitingForStreaming;

	// BrnCarSelectManager.h:193
	uint32_t muUnlockCount;

	// BrnCarSelectManager.h:194
	CgsID mCurrentCarToUnlock;

	// BrnCarSelectManager.h:195
	bool mbCurrentCarTickerVisible;

	// BrnCarSelectManager.h:196
	float32_t mfCarUnlockFadedOutTargetTime;

	// BrnCarSelectManager.h:198
	bool mbNoNormalUnlockCars;

	// BrnCarSelectManager.h:200
	bool mbTransitionInRequestStreaming;

	// BrnCarSelectManager.h:202
	bool mbNeedToTeleportTrick;

	// BrnCarSelectManager.h:204
	bool mbInCarModScreen;

	// BrnCarSelectManager.h:206
	bool mbShutdownUnlockSequence;

	// BrnCarSelectManager.h:208
	bool mbCarUnlockEnabled;

	// Unknown accessibility
	// BrnCarSelectManager.h:290
	bool mbDEBUG_DisableUnlock;

	// Unknown accessibility
	// BrnCarSelectManager.h:291
	bool mbDEBUG_UnlockTrophyCarsForTesting;

	// Unknown accessibility
	// BrnCarSelectManager.h:292
	bool mbDEBUG_UnlockShutdownCarsForTesting;

public:
	// BrnCarSelectManager.h:88
	void Construct(const BrnGameState::TriggerQueryManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnCarSelectManager.h:91
	bool IsInJunkyard() const;

	// BrnCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnCarSelectManager.h:99
	void Prepare(const BrnResource::VehicleList *, const BrnResource::WheelList *);

	// BrnCarSelectManager.h:105
	void Update(InputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnCarSelectManager.h:110
	void EnterJunkyard(InputBuffer::GameActionQueue *, CgsID);

	// BrnCarSelectManager.h:114
	void EnterCarSelect(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:118
	void EnterModification(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:122
	void ExitJunkyard(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:127
	void ForceExitJunkyard(InputBuffer::GameActionQueue *, bool);

	// BrnCarSelectManager.h:131
	void RequestChangeCar(const CgsID &);

	// BrnCarSelectManager.h:136
	void StreamingFinished(CgsID, InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:146
	void EnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *, CgsID, CgsID, CgsID, BrnGameState::GameStateModuleIO::EPlayerScoringIndex, CarSelectionChangedAction *);

	// BrnCarSelectManager.h:150
	void ReallyEnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:154
	void OnCarUnlockTickerComplete();

	// BrnCarSelectManager.h:159
	void SetCarUnlockEnabled(bool);

private:
	// BrnCarSelectManager.h:166
	void UpdateCarColour(CgsID, InputBuffer::GameActionQueue *) const;

	// BrnCarSelectManager.h:170
	void SaveChosenLiveryForCar(CgsID);

	// BrnCarSelectManager.h:212
	void StartTransitionInState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:216
	void EndTransitionInState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:220
	void StartCarSelectState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:224
	void StartCarModificationState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:228
	void StartUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:232
	void UpdateRequestCarChangeState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:236
	void UpdateChangeCarState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:240
	void UpdateUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:244
	void EndUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:248
	void UpdateExitState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:251
	void SetupSpawnLocations();

	// BrnCarSelectManager.h:254
	void SetupNormalUnlockList();

	// BrnCarSelectManager.h:258
	bool IsThisCarInCurrentUnlockSequence(const CarData *) const;

	// BrnCarSelectManager.h:261
	void SetupShutdownUnlockList();

	// BrnCarSelectManager.h:265
	void SpawnInStartCar(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:269
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnCarSelectManager.h:273
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnCarSelectManager.h:277
	void RequestStreamingForUnlock(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:281
	void TeleportCurrentVehicle(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:285
	CgsID GetNextUnlockCarID(CgsID);

public:
	// BrnCarSelectManager.h:295
	void DEBUG_UnlockCarsForTesting();

}

// BrnCarSelectManager.h:59
struct BrnGameState::CarSelectManager {
private:
	// BrnCarSelectManager.h:172
	BrnGameState::CarSelectManager::State meState;

	// BrnCarSelectManager.h:173
	float32_t mfStateTimer;

	// BrnCarSelectManager.h:175
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnCarSelectManager.h:176
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnCarSelectManager.h:177
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnCarSelectManager.h:179
	const VehicleList * mpVehicleList;

	// BrnCarSelectManager.h:180
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectManager.h:182
	CgsID mJunkyardId;

	// BrnCarSelectManager.h:184
	const SpawnLocation *[5] maSpawnLocations;

	// BrnCarSelectManager.h:185
	BrnTrigger::SpawnLocation::Type meLastSpawnLocationType;

	// BrnCarSelectManager.h:187
	CgsID mStartCarId;

	// BrnCarSelectManager.h:188
	CgsID mDesiredCarId;

	// BrnCarSelectManager.h:189
	CgsID mCacheDuringChangeCarId;

	// BrnCarSelectManager.h:191
	bool mbWaitingForStreaming;

	// BrnCarSelectManager.h:193
	uint32_t muUnlockCount;

	// BrnCarSelectManager.h:194
	CgsID mCurrentCarToUnlock;

	// BrnCarSelectManager.h:195
	bool mbCurrentCarTickerVisible;

	// BrnCarSelectManager.h:196
	float32_t mfCarUnlockFadedOutTargetTime;

	// BrnCarSelectManager.h:198
	bool mbNoNormalUnlockCars;

	// BrnCarSelectManager.h:200
	bool mbTransitionInRequestStreaming;

	// BrnCarSelectManager.h:202
	bool mbNeedToTeleportTrick;

	// BrnCarSelectManager.h:204
	bool mbInCarModScreen;

	// BrnCarSelectManager.h:206
	bool mbShutdownUnlockSequence;

	// BrnCarSelectManager.h:208
	bool mbCarUnlockEnabled;

	// Unknown accessibility
	// BrnCarSelectManager.h:290
	bool mbDEBUG_DisableUnlock;

	// Unknown accessibility
	// BrnCarSelectManager.h:291
	bool mbDEBUG_UnlockTrophyCarsForTesting;

	// Unknown accessibility
	// BrnCarSelectManager.h:292
	bool mbDEBUG_UnlockShutdownCarsForTesting;

public:
	// BrnCarSelectManager.h:88
	void Construct(const BrnGameState::TriggerQueryManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnCarSelectManager.h:91
	bool IsInJunkyard() const;

	// BrnCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnCarSelectManager.h:99
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnCarSelectManager.h:105
	void Update(InputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnCarSelectManager.h:110
	void EnterJunkyard(InputBuffer::GameActionQueue *, CgsID);

	// BrnCarSelectManager.h:114
	void EnterCarSelect(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:118
	void EnterModification(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:122
	void ExitJunkyard(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:127
	void ForceExitJunkyard(InputBuffer::GameActionQueue *, bool);

	// BrnCarSelectManager.h:131
	void RequestChangeCar(const CgsID &);

	// BrnCarSelectManager.h:136
	void StreamingFinished(CgsID, InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:146
	void EnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *, CgsID, CgsID, CgsID, BrnGameState::GameStateModuleIO::EPlayerScoringIndex, CarSelectionChangedAction *);

	// BrnCarSelectManager.h:150
	void ReallyEnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:154
	void OnCarUnlockTickerComplete();

	// BrnCarSelectManager.h:159
	void SetCarUnlockEnabled(bool);

private:
	// BrnCarSelectManager.h:166
	void UpdateCarColour(CgsID, InputBuffer::GameActionQueue *) const;

	// BrnCarSelectManager.h:170
	void SaveChosenLiveryForCar(CgsID);

	// BrnCarSelectManager.h:212
	void StartTransitionInState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:216
	void EndTransitionInState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:220
	void StartCarSelectState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:224
	void StartCarModificationState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:228
	void StartUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:232
	void UpdateRequestCarChangeState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:236
	void UpdateChangeCarState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:240
	void UpdateUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:244
	void EndUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:248
	void UpdateExitState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:251
	void SetupSpawnLocations();

	// BrnCarSelectManager.h:254
	void SetupNormalUnlockList();

	// BrnCarSelectManager.h:258
	bool IsThisCarInCurrentUnlockSequence(const CarData *) const;

	// BrnCarSelectManager.h:261
	void SetupShutdownUnlockList();

	// BrnCarSelectManager.h:265
	void SpawnInStartCar(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:269
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnCarSelectManager.h:273
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnCarSelectManager.h:277
	void RequestStreamingForUnlock(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:281
	void TeleportCurrentVehicle(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:285
	CgsID GetNextUnlockCarID(CgsID);

public:
	// BrnCarSelectManager.h:295
	void DEBUG_UnlockCarsForTesting();

}

// BrnCarSelectManager.h:59
struct BrnGameState::CarSelectManager {
private:
	// BrnCarSelectManager.h:172
	BrnGameState::CarSelectManager::State meState;

	// BrnCarSelectManager.h:173
	float32_t mfStateTimer;

	// BrnCarSelectManager.h:175
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnCarSelectManager.h:176
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnCarSelectManager.h:177
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnCarSelectManager.h:179
	const VehicleList * mpVehicleList;

	// BrnCarSelectManager.h:180
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectManager.h:182
	CgsID mJunkyardId;

	// BrnCarSelectManager.h:184
	const SpawnLocation *[5] maSpawnLocations;

	// BrnCarSelectManager.h:185
	BrnTrigger::SpawnLocation::Type meLastSpawnLocationType;

	// BrnCarSelectManager.h:187
	CgsID mStartCarId;

	// BrnCarSelectManager.h:188
	CgsID mDesiredCarId;

	// BrnCarSelectManager.h:189
	CgsID mCacheDuringChangeCarId;

	// BrnCarSelectManager.h:191
	bool mbWaitingForStreaming;

	// BrnCarSelectManager.h:193
	uint32_t muUnlockCount;

	// BrnCarSelectManager.h:194
	CgsID mCurrentCarToUnlock;

	// BrnCarSelectManager.h:195
	bool mbCurrentCarTickerVisible;

	// BrnCarSelectManager.h:196
	float32_t mfCarUnlockFadedOutTargetTime;

	// BrnCarSelectManager.h:198
	bool mbNoNormalUnlockCars;

	// BrnCarSelectManager.h:200
	bool mbTransitionInRequestStreaming;

	// BrnCarSelectManager.h:202
	bool mbNeedToTeleportTrick;

	// BrnCarSelectManager.h:204
	bool mbInCarModScreen;

	// BrnCarSelectManager.h:206
	bool mbShutdownUnlockSequence;

	// BrnCarSelectManager.h:208
	bool mbCarUnlockEnabled;

	// Unknown accessibility
	// BrnCarSelectManager.h:290
	bool mbDEBUG_DisableUnlock;

	// Unknown accessibility
	// BrnCarSelectManager.h:291
	bool mbDEBUG_UnlockTrophyCarsForTesting;

	// Unknown accessibility
	// BrnCarSelectManager.h:292
	bool mbDEBUG_UnlockShutdownCarsForTesting;

public:
	// BrnCarSelectManager.h:88
	void Construct(const BrnGameState::TriggerQueryManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnCarSelectManager.h:91
	bool IsInJunkyard() const;

	// BrnCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnCarSelectManager.h:99
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnCarSelectManager.h:105
	void Update(InputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnCarSelectManager.h:110
	// Declaration
	void EnterJunkyard(InputBuffer::GameActionQueue *, CgsID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:206
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:114
	void EnterCarSelect(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:118
	void EnterModification(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:122
	// Declaration
	void ExitJunkyard(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:518
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:127
	void ForceExitJunkyard(InputBuffer::GameActionQueue *, bool);

	// BrnCarSelectManager.h:131
	// Declaration
	void RequestChangeCar(const CgsID &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:597
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:136
	// Declaration
	void StreamingFinished(CgsID, InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:172
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:146
	void EnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *, CgsID, CgsID, CgsID, BrnGameState::GameStateModuleIO::EPlayerScoringIndex, CarSelectionChangedAction *);

	// BrnCarSelectManager.h:150
	void ReallyEnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:154
	void OnCarUnlockTickerComplete();

	// BrnCarSelectManager.h:159
	void SetCarUnlockEnabled(bool);

private:
	// BrnCarSelectManager.h:166
	void UpdateCarColour(CgsID, InputBuffer::GameActionQueue *) const;

	// BrnCarSelectManager.h:170
	void SaveChosenLiveryForCar(CgsID);

	// BrnCarSelectManager.h:212
	// Declaration
	void StartTransitionInState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:255
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:216
	// Declaration
	void EndTransitionInState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:296
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:220
	// Declaration
	void StartCarSelectState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:351
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:224
	// Declaration
	void StartCarModificationState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:390
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:228
	// Declaration
	void StartUnlockState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:475
		using namespace CgsDev::Message;

		// BrnCarSelectManager.cpp:480
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:232
	void UpdateRequestCarChangeState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:236
	// Declaration
	void UpdateChangeCarState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:717
		using namespace CgsDev::Message;

		// BrnCarSelectManager.cpp:723
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:240
	void UpdateUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:244
	void EndUnlockState(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:248
	// Declaration
	void UpdateExitState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectManager.cpp:978
		using namespace CgsDev::Message;

	}

	// BrnCarSelectManager.h:251
	void SetupSpawnLocations();

	// BrnCarSelectManager.h:254
	void SetupNormalUnlockList();

	// BrnCarSelectManager.h:258
	bool IsThisCarInCurrentUnlockSequence(const CarData *) const;

	// BrnCarSelectManager.h:261
	void SetupShutdownUnlockList();

	// BrnCarSelectManager.h:265
	void SpawnInStartCar(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:269
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnCarSelectManager.h:273
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnCarSelectManager.h:277
	void RequestStreamingForUnlock(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:281
	void TeleportCurrentVehicle(InputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:285
	CgsID GetNextUnlockCarID(CgsID);

public:
	// BrnCarSelectManager.h:295
	void DEBUG_UnlockCarsForTesting();

}

// BrnCarSelectManager.h:59
struct BrnGameState::CarSelectManager {
private:
	// BrnCarSelectManager.h:172
	BrnGameState::CarSelectManager::State meState;

	// BrnCarSelectManager.h:173
	float32_t mfStateTimer;

	// BrnCarSelectManager.h:175
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnCarSelectManager.h:176
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnCarSelectManager.h:177
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnCarSelectManager.h:179
	const VehicleList * mpVehicleList;

	// BrnCarSelectManager.h:180
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectManager.h:182
	CgsID mJunkyardId;

	// BrnCarSelectManager.h:184
	const SpawnLocation *[5] maSpawnLocations;

	// BrnCarSelectManager.h:185
	BrnTrigger::SpawnLocation::Type meLastSpawnLocationType;

	// BrnCarSelectManager.h:187
	CgsID mStartCarId;

	// BrnCarSelectManager.h:188
	CgsID mDesiredCarId;

	// BrnCarSelectManager.h:189
	CgsID mCacheDuringChangeCarId;

	// BrnCarSelectManager.h:191
	bool mbWaitingForStreaming;

	// BrnCarSelectManager.h:193
	uint32_t muUnlockCount;

	// BrnCarSelectManager.h:194
	CgsID mCurrentCarToUnlock;

	// BrnCarSelectManager.h:195
	bool mbCurrentCarTickerVisible;

	// BrnCarSelectManager.h:196
	float32_t mfCarUnlockFadedOutTargetTime;

	// BrnCarSelectManager.h:198
	bool mbNoNormalUnlockCars;

	// BrnCarSelectManager.h:200
	bool mbTransitionInRequestStreaming;

	// BrnCarSelectManager.h:202
	bool mbNeedToTeleportTrick;

	// BrnCarSelectManager.h:204
	bool mbInCarModScreen;

	// BrnCarSelectManager.h:206
	bool mbShutdownUnlockSequence;

	// BrnCarSelectManager.h:208
	bool mbCarUnlockEnabled;

	// Unknown accessibility
	// BrnCarSelectManager.h:290
	bool mbDEBUG_DisableUnlock;

	// Unknown accessibility
	// BrnCarSelectManager.h:291
	bool mbDEBUG_UnlockTrophyCarsForTesting;

	// Unknown accessibility
	// BrnCarSelectManager.h:292
	bool mbDEBUG_UnlockShutdownCarsForTesting;

public:
	// BrnCarSelectManager.h:88
	void Construct(const BrnGameState::TriggerQueryManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnCarSelectManager.h:91
	bool IsInJunkyard() const;

	// BrnCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnCarSelectManager.h:99
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnCarSelectManager.h:105
	void Update(OutputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnCarSelectManager.h:110
	void EnterJunkyard(OutputBuffer::GameActionQueue *, CgsID);

	// BrnCarSelectManager.h:114
	void EnterCarSelect(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:118
	void EnterModification(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:122
	void ExitJunkyard(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:127
	void ForceExitJunkyard(OutputBuffer::GameActionQueue *, bool);

	// BrnCarSelectManager.h:131
	void RequestChangeCar(const CgsID &);

	// BrnCarSelectManager.h:136
	void StreamingFinished(CgsID, OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:146
	void EnterJunkyardAtStartOfGame(OutputBuffer::GameActionQueue *, CgsID, CgsID, CgsID, BrnGameState::GameStateModuleIO::EPlayerScoringIndex, CarSelectionChangedAction *);

	// BrnCarSelectManager.h:150
	void ReallyEnterJunkyardAtStartOfGame(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:154
	void OnCarUnlockTickerComplete();

	// BrnCarSelectManager.h:159
	void SetCarUnlockEnabled(bool);

private:
	// BrnCarSelectManager.h:166
	void UpdateCarColour(CgsID, OutputBuffer::GameActionQueue *) const;

	// BrnCarSelectManager.h:170
	void SaveChosenLiveryForCar(CgsID);

	// BrnCarSelectManager.h:212
	void StartTransitionInState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:216
	void EndTransitionInState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:220
	void StartCarSelectState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:224
	void StartCarModificationState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:228
	void StartUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:232
	void UpdateRequestCarChangeState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:236
	void UpdateChangeCarState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:240
	void UpdateUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:244
	void EndUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:248
	void UpdateExitState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:251
	void SetupSpawnLocations();

	// BrnCarSelectManager.h:254
	void SetupNormalUnlockList();

	// BrnCarSelectManager.h:258
	bool IsThisCarInCurrentUnlockSequence(const CarData *) const;

	// BrnCarSelectManager.h:261
	void SetupShutdownUnlockList();

	// BrnCarSelectManager.h:265
	void SpawnInStartCar(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:269
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnCarSelectManager.h:273
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnCarSelectManager.h:277
	void RequestStreamingForUnlock(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:281
	void TeleportCurrentVehicle(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:285
	CgsID GetNextUnlockCarID(CgsID);

public:
	// BrnCarSelectManager.h:295
	void DEBUG_UnlockCarsForTesting();

}

// BrnCarSelectManager.h:59
struct BrnGameState::CarSelectManager {
private:
	// BrnCarSelectManager.h:172
	BrnGameState::CarSelectManager::State meState;

	// BrnCarSelectManager.h:173
	float32_t mfStateTimer;

	// BrnCarSelectManager.h:175
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnCarSelectManager.h:176
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnCarSelectManager.h:177
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnCarSelectManager.h:179
	const BrnResource::VehicleList * mpVehicleList;

	// BrnCarSelectManager.h:180
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectManager.h:182
	CgsID mJunkyardId;

	// BrnCarSelectManager.h:184
	const SpawnLocation *[5] maSpawnLocations;

	// BrnCarSelectManager.h:185
	BrnTrigger::SpawnLocation::Type meLastSpawnLocationType;

	// BrnCarSelectManager.h:187
	CgsID mStartCarId;

	// BrnCarSelectManager.h:188
	CgsID mDesiredCarId;

	// BrnCarSelectManager.h:189
	CgsID mCacheDuringChangeCarId;

	// BrnCarSelectManager.h:191
	bool mbWaitingForStreaming;

	// BrnCarSelectManager.h:193
	uint32_t muUnlockCount;

	// BrnCarSelectManager.h:194
	CgsID mCurrentCarToUnlock;

	// BrnCarSelectManager.h:195
	bool mbCurrentCarTickerVisible;

	// BrnCarSelectManager.h:196
	float32_t mfCarUnlockFadedOutTargetTime;

	// BrnCarSelectManager.h:198
	bool mbNoNormalUnlockCars;

	// BrnCarSelectManager.h:200
	bool mbTransitionInRequestStreaming;

	// BrnCarSelectManager.h:202
	bool mbNeedToTeleportTrick;

	// BrnCarSelectManager.h:204
	bool mbInCarModScreen;

	// BrnCarSelectManager.h:206
	bool mbShutdownUnlockSequence;

	// BrnCarSelectManager.h:208
	bool mbCarUnlockEnabled;

	// Unknown accessibility
	// BrnCarSelectManager.h:290
	bool mbDEBUG_DisableUnlock;

	// Unknown accessibility
	// BrnCarSelectManager.h:291
	bool mbDEBUG_UnlockTrophyCarsForTesting;

	// Unknown accessibility
	// BrnCarSelectManager.h:292
	bool mbDEBUG_UnlockShutdownCarsForTesting;

public:
	// BrnCarSelectManager.h:88
	void Construct(const BrnGameState::TriggerQueryManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnCarSelectManager.h:91
	bool IsInJunkyard() const;

	// BrnCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnCarSelectManager.h:99
	void Prepare(const BrnResource::VehicleList *, const BrnResource::WheelList *);

	// BrnCarSelectManager.h:105
	void Update(OutputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnCarSelectManager.h:110
	void EnterJunkyard(OutputBuffer::GameActionQueue *, CgsID);

	// BrnCarSelectManager.h:114
	void EnterCarSelect(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:118
	void EnterModification(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:122
	void ExitJunkyard(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:127
	void ForceExitJunkyard(OutputBuffer::GameActionQueue *, bool);

	// BrnCarSelectManager.h:131
	void RequestChangeCar(const CgsID &);

	// BrnCarSelectManager.h:136
	void StreamingFinished(CgsID, OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:146
	void EnterJunkyardAtStartOfGame(OutputBuffer::GameActionQueue *, CgsID, CgsID, CgsID, BrnGameState::GameStateModuleIO::EPlayerScoringIndex, CarSelectionChangedAction *);

	// BrnCarSelectManager.h:150
	void ReallyEnterJunkyardAtStartOfGame(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:154
	void OnCarUnlockTickerComplete();

	// BrnCarSelectManager.h:159
	void SetCarUnlockEnabled(bool);

private:
	// BrnCarSelectManager.h:166
	void UpdateCarColour(CgsID, OutputBuffer::GameActionQueue *) const;

	// BrnCarSelectManager.h:170
	void SaveChosenLiveryForCar(CgsID);

	// BrnCarSelectManager.h:212
	void StartTransitionInState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:216
	void EndTransitionInState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:220
	void StartCarSelectState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:224
	void StartCarModificationState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:228
	void StartUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:232
	void UpdateRequestCarChangeState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:236
	void UpdateChangeCarState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:240
	void UpdateUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:244
	void EndUnlockState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:248
	void UpdateExitState(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:251
	void SetupSpawnLocations();

	// BrnCarSelectManager.h:254
	void SetupNormalUnlockList();

	// BrnCarSelectManager.h:258
	bool IsThisCarInCurrentUnlockSequence(const CarData *) const;

	// BrnCarSelectManager.h:261
	void SetupShutdownUnlockList();

	// BrnCarSelectManager.h:265
	void SpawnInStartCar(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:269
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnCarSelectManager.h:273
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnCarSelectManager.h:277
	void RequestStreamingForUnlock(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:281
	void TeleportCurrentVehicle(OutputBuffer::GameActionQueue *);

	// BrnCarSelectManager.h:285
	CgsID GetNextUnlockCarID(CgsID);

public:
	// BrnCarSelectManager.h:295
	void DEBUG_UnlockCarsForTesting();

}

