// memoryalignedfunctions.h:70
typedef RwMemoryAlignedFunctions RwMemoryAlignedFunctions;

// memoryalignedfunctions.h:94
struct RwMemoryAlignedFunctions {
	// memoryalignedfunctions.h:95
	RwMallocAlignedFunc rwMallocAligned;

	// memoryalignedfunctions.h:96
	RwReallocAlignedFunc rwReallocAligned;

	// memoryalignedfunctions.h:97
	RwFreeAlignedFunc rwFreeAligned;

}

// memoryalignedfunctions.h:82
typedef void *(*)(size_t, size_t) RwMallocAlignedFunc;

// memoryalignedfunctions.h:83
typedef void *(*)(void *, size_t, size_t) RwReallocAlignedFunc;

// memoryalignedfunctions.h:85
typedef void (*)(void *) RwFreeAlignedFunc;

// _built-in_
namespace :: {
	// memoryalignedfunctions.h:105
	extern RwMemoryAlignedFunctions rwMemoryAlignedFunctions;

}

// memoryalignedfunctions.h:105
extern RwMemoryAlignedFunctions rwMemoryAlignedFunctions;

