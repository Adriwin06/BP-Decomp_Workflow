// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct AboveGroundTestResult;

		struct WheelLite;

		struct RaceCarState;

		struct SetRaceCarCullingGroupEvent;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct Spring1D;

}

// Wheel.h:54
struct BrnPhysics::Vehicle::Wheel {
	// Wheel.h:227
	extern const float32_t krWheelInertia;

private:
	// Wheel.h:615
	extern const RwInt32 knMaxNumContacts = 10;

	// Wheel.h:620
	BrnPhysics::Vehicle::Wheel::RoadContact mRoadContact;

	// Wheel.h:623
	VectorIntrinsicUnion::VectorIntrinsic mIntegrationVariables;

	// Wheel.h:624
	VectorIntrinsicUnion::VectorIntrinsic mSlipVariables;

	// Wheel.h:625
	VectorIntrinsicUnion::VectorIntrinsic mForceVariables;

	// Wheel.h:626
	VectorIntrinsicUnion::VectorIntrinsic mSuspensionAndInertiaVariables;

	// Wheel.h:627
	VectorIntrinsicUnion::VectorIntrinsic mSpeedAndMassOnWheelVariables;

	// Wheel.h:630
	Vector3 mPosition;

	// Wheel.h:631
	Vector3Plus mStreamedPositionPlusTwistAmount;

	// Wheel.h:632
	Vector3 mBodyPointVelocity;

	// Wheel.h:633
	Vector3 mWheelLongDirection;

	// Wheel.h:634
	Vector3 mWheelLatDirection;

	// Wheel.h:636
	const BrnPhysics::Vehicle::Wheel::TireAttribs * mpTireAttribs;

	// Wheel.h:637
	int8_t mi8NumContacts;

	// Wheel.h:638
	bool mbBrokenAdhesiveLimit;

	// Wheel.h:639
	bool mbHasTraction;

	// Wheel.h:640
	uint8_t mu8State;

public:
	// Wheel.h:258
	void Construct();

	// Wheel.h:261
	void Destruct();

	// Wheel.h:270
	bool Prepare(Vector3, float32_t, float32_t, float32_t, float32_t, const BrnPhysics::Vehicle::Wheel::TireAttribs *);

	// Wheel.h:273
	void Release();

	// Wheel.h:276
	void ClearCollisions();

	// Wheel.h:285
	void SwitchAttribs(Vector3, float32_t, float32_t, float32_t, float32_t, const BrnPhysics::Vehicle::Wheel::TireAttribs *);

	// Wheel.h:288
	VecFloat GetAngularVelocity() const;

	// Wheel.h:293
	void SetAngularVelocity(VecFloat);

	// Wheel.h:298
	void AddLocalTorque(VecFloat);

	// Wheel.h:305
	void ApplyFrictionReaction(VecFloat, VecFloat, VecFloat);

	// Wheel.h:309
	void AddAngularVelocity(VecFloat);

	// Wheel.h:313
	Vector3 GetStreamedPosition() const;

	// Wheel.h:317
	Vector3 GetSuspensionPosition() const;

	// Wheel.h:322
	void UpdateRotation(VecFloat);

	// Wheel.h:332
	void UpdateVelocity(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, bool, bool);

	// Wheel.h:337
	void IntegrateForcesIntoVelocity(VecFloat);

	// Wheel.h:347
	void SetRoadContact(bool, bool, Vector3, Vector3, uint16_t, uint16_t, float32_t);

	// Wheel.h:351
	void SetRoadContactPosition(Vector3);

	// Wheel.h:354
	BrnPhysics::Vehicle::Wheel::RoadContact GetRoadContact() const;

	// Wheel.h:359
	void SetIsOnGround(bool);

	// Wheel.h:363
	uint8_t GetSurfaceId() const;

	// Wheel.h:367
	Vector3 GetPosition() const;

	// Wheel.h:372
	void SetPosition(Vector3);

	// Wheel.h:376
	VecFloat GetRadius() const;

	// Wheel.h:380
	VecFloat GetInertia() const;

	// Wheel.h:384
	VecFloat GetInverseInertia() const;

	// Wheel.h:389
	void MoveUpSuspension(VecFloat);

	// Wheel.h:392
	VecFloat GetRotation() const;

	// Wheel.h:396
	VecFloat GetSuspensionLength() const;

	// Wheel.h:400
	CollisionTag GetCollisionTag() const;

	// Wheel.h:404
	bool IsOnGround() const;

	// Wheel.h:408
	bool WasOnGroundLastUpdate() const;

	// Wheel.h:411
	bool IsCloseToGround() const;

	// Wheel.h:415
	bool HasTraction() const;

	// Wheel.h:419
	void SetBodyVelocity(Vector3);

	// Wheel.h:424
	Vector3 GetBodyVelocity() const;

	// Wheel.h:428
	VecFloat GetSkidFactor() const;

	// Wheel.h:435
	VecFloat GetSuspensionHeight() const;

	// Wheel.h:441
	void RecordSlipRatios(VecFloat, VecFloat, VecFloat);

	// Wheel.h:445
	void SetMassOnWheel(VecFloat);

	// Wheel.h:449
	VecFloat GetMassOnWheel() const;

	// Wheel.h:454
	VecFloat GetMass() const;

	// Wheel.h:460
	void SetMass(VecFloat);

	// Wheel.h:465
	bool IsAtBottomOfSuspension() const;

	// Wheel.h:468
	VecFloat GetDistToBottomOfSuspension() const;

	// Wheel.h:473
	void SetVerticalPosition(VecFloat);

	// Wheel.h:477
	void Reset(Vector3);

	// Wheel.h:481
	void SetVelocity(VecFloat);

	// Wheel.h:484
	VecFloat GetTorque() const;

	// Wheel.h:488
	bool HasBrokenAdhesiveLimit() const;

	// Wheel.h:492
	void SetBrokenAdhesiveLimit(bool);

	// Wheel.h:496
	VecFloat GetLatSlipRatio() const;

	// Wheel.h:500
	VecFloat GetLongSlipRatio() const;

	// Wheel.h:504
	const BrnPhysics::Vehicle::Wheel::TireAttribs & GetTireAttribs() const;

	// Wheel.h:510
	void RecordWheelForceDirections(Vector3, Vector3);

	// Wheel.h:515
	void RecordStaticWheelForces(VecFloat, VecFloat);

	// Wheel.h:520
	void RecordDynamicWheelForces(VecFloat, VecFloat);

	// Wheel.h:526
	void RecordWheelSpeeds(VecFloat, VecFloat, VecFloat);

	// Wheel.h:529
	Vector3 GetLongForceDirection();

	// Wheel.h:533
	Vector3 GetLatForceDirection();

	// Wheel.h:537
	VecFloat GetStaticLongForce();

	// Wheel.h:541
	VecFloat GetStaticLatForce();

	// Wheel.h:545
	VecFloat GetDynamicLongForce();

	// Wheel.h:549
	VecFloat GetDynamicLatForce();

	// Wheel.h:553
	VecFloat GetLongSpeed() const;

	// Wheel.h:557
	VecFloat GetRoadLongSpeed() const;

	// Wheel.h:561
	VecFloat GetRoadLatSpeed() const;

	// Wheel.h:565
	bool IsAttached() const;

	// Wheel.h:569
	bool IsDetached() const;

	// Wheel.h:573
	void Detach();

	// Wheel.h:577
	void Attach();

	// Wheel.h:581
	void Twist();

	// Wheel.h:586
	void SetTwistAmount(VecFloat);

	// Wheel.h:590
	VecFloat GetTwistAmount() const;

	// Wheel.h:594
	bool IsDrivable() const;

	// Wheel.h:598
	bool IsBeingTwisted() const;

	// Wheel.h:603
	void SetInertiaType(BrnPhysics::Vehicle::Wheel::EWheelInertiaType);

	// Wheel.h:606
	VecFloat GetMaxSuspensionHeight() const;

	// Wheel.h:610
	VecFloat GetMinSuspensionHeight() const;

private:
	// Wheel.h:644
	void Clear();

	// Wheel.h:649
	void SetMaxSuspensionHeight(VecFloat);

	// Wheel.h:653
	void SetMinSuspensionHeight(VecFloat);

	// Wheel.h:657
	void SetInertia(VecFloat);

	// Wheel.h:661
	void SetInverseInertia(VecFloat);

	// Wheel.h:665
	void SetRadius(VecFloat);

	// Wheel.h:669
	void SetRotation(VecFloat);

	// Wheel.h:673
	void SetTorque(VecFloat);

	// Wheel.h:677
	void SetLatSlipRatio(VecFloat);

	// Wheel.h:681
	void SetLongSlipRatio(VecFloat);

	// Wheel.h:685
	void SetSkidFactor(VecFloat);

	// Wheel.h:689
	void SetStaticLongForce(VecFloat);

	// Wheel.h:693
	void SetStaticLatForce(VecFloat);

	// Wheel.h:697
	void SetDynamicLongForce(VecFloat);

	// Wheel.h:701
	void SetDynamicLatForce(VecFloat);

	// Wheel.h:705
	void SetWheelLongSpeed(VecFloat);

	// Wheel.h:709
	void SetRoadLongSpeed(VecFloat);

	// Wheel.h:713
	void SetRoadLatSpeed(VecFloat);

}

// Wheel.h:227
extern const float32_t krWheelInertia;

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct SetRaceCarCullingGroupEvent;

		struct CreatePhysicalTrafficEvent;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

	struct ContactId;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		struct SetRaceCarCullingGroupEvent;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct AboveGroundTestResult;

		struct WheelLite;

		struct RaceCarState;

		struct SetRaceCarCullingGroupEvent;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleInputInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

	struct ContactId;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

}

// Wheel.h:54
struct BrnPhysics::Vehicle::Wheel {
	// Wheel.h:227
	extern const float32_t krWheelInertia;

private:
	// Wheel.h:615
	extern const RwInt32 knMaxNumContacts = 10;

	// Wheel.h:620
	BrnPhysics::Vehicle::Wheel::RoadContact mRoadContact;

	// Wheel.h:623
	VectorIntrinsicUnion::VectorIntrinsic mIntegrationVariables;

	// Wheel.h:624
	VectorIntrinsicUnion::VectorIntrinsic mSlipVariables;

	// Wheel.h:625
	VectorIntrinsicUnion::VectorIntrinsic mForceVariables;

	// Wheel.h:626
	VectorIntrinsicUnion::VectorIntrinsic mSuspensionAndInertiaVariables;

	// Wheel.h:627
	VectorIntrinsicUnion::VectorIntrinsic mSpeedAndMassOnWheelVariables;

	// Wheel.h:630
	Vector3 mPosition;

	// Wheel.h:631
	Vector3Plus mStreamedPositionPlusTwistAmount;

	// Wheel.h:632
	Vector3 mBodyPointVelocity;

	// Wheel.h:633
	Vector3 mWheelLongDirection;

	// Wheel.h:634
	Vector3 mWheelLatDirection;

	// Wheel.h:636
	const BrnPhysics::Vehicle::Wheel::TireAttribs * mpTireAttribs;

	// Wheel.h:637
	int8_t mi8NumContacts;

	// Wheel.h:638
	bool mbBrokenAdhesiveLimit;

	// Wheel.h:639
	bool mbHasTraction;

	// Wheel.h:640
	uint8_t mu8State;

public:
	// Wheel.h:258
	void Construct();

	// Wheel.h:261
	void Destruct();

	// Wheel.h:270
	bool Prepare(Vector3, float32_t, float32_t, float32_t, float32_t, const BrnPhysics::Vehicle::Wheel::TireAttribs *);

	// Wheel.h:273
	void Release();

	// Wheel.h:276
	void ClearCollisions();

	// Wheel.h:285
	void SwitchAttribs(Vector3, float32_t, float32_t, float32_t, float32_t, const BrnPhysics::Vehicle::Wheel::TireAttribs *);

	// Wheel.h:288
	VecFloat GetAngularVelocity() const;

	// Wheel.h:293
	void SetAngularVelocity(VecFloat);

	// Wheel.h:298
	void AddLocalTorque(VecFloat);

	// Wheel.h:305
	// Declaration
	void ApplyFrictionReaction(VecFloat, VecFloat, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Wheel.cpp:722
		using namespace rw::math::vpl;

	}

	// Wheel.h:309
	void AddAngularVelocity(VecFloat);

	// Wheel.h:313
	Vector3 GetStreamedPosition() const;

	// Wheel.h:317
	Vector3 GetSuspensionPosition() const;

	// Wheel.h:322
	void UpdateRotation(VecFloat);

	// Wheel.h:332
	void UpdateVelocity(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, bool, bool);

	// Wheel.h:337
	void IntegrateForcesIntoVelocity(VecFloat);

	// Wheel.h:347
	void SetRoadContact(bool, bool, Vector3, Vector3, uint16_t, uint16_t, float32_t);

	// Wheel.h:351
	void SetRoadContactPosition(Vector3);

	// Wheel.h:354
	BrnPhysics::Vehicle::Wheel::RoadContact GetRoadContact() const;

	// Wheel.h:359
	void SetIsOnGround(bool);

	// Wheel.h:363
	uint8_t GetSurfaceId() const;

	// Wheel.h:367
	Vector3 GetPosition() const;

	// Wheel.h:372
	void SetPosition(Vector3);

	// Wheel.h:376
	VecFloat GetRadius() const;

	// Wheel.h:380
	VecFloat GetInertia() const;

	// Wheel.h:384
	VecFloat GetInverseInertia() const;

	// Wheel.h:389
	void MoveUpSuspension(VecFloat);

	// Wheel.h:392
	VecFloat GetRotation() const;

	// Wheel.h:396
	VecFloat GetSuspensionLength() const;

	// Wheel.h:400
	CollisionTag GetCollisionTag() const;

	// Wheel.h:404
	bool IsOnGround() const;

	// Wheel.h:408
	bool WasOnGroundLastUpdate() const;

	// Wheel.h:411
	bool IsCloseToGround() const;

	// Wheel.h:415
	bool HasTraction() const;

	// Wheel.h:419
	void SetBodyVelocity(Vector3);

	// Wheel.h:424
	Vector3 GetBodyVelocity() const;

	// Wheel.h:428
	VecFloat GetSkidFactor() const;

	// Wheel.h:435
	VecFloat GetSuspensionHeight() const;

	// Wheel.h:441
	void RecordSlipRatios(VecFloat, VecFloat, VecFloat);

	// Wheel.h:445
	void SetMassOnWheel(VecFloat);

	// Wheel.h:449
	VecFloat GetMassOnWheel() const;

	// Wheel.h:454
	VecFloat GetMass() const;

	// Wheel.h:460
	void SetMass(VecFloat);

	// Wheel.h:465
	bool IsAtBottomOfSuspension() const;

	// Wheel.h:468
	VecFloat GetDistToBottomOfSuspension() const;

	// Wheel.h:473
	void SetVerticalPosition(VecFloat);

	// Wheel.h:477
	void Reset(Vector3);

	// Wheel.h:481
	void SetVelocity(VecFloat);

	// Wheel.h:484
	VecFloat GetTorque() const;

	// Wheel.h:488
	bool HasBrokenAdhesiveLimit() const;

	// Wheel.h:492
	void SetBrokenAdhesiveLimit(bool);

	// Wheel.h:496
	VecFloat GetLatSlipRatio() const;

	// Wheel.h:500
	VecFloat GetLongSlipRatio() const;

	// Wheel.h:504
	const BrnPhysics::Vehicle::Wheel::TireAttribs & GetTireAttribs() const;

	// Wheel.h:510
	void RecordWheelForceDirections(Vector3, Vector3);

	// Wheel.h:515
	void RecordStaticWheelForces(VecFloat, VecFloat);

	// Wheel.h:520
	void RecordDynamicWheelForces(VecFloat, VecFloat);

	// Wheel.h:526
	void RecordWheelSpeeds(VecFloat, VecFloat, VecFloat);

	// Wheel.h:529
	Vector3 GetLongForceDirection();

	// Wheel.h:533
	Vector3 GetLatForceDirection();

	// Wheel.h:537
	VecFloat GetStaticLongForce();

	// Wheel.h:541
	VecFloat GetStaticLatForce();

	// Wheel.h:545
	VecFloat GetDynamicLongForce();

	// Wheel.h:549
	VecFloat GetDynamicLatForce();

	// Wheel.h:553
	VecFloat GetLongSpeed() const;

	// Wheel.h:557
	VecFloat GetRoadLongSpeed() const;

	// Wheel.h:561
	VecFloat GetRoadLatSpeed() const;

	// Wheel.h:565
	bool IsAttached() const;

	// Wheel.h:569
	bool IsDetached() const;

	// Wheel.h:573
	void Detach();

	// Wheel.h:577
	void Attach();

	// Wheel.h:581
	void Twist();

	// Wheel.h:586
	void SetTwistAmount(VecFloat);

	// Wheel.h:590
	VecFloat GetTwistAmount() const;

	// Wheel.h:594
	bool IsDrivable() const;

	// Wheel.h:598
	bool IsBeingTwisted() const;

	// Wheel.h:603
	void SetInertiaType(BrnPhysics::Vehicle::Wheel::EWheelInertiaType);

	// Wheel.h:606
	VecFloat GetMaxSuspensionHeight() const;

	// Wheel.h:610
	VecFloat GetMinSuspensionHeight() const;

private:
	// Wheel.h:644
	void Clear();

	// Wheel.h:649
	void SetMaxSuspensionHeight(VecFloat);

	// Wheel.h:653
	void SetMinSuspensionHeight(VecFloat);

	// Wheel.h:657
	void SetInertia(VecFloat);

	// Wheel.h:661
	void SetInverseInertia(VecFloat);

	// Wheel.h:665
	void SetRadius(VecFloat);

	// Wheel.h:669
	void SetRotation(VecFloat);

	// Wheel.h:673
	void SetTorque(VecFloat);

	// Wheel.h:677
	void SetLatSlipRatio(VecFloat);

	// Wheel.h:681
	void SetLongSlipRatio(VecFloat);

	// Wheel.h:685
	void SetSkidFactor(VecFloat);

	// Wheel.h:689
	void SetStaticLongForce(VecFloat);

	// Wheel.h:693
	void SetStaticLatForce(VecFloat);

	// Wheel.h:697
	void SetDynamicLongForce(VecFloat);

	// Wheel.h:701
	void SetDynamicLatForce(VecFloat);

	// Wheel.h:705
	void SetWheelLongSpeed(VecFloat);

	// Wheel.h:709
	void SetRoadLongSpeed(VecFloat);

	// Wheel.h:713
	void SetRoadLatSpeed(VecFloat);

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateWorldEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct VehicleOutputRequestInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

	struct ContactId;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateWorldEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct VehicleOutputRequestInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

	struct ContactId;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct Wheel {
			// Wheel.h:56
			enum EWheelInertiaType {
				eWheelInertiaTypeDriven = 0,
				eWheelInertiaTypeLocked = 1,
				eWheelInertiaTypeDriven_Burnout = 2,
			}

			// Wheel.h:71
			struct RoadContact {
				// Wheel.h:73
				Vector3 mPosition;

				// Wheel.h:74
				Vector3 mNormal;

				// Wheel.h:75
				float32_t mfLineDistanceToRoad;

				// Wheel.h:76
				CollisionTag mCollisionTag;

				// Wheel.h:77
				bool mbIsOnGround;

				// Wheel.h:78
				bool mbWasOnGroundLastUpdate;

				// Wheel.h:79
				bool mbIsCloseToGround;

				// Wheel.h:80
				bool mbLineTestIsValid;

			public:
				// Wheel.h:83
				void operator=(const BrnPhysics::Vehicle::Wheel::RoadContact &);

			}

			// Wheel.h:87
			struct TireGripCurve {
			private:
				// Wheel.h:148
				Vector4 maGripVariables;

			public:
				// Wheel.h:90
				void Construct();

				// Wheel.h:97
				void Prepare(float32_t, float32_t, float32_t, float32_t);

				// Wheel.h:101
				VecFloat GetCoefficient(VecFloat) const;

				// Wheel.h:104
				VecFloat GetPeakSlipRatio() const;

				// Wheel.h:108
				VecFloat GetFloorSlipRatio() const;

				// Wheel.h:112
				VecFloat GetPeakCoefficient() const;

				// Wheel.h:116
				VecFloat GetFallCoefficient() const;

				// Wheel.h:122
				// Declaration
				VecFloat GetCurveCoefficient(const BrnPhysics::Vehicle::Wheel::TireGripCurve &, VecFloat) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:739
					using namespace rw::math::vpu;

				}

				// Wheel.h:129
				// Declaration
				void GetCurveCoefficient2(Vector2 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector2) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:799
					using namespace rw::math::vpl;

				}

				// Wheel.h:138
				// Declaration
				void GetCurveCoefficient4(Vector4 &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, const BrnPhysics::Vehicle::Wheel::TireGripCurve &, Vector4) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// Wheel.h:861
					using namespace rw::math::vpl;

				}

			}

			// Wheel.h:152
			struct TireAttribs {
			private:
				// Wheel.h:221
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLongGripCurve;

				// Wheel.h:222
				BrnPhysics::Vehicle::Wheel::TireGripCurve mLatGripCurve;

				// Wheel.h:223
				BrnPhysics::Vehicle::Wheel::TireGripCurve mDriftLatGripCurve;

				// Wheel.h:224
				Vector4 maPackedVariables;

			public:
				// Wheel.h:155
				void Construct();

				// Wheel.h:158
				void PrepareDefaultFrontTire();

				// Wheel.h:161
				void PrepareDefaultRearTire();

				// Wheel.h:165
				void PrepareFrontTire(physicsvehiclebaseattribs &);

				// Wheel.h:169
				void PrepareRearTire(physicsvehiclebaseattribs &);

				// Wheel.h:172
				void PrepareFrontTireForAI();

				// Wheel.h:175
				void PrepareRearTireForAI();

				// Wheel.h:178
				void PrepareFrontTireForDonutAI();

				// Wheel.h:181
				void PrepareRearTireForDonutAI();

				// Wheel.h:184
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLongGripCurve() const;

				// Wheel.h:188
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetLatGripCurve() const;

				// Wheel.h:192
				const BrnPhysics::Vehicle::Wheel::TireGripCurve & GetDriftLatGripCurve() const;

				// Wheel.h:196
				VecFloat GetStaticFrictionCo() const;

				// Wheel.h:200
				VecFloat GetDynamicFrictionCo() const;

				// Wheel.h:204
				VecFloat GetAdhesiveLimit() const;

				// Wheel.h:208
				VecFloat GetLongForceBias() const;

			}

		}

		struct SimpleVehicleAttribs;

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct Engine;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateWorldEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		// Declaration
		struct TrafficPhysics {
		public:
			TrafficPhysics();

		}

		// Declaration
		struct SimpleVehiclePhysics {
		public:
			SimpleVehiclePhysics();

		}

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct VehicleOutputRequestInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		struct ArticulatedJointId;

		struct ArticulatedJoint;

		struct ArticulatedJointCreateBuffer;

		struct ArticulatedJointPool;

		struct PhysicalTrafficManager;

		// Declaration
		struct PhysicalTrafficManagerDebugComponent {
		public:
			PhysicalTrafficManagerDebugComponent();

		}

		struct GripCurveDebugGraph;

		struct RaceCarCrashData;

		// Declaration
		struct DebugComponent {
		public:
			DebugComponent();

		}

		struct PotentialContactAverager;

		// Declaration
		struct GripCurveDebugWindow {
		public:
			GripCurveDebugWindow();

		}

		// Wheel.h:39
		const float32_t krMPS2MPH;

		// Wheel.h:40
		const float32_t krMPH2MPS;

		// Wheel.h:41
		const VecFloat kvrMPH2MPS;

		// Wheel.h:1063
		const VecFloat KVF_LONG_SLIP_SCALE;

		// Wheel.h:1064
		const VecFloat KVF_LAT_SLIP_SCALE;

		// Wheel.h:1065
		const VecFloat KVF_MAX_VEL_SCALE;

	}

	struct InterpedParam3;

	struct ExternallySimulatedBody;

	struct ExternalPhysicsBody;

	struct ContactId;

	struct ContactGenList;

	struct StuntOffencesManager;

	// Declaration
	struct PhysicsModule {
	public:
		~PhysicsModule();

		PhysicsModule();

	}

}

