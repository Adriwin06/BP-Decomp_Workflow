// ParticleScalerManager.h:27
struct cParticleScalerManager {
private:
	// ParticleScalerManager.h:43
	extern cParticleScalerManager mSingleton;

	// ParticleScalerManager.h:45
	cLionBlockAlloc mAllocator;

public:
	// ParticleScalerManager.h:30
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// ParticleScalerManager.h:31
	void AppDeInit();

	// ParticleScalerManager.h:33
	cParticleScaler * RegisterScaler(const char *);

	// ParticleScalerManager.h:34
	void UnRegisterScaler(cParticleScaler *);

	// ParticleScalerManager.h:36
	S32 GetScalerLimit() const;

	// ParticleScalerManager.h:37
	S32 GetScalerCount() const;

	// ParticleScalerManager.h:39
	cParticleScalerManager * GetMe();

}

