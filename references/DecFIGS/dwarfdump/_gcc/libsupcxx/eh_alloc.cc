// _built-in_
namespace __cxxabiv1 {
	// eh_alloc.cc:156
	extern void __cxa_free_exception(void *);

	// eh_alloc.cc:103
	extern void * __cxa_allocate_exception(size_t);

}

// eh_alloc.cc:43
using std::free;

// eh_alloc.cc:48
using namespace __cxxabiv1;

// eh_alloc.cc:74
typedef unsigned int bitmask_type;

// eh_alloc.cc:94
void emergency_mutex_init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// _built-in_
namespace :: {
	// eh_alloc.cc:81
	char[32][512] emergency_buffer;

	// eh_alloc.cc:82
	bitmask_type emergency_used;

	// eh_alloc.cc:89
	__gthread_mutex_t emergency_mutex;

}

