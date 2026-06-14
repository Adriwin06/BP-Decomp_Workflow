// BrnDriveThruManager.h:46
struct BrnGameState::DriveThruTriggerData {
	// BrnDriveThruManager.h:48
	const GenericRegion * mpGenericRegion;

	// BrnDriveThruManager.h:49
	Vector3 mPosition;

	// BrnDriveThruManager.h:50
	float32_t mfTimeToActiveation;

}

// BrnDriveThruManager.h:62
struct BrnGameState::DriveThruManager {
private:
	// BrnDriveThruManager.h:157
	DriveThruTriggerData[46] maDriveThruTriggerData;

	// BrnDriveThruManager.h:158
	BitArray<46u> maDriveThroughClosed;

	// BrnDriveThruManager.h:160
	int32_t miTotalCarParks;

	// BrnDriveThruManager.h:161
	int32_t miTotalGasStations;

	// BrnDriveThruManager.h:162
	int32_t miTotalBodyShops;

	// BrnDriveThruManager.h:163
	int32_t miTotalPaintShops;

	// BrnDriveThruManager.h:164
	int32_t miTotalJunkYards;

	// BrnDriveThruManager.h:165
	int32_t miTotalDriveThrus;

	// BrnDriveThruManager.h:168
	BrnTrigger::GenericRegion::Type meDiscoveredDriveThruType;

	// BrnDriveThruManager.h:169
	int32_t miNumDriveThrusOfThisTypeFound;

	// BrnDriveThruManager.h:170
	int32_t miTotalDriveThrusOfThisType;

	// BrnDriveThruManager.h:171
	bool mbCurrentDriveThruJustFound;

	// BrnDriveThruManager.h:174
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnDriveThruManager.h:177
	BoxRegion mBoxRegionCache;

	// BrnDriveThruManager.h:178
	BrnTrigger::GenericRegion::Type meDriveThruCache;

	// BrnDriveThruManager.h:179
	CgsID mIdCache;

	// BrnDriveThruManager.h:180
	bool mbIsClosed;

	// BrnDriveThruManager.h:182
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnDriveThruManager.h:183
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnDriveThruManager.h:184
	BrnGameState::ModeManager * mpModeManager;

	// BrnDriveThruManager.h:185
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnDriveThruManager.h:188
	CgsID mRepairedCarID;

	// BrnDriveThruManager.h:189
	CgsID mDriveThruToTurnOffId;

	// BrnDriveThruManager.h:191
	bool mbCurrentCarJustRepaired;

	// BrnDriveThruManager.h:192
	bool mbNeedToSendDriveThruOffMessage;

	// BrnDriveThruManager.h:194
	bool mbPlayerCanUseDriveThrus;

	// BrnDriveThruManager.h:195
	bool mbPlayerCanUseJunkyards;

	// BrnDriveThruManager.h:196
	bool mbDriveThroughsCloseWhenUsed;

	// BrnDriveThruManager.h:198
	bool mbNeedToSendCantPaintMessage;

	// BrnDriveThruManager.h:199
	bool mbNeedToSendMustFixMessage;

	// BrnDriveThruManager.h:201
	BrnProgression::ProgressionManager * mpProgressionManager;

public:
	// BrnDriveThruManager.h:74
	void Construct(BrnGameState::CarSelectManager *, BrnGameState::TrainingManager *, BrnGameState::ModeManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnDriveThruManager.h:80
	bool Prepare(const TriggerData *, ResourcePtr<BrnWorld::GlobalColourPalette>);

	// BrnDriveThruManager.h:95
	void Update(InputBuffer::GameActionQueue *, TimerRequestInterface *, float32_t, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool, bool, bool, bool, bool, const BrnResource::VehicleList *);

	// BrnDriveThruManager.h:102
	void HandleDriveThru(const GenericRegion *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const BrnResource::VehicleList *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnDriveThruManager.h:105
	void DriveThroughsCloseOnceActivatedUntilFurtherNotice();

	// BrnDriveThruManager.h:108
	void DriveThroughsCanNowOpenAgain();

	// BrnDriveThruManager.h:112
	bool Release();

	// BrnDriveThruManager.h:116
	void Destruct();

private:
	// BrnDriveThruManager.h:123
	void UnlockCarChallengeForCar(CgsID, InputBuffer::GameActionQueue *);

	// BrnDriveThruManager.h:132
	void ProcessDriveThru(BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *, TimerRequestInterface *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool *);

	// BrnDriveThruManager.h:140
	void SetPlayerCarDriver(InputBuffer::GameActionQueue *, TimerRequestInterface *, const BoxRegion *, bool, float32_t);

	// BrnDriveThruManager.h:144
	bool DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:148
	int32_t GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:153
	void PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const BrnResource::VehicleList *);

}

// BrnDriveThruManager.h:62
struct BrnGameState::DriveThruManager {
private:
	// BrnDriveThruManager.h:157
	DriveThruTriggerData[46] maDriveThruTriggerData;

	// BrnDriveThruManager.h:158
	BitArray<46u> maDriveThroughClosed;

	// BrnDriveThruManager.h:160
	int32_t miTotalCarParks;

	// BrnDriveThruManager.h:161
	int32_t miTotalGasStations;

	// BrnDriveThruManager.h:162
	int32_t miTotalBodyShops;

	// BrnDriveThruManager.h:163
	int32_t miTotalPaintShops;

	// BrnDriveThruManager.h:164
	int32_t miTotalJunkYards;

	// BrnDriveThruManager.h:165
	int32_t miTotalDriveThrus;

	// BrnDriveThruManager.h:168
	BrnTrigger::GenericRegion::Type meDiscoveredDriveThruType;

	// BrnDriveThruManager.h:169
	int32_t miNumDriveThrusOfThisTypeFound;

	// BrnDriveThruManager.h:170
	int32_t miTotalDriveThrusOfThisType;

	// BrnDriveThruManager.h:171
	bool mbCurrentDriveThruJustFound;

	// BrnDriveThruManager.h:174
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnDriveThruManager.h:177
	BoxRegion mBoxRegionCache;

	// BrnDriveThruManager.h:178
	BrnTrigger::GenericRegion::Type meDriveThruCache;

	// BrnDriveThruManager.h:179
	CgsID mIdCache;

	// BrnDriveThruManager.h:180
	bool mbIsClosed;

	// BrnDriveThruManager.h:182
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnDriveThruManager.h:183
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnDriveThruManager.h:184
	BrnGameState::ModeManager * mpModeManager;

	// BrnDriveThruManager.h:185
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnDriveThruManager.h:188
	CgsID mRepairedCarID;

	// BrnDriveThruManager.h:189
	CgsID mDriveThruToTurnOffId;

	// BrnDriveThruManager.h:191
	bool mbCurrentCarJustRepaired;

	// BrnDriveThruManager.h:192
	bool mbNeedToSendDriveThruOffMessage;

	// BrnDriveThruManager.h:194
	bool mbPlayerCanUseDriveThrus;

	// BrnDriveThruManager.h:195
	bool mbPlayerCanUseJunkyards;

	// BrnDriveThruManager.h:196
	bool mbDriveThroughsCloseWhenUsed;

	// BrnDriveThruManager.h:198
	bool mbNeedToSendCantPaintMessage;

	// BrnDriveThruManager.h:199
	bool mbNeedToSendMustFixMessage;

	// BrnDriveThruManager.h:201
	BrnProgression::ProgressionManager * mpProgressionManager;

public:
	// BrnDriveThruManager.h:74
	void Construct(BrnGameState::CarSelectManager *, BrnGameState::TrainingManager *, BrnGameState::ModeManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnDriveThruManager.h:80
	bool Prepare(const TriggerData *, ResourcePtr<BrnWorld::GlobalColourPalette>);

	// BrnDriveThruManager.h:95
	void Update(InputBuffer::GameActionQueue *, TimerRequestInterface *, float32_t, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool, bool, bool, bool, bool, const VehicleList *);

	// BrnDriveThruManager.h:102
	void HandleDriveThru(const GenericRegion *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnDriveThruManager.h:105
	void DriveThroughsCloseOnceActivatedUntilFurtherNotice();

	// BrnDriveThruManager.h:108
	void DriveThroughsCanNowOpenAgain();

	// BrnDriveThruManager.h:112
	bool Release();

	// BrnDriveThruManager.h:116
	void Destruct();

private:
	// BrnDriveThruManager.h:123
	void UnlockCarChallengeForCar(CgsID, InputBuffer::GameActionQueue *);

	// BrnDriveThruManager.h:132
	void ProcessDriveThru(BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *, TimerRequestInterface *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool *);

	// BrnDriveThruManager.h:140
	void SetPlayerCarDriver(InputBuffer::GameActionQueue *, TimerRequestInterface *, const BoxRegion *, bool, float32_t);

	// BrnDriveThruManager.h:144
	bool DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:148
	int32_t GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:153
	void PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *);

}

// BrnDriveThruManager.h:62
struct BrnGameState::DriveThruManager {
private:
	// BrnDriveThruManager.h:157
	DriveThruTriggerData[46] maDriveThruTriggerData;

	// BrnDriveThruManager.h:158
	BitArray<46u> maDriveThroughClosed;

	// BrnDriveThruManager.h:160
	int32_t miTotalCarParks;

	// BrnDriveThruManager.h:161
	int32_t miTotalGasStations;

	// BrnDriveThruManager.h:162
	int32_t miTotalBodyShops;

	// BrnDriveThruManager.h:163
	int32_t miTotalPaintShops;

	// BrnDriveThruManager.h:164
	int32_t miTotalJunkYards;

	// BrnDriveThruManager.h:165
	int32_t miTotalDriveThrus;

	// BrnDriveThruManager.h:168
	BrnTrigger::GenericRegion::Type meDiscoveredDriveThruType;

	// BrnDriveThruManager.h:169
	int32_t miNumDriveThrusOfThisTypeFound;

	// BrnDriveThruManager.h:170
	int32_t miTotalDriveThrusOfThisType;

	// BrnDriveThruManager.h:171
	bool mbCurrentDriveThruJustFound;

	// BrnDriveThruManager.h:174
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnDriveThruManager.h:177
	BoxRegion mBoxRegionCache;

	// BrnDriveThruManager.h:178
	BrnTrigger::GenericRegion::Type meDriveThruCache;

	// BrnDriveThruManager.h:179
	CgsID mIdCache;

	// BrnDriveThruManager.h:180
	bool mbIsClosed;

	// BrnDriveThruManager.h:182
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnDriveThruManager.h:183
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnDriveThruManager.h:184
	BrnGameState::ModeManager * mpModeManager;

	// BrnDriveThruManager.h:185
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnDriveThruManager.h:188
	CgsID mRepairedCarID;

	// BrnDriveThruManager.h:189
	CgsID mDriveThruToTurnOffId;

	// BrnDriveThruManager.h:191
	bool mbCurrentCarJustRepaired;

	// BrnDriveThruManager.h:192
	bool mbNeedToSendDriveThruOffMessage;

	// BrnDriveThruManager.h:194
	bool mbPlayerCanUseDriveThrus;

	// BrnDriveThruManager.h:195
	bool mbPlayerCanUseJunkyards;

	// BrnDriveThruManager.h:196
	bool mbDriveThroughsCloseWhenUsed;

	// BrnDriveThruManager.h:198
	bool mbNeedToSendCantPaintMessage;

	// BrnDriveThruManager.h:199
	bool mbNeedToSendMustFixMessage;

	// BrnDriveThruManager.h:201
	BrnProgression::ProgressionManager * mpProgressionManager;

public:
	// BrnDriveThruManager.h:74
	void Construct(BrnGameState::CarSelectManager *, BrnGameState::TrainingManager *, BrnGameState::ModeManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnDriveThruManager.h:80
	// Declaration
	bool Prepare(const TriggerData *, ResourcePtr<BrnWorld::GlobalColourPalette>) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDriveThruManager.cpp:268
		using namespace CgsDev::Message;

	}

	// BrnDriveThruManager.h:95
	void Update(InputBuffer::GameActionQueue *, TimerRequestInterface *, float32_t, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool, bool, bool, bool, bool, const VehicleList *);

	// BrnDriveThruManager.h:102
	void HandleDriveThru(const GenericRegion *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnDriveThruManager.h:105
	void DriveThroughsCloseOnceActivatedUntilFurtherNotice();

	// BrnDriveThruManager.h:108
	void DriveThroughsCanNowOpenAgain();

	// BrnDriveThruManager.h:112
	bool Release();

	// BrnDriveThruManager.h:116
	void Destruct();

private:
	// BrnDriveThruManager.h:123
	void UnlockCarChallengeForCar(CgsID, InputBuffer::GameActionQueue *);

	// BrnDriveThruManager.h:132
	void ProcessDriveThru(BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *, TimerRequestInterface *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool *);

	// BrnDriveThruManager.h:140
	void SetPlayerCarDriver(InputBuffer::GameActionQueue *, TimerRequestInterface *, const BoxRegion *, bool, float32_t);

	// BrnDriveThruManager.h:144
	bool DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:148
	int32_t GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:153
	void PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *);

}

// BrnDriveThruManager.h:62
struct BrnGameState::DriveThruManager {
private:
	// BrnDriveThruManager.h:157
	DriveThruTriggerData[46] maDriveThruTriggerData;

	// BrnDriveThruManager.h:158
	BitArray<46u> maDriveThroughClosed;

	// BrnDriveThruManager.h:160
	int32_t miTotalCarParks;

	// BrnDriveThruManager.h:161
	int32_t miTotalGasStations;

	// BrnDriveThruManager.h:162
	int32_t miTotalBodyShops;

	// BrnDriveThruManager.h:163
	int32_t miTotalPaintShops;

	// BrnDriveThruManager.h:164
	int32_t miTotalJunkYards;

	// BrnDriveThruManager.h:165
	int32_t miTotalDriveThrus;

	// BrnDriveThruManager.h:168
	BrnTrigger::GenericRegion::Type meDiscoveredDriveThruType;

	// BrnDriveThruManager.h:169
	int32_t miNumDriveThrusOfThisTypeFound;

	// BrnDriveThruManager.h:170
	int32_t miTotalDriveThrusOfThisType;

	// BrnDriveThruManager.h:171
	bool mbCurrentDriveThruJustFound;

	// BrnDriveThruManager.h:174
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnDriveThruManager.h:177
	BoxRegion mBoxRegionCache;

	// BrnDriveThruManager.h:178
	BrnTrigger::GenericRegion::Type meDriveThruCache;

	// BrnDriveThruManager.h:179
	CgsID mIdCache;

	// BrnDriveThruManager.h:180
	bool mbIsClosed;

	// BrnDriveThruManager.h:182
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnDriveThruManager.h:183
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnDriveThruManager.h:184
	BrnGameState::ModeManager * mpModeManager;

	// BrnDriveThruManager.h:185
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnDriveThruManager.h:188
	CgsID mRepairedCarID;

	// BrnDriveThruManager.h:189
	CgsID mDriveThruToTurnOffId;

	// BrnDriveThruManager.h:191
	bool mbCurrentCarJustRepaired;

	// BrnDriveThruManager.h:192
	bool mbNeedToSendDriveThruOffMessage;

	// BrnDriveThruManager.h:194
	bool mbPlayerCanUseDriveThrus;

	// BrnDriveThruManager.h:195
	bool mbPlayerCanUseJunkyards;

	// BrnDriveThruManager.h:196
	bool mbDriveThroughsCloseWhenUsed;

	// BrnDriveThruManager.h:198
	bool mbNeedToSendCantPaintMessage;

	// BrnDriveThruManager.h:199
	bool mbNeedToSendMustFixMessage;

	// BrnDriveThruManager.h:201
	BrnProgression::ProgressionManager * mpProgressionManager;

public:
	// BrnDriveThruManager.h:74
	void Construct(BrnGameState::CarSelectManager *, BrnGameState::TrainingManager *, BrnGameState::ModeManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnDriveThruManager.h:80
	bool Prepare(const TriggerData *, ResourcePtr<BrnWorld::GlobalColourPalette>);

	// BrnDriveThruManager.h:95
	void Update(OutputBuffer::GameActionQueue *, TimerRequestInterface *, float32_t, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool, bool, bool, bool, bool, const VehicleList *);

	// BrnDriveThruManager.h:102
	void HandleDriveThru(const GenericRegion *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnDriveThruManager.h:105
	void DriveThroughsCloseOnceActivatedUntilFurtherNotice();

	// BrnDriveThruManager.h:108
	void DriveThroughsCanNowOpenAgain();

	// BrnDriveThruManager.h:112
	bool Release();

	// BrnDriveThruManager.h:116
	void Destruct();

private:
	// BrnDriveThruManager.h:123
	void UnlockCarChallengeForCar(CgsID, OutputBuffer::GameActionQueue *);

	// BrnDriveThruManager.h:132
	void ProcessDriveThru(BrnTrigger::GenericRegion::Type, OutputBuffer::GameActionQueue *, TimerRequestInterface *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool *);

	// BrnDriveThruManager.h:140
	void SetPlayerCarDriver(OutputBuffer::GameActionQueue *, TimerRequestInterface *, const BoxRegion *, bool, float32_t);

	// BrnDriveThruManager.h:144
	bool DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:148
	int32_t GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:153
	void PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const VehicleList *);

}

// BrnDriveThruManager.h:62
struct BrnGameState::DriveThruManager {
private:
	// BrnDriveThruManager.h:157
	DriveThruTriggerData[46] maDriveThruTriggerData;

	// BrnDriveThruManager.h:158
	BitArray<46u> maDriveThroughClosed;

	// BrnDriveThruManager.h:160
	int32_t miTotalCarParks;

	// BrnDriveThruManager.h:161
	int32_t miTotalGasStations;

	// BrnDriveThruManager.h:162
	int32_t miTotalBodyShops;

	// BrnDriveThruManager.h:163
	int32_t miTotalPaintShops;

	// BrnDriveThruManager.h:164
	int32_t miTotalJunkYards;

	// BrnDriveThruManager.h:165
	int32_t miTotalDriveThrus;

	// BrnDriveThruManager.h:168
	BrnTrigger::GenericRegion::Type meDiscoveredDriveThruType;

	// BrnDriveThruManager.h:169
	int32_t miNumDriveThrusOfThisTypeFound;

	// BrnDriveThruManager.h:170
	int32_t miTotalDriveThrusOfThisType;

	// BrnDriveThruManager.h:171
	bool mbCurrentDriveThruJustFound;

	// BrnDriveThruManager.h:174
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnDriveThruManager.h:177
	BoxRegion mBoxRegionCache;

	// BrnDriveThruManager.h:178
	BrnTrigger::GenericRegion::Type meDriveThruCache;

	// BrnDriveThruManager.h:179
	CgsID mIdCache;

	// BrnDriveThruManager.h:180
	bool mbIsClosed;

	// BrnDriveThruManager.h:182
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnDriveThruManager.h:183
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnDriveThruManager.h:184
	BrnGameState::ModeManager * mpModeManager;

	// BrnDriveThruManager.h:185
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnDriveThruManager.h:188
	CgsID mRepairedCarID;

	// BrnDriveThruManager.h:189
	CgsID mDriveThruToTurnOffId;

	// BrnDriveThruManager.h:191
	bool mbCurrentCarJustRepaired;

	// BrnDriveThruManager.h:192
	bool mbNeedToSendDriveThruOffMessage;

	// BrnDriveThruManager.h:194
	bool mbPlayerCanUseDriveThrus;

	// BrnDriveThruManager.h:195
	bool mbPlayerCanUseJunkyards;

	// BrnDriveThruManager.h:196
	bool mbDriveThroughsCloseWhenUsed;

	// BrnDriveThruManager.h:198
	bool mbNeedToSendCantPaintMessage;

	// BrnDriveThruManager.h:199
	bool mbNeedToSendMustFixMessage;

	// BrnDriveThruManager.h:201
	BrnProgression::ProgressionManager * mpProgressionManager;

public:
	// BrnDriveThruManager.h:74
	void Construct(BrnGameState::CarSelectManager *, BrnGameState::TrainingManager *, BrnGameState::ModeManager *, BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnDriveThruManager.h:80
	bool Prepare(const TriggerData *, ResourcePtr<BrnWorld::GlobalColourPalette>);

	// BrnDriveThruManager.h:95
	void Update(OutputBuffer::GameActionQueue *, TimerRequestInterface *, float32_t, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool, bool, bool, bool, bool, const BrnResource::VehicleList *);

	// BrnDriveThruManager.h:102
	void HandleDriveThru(const GenericRegion *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const BrnResource::VehicleList *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnDriveThruManager.h:105
	void DriveThroughsCloseOnceActivatedUntilFurtherNotice();

	// BrnDriveThruManager.h:108
	void DriveThroughsCanNowOpenAgain();

	// BrnDriveThruManager.h:112
	bool Release();

	// BrnDriveThruManager.h:116
	void Destruct();

private:
	// BrnDriveThruManager.h:123
	void UnlockCarChallengeForCar(CgsID, OutputBuffer::GameActionQueue *);

	// BrnDriveThruManager.h:132
	void ProcessDriveThru(BrnTrigger::GenericRegion::Type, OutputBuffer::GameActionQueue *, TimerRequestInterface *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, bool *);

	// BrnDriveThruManager.h:140
	void SetPlayerCarDriver(OutputBuffer::GameActionQueue *, TimerRequestInterface *, const BoxRegion *, bool, float32_t);

	// BrnDriveThruManager.h:144
	bool DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:148
	int32_t GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type);

	// BrnDriveThruManager.h:153
	void PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const BrnResource::VehicleList *);

}

