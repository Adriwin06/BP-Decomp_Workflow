// _built-in_
namespace std {
	// eh_catch.cc:136
	extern bool uncaught_exception();

}

// _built-in_
namespace __cxxabiv1 {
	// eh_catch.cc:47
	extern void * __cxa_begin_catch(void *);

	// eh_catch.cc:93
	extern void __cxa_end_catch();

	// eh_catch.cc:37
	extern void * __cxa_get_exception_ptr(void *);

}

// eh_catch.cc:34
using namespace __cxxabiv1;

