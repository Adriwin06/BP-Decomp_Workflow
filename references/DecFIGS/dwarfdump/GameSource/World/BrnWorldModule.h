// _built-in_
namespace :: {
	// BrnWorldModule.h:78
	const CgsDev::PerfMonCpuPage KE_WORLD_PERFMON_PAGE;

}

// BrnWorldModule.h:67
namespace BrnJuice {
	struct BrnJuice;

	struct BrnJuiceScripting;

}

// BrnWorldModule.h:67
namespace BrnJuice {
}

// BrnWorldModule.h:86
struct FilteredEntityData : public IOBuffer {
	// BrnWorldModule.h:109
	Array<CgsSceneManager::EntityId,4500u> maWorldEntityIds;

	// BrnWorldModule.h:110
	Array<CgsSceneManager::EntityId,32u> maRaceCarEntityIds;

	// BrnWorldModule.h:111
	Array<CgsSceneManager::EntityId,650u> maTrafficEntityIds;

	// BrnWorldModule.h:112
	Array<CgsSceneManager::EntityId,5400u> maPropEntityIds;

public:
	// BrnWorldModule.h:89
	void Construct();

	// BrnWorldModule.h:98
	void Clear();

	// BrnWorldModule.h:107
	void Destruct();

}

// BrnWorldModule.h:124
struct WorldModule : public CgsModule::ModuleSingleBuffered {
	// BrnWorldModule.h:127
	enum EWorldPrepareStage {
		eWorldPrepareStart = 0,
		eWorldPrepareModule = 1,
		eWorldPrepareResources = 2,
		eWorldPrepareSceneModule = 3,
		eWorldPreparePhysicsModule = 4,
		eWorldPrepareEnvironmentManager = 5,
		eWorldPrepareRaceCarEntityModule = 6,
		eWorldPrepareTrafficEntityModule = 7,
		eWorldPrepareWorldEntityModule = 8,
		eWorldPreparePropEntityModule = 9,
		eWorldPrepareTriggerEntityModule = 10,
		eWorldPrepareAI = 11,
		eWorldPrepareCrashModule = 12,
		eWorldPrepareEnvmapCameras = 13,
		eWorldPrepareDebug = 14,
		eWorldPrepareDone = 15,
	}

	// BrnWorldModule.h:147
	enum EWorldReleaseStage {
		eWorldReleaseStart = 0,
		eWorldReleaseCrashModule = 1,
		eWorldReleaseAI = 2,
		eWorldReleaseTriggerEntityModule = 3,
		eWorldReleasePropEntityModule = 4,
		eWorldReleaseWorldEntityModule = 5,
		eWorldReleaseTrafficEntityModule = 6,
		eWorldReleaseRaceCarEntityModule = 7,
		eWorldReleaseEnvironmentManager = 8,
		eWorldReleasePhysicsModule = 9,
		eWorldReleaseSceneModule = 10,
		eWorldReleaseEnvmapCameras = 11,
		eWorldReleaseModule = 12,
		eWorldReleaseDone = 13,
	}

	// BrnWorldModule.h:165
	enum EResourceAcquireState {
		eResourceAcquireStateNotStarted = 0,
		eResourceAcquireStateRequested = 1,
		eResourceAcquireStateAcquired = 2,
	}

	// BrnWorldModule.h:172
	enum EResourceAcquireStage {
		E_RESOURCESTAGE_START = 0,
		E_RESOURCESTAGE_LOADING_VAULT = 1,
		E_RESOURCESTAGE_ACQUIRING_VAULT = 2,
		E_RESOURCESTAGE_REGISTERING_VAULT = 3,
		E_RESOURCESTAGE_DONE = 4,
	}

	// BrnWorldModule.h:181
	enum DistrictMapLoadStage {
		E_DISTRICT_MAP_LOAD_REQUEST = 0,
		E_DISTRICT_MAP_LOAD_RESPONSE = 1,
		E_DISTRICT_MAP_ACQUIRE_REQUEST = 2,
		E_DISTRICT_MAP_ACQUIRE_RESPONSE = 3,
		E_DISTRICT_MAP_DONE = 4,
	}

private:
	// BrnWorldModule.h:277
	WorldModule::EWorldPrepareStage mePrepareStage;

	// BrnWorldModule.h:278
	WorldModule::EWorldReleaseStage meReleaseStage;

	// BrnWorldModule.h:279
	WorldModule::EResourceAcquireStage meVaultResourceStage;

	// BrnWorldModule.h:280
	WorldModule::DistrictMapLoadStage meDistrictMapLoadStage;

	// BrnWorldModule.h:282
	BrnWorld::RaceCarEntityModule mRaceCarEntityModule;

	// BrnWorldModule.h:283
	BrnTraffic::TrafficEntityModule mTrafficEntityModule;

	// BrnWorldModule.h:284
	BrnWorld::WorldEntityModule mWorldEntityModule;

	// BrnWorldModule.h:285
	BrnWorld::PropEntityModule mPropEntityModule;

	// BrnWorldModule.h:286
	BrnWorld::TriggerEntityModule mTriggerEntityModule;

	// BrnWorldModule.h:288
	BrnPhysics::PhysicsModule mPhysicsModule;

	// BrnWorldModule.h:290
	BrnEnvironmentManager mEnvironmentManager;

	// Unknown accessibility
	// BrnSkyDebugComponent.h:39
	typedef DebugComponent SkyDebugComponent;

	// BrnWorldModule.h:292
	WorldModule::SkyDebugComponent mSkyDebugComponent;

	// BrnWorldModule.h:295
	CgsSceneManager::SceneManagerModule mSceneModule;

	// BrnWorldModule.h:297
	BrnAI::AIModule mAIModule;

	// BrnWorldModule.h:299
	CrashModule mCrashModule;

	// BrnWorldModule.h:301
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnWorldModule.h:304
	bool mbResourcesLoaded;

	// BrnWorldModule.h:305
	WorldModule::EResourceAcquireState meResourceState;

	// BrnWorldModule.h:307
	EActiveRaceCarIndex meLocalPlayerActiveRaceCarIndex;

	// BrnWorldModule.h:308
	float32_t mfLocalPlayerActiveRaceCarSpeed;

	// BrnWorldModule.h:309
	BrnWorld::CarControl[8] maeCarControls;

	// BrnWorldModule.h:310
	bool mbDEBUGPlayerCarAlwaysUnderAIControl;

	// BrnWorldModule.h:313
	int32_t mnDEBUGKBToStoreEachFrame;

	// BrnWorldModule.h:314
	bool mbStoreKBEachFrame;

	// BrnWorldModule.h:317
	bool[6] mabEnvMapFaceRender;

	// BrnWorldModule.h:318
	bool mbRenderFirstEnvMapFaces;

	// BrnWorldModule.h:319
	bool mb30hzEnvironmentMap;

	// BrnWorldModule.h:320
	bool mbFirstRenderFrame;

	// BrnWorldModule.h:322
	bool mbForceOnlyBackdrops;

	// BrnWorldModule.h:323
	bool mbRenderBackdrops;

	// BrnWorldModule.h:324
	float32_t mfCarKeyLightMultiplier;

	// BrnWorldModule.h:325
	float32_t mfCarAmbientLightMultiplier;

	// BrnWorldModule.h:330
	WorldDebugComponent mDebugComponent;

	// BrnWorldModule.h:333
	ResourceHandle mAttribSysVaultResourceHandle;

	// BrnWorldModule.h:334
	ResourceHandle mDistrictMapResourceHandle;

	// BrnWorldModule.h:338
	int32_t miSceneManagerUpdatePM;

	// BrnWorldModule.h:339
	int32_t miSceneManagerQueryPM;

	// BrnWorldModule.h:340
	int32_t miSceneManagerFrustumPM;

	// BrnWorldModule.h:343
	int32_t miCrashModuleUpdatePM;

	// BrnWorldModule.h:344
	int32_t miSceneModuleUpdateContactsPM;

	// BrnWorldModule.h:345
	int32_t miAIModuleUpdatePM;

	// BrnWorldModule.h:346
	int32_t miPhysicsSummaryPM;

	// BrnWorldModule.h:347
	int32_t miPhysicsBridgesPM;

	// BrnWorldModule.h:348
	int32_t miPhysicsNetworkCatchupPM;

	// BrnWorldModule.h:349
	int32_t miPhysicsModulePreSceneUpdatePM;

	// BrnWorldModule.h:350
	int32_t miPhysicsModuleGenerateSceneQueriesPM;

	// BrnWorldModule.h:351
	int32_t miPhysicsModuleUpdatePM;

	// BrnWorldModule.h:352
	int32_t miPhysicsPropSummaryPM;

	// BrnWorldModule.h:353
	int32_t miPhysicsPropBridgePM;

	// BrnWorldModule.h:354
	int32_t miPhysicsPropPreSceneUpdatePM;

	// BrnWorldModule.h:355
	int32_t miPhysicsPropPrePhysicsUpdatePM;

	// BrnWorldModule.h:356
	int32_t miPhysicsPropPostPhysicsUpdatePM;

	// BrnWorldModule.h:357
	int32_t miPhysicsPropPostScenePM;

	// BrnWorldModule.h:358
	int32_t miWorldModuleDataDumpPM;

	// BrnWorldModule.h:360
	int32_t miRaceCarSceneModuleQueriesTrace;

	// BrnWorldModule.h:361
	int32_t miTrafficSceneModuleQueriesTrace;

	// BrnWorldModule.h:362
	int32_t miWorldSceneModuleQueriesTrace;

	// BrnWorldModule.h:363
	int32_t miPropSceneModuleQueriesTrace;

	// BrnWorldModule.h:364
	int32_t miTriggerSceneModuleQueriesTrace;

	// BrnWorldModule.h:365
	int32_t miSceneContactsQueriesTrace;

	// BrnWorldModule.h:366
	int32_t miSceneUpdateTrace;

	// BrnWorldModule.h:368
	int32_t miSceneManagerFrustumTestPM;

	// BrnWorldModule.h:369
	int32_t miSceneManagerFrustumTestStartJobsPM;

	// BrnWorldModule.h:370
	int32_t miSceneManagerFrustumTestWaitOnJobsPM;

	// BrnWorldModule.h:372
	int32_t miGenerateDispatchListsPM;

	// BrnWorldModule.h:373
	int32_t miFrustumTestFilterPM;

	// BrnWorldModule.h:374
	int32_t miPropGenerateDispListClearPM;

	// BrnWorldModule.h:375
	int32_t miTrafficGenerateDispListClearPM;

	// BrnWorldModule.h:376
	int32_t miRaceCarGenerateDispListClearPM;

	// BrnWorldModule.h:378
	BrnCpuMonitors mGlobalCpuMonitors;

	// BrnWorldModule.h:381
	Camera mLastCameraInput;

	// BrnWorldModule.h:383
	EnvironmentMap mEnvironmentMap;

	// BrnWorldModule.h:384
	ShadowMap mShadowMap;

	// BrnWorldModule.h:385
	ShaderLodInfo mShaderLodInfo;

	// BrnWorldModule.h:386
	bool mbIsInJunkyard;

public:
	// BrnWorldModule.cpp:185
	virtual void Construct(const BrnCpuMonitors &);

	// BrnWorldModule.cpp:339
	virtual bool Prepare(IOBufferStack *, IOBufferStack *, UpdateOutputBuffer *, const AllocatorList *);

	// BrnWorldModule.cpp:891
	bool PrepareWorldCollision(IOBufferStack *, IOBufferStack *, UpdateOutputBuffer *);

	// BrnWorldModule.cpp:940
	virtual bool Release(IOBufferStack *, UpdateOutputBuffer *);

	// BrnWorldModule.cpp:1113
	virtual void Destruct();

	// BrnWorldModule.cpp:1241
	virtual void Update(BrnUpdateSet, IOBufferStack *, IOBufferStack *, const UpdateInputBuffer *, UpdateOutputBuffer *, LinearMalloc *);

	// BrnWorldModule.cpp:1179
	void UpdateForBootUpVideo(BrnUpdateSet, IOBufferStack *, IOBufferStack *, const UpdateInputBuffer *, UpdateOutputBuffer *);

	// BrnWorldModule.cpp:2074
	void ExternalSceneQueriesUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *, BrnUpdateSet);

	// BrnWorldModule.cpp:2720
	void GenerateFrustumQueries(IOBufferStack *, IOBufferStack *, const DispatchInputBuffer *, DispatchOutputBuffer *, const BrnUpdateSet &);

	// BrnWorldModule.cpp:2920
	// Declaration
	void GenerateDispatchLists(IOBufferStack *, IOBufferStack *, const DispatchInputBuffer *, DispatchOutputBuffer *, const BrnUpdateSet &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWorldModule.cpp:2922
		using namespace CgsContainers;

		// BrnWorldModule.cpp:2923
		using namespace CgsSceneManager;

	}

	// BrnWorldModule.cpp:1152
	void BridgeInputToOutput(const UpdateInputBuffer *, UpdateOutputBuffer *);

	// BrnWorldModule.h:268
	void DebugMemoryInit(WorldModule *);

private:
	// BrnWorldModule.cpp:2091
	bool LoadAttribSysVault(UpdateOutputBuffer *);

	// BrnWorldModule.cpp:2186
	bool LoadDistrictMap(UpdateOutputBuffer *);

	// BrnWorldModule.cpp:4448
	void FilterFrustumTestResults(const OutEventCoarseTestResult *, Array<CgsSceneManager::EntityId,4500u> &, Array<CgsSceneManager::EntityId,32u> &, Array<CgsSceneManager::EntityId,650u> &, Array<CgsSceneManager::EntityId,5400u> &);

	// BrnWorldModule.cpp:3556
	void EntityModulePreSceneUpdate(IOBufferStack *, IOBufferStack *, InputBuffer_PreScene *, OutputBuffer_PreScene *, InputBuffer_PreScene *, OutputBuffer_PreScene *, InputBuffer_PostScene *, InputBuffer_PostPhysics *, InputBuffer_PreScene *, OutputBuffer_PreScene *, InputBuffer_PreScene *, OutputBuffer_PreScene *, InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnWorldModule.cpp:3662
	void EntityModulePostSceneUpdate(IOBufferStack *, IOBufferStack *, InputBuffer_PrePhysics *, const InputBuffer_PostScene *, InputBuffer_PostScene *, const TrafficToRaceCarInterface_PreScene *, OutputBuffer_PostScene *, InputBuffer_PrePhysics *, InputBuffer_PostPhysics *, InputBuffer_PostScene *, OutputBuffer_PostScene *, InputBuffer_PrePhysics *, OutputBuffer_PreScene *, InputBuffer_PostScene *, OutputBuffer_PostScene *, InputBuffer_PostScene *, OutputBuffer_PostScene *, BrnUpdateSet);

	// BrnWorldModule.cpp:3867
	void EntityModulePrePhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, OutputBuffer *, InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, const OutputBuffer_PostScene *, InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BrnUpdateSet);

	// BrnWorldModule.cpp:3976
	void EntityModulePostPhysicsUpdate(IOBufferStack *, IOBufferStack *, const OutputBuffer *, InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

	// BrnWorldModule.cpp:2289
	void UpdatePhysicsNetworkCatchup(IOBufferStack *, IOBufferStack *, InputBuffer *, const OutputBuffer *, BrnUpdateSet);

	// BrnWorldModule.cpp:4067
	void HandleGameActions(InputBuffer *, InputBuffer_PostPhysics *, InputBuffer_PreScene *, InputBuffer_PostPhysics *, const UpdateInputBuffer *);

	// BrnWorldModule.cpp:4193
	// Declaration
	void GenerateShadowMapDispatchLists(const Camera *, float32_t, const DispatchInputBuffer *, OutputBuffer *, IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists> &, InputBuffer_GenerateDispatchLists *, InputBuffer_Dispatch *, InputBuffer_Dispatch *, FilteredEntityData *, uint32_t *, const OutputBuffer::OutSmSceneQueryResultsQueue *, const CgsModule::Event *, int32_t, OutputBuffer_PreDispatch *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWorldModule.cpp:4195
		using namespace CgsSceneManager;

		// BrnWorldModule.cpp:4196
		using namespace CgsContainers;

	}

	// BrnWorldModule.cpp:2596
	void CalculateVehicleLODs(Vector3, float32_t, Array<CgsSceneManager::EntityId,32u> &, Array<BrnTraffic::VehicleRenderInfo,64u> &);

	// BrnWorldModule.h:535
	void BridgeTrafficModuleToSceneModule_Prepare(InputBuffer_Update *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:540
	void BridgePropModuleToSceneModule_Prepare(InputBuffer_Update *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:545
	void BridgePropModuleToPhysicsModule_Prepare(InputBuffer *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:556
	void BridgeInputToEntityModules(InputBuffer_PreScene *, InputBuffer_PostScene *, InputBuffer_PreScene *, InputBuffer_PreScene *, InputBuffer_PrePhysics *, InputBuffer_PreScene *, InputBuffer_PreScene *, const UpdateInputBuffer *);

	// BrnWorldModule.h:561
	void CheckForNetworkDriverControlsReceived(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// BrnWorldModule.h:566
	void BridgeInputToAIModule(InputBuffer *, const UpdateInputBuffer *);

	// BrnWorldModule.h:571
	void BridgeInputToPhysicsModule(InputBuffer *, const UpdateInputBuffer *);

	// BrnWorldModule.h:576
	void BridgeInputToCrashModule(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// BrnWorldModule.h:582
	void BridgeEntityModulesToCrashModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:587
	void BridgeCrashModuleToPhysicsModule(InputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:592
	void BridgeCrashModuleToTrafficModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:597
	void BridgeTrafficToCrashModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:606
	void BridgeRaceCarModuleToTrafficModule_PreScene(InputBuffer_PreScene *, InputBuffer_PostScene *, InputBuffer_PostPhysics *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:611
	void BridgeTrafficToTrigger_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:616
	void BridgeRaceCarModuleToWorldModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:621
	void BridgeWorldModuleToPropModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:624
	void BridgeEntityModulesToCrash_PreScene();

	// BrnWorldModule.h:631
	void BridgeRaceCarModuleToAIModule_PreScene(InputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:636
	void BridgeRaceCarModuleToAIModule_PostScene(InputBuffer *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:641
	void BridgeTrafficModuleToAIModule_Update(InputBuffer *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:652
	void BridgeEntityModulesToSceneModule_PreScene(InputBuffer_Update *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:659
	void BridgeCrashModuleToRaceCarModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:662
	void BridgeCrashModuleToPropCarModule_PostScene();

	// BrnWorldModule.h:669
	void BridgeRaceCarModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:674
	void BridgeTrafficModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:678
	void BridgeWorldModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// BrnWorldModule.h:682
	void BridgePropModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// BrnWorldModule.h:687
	void BridgeTriggerModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:692
	void BridgeAIModuleToSceneModule_SceneQueries(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:699
	void BridgePhysicsSceneQueriesToScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer *);

	// BrnWorldModule.h:704
	void BridgePhysicsSceneUpdateToScene(InputBuffer_Update *, const OutputBuffer *);

	// BrnWorldModule.h:710
	void BridgeAISceneQueriesToScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// BrnWorldModule.h:717
	void BridgeSceneQueryResultsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:723
	void BridgeSceneQueryResultsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:727
	void BridgeSceneQueryResultsToWorldModule_PrePhysics(const OutputBuffer *);

	// BrnWorldModule.h:731
	void BridgeSceneQueryResultsToPropModule_PrePhysics(const OutputBuffer *);

	// BrnWorldModule.h:736
	void BridgeSceneQueryResultsToTriggerModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:742
	void BridgeRaceCarModuleToTrafficModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:748
	void BridgeSceneQueryResultsToPhysics(InputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:754
	void BridgeSceneQueryResultsToAIModule_Update(InputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:760
	void BridgeScenePotentialContactsToPhysics(InputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:765
	void BridgeSceneContactsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:770
	void BridgeSceneContactsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:774
	void BridgeSceneContactsToWorldModule_PrePhysics(const OutputBuffer *);

	// BrnWorldModule.h:779
	void BridgeSceneContactsToPropModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:785
	void BridgeTrafficToRaceCar_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PostScene *);

	// BrnWorldModule.h:790
	void BridgeRaceCarModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:797
	void BridgeAIToEntityModules_PrePhysics(InputBuffer_PrePhysics *, InputBuffer_PrePhysics *, const OutputBuffer *);

	// BrnWorldModule.h:804
	void BridgeEntityModulesToPhysicsModule_PreScene(InputBuffer *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:811
	void BridgeEntityModulesToPhysicsModule_PrePhysics(InputBuffer *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:817
	void BridgePhysicsModuleToRaceCarModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:822
	void BridgePhysicsModuleToCrashModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:827
	void BridgePhysicsModuleToTrafficModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:832
	void BridgePhysicsModuleToPropModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:837
	void BridgePropModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:842
	void BridgePhysicsModuleToAIModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:847
	void BridgeAIModuleToPhysicsModule(InputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:852
	void BridgeAIToEntityModules_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// BrnWorldModule.h:860
	void BridgeEntityModulesToScene_PostPhysics(InputBuffer_Update *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:869
	void BridgeWorldModuleToEntityModules_Render(InputBuffer_Dispatch *, InputBuffer_GenerateDispatchLists *, InputBuffer_GenerateDispatchLists *, InputBuffer_Dispatch *, const DispatchInputBuffer *);

	// BrnWorldModule.h:875
	void BridgeSceneModuleToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:882
	void BridgeEntityModulesToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:890
	void BridgeEntityModulesToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:895
	void BridgeAIModuleToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:900
	void BridgeRaceCarResourceRequestsToOutput(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:905
	void BridgeRaceCarResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:910
	void BridgeTrafficResourceRequestsToOutput(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:915
	void BridgeWorldResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:920
	void BridgeWorldResourceRequestsToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:925
	void BridgePropResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// BrnWorldModule.h:930
	void BridgePropToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:935
	void BridgePhysicsToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// BrnWorldModule.h:940
	void BridgeRaceCarModuleToPropModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:945
	void BridgeCrashModuleToPropModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:950
	void BridgeRaceCarEntityInfoToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:955
	void BridgeRaceCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:960
	void BridgeTrafficCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *);

	// BrnWorldModule.h:965
	void BridgeRaceCarEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:970
	void BridgeTrafficEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.h:975
	void BridgeTrafficEntityInfoToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:980
	void BridgeWorldEntityInfoToOutput(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// BrnWorldModule.h:985
	void BridgeCrashModuleToOutput(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// BrnWorldModule.cpp:2434
	void SetupShaderConstantsBeforeRendering(Matrix44, Matrix44Affine, float32_t, float32_t, BrnShaderConstantsFrame *, DispatchOutputBuffer *);

	// BrnWorldModule.cpp:2306
	void DebugRenderCamera(const Camera &, bool);

	// BrnWorldModule.h:1006
	void BridgeActionsToRaceCarModule(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// BrnWorldModule.h:1011
	void BridgeActionsToTrafficModule(InputBuffer_PostPhysics *, const UpdateInputBuffer *);

	// BrnWorldModule.h:1016
	void BridgeActionsToWorldModule(InputBuffer_PostPhysics *, const UpdateInputBuffer *);

	// BrnWorldModule.h:1021
	void BridgeActionsToPhysicsModule(InputBuffer *, const UpdateInputBuffer *);

}

// BrnWorldModule.h:67
namespace BrnJuice {
	struct BrnJuice;

	// Declaration
	struct BrnJuiceScripting {
	public:
		virtual ~BrnJuiceScripting();

		BrnJuiceScripting();

	}

	// Declaration
	struct JuiceNetworkScriptInterface {
	public:
		virtual ~JuiceNetworkScriptInterface();

		JuiceNetworkScriptInterface();

	}

	// Declaration
	struct JuiceGuiScriptInterface {
	public:
		virtual ~JuiceGuiScriptInterface();

		JuiceGuiScriptInterface();

	}

	// Declaration
	struct JuiceGameStateScriptInterface {
	public:
		virtual ~JuiceGameStateScriptInterface();

		JuiceGameStateScriptInterface();

	}

	// Declaration
	struct JuiceWorldScriptInterface {
	public:
		virtual ~JuiceWorldScriptInterface();

		JuiceWorldScriptInterface();

	}

}

// BrnWorldModule.h:124
void WorldModule::WorldModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWorldModule.h:124
void WorldModule::~WorldModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

