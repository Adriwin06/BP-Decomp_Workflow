// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficEntityModule.h:77
	using BrnGameState::GameStateModuleIO;

	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficEntityModule.h:596
extern const uint32_t KU_MAX_PHYSICAL_VEHICLES_TO_CACHE = 33;

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficPhysicsInfo {
		// BrnTrafficEntityModule.h:162
		enum EContactSideFlag {
			E_CONTACT_SIDE_NONE = 0,
			E_CONTACT_SIDE_FRONT = 1,
			E_CONTACT_SIDE_BACK = 2,
		}

	}

	// Declaration
	struct TrafficEntityModule {
		// BrnTrafficEntityModule.h:486
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_LOADINGWORLD = 2,
			E_PREPARESTAGE_VOLUMES = 3,
			E_PREPARESTAGE_DEBUG = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// BrnTrafficEntityModule.h:496
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// BrnTrafficEntityModule.h:503
		enum EResourceAcquireStage {
			E_RESOURCE_LOAD_BASEDATA_NOT_STARTED = 0,
			E_RESOURCE_LOAD_BASEDATA_REQUESTED = 1,
			E_RESOURCE_LOAD_VEHICLELISTAQUIRE = 2,
			E_RESOURCE_LOAD_WFVEHICLELISTAQUIRE = 3,
			E_RESOURCE_LOAD_VEHICLES = 4,
			E_RESOURCE_WFLOAD_VEHICLES = 5,
			E_RESOURCE_LOAD_PHYSICS = 6,
			E_RESOURCE_WFLOAD_PHYSICS = 7,
			E_RESOURCE_LOAD_ATTRIBS = 8,
			E_RESOURCE_WFLOAD_ATTRIBS = 9,
			E_RESOURCE_LOAD_WHEELS = 10,
			E_RESOURCE_WFLOAD_WHEELS = 11,
			E_RESOURCE_ACQUIRE_COUNT = 12,
		}

		// BrnTrafficEntityModule.h:521
		enum EState {
			E_STATE_INVALID = -1,
			E_STATE_STARTING_UP = 0,
			E_STATE_RUNNING = 1,
			E_STATE_TEARING_DOWN = 2,
		}

		// BrnTrafficEntityModule.h:530
		enum EStartingUpState {
			E_STARTINGUPSTATE_INVALID = -1,
			E_STARTINGUPSTATE_WAITING_FOR_PLAYER = 0,
			E_STARTINGUPSTATE_POPULATING = 1,
			E_STARTINGUPSTATE_WAITING_FOR_STREAMING = 2,
			E_STARTINGUPSTATE_FIRST = 0,
			E_STARTINGUPSTATE_LAST = 2,
		}

		// BrnTrafficEntityModule.h:542
		enum ERunningState {
			E_RUNNINGSTATE_INVALID = -1,
			E_RUNNINGSTATE_NORMAL = 0,
			E_RUNNINGSTATE_PAUSED = 1,
		}

		// BrnTrafficEntityModule.h:550
		enum ETearingDownState {
			E_TEARINGDOWNSTATE_INVALID = -1,
			E_TEARINGDOWNSTATE_WIPING = 0,
			E_TEARINGDOWNSTATE_FLUSHING = 1,
			E_TEARINGDOWNSTATE_WAITING_TO_RESET = 2,
		}

		// BrnTrafficEntityModule.h:559
		enum EEmptyTrafficPoolState {
			E_EMPTYTRAFFICPOOLSTATE_IDLE = 0,
			E_EMPTYTRAFFICPOOLSTATE_EMPTYING = 1,
			E_EMPTYTRAFFICPOOLSTATE_EMPTY = 2,
			E_EMPTYTRAFFICPOOLSTATE_FILLING = 3,
		}

	}

	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficEntityModule.h:105
struct BrnTraffic::GeneratorAddress {
	// BrnTrafficEntityModule.h:107
	uint16_t muHull;

	// BrnTrafficEntityModule.h:108
	uint8_t muSection;

}

// BrnTrafficEntityModule.h:121
struct BrnTraffic::TrafficCrashInfo {
	// BrnTrafficEntityModule.h:123
	EntityId mVictimId;

	// BrnTrafficEntityModule.h:124
	EntityId mCauserId;

	// BrnTrafficEntityModule.h:125
	BrnPhysics::Vehicle::eCrashTrafficType meCrashTrafficType;

	// BrnTrafficEntityModule.h:126
	bool mbNeedsToBeSentToCrashModule;

}

// BrnTrafficEntityModule.h:138
struct BrnTraffic::DetachedPartRenderEvent {
	// BrnTrafficEntityModule.h:140
	int32_t miPartIndex;

	// BrnTrafficEntityModule.h:141
	Matrix44Affine mTransform;

}

// BrnTrafficEntityModule.h:156
struct BrnTraffic::TrafficPhysicsInfo {
	// BrnTrafficEntityModule.h:153
	typedef EventQueue<BrnTraffic::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

	// BrnTrafficEntityModule.h:169
	TrafficPhysicsInfo::DetachedPartRenderQueue mDetachedPartQueue;

	// BrnTrafficEntityModule.h:171
	Vector3Plus mvRoadTestNormal_HeightAboveRoad;

	// BrnTrafficEntityModule.h:173
	Vector3Plus[128] maSkinningOffsets_Scratch;

	// BrnTrafficEntityModule.h:175
	Matrix44Affine[4] maWheelTransforms;

	// BrnTrafficEntityModule.h:178
	Vector3[24] maLightLocatorPositions;

	// BrnTrafficEntityModule.h:179
	BrnPhysics::Deformation::ETagPointType[24] maLightTagPointTypes;

	// BrnTrafficEntityModule.h:181
	bool[4] mabWheelExists;

	// BrnTrafficEntityModule.h:183
	float32_t mfStuckTimeFront;

	// BrnTrafficEntityModule.h:184
	float32_t mfStuckTimeBack;

	// BrnTrafficEntityModule.h:185
	float32_t mfStuckTimerDebounce;

	// BrnTrafficEntityModule.h:187
	float32_t mfTimeNotDriving;

	// BrnTrafficEntityModule.h:190
	float32_t mfSteeringDirection;

	// BrnTrafficEntityModule.h:191
	float32_t mfDrivingDirection;

	// BrnTrafficEntityModule.h:193
	int8_t miNumLightLocators;

	// BrnTrafficEntityModule.h:194
	bool mbIsDeforming;

	// BrnTrafficEntityModule.h:195
	bool mbIsFatallyCrashing;

	// BrnTrafficEntityModule.h:198
	uint8_t mu8RenderDamageFlags;

	// BrnTrafficEntityModule.h:202
	float32_t[8] mafGlassPaneFractureAmounts;

	// BrnTrafficEntityModule.h:204
	uint8_t muContactSideFlags;

public:
	// BrnTrafficEntityModule.h:214
	void Construct(int32_t);

	// BrnTrafficEntityModule.h:218
	void Destruct();

	// BrnTrafficEntityModule.h:221
	bool IsStuckFront() const;

	// BrnTrafficEntityModule.h:224
	bool IsStuckBack() const;

}

// BrnTrafficEntityModule.h:239
struct BrnTraffic::FiredKillZoneInfo {
	// BrnTrafficEntityModule.h:241
	TrafficData::KillZoneId mKillZoneId;

	// BrnTrafficEntityModule.h:242
	int32_t miFramesLeftToRemember;

}

// BrnTrafficEntityModule.h:255
struct BrnTraffic::StoredAITrafficData {
	// BrnTrafficEntityModule.h:257
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnTrafficEntityModule.h:258
	int32_t miNumTrafficIDs;

	// BrnTrafficEntityModule.h:259
	EntityId[32] maTrafficEntityIDs;

}

// BrnTrafficEntityModule.h:272
struct BrnTraffic::CrashingThingData {
	// BrnTrafficEntityModule.h:275
	Vector3 mPosition;

	// BrnTrafficEntityModule.h:276
	EntityId mEntityId;

	// BrnTrafficEntityModule.h:278
	bool mbShowtimeCrashMagnet;

}

// BrnTrafficEntityModule.h:293
struct BrnTraffic::CollidableVehicleInfo4 {
	// BrnTrafficEntityModule.h:295
	Vector4 mPosition_X;

	// BrnTrafficEntityModule.h:296
	Vector4 mPosition_Y;

	// BrnTrafficEntityModule.h:297
	Vector4 mPosition_Z;

	// BrnTrafficEntityModule.h:298
	Vector4 mLinearVelocity_X;

	// BrnTrafficEntityModule.h:299
	Vector4 mLinearVelocity_Y;

	// BrnTrafficEntityModule.h:300
	Vector4 mLinearVelocity_Z;

	// BrnTrafficEntityModule.h:302
	Vector4 mHalfLengths;

	// BrnTrafficEntityModule.h:303
	Vector4 mHalfWidths;

}

// BrnTrafficEntityModule.h:311
struct BrnTraffic::DEBUG_VehicleAvoidance {
	// BrnTrafficEntityModule.h:313
	Vector3 mPosition;

	// BrnTrafficEntityModule.h:314
	Vector3 mCurrentDirection;

	// BrnTrafficEntityModule.h:315
	Vector3 mAvoidDirection;

	// BrnTrafficEntityModule.h:316
	Vector3 mTarget;

	// BrnTrafficEntityModule.h:318
	Vector3[5] maFeelers;

	// BrnTrafficEntityModule.h:319
	float32_t[5] maFeelerScore;

	// BrnTrafficEntityModule.h:320
	int32_t miBestFeeler;

	// BrnTrafficEntityModule.h:321
	float32_t mfOverallRisk;

	// BrnTrafficEntityModule.h:323
	float32_t[5] maPassScore;

}

// BrnTrafficEntityModule.h:338
struct BrnTraffic::PhysicalVehicleInfo {
	// BrnTrafficEntityModule.h:341
	Vector3Plus mPositionAndImportance;

	// BrnTrafficEntityModule.h:342
	Vector3 mLinearVelocity;

	// BrnTrafficEntityModule.h:343
	Vector3 mRight;

}

// BrnTrafficEntityModule.h:350
struct BrnTraffic::DEBUG_VehicleFuzzyLogic {
	// BrnTrafficEntityModule.h:352
	uint32_t muVehicle;

	// BrnTrafficEntityModule.h:353
	Vector3 mRenderPosition;

	// BrnTrafficEntityModule.h:354
	float32_t[6] mafParamOutputScores;

}

// BrnTrafficEntityModule.h:367
struct BrnTraffic::ShowtimeVehicleInfo {
	// BrnTrafficEntityModule.h:378
	uint32_t muVehicleIndex;

	// BrnTrafficEntityModule.h:379
	uint8_t muFlags;

public:
	// BrnTrafficEntityModule.h:385
	void Construct(uint32_t);

	// BrnTrafficEntityModule.h:388
	void Destruct();

}

// BrnTrafficEntityModule.h:400
struct BrnTraffic::TrafficEntityModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnTrafficEntityModule.h:596
	extern const uint32_t KU_MAX_PHYSICAL_VEHICLES_TO_CACHE = 33;

	// BrnTrafficEntityModule.h:599
	TrafficToRaceCarInterface_PreScene::NearMissTrafficCollection mNearMissTrafficCollection;

	// BrnTrafficEntityModule.h:600
	TrafficToRaceCarInterface_PreScene::NearMissRaceCarCollection mNearMissRaceCarCollection;

	// BrnTrafficEntityModule.h:602
	BrnTraffic::TrafficEntityModule::EPrepareStage mePrepareStage;

	// BrnTrafficEntityModule.h:603
	BrnTraffic::TrafficEntityModule::EReleaseStage meReleaseStage;

	// BrnTrafficEntityModule.h:604
	BrnTraffic::TrafficEntityModule::EResourceAcquireStage meResourceStage;

	// BrnTrafficEntityModule.h:605
	BrnTraffic::TrafficEntityModule::EEmptyTrafficPoolState meEmptyTrafficPoolState;

	// BrnTrafficEntityModule.h:607
	BrnTraffic::TrafficEntityModule::EState meState;

	// BrnTrafficEntityModule.h:608
	BrnTraffic::TrafficEntityModule::EStartingUpState meStartingUpState;

	// BrnTrafficEntityModule.h:609
	BrnTraffic::TrafficEntityModule::ERunningState meRunningState;

	// BrnTrafficEntityModule.h:610
	BrnTraffic::TrafficEntityModule::ERunningState meRunningStateToUseAfterStartup;

	// BrnTrafficEntityModule.h:611
	BrnTraffic::TrafficEntityModule::ETearingDownState meTearingDownState;

	// BrnTrafficEntityModule.h:613
	EventReceiverQueue<4096,16> mReceiverQueue;

	// BrnTrafficEntityModule.h:615
	Random mRand;

	// BrnTrafficEntityModule.h:616
	Random mEffectRand;

	// BrnTrafficEntityModule.h:619
	TrafficJobStub[4] maJobs;

	// BrnTrafficEntityModule.h:620
	uint32_t muNumUpdateVehiclesJobs;

	// BrnTrafficEntityModule.h:631
	Vehicle[601] maVehicles;

	// BrnTrafficEntityModule.h:632
	VehicleAxles[601] maVehicleAxles;

	// BrnTrafficEntityModule.h:633
	Matrix44Affine[601] maVehicleTransforms;

	// BrnTrafficEntityModule.h:634
	FastBitArray<601> mVehiclesAddedToCrashModule;

	// BrnTrafficEntityModule.h:635
	VehicleSoaData mVehicleSoaData;

	// BrnTrafficEntityModule.h:637
	Param[400] maParams;

	// BrnTrafficEntityModule.h:638
	ParamNeedToSlowData[400] maParamNeedToSlowData;

	// BrnTrafficEntityModule.h:639
	ParamListNode[400] maParamListNodes;

	// BrnTrafficEntityModule.h:640
	ParamTransform[400] maParamTransforms;

	// BrnTrafficEntityModule.h:641
	ParamSoaData mParamSoaData;

	// BrnTrafficEntityModule.h:642
	Array<uint16_t,1u> mParamsToReinsert;

	// BrnTrafficEntityModule.h:644
	Array<BrnTraffic::PurgatoryInfo,400u> maPurgatoryList;

	// BrnTrafficEntityModule.h:645
	Stack<uint16_t,400> mFreeParams;

	// BrnTrafficEntityModule.h:648
	StaticTrafficParam[200] maStaticTrafficParams;

	// BrnTrafficEntityModule.h:649
	Array<BrnTraffic::PurgatoryInfo,200u> mStaticParamPurgatoryList;

	// BrnTrafficEntityModule.h:650
	Stack<uint8_t,200> mFreeStaticParamStack;

	// BrnTrafficEntityModule.h:653
	Array<BrnTraffic::PurgatoryInfo,1u> mTrailerPurgatoryList;

	// BrnTrafficEntityModule.h:654
	Stack<uint16_t,1> mFreeTrailerStack;

	// BrnTrafficEntityModule.h:656
	Set<uint16_t,72u> mActiveHulls;

	// BrnTrafficEntityModule.h:657
	Set<uint16_t,72u> mActiveHullsForLocalPlayer;

	// BrnTrafficEntityModule.h:658
	uint8_t[400] mauHullRuntimeDataIndices;

	// BrnTrafficEntityModule.h:659
	HullRuntime[72] maHullRuntimeData;

	// BrnTrafficEntityModule.h:660
	BitArray<72u> mUsedHullRuntimeData;

	// BrnTrafficEntityModule.h:661
	TrafficLightManager mTrafficLightManager;

	// BrnTrafficEntityModule.h:663
	Array<uint16_t,72u> mHullsToAddTriggersFor;

	// BrnTrafficEntityModule.h:664
	Array<uint16_t,72u> mHullsToRemoveTriggersFor;

	// BrnTrafficEntityModule.h:666
	Array<BrnTraffic::HullChangeInfo,400u> maPredictedHullChanges;

	// BrnTrafficEntityModule.h:667
	Array<uint16_t,9u>[8] maaRaceCarHulls;

	// BrnTrafficEntityModule.h:668
	uint16_t[8] mau16HullsToActivateAfterReset;

	// BrnTrafficEntityModule.h:669
	uint16_t muCurrentlyPredictedHull;

	// BrnTrafficEntityModule.h:670
	bool mbNeedToBroadcastHullChange;

	// BrnTrafficEntityModule.h:671
	bool mbActivateOnlineHullsAfterReset;

	// BrnTrafficEntityModule.h:672
	HullChangeInfo mHullChangeToBroadcast;

	// BrnTrafficEntityModule.h:674
	GeneratorAddress[512] maGenerators;

	// BrnTrafficEntityModule.h:675
	float32_t[512] mafTimesTillNextGeneration;

	// BrnTrafficEntityModule.h:676
	uint32_t muNumGenerators;

	// BrnTrafficEntityModule.h:678
	Array<BrnTraffic::TrafficCrashInfo,160u> maNewCrashedVehicles;

	// BrnTrafficEntityModule.h:679
	Array<BrnTraffic::TrafficCrashInfo,160u> maEmergencyCrashingVehicles;

	// BrnTrafficEntityModule.h:680
	Array<uint16_t,160u> maNewCrashedNetworkVehicles;

	// BrnTrafficEntityModule.h:681
	Array<uint16_t,160u> maRecentlyRemovedVehicles;

	// BrnTrafficEntityModule.h:682
	Array<uint16_t,160u> maNewRemovedVehicles;

	// BrnTrafficEntityModule.h:683
	Array<uint16_t,160u> maRecentlyRecoveredSlammedTraffic;

	// BrnTrafficEntityModule.h:685
	TrafficPhysicsInfo[25] maTrafficPhysicsInfoList;

	// BrnTrafficEntityModule.h:686
	BitArray<25u> maTrafficPhysicsInfoListBits;

	// BrnTrafficEntityModule.h:688
	VecFloat mfTrafficSimRadius;

	// BrnTrafficEntityModule.h:689
	uint32_t muMaxVehiclesToRender;

	// BrnTrafficEntityModule.h:690
	float32_t mfRenderCullDistanceSq;

	// BrnTrafficEntityModule.h:691
	bool mbInOfflineCarSelect;

	// BrnTrafficEntityModule.h:693
	Vector3 mLocalPlayerPosition;

	// BrnTrafficEntityModule.h:694
	Vector3 mLocalPlayerDirection;

	// BrnTrafficEntityModule.h:695
	EActiveRaceCarIndex meLocalPlayerIndex;

	// BrnTrafficEntityModule.h:697
	uint8_t muFramesSinceDecision;

	// BrnTrafficEntityModule.h:698
	bool mbDecisionFrame;

	// BrnTrafficEntityModule.h:699
	float32_t mfSimTimeSinceLastDecision;

	// BrnTrafficEntityModule.h:700
	float32_t mfSimTimeStep;

	// BrnTrafficEntityModule.h:701
	float32_t mfSimTimeStepMultiplier;

	// BrnTrafficEntityModule.h:703
	bool mbNeedToRunTrafficJamNuker;

	// BrnTrafficEntityModule.h:705
	float32_t mfTrafficLightChangeBackDelay;

	// BrnTrafficEntityModule.h:706
	VecFloat mfSimTimeStepVec;

	// BrnTrafficEntityModule.h:708
	RaceCarStateData mRaceCarState;

	// BrnTrafficEntityModule.h:710
	Vector3[8] maEventGridStartPositions;

	// BrnTrafficEntityModule.h:711
	uint8_t muNumberOfParticipantsInCurrentEvent;

	// BrnTrafficEntityModule.h:713
	LightTriggerId mTrafficLightTriggerId;

	// BrnTrafficEntityModule.h:714
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnTrafficEntityModule.h:715
	bool mbIsOnlineGameMode;

	// BrnTrafficEntityModule.h:716
	bool mbPlayingShowtimeMode;

	// BrnTrafficEntityModule.h:717
	bool mbGameModeAllowsSwerving;

	// BrnTrafficEntityModule.h:718
	bool mbHardcoreSwerveForMode;

	// BrnTrafficEntityModule.h:719
	bool mbGameModeAllowsKillzones;

	// BrnTrafficEntityModule.h:720
	bool mbAtStartLineSoProtectRaceCarsFromTraffic;

	// BrnTrafficEntityModule.h:721
	bool mbEnsureTrafficLightDelay;

	// BrnTrafficEntityModule.h:722
	bool mbGameModeClearsTraffic;

	// BrnTrafficEntityModule.h:723
	bool mbNeedToSetUpLightsForEventStart;

	// BrnTrafficEntityModule.h:724
	bool mbPlayerIsPowerParking;

	// BrnTrafficEntityModule.h:725
	bool mbShowtimePlayerOnGround;

	// BrnTrafficEntityModule.h:726
	bool mbAllowDivergentBehaviour;

	// BrnTrafficEntityModule.h:728
	RoadRulesRecvData::NetworkPlayerID[8] maGameModeNetworkPlayerID;

	// BrnTrafficEntityModule.h:729
	RoadRulesRecvData::NetworkPlayerID mNetworkLocalPlayerID;

	// BrnTrafficEntityModule.h:731
	bool mbAllVehiclesDead;

	// BrnTrafficEntityModule.h:732
	uint8_t muNumFramesBeforeStateChange;

	// BrnTrafficEntityModule.h:733
	bool mbWaitingForStreaming;

	// BrnTrafficEntityModule.h:734
	bool mbNeedToKillAllZombies;

	// BrnTrafficEntityModule.h:736
	float32_t mfBaseDensityScale;

	// BrnTrafficEntityModule.h:738
	float32_t mfGameModeDensityScale;

	// BrnTrafficEntityModule.h:739
	float32_t mfGameModeLargeVehicleProbability;

	// BrnTrafficEntityModule.h:740
	float32_t mfTrafficAmountScale;

	// BrnTrafficEntityModule.h:741
	int32_t miBigVehicleAmount;

	// BrnTrafficEntityModule.h:742
	float32_t mfShowtimeTrafficDensityScale;

	// BrnTrafficEntityModule.h:744
	float32_t mfTimeSincePlayerHullChange;

	// BrnTrafficEntityModule.h:745
	float32_t mfTimeSincePlayerWasDrivingQuickly;

	// BrnTrafficEntityModule.h:746
	uint32_t muLastParamCalculated;

	// BrnTrafficEntityModule.h:747
	uint16_t muPreviousPlayerHull;

	// BrnTrafficEntityModule.h:748
	float32_t mfTimeSinceLastShowtimeSpawn;

	// BrnTrafficEntityModule.h:750
	uint16_t muNumTrafficInsertionsThisFrame;

	// BrnTrafficEntityModule.h:752
	ResourcePtr<BrnTraffic::TrafficData> mpData;

	// BrnTrafficEntityModule.h:753
	FuzzyBehaviourLogic mFuzzyBehaviours;

	// BrnTrafficEntityModule.h:755
	uint16_t muUpdateCount;

	// BrnTrafficEntityModule.h:757
	bool mbInReplay;

	// BrnTrafficEntityModule.h:758
	bool mbAllowTrafficDeformationSkinning;

	// BrnTrafficEntityModule.h:760
	Array<BrnTraffic::CollidableVehicleInfo4,16u> mCachedCollidableList;

	// BrnTrafficEntityModule.h:761
	Vector2[2] maFeelerCosSin;

	// BrnTrafficEntityModule.h:763
	float32_t mfCrashSliderCrashScore;

	// BrnTrafficEntityModule.h:764
	float32_t mfCrashSliderCrashScoreDecay;

	// BrnTrafficEntityModule.h:765
	float32_t mfCrashSliderCrashScoreFactor;

	// BrnTrafficEntityModule.h:766
	float32_t mfCrashSliderFinalValue;

	// BrnTrafficEntityModule.h:768
	ShowtimeVehicleInfo[32] maShowtimeVehicleInfoList;

	// BrnTrafficEntityModule.h:769
	uint32_t muShowtimeVehicleInfoCount;

	// BrnTrafficEntityModule.h:770
	Vector3 mShowtimePlayerLandingPos2D;

	// BrnTrafficEntityModule.h:771
	Vector3 mShowtimePlayerGroundPos;

	// BrnTrafficEntityModule.h:772
	float32_t mfShowtimeTimer;

	// BrnTrafficEntityModule.h:773
	float32_t mfShowtimeTimeNextCrashSpike;

	// BrnTrafficEntityModule.h:774
	float32_t mfShowtimeTimeLastCrashSpike;

	// BrnTrafficEntityModule.h:775
	float32_t mfShowtimeMisBounceTimer;

	// BrnTrafficEntityModule.h:778
	float32_t mfPlayerIdleTime;

	// BrnTrafficEntityModule.h:780
	FastBitArray<601> mVehiclesToUpdateCollidables;

	// BrnTrafficEntityModule.h:781
	FastBitArray<601> mVehiclesAvoidableLastFrame;

	// BrnTrafficEntityModule.h:784
	Vector3 mAveragePhysicalCentre;

	// BrnTrafficEntityModule.h:785
	float32_t mfJunctionFUP;

	// BrnTrafficEntityModule.h:786
	float32_t mfJunctionFUP_TimeTillNextPhysicalKill;

	// BrnTrafficEntityModule.h:789
	bool mbTrafficIsHidden;

	// BrnTrafficEntityModule.h:791
	bool mbDontCreateVehiclesNearAnyPlayers;

	// BrnTrafficEntityModule.h:792
	bool mbDontCreateStaticVehiclesNearAnyPlayers;

	// BrnTrafficEntityModule.h:794
	bool mbInPictureParadise;

	// BrnTrafficEntityModule.h:796
	bool mbHullSyncDivergence;

	// BrnTrafficEntityModule.h:799
	VecFloat KF_TWO_PI;

	// BrnTrafficEntityModule.h:800
	VecFloat KF_MAX_FLOAT;

	// BrnTrafficEntityModule.h:801
	VecFloat KF_APPROX_LANE_WIDTH;

	// BrnTrafficEntityModule.h:802
	VecFloat KF_MAX_DIST_ACROSS_LANE;

	// BrnTrafficEntityModule.h:803
	VecFloat KF_VEHICLE_STOPLINE_SIDE_SPACE;

	// BrnTrafficEntityModule.h:804
	VecFloat KF_VEHICLE_STOPLINE_SIDE_VARIATION;

	// BrnTrafficEntityModule.h:805
	VecFloat KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE;

	// BrnTrafficEntityModule.h:806
	Vector4 kfVehicle_OptimalDistFromTarget_SpeedBalanceFactor_DirectionDampingFactor_MinDistToMove;

	// BrnTrafficEntityModule.h:807
	VecFloat KF_VEHICLE_MAX_STEERING_DELTA;

	// BrnTrafficEntityModule.h:808
	VecFloat KF_VEHICLE_SIN_MAX_STEERING_ANGLE;

	// BrnTrafficEntityModule.h:809
	VecFloat KF_VEHICLE_RECIP_ROLL_SPEED_MIN;

	// BrnTrafficEntityModule.h:810
	VecFloat KF_VEHICLE_ROLL_FACTOR;

	// BrnTrafficEntityModule.h:811
	VecFloat KF_VEHICLE_PITCH_RECIP_MAX_DECEL;

	// BrnTrafficEntityModule.h:812
	VecFloat KF_VEHICLE_PITCH_DAMPING_FACTOR;

	// BrnTrafficEntityModule.h:813
	VecFloat KF_VEHICLE_PITCH_SCALE;

	// BrnTrafficEntityModule.h:814
	Vector4 kfParamSympatheticCone_CosAngle_Length_RecipYScale_W;

	// BrnTrafficEntityModule.h:815
	Vector4 kfParamSympatheticConeShowTime_CosAngle_Length_RecipYScale_W;

	// BrnTrafficEntityModule.h:816
	VecFloat mfVehicleRollFilterTime;

	// BrnTrafficEntityModule.h:817
	TweakValues mTweakValues;

	// BrnTrafficEntityModule.h:818
	Vector4 kfVehicle_AvoidancePassingFactor_Constants;

	// BrnTrafficEntityModule.h:819
	Vector4 kfVehicle_AvoidanceCone_CosAngle_Length_RecipYScale_W;

	// BrnTrafficEntityModule.h:820
	Vector4 kfVehicle_Avoidance_Constants;

	// BrnTrafficEntityModule.h:821
	Vector4 kfParamAvoidCrashCone_CosAngle_Length_RecipYScale_W;

	// BrnTrafficEntityModule.h:834
	BrnTraffic::DebugComponent * mpDebugComponent;

	// BrnTrafficEntityModule.h:836
	Logger * mpLogger;

	// BrnTrafficEntityModule.h:842
	bool mbDEBUGStopTrafficMoving;

	// BrnTrafficEntityModule.h:843
	BrnTraffic::AirRams::AirRamType meDEBUGAirRamToFire;

	// BrnTrafficEntityModule.h:844
	int32_t miDEBUGOverrideVehicleToSpawn;

	// BrnTrafficEntityModule.h:845
	int32_t miDEBUGOverBudgetness;

	// BrnTrafficEntityModule.h:846
	bool mbDEBUGDontRenderMeshes;

	// BrnTrafficEntityModule.h:847
	bool mbDEBUGAllowAnarchy;

	// BrnTrafficEntityModule.h:848
	float32_t mfDEBUGDistanceForAnarchy;

	// BrnTrafficEntityModule.h:849
	float32_t mfDEBUGTrafficLightTimeMultiplier;

	// BrnTrafficEntityModule.h:850
	bool mbDEBUGEnableKillzones;

	// BrnTrafficEntityModule.h:851
	int32_t miDEBUGFlowtypeOverride;

	// BrnTrafficEntityModule.h:853
	Array<BrnTraffic::FiredKillZoneInfo,8u> mDEBUGRecentlyFiredKillZones;

	// BrnTrafficEntityModule.h:855
	bool mbDEBUGEnablePressureSystem;

	// BrnTrafficEntityModule.h:856
	bool mbDEBUGEnableAvoidance;

	// BrnTrafficEntityModule.h:858
	bool mbDEBUGTestSympCrash;

	// BrnTrafficEntityModule.h:860
	bool mbDEBUGRenderContacts;

	// BrnTrafficEntityModule.h:862
	DEBUG_VehicleFuzzyLogic * mpaDEBUGVehicleFuzzyLogic;

	// BrnTrafficEntityModule.h:863
	uint32_t muDEBUGVehicleFuzzyLogicCount;

	// BrnTrafficEntityModule.h:865
	bool mbDEBUGShowtimeStuff;

	// BrnTrafficEntityModule.h:866
	bool mbDEBUGOverrideJunctionFUP;

	// BrnTrafficEntityModule.h:868
	bool mbDEBUGFakeShowtime;

	// BrnTrafficEntityModule.h:870
	bool mbDEBUGPickVehicleFromCamera;

	// BrnTrafficEntityModule.h:871
	uint32_t muDEBUGPickedVehicle;

	// BrnTrafficEntityModule.h:873
	bool mbDEBUGPick_StopVehicle;

	// BrnTrafficEntityModule.h:874
	bool mbDEBUGPick_DontStopForPickedVehicle;

	// BrnTrafficEntityModule.h:877
	bool mbDEBUGTurnTrafficOff;

	// BrnTrafficEntityModule.h:879
	float32_t mfSpeedMultiplier;

	// BrnTrafficEntityModule.h:881
	Camera mCameraLastFrame;

	// BrnTrafficEntityModule.h:883
	bool mbDEBUGWorstCase;

	// BrnTrafficEntityModule.h:886
	DEBUG_VehicleAvoidance * mpaDEBUGVehicleAvoidance;

	// BrnTrafficEntityModule.h:887
	uint32_t muDEBUGVehicleAvoidanceCount;

	// BrnTrafficEntityModule.h:889
	float32_t mfDEBUGAvoidance_LineTestResultR;

	// BrnTrafficEntityModule.h:890
	float32_t mfDEBUGAvoidance_LineTestScore;

	// BrnTrafficEntityModule.h:891
	float32_t mfDEBUGAvoidance_PassScore;

	// BrnTrafficEntityModule.h:896
	int32_t miPerfMon_PreSceneUpdate;

	// BrnTrafficEntityModule.h:897
	int32_t miPerfMon_PostSceneUpdate;

	// BrnTrafficEntityModule.h:898
	int32_t miPerfMon_PrePhysicsUpdate;

	// BrnTrafficEntityModule.h:899
	int32_t miPerfMon_Driving;

	// BrnTrafficEntityModule.h:900
	int32_t miPerfMon_PostPhysicsUpdate;

	// BrnTrafficEntityModule.h:901
	int32_t miPerfMon_PostPhysicsUpdate_Pre0;

	// BrnTrafficEntityModule.h:902
	int32_t miPerfMon_PostPhysicsUpdate_Pre1;

	// BrnTrafficEntityModule.h:903
	int32_t miPerfMon_ProcessDeformation;

	// BrnTrafficEntityModule.h:904
	int32_t miPerfMon_UpdateParam;

	// BrnTrafficEntityModule.h:905
	int32_t miPerfMon_UpdateParam_IncParam;

	// BrnTrafficEntityModule.h:906
	int32_t miPerfMon_UpdateParam_CalcSpeed;

	// BrnTrafficEntityModule.h:907
	int32_t miPerfMon_UpdateParamNonDecision;

	// BrnTrafficEntityModule.h:908
	int32_t miPerfMon_UpdateVehicle;

	// BrnTrafficEntityModule.h:909
	int32_t miPerfMon_PostPhysicsUpdate_Post0;

	// BrnTrafficEntityModule.h:910
	int32_t miPerfMon_PostPhysicsUpdate_Post1;

	// BrnTrafficEntityModule.h:911
	int32_t miPerfMon_RenderCoronas_ActiveHulls;

	// BrnTrafficEntityModule.h:912
	int32_t miPerfMon_RenderCoronas_InactiveHulls;

	// BrnTrafficEntityModule.h:913
	int32_t miPerfMon_RenderCoronas_Vehicles;

	// BrnTrafficEntityModule.h:914
	int32_t miPerfMon_UpdateCollidableVehicles;

	// BrnTrafficEntityModule.h:915
	int32_t miPerfMon_UpdateDecision_Part0;

	// BrnTrafficEntityModule.h:916
	int32_t miPerfMon_UpdateDecision_Part1;

	// BrnTrafficEntityModule.h:923
	bool mbDEBUGRenderSpecialPerfmons;

	// BrnTrafficEntityModule.h:925
	PerfMonCpuMonitorData mPostPhysPerfmonData_Decision;

	// BrnTrafficEntityModule.h:926
	PerfMonCpuMonitorData mParamPerfmonData_Decision;

	// BrnTrafficEntityModule.h:927
	PerfMonCpuMonitorData mVehiclePerfmonData_Decision;

	// BrnTrafficEntityModule.h:929
	PerfMonCpuMonitorData mPostPhysPerfmonData_NonDecision;

	// BrnTrafficEntityModule.h:930
	PerfMonCpuMonitorData mParamPerfmonData_NonDecision;

	// BrnTrafficEntityModule.h:931
	PerfMonCpuMonitorData mVehiclePerfmonData_NonDecision;

	// BrnTrafficEntityModule.h:935
	bool mbNetworkHasDetectedDivergence;

	// BrnTrafficEntityModule.h:938
	BrnTraffic::TrafficCarStreamer mStreamer;

	// BrnTrafficEntityModule.h:939
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>[64] maTrafficVehiclePhysicsSpecs;

	// BrnTrafficEntityModule.h:940
	VehicleTypeRuntime[96] maVehicleTypeRuntime;

	// BrnTrafficEntityModule.h:941
	int32_t miResourceRequestCount;

	// BrnTrafficEntityModule.h:943
	const VehicleList * mpVehicleList;

	// BrnTrafficEntityModule.h:944
	StoredAITrafficData[8] maStoredAITrafficData;

public:
	// BrnTrafficEntityModule.cpp:585
	virtual void Construct();

	// BrnTrafficEntityModule.cpp:959
	virtual bool Prepare(OutputBuffer_Prepare *);

	// BrnTrafficEntityModule.cpp:1414
	virtual bool Release();

	// BrnTrafficEntityModule.cpp:1463
	virtual void Destruct();

	// BrnTrafficEntityModule.cpp:2047
	void PreSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnTrafficEntityModule.cpp:2252
	void PostSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostScene *, OutputBuffer_PostScene *, BrnUpdateSet);

	// BrnTrafficEntityModule.cpp:2633
	void PrePhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BrnUpdateSet);

	// BrnTrafficEntityModule.cpp:2782
	void PostPhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

	// BrnTrafficEntityModule.cpp:13736
	void PreDispatchUpdate(const InputBuffer_PreDispatch *, OutputBuffer_PreDispatch *);

	// BrnTrafficEntityModule.cpp:13847
	void GenerateDispatchLists(const InputBuffer_Dispatch *, const Array<BrnTraffic::VehicleRenderInfo,64u> &, Vector4, Vector4, Vector3, Vector3, int32_t, int32_t, int32_t, const Camera &);

	// BrnTrafficEntityModule.cpp:15518
	void DebugMemoryInit(BrnTraffic::TrafficEntityModule *);

	// BrnTrafficEntityModule.h:2169
	void DebugToggleTraffic();

private:
	// BrnTrafficEntityModule.h:824
	VecFloat GetAvoidPassImpactTimeMax() const;

	// BrnTrafficEntityModule.h:825
	VecFloat GetAvoidPassImpactTimeScoreFactor() const;

	// BrnTrafficEntityModule.h:826
	VecFloat GetAvoidPassMaxDistance() const;

	// BrnTrafficEntityModule.h:827
	VecFloat GetAvoidPassHeightSkip() const;

	// BrnTrafficEntityModule.h:829
	VecFloat GetAvoidOffcourseScoreFactor() const;

	// BrnTrafficEntityModule.h:830
	VecFloat GetAvoidMaxOverallRisk() const;

	// BrnTrafficEntityModule.h:2185
	bool IsDecisionFrame() const;

	// BrnTrafficEntityModule.h:2207
	bool IsPaused() const;

	// BrnTrafficEntityModule.h:2221
	bool IsPlayingOnlineGameMode() const;

	// BrnTrafficEntityModule.h:2234
	bool IsPlayingShowtimeGameMode() const;

	// BrnTrafficEntityModule.h:2247
	bool AllowDivergentBehaviour() const;

	// BrnTrafficEntityModule.h:2259
	bool ShouldBeHollywoodAction() const;

	// BrnTrafficEntityModule.h:2283
	uint32_t GetDecisionFramesToSpendInPurgatory() const;

	// BrnTrafficEntityModule.h:2304
	const BrnTraffic::Hull * GetHull(uint32_t) const;

	// BrnTrafficEntityModule.h:2319
	HullRuntime * GetHullRuntime(uint32_t);

	// BrnTrafficEntityModule.h:2340
	const HullRuntime * GetHullRuntime(uint32_t) const;

	// BrnTrafficEntityModule.h:2361
	HullRuntime * GetHullRuntimeSafe(uint32_t);

	// BrnTrafficEntityModule.h:2386
	const HullRuntime * GetHullRuntimeSafe(uint32_t) const;

	// BrnTrafficEntityModule.h:2411
	bool IsHullActive(uint32_t) const;

	// BrnTrafficEntityModule.cpp:6882
	void RecordTrafficVehicleIsPhysical(uint32_t, EntityId, EntityId, BrnPhysics::Vehicle::eCrashTrafficType, float32_t, float32_t);

	// BrnTrafficEntityModule.h:1024
	void DoInterestingFlipOutBehaviour(uint32_t, OutputBuffer_PrePhysics *, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16873
	void CrashVehicleForSympatheticCrashState(uint32_t, OutputBuffer_PrePhysics *);

	// BrnTrafficEntityModule.h:2425
	Param * GetParam(uint32_t);

	// BrnTrafficEntityModule.h:2440
	const BrnTraffic::Param * GetParam(uint32_t) const;

	// BrnTrafficEntityModule.h:2663
	ParamPlan * GetParamPlan(uint32_t, uint32_t);

	// BrnTrafficEntityModule.h:2681
	const ParamPlan * GetParamPlan(uint32_t, uint32_t) const;

	// BrnTrafficEntityModule.h:2698
	const ParamListNode * GetParamListNode(uint32_t) const;

	// BrnTrafficEntityModule.h:2449
	Vector3 GetDeterministicParamPos(uint32_t) const;

	// BrnTrafficEntityModule.h:2455
	ParamTransform * GetParamTransform(uint32_t);

	// BrnTrafficEntityModule.h:2462
	const ParamTransform * GetParamTransform(uint32_t) const;

	// BrnTrafficEntityModule.h:2469
	const ParamNeedToSlowData * GetParamNeedToSlowData(uint32_t) const;

	// BrnTrafficEntityModule.h:2477
	StaticTrafficParam * GetStaticTrafficParam(uint32_t);

	// BrnTrafficEntityModule.h:2485
	StaticTrafficParam * GetStaticTrafficParamFromFullVehicleIndex(uint32_t);

	// BrnTrafficEntityModule.h:2493
	const StaticTrafficParam * GetStaticTrafficParamFromFullVehicleIndex(uint32_t) const;

	// BrnTrafficEntityModule.h:2501
	Vehicle * GetStaticVehicle(uint32_t);

	// BrnTrafficEntityModule.h:2509
	Vehicle * GetStandardVehicle(uint32_t);

	// BrnTrafficEntityModule.h:2517
	const Vehicle * GetStandardVehicle(uint32_t) const;

	// BrnTrafficEntityModule.h:2526
	Vehicle * GetTrailerVehicle(uint32_t);

	// BrnTrafficEntityModule.h:2534
	Vehicle * GetVehicle(uint32_t);

	// BrnTrafficEntityModule.h:2542
	const Vehicle * GetVehicle(uint32_t) const;

	// BrnTrafficEntityModule.h:2550
	VehicleAxles * GetVehicleAxles(uint32_t);

	// BrnTrafficEntityModule.h:2558
	Matrix44Affine GetVehicleTransform(uint32_t) const;

	// BrnTrafficEntityModule.h:2566
	void SetVehicleTransform(uint32_t, Matrix44Affine);

	// BrnTrafficEntityModule.h:2575
	TrafficPhysicsInfo * GetTrafficPhysicsInfoForVehicle(uint32_t);

	// BrnTrafficEntityModule.h:2595
	const TrafficPhysicsInfo * GetTrafficPhysicsInfoForVehicle(uint32_t) const;

	// BrnTrafficEntityModule.h:2624
	uint32_t GetVehicleIndexFromStaticIndex(uint32_t) const;

	// BrnTrafficEntityModule.h:2632
	uint32_t GetVehicleIndexFromTrailerIndex(uint32_t) const;

	// BrnTrafficEntityModule.h:2615
	uint32_t GetTrailerIndexFromVehicleIndex(uint32_t) const;

	// BrnTrafficEntityModule.h:2640
	const VehicleTypeRuntime * GetVehicleTypeRuntime(uint32_t) const;

	// BrnTrafficEntityModule.h:2648
	const RaceCarStateData & GetRaceCarState() const;

	// BrnTrafficEntityModule.cpp:1905
	Vector3 GetBehaviourCentre() const;

	// BrnTrafficEntityModule.cpp:1098
	bool LoadData(OutputBuffer_Prepare *);

	// BrnTrafficEntityModule.cpp:1490
	void Reset();

	// BrnTrafficEntityModule.cpp:1769
	void EnterStartingUpState();

	// BrnTrafficEntityModule.cpp:1793
	void EnterRunningState();

	// BrnTrafficEntityModule.cpp:1818
	void EnterTearingDownState();

	// BrnTrafficEntityModule.cpp:1837
	void UpdateDEBUG();

	// BrnTrafficEntityModule.cpp:1865
	void DEBUGValidateSoaData();

	// BrnTrafficEntityModule.cpp:1922
	void UpdateTimers(const InputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:1972
	void UpdateCrashSlider();

	// BrnTrafficEntityModule.cpp:3607
	void GenerateSympatheticCrasherOutput(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:3646
	void GeneratePotentialLeapedAndStompedCarsOutput(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:3632
	void GenerateNearMissOutput(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:3836
	void GenerateNearbyParkedTrafficOutput(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:3905
	void HandleIncomingNetworkData(const InputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:4304
	void KillDyingVehicleEntities(OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:4351
	void KillDyingVehicleEntity(uint32_t, const FastBitArray<601>::Iterator &, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:4486
	void StopVehicleBeingPhysical(uint32_t, bool);

	// BrnTrafficEntityModule.cpp:4525
	void CreateNewVehicleEntities(OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:4590
	void ManageTriggers(OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:4656
	bool IsVehiclesParamAZombie(uint32_t) const;

	// BrnTrafficEntityModule.cpp:4696
	void UpdateCollidableVehicles(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:5019
	void GenerateCrashedVehicleEvents(OutputBuffer_PreScene *);

	// BrnTrafficEntityModule.cpp:5132
	void GenerateRemovedVehicleEvents(OutputBuffer_PostPhysics::CrashTrafficInputInterface *);

	// BrnTrafficEntityModule.cpp:5160
	void GenerateSlamRecoveryEvents(OutputBuffer_PostPhysics::CrashTrafficInputInterface *);

	// BrnTrafficEntityModule.cpp:5201
	void HandleCrashingNetworkTraffic(const InputBuffer_PostScene *);

	// BrnTrafficEntityModule.cpp:5249
	void CleanUpCrashedVehicles(const InputBuffer_PostScene *);

	// BrnTrafficEntityModule.cpp:5288
	void PostNearbyTrafficSceneQueryRequest(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnTrafficEntityModule.cpp:5309
	void AIPostSceneQueryRequests(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnTrafficEntityModule.cpp:5370
	void SendEmergencyCrashEvents(OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:5444
	void BuildPotentialCollisionList(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:15577
	void GenerateDriverInputs(OutputBuffer_PrePhysics *);

	// BrnTrafficEntityModule.cpp:15899
	VecFloat CalculateDriverGasBrake(uint32_t, VecFloat, Vector3) const;

	// BrnTrafficEntityModule.cpp:15936
	VecFloat CalculateGasBrakeToReachTarget(uint32_t, VecFloat, VecFloat) const;

	// BrnTrafficEntityModule.cpp:15972
	void CalculateAndSetSteering(uint32_t, Vector3, BrnTrafficDriverControls *, VecFloat);

	// BrnTrafficEntityModule.cpp:16019
	void CalculateAndSetSteeringUsingAvoidance(uint32_t, Vector3 &, VecFloat, BrnTrafficDriverControls *, VecFloat &);

	// BrnTrafficEntityModule.cpp:16069
	void UpdateSympatheticCrashing(uint32_t, EntityId, OutputBuffer_PrePhysics *, BrnTrafficDriverControls *, float32_t);

	// BrnTrafficEntityModule.cpp:16275
	bool GetSympCrashingTargetPos(EntityId, Vector3 &) const;

	// BrnTrafficEntityModule.cpp:16320
	void ReturnPhysicalVehicleToTraffic(uint32_t);

	// BrnTrafficEntityModule.cpp:16373
	void DriveTowardsTarget(uint32_t, bool, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16513
	void UpdateRecoveringFromSlam(uint32_t, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16550
	void UpdateExtremeSwerving(uint32_t, OutputBuffer_PrePhysics *, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16614
	void Update3PointTurnManoeuvre(uint32_t, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16688
	void UpdateGiveUpManoeuvre(uint32_t, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16771
	void UpdateStuckReverseManoeuvre(uint32_t, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:16851
	void UpdateNormalPhysical(uint32_t, BrnTrafficDriverControls *);

	// BrnTrafficEntityModule.cpp:5497
	void HandleHalfPotentialContact(EntityId, VolumeInstanceId, EntityId, OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:5526
	// Declaration
	void AddVehicleToPhysics(uint32_t, EntityId, OutputBuffer_PrePhysics::VehicleInputInterface *, BrnPhysics::Vehicle::ETrafficType, BitArray<601u> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:5568
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:5638
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:5652
	void CleanUpCrashedVehiclePhysics(OutputBuffer_PrePhysics *);

	// BrnTrafficEntityModule.cpp:5688
	void CreateBodiesForCrashingNetworkTraffic(OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:5727
	// Declaration
	void HandleExternalRequests(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:5958
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:6109
	// Declaration
	void HandleExternalResponses(const InputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:6136
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:6254
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:6381
	void HandlePropModuleRequests(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *);

	// BrnTrafficEntityModule.cpp:6663
	void HandleResetRaceCarEvents(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:6704
	// Declaration
	void HandlePrepareForModeAction(const InputBuffer_PostPhysics *, const PrepareForModeAction *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:6778
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:6851
	void HandleStopModeAction(const InputBuffer_PostPhysics *, const StopModeAction *);

	// BrnTrafficEntityModule.cpp:6423
	// Declaration
	void HandleContactPoints(const InputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:6447
		using namespace BrnPhysics::ContactSpy;

	}

	// BrnTrafficEntityModule.cpp:6487
	void ProcessContactPoint(const TrafficContact *, const EntityId &);

	// BrnTrafficEntityModule.cpp:6949
	void FireKillZone(TrafficData::KillZoneId);

	// BrnTrafficEntityModule.cpp:7046
	void UpdateDecisionFrame(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:7124
	void UpdateNonDecisionFrame(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:7164
	void RecalculateActiveHulls(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, Set<uint16_t,72u> *, Set<uint16_t,72u> *);

	// BrnTrafficEntityModule.cpp:7337
	// Declaration
	void AddPredictedHullChange(const HullChangeInfo &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:7341
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:7342
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:7351
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:7392
	// Declaration
	void DEBUGDumpHullPredictions() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:7396
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:7397
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:7403
		using namespace CgsDev::Message;

		// BrnTrafficEntityModule.cpp:7406
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:7421
	void PredictHullChanges(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:7471
	// Declaration
	void UpdateRaceCarHulls(const InputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:7550
		using namespace CgsDev::Message;

	}

	// BrnTrafficEntityModule.cpp:7595
	void RebuildGeneratorList();

	// BrnTrafficEntityModule.cpp:7652
	void AddGenerator(uint32_t, uint32_t, float32_t *);

	// BrnTrafficEntityModule.cpp:7680
	float32_t CalcTimeToNextGeneration(uint32_t, uint32_t);

	// BrnTrafficEntityModule.cpp:7703
	void KillOutOfAreaTraffic(Set<uint16_t,72u> *);

	// BrnTrafficEntityModule.cpp:7799
	void KillParam(uint32_t);

	// BrnTrafficEntityModule.cpp:7909
	void KillAllZombies();

	// BrnTrafficEntityModule.cpp:12926
	bool IsParamTooClose(uint32_t, uint32_t, float32_t);

	// BrnTrafficEntityModule.cpp:7933
	void NukeTrafficJams();

	// BrnTrafficEntityModule.cpp:8064
	void UpdateStreaming(OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:8202
	void UpdateDensity(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:8225
	float32_t CalcModifiedDensity(uint32_t) const;

	// BrnTrafficEntityModule.cpp:8250
	void SpawnNewTraffic(Set<uint16_t,72u> *);

	// BrnTrafficEntityModule.cpp:8325
	void SpawnShowtimeTraffic();

	// BrnTrafficEntityModule.cpp:2415
	void SendPhysicalRequests(OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:2483
	void SafeRequestMakeVehiclePhysical(uint32_t, BrnTraffic::PhysicalReason, EntityId, BrnPhysics::Vehicle::ETrafficType, BrnPhysics::Vehicle::eCrashTrafficType, OutputBuffer_PrePhysics *, BitArray<601u> *);

	// BrnTrafficEntityModule.cpp:2571
	void MakeVehiclePhysical(uint32_t, OutputBuffer_PrePhysics *, BitArray<601u> *, EntityId, BrnPhysics::Vehicle::ETrafficType, BrnPhysics::Vehicle::eCrashTrafficType);

	// BrnTrafficEntityModule.cpp:2388
	void CalculateInitialPhysicalState(const Vehicle *, Matrix44Affine, Vector3 &, Vector3 &, uint8_t *, Matrix44Affine &) const;

	// BrnTrafficEntityModule.cpp:8476
	void FillNewHull(uint32_t);

	// BrnTrafficEntityModule.cpp:8851
	void GenerateNewVehicle(uint32_t, uint32_t, uint32_t, float32_t);

	// BrnTrafficEntityModule.cpp:8961
	uint32_t TryAllocateParamId();

	// BrnTrafficEntityModule.cpp:8992
	uint32_t TryAllocateTrailerId();

	// BrnTrafficEntityModule.cpp:9024
	uint8_t PickVehicleToSpawn(uint32_t);

	// BrnTrafficEntityModule.cpp:9097
	uint32_t FindFirstParamOnSection(uint32_t, uint32_t) const;

	// BrnTrafficEntityModule.cpp:9114
	uint32_t FindNextParam(uint32_t, uint32_t, float32_t) const;

	// BrnTrafficEntityModule.cpp:9144
	uint32_t GetParamBehind(uint32_t) const;

	// BrnTrafficEntityModule.cpp:9162
	uint32_t FindNextParamRelative(uint32_t, float32_t) const;

	// BrnTrafficEntityModule.cpp:9257
	uint32_t FindFirstParamAfterPos(uint32_t, uint32_t, float32_t, float32_t *) const;

	// BrnTrafficEntityModule.cpp:9299
	uint32_t CountParamsOnSection(uint32_t, uint32_t) const;

	// BrnTrafficEntityModule.cpp:9331
	void EatParamsNextPlan(uint32_t);

	// BrnTrafficEntityModule.cpp:9356
	void UpdateJunctions();

	// BrnTrafficEntityModule.cpp:9469
	void UpdateEventStarts();

	// BrnTrafficEntityModule.cpp:9552
	void ResetEventData();

	// BrnTrafficEntityModule.cpp:9890
	void UpdateParams(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:10048
	void UpdateParams_BuildListOfCrashingThings(Array<BrnTraffic::CrashingThingData,168u> *, const InputBuffer_PostPhysics *, const FastBitArray<601> &);

	// BrnTrafficEntityModule.cpp:9738
	void UpdateParamsNonDecision(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModule.cpp:9768
	void UpdateParams_DoTimeSlicedLogic(uint32_t, uint32_t, const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModule.cpp:9644
	void UpdateParams_UpdateDead();

	// BrnTrafficEntityModule.cpp:9693
	void PutParamInPurgatory(uint32_t);

	// BrnTrafficEntityModule.cpp:10164
	void UpdateParams_UpdatePurgatoryList();

	// BrnTrafficEntityModule.cpp:10205
	void UpdateParams_UpdateNeighbours(Param *, const Section *, const BrnTraffic::Hull *);

	// BrnTrafficEntityModule.cpp:10247
	void UpdateParams_TryStartSympatheticCrashing(uint32_t, const Array<BrnTraffic::CrashingThingData,168u> *);

	// BrnTrafficEntityModule.cpp:10361
	void UpdateParams_TryAvoidCrashing(uint32_t, const Array<BrnTraffic::CrashingThingData,168u> *);

	// BrnTrafficEntityModule.cpp:10424
	void UpdateParams_TryToReinsertParam(uint32_t);

	// BrnTrafficEntityModule.cpp:10499
	void UpdateParams_UpdatePlan(uint32_t, uint32_t);

	// BrnTrafficEntityModule.cpp:10676
	void UpdateParams_UpdateBehaviour(uint32_t);

	// BrnTrafficEntityModule.cpp:10723
	void CalcRaceCarOnStartGridFuzzyScores(uint32_t, VecFloat &, VecFloat &, VecFloat &, VecFloat &, VecFloat &) const;

	// BrnTrafficEntityModule.cpp:10793
	float32_t UpdateParams_CalcAcceleration(uint32_t, const BrnTraffic::Param *, const Section *, const FastBitArray<601> &) const;

	// BrnTrafficEntityModule.cpp:10924
	void UpdateParams_CalcDesiredSpeed(uint32_t, const Section *, const BrnTraffic::Hull *, const FastBitArray<601> &);

	// BrnTrafficEntityModule.cpp:10977
	void UpdateParam_CheckIfNeedToSlow(uint32_t, const BrnTraffic::Hull *, uint32_t, const Section *, const Array<BrnTraffic::PhysicalVehicleInfo,33u> *);

	// BrnTrafficEntityModule.cpp:11207
	void UpdateParam_CheckIfInsideParamInFront(uint32_t);

	// BrnTrafficEntityModule.cpp:11270
	void UpdateParams_PrecalcBehaviourParams(uint32_t, const Section *, const BrnTraffic::Hull *, Vector4, Vector4, Vector4);

	// BrnTrafficEntityModule.cpp:11559
	bool DoesParamNeedToStopForStopline(uint32_t, uint32_t, const Section *, const BrnTraffic::Hull *, float32_t *) const;

	// BrnTrafficEntityModule.cpp:11727
	uint32_t FindNearestParamInFront(uint32_t, float32_t, float32_t *) const;

	// BrnTrafficEntityModule.cpp:11975
	void UpdateParams_IncrementParam(uint32_t, const BrnTraffic::Hull **, const Section **);

	// BrnTrafficEntityModule.cpp:12193
	void UpdateParams_HandleLaneChanges(uint32_t, const BrnTraffic::Hull *, const Section **);

	// BrnTrafficEntityModule.h:1792
	void UpdateParams_UpdatePositions();

	// BrnTrafficEntityModule.cpp:12338
	void UpdateParams_UpdateLinkedList();

	// BrnTrafficEntityModule.cpp:12728
	void InsertParamIntoList(uint32_t, uint32_t, uint32_t, float32_t);

	// BrnTrafficEntityModule.cpp:12824
	void SwapParamsInList(uint32_t, uint32_t);

	// BrnTrafficEntityModule.cpp:12874
	void RemoveParamFromList(uint32_t);

	// BrnTrafficEntityModule.cpp:13001
	void UpdateLerpedParamTransforms();

	// BrnTrafficEntityModule.cpp:13027
	void UpdateVehicles(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:13196
	void CacheRaceCarState(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModule.cpp:13266
	void UpdatePlayerIdle(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModule.cpp:13327
	void UpdateVehicles_CreateNewVehicles(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:13521
	void UpdateTrailers(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:13566
	void UpdateTrailers_UpdatePurgatory();

	// BrnTrafficEntityModule.cpp:13601
	void UpdateTrailers_MoveToCab(uint32_t);

	// BrnTrafficEntityModule.cpp:13983
	void GenerateSceneUpdateEvents(OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:14062
	// Declaration
	void ProcessNearbyTrafficSceneQueryResults(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:14064
		using namespace BrnTrafficIO;

	}

	// BrnTrafficEntityModule.cpp:14299
	void GenerateVehicleCrashedEvents(OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:14366
	// Declaration
	void SubmitCoronasForVehicle(BrnCoronaManager::BrnSubmissionInterface *, uint32_t, Vector3, Vector3, Vector4 &, Vector4 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:14369
		using namespace BrnTrafficIO;

	}

	// BrnTrafficEntityModule.cpp:14621
	// Declaration
	void StoreAISceneResultsForNextFrame(const InputBuffer_PrePhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:14623
		using namespace BrnTrafficIO;

	}

	// BrnTrafficEntityModule.cpp:14678
	void CreateTrafficAIEntity(uint32_t, const VehicleTypeRuntime *, EActiveRaceCarIndex, TrafficAIEntity *);

	// BrnTrafficEntityModule.cpp:14732
	// Declaration
	void ConvertSceneResultsToTrafficDataForAI(OutputBuffer_PostScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEntityModule.cpp:14734
		using namespace BrnTrafficIO;

	}

	// BrnTrafficEntityModule.cpp:14792
	void GenerateNetworkUpdateEvents(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:14883
	void RenderTrafficCar(CgsGraphics::DispatchFrame *, uint32_t, Vector3, Vector4, Vector4, BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *, int32_t, int32_t, int32_t, BrnWorld::ShadowMap *, CgsGraphics::Model::State, Vector4, Vector4, int32_t *);

	// BrnTrafficEntityModule.cpp:3947
	void KillTrafficOnStartGrid();

	// BrnTrafficEntityModule.cpp:4003
	void KillAllTrafficInCylinder(Vector3, float32_t, float32_t, bool);

	// BrnTrafficEntityModule.cpp:4062
	void KillAllTrafficInCylinderWhenCameraIsNotLooking(Vector3, float32_t, float32_t, bool, VecFloat);

	// BrnTrafficEntityModule.cpp:3978
	void KillTrafficOnStartGridWholeSale(Vector3);

	// BrnTrafficEntityModule.cpp:4084
	void RemoveVehicle(uint32_t);

	// BrnTrafficEntityModule.cpp:4265
	void EnsureVehicleRemovedFromCrashModule(uint32_t);

	// BrnTrafficEntityModule.cpp:3454
	void EnsureRecycledVehicleCleanedUp(uint32_t);

	// BrnTrafficEntityModule.cpp:3510
	void HandleRecycledTraffic(const VehicleManagerOutputInterface::RemovedTrafficEventQueue *);

	// BrnTrafficEntityModule.cpp:15533
	void ProcessTrafficTypeRequests(const VehicleManagerOutputInterface::TrafficTypeRequestQueue *, OutputBuffer_PostPhysics::TrafficTypeResponseQueue *);

	// BrnTrafficEntityModule.cpp:16913
	const Attribute::Key GetCarAssetAttribKey(uint32_t) const;

	// BrnTrafficEntityModule.cpp:16933
	const Attribute::Key GetVehicleTypeAttribKey(uint32_t) const;

	// BrnTrafficEntityModule.cpp:16950
	const Attribute::Key FindVehicleTypeAttribKey_EXPENSIVE(uint32_t) const;

	// BrnTrafficEntityModule.cpp:7752
	void StaticVehicles_KillParam(uint32_t);

	// BrnTrafficEntityModule.cpp:9611
	void StaticVehicles_RemoveDeadParam(uint32_t);

	// BrnTrafficEntityModule.cpp:8610
	void StaticVehicles_Generate(uint8_t, uint16_t, uint8_t);

	// BrnTrafficEntityModule.cpp:8651
	void StaticVehicles_UpdatePurgatory();

	// BrnTrafficEntityModule.cpp:8683
	void StaticVehicles_CreateNewVehicles(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:8788
	void StaticVehicles_UpdateStaticParams();

	// BrnTrafficEntityModule.cpp:8818
	void StaticVehicles_UpdateVehicles(const InputBuffer_PostPhysics *);

	// BrnTrafficEntityModule.cpp:3164
	void ProcessDeformationData(const DeformationOutputInterfaceForEntityModules *);

	// BrnTrafficEntityModule.cpp:3374
	void RenderTrafficLightCoronas(BrnCoronaManager::BrnSubmissionInterface *, Vector3, Vector3);

	// BrnTrafficEntityModule.cpp:8141
	void AddVehiclesToTargetList();

	// BrnTrafficEntityModule.cpp:16989
	void UpdatePressure_Reset();

	// BrnTrafficEntityModule.cpp:17013
	void Pressure_PickSplitToTake(const Section *, uint8_t *, uint16_t *, uint8_t *) const;

	// BrnTrafficEntityModule.cpp:15794
	bool TryClearupOffscreenTraffic(const FastBitArray<601>::Iterator &);

	// BrnTrafficEntityModule.cpp:15858
	void ClearupCrashedTraffic();

	// BrnTrafficEntityModule.cpp:17116
	bool CheckIfPhysicalVehicleIsStuck(uint32_t);

	// BrnTrafficEntityModule.h:2716
	void UpdateVehicleStuckSideTime(uint32_t, BrnTraffic::TrafficPhysicsInfo::EContactSideFlag, float32_t, float32_t, float32_t *);

	// BrnTrafficEntityModule.cpp:17195
	void UpdateVehicleStuckTimers(TrafficPhysicsInfo *);

	// BrnTrafficEntityModule.h:2742
	ShowtimeVehicleInfo * GetFirstUnusedShowtimeVehicleInfo(uint32_t &);

	// BrnTrafficEntityModule.cpp:17218
	void UpdateJunctionFUP();

	// BrnTrafficEntityModule.h:2762
	bool NeedToTakeActionAgainstJunctionFUP() const;

	// BrnTrafficEntityModule.h:2788
	bool NeedToTakeActionAgainstOnlineJunctionFUP() const;

	// BrnTrafficEntityModule.cpp:17338
	void JunctionFUP_StopOffscreenTraffic(const FastBitArray<601>::Iterator &, bool);

	// BrnTrafficEntityModule.cpp:17372
	bool JunctionFUP_TryClearupNonMovingPhysical(const FastBitArray<601>::Iterator &, bool);

	// BrnTrafficEntityModule.cpp:17695
	void PrecalculateAvoidanceFeelerData();

	// BrnTrafficEntityModule.cpp:17412
	VecFloat Avoidance_CalculatePassingScore(Vector3, Vector3, Vector3, Vector3, VecFloat, VecFloat);

	// BrnTrafficEntityModule.cpp:17496
	VecFloat Avoidance_CalculateDistancePosVelToOrigin(Vector2, Vector2);

	// BrnTrafficEntityModule.cpp:17524
	void Avoidance_GetBestVehicleDirection(uint32_t, Vector3 &, VecFloat &);

	// BrnTrafficEntityModule.cpp:17717
	void Avoidance_CalculateFeelers(Vector3, Vector3, Vector3 *);

	// BrnTrafficEntityModule.cpp:17755
	void HideAllTraffic();

	// BrnTrafficEntityModule.cpp:17791
	void UnhideAllTraffic();

	// BrnTrafficEntityModule.h:2819
	void KillAllTrafficNearPlayer();

	// BrnTrafficEntityModule.cpp:17812
	void RestartTraffic();

	// BrnTrafficEntityModule.h:2803
	bool DEBUGGetStopTrafficMoving() const;

	// BrnTrafficEntityModule.cpp:6574
	void DEBUG_RenderContactPoint(const TrafficContact *);

	// BrnTrafficEntityModule.cpp:6607
	void DEBUG_AddFuzzyLogicData(uint32_t, VecFloat *);

	// BrnTrafficEntityModule.cpp:17831
	void DEBUG_ValidateEmDriverControls(BrnTrafficDriverControls &, const char *);

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficEntityModule {
	private:
		// BrnTrafficEntityModule.h:2819
		void KillAllTrafficNearPlayer();

		// BrnTrafficEntityModule.h:2534
		Vehicle * GetVehicle(uint32_t);

		// BrnTrafficEntityModule.h:2558
		Matrix44Affine GetVehicleTransform(uint32_t) const;

		// BrnTrafficEntityModule.h:2425
		Param * GetParam(uint32_t);

		// BrnTrafficEntityModule.h:2449
		Vector3 GetDeterministicParamPos(uint32_t) const;

		// BrnTrafficEntityModule.h:2462
		const ParamTransform * GetParamTransform(uint32_t) const;

		// BrnTrafficEntityModule.h:2455
		ParamTransform * GetParamTransform(uint32_t);

		// BrnTrafficEntityModule.h:2550
		VehicleAxles * GetVehicleAxles(uint32_t);

		// BrnTrafficEntityModule.h:2304
		const BrnTraffic::Hull * GetHull(uint32_t) const;

		// BrnTrafficEntityModule.h:2319
		HullRuntime * GetHullRuntime(uint32_t);

		// BrnTrafficEntityModule.h:2575
		TrafficPhysicsInfo * GetTrafficPhysicsInfoForVehicle(uint32_t);

		// BrnTrafficEntityModule.h:2640
		const VehicleTypeRuntime * GetVehicleTypeRuntime(uint32_t) const;

		// BrnTrafficEntityModule.h:2526
		Vehicle * GetTrailerVehicle(uint32_t);

		// BrnTrafficEntityModule.h:2361
		HullRuntime * GetHullRuntimeSafe(uint32_t);

		// BrnTrafficEntityModule.h:2221
		bool IsPlayingOnlineGameMode() const;

		// BrnTrafficEntityModule.h:2440
		const BrnTraffic::Param * GetParam(uint32_t) const;

		// BrnTrafficEntityModule.h:2340
		const HullRuntime * GetHullRuntime(uint32_t) const;

		// BrnTrafficEntityModule.h:596
		extern const uint32_t KU_MAX_PHYSICAL_VEHICLES_TO_CACHE = 33;

	}

	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficEntityModule.h:77
	using BrnGameState::GameStateModuleIO;

	// Declaration
	struct TrafficEntityModule {
	private:
		// BrnTrafficEntityModule.h:596
		extern const uint32_t KU_MAX_PHYSICAL_VEHICLES_TO_CACHE = 33;

	}

	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficEntityModule.h:77
	using BrnGameState::GameStateModuleIO;

	// Declaration
	struct TrafficEntityModule {
	public:
		~TrafficEntityModule();

		TrafficEntityModule();

	private:
		// BrnTrafficEntityModule.h:596
		extern const uint32_t KU_MAX_PHYSICAL_VEHICLES_TO_CACHE = 33;

	}

	// BrnTrafficEntityModule.h:357
	const uint32_t KU_DEBUG_MAX_FUZZY_LOGIC = 40;

}

// BrnTrafficEntityModule.h:400
void BrnTraffic::TrafficEntityModule::~TrafficEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.h:400
void BrnTraffic::TrafficEntityModule::TrafficEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

