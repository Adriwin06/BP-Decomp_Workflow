// LionGeomEffectManager.h:28
struct cLionGeomEffectManager {
private:
	// LionGeomEffectManager.h:51
	extern cLionGeomEffectManager mSingleton;

	// LionGeomEffectManager.h:53
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionGeomEffectManager.h:54
	cLionGeomEffect * mpEffects;

	// LionGeomEffectManager.h:55
	cLionGeomDescriptor *[64] mpEffectGroups;

public:
	// LionGeomEffectManager.h:35
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionGeomEffectManager.h:36
	void AppDeInit();

	// LionGeomEffectManager.h:37
	void Render(const cTime &, U32, U32, U32);

	// LionGeomEffectManager.h:39
	cLionGeomEffect * EffectCreate(const char *);

	// LionGeomEffectManager.h:40
	void EffectDestroy(cLionGeomEffect *);

	// LionGeomEffectManager.h:41
	cLionGeomEffect * EffectClone(cLionGeomEffect *);

	// LionGeomEffectManager.h:43
	void DefinitionAttach(cLionEffectDefinition *);

	// LionGeomEffectManager.h:44
	void DefinitionRemove(cLionEffectDefinition *);

	// LionGeomEffectManager.h:46
	cLionGeomEffect * GetpEffect(const char *);

	// LionGeomEffectManager.h:47
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionGeomEffectManager.h:49
	cLionGeomEffectManager * GetMe();

}

// LionGeomEffectManager.h:51
extern cLionGeomEffectManager mSingleton;

