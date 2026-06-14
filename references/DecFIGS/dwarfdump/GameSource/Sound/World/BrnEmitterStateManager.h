// BrnEmitterStateManager.h:64
struct BrnSound::Logic::World::EmitterStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnEmitterStateManager.cpp:37
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

private:
	// BrnEmitterStateManager.h:121
	BrnSound::Logic::World::SoundWorldScene mSoundScene;

	// BrnEmitterStateManager.h:122
	Vector3 mCameraPos;

public:
	void EmitterStateManager(const EmitterStateManager &);

	void EmitterStateManager();

	// BrnEmitterStateManager.cpp:37
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnEmitterStateManager.cpp:37
	virtual const char * GetTypeName() const;

	// BrnEmitterStateManager.h:66
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnEmitterStateManager.cpp:37
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnEmitterStateManager.cpp:56
	virtual bool Prepare();

	// BrnEmitterStateManager.cpp:180
	virtual bool Release();

	// BrnEmitterStateManager.cpp:129
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterStateManager.cpp:131
		using namespace Module::Io;

		// BrnEmitterStateManager.cpp:132
		using namespace World;

	}

	// BrnEmitterStateManager.cpp:249
	virtual void ResourcesAreReady();

	// BrnEmitterStateManager.cpp:201
	// Declaration
	virtual CgsSound::Logic::State * GetFreeState(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEmitterStateManager.cpp:203
		using namespace World;

	}

	virtual void ~EmitterStateManager();

}

// BrnEmitterStateManager.h:64
void BrnSound::Logic::World::EmitterStateManager::~EmitterStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEmitterStateManager.h:64
void BrnSound::Logic::World::EmitterStateManager::EmitterStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

