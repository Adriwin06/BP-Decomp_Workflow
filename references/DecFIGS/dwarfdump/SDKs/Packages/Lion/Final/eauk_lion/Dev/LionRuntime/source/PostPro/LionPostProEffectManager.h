// LionPostProEffectManager.h:31
struct cLionPostProEffectManager {
private:
	// LionPostProEffectManager.h:54
	extern cLionPostProEffectManager mSingleton;

	// LionPostProEffectManager.h:56
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionPostProEffectManager.h:57
	cLionPostProEffect * mpEffects;

	// LionPostProEffectManager.h:58
	cLionPostProDescriptor *[64] mpEffectGroups;

	// LionPostProEffectManager.h:59
	cLionPostProRenderStack mRenderStack;

public:
	// LionPostProEffectManager.h:38
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionPostProEffectManager.h:39
	void AppDeInit();

	// LionPostProEffectManager.h:40
	void Render(const cTime &, U32, U32, U32);

	// LionPostProEffectManager.h:42
	cLionPostProEffect * EffectCreate(const char *);

	// LionPostProEffectManager.h:43
	void EffectDestroy(cLionPostProEffect *);

	// LionPostProEffectManager.h:44
	cLionPostProEffect * EffectClone(const cLionPostProEffect *);

	// LionPostProEffectManager.h:46
	cLionPostProEffect * GetpEffect(const char *);

	// LionPostProEffectManager.h:48
	void DefinitionAttach(cLionEffectDefinition *);

	// LionPostProEffectManager.h:49
	void DefinitionRemove(cLionEffectDefinition *);

	// LionPostProEffectManager.h:51
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionPostProEffectManager.h:52
	cLionPostProEffectManager * GetMe();

}

// LionPostProEffectManager.h:54
extern cLionPostProEffectManager mSingleton;

