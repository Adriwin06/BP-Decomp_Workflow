void __cxxabiv1::__get_exception_header_from_ue(_Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __cxxabiv1::__get_exception_header_from_obj(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __cxxabiv1::__cxa_throw(void *  obj, std::type_info *  tinfo, void (*)(void *)  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_throw.cc:65
		__cxa_exception * header;

		__get_exception_header_from_obj(/* parameters */);
	}
}

void __cxxabiv1::__cxa_rethrow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_throw.cc:87
		__cxa_eh_globals * globals;

		// eh_throw.cc:88
		__cxa_exception * header;

	}
}

