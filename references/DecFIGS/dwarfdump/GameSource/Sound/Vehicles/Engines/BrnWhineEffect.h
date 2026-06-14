// BrnWhineEffect.h:41
struct BrnSound::Vehicles::Engines::WhineEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnWhineEffect.cpp:37
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnWhineEffect.h:114
	CgsSound::Logic::VoiceWrapper mWhineVoice;

	// BrnWhineEffect.h:116
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnWhineEffect.h:118
	float32_t mfWhineVolume;

public:
	void WhineEffect(const WhineEffect &);

	// BrnWhineEffect.cpp:37
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnWhineEffect.cpp:37
	virtual const char * GetTypeName() const;

	// BrnWhineEffect.h:43
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnWhineEffect.cpp:37
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnWhineEffect.cpp:52
	void WhineEffect();

	// BrnWhineEffect.cpp:67
	virtual void ~WhineEffect();

	// BrnWhineEffect.cpp:118
	virtual int32_t GetController(int32_t);

	// BrnWhineEffect.cpp:149
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnWhineEffect.cpp:178
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWhineEffect.cpp:189
		using namespace CgsSound::Logic;

		// BrnWhineEffect.cpp:190
		using namespace CgsSound::Playback;

		// BrnWhineEffect.cpp:191
		using namespace SendIndexes::AEMS_GearWhineClass;

		// BrnWhineEffect.cpp:192
		using namespace ParameterIndexes::AEMS_GearWhineClass;

	}

	// BrnWhineEffect.cpp:231
	virtual void UpdateParams(float32_t);

	// BrnWhineEffect.cpp:302
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWhineEffect.cpp:304
		using namespace ParameterIndexes::AEMS_GearWhineClass;

		// BrnWhineEffect.cpp:305
		using namespace SendIndexes::AEMS_GearWhineClass;

	}

	// BrnWhineEffect.cpp:278
	virtual bool Detach();

	// BrnWhineEffect.cpp:86
	virtual void SetupLoadData();

	// BrnWhineEffect.cpp:254
	virtual void Notify(const CgsSound::Io::MessageHeader *);

}

