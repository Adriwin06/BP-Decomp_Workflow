// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnPassbyStateManager.h:28
		namespace Passby {
			// Declaration
			struct PassbyEffect {
				// BrnPassbyEffect.h:107
				enum EPassbyLifetime {
					E_NOT_PLAYED = 0,
					E_HAS_PLAYED = 1,
					E_CULLED = 2,
				}

				// BrnPassbyEffect.h:116
				enum ePrepareState {
					E_PREPARE_STATE_CONSTRUCT_VOICE = 0,
					E_PREPARE_STATE_CONNECT_VOICE = 1,
				}

			}

		}

	}

}

// BrnPassbyEffect.h:42
struct BrnSound::Logic::Passby::PassbyEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnPassbyEffect.cpp:67
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnPassbyEffect.cpp:58
	extern uint32_t smuSampleIndex;

	// BrnPassbyEffect.h:156
	CgsSound::Logic::Voice mVoice;

	// BrnPassbyEffect.h:158
	passbybin mAttribs;

	// BrnPassbyEffect.h:159
	Vector3 mPosition;

	// BrnPassbyEffect.h:160
	BrnSound::Logic::Passby::PassbyEffect::EPassbyLifetime meLifetime;

	// BrnPassbyEffect.h:161
	BrnSound::Logic::Passby::Passby3DControl * mpPassby3DControl;

	// BrnPassbyEffect.h:162
	BrnSound::Logic::Passby::PassbyEffect::ePrepareState mePrepareState;

	// BrnPassbyEffect.h:164
	uint32_t muSampleId;

	// BrnPassbyEffect.h:166
	float32_t mfPitchScale;

	// BrnPassbyEffect.h:167
	float32_t mfVolumeScale;

	// BrnPassbyEffect.h:169
	bool mbPlayerIsBoosting;

	// BrnPassbyEffect.h:170
	bool mbFirstUpdate;

public:
	void PassbyEffect(const PassbyEffect &);

	// BrnPassbyEffect.cpp:67
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnPassbyEffect.cpp:67
	virtual const char * GetTypeName() const;

	// BrnPassbyEffect.h:43
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnPassbyEffect.cpp:67
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnPassbyEffect.h:188
	void PassbyEffect();

	// BrnPassbyEffect.cpp:86
	virtual void ~PassbyEffect();

	// BrnPassbyEffect.cpp:106
	virtual int32_t GetController(int32_t);

	// BrnPassbyEffect.cpp:135
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnPassbyEffect.cpp:165
	// Declaration
	virtual bool Prepare(CgsSound::Logic::State *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyEffect.cpp:167
		using namespace CgsSound::Playback;

	}

	// BrnPassbyEffect.cpp:432
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyEffect.cpp:470
		using namespace SendIndexes::SplicerVoiceSpec;

	}

	// BrnPassbyEffect.cpp:224
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyEffect.cpp:226
		using namespace CgsSound::Playback;

		// BrnPassbyEffect.cpp:237
		using namespace SendIndexes::SplicerVoiceSpec;

	}

	// BrnPassbyEffect.cpp:306
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyEffect.cpp:308
		using namespace CgsSound::Playback;

		// BrnPassbyEffect.cpp:309
		using namespace AttribSys::Enums;

		// BrnPassbyEffect.cpp:319
		using namespace ParameterIndexes::SplicerVoiceSpec;

		// BrnPassbyEffect.cpp:320
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnPassbyEffect.cpp:340
		using namespace rw::math::fpu;

	}

	// BrnPassbyEffect.cpp:526
	virtual bool Detach();

	// BrnPassbyEffect.h:103
	void OnPostInitVoice(CgsSound::Logic::VoiceWrapper &);

private:
	// BrnPassbyEffect.cpp:551
	// Declaration
	uint32_t ChooseSampleId(const BrnSound::Logic::Passby::PassbyStateManager::Passby &, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyEffect.cpp:553
		using namespace AttribSys::Enums;

	}

	// BrnPassbyEffect.cpp:605
	const BrnSound::Logic::Passby::PassbyStateManager::Passby & GetPassbyData() const;

	// BrnPassbyEffect.cpp:624
	bool UpdatePosition();

	// BrnPassbyEffect.cpp:660
	float32_t GetRelativeVelocityMag() const;

	// BrnPassbyEffect.cpp:506
	float32_t CalculateIntensity() const;

}

// BrnPassbyEffect.h:33
struct BrnSound::Logic::Passby::Passby3DControl : public BrnSound::Logic::Brn3DEffectControl {
protected:
	// BrnPassbyEffect.cpp:63
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Passby3DControl(const Passby3DControl &);

	void Passby3DControl();

	// BrnPassbyEffect.cpp:63
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnPassbyEffect.cpp:63
	virtual const char * GetTypeName() const;

	// BrnPassbyEffect.h:35
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnPassbyEffect.cpp:63
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	virtual void ~Passby3DControl();

}

// BrnPassbyEffect.h:33
void BrnSound::Logic::Passby::Passby3DControl::~Passby3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPassbyEffect.h:33
void BrnSound::Logic::Passby::Passby3DControl::Passby3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

