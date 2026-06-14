// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnEngineControl.h:29
		namespace Wheels {
			// Declaration
			struct InAirEffect {
				// BrnInAirEffect.h:170
				struct SuspensionStatus {
					// BrnInAirEffect.h:176
					enum eSuspensionLatchedState {
						E_NONE = 0,
						E_COMPRESSED = 1,
						E_UNCOMPRESSED = 2,
					}

					// BrnInAirEffect.h:183
					float32_t mfSuspensionHeight;

					// BrnInAirEffect.h:184
					BrnSound::Vehicles::Wheels::InAirEffect::SuspensionStatus::eSuspensionLatchedState meSuspensionLatchedState;

					// BrnInAirEffect.h:185
					Average<3u,float32_t> mSuspensionDelta;

				public:
					// BrnInAirEffect.h:174
					void Clear();

				}

				// BrnInAirEffect.h:223
				struct InAirPhysicsData {
					// BrnInAirEffect.h:225
					DataPoint<bool> mIsOnGround;

					// BrnInAirEffect.h:226
					DataPoint<bool>[4] maWheelOnGround;

					// BrnInAirEffect.h:227
					float32_t[4] mafSuspensionHeights;

					// BrnInAirEffect.h:228
					DataPoint<float32_t> mfTimeInAir;

					// BrnInAirEffect.h:229
					float32_t mfTimeSinceReset;

					// BrnInAirEffect.h:230
					bool mbIsCrashing;

				}

			}

		}

	}

}

// BrnInAirEffect.h:273
struct BrnSound::Vehicles::Wheels::TrafficInAir : public BrnSound::Vehicles::Wheels::InAirEffect {
protected:
	// BrnInAirEffect.cpp:44
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// BrnInAirEffect.h:289
	const BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity * mpTrafficEntity;

public:
	void TrafficInAir(const TrafficInAir &);

	void TrafficInAir();

	// BrnInAirEffect.cpp:44
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnInAirEffect.cpp:44
	virtual const char * GetTypeName() const;

	// BrnInAirEffect.h:274
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnInAirEffect.cpp:44
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnInAirEffect.cpp:1167
	virtual void UpdatePhysicsData(float32_t);

	// BrnInAirEffect.cpp:1113
	virtual bool Attach();

	// BrnInAirEffect.cpp:1140
	void Clear();

	virtual void ~TrafficInAir();

}

// BrnInAirEffect.h:247
struct BrnSound::Vehicles::Wheels::JunkyardInAirEffect : public BrnSound::Vehicles::Wheels::InAirEffect {
protected:
	// BrnInAirEffect.cpp:39
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// BrnInAirEffect.h:267
	DataPoint<bool> mbIsVehicleValid;

	// Unknown accessibility
	// BrnInAirEffect.h:268
	BrnSound::Logic::MusicEffect::EJunkyardAmbience meJunkyardAmbience;

public:
	void JunkyardInAirEffect(const JunkyardInAirEffect &);

	void JunkyardInAirEffect();

	// BrnInAirEffect.cpp:39
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnInAirEffect.cpp:39
	virtual const char * GetTypeName() const;

	// BrnInAirEffect.h:248
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnInAirEffect.cpp:39
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnInAirEffect.cpp:933
	// Declaration
	virtual void UpdatePhysicsData(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:942
		using namespace BrnPhysics::Vehicle;

	}

	// BrnInAirEffect.cpp:1095
	virtual bool Attach();

	// BrnInAirEffect.cpp:1033
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnInAirEffect.cpp:1009
	// Declaration
	void FlushData(const VehicleData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:50
		typedef RaceCarState VehicleData;

	}

	virtual void ~JunkyardInAirEffect();

}

// BrnInAirEffect.h:47
struct BrnSound::Vehicles::Wheels::InAirEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnInAirEffect.cpp:35
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// BrnInAirEffect.h:138
	BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnInAirEffect.h:139
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnInAirEffect.h:140
	BrnSound::Vehicles::Environment::EnclosureControl * mpEnclosureControl;

	// BrnInAirEffect.h:143
	extern const int32_t KI_NUMBER_OF_LANDING_VOICES = 4;

	// BrnInAirEffect.h:145
	CgsSound::Logic::VoiceWrapper mInAirVoice;

	// BrnInAirEffect.h:146
	CgsSound::Logic::VoicePool<4> mLandingVoices;

	// BrnInAirEffect.h:147
	CgsSound::Logic::VoiceWrapper mHardLandingVoice;

	// BrnInAirEffect.h:149
	CgsSound::Logic::VoiceWrapper mJunkyardLandingSweetnerVoice;

	// BrnInAirEffect.h:150
	CgsSound::Logic::VoiceWrapper mJumpCamLandingVoice;

	// BrnInAirEffect.h:152
	CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::InAirEffect> mLaunchFunctionPointer;

	// BrnInAirEffect.h:156
	float32_t mfHardLandingVoiceSecondGain;

	// BrnInAirEffect.h:157
	float32_t mfJumpCamLandingVoiceSecondGain;

	// BrnInAirEffect.h:158
	float32_t mfJunkyardLandingSweetnerVoiceSecondGain;

	// BrnInAirEffect.h:160
	float32_t mfSuspensionSensitivity;

	// BrnInAirEffect.h:161
	float32_t mfSuspensionThreshold;

	// BrnInAirEffect.h:165
	crashbin mBin;

	// BrnInAirEffect.h:166
	uint32_t muRoundRobin;

	// BrnInAirEffect.h:188
	BrnSound::Vehicles::Wheels::InAirEffect::SuspensionStatus[4] mSuspensionStatus;

	// BrnInAirEffect.h:191
	BrnSound::Logic::Collision::CollisionStateManager * mpCollisionMgr;

	// BrnInAirEffect.h:197
	float32_t mfTimeSinceJumpCamera;

	// BrnInAirEffect.h:233
	BrnSound::Vehicles::Wheels::InAirEffect::InAirPhysicsData mPhysicsData;

public:
	void InAirEffect(const InAirEffect &);

	// BrnInAirEffect.cpp:35
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnInAirEffect.cpp:35
	virtual const char * GetTypeName() const;

	// BrnInAirEffect.h:48
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnInAirEffect.cpp:35
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnInAirEffect.h:306
	void InAirEffect();

	// BrnInAirEffect.cpp:101
	virtual void ~InAirEffect();

	// BrnInAirEffect.cpp:118
	virtual int32_t GetController(int32_t);

	// BrnInAirEffect.cpp:154
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnInAirEffect.cpp:187
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:189
		using namespace rw::math;

	}

	// BrnInAirEffect.cpp:695
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:697
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnInAirEffect.cpp:698
		using namespace ParameterIndexes::SplicerVoiceSpec;

		// BrnInAirEffect.cpp:731
		using namespace ParameterIndexes::AEMS_PlayInAir;

	}

	// BrnInAirEffect.cpp:758
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:760
		using namespace CgsSound::Logic;

		// BrnInAirEffect.cpp:761
		using namespace CgsSound::Playback;

		// BrnInAirEffect.cpp:762
		using namespace ParameterIndexes::AEMS_PlayInAir;

	}

	// BrnInAirEffect.cpp:844
	virtual bool Detach();

	// BrnInAirEffect.cpp:409
	virtual void SetupLoadData();

protected:
	// BrnInAirEffect.cpp:426
	void PlayInAir();

	// BrnInAirEffect.cpp:555
	// Declaration
	void PlayLanding(BrnSound::Logic::Collision::ECollisionSpliceTags, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:557
		using namespace CgsSound::Playback;

		// BrnInAirEffect.cpp:558
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnInAirEffect.cpp:559
		using namespace ParameterIndexes::SplicerVoiceSpec;

	}

	// BrnInAirEffect.cpp:628
	// Declaration
	void PlayJumpCamLanding() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:630
		using namespace CgsSound::Playback;

		// BrnInAirEffect.cpp:631
		using namespace AttribSys::Enums::eSampleTags;

		// BrnInAirEffect.cpp:632
		using namespace SendIndexes::SplicerVoiceSpec;

	}

	// BrnInAirEffect.cpp:445
	// Declaration
	BrnSound::Logic::BrnEffectObject::SampleTag GetSampleLandingId(BrnSound::Logic::Collision::ECollisionSpliceTags) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInAirEffect.cpp:455
		using namespace Attrib::Gen;

		// BrnInAirEffect.cpp:456
		using namespace Logic::Collision;

	}

	// BrnInAirEffect.cpp:262
	void UpdateWheelLandings(float32_t);

	// BrnInAirEffect.cpp:352
	void UpdateSuspensionSqueeks(float32_t);

	// BrnInAirEffect.h:345
	const DataPoint<bool> IsWheelOnGround(int32_t);

	// BrnInAirEffect.h:361
	DataPoint<bool> IsOnGround();

	// BrnInAirEffect.h:390
	float32_t GetTimeSinceReset() const;

	// BrnInAirEffect.h:376
	DataPoint<float32_t> GetTimeInAir();

	// BrnInAirEffect.h:406
	float32_t GetWheelSuspensionHeight(int32_t);

	// BrnInAirEffect.cpp:897
	virtual void UpdatePhysicsData(float32_t);

}

// BrnInAirEffect.h:273
void BrnSound::Vehicles::Wheels::TrafficInAir::~TrafficInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInAirEffect.h:247
void BrnSound::Vehicles::Wheels::JunkyardInAirEffect::~JunkyardInAirEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInAirEffect.h:273
void BrnSound::Vehicles::Wheels::TrafficInAir::TrafficInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInAirEffect.h:247
void BrnSound::Vehicles::Wheels::JunkyardInAirEffect::JunkyardInAirEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInAirEffect.h:143
extern const int32_t KI_NUMBER_OF_LANDING_VOICES = 4;

