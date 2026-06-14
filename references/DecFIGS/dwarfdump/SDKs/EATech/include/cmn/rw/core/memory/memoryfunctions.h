// memoryfunctions.h:101
typedef RwMemoryFunctions RwMemoryFunctions;

// memoryfunctions.h:125
struct RwMemoryFunctions {
	// memoryfunctions.h:126
	RwMallocFunc rwmalloc;

	// memoryfunctions.h:127
	RwReallocFunc rwrealloc;

	// memoryfunctions.h:128
	RwFreeFunc rwfree;

}

// memoryfunctions.h:113
typedef void *(*)(size_t) RwMallocFunc;

// memoryfunctions.h:114
typedef void *(*)(void *, size_t) RwReallocFunc;

// memoryfunctions.h:116
typedef void (*)(void *) RwFreeFunc;

// _built-in_
namespace :: {
	// memoryfunctions.h:137
	extern RwMemoryFunctions rwMemoryFunctions;

}

// memoryfunctions.h:137
extern RwMemoryFunctions rwMemoryFunctions;

