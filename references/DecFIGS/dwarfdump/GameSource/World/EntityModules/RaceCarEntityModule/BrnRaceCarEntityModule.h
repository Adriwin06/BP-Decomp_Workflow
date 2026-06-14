// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct RaceCarEntityModule {
		// BrnRaceCarEntityModule.h:285
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_LOADINITIALCARS = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// BrnRaceCarEntityModule.h:293
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// BrnRaceCarEntityModule.h:300
		enum EInitialLoadStage {
			E_INITIALLOADSTAGE_START = 0,
			E_INITIALLOADSTAGE_PLAYERCARCOLOURS = 1,
			E_INITIALLOADSTAGE_WFPLAYERCARCOLOURS = 2,
			E_INITIALLOADSTAGE_LOADSHAREDTEXTURES = 3,
			E_INITIALLOADSTAGE_WFLOADSHAREDTEXTURES = 4,
			E_INITIALLOADSTAGE_VEHICLELISTAQUIRE = 5,
			E_INITIALLOADSTAGE_WFVEHICLELISTAQUIRE = 6,
			E_INITIALLOADSTAGE_VEHICLEGRAPHICSLOAD = 7,
			E_INITIALLOADSTAGE_WFVEHICLEGRAPHICSLOAD = 8,
			E_INITIALLOADSTAGE_WHEELLISTAQUIRE = 9,
			E_INITIALLOADSTAGE_WFWHEELLISTAQUIRE = 10,
			E_INITIALLOADSTAGE_WHEELGRAPHICSLOAD = 11,
			E_INITIALLOADSTAGE_WFWHEELGRAPHICSLOAD = 12,
			E_INITIALLOADSTAGE_PHYSICSLOAD = 13,
			E_INITIALLOADSTAGE_WFPHYSICSLOAD = 14,
			E_INITIALLOADSTAGE_ATTRIBSLOAD = 15,
			E_INITIALLOADSTAGE_WFATTRIBSLOAD = 16,
			E_INITIALLOADSTAGE_DONE = 17,
		}

	}

	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnRaceCarEntityModule.h:95
struct BrnWorld::StoredStompeeData {
	// BrnRaceCarEntityModule.h:96
	Vector3 mPosition;

	// BrnRaceCarEntityModule.h:97
	EntityId mEntityId;

}

// BrnRaceCarEntityModule.h:109
struct BrnWorld::RaceCarEntityModule : public CgsModule::ModuleSingleBuffered {
	// BrnRaceCarEntityModule.h:261
	extern bool DEBUG_mbUseDynamicLODs;

	// BrnRaceCarEntityModule.h:262
	extern bool DEBUG_mbUseFixedLODs;

	// BrnRaceCarEntityModule.h:263
	extern bool DEBUG_mbUseAggressiveLODs;

	// BrnRaceCarEntityModule.h:264
	extern uint32_t DEBUG_miVehicleLOD;

	// BrnRaceCarEntityModule.h:265
	extern uint32_t DEBUG_miWheelLOD;

	// BrnRaceCarEntityModule.cpp:214
	extern uint32_t DEBUG_miWheelsToRender;

private:
	// BrnRaceCarEntityModule.h:283
	float32_t mfClippedTime;

	// BrnRaceCarEntityModule.h:327
	BrnWorld::RaceCarEntityModule::EPrepareStage mePrepareStage;

	// BrnRaceCarEntityModule.h:328
	BrnWorld::RaceCarEntityModule::EReleaseStage meReleaseStage;

	// BrnRaceCarEntityModule.h:329
	BrnWorld::RaceCarEntityModule::EInitialLoadStage meInitialLoadStage;

	// BrnRaceCarEntityModule.h:330
	int32_t miResourceCount;

	// BrnRaceCarEntityModule.h:331
	ResourceHandle mDistrictMapResourceHandle;

	// BrnRaceCarEntityModule.h:334
	WorldRegion mCurrentWorldRegion;

	// BrnRaceCarEntityModule.h:337
	RaceCar[35] maRaceCars;

	// BrnRaceCarEntityModule.h:338
	ActiveRaceCar[8] maActiveRaceCars;

	// BrnRaceCarEntityModule.h:339
	BitArray<8u> mabResetThisFrame;

	// BrnRaceCarEntityModule.h:341
	EventReceiverQueue<4096,16> mReceiverQueue;

	// BrnRaceCarEntityModule.h:343
	RaceCarStreamer mRaceCarStreamer;

	// BrnRaceCarEntityModule.h:346
	PlaceOnTrackManager mPlaceOnTrackManager;

	// BrnRaceCarEntityModule.h:347
	BoostManager mBoostManager;

	// BrnRaceCarEntityModule.h:349
	RaceCarEntityModuleDebugComponent mRCEntityModuleDebugComponent;

	// BrnRaceCarEntityModule.h:350
	BoostDebugComponent mBoostDebugComponent;

	// BrnRaceCarEntityModule.h:352
	NearMissManager mNearMissManager;

	// BrnRaceCarEntityModule.h:353
	AirTimeManager mAirTimeManager;

	// BrnRaceCarEntityModule.h:354
	TrafficCheckManager mTrafficCheckManager;

	// BrnRaceCarEntityModule.h:355
	CrashPlayManager mCrashPlayManager;

	// BrnRaceCarEntityModule.h:356
	PowerParkingManager mPowerParkingManager;

	// BrnRaceCarEntityModule.h:357
	float32_t mfCurrentTailgateDuration;

	// BrnRaceCarEntityModule.h:358
	EActiveRaceCarIndex meIndexOfCarPlayerIsTailgating;

	// BrnRaceCarEntityModule.h:360
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnRaceCarEntityModule.h:363
	WorldMap2D mWorldMap2D;

	// BrnRaceCarEntityModule.h:365
	surfacelist mSurfaceList;

	// BrnRaceCarEntityModule.h:367
	int32_t miOpponentCount;

	// BrnRaceCarEntityModule.h:370
	bool mbIsInGameMode;

	// BrnRaceCarEntityModule.h:371
	bool mbIsInOnlineGameMode;

	// BrnRaceCarEntityModule.h:372
	bool mbOnlineModeJustFinished;

	// BrnRaceCarEntityModule.h:373
	bool mbCarSelectAllowedInGameMode;

	// BrnRaceCarEntityModule.h:374
	bool mbWaitingForStreaming;

	// BrnRaceCarEntityModule.h:375
	bool mbDisplayPlayerCarPosition;

	// BrnRaceCarEntityModule.h:376
	bool mbRivalDebug;

	// BrnRaceCarEntityModule.h:377
	bool mbRenderCarsDuringCrash;

	// BrnRaceCarEntityModule.h:378
	bool mbRenderWheels;

	// BrnRaceCarEntityModule.h:379
	bool mbSixaxisSteeringEnabled;

	// BrnRaceCarEntityModule.h:380
	bool mbPaybackSixaxisSteering;

	// BrnRaceCarEntityModule.h:381
	bool mbRenderRaceCarCoronas;

	// BrnRaceCarEntityModule.h:382
	bool mbSpawnAIBehindStartGrid;

	// BrnRaceCarEntityModule.h:383
	bool mbPlayerRollsOnEventStart;

	// BrnRaceCarEntityModule.h:384
	bool mbPlayerDonutsOnEventStart;

	// BrnRaceCarEntityModule.h:385
	bool mbUseRankUpAISpawnSeparation;

	// BrnRaceCarEntityModule.h:386
	bool mbModeStartedPlaying;

	// BrnRaceCarEntityModule.h:388
	uint64_t mxGameModeFlags;

	// BrnRaceCarEntityModule.h:390
	bool[8] mabCarSelectWaitForStreaming;

	// BrnRaceCarEntityModule.h:395
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnRaceCarEntityModule.h:397
	AggressiveDrivingFlags mAggressiveDrivingFlags;

	// BrnRaceCarEntityModule.h:400
	bool mbSendStreamingComplete;

	// BrnRaceCarEntityModule.h:401
	BrnProgression::ETrainingType[8] mePendingTrainingRequestQueue;

	// BrnRaceCarEntityModule.h:402
	int32_t miPendingRequestCount;

	// BrnRaceCarEntityModule.h:405
	float32_t mfSimTimerTimeStep;

	// BrnRaceCarEntityModule.h:406
	float32_t mfIntroTimer;

	// BrnRaceCarEntityModule.h:407
	float32_t mfSimTime;

	// BrnRaceCarEntityModule.h:408
	float32_t mfTimeStepMultiplier;

	// BrnRaceCarEntityModule.h:409
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnRaceCarEntityModule.h:410
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnRaceCarEntityModule.h:411
	EActiveRaceCarIndex meActivePaybackAggressor;

	// BrnRaceCarEntityModule.h:412
	Matrix44Affine mCameraTransform;

	// BrnRaceCarEntityModule.h:413
	bool mbDEBUGPlayerUsingReset;

	// BrnRaceCarEntityModule.h:415
	const BrnResource::VehicleList * mpVehicleList;

	// BrnRaceCarEntityModule.h:416
	const BrnResource::WheelList * mpWheelList;

	// BrnRaceCarEntityModule.h:417
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnRaceCarEntityModule.h:419
	Random mDeterministicRandom;

	// BrnRaceCarEntityModule.h:420
	Random mNonDeterministicRandom;

	// BrnRaceCarEntityModule.h:421
	float32_t mfLastPlayerCarSpeed;

	// BrnRaceCarEntityModule.h:422
	float32_t mfRandomBoostTime;

	// BrnRaceCarEntityModule.h:423
	bool mbRandomBoostOn;

	// BrnRaceCarEntityModule.h:424
	float32_t mfResetOnWaterHeight;

	// BrnRaceCarEntityModule.h:426
	BrnPhysics::Deformation::DeformationResetType meDeformationResetType;

	// BrnRaceCarEntityModule.h:427
	BrnPhysics::Deformation::DeformationResetType meDeformationResetTypeStartOfMode;

	// BrnRaceCarEntityModule.h:429
	float32_t mfPlayerDeformMin;

	// BrnRaceCarEntityModule.h:430
	bool mbRepairPlayerDeformation;

	// BrnRaceCarEntityModule.h:431
	float32_t mfPlayerStartOfModeDeform;

	// BrnRaceCarEntityModule.h:433
	StoredStompeeData[8] mStoredStompees;

	// BrnRaceCarEntityModule.h:434
	int32_t miStoredStompeeCount;

	// BrnRaceCarEntityModule.h:437
	bool mbInReplay;

	// BrnRaceCarEntityModule.h:438
	bool mbReplayRestored;

	// BrnRaceCarEntityModule.h:439
	RaceCarEntitySerialiser mReplaySerialiser;

	// BrnRaceCarEntityModule.h:440
	Matrix44Affine mReplayTransform;

	// BrnRaceCarEntityModule.h:441
	bool mbInvalidatedRaceCars;

	// BrnRaceCarEntityModule.h:444
	bool mbInCarSelectScreen;

	// BrnRaceCarEntityModule.h:445
	bool mbInCarModScreen;

	// BrnRaceCarEntityModule.h:446
	BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType meCarSelectResetType;

	// BrnRaceCarEntityModule.h:447
	bool mbCarSelectDontStreamAudio;

	// BrnRaceCarEntityModule.h:448
	bool mbHACK_ExitingCarSelectWaitForAudio;

	// BrnRaceCarEntityModule.h:450
	RaceCarNeedsHidingEvent[8] mHidingEvents;

	// BrnRaceCarEntityModule.h:451
	int32_t miHidingEvents;

	// BrnRaceCarEntityModule.h:453
	bool mbOncomingTimerActive;

	// BrnRaceCarEntityModule.h:454
	float32_t mfOncomingNoClueTimer;

	// BrnRaceCarEntityModule.h:457
	Vector2 mPlayersCurrentRouteNodePosition;

	// BrnRaceCarEntityModule.h:458
	Vector2 mPlayersNextRouteNodePosition;

	// BrnRaceCarEntityModule.h:462
	bool DEBUG_mbSpawnDebugRaceCarThisFrame;

	// BrnRaceCarEntityModule.h:463
	bool DEBUG_mbCleanDebugRaceCarThisFrame;

	// BrnRaceCarEntityModule.h:464
	bool DEBUG_mbDebugRaceCarIsActive;

	// BrnRaceCarEntityModule.h:466
	Vector3 DEBUG_mDebugRaceCarPosition;

	// BrnRaceCarEntityModule.h:467
	Vector3 DEBUG_mDebugRaceCarDirection;

	// BrnRaceCarEntityModule.h:468
	float32_t DEBUG_mfDebugRaceCarVelocity;

	// BrnRaceCarEntityModule.h:469
	RaceCar * DEBUG_mpDebugRaceCar;

	// BrnRaceCarEntityModule.h:471
	bool DEBUG_mbOverrideDamage;

	// BrnRaceCarEntityModule.h:472
	float32_t DEBUG_mfVehicleScratchAmount;

	// BrnRaceCarEntityModule.h:473
	float32_t DEBUG_mfVehicleDustAmount;

	// BrnRaceCarEntityModule.h:474
	float32_t DEBUG_mfVehicleCrumpleAmount;

	// BrnRaceCarEntityModule.h:476
	float32_t DEBUG_mfSelfIlluminationR;

	// BrnRaceCarEntityModule.h:477
	float32_t DEBUG_mfSelfIlluminationG;

	// BrnRaceCarEntityModule.h:478
	float32_t DEBUG_mfSelfIlluminationB;

	// BrnRaceCarEntityModule.h:480
	bool DEBUG_mbOverrideCarColor;

	// BrnRaceCarEntityModule.h:481
	float32_t DEBUG_mfOverridePaintColorR;

	// BrnRaceCarEntityModule.h:482
	float32_t DEBUG_mfOverridePaintColorG;

	// BrnRaceCarEntityModule.h:483
	float32_t DEBUG_mfOverridePaintColorB;

	// BrnRaceCarEntityModule.h:484
	float32_t DEBUG_mfOverridePearlColorR;

	// BrnRaceCarEntityModule.h:485
	float32_t DEBUG_mfOverridePearlColorG;

	// BrnRaceCarEntityModule.h:486
	float32_t DEBUG_mfOverridePearlColorB;

	// BrnRaceCarEntityModule.h:487
	bool DEBUG_mbOverrideCarPalette;

	// BrnRaceCarEntityModule.h:488
	int32_t DEBUG_miPaletteIndex;

	// BrnRaceCarEntityModule.h:489
	int32_t DEBUG_miColourIndex;

	// BrnRaceCarEntityModule.cpp:215
	extern Random mRandom;

	// BrnRaceCarEntityModule.h:496
	EActiveRaceCarIndex[8] maeActiveRaceCarIndex;

	// BrnRaceCarEntityModule.h:499
	bool mbSetRaceCarEliminated;

	// BrnRaceCarEntityModule.h:500
	EActiveRaceCarIndex mCarToCrashActiveIndex;

	// BrnRaceCarEntityModule.h:503
	int32_t miPreSceneUpdatePM;

	// BrnRaceCarEntityModule.h:504
	int32_t miPostSceneUpdatePM;

	// BrnRaceCarEntityModule.h:505
	int32_t miPrePhysicsUpdatePM;

	// BrnRaceCarEntityModule.h:506
	int32_t miPostPhysicsUpdatePM;

	// BrnRaceCarEntityModule.cpp:217
	extern const SceneQueryId K_NEAR_MISS_VOLUME_QUERY_ID;

public:
	// BrnRaceCarEntityModule.h:118
	void E3HACK_PlayerCarToLOD_0();

	// BrnRaceCarEntityModule.cpp:424
	virtual void Construct();

	// BrnRaceCarEntityModule.cpp:840
	virtual void Destruct();

	// BrnRaceCarEntityModule.cpp:651
	bool Prepare(OutputBuffer_Prepare *, ResourceHandle);

	// BrnRaceCarEntityModule.cpp:784
	virtual bool Release();

	// BrnRaceCarEntityModule.cpp:5889
	void ProcessPropContactQueue(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:969
	void PreSceneUpdate(const InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnRaceCarEntityModule.cpp:1144
	void PostSceneUpdate(const InputBuffer_PostScene *, OutputBuffer_PostScene *, BrnUpdateSet);

	// BrnRaceCarEntityModule.cpp:1688
	void PrePhysicsUpdate(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BrnUpdateSet);

	// BrnRaceCarEntityModule.cpp:2591
	void PostPhysicsUpdate(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

	// BrnRaceCarEntityModule.cpp:3081
	// Declaration
	void GenerateDispatchLists(const InputBuffer_GenerateDispatchLists *, const Array<CgsSceneManager::EntityId,32u> &, Vector4, Vector4, Vector3, int32_t, int32_t, int32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:3104
		using namespace CgsSceneManager;

	}

	// BrnRaceCarEntityModule.cpp:8991
	void DebugMemoryInit(BrnWorld::RaceCarEntityModule *);

	// BrnRaceCarEntityModule.cpp:4695
	void TransmitCarsInRaceToQueryManager(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnRaceCarEntityModule.cpp:2772
	void StorePlayerRoutePortalPositions(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:2787
	void SetPaddingForResetRaceCars(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnRaceCarEntityModule.cpp:1765
	void ResetActiveRaceCar(EActiveRaceCarIndex, Matrix44Affine, Vector3, VehicleInputInterface *);

	// BrnRaceCarEntityModule.h:1103
	BrnWorld::ActiveRaceCar * GetActiveRaceCar(EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.h:1128
	const ActiveRaceCar * GetActiveRaceCar(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModule.h:223
	void SetVisibilityFlagsForActiveCars(const Camera *);

	// BrnRaceCarEntityModule.h:1137
	bool IsInCarSelect() const;

	// BrnRaceCarEntityModule.h:1143
	bool IsInCarModScreen() const;

	// BrnRaceCarEntityModule.h:1149
	BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType GetResetCarSelectType() const;

	// BrnRaceCarEntityModule.h:1084
	BrnWorld::ActiveRaceCar * GetPlayerActiveRaceCar();

	// BrnRaceCarEntityModule.h:1078
	const ActiveRaceCar * GetPlayerActiveRaceCar() const;

	// BrnRaceCarEntityModule.h:1090
	RaceCar * GetPlayerRaceCar();

	// BrnRaceCarEntityModule.h:1096
	const RaceCar * GetPlayeraceCar() const;

private:
	// BrnRaceCarEntityModule.cpp:8895
	void ResetClipTime();

	// BrnRaceCarEntityModule.cpp:8919
	bool ClipTimedOut();

	// BrnRaceCarEntityModule.cpp:8907
	void UpdateClipTime();

	// BrnRaceCarEntityModule.cpp:8750
	// Declaration
	void SetHiddenDelay(RaceCar *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:8785
		using namespace CgsDev::Message;

	}

	// BrnRaceCarEntityModule.cpp:8932
	void DEBUG_SpawnRaceCarIfRequested(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:4161
	void UpdateStreaming(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:4258
	void UpdateActiveCars(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t, float32_t, float32_t, float32_t, bool, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnRaceCarEntityModule.cpp:4334
	void UpdateBoost(float32_t, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics::GameEventQueue *);

	// BrnRaceCarEntityModule.cpp:4501
	void UpdateNearMisses(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:4460
	void UpdateTrafficAndRaceCarNearMisses(const InputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:4543
	void UpdatePowerParking(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:4563
	// Declaration
	void UpdateRaceCarContacts(const InputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:4567
		using namespace BrnPhysics::ContactSpy;

	}

	// BrnRaceCarEntityModule.cpp:4641
	void UpdateCrashingPlayerContacts(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.h:562
	void UpdatePlayerCarNear(const InputBuffer_PrePhysics *);

	// BrnRaceCarEntityModule.cpp:4729
	void UpdateOutputBoostInfo(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnRaceCarEntityModule.cpp:4815
	void UpdateOutputInterfaces(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *);

	// BrnRaceCarEntityModule.cpp:4980
	void SendRaceCarSceneUpdates(OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:2461
	void CheckForResetOnTrackConditions(OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:5010
	void SendGameEvents(OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5052
	void SendStreamerEvents(OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5070
	void ProcessCreateVehicleEvents(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.h:603
	uint8_t GetSectorIDFromAnalogValues(float32_t, float32_t) const;

	// BrnRaceCarEntityModule.cpp:1220
	void ProcessRaceCarCrashCompleteEvents(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:1358
	void ProcessTrafficSympatheticCrashers(const InputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:1391
	void ProcessLeapedAndStompedCars(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:1420
	void ProcessPowerParking(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.h:627
	void SendRaceCarGroundLineTestQueries(OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:1477
	void SendResetOnTrackRequests(OutputBuffer_PostScene *);

	// BrnRaceCarEntityModule.cpp:1508
	// Declaration
	void ProcessResetOnTrackResultQueue(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:1570
		using namespace CgsDev::Message;

	}

	// BrnRaceCarEntityModule.cpp:2869
	void UpdateActiveRaceCarTransforms();

	// BrnRaceCarEntityModule.cpp:2887
	void UpdateActiveRaceCarColours();

	// BrnRaceCarEntityModule.cpp:2973
	void UpdateDisconnectedPlayers(const InputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:3004
	void UpdateCurrentWorldRegion(OutputBuffer_PrePhysics::GameEventQueue *);

	// BrnRaceCarEntityModule.cpp:3051
	void UpdateHidingEvents(OutputBuffer_PrePhysics::GameEventQueue *);

	// BrnRaceCarEntityModule.cpp:2818
	void UpdateRaceCars_PreScene(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:2851
	void UpdatePropBoundingBoxes_PreScene(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:5137
	void ProcessRaceCarCrashEvents_PostPhysics(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.h:673
	void UpdateJoystickCrashControlDelay(float32_t, OutputBuffer_PrePhysics *);

	// BrnRaceCarEntityModule.cpp:5208
	void UpdateInAndOutOfRangeCars(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:5416
	void WriteUpdatedAIData(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:5482
	void ReadUpdatedActiveRaceCarDataFromPhysics(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5671
	void UpdateRaceCarCollisionTagging(int32_t, const RaceCarState *);

	// BrnRaceCarEntityModule.cpp:5780
	void CopyAggressiveDrivingDataFromPhysics(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5794
	void ReadOutOfRangeRaceCarDataFromAI(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.h:704
	void ReadUpdatedVerletOffsets(const InputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5859
	void GenerateSceneUpdateEvents(OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:5929
	void ProcessPlayerVehicleInput(float32_t, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *);

	// BrnRaceCarEntityModule.cpp:6214
	bool LoadGlobalResources(OutputBuffer_Prepare *);

	// BrnRaceCarEntityModule.cpp:1922
	EGlobalRaceCarIndex SpawnRaceCar(RaceCarAIInterface *, Matrix44Affine, BrnWorld::ERaceCarType, CgsID, bool, CgsID, const Rival *, int32_t);

	// BrnRaceCarEntityModule.cpp:1994
	void RemoveRaceCar(EGlobalRaceCarIndex, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:2036
	void RemoveAllRaceCars(OutputBuffer_PreScene *, bool);

	// BrnRaceCarEntityModule.cpp:2061
	EActiveRaceCarIndex AttachActiveRaceCar(RaceCar *, EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.cpp:2144
	void OnRaceCarResourcesLoaded(EActiveRaceCarIndex, OutputBuffer_PreScene::VehicleInputInterface *, OutputBuffer_PreScene::RaceCarAIInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnRaceCarEntityModule.cpp:2211
	void SetupCarColour(EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.cpp:2272
	void PlaceRaceCarOnLoad(RaceCar *);

	// BrnRaceCarEntityModule.cpp:2418
	void DetachActiveRaceCar(RaceCar *, OutputBuffer_PreScene::VehicleInputInterface *, OutputBuffer_PreScene::RaceCarAIInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnRaceCarEntityModule.cpp:6517
	void HandleGameActions(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:7338
	// Declaration
	void HandleResetPlayerCarAction(const ResetPlayerCarAction *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:7466
		using namespace CgsDev::Message;

	}

	// BrnRaceCarEntityModule.cpp:7501
	void HandleSetPlayerOpponentsAction(const SetPlayerOpponentsAction *);

	// BrnRaceCarEntityModule.cpp:7538
	// Declaration
	void HandleSelectionRequestStreamingAction(const CarSelectionRequestStreamingAction *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarEntityModule.cpp:7618
		using namespace CgsDev::Message;

	}

	// BrnRaceCarEntityModule.cpp:7653
	void HandleSetupNetworkCarAction(const SetupNetworkCarAction *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:7918
	void HandlePrepareForModeAction(const PrepareForModeAction *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:8179
	void HandleSetBoost(const SetBoostAction *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:8216
	void HandleCarStatsUpdate(BrnResource::ECarType, int32_t, int32_t);

	// BrnRaceCarEntityModule.cpp:8256
	void HandleCarTypeTrainingMessage(BrnResource::ECarType);

	// BrnRaceCarEntityModule.cpp:8271
	void AddTrainingRequest(BrnProgression::ETrainingType);

	// BrnRaceCarEntityModule.cpp:8313
	void HandleStopModeAction(const StopModeAction *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:8612
	void SetupOpponents(const GameModeParams *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:8427
	void SetUpPlayerCarForMode(const GameModeParams *, OutputBuffer_PreScene *, CgsID, CgsID, uint16_t);

	// BrnRaceCarEntityModule.cpp:8529
	void SetUpAIForMode(const GameModeParams *, OutputBuffer_PreScene *, uint16_t);

	// BrnRaceCarEntityModule.cpp:8669
	void RemoveRivals(OutputBuffer_PreScene *, bool);

	// BrnRaceCarEntityModule.cpp:3373
	void RenderRaceCar(CgsGraphics::DispatchFrame *, VecFloat, Vector4, Vector4, const BrnWorld::ActiveRaceCar::RenderParams *, const ResourcePtr<BrnVehicle::GraphicsSpec> &, const ResourcePtr<BrnWheel::GraphicsSpec> &, int32_t, int32_t, int32_t, BrnWorld::ShadowMap *, bool) const;

	// BrnRaceCarEntityModule.cpp:3828
	void SubmitCoronasForRaceCar(BrnCoronaManager::BrnSubmissionInterface *, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, BrnWorld::ActiveRaceCar::RenderParams *, bool) const;

	// BrnRaceCarEntityModule.cpp:8696
	void SetAllCarsOnStartLine(BrnWorld::ERaceStartState, bool);

	// BrnRaceCarEntityModule.cpp:8720
	void SetAllActiveCarsInGameMode(bool);

	// BrnRaceCarEntityModule.h:898
	int32_t CompareRaceCarDistances(const void *, const void *);

	// BrnRaceCarEntityModule.cpp:8799
	bool IsRaceCarWrappable(RaceCar *);

	// BrnRaceCarEntityModule.cpp:9008
	void UpdateCrashGlass(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnRaceCarEntityModule.cpp:6382
	void DebugRenderPosition() const;

	// BrnRaceCarEntityModule.h:1111
	RaceCar * GetGlobalRaceCar(EGlobalRaceCarIndex);

	// BrnRaceCarEntityModule.h:1119
	const RaceCar * GetGlobalRaceCar(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModule.cpp:1589
	bool IsPlayerCarTailgatingOtherRaceCars(EActiveRaceCarIndex, const ActiveRaceCar *);

	// BrnRaceCarEntityModule.cpp:1665
	void UpdateTailgateTimer(float32_t);

	// BrnRaceCarEntityModule.cpp:9020
	void ProcessTakedownEvents(const InputBuffer_PrePhysics::TakedownEventQueue *);

	// BrnRaceCarEntityModule.cpp:8291
	void ChangePlayerCarColour(uint32_t, uint32_t);

	// BrnRaceCarEntityModule.cpp:9058
	void AddRivalCar(const AddRivalAction *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9117
	void RemoveAllRivalsFromWorld(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9140
	void RemoveAllNetworkCarsFromWorld(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9172
	void UpdateSerialiser(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9367
	void EnterReplay(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9390
	void LeaveReplay(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9411
	void AddReplayCarToScene(OutputBuffer_PreScene *, EntityId);

	// BrnRaceCarEntityModule.cpp:9435
	void RemoveReplayCarFromScene(OutputBuffer_PreScene *, EntityId);

	// BrnRaceCarEntityModule.cpp:9451
	void UpdateReplayCarInScene(OutputBuffer_PreScene *, EntityId, BrnWorld::ActiveRaceCar::RenderParams *);

	// BrnRaceCarEntityModule.cpp:9300
	void UpdateReplayStreaming(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.h:1165
	void ClearAllActiveRaceCarToPlayerScoringMappings();

	// BrnRaceCarEntityModule.h:1178
	void ClearActiveRaceCarToPlayerScoringMapping(EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.h:1199
	void SetActiveRaceCarForPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.h:1211
	EActiveRaceCarIndex GetActiveRaceCarFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnRaceCarEntityModule.h:1221
	void CopyActiveRaceCarToPlayerScoringMappingToOutput(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *);

	// BrnRaceCarEntityModule.cpp:879
	void UpdateActiveToAICarLookup(OutputBuffer_PreScene *);

	// BrnRaceCarEntityModule.cpp:9538
	int32_t GetRandomCarColour(int32_t, int32_t);

	// BrnRaceCarEntityModule.cpp:9577
	bool IsCarColourInUse(int32_t, int32_t);

	// BrnRaceCarEntityModule.cpp:9634
	int32_t GetDamagedCarCount() const;

	// BrnRaceCarEntityModule.cpp:9661
	int32_t GetPersistentDamageCarCount() const;

	// BrnRaceCarEntityModule.h:1245
	bool GetGameModeFlag(uint64_t) const;

	// BrnRaceCarEntityModule.cpp:7721
	void AddRaceCarToStartingGridOrFreeburnLobby(const PrepareForModeAction *, OutputBuffer_PreScene::RaceCarAIInterface *, const GameModeParams *, bool, bool, int32_t, Vector3, Vector3, EActiveRaceCarIndex);

	// BrnRaceCarEntityModule.cpp:4304
	void SendAddedForCollisionStateToPhysics(OutputBuffer_PreScene::VehicleInputInterface *);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnRaceCarEntityModule.h:1044
extern const SceneQueryId K_NEAR_MISS_VOLUME_QUERY_ID;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnRaceCarEntityModule.h:266
extern uint32_t DEBUG_miWheelsToRender;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct RaceCarEntityModule {
	public:
		// BrnRaceCarEntityModule.h:1103
		BrnWorld::ActiveRaceCar * GetActiveRaceCar(EActiveRaceCarIndex);

		// BrnRaceCarEntityModule.h:118
		void E3HACK_PlayerCarToLOD_0();

		// BrnRaceCarEntityModule.h:1084
		BrnWorld::ActiveRaceCar * GetPlayerActiveRaceCar();

	private:
		// BrnRaceCarEntityModule.h:1044
		extern const SceneQueryId K_NEAR_MISS_VOLUME_QUERY_ID;

	}

	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct RaceCarEntityModule {
	public:
		~RaceCarEntityModule();

		RaceCarEntityModule();

	private:
		// BrnRaceCarEntityModule.h:1044
		extern const SceneQueryId K_NEAR_MISS_VOLUME_QUERY_ID;

	}

	// BrnRaceCarEntityModule.h:66
	const int32_t KI_TRAINING_REQUEST_QUEUE_SIZE = 8;

}

// BrnRaceCarEntityModule.h:109
void BrnWorld::RaceCarEntityModule::~RaceCarEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarEntityModule.h:109
void BrnWorld::RaceCarEntityModule::RaceCarEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

