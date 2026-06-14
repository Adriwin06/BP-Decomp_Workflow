// BrnRoute.h:26
namespace BrnAI {
	// BrnAIModule.h:58
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnAIModule.h:59
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct AIModule {
		// BrnAIModule.h:83
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_RESOURCES = 2,
			E_PREPARESTAGE_ROUTEMAP = 3,
			E_PREPARESTAGE_AICARS = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// BrnAIModule.h:93
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_ROUTEMAP = 2,
			E_RELEASESTAGE_DONE = 3,
		}

		// BrnAIModule.h:101
		enum EResourceAcquireStage {
			E_RESOURCE_LOAD_NOT_STARTED = 0,
			E_RESOURCE_LOAD_REQUESTED = 1,
			E_RESOURCE_ACQUIRE_NOT_STARTED = 2,
			E_RESOURCE_ACQUIRE_REQUESTED = 3,
			E_RESOURCE_ACQUIRE_COUNT = 4,
		}

	}

	// BrnAIModule.h:418
	extern BrnAI::AIModule::EReleaseStage operator++(BrnAI::AIModule::EReleaseStage &, int);

	// BrnAIModule.h:417
	extern BrnAI::AIModule::EPrepareStage operator++(BrnAI::AIModule::EPrepareStage &, int);

	// BrnAIModule.h:58
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnAIModule.h:59
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

}

// BrnAIModule.h:75
struct BrnAI::AIModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnAIModule.h:326
	AICar[35] maAICars;

	// BrnAIModule.h:327
	AIDriver[8] maAIDrivers;

	// BrnAIModule.h:328
	RaceBalancingManager mRaceBalancingManager;

	// BrnAIModule.h:329
	RouteRequestManager mRouteRequestManager;

	// BrnAIModule.h:332
	AIDebugComponent mAIDebugComponent;

	// BrnAIModule.h:335
	ResetOnTrackManager mResetOnTrackManager;

	// BrnAIModule.h:337
	Route mMasterRoute;

	// BrnAIModule.h:339
	BrnAI::AIModule::EPrepareStage mePrepareStage;

	// BrnAIModule.h:340
	BrnAI::AIModule::EReleaseStage meReleaseStage;

	// BrnAIModule.h:341
	BrnAI::AIModule::EResourceAcquireStage meResourceStage;

	// BrnAIModule.h:343
	Random mRandom;

	// BrnAIModule.h:345
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnAIModule.h:347
	ResourceHandle mAISectionDataHandle;

	// BrnAIModule.h:348
	ResourceHandle mLuaDataHandle;

	// BrnAIModule.h:349
	RouteMapModule mRouteMapModule;

	// BrnAIModule.h:351
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnAIModule.h:352
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnAIModule.h:354
	Camera mCamera;

	// BrnAIModule.h:356
	int32_t miLineUpdateTokenCounter;

	// BrnAIModule.h:358
	float32_t mfProgressionRankAsRatio;

	// BrnAIModule.h:361
	ContactSpyInterface mContactSpyInterface;

	// BrnAIModule.h:364
	BrnAI::EAISpeedSelectionMethod meSpeedSelectionMethod;

	// BrnAIModule.h:365
	BrnAI::ERouteFindingStyle meDefaultPlayerRouteFindingStyle;

	// BrnAIModule.h:366
	BrnAI::ERouteFindingStyle meDefaultAIRouteFindingStyle;

	// BrnAIModule.h:370
	uint8_t muNumAggressiveCars;

	// BrnAIModule.h:373
	bool mbDoInRangeCatchup;

	// BrnAIModule.h:374
	bool mbDoOutOfRangeCatchup;

	// BrnAIModule.h:375
	bool mbDoAggressiveDriving;

	// BrnAIModule.h:376
	bool mbEnableDrivingInput;

	// BrnAIModule.h:377
	bool mbIsInOnlineGameMode;

	// BrnAIModule.h:378
	bool mbIsInGameMode;

	// BrnAIModule.h:379
	bool mbFullRollingStart;

	// BrnAIModule.h:380
	bool mbDonutStart;

	// BrnAIModule.h:382
	bool mbAIDrivesPlayer;

	// BrnAIModule.h:383
	bool mbAIPlayerInvulnerable;

	// Unknown accessibility
	// BrnAICar.h:67
	typedef Array<float32_t,16u> WaypointDistanceArray;

	// BrnAIModule.h:385
	AIModule::WaypointDistanceArray maWayPointDistance;

	// BrnAIModule.h:387
	EActiveRaceCarIndex[2] meCurrentRoundRobin;

	// BrnAIModule.h:389
	EActiveRaceCarIndex meAggressorIndex;

	// BrnAIModule.h:390
	EActiveRaceCarIndex meVictimIndex;

	// BrnAIModule.h:392
	EGlobalRaceCarIndex meProximityGlobalRaceCarIndexRoundRobin;

	// BrnAIModule.h:394
	BuzzBy mBuzzBy;

	// BrnAIModule.h:396
	float32_t mfClosestDistance;

	// BrnAIModule.h:397
	AICar * mpClosestCar;

	// BrnAIModule.h:406
	extern const int32_t K_MAX_GROUP_PM = 10;

	// BrnAIModule.cpp:91
	extern int32_t miUpdatePM;

	// BrnAIModule.cpp:92
	extern int32_t miUpdateCarsPM;

	// BrnAIModule.cpp:93
	extern int32_t miUpdateDriversPM;

	// BrnAIModule.cpp:94
	extern int32_t miUpdateDriverPM;

	// BrnAIModule.cpp:95
	extern int32_t miUpdateDriversRoundRobinPM;

	// BrnAIModule.cpp:96
	extern int32_t miResetOnTrackPM;

public:
	// BrnAIModule.cpp:115
	virtual void Construct();

	// BrnAIModule.cpp:245
	virtual bool Prepare(const AllocatorList *, OutputBuffer *);

	// BrnAIModule.cpp:506
	virtual bool Release();

	// BrnAIModule.cpp:564
	virtual void Destruct();

	// BrnAIModule.cpp:2395
	void GenerateSceneQueries(OutputBuffer_PostScene *);

	// BrnAIModule.cpp:591
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnAIModule.cpp:734
	void PostPhysicsUpdate(const InputBuffer_PostPhysics *);

	// BrnAIModule.h:458
	void SetAIDrivesPlayer(bool);

	// BrnAIModule.h:464
	bool GetAIDrivesPlayer();

	// BrnAIModule.h:423
	void SetCamera(Camera &);

private:
	// BrnAIModule.cpp:1054
	void UpdateOneProximityIndex();

	// BrnAIModule.cpp:821
	void OnRaceCarReachedFinish(const RaceCarReachedFinishAction *);

	// BrnAIModule.cpp:835
	void OnRaceCarReachedCheckpoint(const RaceCarReachedCheckpointAction *);

	// BrnAIModule.cpp:859
	void OnModeFinished(const FinishedModeAction *);

	// BrnAIModule.cpp:884
	void OnPlayerTakedown(const OnPlayerTakedownAction *);

	// BrnAIModule.cpp:903
	void OnModeStart(const GameModeParams *);

	// BrnAIModule.cpp:953
	void OnModeStartRacing(bool);

	// BrnAIModule.cpp:993
	void OnRollingStart();

	// BrnAIModule.cpp:1016
	void OnModeEnd(bool);

	// BrnAIModule.cpp:762
	void PausedUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnAIModuleBridges.cpp:48
	void BridgeInputToRouteMapModule(InputBuffer *, const InputBuffer *);

	// BrnAIModuleBridges.cpp:66
	void BridgeRouteMapModuleToOutput(OutputBuffer *, const OutputBuffer *);

	// BrnAIModule.cpp:368
	bool LoadMapData(OutputBuffer *);

	// BrnAIModule.cpp:1118
	void UpdateCars(float32_t, InputBuffer *, OutputBuffer *);

	// BrnAIModule.cpp:1374
	void UpdateDrivers(const InputBuffer *, OutputBuffer *, Vector3, float32_t);

	// BrnAIModule.cpp:1495
	void UpdateCarRoutes(OutputBuffer *, const OutputBuffer *);

	// BrnAIModule.cpp:1552
	// Declaration
	void HandleGameActions(const InputBuffer *, OutputBuffer *, InputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIModule.cpp:1693
		using namespace CgsDev::Message;

	}

	// BrnAIModule.cpp:1774
	// Declaration
	void HandleManagementEvents(const InputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIModule.cpp:1856
		using namespace CgsDev::Message;

	}

	// BrnAIModule.cpp:1999
	void StoreDrivenCarData(const InputBuffer *);

	// BrnAIModule.h:254
	void StoreRaceCarRaceDistances();

	// BrnAIModule.cpp:2130
	void ProcessAIVehicleInputs(OutputBuffer *);

	// BrnAIModule.cpp:2189
	void ProcessOutOfRangeVehicles(OutputBuffer *);

	// BrnAIModule.cpp:2224
	void ProcessInRangeVehicles(OutputBuffer *);

	// BrnAIModule.h:270
	void ProcessDriverTargetVectors(OutputBuffer *);

	// BrnAIModule.cpp:2264
	void ExportCarData(OutputBuffer *);

	// BrnAIModule.cpp:2060
	void ProcessRequestInterface(const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnAIModule.cpp:2309
	void SortTrafficIntoAICars(const InputBuffer *);

	// BrnAIModule.cpp:2411
	// Declaration
	void UpdateResetOnTrackManager(AIModuleResultInterface *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIModule.cpp:2436
		using namespace CgsDev::Message;

		// BrnAIModule.cpp:2440
		using namespace CgsDev::Message;

		// BrnAIModule.cpp:2456
		using namespace CgsDev::Message;

	}

	// BrnAIModule.cpp:2475
	AISectionsData * GetAISectionsData();

	// BrnAIModule.h:429
	BrnAI::AIDriver * GetPlayerDriver();

	// BrnAIModule.h:435
	AICar * GetPlayerCar();

	// BrnAIModule.h:442
	AICar * GetAICar(EGlobalRaceCarIndex);

	// BrnAIModule.h:450
	BrnAI::AIDriver * GetAIDriver(EActiveRaceCarIndex);

	// BrnAIModule.cpp:1168
	int32_t RoundRobinDrivers(int32_t, BrnAI::ERoundRobinType);

	// BrnAIModule.cpp:1324
	void DoRoundRobins();

	// BrnAIModule.cpp:1244
	void SetSuitabilityForAggression(EActiveRaceCarIndex, const RaceCarAIInterface *);

	// BrnAIModule.cpp:202
	void SetupRaceBalancingManager(const GameModeParams *);

}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct AIModule {
	public:
		// BrnAIModule.h:458
		void SetAIDrivesPlayer(bool);

		// BrnAIModule.h:423
		void SetCamera(Camera &);

	}

	// BrnAIModule.h:58
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnAIModule.h:59
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

}

// BrnAIModule.h:75
void BrnAI::AIModule::~AIModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIModule.h:75
void BrnAI::AIModule::AIModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

