void __cxxabiv1::__cxa_free_exception(void *  vptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_alloc.cc:158
		char * ptr;

	}
	{
		// eh_alloc.cc:162
		unsigned int which;

	}
	__gthread_mutex_lock(/* parameters */);
	__gthread_mutex_unlock(/* parameters */);
}

void __cxxabiv1::__cxa_allocate_exception(size_t  thrown_size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// eh_alloc.cc:135
failed:
	{
		// eh_alloc.cc:105
		void * ret;

		// eh_alloc.cc:146
		__cxa_eh_globals * globals;

	}
	{
		// eh_alloc.cc:114
		__gthread_once_t once;

		// eh_alloc.cc:120
		bitmask_type used;

		// eh_alloc.cc:121
		unsigned int which;

		__gthread_once(/* parameters */);
		__gthread_mutex_lock(/* parameters */);
		__gthread_mutex_unlock(/* parameters */);
	}
}

