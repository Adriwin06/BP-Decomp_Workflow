// BrnEmitterEffect.h:155
struct BrnSound::Logic::World::Emitter3dControl : public Cgs3dEffectControl {
protected:
	// BrnEmitterEffect.cpp:58
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Emitter3dControl(const Emitter3dControl &);

	void Emitter3dControl();

	// BrnEmitterEffect.cpp:58
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEmitterEffect.cpp:58
	virtual const char * GetTypeName() const;

	// BrnEmitterEffect.h:159
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEmitterEffect.cpp:58
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	virtual void ~Emitter3dControl();

}

// BrnEmitterEffect.h:74
struct BrnSound::Logic::World::EmitterEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnEmitterEffect.cpp:50
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// BrnEmitterEffect.h:137
	CgsSound::Logic::VoiceWrapper mVoice;

	// BrnEmitterEffect.h:138
	Vector3 mPos;

	// BrnEmitterEffect.h:139
	Emitter3dControl * mp3dControl;

	// BrnEmitterEffect.h:140
	int16_t mi16PitchOutput;

public:
	void EmitterEffect(const EmitterEffect &);

	void EmitterEffect();

	// BrnEmitterEffect.cpp:50
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnEmitterEffect.cpp:50
	virtual const char * GetTypeName() const;

	// BrnEmitterEffect.h:75
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnEmitterEffect.cpp:50
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnEmitterEffect.cpp:80
	virtual void ~EmitterEffect();

	// BrnEmitterEffect.cpp:97
	virtual int32_t GetController(int32_t);

	// BrnEmitterEffect.cpp:126
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnEmitterEffect.cpp:212
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterEffect.cpp:214
		using namespace CgsSound::Playback;

		// BrnEmitterEffect.cpp:215
		using namespace ParameterIndexes::PositionalVoiceSpec;

		// BrnEmitterEffect.cpp:216
		using namespace SendIndexes::PositionalVoiceSpec;

	}

	// BrnEmitterEffect.cpp:156
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterEffect.cpp:158
		using namespace CgsSound::Playback;

		// BrnEmitterEffect.cpp:159
		using namespace ParameterIndexes::PositionalVoiceSpec;

		// BrnEmitterEffect.cpp:160
		using namespace SendIndexes::PositionalVoiceSpec;

	}

	// BrnEmitterEffect.cpp:306
	virtual bool Detach();

protected:
	// BrnEmitterEffect.cpp:352
	const StaticSoundEntity & GetSoundEntity() const;

}

// BrnEmitterEffect.h:155
void BrnSound::Logic::World::Emitter3dControl::Emitter3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEmitterEffect.h:155
void BrnSound::Logic::World::Emitter3dControl::~Emitter3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEmitterEffect.h:74
void BrnSound::Logic::World::EmitterEffect::EmitterEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

