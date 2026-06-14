// LionLightEffectManager.h:35
struct cLionLightEffectManager {
private:
	// LionLightEffectManager.h:56
	extern cLionLightEffectManager mSingleton;

	// LionLightEffectManager.h:58
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionLightEffectManager.h:59
	cLionLightEffect * mpEffects;

	// LionLightEffectManager.h:60
	cLionLightEmitter * mpEmitters;

	// LionLightEffectManager.h:62
	cParticleRandomSeed mSeed;

public:
	// LionLightEffectManager.h:37
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionLightEffectManager.h:38
	void AppDeInit();

	// LionLightEffectManager.h:39
	void Render(const cTime &, U32, U32, U32);

	// LionLightEffectManager.h:41
	cLionLightEffect * EffectCreate(const char *, cLionEffectDefinition *);

	// LionLightEffectManager.h:42
	void EffectDestroy(cLionLightEffect *);

	// LionLightEffectManager.h:43
	cLionLightEffect * EffectClone(cLionLightEffect *, cLionEffectDefinition *);

	// LionLightEffectManager.h:45
	cLionLightEffect * GetpEffect(const char *);

	// LionLightEffectManager.h:47
	void DefinitionAttach(cLionEffectDefinition *);

	// LionLightEffectManager.h:48
	void DefinitionRemove(cLionEffectDefinition *);

	// LionLightEffectManager.h:50
	void BindingsAttach(cLionLightEffect *, cLionBindings &);

	// LionLightEffectManager.h:51
	void BindingsRemove(cLionLightEffect *, cLionBindings &);

	// LionLightEffectManager.h:53
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionLightEffectManager.h:54
	cLionLightEffectManager * GetMe();

}

// LionLightEffectManager.h:56
extern cLionLightEffectManager mSingleton;

