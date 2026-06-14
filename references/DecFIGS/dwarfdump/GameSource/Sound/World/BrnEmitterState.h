// BrnEmitterState.h:56
struct BrnSound::Logic::World::EmitterState : public BrnSound::Logic::BrnState {
protected:
	// BrnEmitterState.cpp:33
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

private:
	// BrnEmitterState.h:117
	StaticSoundEntity mEntity;

public:
	void EmitterState(const EmitterState &);

	void EmitterState();

	// BrnEmitterState.cpp:33
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnEmitterState.cpp:33
	virtual const char * GetTypeName() const;

	// BrnEmitterState.h:58
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnEmitterState.cpp:33
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnEmitterState.cpp:52
	virtual void ~EmitterState();

	// BrnEmitterState.cpp:69
	// Declaration
	virtual void Attach(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterState.cpp:71
		using namespace World;

	}

	// BrnEmitterState.cpp:94
	virtual void UpdateParams(float32_t);

	// BrnEmitterState.cpp:112
	// Declaration
	virtual bool IsAttachedToThis(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterState.cpp:114
		using namespace World;

	}

	// BrnEmitterState.h:155
	const StaticSoundEntity & GetSoundEntity() const;

private:
	// BrnEmitterState.h:138
	void SetSoundEntity(const StaticSoundEntity &);

}

// BrnEmitterState.h:56
void BrnSound::Logic::World::EmitterState::EmitterState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

