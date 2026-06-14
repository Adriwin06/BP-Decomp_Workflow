// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysMemoryManager.h:48
	const int32_t KI_LINEAR_ALLOC_ALIGNMENT = 16;

	// CgsAttribSysMemoryManager.h:51
	const int32_t KI_ATTRIBSYS_ALLOC_ALIGNMENT = 16;

	// CgsAttribSysMemoryManager.h:52
	const int32_t KI_GAMETALK_ALLOC_ALIGNMENT = 4;

	// CgsAttribSysMemoryManager.h:53
	const int32_t KI_EASTL_ALLOC_ALIGNMENT = 4;

}

// CgsAttribSysMemoryManager.h:70
struct CgsAttribSys::AttribSysMemoryManager {
private:
	// CgsAttribSysMemoryManager.h:122
	extern LinearMalloc * spLinearAllocator;

	// CgsAttribSysMemoryManager.h:125
	extern bool sbHasLinearAllocator;

	// CgsAttribSysMemoryManager.h:128
	extern AttribSysPackageAllocator sAttribSysAllocator;

	// CgsAttribSysMemoryManager.h:129
	extern AttribSysPackageAllocator sGameTalkAllocator;

	// CgsAttribSysMemoryManager.h:130
	extern AttribSysPackageAllocator sEaStlAllocator;

public:
	// CgsAttribSysMemoryManager.h:78
	void Construct();

	// CgsAttribSysMemoryManager.h:86
	bool Prepare(LinearMalloc *, HeapMalloc *, HeapMalloc *, HeapMalloc *);

	// CgsAttribSysMemoryManager.h:90
	bool Release();

	// CgsAttribSysMemoryManager.h:94
	void Destruct();

	// CgsAttribSysMemoryManager.h:101
	AttribSysPackageAllocator * GetAttribSysAllocator();

	// CgsAttribSysMemoryManager.h:105
	AttribSysPackageAllocator * GetGameTalkAllocator();

	// CgsAttribSysMemoryManager.h:109
	AttribSysPackageAllocator * GetEaStlAllocator();

	// CgsAttribSysMemoryManager.h:116
	bool HasMemoryBuffer() const;

}

// CgsAttribSysMemoryManager.h:125
extern bool sbHasLinearAllocator;

// CgsAttribSysMemoryManager.h:128
extern AttribSysPackageAllocator sAttribSysAllocator;

// CgsAttribSysMemoryManager.h:129
extern AttribSysPackageAllocator sGameTalkAllocator;

// CgsAttribSysMemoryManager.h:130
extern AttribSysPackageAllocator sEaStlAllocator;

