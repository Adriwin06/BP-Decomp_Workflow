// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnExplosionEffect.h:22
		namespace Explosion {
			struct ExplosionEffect;

			struct ExplosionState;

		}

	}

}

// BrnExplosionEffect.h:33
struct BrnSound::Logic::Explosion::ExplosionEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnExplosionEffect.cpp:33
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnExplosionEffect.h:92
	CgsSound::Logic::VoiceWrapper mExplosionVoice;

public:
	void ExplosionEffect(const ExplosionEffect &);

	// BrnExplosionEffect.cpp:33
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnExplosionEffect.cpp:33
	virtual const char * GetTypeName() const;

	// BrnExplosionEffect.h:34
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnExplosionEffect.cpp:33
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnExplosionEffect.h:108
	void ExplosionEffect();

	// BrnExplosionEffect.cpp:52
	virtual void ~ExplosionEffect();

	// BrnExplosionEffect.cpp:68
	virtual int32_t GetController(int32_t);

	// BrnExplosionEffect.cpp:86
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnExplosionEffect.cpp:244
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnExplosionEffect.cpp:246
		using namespace CgsSound::Logic;

		// BrnExplosionEffect.cpp:247
		using namespace CgsSound::Playback;

	}

	// BrnExplosionEffect.cpp:103
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnExplosionEffect.cpp:105
		using namespace rw::math;

	}

	// BrnExplosionEffect.cpp:229
	virtual void ProcessUpdate();

	// BrnExplosionEffect.cpp:269
	virtual bool Detach();

	// BrnExplosionEffect.cpp:191
	float GetGain() const;

	// BrnExplosionEffect.cpp:210
	float32_t GetPitch() const;

}

