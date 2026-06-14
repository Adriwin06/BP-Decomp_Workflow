// _built-in_
namespace std {
	// eh_throw.cc:37
	extern __cxa_exception::unexpected_handler _Unex_handler;

	// eh_throw.cc:38
	extern __cxa_exception::terminate_handler _Term_handler;

}

// _built-in_
namespace __cxxabiv1 {
	// eh_throw.cc:63
	extern void __cxa_throw(void *, std::type_info *, void (*)(void *));

	// eh_throw.cc:85
	extern void __cxa_rethrow();

}

// eh_throw.cc:34
using namespace __cxxabiv1;

// eh_throw.cc:42
void __gxx_exception_cleanup(_Unwind_Reason_Code  code, _Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_throw.cc:44
		__cxa_exception * header;

	}
	__cxxabiv1::__get_exception_header_from_ue(/* parameters */);
}

// eh_throw.cc:37
extern __cxa_exception::unexpected_handler _Unex_handler;

// eh_throw.cc:38
extern __cxa_exception::terminate_handler _Term_handler;

