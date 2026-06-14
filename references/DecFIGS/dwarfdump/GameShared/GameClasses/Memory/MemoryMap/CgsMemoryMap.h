// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct MemoryMap {
		// CgsMemoryMap.h:50
		enum EAllocatorType {
			E_ALLOCATORTYPE_RAW = 0,
			E_ALLOCATORTYPE_LINEAR = 1,
			E_ALLOCATORTYPE_HEAP = 2,
			E_ALLOCATORTYPE_RWLINEAR = 3,
			E_ALLOCATORTYPE_RWHEAP = 4,
		}

	}

}

// CgsMemoryMap.h:45
struct CgsMemory::MemoryMap {
	// CgsMemoryMap.h:48
	extern const int32_t KI_MEMORY_MAP_VERSION;

private:
	// CgsMemoryMap.h:127
	int32_t miVersion;

	// CgsMemoryMap.h:128
	int32_t miPlatform;

	// CgsMemoryMap.h:130
	uint32_t muNumBanks;

	// CgsMemoryMap.h:131
	uint32_t muNumPools;

	// CgsMemoryMap.h:132
	uint32_t muNumRawResources;

	// CgsMemoryMap.h:133
	uint32_t muNumLinearAllocators;

	// CgsMemoryMap.h:134
	uint32_t muNumHeapAllocators;

	// CgsMemoryMap.h:135
	uint32_t muNumRWLinearAllocators;

	// CgsMemoryMap.h:136
	uint32_t muNumRWGeneralAllocators;

	// CgsMemoryMap.h:138
	MemoryMapBank * mpBanks;

	// CgsMemoryMap.h:139
	MemoryMapPool * mpPools;

	// CgsMemoryMap.h:140
	MemoryMapRawResource * mpRawResources;

	// CgsMemoryMap.h:141
	MemoryMapLinearAllocator * mpLinearAllocators;

	// CgsMemoryMap.h:142
	MemoryMapHeapAllocator * mpHeapAllocators;

	// CgsMemoryMap.h:143
	MemoryMapRWLinearAllocator * mpRWLinearAllocators;

	// CgsMemoryMap.h:144
	MemoryMapRWGeneralAllocator * mpRWGeneralAllocators;

public:
	// CgsMemoryMap.h:60
	void FixUp(const Resource &);

	// CgsMemoryMap.h:63
	void FixDown(const Resource &);

	// CgsMemoryMap.h:66
	int32_t GetVersion() const;

	// CgsMemoryMap.h:69
	int32_t GetPlatform() const;

	// CgsMemoryMap.h:72
	const MemoryMapBank * GetRootBank() const;

	// CgsMemoryMap.h:75
	const MemoryMapBank * GetBank(int32_t) const;

	// CgsMemoryMap.h:78
	int32_t GetNumBanks() const;

	// CgsMemoryMap.h:81
	const MemoryMapPool * GetPool(int32_t) const;

	// CgsMemoryMap.h:84
	const MemoryMapPool * GetPool(const char *) const;

	// CgsMemoryMap.h:87
	int32_t GetPoolIndex(const char *) const;

	// CgsMemoryMap.h:90
	const MemoryMapPool * GetPoolById(int32_t) const;

	// CgsMemoryMap.h:93
	int32_t GetNumPools() const;

	// CgsMemoryMap.h:96
	const MemoryMapRawResource * GetRawResource(int32_t) const;

	// CgsMemoryMap.h:99
	int32_t GetNumRawResources() const;

	// CgsMemoryMap.h:102
	const MemoryMapLinearAllocator * GetLinearAllocator(int32_t) const;

	// CgsMemoryMap.h:105
	int32_t GetNumLinearAllocators() const;

	// CgsMemoryMap.h:108
	const MemoryMapHeapAllocator * GetHeapAllocator(int32_t) const;

	// CgsMemoryMap.h:111
	int32_t GetNumHeapAllocators() const;

	// CgsMemoryMap.h:114
	const MemoryMapRWLinearAllocator * GetRWLinearAllocator(int32_t) const;

	// CgsMemoryMap.h:117
	int32_t GetNumRWLinearAllocators() const;

	// CgsMemoryMap.h:120
	const MemoryMapRWGeneralAllocator * GetRWGeneralAllocator(int32_t) const;

	// CgsMemoryMap.h:123
	int32_t GetNumRWGeneralAllocators() const;

}

// CgsLuaState.h:32
namespace CgsMemory {
	// Declaration
	struct MemoryMap {
		// CgsMemoryMap.h:50
		enum EAllocatorType {
			E_ALLOCATORTYPE_RAW = 0,
			E_ALLOCATORTYPE_LINEAR = 1,
			E_ALLOCATORTYPE_HEAP = 2,
			E_ALLOCATORTYPE_RWLINEAR = 3,
			E_ALLOCATORTYPE_RWHEAP = 4,
		}

	}

}

// CgsMemoryMap.h:48
extern const int32_t KI_MEMORY_MAP_VERSION;

