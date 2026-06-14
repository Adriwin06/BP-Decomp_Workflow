// _built-in_
namespace __cxxabiv1 {
	// eh_globals.cc:102
	extern __cxa_eh_globals * __cxa_get_globals();

	// eh_globals.cc:89
	extern __cxa_eh_globals * __cxa_get_globals_fast();

}

// eh_globals.cc:42
using namespace __cxxabiv1;

// eh_globals.cc:53
void get_globals_dtor(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// eh_globals.cc:72
void get_globals_init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	__gthread_key_create(/* parameters */);
}

// eh_globals.cc:79
void get_globals_init_once() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_globals.cc:81
		__gthread_once_t once;

		__gthread_once(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// eh_globals.cc:46
	__cxa_eh_globals globals_static;

	// eh_globals.cc:49
	__gthread_key_t globals_key;

	// eh_globals.cc:50
	int use_thread_key;

}

