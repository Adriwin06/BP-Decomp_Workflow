// BrnCarStereoEffect.h:54
struct BrnSound::Vehicles::Environment::CarStereoEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnCarStereoEffect.cpp:50
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnCarStereoEffect.h:105
	CgsSound::Logic::VoiceWrapper mVoice;

	// BrnCarStereoEffect.h:106
	BrnSound::Module::SoundLogicModule * mpLogicModule;

	// BrnCarStereoEffect.h:107
	bool mbHasStereo;

	// BrnCarStereoEffect.cpp:39
	extern int32_t siNumStereos;

public:
	void CarStereoEffect(const CarStereoEffect &);

	void CarStereoEffect();

	// BrnCarStereoEffect.cpp:50
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnCarStereoEffect.cpp:50
	virtual const char * GetTypeName() const;

	// BrnCarStereoEffect.h:58
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnCarStereoEffect.cpp:50
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnCarStereoEffect.cpp:75
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarStereoEffect.cpp:77
		using namespace CgsSound::Playback;

		// BrnCarStereoEffect.cpp:94
		using namespace ParameterIndexes::PositionalVoiceSpec;

		// BrnCarStereoEffect.cpp:95
		using namespace SendIndexes::PositionalVoiceSpec;

	}

	// BrnCarStereoEffect.cpp:148
	virtual void UpdateParams(float32_t);

	// BrnCarStereoEffect.cpp:176
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarStereoEffect.cpp:178
		using namespace CgsSound::Playback;

		// BrnCarStereoEffect.cpp:179
		using namespace ParameterIndexes::PositionalVoiceSpec;

		// BrnCarStereoEffect.cpp:180
		using namespace SendIndexes::PositionalVoiceSpec;

	}

	// BrnCarStereoEffect.cpp:210
	virtual bool Detach();

private:
	// BrnCarStereoEffect.cpp:262
	// Declaration
	bool ShouldPlayMusic() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarStereoEffect.cpp:264
		using namespace Module::Io;

	}

public:
	virtual void ~CarStereoEffect();

}

// BrnCarStereoEffect.h:54
void BrnSound::Vehicles::Environment::CarStereoEffect::~CarStereoEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCarStereoEffect.h:54
void BrnSound::Vehicles::Environment::CarStereoEffect::CarStereoEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

