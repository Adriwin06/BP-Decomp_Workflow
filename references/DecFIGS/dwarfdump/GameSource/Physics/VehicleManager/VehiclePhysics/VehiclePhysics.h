// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// VehiclePhysics.h:124
extern const int8_t KI8_MAX_NUM_SLAMS = 3;

// VehiclePhysics.h:802
extern const uint8_t KU_DRIFT_FLAG_DO_ALL = 255;

// VehiclePhysics.h:803
extern const uint8_t KU_DRIFT_FLAG_MAINTAIN_SPEED = 1;

// VehiclePhysics.h:804
extern const uint8_t KU_DRIFT_FLAG_APPLY_TORQUE = 2;

// VehiclePhysics.h:805
extern const uint8_t KU_DRIFT_FLAG_SCALE_LAT_BY_Z_SPEED = 4;

// VehiclePhysics.h:806
extern const uint8_t KU_DRIFT_FLAG_GRIP_FROM_CONTROLS = 8;

// VehiclePhysics.h:921
extern bool msbInShowtime;

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

		protected:
			// VehiclePhysics.h:921
			extern bool msbInShowtime;

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

		protected:
			// VehiclePhysics.h:921
			extern bool msbInShowtime;

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

		public:
			// VehiclePhysics.h:1979
			void SetBoostBarType(BrnResource::ECarType);

			// VehiclePhysics.h:484
			void SetIsInShowtime(bool);

		protected:
			// VehiclePhysics.h:921
			extern bool msbInShowtime;

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

			// VehiclePhysics.h:188
			struct AirRamEffect {
				// VehiclePhysics.h:190
				Vector3 mImpulse;

				// VehiclePhysics.h:191
				Vector3 mPosition;

				// VehiclePhysics.h:192
				float32_t mfDecay;

				// VehiclePhysics.h:193
				rw::physics::InputSpace meImpulseSpace;

				// VehiclePhysics.h:194
				float32_t mfTimerTillFire;

			}

			// VehiclePhysics.h:198
			struct SpinEffect {
				// VehiclePhysics.h:200
				Vector3 mForce;

				// VehiclePhysics.h:201
				float32_t mfTotalTime;

				// VehiclePhysics.h:202
				float32_t mfTimeRemaining;

			}

			// VehiclePhysics.h:742
			struct DriftFlags {
			private:
				// VehiclePhysics.h:802
				extern const uint8_t KU_DRIFT_FLAG_DO_ALL = 255;

				// VehiclePhysics.h:803
				extern const uint8_t KU_DRIFT_FLAG_MAINTAIN_SPEED = 1;

				// VehiclePhysics.h:804
				extern const uint8_t KU_DRIFT_FLAG_APPLY_TORQUE = 2;

				// VehiclePhysics.h:805
				extern const uint8_t KU_DRIFT_FLAG_SCALE_LAT_BY_Z_SPEED = 4;

				// VehiclePhysics.h:806
				extern const uint8_t KU_DRIFT_FLAG_GRIP_FROM_CONTROLS = 8;

				// VehiclePhysics.h:809
				uint8_t mu8DriftFlags;

			public:
				// VehiclePhysics.h:746
				void EnableAll();

				// VehiclePhysics.h:750
				void DisableAll();

				// VehiclePhysics.h:754
				bool DoMaintainSpeed() const;

				// VehiclePhysics.h:758
				void EnableMaintainSpeed();

				// VehiclePhysics.h:762
				void DisableMaintainSpeed();

				// VehiclePhysics.h:766
				bool DoApplyTorque() const;

				// VehiclePhysics.h:770
				void EnableApplyTorque();

				// VehiclePhysics.h:774
				void DisableApplyTorque();

				// VehiclePhysics.h:778
				bool DoScaleLatForceByZSpeed() const;

				// VehiclePhysics.h:782
				void EnableScaleLatForceByZSpeed();

				// VehiclePhysics.h:786
				void DisableScaleLatForceByZSpeed();

				// VehiclePhysics.h:790
				bool AllowGripFromControls() const;

				// VehiclePhysics.h:794
				void EnableGripFromControls();

				// VehiclePhysics.h:798
				void DisableGripFromControls();

			}

			// VehiclePhysics.h:812
			enum EDriftState {
				eDriftState_None = 0,
				eDriftState_FacingLeft = 1,
				eDriftState_FacingRight = 2,
				eNumDriftStates = 3,
			}

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// VehiclePhysics.h:119
struct BrnPhysics::Vehicle::VehiclePhysics : public SimpleVehiclePhysics {
	// VehiclePhysics.cpp:181
	extern int32_t _miPerfMonUpdate;

	// VehiclePhysics.cpp:182
	extern int32_t _miPerfMonSwitchAttribs;

	// VehiclePhysics.cpp:183
	extern int32_t _miPerfMonUpdateCrashing;

	// VehiclePhysics.cpp:184
	extern int32_t _miPerfMonUpdateAirRam;

	// VehiclePhysics.cpp:185
	extern int32_t _miPerfMonUpdateSpinEffects;

	// VehiclePhysics.cpp:186
	extern int32_t _miPerfMonUpdateDriving;

	// VehiclePhysics.cpp:187
	extern int32_t _miPerfMonUpdateLinearVelocity;

protected:
	// VehiclePhysics.h:820
	extern const RwInt32 knMaxNumberOfWorldContacts = 20;

	// VehiclePhysics.h:822
	VehicleAttribs * mpAttribs;

	// VehiclePhysics.h:823
	VehicleAttribs mAIVehicleAttribs;

	// VehiclePhysics.h:824
	VehicleAttribs mPlayerVehicleAttribs;

	// VehiclePhysics.h:827
	SuspensionSpring[4] maSprings;

	// VehiclePhysics.h:829
	Vector4 mvSpringMassScalers;

	// VehiclePhysics.h:830
	Vector3 mWeightTransfer;

	// VehiclePhysics.h:831
	Vector4 mvSpeedOnLastCrashMPH_TimeCrashing_CounterSteerSideMag_Spare;

	// VehiclePhysics.h:833
	Engine mEngine;

	// VehiclePhysics.h:835
	VecFloat mvfWheelFrictionLinearMultiplier;

	// VehiclePhysics.h:879
	Vector4 mvSteeringAngle_Steering_PrevSteering_DriftGasLetOffAmount;

	// VehiclePhysics.h:880
	Vector4 mvPlayerStatSpeed_PlayerStatStrength_PlayerStatControl_PlayerStatBoost;

	// VehiclePhysics.h:881
	Vector4 mvSpare_MaintainedSpeed_NeutralControlTime_DriftScale;

	// VehiclePhysics.h:882
	Vector4 mvTimeToReachTargetDriftSlipRecip_StartSlip_TimeDrifting_BrakeScale;

	// VehiclePhysics.h:883
	Vector4 mvDesiredDriftAngleScale_CappedDriftScale_DesiredDriftSlip_TimeInFrictionState;

	// VehiclePhysics.h:884
	Vector4 mvLatDriftForceFactor_DriftPushTime_MaxSteeringAngle_CurrentDriftAngle;

	// VehiclePhysics.h:885
	Vector4 mvSideForceMag_TimeBoosting_TimeSinceLastBoostKick_CurrentBoostKickTime;

	// VehiclePhysics.h:886
	Vector4 mvPropSpeedMaintainAlongZ_PropSpeedMaintainAlongVel_TimeSinceLastRaceCarContact_SolvePenetrationWeightFactor;

	// VehiclePhysics.h:887
	Vector4 mvTimeStandingStill_CoolDown_TimeWithoutTraction_TimeWithTraction;

	// VehiclePhysics.h:888
	Vector4 mvTimeSinceHardLanding_SteeringOverride_CarCarResponse_SecondsSinceLastWallContact;

	// VehiclePhysics.h:889
	Vector4 mvDampRollVel_TimeInDriftWithStaticFriction_TimeHandbrakeHasBeenOn_TimeSinceLastHandBrake;

	// VehiclePhysics.cpp:231
	extern float32_t _mfDebugForcedAcceleration;

	// VehiclePhysics.cpp:145
	extern float32_t msfInAirRollCorrectionFactor;

	// VehiclePhysics.cpp:148
	extern float32_t msfInAirLandingAssistDamping;

	// VehiclePhysics.cpp:151
	extern float32_t msfInAirIncreaseRollFactor;

	// VehiclePhysics.cpp:154
	extern float32_t msfInAirMinRollToAllowCorrection;

	// VehiclePhysics.cpp:157
	extern float32_t msfMaxWheelieAngleDeg;

	// VehiclePhysics.cpp:158
	extern float32_t msfWheelieDamping;

	// VehiclePhysics.cpp:163
	extern float32_t msfTakeoffRollDamping;

	// VehiclePhysics.cpp:166
	extern float32_t msfXAxisYFullDampThreshold;

	// VehiclePhysics.cpp:167
	extern float32_t msfXAxisYNoDampThreshold;

	// VehiclePhysics.cpp:168
	extern float32_t msfMinRollFactor;

	// VehiclePhysics.h:905
	BrnPlayerDriverControls mPreviousControls;

	// VehiclePhysics.h:906
	Vector3 mSteeringDirection;

	// VehiclePhysics.h:907
	float32_t mfTimeUntilStuckInCollisionTest;

	// VehiclePhysics.h:910
	BrnPhysics::Vehicle::VehiclePhysics::DriftFlags mDriftFlags;

	// VehiclePhysics.h:912
	bool mbInBoostKick;

	// VehiclePhysics.h:913
	bool mbForceFrozen;

	// VehiclePhysics.h:916
	bool mbIsUsingAIDonutAttribs;

	// VehiclePhysics.h:919
	bool mbGivenAftertouchAirBoost;

	// VehiclePhysics.cpp:230
	extern bool msbInShowtime;

	// VehiclePhysics.cpp:142
	extern bool msbEnableInAirRotation;

	// VehiclePhysics.h:927
	BrnPhysics::Vehicle::VehiclePhysics::SlamEffect mSlamEffect;

	// VehiclePhysics.h:928
	BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect mShuntEffect;

	// VehiclePhysics.h:929
	int8_t mi8LastContactedRaceCar;

	// VehiclePhysics.h:932
	BitArray<4u> mUsedAirRams;

	// VehiclePhysics.h:933
	BrnPhysics::Vehicle::VehiclePhysics::AirRamEffect[4] mAirRamEffect;

	// VehiclePhysics.h:935
	BitArray<8u> mUsedSpins;

	// VehiclePhysics.h:936
	BrnPhysics::Vehicle::VehiclePhysics::SpinEffect[8] maSpinEffects;

	// VehiclePhysics.h:939
	Vector3 mPreviousWorldSpaceVelocity;

	// VehiclePhysics.h:942
	Vector3Plus mNormLinearVelocityMag;

	// VehiclePhysics.h:945
	bool mbHasAir;

	// VehiclePhysics.h:946
	bool mbHadAirLastFrame;

	// VehiclePhysics.h:948
	uint8_t mu8DriftState;

	// VehiclePhysics.h:949
	int8_t mi8NumWorldCollisions;

	// VehiclePhysics.h:950
	int32_t miNumCollisions;

	// VehiclePhysics.h:952
	bool mbHandBrake;

	// VehiclePhysics.h:954
	bool mbDeformationModelIsActive;

	// VehiclePhysics.h:955
	bool mbDeformedThisFrame;

	// VehiclePhysics.h:956
	bool mbAllWheelsHaveTraction;

	// VehiclePhysics.h:957
	bool mbResetCarTransform;

	// VehiclePhysics.h:958
	bool mbJustBeenSlammed;

	// VehiclePhysics.h:960
	bool mbOverrideSteering;

	// VehiclePhysics.h:961
	bool mbIsWedgedInWorld;

	// VehiclePhysics.h:962
	bool mbIsFrontRayOccluded;

	// VehiclePhysics.h:963
	bool mbDoingBurnout;

	// VehiclePhysics.h:967
	bool mbContactingWall;

	// VehiclePhysics.h:969
	Matrix44Affine mPreviousTransform;

	// VehiclePhysics.h:970
	Vector3 mLastLinearVelocity;

	// VehiclePhysics.h:972
	Vector3 mPitchYawRollFromTakeOff;

	// VehiclePhysics.h:973
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

	// VehiclePhysics.h:974
	bool mbRollingInAir;

	// VehiclePhysics.h:977
	BrnResource::ECarType meCarType;

	// VehiclePhysics.h:979
	int8_t mi8LastAttackersRaceCarIndex;

	// VehiclePhysics.h:982
	BrnPhysics::Vehicle::DebugComponent * mpDebugComponent;

public:
	// VehiclePhysics.h:253
	void InitialiseAIAttribs();

	// VehiclePhysics.cpp:247
	void Construct();

	// VehiclePhysics.cpp:296
	void Destruct();

	// VehiclePhysics.cpp:536
	bool Prepare(Matrix44Affine, Vector3, Vector3, Vector3, Vector3, const AxisAlignedBox &, VehicleAttribs *, const rw::math::vpu::Vector3 *, const float32_t *);

	// VehiclePhysics.cpp:356
	bool SetAttributes();

	// VehiclePhysics.cpp:406
	bool SetAttributes(VehicleAttribs *, const rw::math::vpu::Vector3 *, const float32_t *);

	// VehiclePhysics.cpp:431
	bool SetAttributes(const rw::math::vpu::Vector3 *, const float32_t *);

	// VehiclePhysics.cpp:632
	void Release();

	// VehiclePhysics.cpp:714
	virtual void Update(VecFloat, VecFloat, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool, Random &);

	// VehiclePhysics.cpp:2747
	void UpdatePostSimulation(VecFloat);

	// VehiclePhysics.cpp:2781
	void UpdateSuspensionPostSimulation(VecFloat);

	// VehiclePhysics.h:1832
	void ClearNumWorldCollisions();

	// VehiclePhysics.h:1838
	void RecordWorldCollision();

	// VehiclePhysics.h:318
	float32_t GetRPM() const;

	// VehiclePhysics.h:322
	int32_t GetGear() const;

	// VehiclePhysics.h:1979
	void SetBoostBarType(BrnResource::ECarType);

	// VehiclePhysics.h:330
	int8_t GetSlamNumber() const;

	// VehiclePhysics.cpp:5882
	int8_t AddSlam(bool, float32_t, float32_t, float32_t, int8_t);

	// VehiclePhysics.cpp:5834
	int8_t AddShunt(VecFloat, Vector3, VecFloat, int8_t);

	// VehiclePhysics.h:352
	void RecordRaceCarContact(int8_t);

	// VehiclePhysics.h:2097
	void RemoveSlam(int8_t);

	// VehiclePhysics.cpp:6666
	void AddAirRam(uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// VehiclePhysics.cpp:6794
	void AddSpin(Vector3, float32_t);

	// VehiclePhysics.cpp:6845
	void ApplyWallContactImpulse(Vector3, rw::physics::InputSpace, Vector3, Vector3, rw::physics::InputSpace);

	// VehiclePhysics.cpp:6913
	void ApplyCarContactImpulse(Vector3, rw::physics::InputSpace, Vector3, Vector3, rw::physics::InputSpace);

	// VehiclePhysics.cpp:6967
	void ApplyCrashedContactImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace, bool);

	// VehiclePhysics.cpp:7014
	void ApplyShowtimeContactImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace, bool);

	// VehiclePhysics.cpp:7376
	void SwitchAIDonuttingAttribs(bool);

	// VehiclePhysics.h:2232
	void OverrideWheelAngle(VecFloat);

	// VehiclePhysics.cpp:5096
	virtual VecFloat GetSteeringAngle() const;

	// VehiclePhysics.h:420
	VecFloat GetAbsDriftScale() const;

	// VehiclePhysics.h:424
	VecFloat GetTimeInAir() const;

	// VehiclePhysics.h:428
	void ResetCoolDown();

	// VehiclePhysics.h:431
	VecFloat GetTimeDrifting() const;

	// VehiclePhysics.h:435
	VecFloat GetTimeNotDrifting() const;

	// VehiclePhysics.cpp:6371
	virtual void SetCrashing();

	// VehiclePhysics.h:2015
	void SetDeformationModelIsActive(bool);

	// VehiclePhysics.h:2053
	bool IsDeformationModelActive() const;

	// VehiclePhysics.h:2029
	void SetDeformedThisFrame(bool);

	// VehiclePhysics.h:2041
	bool HasDeformedThisFrame() const;

	// VehiclePhysics.h:456
	bool HasAir() const;

	// VehiclePhysics.h:460
	VecFloat GetDownShiftRPM() const;

	// VehiclePhysics.h:464
	VecFloat GetNaturalDriftProportion() const;

	// VehiclePhysics.h:468
	bool IsBeingSlammed() const;

	// VehiclePhysics.h:475
	virtual bool IsPlayerVehicleInShowtime() const;

	// VehiclePhysics.h:479
	virtual bool IsPlayerVehicleActuallyInShowtime() const;

	// VehiclePhysics.h:484
	void SetIsInShowtime(bool);

	// VehiclePhysics.h:489
	bool IsInShowtime();

	// VehiclePhysics.h:495
	virtual bool IsCrashingNormally() const;

	// VehiclePhysics.h:499
	virtual float32_t GetShowtimeDeformationScale() const;

	// VehiclePhysics.h:503
	virtual float32_t GetShowtimePlayerCarStrength() const;

	// VehiclePhysics.h:507
	virtual bool IsUsingAftertouch() const;

	// VehiclePhysics.h:511
	bool IsCurrentlyPlayerDriver() const;

	// VehiclePhysics.cpp:6521
	void Reset(Vector3);

	// VehiclePhysics.cpp:6421
	void Reset();

	// VehiclePhysics.cpp:6443
	void SetWheelVelocities(Vector3);

	// VehiclePhysics.h:528
	Vector3 GetPosition() const;

	// VehiclePhysics.h:532
	Matrix44Affine GetTransformDelta() const;

	// VehiclePhysics.h:536
	Vector3 GetFrameDisplacement() const;

	// VehiclePhysics.h:1903
	bool IsContactingWall() const;

	// VehiclePhysics.h:544
	bool IsInControlledDrift() const;

	// VehiclePhysics.h:1916
	void SetContactingWall();

	// VehiclePhysics.h:1928
	bool JustResetCarTransform() const;

	// VehiclePhysics.h:1947
	void ClearJustResetCarTransform();

	// VehiclePhysics.h:1934
	bool JustBeenSlammed() const;

	// VehiclePhysics.h:1953
	void ClearJustBeenSlammed();

	// VehiclePhysics.h:1966
	Vector3 GetLastLinearVelocity() const;

	// VehiclePhysics.h:1990
	VecFloat GetBoostingTime() const;

	// VehiclePhysics.cpp:3362
	void SetTransformFromPositionOnRoad(Matrix44Affine);

	// VehiclePhysics.h:2003
	const BrnPlayerDriverControls * GetPreviousControls() const;

	// VehiclePhysics.h:2117
	void SetPlayerStats(VecFloat, VecFloat, VecFloat, VecFloat);

	// VehiclePhysics.h:2138
	VecFloat GetLinearVelocityMagnitude() const;

	// VehiclePhysics.h:2155
	int32_t GetNumberOfWheelsOnTheGround() const;

	// VehiclePhysics.h:2194
	Vector3 GetLinearVelocityDirection() const;

	// VehiclePhysics.h:1767
	void SetWedgedInWorld(bool);

	// VehiclePhysics.h:1784
	bool IsWedgedInWorld() const;

	// VehiclePhysics.h:1802
	void SetFrontRayOccluded(bool);

	// VehiclePhysics.h:1819
	bool IsFrontRayOccluded() const;

	// VehiclePhysics.h:612
	void SetSolvePenetrationWeightFactor(VecFloat);

	// VehiclePhysics.h:616
	VecFloat GetSolvePenetrationWeightFactor() const;

	// VehiclePhysics.h:2248
	void ReadFromRenderware(const RigidBody *);

	// VehiclePhysics.h:624
	const VehicleAttribs & GetAttribs() const;

	// VehiclePhysics.h:628
	Vector3 GetSteeringDirection() const;

	// VehiclePhysics.h:1826
	const CgsInput::Device::WheelFFSpring & GetWheelFFSpring() const;

	// VehiclePhysics.h:635
	bool IsDrifting() const;

	// VehiclePhysics.cpp:1173
	void UpdateFreezing(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.h:644
	bool GetAllWheelsHaveTraction() const;

	// VehiclePhysics.h:649
	bool IsBeingSlamedOrShuntedByRaceCar(int8_t) const;

	// VehiclePhysics.h:653
	bool IsBeingSlamedOrShunted() const;

	// VehiclePhysics.h:657
	int8_t GetLastAttackerIndex() const;

	// VehiclePhysics.h:661
	VecFloat GetTimeSinceLastRaceCarContact() const;

	// VehiclePhysics.h:666
	int8_t GetLastContactedRaceCar() const;

	// VehiclePhysics.h:670
	const BrnPhysics::Vehicle::VehiclePhysics::SlamEffect & GetSlamEffect() const;

	// VehiclePhysics.h:674
	const BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect & GetShuntEffect() const;

	// VehiclePhysics.cpp:7403
	virtual void ClearCrashing();

	// VehiclePhysics.h:681
	VecFloat GetSpeedMPHOnLastCrash() const;

	// VehiclePhysics.h:685
	VecFloat GetTimeCrashing() const;

	// VehiclePhysics.h:689
	VecFloat GetMaxNonBoostSpeedMPH() const;

	// VehiclePhysics.cpp:2357
	void LockWheelsToGroundVelocity();

	// VehiclePhysics.h:697
	VecFloat GetSpeedOnLastCrashMPH() const;

	// VehiclePhysics.cpp:1362
	void StoreLocalWheelPositions();

	// VehiclePhysics.h:706
	bool WasContactingRaceCarWithinTime(int8_t, VecFloat) const;

	// VehiclePhysics.h:2338
	float32_t GetTimeUntilStuckInCollisionTest() const;

	// VehiclePhysics.h:2354
	void SetTimeUntilStuckInCollisionTest(float32_t);

	// VehiclePhysics.h:717
	VecFloat GetTimeWithTraction() const;

	// VehiclePhysics.h:2295
	void SetDebugComponent(BrnPhysics::Vehicle::DebugComponent *);

	// VehiclePhysics.h:727
	bool GetForceFrozen() const;

	// VehiclePhysics.h:731
	void SetForceFrozen(bool);

protected:
	// VehiclePhysics.h:738
	void SetWheelFrictionLinearMultiplier(VecFloat);

	// VehiclePhysics.cpp:659
	void UpdateHandBrake(VecFloat, float32_t);

	// VehiclePhysics.cpp:7274
	VecFloat GetSurfaceLinearDrag() const;

	// VehiclePhysics.cpp:928
	void UpdateDriving(VecFloat, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, Random &);

	// VehiclePhysics.cpp:1395
	void UpdateCrashing(float32_t, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool);

	// VehiclePhysics.cpp:1249
	void UpdateOnStartLine();

	// VehiclePhysics.cpp:3029
	void StabiliseAfterHardLanding(VecFloat);

	// VehiclePhysics.cpp:332
	void SwitchAttribs(VehicleAttribs *);

	// VehiclePhysics.h:1022
	BrnPhysics::Vehicle::VehiclePhysics::EDriftState GetDriftState() const;

	// VehiclePhysics.h:1027
	void SetDriftState(BrnPhysics::Vehicle::VehiclePhysics::EDriftState);

	// VehiclePhysics.cpp:3613
	void EnterDrift(const BrnPlayerDriverControls *, float32_t, float32_t);

	// VehiclePhysics.cpp:3662
	void ExitDrift();

	// VehiclePhysics.cpp:4699
	void UpdateEngine(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:4447
	void UpdateBoost(BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:4528
	void ApplyNormalBoostForce(VecFloat);

	// VehiclePhysics.cpp:4588
	void ApplyBoostKickForce(VecFloat);

	// VehiclePhysics.cpp:4746
	void ApplyEngineForces(float32_t, float32_t, bool, float32_t, float32_t, VecFloat);

	// VehiclePhysics.cpp:4813
	void ApplyEngineForcesOntoWheels(float32_t, bool, float32_t);

	// VehiclePhysics.cpp:3689
	void UpdateDrift(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:4863
	float32_t GetMaxSteeringAngleDuringDrift(float32_t);

	// VehiclePhysics.cpp:842
	void ModifyControlsForSteeringWheelInput(BrnPlayerDriverControls *);

	// VehiclePhysics.cpp:880
	void ModifyControlsForDrift(BrnPlayerDriverControls *);

	// VehiclePhysics.cpp:3787
	void UpdateDriftState(const BrnPlayerDriverControls *, float32_t, float32_t, float32_t, VecFloat);

	// VehiclePhysics.cpp:4154
	void ApplyDriftScaleInc(VecFloat);

	// VehiclePhysics.cpp:3882
	void CheckForEnteringDrift(const BrnPlayerDriverControls *, float32_t, float32_t, float32_t, VecFloat);

	// VehiclePhysics.cpp:3961
	void ApplyDriftForces(const BrnPlayerDriverControls *, float32_t, float32_t, float32_t, VecFloat);

	// VehiclePhysics.cpp:4001
	void MaintainDriftSpeed(const BrnPlayerDriverControls *, Vector3, VecFloat);

	// VehiclePhysics.cpp:4057
	void UpdateDriftScale(const BrnPlayerDriverControls *, float32_t, float32_t, VecFloat);

	// VehiclePhysics.cpp:4195
	void ApplyDriftYaw(const BrnPlayerDriverControls *, VecFloat, VecFloat);

	// VehiclePhysics.cpp:4281
	void ApplyDriftLatForce(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, VecFloat);

	// VehiclePhysics.cpp:4397
	void ApplyNaturalDriftForces(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat);

	// VehiclePhysics.h:1157
	void SetupTransitionFrictionState();

	// VehiclePhysics.h:1160
	void SetupDynamicFrictionState();

	// VehiclePhysics.cpp:1573
	void UpdateDownForce();

	// VehiclePhysics.cpp:1859
	void UpdateWheels(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:2217
	VecFloat GetDownForce();

	// VehiclePhysics.cpp:1675
	VecFloat UpdateBrakesAndGetBrakingFactor(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:2248
	void LimitDifferential(BrnPhysics::Vehicle::EVehicleDrivenWheel, BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// VehiclePhysics.cpp:4913
	void UpdateSteering(float32_t, float32_t, VecFloat, bool);

	// VehiclePhysics.cpp:5937
	void UpdateSlam(BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:6017
	void UpdateShunt(BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:6078
	void UpdateAirRam(VecFloat);

	// VehiclePhysics.cpp:6118
	void UpdateSpinEffects(VecFloat);

	// VehiclePhysics.h:1214
	virtual void UpdateAftertouch(const BrnPlayerDriverControls *, const rw::math::vpu::Matrix44Affine *, VecFloat, bool, bool);

	// VehiclePhysics.cpp:3108
	virtual void UpdateSuspension(VecFloat);

	// VehiclePhysics.h:1224
	void UpdateTractionSlip(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:5148
	void CalculateBodyVelocityAtWheelContact(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, VecFloat);

	// VehiclePhysics.cpp:5210
	// Declaration
	void HandleWheelFriction(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, VecFloat, VecFloat, bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// VehiclePhysics.cpp:5212
		using namespace rw::math::vpu;

	}

	// VehiclePhysics.cpp:7094
	void HandleWheelFrictionOld(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, VecFloat, VecFloat, bool, bool);

	// VehiclePhysics.h:2268
	void ApplyWheelForce(Vector3, Vector3);

	// VehiclePhysics.cpp:5377
	// Declaration
	void HandleWheelPairFriction(BrnPhysics::Vehicle::EVehicleDrivenWheel, BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, VecFloat, VecFloat, VecFloat, VecFloat, bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// VehiclePhysics.cpp:5379
		using namespace rw::math::vpu;

		// VehiclePhysics.cpp:5380
		using namespace CgsNumeric;

		// VehiclePhysics.cpp:5483
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5483
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5483
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5484
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5484
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5484
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5484
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5485
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5485
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5485
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5485
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5505
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5520
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5566
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5566
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5566
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5576
		using namespace rw::math::vpl;

		// VehiclePhysics.cpp:5577
		using namespace rw::math::vpl;

	}

	// VehiclePhysics.cpp:5712
	void HandleWheelFrictionCrashing(BrnPhysics::Vehicle::EVehicleDrivenWheel, VecFloat);

	// VehiclePhysics.cpp:2705
	void UpdateRoadNoise(VecFloat, Random &);

	// VehiclePhysics.cpp:2289
	void UpdateInAirStats(float32_t);

	// VehiclePhysics.cpp:2434
	void UpdateInAirBehaviour(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:2377
	void UpdateInWaterBehaviour(VecFloat);

	// VehiclePhysics.cpp:2327
	void LayOffGasWhilstInAir(BrnPlayerDriverControls *);

	// VehiclePhysics.cpp:6170
	void UpdateSpeedMatch(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:1344
	void StoreStats(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.cpp:1283
	void HackedResetAndFlyAround(const BrnPlayerDriverControls *, VecFloat);

	// VehiclePhysics.h:1871
	bool HasAtLeastOneWheelOnGround() const;

	// VehiclePhysics.h:1880
	bool HadAtLeastOneWheelOnGroundLastUpdate() const;

	// VehiclePhysics.h:1890
	bool AreFrontWheelsOnGround() const;

	// VehiclePhysics.h:2069
	bool IsCounterSteeringAtLowSpeed(VecFloat, float32_t, float32_t) const;

	// VehiclePhysics.cpp:457
	void SetupSuspension();

	// VehiclePhysics.cpp:3141
	void ApplyWheelWeight(VecFloat);

	// VehiclePhysics.cpp:3185
	// Declaration
	void UpdateSuspensionSprings(VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// VehiclePhysics.cpp:3187
		using namespace rw::math::vpl;

	}

	// VehiclePhysics.cpp:3406
	void CalculateWeightTransfer(VecFloat);

	// VehiclePhysics.cpp:3536
	void ApplySuspensionForces(VecFloat);

	// VehiclePhysics.h:2211
	void UpdateLinearVelocityMagnitude();

	// VehiclePhysics.cpp:7299
	VecFloat GetSurfaceGrip(BrnPhysics::Vehicle::EVehicleDrivenWheel) const;

	// VehiclePhysics.cpp:7350
	VecFloat GetSurfaceRoughness(BrnPhysics::Vehicle::EVehicleDrivenWheel) const;

	// VehiclePhysics.h:1373
	VecFloat GetPackedSteeringAngle() const;

	// VehiclePhysics.h:1377
	VecFloat GetSteering() const;

	// VehiclePhysics.h:1381
	VecFloat GetPrevSteering() const;

	// VehiclePhysics.h:1385
	VecFloat GetDriftGasLetOffAmount() const;

	// VehiclePhysics.h:1389
	VecFloat GetPlayerStatSpeed() const;

	// VehiclePhysics.h:1393
	VecFloat GetPlayerStatStrength() const;

	// VehiclePhysics.h:1397
	VecFloat GetPlayerStatControl() const;

	// VehiclePhysics.h:1401
	VecFloat GetPlayerStatBoost() const;

	// VehiclePhysics.h:1405
	VecFloat GetTimeHandbrakeHasBeenOn() const;

	// VehiclePhysics.h:1409
	VecFloat GetTimeSinceLastHandbrakePress() const;

	// VehiclePhysics.h:1413
	VecFloat GetMaintainedSpeed() const;

	// VehiclePhysics.h:1417
	VecFloat GetNeutralControlTime() const;

	// VehiclePhysics.h:1421
	VecFloat GetDriftScale() const;

	// VehiclePhysics.h:1425
	VecFloat GetTimeToReachTargetDriftSlipRecip() const;

	// VehiclePhysics.h:1429
	VecFloat GetStartSlip() const;

	// VehiclePhysics.h:1433
	VecFloat GetPackedTimeDrifting() const;

	// VehiclePhysics.h:1437
	VecFloat GetBrakeScale() const;

	// VehiclePhysics.h:1441
	VecFloat GetDesiredDriftAngleScale() const;

	// VehiclePhysics.h:1445
	VecFloat GetCappedDriftScale() const;

	// VehiclePhysics.h:1449
	VecFloat GetDesiredDriftSlip() const;

	// VehiclePhysics.h:1453
	VecFloat GetTimeInFrictionState() const;

	// VehiclePhysics.h:1457
	VecFloat GetLatDriftForceFactor() const;

	// VehiclePhysics.h:1461
	VecFloat GetDriftPushTime() const;

	// VehiclePhysics.h:1465
	VecFloat GetMaxSteeringAngle() const;

	// VehiclePhysics.h:1469
	VecFloat GetCurrentDriftAngle() const;

	// VehiclePhysics.h:1473
	VecFloat GetSideForceMag() const;

	// VehiclePhysics.h:1477
	VecFloat GetTimeBoosting() const;

	// VehiclePhysics.h:1481
	VecFloat GetTimeSinceLastBoostKick() const;

	// VehiclePhysics.h:1485
	VecFloat GetCurrentBoostKickTime() const;

	// VehiclePhysics.h:1489
	VecFloat GetPropSpeedMaintainAlongZ() const;

	// VehiclePhysics.h:1493
	VecFloat GetPropSpeedMaintainAlongVel() const;

	// VehiclePhysics.h:1497
	VecFloat GetTimeStandingStill() const;

	// VehiclePhysics.h:1501
	VecFloat GetCoolDown() const;

	// VehiclePhysics.h:1505
	VecFloat GetTimeWithoutTraction() const;

	// VehiclePhysics.h:1509
	VecFloat GetTimeSinceHardLanding() const;

	// VehiclePhysics.h:1513
	VecFloat GetSteeringOverride() const;

	// VehiclePhysics.h:1517
	VecFloat GetCarCarResponse() const;

	// VehiclePhysics.h:1521
	VecFloat GetSecondsSinceLastWallContact() const;

	// VehiclePhysics.h:1525
	VecFloat GetDampRollVel() const;

	// VehiclePhysics.h:1529
	VecFloat GetTimeInDriftWithStaticFriction() const;

	// VehiclePhysics.h:1533
	VecFloat GetCounterSteerSideMag() const;

	// VehiclePhysics.h:1537
	void SetPackedSteeringAngle(VecFloat);

	// VehiclePhysics.h:1541
	void SetSteering(VecFloat);

	// VehiclePhysics.h:1545
	void SetPrevSteering(VecFloat);

	// VehiclePhysics.h:1549
	void SetDriftGasLetOffAmount(VecFloat);

	// VehiclePhysics.h:1553
	void SetPlayerStatSpeed(VecFloat);

	// VehiclePhysics.h:1557
	void SetPlayerStatStrength(VecFloat);

	// VehiclePhysics.h:1561
	void SetPlayerStatControl(VecFloat);

	// VehiclePhysics.h:1565
	void SetPlayerStatBoost(VecFloat);

	// VehiclePhysics.h:1569
	void SetTimeHandbrakeHasBeenOn(VecFloat);

	// VehiclePhysics.h:1573
	void SetTimeSinceLastHandbrakePress(VecFloat);

	// VehiclePhysics.h:1577
	void SetMaintainedSpeed(VecFloat);

	// VehiclePhysics.h:1581
	void SetNeutralControlTime(VecFloat);

	// VehiclePhysics.h:1585
	void SetDriftScale(VecFloat);

	// VehiclePhysics.h:1589
	void SetTimeToReachTargetDriftSlipRecip(VecFloat);

	// VehiclePhysics.h:1593
	void SetStartSlip(VecFloat);

	// VehiclePhysics.h:1597
	void SetPackedTimeDrifting(VecFloat);

	// VehiclePhysics.h:1601
	void IncPackedTimeDrifting(VecFloat);

	// VehiclePhysics.h:1605
	void SetBrakeScale(VecFloat);

	// VehiclePhysics.h:1609
	void SetDesiredDriftAngleScale(VecFloat);

	// VehiclePhysics.h:1613
	void SetCappedDriftScale(VecFloat);

	// VehiclePhysics.h:1617
	void SetDesiredDriftSlip(VecFloat);

	// VehiclePhysics.h:1621
	void SetTimeInFrictionState(VecFloat);

	// VehiclePhysics.h:1625
	void SetLatDriftForceFactor(VecFloat);

	// VehiclePhysics.h:1629
	void SetDriftPushTime(VecFloat);

	// VehiclePhysics.h:1633
	void SetMaxSteeringAngle(VecFloat);

	// VehiclePhysics.h:1637
	void SetCurrentDriftAngle(VecFloat);

	// VehiclePhysics.h:1641
	void SetSideForceMag(VecFloat);

	// VehiclePhysics.h:1645
	void SetTimeBoosting(VecFloat);

	// VehiclePhysics.h:1649
	void SetTimeSinceLastBoostKick(VecFloat);

	// VehiclePhysics.h:1653
	void SetCurrentBoostKickTime(VecFloat);

	// VehiclePhysics.h:1657
	void SetPropSpeedMaintainAlongZ(VecFloat);

	// VehiclePhysics.h:1661
	void SetPropSpeedMaintainAlongVel(VecFloat);

	// VehiclePhysics.h:1665
	void SetTimeSinceLastRaceCarContact(VecFloat);

	// VehiclePhysics.h:1669
	void SetTimeStandingStill(VecFloat);

	// VehiclePhysics.h:1673
	void SetCoolDown(VecFloat);

	// VehiclePhysics.h:1677
	void SetTimeWithoutTraction(VecFloat);

	// VehiclePhysics.h:1681
	void SetTimeWithTraction(VecFloat);

	// VehiclePhysics.h:1685
	void SetTimeSinceHardLanding(VecFloat);

	// VehiclePhysics.h:1689
	void SetSteeringOverride(VecFloat);

	// VehiclePhysics.h:1693
	void SetCarCarResponse(VecFloat);

	// VehiclePhysics.h:1697
	void SetSecondsSinceLastWallContact(VecFloat);

	// VehiclePhysics.h:1701
	void SetDampRollVel(VecFloat);

	// VehiclePhysics.h:1705
	void SetTimeInDriftWithStaticFriction(VecFloat);

	// VehiclePhysics.h:1709
	void SetSpeedOnLastCrashMPH(VecFloat);

	// VehiclePhysics.h:1713
	void SetTimeCrashing(VecFloat);

	// VehiclePhysics.h:1717
	void SetCounterSteerSideMag(VecFloat);

	// VehiclePhysics.h:1721
	void IncrementTimeCrashing(VecFloat);

	// VehiclePhysics.cpp:2137
	void UpdateBurnout(const BrnPlayerDriverControls *);

	// VehiclePhysics.cpp:1774
	void UpdateWheelInertia();

	// VehiclePhysics.h:2315
	float32_t GetCarGroundDistanceCheck();

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehiclePhysics {
			// VehiclePhysics.h:122
			struct SlamEffect {
				// VehiclePhysics.h:124
				extern const int8_t KI8_MAX_NUM_SLAMS = 3;

				// VehiclePhysics.h:138
				Vector3 mForce;

				// VehiclePhysics.h:139
				float32_t mfDecay;

				// VehiclePhysics.h:140
				float32_t mfSteering;

				// VehiclePhysics.h:141
				float32_t mfOriginalSteering;

				// VehiclePhysics.h:142
				float32_t mfSlamLife;

				// VehiclePhysics.h:143
				float32_t mfTotalSlamTime;

				// VehiclePhysics.h:144
				float32_t mfRecoveryTime;

				// VehiclePhysics.h:145
				int8_t mi8SlamNumber;

			public:
				// VehiclePhysics.h:127
				bool IsActive() const;

				// VehiclePhysics.h:131
				void Clear();

				// VehiclePhysics.h:135
				void StopCurrentSlam();

			}

			// VehiclePhysics.h:149
			struct ShuntEffect {
				// VehiclePhysics.h:183
				Vector3Plus mDirectionPlusDesiredSpeed;

				// VehiclePhysics.h:184
				Vector4 mv4_Life_SpeedIncreaseToQuit;

			public:
				// VehiclePhysics.h:152
				bool IsActive() const;

				// VehiclePhysics.h:156
				void Clear();

				// VehiclePhysics.h:160
				VecFloat GetDesiredSpeed() const;

				// VehiclePhysics.h:164
				bool ForceSlip() const;

				// VehiclePhysics.h:168
				VecFloat GetLife() const;

				// VehiclePhysics.h:172
				VecFloat GetSpeedIncreaseToQuit() const;

				// VehiclePhysics.h:176
				void SetLife(VecFloat);

				// VehiclePhysics.h:180
				void SetSpeedIncreaseToQuit(VecFloat);

			}

			// VehiclePhysics.h:188
			struct AirRamEffect {
				// VehiclePhysics.h:190
				Vector3 mImpulse;

				// VehiclePhysics.h:191
				Vector3 mPosition;

				// VehiclePhysics.h:192
				float32_t mfDecay;

				// VehiclePhysics.h:193
				rw::physics::InputSpace meImpulseSpace;

				// VehiclePhysics.h:194
				float32_t mfTimerTillFire;

			}

			// VehiclePhysics.h:198
			struct SpinEffect {
				// VehiclePhysics.h:200
				Vector3 mForce;

				// VehiclePhysics.h:201
				float32_t mfTotalTime;

				// VehiclePhysics.h:202
				float32_t mfTimeRemaining;

			}

		public:
			VehiclePhysics();

		protected:
			// VehiclePhysics.h:921
			extern bool msbInShowtime;

		}

		// VehiclePhysics.h:45
		const uint8_t KU_MAX_SLAMS = 4;

		// VehiclePhysics.h:46
		const uint8_t KU_MAX_AIR_RAMS = 4;

		// VehiclePhysics.h:47
		const uint8_t KU_MAX_SPINS = 8;

		// VehiclePhysics.h:48
		const float32_t KF_GRAVITY;

		// VehiclePhysics.h:49
		const VecFloat KVF_GRAVITY;

		// VehiclePhysics.h:52
		const float32_t KF_STUCK_IN_COLLISION_TEST_INTERVAL;

	}

}

// VehiclePhysics.h:119
void BrnPhysics::Vehicle::VehiclePhysics::VehiclePhysics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

