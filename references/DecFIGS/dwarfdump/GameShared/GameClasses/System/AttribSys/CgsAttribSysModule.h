// CgsAttribSysModule.h:222
extern bool sbSchemaLoaded;

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysModule {
	private:
		// CgsAttribSysModule.h:222
		extern bool sbSchemaLoaded;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysModule {
	public:
		AttribSysModule();

		~AttribSysModule();

	private:
		// CgsAttribSysModule.h:222
		extern bool sbSchemaLoaded;

	}

}

// CgsAttribSysModule.h:75
struct CgsAttribSys::AttribSysGarbageCollector : public Attrib::IGarbageCollector {
private:
	// CgsAttribSysModule.h:99
	int32_t miTotalFreedSoFar;

public:
	void AttribSysGarbageCollector(const AttribSysGarbageCollector &);

	void AttribSysGarbageCollector();

	// CgsAttribSysModule.h:80
	void Construct();

	// CgsAttribSysModule.h:92
	virtual void ReleaseData(unsigned char, Vault::AssetID, void *, unsigned int);

	virtual void ~AttribSysGarbageCollector();

}

// CgsAttribSysModule.h:75
void CgsAttribSys::AttribSysGarbageCollector::~AttribSysGarbageCollector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysModule.h:112
void CgsAttribSys::AttribSysModule::AttribSysModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysModule.h:75
void CgsAttribSys::AttribSysGarbageCollector::AttribSysGarbageCollector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysModule.h:112
void CgsAttribSys::AttribSysModule::~AttribSysModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysModule {
		// CgsAttribSysModule.h:115
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MEMORY = 1,
			E_PREPARESTAGE_MANAGER = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// CgsAttribSysModule.h:123
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_MEMORY = 2,
			E_RELEASESTAGE_DONE = 3,
		}

	}

	// Declaration
	struct AttribSysGarbageCollector {
	public:
		// CgsAttribSysModule.h:80
		void Construct();

	}

	// CgsAttribSysModule.h:230
	extern CgsAttribSys::AttribSysModule::EPrepareStage operator++(CgsAttribSys::AttribSysModule::EPrepareStage &, int);

}

// CgsAttribSysModule.h:112
struct CgsAttribSys::AttribSysModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsAttribSysModule.h:210
	AttribSysMemoryManager mMemoryManager;

	// CgsAttribSysModule.h:212
	AttribSysDebugComponent mDebugComponent;

	// CgsAttribSysModule.h:214
	CgsAttribSys::AttribSysGarbageCollector mGarbageCollector;

	// CgsAttribSysModule.h:215
	VaultSlot::AttribSysVault * mpSchemaVault;

	// CgsAttribSysModule.h:216
	VaultArray mVaultArray;

	// CgsAttribSysModule.h:219
	CgsAttribSys::AttribSysModule::EPrepareStage mePrepareStage;

	// CgsAttribSysModule.h:220
	CgsAttribSys::AttribSysModule::EReleaseStage meReleaseStage;

	// CgsAttribSysModule.cpp:31
	extern bool sbSchemaLoaded;

	// CgsAttribSysModule.cpp:34
	extern VaultArray * spVaultArray;

public:
	// CgsAttribSysModule.cpp:56
	virtual void Construct();

	// CgsAttribSysModule.cpp:104
	virtual bool Prepare(LinearMalloc *, HeapMalloc *, HeapMalloc *, HeapMalloc *, int32_t);

	// CgsAttribSysModule.cpp:188
	virtual bool Release();

	// CgsAttribSysModule.cpp:245
	virtual void Destruct();

	// CgsAttribSysModule.cpp:269
	virtual void Update(const InputBuffer *);

	// CgsAttribSysModule.cpp:297
	void ProcessInputs(const InputBuffer *);

	// CgsAttribSysModule.h:249
	bool IsSchemaLoaded();

	// CgsAttribSysModule.cpp:535
	const VaultArray * GetVaultArray();

private:
	// CgsAttribSysModule.cpp:360
	void RegisterVault(RegisterVaultRequest *);

	// CgsAttribSysModule.cpp:394
	void RegisterSchema(RegisterSchemaRequest *);

	// CgsAttribSysModule.cpp:460
	void UnregisterVault(UnregisterVaultRequest *);

}

