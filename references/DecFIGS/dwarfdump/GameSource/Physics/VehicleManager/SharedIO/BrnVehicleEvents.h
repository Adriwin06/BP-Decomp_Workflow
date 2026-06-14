// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleEvents.h:52
		const int32_t KI_MAX_IMPACT_EVENTS = 16;

	}

}

// BrnVehicleEvents.h:88
struct BrnPhysics::Vehicle::WheelLite {
	// BrnVehicleEvents.h:90
	BrnPhysics::Vehicle::Wheel::RoadContact mRoadContact;

	// BrnVehicleEvents.h:91
	Vector3 mVelocity;

	// BrnVehicleEvents.h:92
	float32_t mfSuspensionHeight;

	// BrnVehicleEvents.h:93
	float32_t mfRadiansPerSecond;

	// BrnVehicleEvents.h:94
	float32_t mfRadius;

	// BrnVehicleEvents.h:95
	float32_t mfRotation;

	// BrnVehicleEvents.h:96
	float32_t mfSkidFactor;

	// BrnVehicleEvents.h:98
	float32_t mfWheelLongSpeed;

	// BrnVehicleEvents.h:99
	float32_t mfRoadLongSpeed;

	// BrnVehicleEvents.h:100
	float32_t mfRoadLatSpeed;

	// BrnVehicleEvents.h:102
	bool mbAttached;

	// BrnVehicleEvents.h:103
	bool mbHasTraction;

public:
	// BrnVehicleEvents.h:106
	void operator=(const WheelLite &);

}

// BrnVehicleEvents.h:144
struct BrnPhysics::Vehicle::RaceCarState {
	// BrnVehicleEvents.h:147
	WheelLite[4] maWheels;

	// BrnVehicleEvents.h:148
	AboveGroundTestResult mAboveGroundTestResult;

	// BrnVehicleEvents.h:149
	Matrix44Affine mTransform;

	// BrnVehicleEvents.h:150
	Matrix44Affine[4] maWheelTransforms;

	// BrnVehicleEvents.h:151
	Vector3 mLinearVelocity;

	// BrnVehicleEvents.h:152
	Vector3 mAngularVelocity;

	// BrnVehicleEvents.h:153
	Vector3 mHalfExtent;

	// BrnVehicleEvents.h:154
	Vector3 mComOffset;

	// BrnVehicleEvents.h:155
	BrnPhysics::Vehicle::VehiclePhysics::SlamEffect mSlamEffect;

	// BrnVehicleEvents.h:156
	BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect mShuntEffect;

	// BrnVehicleEvents.h:158
	Attribute::Key mCarAssetAttribKey;

	// BrnVehicleEvents.h:160
	EntityId mEntityId;

	// BrnVehicleEvents.h:162
	float32_t mfSpeedMPH;

	// BrnVehicleEvents.h:163
	float32_t mfMaxSpeedMPH;

	// BrnVehicleEvents.h:164
	float32_t mfMaxBoostSpeedMPH;

	// BrnVehicleEvents.h:165
	float32_t mfRPM;

	// BrnVehicleEvents.h:166
	float32_t mfUpShiftRPM;

	// BrnVehicleEvents.h:167
	float32_t mfDownShiftRPM;

	// BrnVehicleEvents.h:168
	float32_t[6] mafGearRatios;

	// BrnVehicleEvents.h:169
	float32_t mfAbsDriftScale;

	// BrnVehicleEvents.h:170
	float32_t mfTimeDrifting;

	// BrnVehicleEvents.h:171
	float32_t mfTimeInAir;

	// BrnVehicleEvents.h:173
	float32_t mfGas;

	// BrnVehicleEvents.h:174
	float32_t mfBrake;

	// BrnVehicleEvents.h:175
	float32_t mfHandBrake;

	// BrnVehicleEvents.h:176
	float32_t mfSteering;

	// BrnVehicleEvents.h:177
	float32_t mfTimeBoosting;

	// BrnVehicleEvents.h:178
	float32_t mfInProgressBarrelRollAngle;

	// BrnVehicleEvents.h:179
	float32_t mfInProgressAirSpinAngle;

	// BrnVehicleEvents.h:180
	float32_t mfInProgressHandbreakTurnAngle;

	// BrnVehicleEvents.h:181
	float32_t mfInProgressDriftTime;

	// BrnVehicleEvents.h:182
	float32_t mfInProgressDriftDistance;

	// BrnVehicleEvents.h:183
	float32_t mfTimeSinceLastRaceCarContact;

	// BrnVehicleEvents.h:184
	float32_t mfTimeCrashing;

	// BrnVehicleEvents.h:186
	uint32_t muStuntActionInProgress;

	// BrnVehicleEvents.h:187
	int32_t mi8LastAttackersRaceCarIndex;

	// BrnVehicleEvents.h:188
	int32_t miRaceCarID;

	// BrnVehicleEvents.h:190
	int8_t mi8Gear;

	// BrnVehicleEvents.h:191
	int8_t mi8LastContactedRaceCar;

	// BrnVehicleEvents.h:192
	bool[4] mabWheelExists;

	// BrnVehicleEvents.h:193
	bool mbCrashing;

	// BrnVehicleEvents.h:194
	bool mbIsFatalyCrashing;

	// BrnVehicleEvents.h:195
	bool mbIsDriveable;

	// BrnVehicleEvents.h:196
	bool mbStartedDeforming;

	// BrnVehicleEvents.h:197
	bool mbResetCarTransform;

	// BrnVehicleEvents.h:198
	bool mbJustBeenSlammed;

	// BrnVehicleEvents.h:199
	bool mbIsFrontRayOccluded;

	// BrnVehicleEvents.h:200
	bool mbIsWedgedInWorld;

	// BrnVehicleEvents.h:201
	bool mbIsHidden;

	// BrnVehicleEvents.h:202
	bool mbContactingWall;

	// BrnVehicleEvents.h:203
	bool mbForceReset;

	// BrnVehicleEvents.h:204
	bool mbDeformedThisFrame;

	// BrnVehicleEvents.h:205
	bool mbFullyDrivableFromCrash;

	// BrnVehicleEvents.h:207
	BrnPhysics::Vehicle::E_DRIVER_TYPE meDriverType;

public:
	// BrnVehicleEvents.h:211
	void Clear();

	// BrnVehicleEvents.h:214
	void operator=(const RaceCarState &);

}

// BrnVehicleEvents.h:296
struct BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent {
	// BrnVehicleEvents.h:298
	EntityId mBodyId;

	// CgsSceneManagerTypes.h:45
	typedef uint32_t CullingGroup;

	// BrnVehicleEvents.h:299
	SetRaceCarCullingGroupEvent::CullingGroup mCullingGroup;

}

// BrnVehicleEvents.h:64
struct BrnPhysics::Vehicle::ImpactEvent {
	// BrnVehicleEvents.h:66
	Vector3 mDirection;

	// BrnVehicleEvents.h:67
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnVehicleEvents.h:68
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnVehicleEvents.h:69
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnVehicleEvents.h:70
	float32_t mfMagnitude;

	// BrnVehicleEvents.h:71
	float32_t mfDuration;

	// BrnVehicleEvents.h:72
	float32_t mfSteeringDirection;

	// BrnVehicleEvents.h:73
	float32_t mfRecoveryTime;

	// BrnVehicleEvents.h:74
	uint8_t muScore;

}

// BrnVehicleEvents.h:119
struct BrnPhysics::Vehicle::PhysicalTrafficState {
	// BrnVehicleEvents.h:121
	WheelLite[4] maWheels;

	// BrnVehicleEvents.h:122
	Matrix44Affine mTransform;

	// BrnVehicleEvents.h:123
	Vector3Plus mvRoadTestNormal_HeightAboveRoad;

	// BrnVehicleEvents.h:124
	Vector3 mLinearVelocity;

	// BrnVehicleEvents.h:125
	Matrix44Affine[4] maWheelTransforms;

	// BrnVehicleEvents.h:126
	EntityId mEntityID;

	// BrnVehicleEvents.h:127
	float32_t mfSpeed;

	// BrnVehicleEvents.h:128
	bool mbFrozen;

	// BrnVehicleEvents.h:129
	bool mbIsDeforming;

	// BrnVehicleEvents.h:130
	bool mbIsFatallyCrashing;

	// BrnVehicleEvents.h:131
	float32_t mfSteering;

}

// BrnVehicleEvents.h:329
struct BrnPhysics::Vehicle::CreatePhysicalTrafficEvent {
	// BrnVehicleEvents.h:332
	VolumeInstanceId mVolumeInstanceID;

	// BrnVehicleEvents.h:333
	EntityId mCrasherID;

	// BrnVehicleEvents.h:334
	Matrix44Affine mInitialTransform;

	// BrnVehicleEvents.h:335
	Vector3 mInitialVelocity;

	// BrnVehicleEvents.h:336
	Vector3 mAngularVelocity;

	// BrnVehicleEvents.h:337
	Attribute::Key mCarAssetAttribKey;

	// BrnVehicleEvents.h:338
	ResourceHandle mModelHandle;

	// BrnVehicleEvents.h:339
	BrnPhysics::Vehicle::ETrafficType meTrafficType;

	// BrnVehicleEvents.h:340
	bool mbIsCab;

	// BrnVehicleEvents.h:341
	CgsID mCgsID;

}

// BrnVehicleEvents.h:242
struct BrnPhysics::Vehicle::CreateRaceCarEvent {
	// BrnVehicleEvents.h:244
	VolumeInstanceId mVolumeInstanceID;

	// BrnVehicleEvents.h:245
	Matrix44Affine mInitialTransform;

	// BrnVehicleEvents.h:246
	Vector3 mInitialVelocity;

	// BrnVehicleEvents.h:247
	Vector3 mAngularVelocity;

	// BrnVehicleEvents.h:248
	Attribute::Key mCarAssetAttribKey;

	// BrnVehicleEvents.h:249
	ResourceHandle mModelHandle;

	// BrnVehicleEvents.h:250
	ResourceHandle mGraphicsHandle;

	// BrnVehicleEvents.h:251
	BrnWorld::ERaceCarType meRaceCarType;

	// BrnVehicleEvents.h:252
	float32_t mfDeformAmount;

	// BrnVehicleEvents.h:253
	BrnPhysics::Deformation::DeformationResetType meBaseDeformationType;

	// BrnVehicleEvents.h:254
	bool mbDisablePhysicsStateReset;

	// BrnVehicleEvents.h:255
	int32_t miCarStrengthStat;

}

// BrnVehicleEvents.h:267
struct BrnPhysics::Vehicle::RemoveRaceCarEvent {
	// BrnVehicleEvents.h:269
	VolumeInstanceId mVolumeInstanceID;

}

// BrnVehicleEvents.h:281
struct BrnPhysics::Vehicle::SetRaceCarCollisionEvent {
	// BrnVehicleEvents.h:283
	EntityId mBodyId;

	// BrnVehicleEvents.h:284
	bool mbCollide;

}

// BrnVehicleEvents.h:296
struct BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent {
	// BrnVehicleEvents.h:298
	EntityId mBodyId;

	// BrnVehicleEvents.h:299
	InEventAddForCollision::CullingGroup mCullingGroup;

}

// BrnVehicleEvents.h:311
struct BrnPhysics::Vehicle::ValidateRaceCarEvent {
	// BrnVehicleEvents.h:313
	bool mbValidate;

	// BrnVehicleEvents.h:314
	VolumeInstanceId mVolumeInstanceID;

	// BrnVehicleEvents.h:315
	ResourceHandle mModelHandle;

	// BrnVehicleEvents.h:316
	ResourceHandle mGraphicsHandle;

}

// BrnVehicleEvents.h:354
struct BrnPhysics::Vehicle::CreateArticulatedTrafficEvent {
	// BrnVehicleEvents.h:357
	Matrix44Affine mInitialTransform_Cab;

	// BrnVehicleEvents.h:358
	Matrix44Affine mInitialTransform_Trailer;

	// BrnVehicleEvents.h:359
	Vector3 mInitialVelocity_Cab;

	// BrnVehicleEvents.h:360
	Vector3 mInitialVelocity_Trailer;

	// BrnVehicleEvents.h:361
	Vector3 mAngularVelocity_Cab;

	// BrnVehicleEvents.h:362
	Vector3 mAngularVelocity_Trailer;

	// BrnVehicleEvents.h:363
	VolumeInstanceId mVolumeInstanceID_Cab;

	// BrnVehicleEvents.h:364
	VolumeInstanceId mVolumeInstanceID_Trailer;

	// BrnVehicleEvents.h:365
	Attribute::Key mAssetAttribKey_Cab;

	// BrnVehicleEvents.h:366
	Attribute::Key mAssetAttribKey_Trailer;

	// BrnVehicleEvents.h:367
	ResourceHandle mModelHandle_Cab;

	// BrnVehicleEvents.h:368
	ResourceHandle mModelHandle_Trailer;

	// BrnVehicleEvents.h:369
	CgsID mCgsId_Cab;

	// BrnVehicleEvents.h:370
	CgsID mCgsId_Trailer;

	// BrnVehicleEvents.h:371
	BrnPhysics::Vehicle::ETrafficType meTrafficType;

public:
	// BrnVehicleEvents.h:376
	void GetCreateCabEvent(CreatePhysicalTrafficEvent *) const;

	// BrnVehicleEvents.h:381
	void GetCreateTrailerEvent(CreatePhysicalTrafficEvent *) const;

}

// BrnVehicleEvents.h:394
struct BrnPhysics::Vehicle::SetTrafficCrashingEvent {
	// BrnVehicleEvents.h:397
	EntityId mEntityId;

	// BrnVehicleEvents.h:398
	bool mbCrashing;

}

// BrnVehicleEvents.h:412
struct BrnPhysics::Vehicle::RemoveTrafficEvent {
	// BrnVehicleEvents.h:414
	VolumeInstanceId mVolumeInstanceID;

}

// BrnVehicleEvents.h:426
struct BrnPhysics::Vehicle::UpdateNetworkTrafficEvent {
	// BrnVehicleEvents.h:428
	VolumeInstanceId mVolumeInstanceID;

	// BrnVehicleEvents.h:429
	Matrix44Affine mTransform;

}

// BrnVehicleEvents.h:441
struct BrnPhysics::Vehicle::ResetVehicleEvent {
	// BrnVehicleEvents.h:443
	uint32_t miRaceCarIndex;

	// BrnVehicleEvents.h:444
	Matrix44Affine mInitialTransform;

	// BrnVehicleEvents.h:445
	Vector3 mInitialVelocity;

	// BrnVehicleEvents.h:446
	Vector3 mAngularVelocity;

	// BrnVehicleEvents.h:447
	bool mbResetTransform;

	// BrnVehicleEvents.h:448
	bool mbResetDeformation;

	// BrnVehicleEvents.h:449
	bool mbResettingAfterWreck;

	// BrnVehicleEvents.h:450
	float32_t mfRoadRageHowCloseToWrecked;

	// BrnVehicleEvents.h:451
	BrnPhysics::Deformation::DeformationResetType meDeformationResetType;

}

// BrnVehicleEvents.h:463
struct BrnPhysics::Vehicle::CreateVehicleResult {
	// BrnVehicleEvents.h:465
	VolumeInstanceId mVolumeInstanceID;

	// BrnVehicleEvents.h:466
	bool mbSuccess;

}

// BrnVehicleEvents.h:478
struct BrnPhysics::Vehicle::TrafficCrashedEvent {
	// BrnVehicleEvents.h:480
	VolumeInstanceId mTrafficVolumeInstanceID;

	// BrnVehicleEvents.h:481
	EntityId mCrasherEntityID;

}

// BrnVehicleEvents.h:493
struct BrnPhysics::Vehicle::TrafficSlammedEvent {
	// BrnVehicleEvents.h:495
	EntityId mTrafficId;

	// BrnVehicleEvents.h:496
	EntityId mEntityThatSlammedIt;

	// BrnVehicleEvents.h:497
	BrnPhysics::Vehicle::eCrashTrafficType meCrashTrafficType;

	// BrnVehicleEvents.h:498
	float32_t mfSteeringDirection;

	// BrnVehicleEvents.h:499
	float32_t mfDriveDirection;

}

// BrnVehicleEvents.h:511
struct BrnPhysics::Vehicle::TrafficRemovedEvent {
	// BrnVehicleEvents.h:514
	EntityId mRemovedVehicleEntityId;

	// BrnVehicleEvents.h:515
	BrnPhysics::Vehicle::ETrafficType meTrafficType;

}

// BrnVehicleEvents.h:527
struct BrnPhysics::Vehicle::RaceCarCrashEvent {
	// BrnVehicleEvents.h:529
	VolumeInstanceId mRaceCarVolumeInstanceID;

	// BrnVehicleEvents.h:530
	EntityId mCrasherEntityID;

	// BrnVehicleEvents.h:531
	Vector3 mCollisionNormal;

	// BrnVehicleEvents.h:532
	Vector3 mContactPoint;

	// BrnVehicleEvents.h:533
	BrnGameState::ETakedownType meInstantTakedownType;

	// BrnVehicleEvents.h:534
	float32_t mfSpeedMPH;

	// BrnVehicleEvents.h:535
	bool mbIsPrimaryCrash;

	// BrnVehicleEvents.h:536
	bool mbRemoveHandlingVolumeFromScene;

	// BrnVehicleEvents.h:537
	bool mbCarIsAI;

	// BrnVehicleEvents.h:538
	bool mbCarIsNetwork;

}

// BrnVehicleEvents.h:550
struct BrnPhysics::Vehicle::RaceCarResetEvent {
	// BrnVehicleEvents.h:552
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnVehicleEvents.h:553
	bool mbResettingAfterWreck;

	// BrnVehicleEvents.h:554
	Vector3 mResetPosition;

}

// BrnVehicleEvents.h:586
struct BrnPhysics::Vehicle::CreateAirRamEvent {
	// BrnVehicleEvents.h:588
	VolumeInstanceId mVolumeId;

	// BrnVehicleEvents.h:589
	uint32_t muEffectFlags;

	// BrnVehicleEvents.h:590
	float32_t mfDecay;

	// BrnVehicleEvents.h:591
	Vector3Plus mDirectionAndMagnitude;

	// BrnVehicleEvents.h:592
	Vector3 mPosition;

	// BrnVehicleEvents.h:593
	float32_t mfStartTime;

}

// BrnVehicleEvents.h:620
struct BrnPhysics::Vehicle::CreateSpinEvent {
	// BrnVehicleEvents.h:622
	VolumeInstanceId mVolumeId;

	// BrnVehicleEvents.h:623
	Vector3 mForce;

	// BrnVehicleEvents.h:624
	float32_t mfTime;

}

// BrnVehicleEvents.h:636
struct BrnPhysics::Vehicle::VehicleAddedForCollisionEvent {
	// BrnVehicleEvents.h:638
	VolumeInstanceId mRaceCarVolumeInstanceId;

	// BrnVehicleEvents.h:639
	bool mbAdded;

}

// BrnVehicleEvents.h:40
namespace BrnVehicle {
	struct ShatteredGlassPart;

	struct GraphicsSpec;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleEvents.h:52
		const int32_t KI_MAX_IMPACT_EVENTS = 16;

	}

}

// BrnVehicleEvents.h:566
struct BrnPhysics::Vehicle::CreateWorldEvent {
	// BrnVehicleEvents.h:568
	Matrix44Affine mInitialTransform;

	// BrnVehicleEvents.h:569
	VolumeInstanceId mVolumeInstanceId;

}

// BrnVehicleEvents.h:40
namespace BrnVehicle {
	struct GraphicsSpec;

}

// BrnVehicleEvents.h:40
namespace BrnVehicle {
	// Declaration
	struct GraphicsSpecResourceType {
	public:
		GraphicsSpecResourceType();

	}

}

// BrnVehicleEvents.h:40
namespace BrnVehicle {
	struct ShatteredGlassPart;

	struct GraphicsSpec;

	struct PhysicsSpec;

	struct PhysicsSpecResourceType;

	struct GraphicsSpecResourceType;

}

// BrnVehicleEvents.h:40
namespace BrnVehicle {
	struct GraphicsSpec;

	struct ShatteredGlassPart;

}

