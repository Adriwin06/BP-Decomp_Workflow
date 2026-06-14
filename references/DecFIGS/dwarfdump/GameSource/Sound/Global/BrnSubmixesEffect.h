// BrnSubmixesEffect.h:55
struct BrnSound::Logic::SubmixesEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnSubmixesEffect.cpp:62
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSubmixesEffect.h:97
	BrnSound::Logic::GlobalStateManager * mpStateManager;

	// BrnSubmixesEffect.h:98
	bool mbIsSurround;

	// BrnSubmixesEffect.h:99
	bool mbHoldVolumes;

public:
	void SubmixesEffect(const SubmixesEffect &);

	void SubmixesEffect();

	// BrnSubmixesEffect.cpp:62
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSubmixesEffect.cpp:62
	virtual const char * GetTypeName() const;

	// BrnSubmixesEffect.h:59
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSubmixesEffect.cpp:62
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSubmixesEffect.cpp:84
	virtual void ~SubmixesEffect();

	// BrnSubmixesEffect.cpp:100
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSubmixesEffect.cpp:102
		using namespace ParameterIndexes;

	}

	// BrnSubmixesEffect.cpp:142
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSubmixesEffect.cpp:144
		using namespace SendIndexes;

	}

	// BrnSubmixesEffect.cpp:233
	void UpdateStaticPluginParameters(CgsSound::Logic::Voice &);

	// BrnSubmixesEffect.cpp:200
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSubmixesEffect.cpp:202
		using namespace CgsSound::Io;

	}

}

// BrnSubmixesEffect.h:55
void BrnSound::Logic::SubmixesEffect::SubmixesEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

