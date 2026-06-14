// CgsAttribSysVaultSlot.h:62
struct CgsAttribSys::VaultSlot {
private:
	// CgsAttribSysVaultSlot.h:150
	ID mResourceId;

	// Unknown accessibility
	// CgsAttribSysVaultSlot.h:47
	typedef Vault AttribSysVault;

	// CgsAttribSysVaultSlot.h:151
	VaultSlot::AttribSysVault * mpVault;

	// CgsAttribSysVaultSlot.h:152
	int32_t miRefCount;

	// CgsAttribSysVaultSlot.h:153
	int32_t miStreamedVaultIndex;

	// CgsAttribSysVaultSlot.h:156
	extern CgsAttribSys::StreamedVaultAllocator * spVaultAllocator;

public:
	// CgsAttribSysVaultSlot.h:66
	void Construct();

	// CgsAttribSysVaultSlot.h:70
	void Prepare(LinearMalloc *);

	// CgsAttribSysVaultSlot.h:79
	int32_t RegisterVault(const RegisterVaultRequest *, Attrib::IGarbageCollector *);

	// CgsAttribSysVaultSlot.h:84
	int32_t UnregisterVault(const UnregisterVaultRequest *);

	// CgsAttribSysVaultSlot.h:92
	bool ContainsVaultResource(ResourceHandle) const;

	// CgsAttribSysVaultSlot.h:96
	bool IsOccupied() const;

	// CgsAttribSysVaultSlot.h:100
	int32_t GetRefCount();

	// CgsAttribSysVaultSlot.h:104
	bool ContainsStreamedVault() const;

	// CgsAttribSysVaultSlot.h:109
	void SetVaultAllocator(CgsAttribSys::StreamedVaultAllocator *);

	// CgsAttribSysVaultSlot.h:112
	ID GetResourceId() const;

	// CgsAttribSysVaultSlot.h:116
	int32_t GetStreamedVaultIndex();

private:
	// CgsAttribSysVaultSlot.h:125
	// Declaration
	void DoLoad(const RegisterVaultRequest *, Attrib::IGarbageCollector *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAttribSysVaultSlot.cpp:240
		using namespace CgsDev::Message;

	}

	// CgsAttribSysVaultSlot.h:129
	// Declaration
	void DoUnload() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAttribSysVaultSlot.cpp:291
		using namespace CgsDev::Message;

	}

	// CgsAttribSysVaultSlot.h:133
	void IncreaseRefCount();

	// CgsAttribSysVaultSlot.h:137
	void DecreaseRefCount();

	// CgsAttribSysVaultSlot.h:141
	CgsAttribSys::StreamedVaultAllocator * GetVaultAllocator();

}

