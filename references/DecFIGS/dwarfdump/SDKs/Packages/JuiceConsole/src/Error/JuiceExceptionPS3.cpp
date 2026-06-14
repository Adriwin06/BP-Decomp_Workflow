// JuiceExceptionPS3.cpp:103
extern void GetPS3CallStack(void **  pReturnAddressArray, size_t  nReturnAddressArrayLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceExceptionPS3.cpp:105
		uint64_t framePtr;

		// JuiceExceptionPS3.cpp:106
		uint64_t ra;

		// JuiceExceptionPS3.cpp:107
		uint64_t counter;

	}
}

// JuiceExceptionPS3.cpp:43
extern void JuiceTrapHandlerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceExceptionPS3.cpp:48
		int ret;

	}
}

// JuiceExceptionPS3.cpp:76
extern void GetPS3CallStack(void **  pReturnAddressArray, size_t  nReturnAddressArrayLength, uint64_t  pBaseCallstack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceExceptionPS3.cpp:78
		uint64_t framePtr;

		// JuiceExceptionPS3.cpp:79
		uint64_t ra;

		// JuiceExceptionPS3.cpp:80
		uint64_t counter;

	}
}

// JuiceExceptionPS3.cpp:129
extern char * GetExceptionType(int  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceExceptionPS3.cpp:131
		char * type;

	}
}

// JuiceExceptionPS3.cpp:145
extern void JuiceTrapHandler(uint64_t  id, sys_ppu_thread_t  thread_id, uint64_t  dar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceExceptionPS3.cpp:148
		sys_dbg_ppu_thread_context_t ppu_context;

		// JuiceExceptionPS3.cpp:151
		char * exceptionType;

		// JuiceExceptionPS3.cpp:154
		const uint64_t depth;

		// JuiceExceptionPS3.cpp:155
		int count;

		// JuiceExceptionPS3.cpp:156
		uint32_t[32] rawStackValues;

		// JuiceExceptionPS3.cpp:157
		uint32_t[32] cleanedStackValues;

	}
}

// _built-in_
namespace :: {
	// JuiceExceptionPS3.cpp:19
	extern char * PS3ExcTrap;

	// JuiceExceptionPS3.cpp:20
	extern char * PS3ExcPrevInstr;

	// JuiceExceptionPS3.cpp:21
	extern char * PS3ExcIllegalInstr;

	// JuiceExceptionPS3.cpp:22
	extern char * PS3ExcTextHtab;

	// JuiceExceptionPS3.cpp:23
	extern char * PS3ExcTextSlb;

	// JuiceExceptionPS3.cpp:24
	extern char * PS3ExcDataHtab;

	// JuiceExceptionPS3.cpp:25
	extern char * PS3ExcDataSlb;

	// JuiceExceptionPS3.cpp:26
	extern char * PS3ExcFloat;

	// JuiceExceptionPS3.cpp:27
	extern char * PS3ExcDabr;

	// JuiceExceptionPS3.cpp:28
	extern char * PS3ExcAlignment;

	// JuiceExceptionPS3.cpp:36
	extern short unsigned int juiceTrapInit;

}

