// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnEngineControl.h:29
		namespace Wheels {
			// Declaration
			struct WheelControl {
				// BrnWheelControl.h:53
				enum EWheelSide {
					E_LEFT_HAND_SIDE = 0,
					E_RIGHT_HAND_SIDE = 1,
					E_MAX_SIDES = 2,
				}

				// BrnWheelControl.h:60
				enum EInAirRevState {
					E_IN_AIR_REV_STATE_NONE = 0,
					E_IN_AIR_REV_STATE_ASCENDING = 1,
					E_IN_AIR_REV_STATE_DESCENDING = 2,
					E_IN_AIR_REV_STATE_MERGING = 3,
				}

				// BrnWheelControl.h:75
				struct WheelSide {
					// BrnWheelControl.h:95
					DataPoint<bool> mbIsOnGround;

					// BrnWheelControl.h:97
					float32_t mfPeel;

					// BrnWheelControl.h:98
					float32_t mfBrake;

					// BrnWheelControl.h:99
					float32_t mfLateral;

					// BrnWheelControl.h:101
					float32_t mfPeelNormalized;

					// BrnWheelControl.h:102
					float32_t mfBrakeNormalized;

					// BrnWheelControl.h:103
					float32_t mfLateralNormalized;

					// BrnWheelControl.h:105
					int32_t muRoadnoiseLoop;

				public:
					// BrnWheelControl.h:77
					WheelSide();

					// BrnWheelControl.h:83
					void Construct();

				}

				// BrnWheelControl.h:109
				struct WheelData {
					// BrnWheelControl.h:126
					BrnSound::Vehicles::Wheels::WheelControl::WheelSide[2] maSide;

					// BrnWheelControl.h:127
					DataPoint<float32_t> mfDrift;

					// BrnWheelControl.h:128
					bool mbReverse;

				public:
					// BrnWheelControl.h:111
					WheelData();

					// BrnWheelControl.h:117
					void Construct();

				}

				// BrnWheelControl.h:132
				struct WheelAttribs {
					// BrnWheelControl.h:136
					Basic2dColouredVertex::Vector2 mPeelSlow;

					// BrnWheelControl.h:137
					Basic2dColouredVertex::Vector2 mPeelFast;

					// BrnWheelControl.h:139
					Basic2dColouredVertex::Vector2 mLateralSlow;

					// BrnWheelControl.h:140
					Basic2dColouredVertex::Vector2 mLateralFast;

					// BrnWheelControl.h:142
					Basic2dColouredVertex::Vector2 mBrakeSlow;

					// BrnWheelControl.h:143
					Basic2dColouredVertex::Vector2 mBrakeFast;

					// BrnWheelControl.h:145
					float32_t[2] mafSideRightLateralMultipler;

					// BrnWheelControl.h:146
					float32_t[2] mafSideLeftLateralMultipler;

					// BrnWheelControl.h:148
					float32_t mfSlowFastThreshold;

				}

				// BrnWheelControl.h:152
				struct SingleWheelStatus {
					// BrnWheelControl.h:154
					DataPoint<bool> mIsOnGround;

					// BrnWheelControl.h:155
					DataPoint<uint8_t> mSurfaceType;

				}

			}

		}

	}

}

// BrnWheelControl.h:386
struct BrnSound::Vehicles::Wheels::AIWheelControl : public BrnSound::Vehicles::Wheels::WheelControl {
protected:
	// BrnWheelControl.cpp:97
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void AIWheelControl(const AIWheelControl &);

	void AIWheelControl();

	// BrnWheelControl.cpp:97
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnWheelControl.cpp:97
	virtual const char * GetTypeName() const;

	// BrnWheelControl.h:388
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnWheelControl.cpp:97
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnWheelControl.cpp:1020
	virtual int32_t GetController(int32_t);

	virtual void ~AIWheelControl();

}

// BrnWheelControl.h:49
struct BrnSound::Vehicles::Wheels::WheelControl : public BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator {
protected:
	// BrnWheelControl.cpp:92
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// Unknown accessibility
	// BrnWheelControl.h:69
	extern const uint32_t KU_AVERAGED_OVER = 1;

private:
	// BrnWheelControl.h:336
	BrnSound::Vehicles::Wheels::WheelControl::WheelAttribs mWheelAttribs;

	// BrnWheelControl.h:337
	BrnSound::Vehicles::Wheels::WheelControl::WheelData mWheelData;

	// BrnWheelControl.h:338
	BrnSound::Vehicles::Wheels::WheelControl::SingleWheelStatus[4] mWheelStatus;

	// BrnWheelControl.h:340
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnWheelControl.h:341
	BrnSound::Vehicles::Engines::ShiftControl * mpShiftControl;

	// BrnWheelControl.h:342
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnWheelControl.h:343
	BrnSound::Vehicles::RightSide3dControl * mpRight3dControl;

	// BrnWheelControl.h:344
	BrnSound::Vehicles::LeftSide3dControl * mpLeft3dControl;

	// BrnWheelControl.h:346
	BrnSound::Vehicles::Wheels::WheelControl::EInAirRevState meInAirRevState;

	// BrnWheelControl.h:348
	DataPoint<bool> mIsOnGround;

	// BrnWheelControl.h:350
	float32_t mfAudioRPM;

	// BrnWheelControl.h:351
	float32_t mfRPMDueToDrift;

	// BrnWheelControl.h:352
	float32_t mfDriftingRPMFactor;

	// BrnWheelControl.h:353
	float32_t mfDriftingShiftOccured;

	// BrnWheelControl.h:354
	bool mbPerformedDriftShift;

	// BrnWheelControl.h:355
	bool mbIsDriftUpShift;

	// BrnWheelControl.h:357
	float32_t mfRPMDueToPeel;

	// BrnWheelControl.h:358
	float32_t mfPeelingRPMFactor;

	// BrnWheelControl.h:359
	InterpolateLine mPeelOscillator;

	// BrnWheelControl.h:360
	Random mRandomGenerator;

	// BrnWheelControl.h:364
	PathLine<3u> mInAirRevThrottlePath;

	// BrnWheelControl.h:365
	InterpolateLine mInAirRevRpmInterpolate;

	// BrnWheelControl.h:366
	InterpolateLine mInAirRevVolumeInterpolate;

	// BrnWheelControl.h:368
	float32_t mfTimeInAir;

	// BrnWheelControl.h:369
	float32_t mfTimeSinceLanding;

public:
	void WheelControl(const BrnSound::Vehicles::Wheels::WheelControl &);

	// BrnWheelControl.cpp:92
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnWheelControl.cpp:92
	virtual const char * GetTypeName() const;

	// BrnWheelControl.h:51
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnWheelControl.cpp:92
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnWheelControl.cpp:123
	void WheelControl();

	// BrnWheelControl.cpp:176
	virtual void ~WheelControl();

	// BrnWheelControl.cpp:445
	virtual int32_t GetController(int32_t);

	// BrnWheelControl.cpp:474
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnWheelControl.cpp:660
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:662
		using namespace rw::math::fpu;

		// BrnWheelControl.cpp:663
		using namespace BrnPhysics::Vehicle;

		// BrnWheelControl.cpp:664
		using namespace CgsSound::Utils;

	}

	// BrnWheelControl.cpp:921
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:923
		using namespace CgsSound::Logic;

		// BrnWheelControl.cpp:924
		using namespace CgsSound::Playback;

	}

	// BrnWheelControl.h:191
	bool IsActive();

	// BrnWheelControl.h:412
	const BrnSound::Vehicles::Wheels::WheelControl::WheelData & GetWheelData() const;

	// BrnWheelControl.h:430
	float32_t GetAudioRPM() const;

	// BrnWheelControl.h:448
	DataPoint<bool> IsOnGround() const;

	// BrnWheelControl.h:489
	BrnSound::Vehicles::Wheels::WheelControl::SingleWheelStatus GetSingleWheelStatus(int32_t) const;

	// BrnWheelControl.h:507
	float32_t GetTimeInAir() const;

	// BrnWheelControl.h:524
	float32_t GetTimeSinceLanding() const;

	// BrnWheelControl.h:541
	float32_t GetModifiedRpm() const;

	// BrnWheelControl.h:558
	float32_t GetModifiedThrottle() const;

	// BrnWheelControl.h:575
	float32_t GetModifiedVolume() const;

	// BrnWheelControl.h:469
	void SetRoadnoiseLoop(int32_t, uint8_t);

private:
	// BrnWheelControl.cpp:530
	// Declaration
	float32_t CalcWheelRoadSpeedDelta(const WheelLite &, float32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:532
		using namespace rw::math::fpu;

	}

	// BrnWheelControl.cpp:567
	// Declaration
	float32_t CalcWheelLateralSpeedDelta(const WheelLite &, Matrix44Affine) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:569
		using namespace rw::math::fpu;

	}

	// BrnWheelControl.cpp:193
	void UpdateDriftingRPM();

	// BrnWheelControl.cpp:396
	void UpdatePeelRPM(float32_t);

	// BrnWheelControl.cpp:265
	// Declaration
	void UpdateWheelsInAirRPM(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:267
		using namespace CgsSound::Utils;

	}

	// BrnWheelControl.cpp:599
	// Declaration
	void UpdateWheelStatus(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:601
		using namespace BrnPhysics::Vehicle;

	}

	// BrnWheelControl.cpp:708
	// Declaration
	void UpdateSkidValues(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.cpp:710
		using namespace rw::math::fpu;

		// BrnWheelControl.cpp:711
		using namespace BrnPhysics::Vehicle;

		// BrnWheelControl.cpp:712
		using namespace CgsSound::Utils;

	}

	// BrnWheelControl.h:289
	float32_t LerpedNormalise(const Vector2Template<float> &, const Vector2Template<float> &, float32_t, float32_t);

	// BrnWheelControl.h:304
	// Declaration
	float32_t LerpedNormalise(float32_t, float32_t, float32_t, float32_t, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.h:306
		using namespace rw::math::fpu;

	}

	// BrnWheelControl.h:325
	// Declaration
	float32_t AbsMax(float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWheelControl.h:327
		using namespace rw::math::fpu;

	}

	// BrnWheelControl.cpp:957
	virtual float32_t GetStartRPM();

	// BrnWheelControl.cpp:973
	virtual float32_t GetTargetRPM();

	// BrnWheelControl.cpp:999
	virtual float32_t GetRiseFromRPM();

}

// BrnWheelControl.h:386
void BrnSound::Vehicles::Wheels::AIWheelControl::~AIWheelControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWheelControl.h:386
void BrnSound::Vehicles::Wheels::AIWheelControl::AIWheelControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

