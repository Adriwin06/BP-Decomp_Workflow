// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct Vehicle {
		// BrnTrafficVehicle.h:183
		enum Flags {
			E_FLAG_ALIVE = 1,
			E_FLAG_HASENTITY = 2,
			E_FLAG_COLLIDABLE = 4,
			E_FLAG_PHYSICAL = 8,
			E_FLAG_FROZEN = 16,
			E_FLAG_ORPHAN = 32,
			E_FLAG_LEFT_SLAMMED = 64,
		}

		// BrnTrafficVehicle.h:195
		enum Species {
			E_SPECIES_STANDARD = 0,
			E_SPECIES_STATIC = 1,
			E_SPECIES_TRAILER = 2,
		}

		// BrnTrafficVehicle.h:203
		enum Manoeuvre {
			E_MANOEUVRE_NONE = 0,
			E_MANOEUVRE_EXTREME_SWERVE = 1,
			E_MANOEUVRE_3_POINT_TURN = 2,
			E_MANOEUVRE_GIVE_UP = 3,
			E_MANOEUVRE_STUCK_REVERSE = 4,
			E_MANOEUVRE_COUNT = 5,
		}

		// BrnTrafficVehicle.h:217
		enum SympatheticCrashState {
			E_SYMPATHETIC_NONE = 0,
			E_SYMPATHETIC_HEADON = 1,
			E_SYMPATHETIC_ACCELERATE = 2,
			E_SYMPATHETIC_HANDBRAKE = 3,
			E_SYMPATHETIC_LOCKUP = 4,
		}

	}

	// BrnTrafficVehicle.h:576
	extern BrnTraffic::Vehicle::Species GetVehicleSpecies(uint32_t);

	// BrnTrafficVehicle.h:53
	const VecFloat KF_VEHICLE_UPDATE_MATRIX_OLD_UP_FACTOR;

}

// BrnTrafficVehicle.h:59
struct BrnTraffic::VehicleSoaData {
	// BrnTrafficVehicle.h:63
	FastBitArray<601> mAliveVehicles;

	// BrnTrafficVehicle.h:64
	FastBitArray<601> mVehiclesWithEntities;

	// BrnTrafficVehicle.h:65
	FastBitArray<601> mCollidableVehicles;

	// BrnTrafficVehicle.h:66
	FastBitArray<601> mPhysicalVehicles;

	// BrnTrafficVehicle.h:67
	FastBitArray<601> mArticulatedVehicles;

	// BrnTrafficVehicle.h:69
	FastBitArray<601> mVehiclesRenderedLastFrame;

	// BrnTrafficVehicle.h:70
	FastBitArray<601> mPhysicalVehiclesFarFromPlayer;

	// BrnTrafficVehicle.h:72
	FastBitArray<601> mPhysicalVehiclesTryingToRecover;

public:
	// BrnTrafficVehicle.h:76
	void Construct();

}

// BrnTrafficVehicle.h:89
struct BrnTraffic::Axle {
	// BrnTrafficVehicle.h:91
	Vector3Plus mPosAndWheelRadius;

	// BrnTrafficVehicle.h:92
	Vector3Plus mUpAndDebug;

public:
	// BrnTrafficVehicle.h:97
	void Initialise();

	// BrnTrafficVehicle.h:104
	bool TryIntersectWithLane(const BrnTraffic::LaneRung &, const BrnTraffic::LaneRung &);

	// BrnTrafficVehicle.h:110
	void ForceIntersectWithLane(const BrnTraffic::LaneRung &, const BrnTraffic::LaneRung &);

	// BrnTrafficVehicle.h:113
	void SetUp(Vector3);

	// BrnTrafficVehicle.h:114
	Vector3 GetUp() const;

}

// BrnTrafficVehicle.h:130
struct BrnTraffic::VehicleAxles {
	// BrnTrafficVehicle.h:133
	Axle mFrontAxle;

	// BrnTrafficVehicle.h:134
	Axle mBackAxle;

public:
	// BrnTrafficVehicle.h:141
	void UpdateRearAxleForRoadCollision(const BrnTraffic::Param *, BrnTraffic::Hull **);

	// BrnTrafficVehicle.h:148
	void SetFromVehicleTransform(Matrix44Affine, const VehicleTypeRuntime *, const VehicleTypeUpdateData *);

}

// BrnTrafficVehicle.h:179
struct BrnTraffic::Vehicle {
private:
	// BrnTrafficVehicle.h:510
	uint8_t muVehicleType;

	// BrnTrafficVehicle.h:512
	uint8_t muCrashTrafficType;

	// BrnTrafficVehicle.h:514
	uint16_t muOtherHalfIndex;

	// BrnTrafficVehicle.h:516
	uint8_t muSpecies;

	// BrnTrafficVehicle.h:518
	uint8_t mxFlags;

	// BrnTrafficVehicle.h:519
	int8_t miPhysicalPartsIndex;

	// BrnTrafficVehicle.h:521
	uint8_t mxEffectState;

	// BrnTrafficVehicle.h:523
	float32_t mfSwerveTime;

	// BrnTrafficVehicle.h:525
	uint8_t muHeadlightWarmth;

	// BrnTrafficVehicle.h:526
	uint8_t muIndicatorBulbWarmth;

	// BrnTrafficVehicle.h:528
	uint8_t muHeadlightFlashPattern;

	// BrnTrafficVehicle.h:529
	uint8_t muHeadlightFlashState;

	// BrnTrafficVehicle.h:531
	Vector4 mSpeed_DistAcrossLane_SwerveAmount_W;

	// BrnTrafficVehicle.h:532
	Vector4 mPitch_Roll_Steering_WheelRot;

	// BrnTrafficVehicle.h:534
	float32_t mfHeadlightTimeToFlash;

	// BrnTrafficVehicle.h:535
	float32_t mfIndicatorTimeToFlash;

	// BrnTrafficVehicle.h:537
	int8_t miBrakelightState;

	// BrnTrafficVehicle.h:539
	int8_t miPhysicalReason;

	// BrnTrafficVehicle.h:541
	int8_t miManoeuvre;

	// BrnTrafficVehicle.h:542
	int8_t miManoeuvrePhase;

	// BrnTrafficVehicle.h:544
	float32_t mfRandomVal;

	// BrnTrafficVehicle.h:547
	EntityId mSympCrashTarget;

	// BrnTrafficVehicle.h:548
	float32_t mfPhysicalTime;

	// BrnTrafficVehicle.h:550
	BrnTraffic::Vehicle::SympatheticCrashState meSympCrashState;

	// BrnTrafficVehicle.h:551
	float32_t mfSympCrashTime;

	// BrnTrafficVehicle.h:553
	Vector3 mLinearVelocity;

	// BrnTrafficVehicle.h:555
	float32_t mfManoeuvreTime;

	// BrnTrafficVehicle.h:558
	Vector3 mTargetPos;

public:
	// BrnTrafficVehicle.h:239
	void Construct(VehicleAxles *, Matrix44Affine &);

	// BrnTrafficVehicle.h:259
	void InitialiseAsStandard(VehicleAxles *, Matrix44Affine &, const BrnTraffic::Param *, float32_t, BrnTraffic::Hull **, uint32_t, const VehicleTypeRuntime *, const VehicleTypeUpdateData *, const BrnTraffic::VehicleTraits *, float32_t, float32_t, Vector3, Vector3, uint32_t, VehicleSoaData &, uint16_t);

	// BrnTrafficVehicle.h:272
	void InitialiseAsStatic(VehicleAxles *, Matrix44Affine &, float32_t, uint32_t, const VehicleTypeRuntime *, const VehicleTypeUpdateData *, Matrix44Affine, uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:291
	void InitialiseAsTrailer(VehicleAxles *, Matrix44Affine &, const BrnTraffic::Param *, float32_t, BrnTraffic::Hull **, uint32_t, const VehicleTypeRuntime *, const VehicleTypeUpdateData *, const Vehicle *, Matrix44Affine, const VehicleTypeUpdateData *, const VehicleTypeRuntime *, uint32_t, VehicleSoaData &, uint16_t);

	// BrnTrafficVehicle.h:302
	void UpdateEffects(float32_t, int32_t, Random *);

	// BrnTrafficVehicle.h:310
	void UpdateMatrix(const VehicleAxles *, Matrix44Affine &, const VehicleTypeRuntime *, Vector3);

	// BrnTrafficVehicle.h:314
	VecFloat GetSpeed() const;

	// BrnTrafficVehicle.h:315
	VecFloat GetDistAcrossLane() const;

	// BrnTrafficVehicle.h:316
	VecFloat GetSwerveAmount() const;

	// BrnTrafficVehicle.h:317
	VecFloat GetPitch() const;

	// BrnTrafficVehicle.h:318
	VecFloat GetRoll() const;

	// BrnTrafficVehicle.h:319
	VecFloat GetSteering() const;

	// BrnTrafficVehicle.h:320
	VecFloat GetWheelRot() const;

	// BrnTrafficVehicle.h:321
	void SetSpeed(VecFloat);

	// BrnTrafficVehicle.h:322
	void SetDistAcrossLane(VecFloat);

	// BrnTrafficVehicle.h:323
	void SetSwerveAmount(VecFloat);

	// BrnTrafficVehicle.h:324
	void SetSteering(VecFloat);

	// BrnTrafficVehicle.h:325
	void SetWheelRot(VecFloat);

	// BrnTrafficVehicle.h:327
	void SetPitch_Roll_Steering_WheelRot(Vector4);

	// BrnTrafficVehicle.h:328
	Vector4 GetPitch_Roll_Steering_WheelRot() const;

	// BrnTrafficVehicle.h:330
	float32_t GetRandomVal() const;

	// BrnTrafficVehicle.h:332
	void SetTargetPos(Vector3);

	// BrnTrafficVehicle.h:333
	Vector3 GetTargetPos() const;

	// BrnTrafficVehicle.h:335
	void SetLinearVelocity(Vector3);

	// BrnTrafficVehicle.h:336
	Vector3 GetLinearVelocity() const;

	// BrnTrafficVehicle.h:338
	uint16_t GetTrailerIndex() const;

	// BrnTrafficVehicle.h:339
	uint16_t GetCabIndex() const;

	// BrnTrafficVehicle.h:341
	uint8_t GetVehicleType() const;

	// BrnTrafficVehicle.h:343
	void SetSwerveTime(float32_t);

	// BrnTrafficVehicle.h:344
	float32_t GetSwerveTime() const;

	// BrnTrafficVehicle.h:346
	bool WantsToExtremeSwerve() const;

	// BrnTrafficVehicle.h:347
	void SetWantsToExtremeSwerve(bool);

	// BrnTrafficVehicle.h:348
	void StartGiveUpManoeuvre();

	// BrnTrafficVehicle.h:349
	BrnTraffic::Vehicle::Manoeuvre GetCurrentManoeuvre() const;

	// BrnTrafficVehicle.h:350
	void SetCurrentManoeuvre(BrnTraffic::Vehicle::Manoeuvre);

	// BrnTrafficVehicle.h:351
	int8_t GetCurrentManoeuvrePhase() const;

	// BrnTrafficVehicle.h:352
	void SetCurrentManoeuvrePhase(int8_t);

	// BrnTrafficVehicle.h:355
	bool IsOfStandardSpecies() const;

	// BrnTrafficVehicle.h:356
	bool IsOfStaticSpecies() const;

	// BrnTrafficVehicle.h:357
	bool IsOfTrailerSpecies() const;

	// BrnTrafficVehicle.h:359
	bool IsCab() const;

	// BrnTrafficVehicle.h:362
	bool GetFlag(BrnTraffic::Vehicle::Flags) const;

	// BrnTrafficVehicle.h:363
	bool IsAlive() const;

	// BrnTrafficVehicle.h:364
	bool HasEntity() const;

	// BrnTrafficVehicle.h:365
	bool IsCollidable() const;

	// BrnTrafficVehicle.h:366
	bool IsPhysical() const;

	// BrnTrafficVehicle.h:367
	bool IsFrozen() const;

	// BrnTrafficVehicle.h:368
	bool IsOrphan() const;

	// BrnTrafficVehicle.h:369
	bool IsArticulated() const;

	// BrnTrafficVehicle.h:371
	void SetDead(uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:372
	void SetOrphan();

	// BrnTrafficVehicle.h:373
	void SetHasEntity(bool, uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:374
	void SetCollidable(bool, const FastBitArray<601>::Iterator &, VehicleSoaData &);

	// BrnTrafficVehicle.h:375
	void SetPhysical(int8_t, uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:376
	void SetNotPhysical(uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:377
	void SetFrozen(bool);

	// BrnTrafficVehicle.h:378
	void DetachArticulation(uint32_t, VehicleSoaData &);

	// BrnTrafficVehicle.h:380
	int8_t GetPhysicalPartsIndex() const;

	// BrnTrafficVehicle.h:382
	bool IsCrashing() const;

	// BrnTrafficVehicle.h:383
	bool IsSympatheticallyCrashing() const;

	// BrnTrafficVehicle.h:384
	bool IsExtremeSwerving() const;

	// BrnTrafficVehicle.h:385
	bool IsRecoveringFromSlam() const;

	// BrnTrafficVehicle.h:386
	bool IsBeingChecked() const;

	// BrnTrafficVehicle.h:387
	bool IsSympatheticCrasher() const;

	// BrnTrafficVehicle.h:388
	bool IsNormalPhysical() const;

	// BrnTrafficVehicle.h:392
	BrnTraffic::Vehicle::SympatheticCrashState GetSympatheticCrashState() const;

	// BrnTrafficVehicle.h:396
	void SetSympatheticCrashState(BrnTraffic::Vehicle::SympatheticCrashState);

	// BrnTrafficVehicle.h:398
	uint32_t DEBUG_GetFlags() const;

	// BrnTrafficVehicle.h:401
	void SetHornOn(bool);

	// BrnTrafficVehicle.h:402
	void SetAlarmOn(bool);

	// BrnTrafficVehicle.h:403
	void SetLeftIndicatorOn(bool);

	// BrnTrafficVehicle.h:404
	void ToggleLeftIndicatorOn();

	// BrnTrafficVehicle.h:405
	void SetRightIndicatorOn(bool);

	// BrnTrafficVehicle.h:406
	void ToggleRightIndicatorOn();

	// BrnTrafficVehicle.h:407
	void SetHeadlightsFlashed(bool);

	// BrnTrafficVehicle.h:408
	void SetBrakelightsOn(bool);

	// BrnTrafficVehicle.h:409
	void SetFlashingHeadlights(bool, Random *);

	// BrnTrafficVehicle.h:410
	void SetIndicatingLeft(bool);

	// BrnTrafficVehicle.h:411
	void SetIndicatingRight(bool);

	// BrnTrafficVehicle.h:413
	bool IsHornOn() const;

	// BrnTrafficVehicle.h:414
	bool IsAlarmOn() const;

	// BrnTrafficVehicle.h:415
	bool IsLeftIndicatorOn() const;

	// BrnTrafficVehicle.h:416
	bool IsRightIndicatorOn() const;

	// BrnTrafficVehicle.h:417
	bool AreHeadlightsFlashed() const;

	// BrnTrafficVehicle.h:418
	bool AreBrakelightsOn() const;

	// BrnTrafficVehicle.h:419
	bool IsFlashingHeadlights() const;

	// BrnTrafficVehicle.h:420
	bool IsIndicatingLeft() const;

	// BrnTrafficVehicle.h:421
	bool IsIndicatingRight() const;

	// BrnTrafficVehicle.h:423
	void SetSympatheticCrashTarget(EntityId);

	// BrnTrafficVehicle.h:424
	EntityId GetSympatheticCrashTarget() const;

	// BrnTrafficVehicle.h:426
	void SetPhysicalReason(BrnTraffic::PhysicalReason);

	// BrnTrafficVehicle.h:427
	BrnTraffic::PhysicalReason GetPhysicalReason() const;

	// BrnTrafficVehicle.h:429
	float32_t GetHeadlightWarmth() const;

	// BrnTrafficVehicle.h:430
	float32_t GetIndicatorBulbWarmth() const;

	// BrnTrafficVehicle.h:432
	void SetCrashTrafficType(BrnPhysics::Vehicle::eCrashTrafficType);

	// BrnTrafficVehicle.h:433
	BrnPhysics::Vehicle::eCrashTrafficType GetCrashTrafficType() const;

	// BrnTrafficVehicle.h:436
	bool WasPartiallyUpdated() const;

	// BrnTrafficVehicle.h:437
	void SetWasPartiallyUpdated(bool);

	// BrnTrafficVehicle.h:446
	Vector3 CalcTowBarPos(Matrix44Affine, const VehicleTypeRuntime *) const;

	// BrnTrafficVehicle.h:453
	Vector3 CalcFrontAxlePos(Matrix44Affine, Vector3, const VehicleTypeRuntime *) const;

	// BrnTrafficVehicle.h:458
	void CopyEffectsFromCab(const Vehicle *);

	// BrnTrafficVehicle.h:462
	void OnPhysical(BrnPhysics::Vehicle::eCrashTrafficType);

	// BrnTrafficVehicle.h:465
	float32_t GetPhysicalTime() const;

	// BrnTrafficVehicle.h:469
	void ResetPhysicalTime(float32_t);

	// BrnTrafficVehicle.h:473
	void AddPhysicalTime(float32_t);

	// BrnTrafficVehicle.h:476
	float32_t GetSympatheticTime() const;

	// BrnTrafficVehicle.h:480
	void AddSympatheticTime(float32_t);

	// BrnTrafficVehicle.h:484
	void ResetManoeuvreTime(float32_t);

	// BrnTrafficVehicle.h:487
	float32_t GetManoeuvreTime() const;

	// BrnTrafficVehicle.h:491
	void AddManoeuvreTime(float32_t);

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficVehicle.h:53
	const VecFloat KF_VEHICLE_UPDATE_MATRIX_OLD_UP_FACTOR;

}

// BrnTrafficVehicle.h:159
struct BrnTraffic::VehicleRenderInfo {
	// BrnTrafficVehicle.h:161
	uint32_t muEntityIndex;

	// BrnTrafficVehicle.h:162
	float32_t mfDistanceSq;

	// BrnTrafficVehicle.h:163
	CgsGraphics::Model::State mLOD;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct Vehicle {
		// BrnTrafficVehicle.h:183
		enum Flags {
			E_FLAG_ALIVE = 1,
			E_FLAG_HASENTITY = 2,
			E_FLAG_COLLIDABLE = 4,
			E_FLAG_PHYSICAL = 8,
			E_FLAG_FROZEN = 16,
			E_FLAG_ORPHAN = 32,
			E_FLAG_LEFT_SLAMMED = 64,
		}

		// BrnTrafficVehicle.h:203
		enum Manoeuvre {
			E_MANOEUVRE_NONE = 0,
			E_MANOEUVRE_EXTREME_SWERVE = 1,
			E_MANOEUVRE_3_POINT_TURN = 2,
			E_MANOEUVRE_GIVE_UP = 3,
			E_MANOEUVRE_STUCK_REVERSE = 4,
			E_MANOEUVRE_COUNT = 5,
		}

		// BrnTrafficVehicle.h:217
		enum SympatheticCrashState {
			E_SYMPATHETIC_NONE = 0,
			E_SYMPATHETIC_HEADON = 1,
			E_SYMPATHETIC_ACCELERATE = 2,
			E_SYMPATHETIC_HANDBRAKE = 3,
			E_SYMPATHETIC_LOCKUP = 4,
		}

	}

	// BrnTrafficVehicle.h:53
	const VecFloat KF_VEHICLE_UPDATE_MATRIX_OLD_UP_FACTOR;

}

