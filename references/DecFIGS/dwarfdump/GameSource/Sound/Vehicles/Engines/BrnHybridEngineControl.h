// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct HybridExhaustControl {
				// BrnHybridEngineControl.h:52
				struct EngineMix {
					// BrnHybridEngineControl.h:61
					float32_t Loop;

					// BrnHybridEngineControl.h:62
					float32_t AccelGinsu;

					// BrnHybridEngineControl.h:63
					float32_t DecelGinsu;

					// BrnHybridEngineControl.h:64
					float32_t Cutoff;

				public:
					// BrnHybridEngineControl.h:53
					EngineMix();

				}

			}

		}

	}

}

// BrnHybridEngineControl.h:187
struct BrnSound::Vehicles::Engines::HybridEngineControl : public BrnSound::Vehicles::Engines::HybridExhaustControl {
protected:
	// BrnHybridEngineControl.cpp:61
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnHybridEngineControl.h:208
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridExhaustControl;

public:
	void HybridEngineControl(const HybridEngineControl &);

	void HybridEngineControl();

	// BrnHybridEngineControl.cpp:61
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnHybridEngineControl.cpp:61
	virtual const char * GetTypeName() const;

	// BrnHybridEngineControl.h:188
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnHybridEngineControl.cpp:61
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnHybridEngineControl.cpp:930
	virtual int32_t GetController(int32_t);

	// BrnHybridEngineControl.cpp:962
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnHybridEngineControl.cpp:1021
	virtual bool Attach();

	// BrnHybridEngineControl.cpp:907
	virtual void UpdateGinsuRPM();

	virtual void ~HybridEngineControl();

}

// BrnHybridEngineControl.h:48
struct BrnSound::Vehicles::Engines::HybridExhaustControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnHybridEngineControl.cpp:56
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// BrnHybridEngineControl.h:123
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnHybridEngineControl.h:124
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnHybridEngineControl.h:125
	BrnSound::Vehicles::Engines::ShiftControl * mpShiftControl;

	// BrnHybridEngineControl.h:126
	ClutchControl * mpClutchControl;

	// BrnHybridEngineControl.h:129
	vehicleengine mVehicleEngineAttributes;

	// BrnHybridEngineControl.h:130
	vehicleengine mMasterVehicleEngineComponentAttributes;

	// BrnHybridEngineControl.h:155
	Average<3u,float32_t> mAverageDeltaRPM;

	// BrnHybridEngineControl.h:158
	DataPoint<float32_t> mPhysicsDeltaRpm;

	// BrnHybridEngineControl.h:159
	DataPoint<float32_t> mAudioDeltaRpm;

	// BrnHybridEngineControl.h:161
	DataPoint<float32_t> mGinsuRpm;

	// BrnHybridEngineControl.h:166
	Graph mDecelCrossfadeMix;

	// BrnHybridEngineControl.h:167
	Vector2[6] maCrossFadesPoints;

	// BrnHybridEngineControl.h:171
	float32_t mfPercentOfAccelThreshold;

	// BrnHybridEngineControl.h:172
	float32_t mfPercentOfDecelThreshold;

	// BrnHybridEngineControl.h:179
	BrnSound::Vehicles::Engines::HybridExhaustControl::EngineMix mFinalEngineMix;

	// BrnHybridEngineControl.h:180
	BrnSound::Vehicles::Engines::HybridExhaustControl::EngineMix mFinalEngineVolume;

public:
	void HybridExhaustControl(const HybridExhaustControl &);

	// BrnHybridEngineControl.cpp:56
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnHybridEngineControl.cpp:56
	virtual const char * GetTypeName() const;

	// BrnHybridEngineControl.h:49
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnHybridEngineControl.cpp:56
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnHybridEngineControl.h:226
	void HybridExhaustControl();

	// BrnHybridEngineControl.cpp:88
	virtual void ~HybridExhaustControl();

	// BrnHybridEngineControl.cpp:105
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHybridEngineControl.cpp:201
		using namespace CgsSound::Utils;

		// BrnHybridEngineControl.cpp:202
		using namespace rw::math;

	}

	// BrnHybridEngineControl.cpp:258
	virtual void UpdateParams(float32_t);

	// BrnHybridEngineControl.cpp:347
	virtual int32_t GetController(int32_t);

	// BrnHybridEngineControl.cpp:389
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnHybridEngineControl.h:234
	float32_t GetGinsuRPM();

	// BrnHybridEngineControl.h:240
	float32_t GetDeltaRPM();

	// BrnHybridEngineControl.h:247
	const BrnSound::Vehicles::Engines::HybridExhaustControl::EngineMix & GetEngineMix();

	// BrnHybridEngineControl.h:253
	vehicleengine & GetVehicleEngineAttributes();

protected:
	// BrnHybridEngineControl.cpp:447
	void UpdateDeltaRPM();

	// BrnHybridEngineControl.cpp:232
	virtual void UpdateGinsuRPM();

	// BrnHybridEngineControl.cpp:880
	void UpdateIdleVolume(float32_t &);

	// BrnHybridEngineControl.cpp:816
	void UpdateRpmVolume(float32_t &);

	// BrnHybridEngineControl.cpp:838
	void UpdateRotationVolume(float32_t &);

	// BrnHybridEngineControl.cpp:539
	// Declaration
	void UpdateMix(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHybridEngineControl.cpp:541
		using namespace rw::math;

	}

}

// BrnHybridEngineControl.h:187
void BrnSound::Vehicles::Engines::HybridEngineControl::~HybridEngineControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHybridEngineControl.h:187
void BrnSound::Vehicles::Engines::HybridEngineControl::HybridEngineControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

