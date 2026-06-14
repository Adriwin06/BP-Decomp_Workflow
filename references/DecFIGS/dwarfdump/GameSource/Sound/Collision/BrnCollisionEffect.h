// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// Declaration
			struct CollisionEffect {
				// BrnCollisionEffect.h:115
				struct SizeSpecificSettings {
					// BrnCollisionEffect.h:116
					float mfVolume;

					// BrnCollisionEffect.h:117
					float mfPitch;

				public:
					// BrnCollisionEffect.h:119
					SizeSpecificSettings();

				}

				// BrnCollisionEffect.h:144
				enum ePrepareState {
					E_PREPARE_STATE_CONSTRUCT_VOICE = 0,
					E_PREPARE_STATE_CONNECT_VOICE = 1,
				}

			private:
				// BrnCollisionEffect.h:126
				// Declaration
				void InitWork<Attrib::Gen::crashbin>(BrnSound::Logic::Collision::CollisionState *, const OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionEffect.cpp:536
					using namespace SendIndexes::SplicerVoiceSpec;

				}

				// BrnCollisionEffect.h:126
				// Declaration
				void InitWork<Attrib::Gen::propscrashbin>(BrnSound::Logic::Collision::CollisionState *, const OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionEffect.cpp:536
					using namespace SendIndexes::SplicerVoiceSpec;

				}

			}

		}

	}

}

// BrnCollisionEffect.h:47
struct BrnSound::Logic::Collision::CollisionEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnCollisionEffect.cpp:61
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnCollisionEffect.h:151
	BrnSound::Logic::Collision::CollisionControl * mpCollisionControl;

	// BrnCollisionEffect.h:152
	BrnSound::Logic::Collision::CollisionEffect::ePrepareState mePrepareState;

	// BrnCollisionEffect.h:154
	bool mbFirstUpdate;

	// BrnCollisionEffect.h:155
	bool mbUseAzimuth;

	// BrnCollisionEffect.h:157
	CgsSound::Logic::Voice mCrashVoice;

	// BrnCollisionEffect.h:159
	float32_t mfIntensity;

	// Unknown accessibility
	// eCollisionMixerSliders.h:35
	typedef AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders EeCollisionMixerSliders;

	// BrnCollisionEffect.h:160
	CollisionEffect::EeCollisionMixerSliders meNicotineVolumeSlider;

	// BrnCollisionEffect.h:161
	CollisionEffect::EeCollisionMixerSliders meNicotinePitchSlider;

	// BrnCollisionEffect.h:163
	BrnSound::Logic::Collision::CollisionEffect::SizeSpecificSettings mSizeSettings;

public:
	void CollisionEffect(const CollisionEffect &);

	// BrnCollisionEffect.cpp:61
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnCollisionEffect.cpp:61
	virtual const char * GetTypeName() const;

	// BrnCollisionEffect.h:48
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnCollisionEffect.cpp:61
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnCollisionEffect.h:181
	void CollisionEffect();

	// BrnCollisionEffect.cpp:81
	virtual void ~CollisionEffect();

	// BrnCollisionEffect.cpp:131
	// Declaration
	virtual bool Prepare(CgsSound::Logic::State *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionEffect.cpp:133
		using namespace CgsSound::Playback;

	}

	// BrnCollisionEffect.cpp:101
	virtual int32_t GetController(int32_t);

	// BrnCollisionEffect.cpp:182
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnCollisionEffect.cpp:366
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionEffect.cpp:368
		using namespace Attrib::Gen;

	}

	// BrnCollisionEffect.cpp:212
	virtual void UpdateParams(float32_t);

	// BrnCollisionEffect.cpp:269
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionEffect.cpp:297
		using namespace AttribSys::Enums;

		// BrnCollisionEffect.cpp:336
		using namespace ParameterIndexes::SplicerVoiceSpec;

		// BrnCollisionEffect.cpp:337
		using namespace SendIndexes::SplicerVoiceSpec;

	}

	// BrnCollisionEffect.cpp:570
	virtual bool Detach();

	// BrnCollisionEffect.cpp:231
	float GetGain() const;

	// BrnCollisionEffect.cpp:250
	float32_t GetPitch() const;

private:
	// BrnCollisionEffect.cpp:434
	// Declaration
	float32_t CalculateIntensity(const OutputCollision &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionEffect.cpp:456
		using namespace BrnWorld;

	}

}

// BrnCollisionEffect.h:38
struct BrnSound::Logic::Collision::Collision3DControl : public BrnSound::Logic::Brn3DUserSpaceEffectControl {
protected:
	// BrnCollisionEffect.cpp:56
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Collision3DControl(const Collision3DControl &);

	void Collision3DControl();

	// BrnCollisionEffect.cpp:56
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnCollisionEffect.cpp:56
	virtual const char * GetTypeName() const;

	// BrnCollisionEffect.h:40
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnCollisionEffect.cpp:56
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	virtual void ~Collision3DControl();

}

// BrnCollisionEffect.h:38
void BrnSound::Logic::Collision::Collision3DControl::~Collision3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionEffect.h:38
void BrnSound::Logic::Collision::Collision3DControl::Collision3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

