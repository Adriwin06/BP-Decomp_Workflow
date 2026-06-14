// CgsStrStream.h:39
namespace CgsDev {
	// CgsExceptionHandlerPS3.h:34
	namespace Exception {
		// CgsExceptionHandlerPS3.cpp:31
		const int32_t KI_EXCEPTION_HANDLER_PRIORITY = 1001;

		// CgsExceptionHandlerPS3.cpp:41
		CgsExceptionHandlerPS3 * gpExceptionHandler;

	}

}

// CgsExceptionHandlerPS3.cpp:55
void CgsDev::Exception::CgsExceptionHandlerPS3::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsExceptionHandlerPS3.cpp:58
		int32_t lnResult;

	}
}

// CgsExceptionHandlerPS3.cpp:97
void CgsDev::Exception::CgsExceptionHandlerPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsExceptionHandlerPS3.cpp:111
void CgsDev::Exception::CgsExceptionHandlerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsExceptionHandlerPS3.cpp:125
void CgsDev::Exception::CgsExceptionHandlerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsExceptionHandlerPS3.cpp:141
void CgsDev::Exception::CgsExceptionHandlerPS3::GetCallStack(int32_t *  pCallStackOut, int32_t  lnMax, uint64_t *  lpStackPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsExceptionHandlerPS3.cpp:144
		uint64_t link;

		// CgsExceptionHandlerPS3.cpp:145
		CgsDev::Exception::CgsExceptionHandlerPS3::sCellOSLv2StackFrame * stackFrame;

		// CgsExceptionHandlerPS3.cpp:146
		int i;

		// CgsExceptionHandlerPS3.cpp:146
		int j;

	}
}

// CgsExceptionHandlerPS3.cpp:193
void CgsDev::Exception::CgsExceptionHandlerPS3::GetCallStackFromThreadContext(int32_t *  lpStackOut, int  liMaxSize, sys_dbg_ppu_thread_context_t *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsExceptionHandlerPS3.cpp:214
void CgsDev::Exception::CgsExceptionHandlerPS3::ExceptionHandler(uint64_t  lnEPC, sys_ppu_thread_t  lPPUThreadID, uint64_t  lnExceptionType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsExceptionHandlerPS3.cpp:217
		sys_dbg_ppu_thread_context_t ppu_context;

		// CgsExceptionHandlerPS3.cpp:218
		int32_t[30] laiCallstack;

		// CgsExceptionHandlerPS3.cpp:219
		int liStackSize;

		// CgsExceptionHandlerPS3.cpp:220
		char[1024] lacString;

	}
	MapFile::MinimalMemoryReader::SetAsyncronousMode(/* parameters */);
	{
		// CgsExceptionHandlerPS3.cpp:257
		int32_t liIndex;

		{
			// CgsExceptionHandlerPS3.cpp:262
			const char * lpcString;

			// CgsExceptionHandlerPS3.cpp:265
			char[16] lacBuffer;

			// CgsExceptionHandlerPS3.cpp:270
			const char * lpcDecodedString;

		}
	}
}

