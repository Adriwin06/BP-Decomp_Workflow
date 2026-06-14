// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct PhysicsControl {
				// BrnPhysicsControl.h:87
				struct PhysicsData {
					// BrnPhysicsControl.h:92
					DataPoint<bool> mIsAccelerating;

					// BrnPhysicsControl.h:93
					bool mbJustShifted;

					// BrnPhysicsControl.h:95
					DataPoint<int32_t> mGear;

					// BrnPhysicsControl.h:96
					float32_t mfDurationInGear;

					// BrnPhysicsControl.h:99
					DataPoint<float32_t> mUnityRpm;

					// BrnPhysicsControl.h:100
					DataPoint<float32_t> mNormalizedRpm;

					// BrnPhysicsControl.h:101
					float32_t mfMaxRpm;

					// BrnPhysicsControl.h:102
					float32_t mfIdleRpm;

					// BrnPhysicsControl.h:104
					float32_t mfTimeSinceRespawn;

					// BrnPhysicsControl.h:106
					DataPoint<float32_t> mThrottle;

					// BrnPhysicsControl.h:107
					Average<5u,float32_t> mDeltaThrottle;

					// BrnPhysicsControl.h:109
					DataPoint<bool> IsBoosting;

					// BrnPhysicsControl.h:110
					bool IsBlueBoost;

					// BrnPhysicsControl.h:111
					float32_t mfBoostRemaining;

					// BrnPhysicsControl.h:113
					DataPoint<bool> IsCrashing;

					// BrnPhysicsControl.h:114
					DataPoint<bool> IsDeforming;

					// BrnPhysicsControl.h:119
					DataPoint<rw::math::vpu::Vector3> mPosition3d;

					// BrnPhysicsControl.h:120
					DataPoint<rw::math::vpu::Vector2> mPosition2d;

					// BrnPhysicsControl.h:122
					DataPoint<rw::math::vpu::Vector3> mVelocity3d;

					// BrnPhysicsControl.h:123
					DataPoint<rw::math::vpu::Vector2> mVelocity2d;

					// BrnPhysicsControl.h:124
					DataPoint<float32_t> mVelocityMagnitude;

					// BrnPhysicsControl.h:125
					DataPoint<float32_t> mSpeedMPH;

					// BrnPhysicsControl.h:127
					DataPoint<rw::math::vpu::Vector3> mAcceleration3d;

					// BrnPhysicsControl.h:128
					DataPoint<rw::math::vpu::Vector2> mAcceleration2d;

					// BrnPhysicsControl.h:129
					DataPoint<float32_t> mAccelerationMagnitude;

					// BrnPhysicsControl.h:131
					DataPoint<rw::math::vpu::Matrix44Affine> mTransform;

					// BrnPhysicsControl.h:133
					DataPoint<float32_t> mYaw;

					// BrnPhysicsControl.h:134
					DataPoint<float32_t> mSpeedMPS;

					// BrnPhysicsControl.h:136
					float32_t mfRotation;

					// BrnPhysicsControl.h:140
					DataPoint<float32_t> mDrifting;

				public:
					// BrnPhysicsControl.h:90
					PhysicsData();

				}

				// BrnPhysicsControl.h:182
				struct EngineRevEntry {
					// BrnPhysicsControl.h:189
					float32_t mfTime;

					// BrnPhysicsControl.h:190
					float32_t mfRpm;

					// BrnPhysicsControl.h:191
					float32_t mfThrottle;

				public:
					// BrnPhysicsControl.h:187
					EngineRevEntry(float32_t, float32_t, float32_t);

				}

				// BrnPhysicsControl.h:206
				struct EngRevDataSet {
				private:
					// BrnPhysicsControl.h:228
					int32_t mnNumPoints;

					// BrnPhysicsControl.h:229
					const BrnSound::Vehicles::Engines::PhysicsControl::EngineRevEntry * mpDataPoints;

					// BrnPhysicsControl.h:231
					float32_t mfTime;

					// BrnPhysicsControl.h:232
					int32_t mnCurrentPoint;

				public:
					// BrnPhysicsControl.h:211
					EngRevDataSet(int32_t, const BrnSound::Vehicles::Engines::PhysicsControl::EngineRevEntry *);

					// BrnPhysicsControl.h:216
					void Construct(int32_t, const BrnSound::Vehicles::Engines::PhysicsControl::EngineRevEntry *);

					// BrnPhysicsControl.h:222
					BrnSound::Vehicles::Engines::PhysicsControl::EngineRevEntry GetEntry(float32_t);

					// BrnPhysicsControl.h:225
					bool IsFinished() const;

				}

				// BrnPhysicsControl.h:278
				enum eIntroRevingState {
					E_NIS_REVING_STATE_OFF = 0,
					E_NIS_REVING_STATE_STARTLINE = 1,
					E_NIS_REVING_STATE_RESUMING = 2,
				}

			}

		}

	}

}

// BrnPhysicsControl.h:41
struct BrnSound::Vehicles::Engines::PhysicsControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnPhysicsControl.cpp:357
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// BrnPhysicsControl.h:250
	VehicleData * mpVehiclePhysicsData;

	// BrnPhysicsControl.h:251
	BrnSound::Vehicles::Engines::PhysicsControl::PhysicsData mProcessedPhysicsData;

	// BrnPhysicsControl.h:254
	const Car3DControl * mp3dCarControl;

	// BrnPhysicsControl.h:255
	const BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnPhysicsControl.h:257
	vehicleengine mVehicleEngineAttributes;

	// BrnPhysicsControl.h:259
	BrnSound::Vehicles::VehicleState::AttachInfo mAttachInfo;

	// BrnPhysicsControl.h:261
	DataPoint<float32_t> mfOscillator;

	// BrnPhysicsControl.h:262
	DataPoint<float32_t> mfAngularVelocityAccumulator;

	// BrnPhysicsControl.h:285
	BrnSound::Vehicles::Engines::PhysicsControl::eIntroRevingState meIntroRevingState;

	// BrnPhysicsControl.h:286
	BrnSound::Vehicles::Engines::PhysicsControl::EngRevDataSet mEngineDataSet;

	// BrnPhysicsControl.h:287
	InterpolateLine mEngineStartLineRPM;

public:
	void PhysicsControl(const BrnSound::Vehicles::Engines::PhysicsControl &);

	// BrnPhysicsControl.cpp:357
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnPhysicsControl.cpp:357
	virtual const char * GetTypeName() const;

	// BrnPhysicsControl.h:42
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnPhysicsControl.cpp:357
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnPhysicsControl.h:453
	void PhysicsControl();

	// BrnPhysicsControl.cpp:384
	virtual void ~PhysicsControl();

	// BrnPhysicsControl.cpp:399
	virtual int32_t GetController(int32_t);

	// BrnPhysicsControl.cpp:428
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnPhysicsControl.cpp:520
	virtual bool Attach();

	// BrnPhysicsControl.cpp:464
	virtual void SetupLoadData();

	// BrnPhysicsControl.cpp:578
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicsControl.cpp:580
		using namespace rw::math;

		// BrnPhysicsControl.cpp:581
		using namespace CgsSound::Logic;

	}

	// BrnPhysicsControl.cpp:849
	virtual void ProcessUpdate();

	// BrnPhysicsControl.h:466
	const BrnSound::Vehicles::Engines::PhysicsControl::PhysicsData & GetPhysicsData() const;

	// BrnPhysicsControl.h:473
	const VehicleData * GetRawPhysicsData() const;

	// BrnPhysicsControl.h:152
	const vehicleengine & GetVehicleEngineAttributes() const;

	// BrnPhysicsControl.h:432
	const char * GetEngineComponentName(BrnSound::Vehicles::VehicleState::EEngineComponentType);

	// BrnPhysicsControl.h:443
	Attribute::Key GetEngineComponentKey(BrnSound::Vehicles::VehicleState::EEngineComponentType);

	// BrnPhysicsControl.h:164
	BrnSound::Vehicles::VehicleState::AttachInfo GetAttachInfo() const;

protected:
	// BrnPhysicsControl.cpp:867
	// Declaration
	virtual void UpdateCollisionPassbys(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicsControl.cpp:870
		using namespace rw::math::fpu;

		// BrnPhysicsControl.cpp:871
		using namespace CgsSound::Logic;

		// BrnPhysicsControl.cpp:872
		using namespace Logic::Passby;

		// BrnPhysicsControl.cpp:873
		using namespace AttribSys::Enums;

	}

	// BrnPhysicsControl.cpp:920
	virtual void UpdateFx(float32_t);

	// BrnPhysicsControl.cpp:940
	float32_t UnityPhysicsRpm(float32_t) const;

	// BrnPhysicsControl.cpp:1004
	virtual void UpdateStartLineReving(float32_t);

	// BrnPhysicsControl.cpp:1091
	BrnSound::Vehicles::Engines::PhysicsControl::EngRevDataSet GetRandomEngineDataSet() const;

}

