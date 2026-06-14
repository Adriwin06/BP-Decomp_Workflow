// ParticleLocatorManager.h:26
struct cParticleLocatorManager {
private:
	// ParticleLocatorManager.h:50
	cLionBlockAlloc mAllocator;

public:
	// ParticleLocatorManager.h:30
	cParticleLocatorManager & Instance();

	// ParticleLocatorManager.h:36
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// ParticleLocatorManager.h:37
	void AppDeInit();

	// ParticleLocatorManager.h:38
	void GameInit();

	// ParticleLocatorManager.h:39
	void GameDeInit();

	// ParticleLocatorManager.h:41
	cParticleLocator * RegisterLocator(const char *);

	// ParticleLocatorManager.h:42
	void UnRegisterLocator(cParticleLocator *);

	// ParticleLocatorManager.h:44
	cParticleLocator * GetpFirstLocator();

	// ParticleLocatorManager.h:45
	S32 GetLocatorCount() const;

	// ParticleLocatorManager.h:46
	S32 GetLocatorLimit() const;

}

