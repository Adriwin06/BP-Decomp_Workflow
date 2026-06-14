// CgsStrStream.h:39
namespace CgsDev {
	// CgsExceptionHandlerPS3.h:34
	namespace Exception {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsExceptionHandlerPS3.h:34
	namespace Exception {
		struct CgsExceptionHandlerPS3;

	}

}

// CgsExceptionHandlerPS3.h:45
struct CgsDev::Exception::CgsExceptionHandlerPS3 {
private:
	// CgsExceptionHandlerPS3.h:73
	CgsDev::MapFile::MinimalMemoryReader mMapFileReader;

	// Unknown accessibility
	// CgsStackUnpickPS3.h:59
	typedef StackUnpickPS3 StackUnpick;

	// CgsExceptionHandlerPS3.h:74
	CgsExceptionHandlerPS3::StackUnpick mStackUnpick;

public:
	// CgsExceptionHandlerPS3.h:48
	void Construct();

	// CgsExceptionHandlerPS3.h:51
	bool Prepare();

	// CgsExceptionHandlerPS3.h:54
	bool Release();

	// CgsExceptionHandlerPS3.h:57
	void Destruct();

private:
	// CgsExceptionHandlerPS3.h:80
	void ExceptionHandler(uint64_t, sys_ppu_thread_t, uint64_t);

	// CgsExceptionHandlerPS3.h:86
	int32_t GetCallStackFromThreadContext(int32_t *, int32_t, sys_dbg_ppu_thread_context_t *);

	// CgsExceptionHandlerPS3.h:92
	int32_t GetCallStack(int32_t *, int32_t, uint64_t *);

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsExceptionHandlerPS3.h:34
	namespace Exception {
		// Declaration
		struct CgsExceptionHandlerPS3 {
			// CgsExceptionHandlerPS3.h:61
			struct sCellOSLv2StackFrame {
				// CgsExceptionHandlerPS3.h:62
				uint64_t backChain;

				// CgsExceptionHandlerPS3.h:63
				uint64_t conditionRegisterSave;

				// CgsExceptionHandlerPS3.h:64
				uint64_t linkRegisterSave;

				// CgsExceptionHandlerPS3.h:65
				uint64_t compilerDoubleWord;

				// CgsExceptionHandlerPS3.h:66
				uint64_t linkEditorDoubleWord;

				// CgsExceptionHandlerPS3.h:67
				uint64_t tocSaveArea;

			}

		}

	}

}

// CgsExceptionHandlerPS3.h:45
struct CgsDev::Exception::CgsExceptionHandlerPS3 {
private:
	// CgsExceptionHandlerPS3.h:73
	CgsDev::MapFile::MinimalMemoryReader mMapFileReader;

	// CgsExceptionHandlerPS3.h:74
	AssertData::StackUnpick mStackUnpick;

public:
	// CgsExceptionHandlerPS3.h:48
	void Construct();

	// CgsExceptionHandlerPS3.h:51
	bool Prepare();

	// CgsExceptionHandlerPS3.h:54
	bool Release();

	// CgsExceptionHandlerPS3.h:57
	void Destruct();

private:
	// CgsExceptionHandlerPS3.h:80
	void ExceptionHandler(uint64_t, sys_ppu_thread_t, uint64_t);

	// CgsExceptionHandlerPS3.h:86
	int32_t GetCallStackFromThreadContext(int32_t *, int32_t, sys_dbg_ppu_thread_context_t *);

	// CgsExceptionHandlerPS3.h:92
	int32_t GetCallStack(int32_t *, int32_t, uint64_t *);

}

