// BrnTrafficParam.h:51
struct BrnTraffic::ParamSoaData {
	// BrnTrafficParam.h:55
	FastBitArray<601> mAliveParams;

	// BrnTrafficParam.h:56
	FastBitArray<601> mDyingParams;

	// BrnTrafficParam.h:57
	FastBitArray<601> mZombieParams;

public:
	// BrnTrafficParam.h:62
	void Construct();

}

// BrnTrafficParam.h:75
struct BrnTraffic::ParamPlan {
	// BrnTrafficParam.h:87
	uint8_t muType;

	// BrnTrafficParam.h:88
	uint8_t muDirection;

	// BrnTrafficParam.h:91
	union {
		// BrnTrafficParam.h:93
		struct {
			// BrnTrafficParam.h:94
			uint16_t muNewHull;

			// BrnTrafficParam.h:95
			uint8_t muNewSection;

		}

		// BrnTrafficParam.h:97
		// BrnTrafficParam.h:93
		struct {
			// BrnTrafficParam.h:94
			uint16_t muNewHull;

			// BrnTrafficParam.h:95
			uint8_t muNewSection;

		}

 mChangeSectionData;

		// BrnTrafficParam.h:100
		struct {
			// BrnTrafficParam.h:101
			uint16_t muNeighbourData;

			// BrnTrafficParam.h:102
			uint8_t muNewSection;

			// BrnTrafficParam.h:103
			uint8_t muRungToCarryOut;

		}

		// BrnTrafficParam.h:104
		// BrnTrafficParam.h:100
		struct {
			// BrnTrafficParam.h:101
			uint16_t muNeighbourData;

			// BrnTrafficParam.h:102
			uint8_t muNewSection;

			// BrnTrafficParam.h:103
			uint8_t muRungToCarryOut;

		}

 mChangeLaneData;

	}

}

// BrnTrafficParam.h:204
struct BrnTraffic::Param {
	// BrnTrafficParam.h:259
	uint16_t muHullIndex;

	// BrnTrafficParam.h:260
	uint8_t muSectionIndex;

	// BrnTrafficParam.h:261
	uint8_t muCurrentSegment;

private:
	// BrnTrafficParam.h:264
	float32_t mfParamAlong;

	// Unknown accessibility
	// BrnTrafficParam.h:266
	ParamPlan[2] maPlans;

	// Unknown accessibility
	// BrnTrafficParam.h:269
	float32_t mfSpeed;

	// Unknown accessibility
	// BrnTrafficParam.h:270
	uint8_t muNextStopLineIndex;

	// Unknown accessibility
	// BrnTrafficParam.h:271
	uint8_t muVehicleType;

	// BrnTrafficParam.h:275
	uint8_t mxEffectAndHistoryState;

	// Unknown accessibility
	// BrnTrafficParam.h:278
	int8_t miBehaviour;

	// Unknown accessibility
	// BrnTrafficParam.h:279
	float32_t mfStopDist;

	// Unknown accessibility
	// BrnTrafficParam.h:280
	float32_t mfTargetSpeed;

	// Unknown accessibility
	// BrnTrafficParam.h:281
	float32_t mfTimeQueueing;

	// Unknown accessibility
	// BrnTrafficParam.h:282
	float32_t mfNextStopLineParam;

	// Unknown accessibility
	// BrnTrafficParam.h:283
	float32_t mfRandomVal;

	// Unknown accessibility
	// BrnTrafficParam.h:284
	float32_t mfAcceleration;

	// Unknown accessibility
	// BrnTrafficParam.h:285
	float32_t mfLastSpeed;

	// Unknown accessibility
	// BrnTrafficParam.h:286
	float32_t mfMaxAcceleration;

	// Unknown accessibility
	// BrnTrafficParam.h:287
	float32_t mfFrontDist;

	// BrnTrafficParam.h:290
	uint8_t mxFlags;

	// Unknown accessibility
	// BrnTrafficParam.h:293
	uint8_t muCurrentSectionDirection;

	// Unknown accessibility
	// BrnTrafficParam.h:294
	uint8_t[2] mauNeighbourEndRung;

	// Unknown accessibility
	// BrnTrafficParam.h:295
	uint16_t[2] mauNeighbourData;

	// Unknown accessibility
	// BrnTrafficParam.h:297
	EntityId mSympCrashTarget;

	// Unknown accessibility
	// BrnTrafficParam.h:299
	uint16_t[6] mauHistorySegments;

	// Unknown accessibility
	// BrnTrafficParam.h:300
	uint16_t[6] mauHistoryHulls;

	// Unknown accessibility
	// BrnTrafficParam.h:301
	uint8_t muNextHistoryToWrite;

	// Unknown accessibility
	// BrnTrafficParam.h:303
	uint8_t muStartSectionIndex;

	// Unknown accessibility
	// BrnTrafficParam.h:304
	uint16_t muStartHullIndex;

	// Unknown accessibility
	// BrnTrafficParam.h:306
	float32_t mfBackDist;

	// Unknown accessibility
	// BrnTrafficParam.h:308
	uint8_t muExtraBehaviourFlags;

public:
	// BrnTrafficParam.h:315
	void Construct();

	// BrnTrafficParam.h:330
	void Initialise(uint32_t, uint32_t, float32_t, float32_t, uint32_t, const BrnTraffic::Hull *, const VehicleTypeData *, const VehicleTypeRuntime *, const BrnTraffic::VehicleTraits *, uint32_t, ParamSoaData &);

	// BrnTrafficParam.h:338
	void ReinsertInLanes(uint32_t, uint32_t, float32_t, const BrnTraffic::Hull *);

	// BrnTrafficParam.h:343
	void UpdatePreUpdateLocation();

	// BrnTrafficParam.h:349
	void PushHistory(uint32_t, uint32_t);

	// BrnTrafficParam.h:356
	void GetHistoryEntry(uint32_t, uint32_t *, uint32_t *) const;

	// BrnTrafficParam.h:360
	float32_t GetParamAlong() const;

	// BrnTrafficParam.h:361
	void SetParamAlong(float32_t);

	// BrnTrafficParam.h:363
	bool IsQueueing() const;

	// BrnTrafficParam.h:367
	void ClearDying(uint32_t, ParamSoaData &);

	// BrnTrafficParam.h:368
	void SetShouldBeRemoved();

	// BrnTrafficParam.h:369
	void SetZombie(uint32_t, ParamSoaData &);

	// BrnTrafficParam.h:370
	void SetDivorced();

	// BrnTrafficParam.h:371
	void SetDyingState(uint32_t, ParamSoaData &);

	// BrnTrafficParam.h:372
	void SetChangedSection();

	// BrnTrafficParam.h:373
	void ClearHistoryState();

	// BrnTrafficParam.h:375
	void SetInPurgatory(bool);

	// BrnTrafficParam.h:376
	bool IsInPurgatory() const;

	// BrnTrafficParam.h:378
	bool IsAlive() const;

	// BrnTrafficParam.h:379
	bool IsDying() const;

	// BrnTrafficParam.h:380
	bool WasBornThisFrame() const;

	// BrnTrafficParam.h:381
	bool HasDied() const;

	// BrnTrafficParam.h:382
	bool HasChangedSection() const;

	// BrnTrafficParam.h:383
	bool ShouldBeRemoved() const;

	// BrnTrafficParam.h:384
	bool IsZombie() const;

	// BrnTrafficParam.h:385
	bool IsDivorced() const;

	// BrnTrafficParam.h:387
	bool NeedsNewPlan() const;

	// BrnTrafficParam.h:388
	void ClearNeedsNewPlan();

	// BrnTrafficParam.h:389
	void SetNeedsNewPlan();

	// BrnTrafficParam.h:393
	bool ShouldBeIndicatingLeft() const;

	// BrnTrafficParam.h:394
	bool ShouldBeIndicatingRight() const;

	// BrnTrafficParam.h:395
	void SetBraking(bool);

	// BrnTrafficParam.h:396
	bool IsBraking() const;

	// BrnTrafficParam.h:398
	uint32_t DEBUG_GetFlags() const;

	// BrnTrafficParam.h:399
	uint32_t DEBUG_GetEffectHistory() const;

}

// BrnTrafficParam.h:120
struct BrnTraffic::ParamTransform {
private:
	// BrnTrafficParam.h:176
	Vector3 mPos;

	// BrnTrafficParam.h:177
	Vector3Plus mDirAndAccel;

	// BrnTrafficParam.h:178
	Vector3 mRight;

	// BrnTrafficParam.h:181
	Vector3Plus mLerpedPosAndSpeed;

public:
	// BrnTrafficParam.h:124
	Vector3 GetDeterministicPos() const;

	// BrnTrafficParam.h:127
	Vector3 GetLerpedPos() const;

	// BrnTrafficParam.h:130
	Vector3 GetDirection() const;

	// BrnTrafficParam.h:133
	Vector3 GetRight() const;

	// BrnTrafficParam.h:136
	Vector3 CalcUp() const;

	// BrnTrafficParam.h:139
	VecFloat GetSpeed() const;

	// BrnTrafficParam.h:144
	Vector3 GetLerpedPositionAcross(VecFloat) const;

	// BrnTrafficParam.h:150
	void UpdateLerpedPosition(VecFloat);

	// BrnTrafficParam.h:155
	void Construct();

	// BrnTrafficParam.h:163
	void Initialise(Vector3, Vector3, Vector3, VecFloat);

	// BrnTrafficParam.h:172
	void Update(Vector3, Vector3, Vector3, VecFloat, VecFloat);

}

// BrnTrafficParam.h:416
struct BrnTraffic::ParamListNode {
	// BrnTrafficParam.h:418
	uint16_t muNextParam;

	// BrnTrafficParam.h:419
	uint16_t muPrevParam;

	// BrnTrafficParam.h:421
	float32_t mfParamAlong;

public:
	// BrnTrafficParam.h:426
	void Construct();

}

// BrnTrafficParam.h:439
struct BrnTraffic::ParamNeedToSlowData {
	// BrnTrafficParam.h:442
	uint16_t muParamInFront;

	// BrnTrafficParam.h:443
	int8_t miBehaviour;

	// BrnTrafficParam.h:445
	float32_t mfNextParamDist;

	// BrnTrafficParam.h:446
	float32_t mfTargetSpeed;

	// BrnTrafficParam.h:447
	float32_t mfStopDist;

public:
	// BrnTrafficParam.h:452
	void Construct();

	// BrnTrafficParam.h:456
	void Clear();

}

