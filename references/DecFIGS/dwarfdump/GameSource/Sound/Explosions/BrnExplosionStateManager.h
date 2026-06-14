// BrnExplosionStateManager.h:29
struct BrnSound::Logic::ExplosionStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnExplosionStateManager.h:53
	bool mbResourcesAreLoaded;

public:
	void ExplosionStateManager(const ExplosionStateManager &);

	// BrnExplosionStateManager.h:60
	void ExplosionStateManager();

	// BrnExplosionStateManager.cpp:49
	virtual bool Prepare();

	// BrnExplosionStateManager.cpp:115
	virtual void ResourcesAreReady();

	// BrnExplosionStateManager.cpp:134
	virtual void UpdateParams(float32_t);

	virtual void ~ExplosionStateManager();

}

// BrnExplosionStateManager.h:29
void BrnSound::Logic::ExplosionStateManager::~ExplosionStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

