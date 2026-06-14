// ParticleTriggerManager.h:28
struct cParticleTriggerManager {
private:
	// ParticleTriggerManager.h:47
	extern cParticleTriggerManager mSingleton;

	// ParticleTriggerManager.h:48
	cLionBlockAlloc mAllocator;

public:
	// ParticleTriggerManager.h:31
	void AppInit(EA::Allocator::ITaggedAllocator *, U32);

	// ParticleTriggerManager.h:32
	void AppDeInit();

	// ParticleTriggerManager.h:34
	void GameInit();

	// ParticleTriggerManager.h:35
	void GameDeInit();

	// ParticleTriggerManager.h:37
	cParticleTrigger * RegisterTrigger(const char *);

	// ParticleTriggerManager.h:38
	void UnRegisterTrigger(cParticleTrigger *);

	// ParticleTriggerManager.h:40
	S32 GetTriggerLimit() const;

	// ParticleTriggerManager.h:41
	S32 GetTriggerCount() const;

	// ParticleTriggerManager.h:43
	cParticleTriggerManager * GetMe();

}

