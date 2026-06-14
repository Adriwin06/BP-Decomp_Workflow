// ParticleSystem.h:27
struct cParticleSystem {
private:
	// ParticleSystem.h:47
	extern cParticleSystem mSingleton;

	// ParticleSystem.h:49
	U32 mEmitterCount;

	// ParticleSystem.h:50
	cParticleEmitter * mpEmitters;

	// ParticleSystem.h:51
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// ParticleSystem.h:31
	void AppInit(EA::Allocator::ITaggedAllocator *, U32, U32, U32);

	// ParticleSystem.h:32
	void AppDeInit();

	// ParticleSystem.h:33
	void GameInit();

	// ParticleSystem.h:34
	void GameDeInit();

	// ParticleSystem.h:38
	void Update(const cTime &);

	// ParticleSystem.h:43
	cParticleSystem * GetMe();

}

// ParticleSystem.h:47
extern cParticleSystem mSingleton;

