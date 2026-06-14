// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct RaceCarPhysics {
		private:
			// RaceCarPhysics.h:403
			extern PlayerParameters msPlayerParams;

		}

		// RaceCarPhysics.h:34
		const float32_t KF_POST_PLAYER_TD_INVULNERABILITY_TIME;

		// RaceCarPhysics.h:36
		const float32_t KF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:37
		const float32_t KF_AI_CRASH_SLOWMO_FACTOR;

		// RaceCarPhysics.h:39
		const VecFloat KVF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:40
		const VecFloat KVF_AI_CRASH_SLOWMO_FACTOR;

	}

}

// RaceCarPhysics.h:53
struct BrnPhysics::Vehicle::BounceModifierSphere {
	// RaceCarPhysics.h:55
	Vector3 mWorldPosition;

	// RaceCarPhysics.h:56
	float32_t mfRadius;

	// RaceCarPhysics.h:57
	float32_t mfBounceModifier;

}

// RaceCarPhysics.h:66
struct BrnPhysics::Vehicle::PlayerParameters {
	// RaceCarPhysics.h:71
	bool mbBounceBoosting;

	// RaceCarPhysics.h:72
	bool mbJustBounced;

	// RaceCarPhysics.h:73
	bool mbRecentBounce;

	// RaceCarPhysics.h:74
	bool mbRecentBounceOnCar;

	// RaceCarPhysics.h:75
	bool mbRecentBounceBoost;

	// RaceCarPhysics.h:76
	int16_t miBounceBoostChainCount;

	// RaceCarPhysics.h:77
	bool mbReleasedButtonSinceLastBounceBoost;

	// RaceCarPhysics.h:78
	bool mbShouldBounceBoostNextImpact;

	// RaceCarPhysics.h:79
	bool mbRecentExtraSpin;

	// RaceCarPhysics.h:80
	bool mbRecentImpactWasGood;

	// RaceCarPhysics.h:81
	EntityId midRecentImpactEntityId;

	// RaceCarPhysics.h:82
	Vector3 mRecentContactPoint;

	// RaceCarPhysics.h:83
	Vector3 mAimDirection;

	// RaceCarPhysics.h:85
	bool mbShowtimeWindingDown;

	// RaceCarPhysics.h:86
	bool mbIsBounceBoostFromStationary;

	// RaceCarPhysics.h:87
	bool mbHasTouchedGroundThisShowtime;

	// RaceCarPhysics.h:88
	bool mbCanApplyExtraSpin;

	// RaceCarPhysics.h:90
	float32_t mfAverageDeformation;

	// RaceCarPhysics.h:91
	float32_t mfLimitDeformation;

	// RaceCarPhysics.h:92
	float32_t mfUncappedSpeedTime;

	// RaceCarPhysics.h:93
	float32_t mfPlayerCarStrength;

	// RaceCarPhysics.h:95
	float32_t mfTimeUntilPush;

	// RaceCarPhysics.h:97
	Vector3[8] mTargetAssistPositions;

	// RaceCarPhysics.h:98
	EntityId[8] mTargetAssistIDs;

	// RaceCarPhysics.h:99
	int32_t miTargetAssistCount;

	// RaceCarPhysics.h:100
	EntityId midTargetLastFrame;

	// RaceCarPhysics.h:101
	VecFloat mvfTargetAssistLerpFactor;

	// RaceCarPhysics.h:103
	uint8_t muBounceModifierCount;

	// RaceCarPhysics.h:104
	BounceModifierSphere[20] maBounceModifiers;

public:
	// RaceCarPhysics.h:69
	void Reset();

}

// RaceCarPhysics.h:403
extern PlayerParameters msPlayerParams;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct RaceCarPhysics {
		private:
			// RaceCarPhysics.h:403
			extern PlayerParameters msPlayerParams;

		}

		// RaceCarPhysics.h:34
		const float32_t KF_POST_PLAYER_TD_INVULNERABILITY_TIME;

		// RaceCarPhysics.h:36
		const float32_t KF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:37
		const float32_t KF_AI_CRASH_SLOWMO_FACTOR;

		// RaceCarPhysics.h:39
		const VecFloat KVF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:40
		const VecFloat KVF_AI_CRASH_SLOWMO_FACTOR;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// RaceCarPhysics.h:34
		const float32_t KF_POST_PLAYER_TD_INVULNERABILITY_TIME;

		// RaceCarPhysics.h:36
		const float32_t KF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:37
		const float32_t KF_AI_CRASH_SLOWMO_FACTOR;

		// RaceCarPhysics.h:39
		const VecFloat KVF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:40
		const VecFloat KVF_AI_CRASH_SLOWMO_FACTOR;

	}

}

// RaceCarPhysics.h:117
struct BrnPhysics::Vehicle::RaceCarPhysics : public BrnPhysics::Vehicle::VehiclePhysics {
private:
	// RaceCarPhysics.h:393
	Vector3 mPropCollisionImpulseSum;

	// RaceCarPhysics.h:395
	float32_t mfTimeSinceTookDownPlayer;

	// RaceCarPhysics.h:396
	float32_t mfSlamSteering;

	// RaceCarPhysics.h:397
	float32_t mfBeachedTime;

	// RaceCarPhysics.h:399
	bool mbPlayerCarInShowtime;

	// RaceCarPhysics.h:400
	bool mbUsingAftertouch;

	// RaceCarPhysics.h:401
	uint8_t mu8StrengthStat;

	// RaceCarPhysics.cpp:96
	extern PlayerParameters msPlayerParams;

	// RaceCarPhysics.h:406
	Vector3 mInitialCrashVel;

	// RaceCarPhysics.h:407
	Vector3 mInitialCrashAngVel;

	// RaceCarPhysics.h:408
	float32_t mfCrashTimer;

	// RaceCarPhysics.h:409
	bool mbAISlowMo;

	// RaceCarPhysics.h:410
	bool mbWroteIntoRWInSlowMo;

	// RaceCarPhysics.h:412
	bool mbDeformedBeyondDriveTimeLimitsInCrash;

	// RaceCarPhysics.h:414
	Vector3 mCrashNormal;

	// RaceCarPhysics.h:415
	EntityId mEntityCausingCrash;

	// RaceCarPhysics.h:417
	bool mbDebugShowTargetAssist;

public:
	// RaceCarPhysics.cpp:141
	void Construct();

	// RaceCarPhysics.cpp:179
	virtual bool Prepare(Matrix44Affine, Vector3, Vector3, Vector3, Vector3, const AxisAlignedBox &, Inertia, VehicleAttribs *, const rw::math::vpu::Vector3 *, const float32_t *, uint8_t);

	// RaceCarPhysics.cpp:229
	virtual void Update(VecFloat, VecFloat, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool, Random &);

	// RaceCarPhysics.cpp:441
	void UpdatePostSimulation(VecFloat);

	// RaceCarPhysics.cpp:502
	virtual void UpdateAftertouch(const BrnPlayerDriverControls *, const rw::math::vpu::Matrix44Affine *, VecFloat, bool, bool);

	// RaceCarPhysics.cpp:752
	void UpdateShowtimePhysics(const BrnPlayerDriverControls *, Vector3, Vector3, VecFloat, VecFloat, bool);

	// RaceCarPhysics.cpp:1028
	void UpdateTargetAssist(const BrnPlayerDriverControls *, VecFloat, VecFloat, Vector3);

	// RaceCarPhysics.cpp:907
	void CapShowtimeVelocities();

	// RaceCarPhysics.cpp:459
	void Destruct();

	// RaceCarPhysics.cpp:476
	void Release();

	// RaceCarPhysics.cpp:1431
	virtual bool IsPlayerVehicleInShowtime() const;

	// RaceCarPhysics.h:195
	virtual bool IsPlayerVehicleActuallyInShowtime() const;

	// RaceCarPhysics.cpp:1449
	bool IsPlayerVehicleEnteringShowtime() const;

	// RaceCarPhysics.h:205
	virtual bool IsCrashingNormally() const;

	// RaceCarPhysics.cpp:1286
	void SetPlayerVehicleInShowtime(bool, float32_t, float32_t);

	// RaceCarPhysics.cpp:1371
	void SetPlayerVehicleUncapShowtimeSpeedLimit(float32_t);

	// RaceCarPhysics.cpp:1391
	virtual float GetShowtimeDeformationScale() const;

	// RaceCarPhysics.cpp:1410
	virtual float32_t GetShowtimePlayerCarStrength() const;

	// RaceCarPhysics.cpp:1155
	void UpdateShowtimeBounceModifiers(const CarState *);

	// RaceCarPhysics.h:441
	VecFloat GetHeightAboveRoad(Vector3);

	// RaceCarPhysics.h:518
	bool HasRecentlyTakendownPlayer() const;

	// RaceCarPhysics.h:532
	void OnTakendownPlayer();

	// RaceCarPhysics.cpp:1194
	bool GetRecentBounce(int32_t *, bool *, bool *, bool *, bool *, EntityId *, Vector3 *);

	// RaceCarPhysics.cpp:1222
	bool GetRecentExtraSpin();

	// RaceCarPhysics.cpp:1243
	float32_t GetBounceModifier(Vector3);

	// RaceCarPhysics.cpp:1512
	bool ShouldBounceBoostNextImpact() const;

	// RaceCarPhysics.cpp:1532
	void SetJustBounced(Vector3, bool, bool, EntityId);

	// RaceCarPhysics.cpp:988
	void SetTargetAssistParams(const VehicleDriverInputInterface *);

	// RaceCarPhysics.cpp:1008
	void SetShowtimeAimDirection(Vector3);

	// RaceCarPhysics.h:549
	void AddPropCollisionImpulse(Vector3);

	// RaceCarPhysics.cpp:1626
	void ApplyPropCollisionImpulseSum();

	// RaceCarPhysics.h:292
	bool IsInAICrashSlowMo();

	// RaceCarPhysics.h:296
	void SetWrittenIntoRWInSlowMo(bool);

	// RaceCarPhysics.h:300
	bool GetWrittenIntoRWInSlowMo();

	// RaceCarPhysics.cpp:395
	virtual void SetCrashing();

	// RaceCarPhysics.cpp:414
	void SetCrashing(bool);

	// RaceCarPhysics.h:565
	void ReadFromRenderware(const RigidBody *);

	// RaceCarPhysics.h:314
	float32_t GetSlamSteering() const;

	// RaceCarPhysics.h:318
	void ClearSlamSteering();

	// RaceCarPhysics.h:590
	void SetCrashEntityIdAndNormal(EntityId, Vector3);

	// RaceCarPhysics.h:327
	Vector3 GetNormalCausingCrash();

	// RaceCarPhysics.h:331
	EntityId GetEntityCausingCrash();

	// RaceCarPhysics.h:338
	bool IsBeingFatallySlamed() const;

	// RaceCarPhysics.cpp:1497
	bool IsBounceBoosting() const;

	// RaceCarPhysics.h:347
	void SetDeformedBeyondDriveTimeLimitsInCrash(bool);

	// RaceCarPhysics.h:351
	bool GetDeformedBeyondDriveTimeLimitsInCrash() const;

	// RaceCarPhysics.h:355
	uint8_t GetStrengthStat() const;

	// RaceCarPhysics.h:359
	VecFloat GetSameWayCrashSpeed() const;

	// RaceCarPhysics.h:363
	bool IsBeached() const;

	// RaceCarPhysics.cpp:368
	void AddTractionPoint(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, Vector3, uint32_t);

protected:
	// RaceCarPhysics.cpp:1465
	bool IsPlayerVehicleWithUncappedShowtimeSpeed() const;

	// RaceCarPhysics.cpp:1481
	virtual bool IsUsingAftertouch() const;

	// RaceCarPhysics.cpp:1553
	void SetBounceBoosting(bool);

	// RaceCarPhysics.cpp:1584
	Vector3 ComputeIdealVelocity(Vector3, float32_t);

	// RaceCarPhysics.cpp:1567
	bool IsReallyInAir() const;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct RaceCarPhysics {
		public:
			RaceCarPhysics();

		private:
			// RaceCarPhysics.h:403
			extern PlayerParameters msPlayerParams;

		}

		// RaceCarPhysics.h:34
		const float32_t KF_POST_PLAYER_TD_INVULNERABILITY_TIME;

		// RaceCarPhysics.h:36
		const float32_t KF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:37
		const float32_t KF_AI_CRASH_SLOWMO_FACTOR;

		// RaceCarPhysics.h:39
		const VecFloat KVF_AI_CRASH_PAUSE_TIME;

		// RaceCarPhysics.h:40
		const VecFloat KVF_AI_CRASH_SLOWMO_FACTOR;

	}

}

// RaceCarPhysics.h:117
void BrnPhysics::Vehicle::RaceCarPhysics::RaceCarPhysics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

