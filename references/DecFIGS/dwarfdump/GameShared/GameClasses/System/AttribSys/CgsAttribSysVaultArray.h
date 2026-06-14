// CgsAttribSysVaultArray.h:46
struct CgsAttribSys::VaultArray {
private:
	// CgsAttribSysVaultArray.h:95
	VaultSlot * mpaSlots;

	// CgsAttribSysVaultArray.h:96
	Attrib::IGarbageCollector * mpGarbageCollector;

	// CgsAttribSysVaultArray.h:97
	StreamedVaultAllocator mVaultAllocator;

	// CgsAttribSysVaultArray.h:98
	int32_t miNumSlots;

	// CgsAttribSysVaultArray.h:99
	bool mbPrepared;

public:
	// CgsAttribSysVaultArray.h:53
	void Construct(Attrib::IGarbageCollector *);

	// CgsAttribSysVaultArray.h:58
	void Prepare(int32_t, LinearMalloc *);

	// CgsAttribSysVaultArray.h:66
	// Declaration
	void RegisterVault(RegisterVaultRequest *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAttribSysVaultArray.cpp:180
		using namespace CgsDev::Message;

	}

	// CgsAttribSysVaultArray.h:71
	// Declaration
	void UnregisterVault(UnregisterVaultRequest *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAttribSysVaultArray.cpp:218
		using namespace CgsDev::Message;

	}

	// CgsAttribSysVaultArray.h:77
	int32_t GetNumSlots();

private:
	// CgsAttribSysVaultArray.h:92
	int32_t GetFreeSlotIndex(ResourceHandle);

}

