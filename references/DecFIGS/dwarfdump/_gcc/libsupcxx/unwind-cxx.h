// _built-in_
namespace __cxxabiv1 {
	// unwind-cxx.h:138
	const _Unwind_Exception_Class __gxx_exception_class = 1126902528;

}

// unwind-cxx.h:53
struct __cxxabiv1::__cxa_exception {
	// unwind-cxx.h:55
	std::type_info * exceptionType;

	// unwind-cxx.h:56
	void (*)(void *) exceptionDestructor;

	// exception:173
	typedef void (*)() unexpected_handler;

	// unwind-cxx.h:60
	__cxa_exception::unexpected_handler unexpectedHandler;

	// exception:172
	typedef void (*)() terminate_handler;

	// unwind-cxx.h:61
	__cxa_exception::terminate_handler terminateHandler;

	// unwind-cxx.h:64
	__cxa_exception * nextException;

	// unwind-cxx.h:68
	int handlerCount;

	// unwind-cxx.h:72
	int handlerSwitchValue;

	// unwind-cxx.h:73
	const unsigned char * actionRecord;

	// unwind-cxx.h:74
	const unsigned char * languageSpecificData;

	// unwind-cxx.h:75
	_Unwind_Ptr catchTemp;

	// unwind-cxx.h:76
	void * adjustedPtr;

	// unwind-cxx.h:79
	_Unwind_Exception unwindHeader;

}

// unwind-cxx.h:84
struct __cxxabiv1::__cxa_eh_globals {
	// unwind-cxx.h:85
	__cxa_exception * caughtExceptions;

	// unwind-cxx.h:86
	unsigned int uncaughtExceptions;

}

// _built-in_
namespace __cxxabiv1 {
	// unwind-cxx.h:167
	__cxa_exception * __get_exception_header_from_ue(_Unwind_Exception *);

	// unwind-cxx.h:138
	const _Unwind_Exception_Class __gxx_exception_class = 1126902528;

}

// _built-in_
namespace __cxxabiv1 {
	// unwind-cxx.h:167
	__cxa_exception * __get_exception_header_from_ue(_Unwind_Exception *);

	// unwind-cxx.h:160
	__cxa_exception * __get_exception_header_from_obj(void *);

	// unwind-cxx.h:138
	const _Unwind_Exception_Class __gxx_exception_class = 1126902528;

}

