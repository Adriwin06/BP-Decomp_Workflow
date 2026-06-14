// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysPackageAllocator {
		// CgsAttribSysPackageAllocator.h:68
		enum EAttribSysUserPackage {
			E_PACKAGE_ATTRIBSYS = 0,
			E_PACKAGE_GAMETALK = 1,
			E_PACKAGE_EASTL = 2,
		}

	}

	struct AttribSysMemoryManager;

	// CgsAttribSysPackageAllocator.h:36
	const int32_t KI_DEFAULT_ALIGNMENT = 16;

}

// CgsAttribSysPackageAllocator.h:64
struct CgsAttribSys::AttribSysPackageAllocator {
private:
	// CgsAttribSysPackageAllocator.h:156
	HeapMalloc * mpHeapAllocator;

	// CgsAttribSysPackageAllocator.h:157
	bool mbHasAllocator;

	// CgsAttribSysPackageAllocator.h:159
	CgsAttribSys::AttribSysPackageAllocator::EAttribSysUserPackage meUserPackage;

	// CgsAttribSysPackageAllocator.h:161
	int32_t miAllocTotal;

	// CgsAttribSysPackageAllocator.h:162
	int32_t miFreeTotal;

	// CgsAttribSysPackageAllocator.h:163
	int32_t miAlignment;

public:
	// CgsAttribSysPackageAllocator.h:83
	void Construct(CgsAttribSys::AttribSysPackageAllocator::EAttribSysUserPackage);

	// CgsAttribSysPackageAllocator.h:89
	bool Prepare(HeapMalloc *, int32_t);

	// CgsAttribSysPackageAllocator.h:93
	void Destruct();

	// CgsAttribSysPackageAllocator.h:97
	bool Release();

	// CgsAttribSysPackageAllocator.h:108
	void * Malloc(size_t, int);

	// CgsAttribSysPackageAllocator.h:114
	void * Malloc(int32_t, const char *);

	// CgsAttribSysPackageAllocator.h:122
	void * MallocAligned(size_t, size_t, size_t, int);

	// CgsAttribSysPackageAllocator.h:132
	void Free(void *);

	// CgsAttribSysPackageAllocator.h:138
	void Free(void *, size_t);

	// CgsAttribSysPackageAllocator.h:145
	void Free(void *, int32_t, const char *);

private:
	// CgsAttribSysPackageAllocator.h:152
	const char * GetUserPackageName();

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysPackageAllocator {
		// CgsAttribSysPackageAllocator.h:68
		enum EAttribSysUserPackage {
			E_PACKAGE_ATTRIBSYS = 0,
			E_PACKAGE_GAMETALK = 1,
			E_PACKAGE_EASTL = 2,
		}

	}

	struct AttribSysCollectionKey;

	// CgsAttribSysPackageAllocator.h:36
	const int32_t KI_DEFAULT_ALIGNMENT = 16;

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysPackageAllocator {
		// CgsAttribSysPackageAllocator.h:68
		enum EAttribSysUserPackage {
			E_PACKAGE_ATTRIBSYS = 0,
			E_PACKAGE_GAMETALK = 1,
			E_PACKAGE_EASTL = 2,
		}

	}

	// CgsAttribSysPackageAllocator.h:36
	const int32_t KI_DEFAULT_ALIGNMENT = 16;

}

// CgsAttribSysPackageAllocator.h:64
struct CgsAttribSys::AttribSysPackageAllocator {
private:
	// CgsAttribSysPackageAllocator.h:156
	CgsMemory::HeapMalloc * mpHeapAllocator;

	// CgsAttribSysPackageAllocator.h:157
	bool mbHasAllocator;

	// CgsAttribSysPackageAllocator.h:159
	CgsAttribSys::AttribSysPackageAllocator::EAttribSysUserPackage meUserPackage;

	// CgsAttribSysPackageAllocator.h:161
	int32_t miAllocTotal;

	// CgsAttribSysPackageAllocator.h:162
	int32_t miFreeTotal;

	// CgsAttribSysPackageAllocator.h:163
	int32_t miAlignment;

public:
	// CgsAttribSysPackageAllocator.h:83
	void Construct(CgsAttribSys::AttribSysPackageAllocator::EAttribSysUserPackage);

	// CgsAttribSysPackageAllocator.h:89
	bool Prepare(CgsMemory::HeapMalloc *, int32_t);

	// CgsAttribSysPackageAllocator.h:93
	void Destruct();

	// CgsAttribSysPackageAllocator.h:97
	bool Release();

	// CgsAttribSysPackageAllocator.h:108
	void * Malloc(size_t, int);

	// CgsAttribSysPackageAllocator.h:114
	void * Malloc(int32_t, const char *);

	// CgsAttribSysPackageAllocator.h:122
	void * MallocAligned(size_t, size_t, size_t, int);

	// CgsAttribSysPackageAllocator.h:132
	void Free(void *);

	// CgsAttribSysPackageAllocator.h:138
	void Free(void *, size_t);

	// CgsAttribSysPackageAllocator.h:145
	void Free(void *, int32_t, const char *);

private:
	// CgsAttribSysPackageAllocator.h:152
	const char * GetUserPackageName();

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysPackageAllocator {
		// CgsAttribSysPackageAllocator.h:68
		enum EAttribSysUserPackage {
			E_PACKAGE_ATTRIBSYS = 0,
			E_PACKAGE_GAMETALK = 1,
			E_PACKAGE_EASTL = 2,
		}

	}

	struct AttribSysCollectionKey;

	struct AttribSysGarbageCollector;

	// Declaration
	struct AttribSysDebugComponent {
	public:
		AttribSysDebugComponent();

	}

	// CgsAttribSysPackageAllocator.h:36
	const int32_t KI_DEFAULT_ALIGNMENT = 16;

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// Declaration
	struct AttribSysPackageAllocator {
		// CgsAttribSysPackageAllocator.h:68
		enum EAttribSysUserPackage {
			E_PACKAGE_ATTRIBSYS = 0,
			E_PACKAGE_GAMETALK = 1,
			E_PACKAGE_EASTL = 2,
		}

	}

	struct AttribSysMemoryManager;

	struct VaultSlot;

	struct StreamedVaultAllocator;

	struct VaultArray;

	struct AttribSysCollectionKey;

	struct AttribSysDebugComponent;

	// CgsAttribSysPackageAllocator.h:36
	const int32_t KI_DEFAULT_ALIGNMENT = 16;

}

