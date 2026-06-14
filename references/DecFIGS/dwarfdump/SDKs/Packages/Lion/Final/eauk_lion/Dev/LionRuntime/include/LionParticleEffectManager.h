// LionParticleEffectManager.h:34
struct cLionParticleEffectManager {
private:
	// LionParticleEffectManager.h:86
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionParticleEffectManager.h:87
	cLionBlockAlloc mAllocator;

	// LionParticleEffectManager.h:88
	cLionParticleEffect * mpEffects;

	// LionParticleEffectManager.h:89
	cParticleDescriptor *[64] mpEffectGroups;

public:
	// LionParticleEffectManager.h:42
	cLionParticleEffectManager & Instance();

	// LionParticleEffectManager.h:49
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// LionParticleEffectManager.h:50
	void AppDeInit();

	// LionParticleEffectManager.h:51
	void Render(const cTime &, U32, U32);

	// LionParticleEffectManager.h:53
	cLionParticleEffect * EffectCreate(const char *);

	// LionParticleEffectManager.h:54
	void EffectDestroy(cLionParticleEffect *);

	// LionParticleEffectManager.h:55
	cLionParticleEffect * EffectClone(const cLionParticleEffect *);

	// LionParticleEffectManager.h:57
	void DefinitionAttach(cLionEffectDefinition *);

	// LionParticleEffectManager.h:58
	void DefinitionRemove(cLionEffectDefinition *);

	// LionParticleEffectManager.h:60
	void BindingsAttach(const cLionParticleEffect *, cLionBindings &);

	// LionParticleEffectManager.h:64
	void BindingsRemove(const cLionParticleEffect *, cLionBindings &, cLionBindings *);

	// LionParticleEffectManager.h:66
	cLionParticleEffect * GetpEffect(const char *);

	// LionParticleEffectManager.h:68
	void Free(cParticleDescriptor *);

	// LionParticleEffectManager.h:70
	void Free(cParticleWaveForm *);

	// LionParticleEffectManager.h:72
	void Free(cParticleMaterial *);

	// LionParticleEffectManager.h:74
	void Free(cParticleBehaviour *);

	// LionParticleEffectManager.h:76
	cParticleDescriptor * CreateDesriptor();

	// LionParticleEffectManager.h:78
	cParticleWaveForm * CreateWaveForm();

	// LionParticleEffectManager.h:80
	cParticleMaterial * CreateMaterial();

	// LionParticleEffectManager.h:82
	cParticleBehaviour * CreateBehaviour();

}

