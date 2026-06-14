// LionEffectManager.h:30
struct cLionEffectManager {
private:
	// LionEffectManager.h:71
	extern cLionEffectManager mSingleton;

	// LionEffectManager.h:73
	U32 mEffectDefCount;

	// LionEffectManager.h:74
	U32 mEffectCount;

	// LionEffectManager.h:76
	cLionEffectDefinition * mpEffectDefs;

	// LionEffectManager.h:77
	cLionEffectInstance * mpEffects;

	// LionEffectManager.h:79
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionEffectManager.h:80
	cLionBlockAlloc mAllocator;

public:
	// LionEffectManager.h:33
	cLionEffectManager * GetMe();

	// LionEffectManager.h:38
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// LionEffectManager.h:39
	void AppDeInit();

	// LionEffectManager.h:41
	cLionEffectDefinition * EffectDefinitionCreate(const LionChar *);

	// LionEffectManager.h:42
	void EffectDefinitionDestroy(cLionEffectDefinition *);

	// LionEffectManager.h:43
	cLionEffectDefinition * EffectDefinitionClone(cLionEffectDefinition *);

	// LionEffectManager.h:45
	void EffectDefinitionStop(cLionEffectDefinition *);

	// LionEffectManager.h:46
	void EffectDefinitionStart(cLionEffectDefinition *);

	// LionEffectManager.h:48
	cLionEffectInstance * EffectCreate(cLionEffectDefinition *, cParticleLocator *, cParticleScaler *, cParticleTrigger *, U32);

	// LionEffectManager.h:51
	void EffectDestroy(cLionEffectInstance *);

	// LionEffectManager.h:54
	void EffectDestroySafe(cLionEffectInstance *);

	// LionEffectManager.h:56
	void Update(const cTime &);

	// LionEffectManager.h:57
	void Render(const cTime &, U32, U32, U32);

	// LionEffectManager.h:60
	void GarbageCollect();

	// LionEffectManager.h:61
	void FindAllEffectNames();

	// LionEffectManager.h:63
	U32 GetEffectDefCount();

	// LionEffectManager.h:64
	U32 GetEffectCount();

	// LionEffectManager.h:65
	U32 GetEffectLimit();

	// LionEffectManager.h:67
	EA::Allocator::ITaggedAllocator * GetpAllocator();

}

// LionEffectManager.h:71
extern cLionEffectManager mSingleton;

// LionEffectManager.h:30
struct cLionEffectManager {
private:
	// LionEffectManager.h:71
	extern cLionEffectManager mSingleton;

	// LionEffectManager.h:73
	U32 mEffectDefCount;

	// LionEffectManager.h:74
	U32 mEffectCount;

	// LionEffectManager.h:76
	cLionEffectDefinition * mpEffectDefs;

	// LionEffectManager.h:77
	cLionEffectInstance * mpEffects;

	// LionEffectManager.h:79
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionEffectManager.h:80
	cLionBlockAlloc mAllocator;

public:
	// LionEffectManager.h:33
	cLionEffectManager * GetMe();

	// LionEffectManager.h:38
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// LionEffectManager.h:39
	void AppDeInit();

	// LionEffectManager.h:41
	cLionEffectDefinition * EffectDefinitionCreate(const LionChar *);

	// LionEffectManager.h:42
	void EffectDefinitionDestroy(cLionEffectDefinition *);

	// LionEffectManager.h:43
	cLionEffectDefinition * EffectDefinitionClone(cLionEffectDefinition *);

	// LionEffectManager.h:45
	void EffectDefinitionStop(cLionEffectDefinition *);

	// LionEffectManager.h:46
	void EffectDefinitionStart(cLionEffectDefinition *);

	// LionEffectManager.h:48
	cLionEffectInstance * EffectCreate(cLionEffectDefinition *, cParticleLocator *, cParticleScaler *, cParticleTrigger *, U32);

	// LionEffectManager.h:51
	void EffectDestroy(cLionEffectInstance *);

	// LionEffectManager.h:54
	void EffectDestroySafe(cLionEffectInstance *);

	// LionEffectManager.h:56
	void Update(const cTime &);

	// LionEffectManager.h:57
	void Render(const cTime &, U32, U32, U32);

	// LionEffectManager.h:60
	void GarbageCollect();

	// LionEffectManager.h:61
	// Declaration
	void FindAllEffectNames() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// LionEffectManager.cpp:292
		using namespace CgsDev::Message;

		// LionEffectManager.cpp:308
		using namespace CgsDev::Message;

		// LionEffectManager.cpp:315
		using namespace CgsDev::Message;

	}

	// LionEffectManager.h:63
	U32 GetEffectDefCount();

	// LionEffectManager.h:64
	U32 GetEffectCount();

	// LionEffectManager.h:65
	U32 GetEffectLimit();

	// LionEffectManager.h:67
	EA::Allocator::ITaggedAllocator * GetpAllocator();

}

