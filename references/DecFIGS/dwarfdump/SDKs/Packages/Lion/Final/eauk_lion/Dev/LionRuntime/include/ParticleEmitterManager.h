// ParticleEmitterManager.h:41
struct cParticleEmitterManager {
private:
	// ParticleEmitterManager.h:94
	U32 mEmitterCount;

	// ParticleEmitterManager.h:95
	U32 mUsedCount;

	// ParticleEmitterManager.h:97
	U32 mCloneCount;

	// ParticleEmitterManager.h:98
	U32 mCloneUsedCount;

	// ParticleEmitterManager.h:101
	cParticleEmitter * mpEmitters;

	// ParticleEmitterManager.h:103
	cParticleEmitter * mpFree;

	// ParticleEmitterManager.h:105
	cParticleEmitter * mpUsed;

	// ParticleEmitterManager.h:107
	sParticleEmitterClone * mpClones;

	// ParticleEmitterManager.h:108
	sParticleEmitterClone * mpCloneFree;

	// ParticleEmitterManager.h:109
	sParticleEmitterClone * mpCloneUsed;

	// ParticleEmitterManager.h:111
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// ParticleEmitterManager.h:44
	cParticleEmitterManager & Instance();

	// ParticleEmitterManager.h:51
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// ParticleEmitterManager.h:52
	void AppDeInit();

	// ParticleEmitterManager.h:53
	void GameInit();

	// ParticleEmitterManager.h:54
	void GameDeInit();

	// ParticleEmitterManager.h:55
	void Update(const cTime &);

	// ParticleEmitterManager.h:57
	void Reset();

	// ParticleEmitterManager.h:58
	void Flush();

	// ParticleEmitterManager.h:60
	cParticleEmitter * Register(cParticleDescriptor *);

	// ParticleEmitterManager.h:61
	void Register(cParticleDescriptor *, cLionBindings &);

	// ParticleEmitterManager.h:62
	cParticleEmitter * RegisterSubEmitter(cParticleDescriptor *);

	// ParticleEmitterManager.h:64
	void UnRegister(const cParticleDescriptor &, cLionBindings &, cLionBindings *);

	// ParticleEmitterManager.h:65
	void UnRegister(cParticleEmitter *);

	// ParticleEmitterManager.h:67
	void UnRegisterDescriptor(cParticleDescriptor *);

	// ParticleEmitterManager.h:69
	void ActivateAll();

	// ParticleEmitterManager.h:70
	void DeActivateAll();

	// ParticleEmitterManager.h:71
	void Activate(const char *);

	// ParticleEmitterManager.h:72
	void DeActivate(const char *);

	// ParticleEmitterManager.h:74
	cParticleEmitter * GetpUsed();

	// ParticleEmitterManager.h:79
	U32 GetEmitterCount() const;

	// ParticleEmitterManager.h:80
	U32 GetUsedCount() const;

	// ParticleEmitterManager.h:82
	U32 GetCloneCount() const;

	// ParticleEmitterManager.h:83
	U32 GetCloneUsedCount() const;

	// ParticleEmitterManager.h:88
	cParticleEmitter * FindEmitter(const cParticleDescriptor &) const;

	// ParticleEmitterManager.h:90
	void Visit(const cLionEffectInstance &, iEmitterVisitor &) const;

}

