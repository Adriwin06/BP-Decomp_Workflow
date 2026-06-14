// BrnStateManager.h:61
extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

// BrnStateManager.h:109
struct BrnSound::Logic::PerfMonHelper {
private:
	// BrnStateManager.h:132
	int32_t miCpuMonitor;

public:
	// BrnStateManager.h:119
	void PerfMonHelper(int32_t);

	// BrnStateManager.h:126
	void ~PerfMonHelper();

}

// BrnStateManager.h:59
struct BrnSound::Logic::BrnStateManager : public BrnSound::Logic::IResourceRequester {
protected:
	// BrnStateManager.cpp:34
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

private:
	// BrnStateManager.h:94
	int32_t miCpuMonitor;

public:
	void BrnStateManager(const BrnStateManager &);

	void BrnStateManager();

	// BrnStateManager.cpp:34
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnStateManager.cpp:34
	virtual const char * GetTypeName() const;

	// BrnStateManager.h:61
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnStateManager.cpp:34
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnStateManager.cpp:68
	BrnSound::Module::SoundLogicModule * GetBrnLogicModule() const;

	// BrnStateManager.h:67
	virtual void ResourcesAreReady();

	// BrnStateManager.cpp:53
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

protected:
	// BrnStateManager.h:157
	void SetCpuMonitor(int32_t);

	// BrnStateManager.h:174
	int32_t GetCpuMonitor() const;

public:
	virtual void ~BrnStateManager();

}

// BrnStateManager.h:59
void BrnSound::Logic::BrnStateManager::~BrnStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStateManager.h:59
void BrnSound::Logic::BrnStateManager::BrnStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

