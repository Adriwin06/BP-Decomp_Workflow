// CgsStrStream.h:39
namespace CgsDev {
	// CgsAssert.h:244
	namespace Assert {
		// CgsAssertManager.h:43
		const int32_t KI_MESSAGEBUFFERSIZE = 256;

	}

}

// CgsAssertManager.h:58
struct CgsDev::Assert::AssertData {
	// CgsStackUnpickPS3.h:59
	typedef StackUnpickPS3 StackUnpick;

	// CgsAssertManager.h:60
	AssertData::StackUnpick mStack;

	// CgsAssertManager.h:61
	CgsDev::MapFile::Reader * mpMapReader;

	// CgsAssertManager.h:62
	char[256] macAssertMessage;

	// CgsAssertManager.h:63
	const char * mpcFile;

	// CgsAssertManager.h:64
	int32_t miLine;

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct TimerRequests;

	struct TimerRequestInterface;

}

// CgsAssertManager.h:128
extern CgsDev::Debug2DImmediateRender * mpRender;

// CgsAssertManager.h:129
extern CgsDev::MapFile::Reader * mpMapFileReader;

// CgsAssertManager.h:130
extern const char * mpcMapFileName;

// CgsAssertManager.h:131
extern CgsSystem::ThreadLayout * mpThreadLayout;

// CgsAssertManager.h:143
extern const int32_t KI_MAX_LINE_LENGTH;

// CgsAssertManager.h:58
struct CgsDev::Assert::AssertData {
	// CgsAssertManager.h:60
	CgsExceptionHandlerPS3::StackUnpick mStack;

	// CgsAssertManager.h:61
	CgsDev::MapFile::Reader * mpMapReader;

	// CgsAssertManager.h:62
	char[256] macAssertMessage;

	// CgsAssertManager.h:63
	const char * mpcFile;

	// CgsAssertManager.h:64
	int32_t miLine;

}

// CgsAssertManager.h:102
struct CgsDev::Assert::Manager {
protected:
	// CgsAssertManager.h:128
	extern CgsDev::Debug2DImmediateRender * mpRender;

	// CgsAssertManager.h:129
	extern CgsDev::MapFile::Reader * mpMapFileReader;

	// CgsAssertManager.h:130
	extern const char * mpcMapFileName;

	// CgsAssertManager.h:131
	extern CgsSystem::ThreadLayout * mpThreadLayout;

	// CgsAssertManager.h:134
	CgsDev::Assert::AssertHandler * mpAssertHandlerList;

	// CgsAssertManager.h:135
	AssertData mCurrentAssert;

	// CgsAssertManager.h:136
	VectorFont mVectorFont;

	// CgsAssertManager.h:138
	bool mbInitialised;

	// CgsAssertManager.h:139
	bool mbGotAssert;

	// CgsAssertManager.h:140
	int16_t miDrawPositionY;

	// CgsAssertManager.h:143
	extern const int32_t KI_MAX_LINE_LENGTH;

public:
	// CgsAssertManager.h:106
	void Manager();

	// CgsAssertManager.h:111
	void RenderThreadAsserts();

	// CgsAssertManager.h:114
	void RegisterAssertHandler(CgsDev::Assert::AssertHandler *);

	// CgsAssertManager.h:117
	void SetRenderer(CgsDev::Debug2DImmediateRender *);

	// CgsAssertManager.h:120
	void SetMapFileReader(CgsDev::MapFile::Reader *, const char *);

	// CgsAssertManager.h:123
	void SetThreadLayout(CgsSystem::ThreadLayout *);

protected:
	// CgsAssertManager.h:150
	void HandleAssert(const char *, const char *, int32_t);

	// CgsAssertManager.h:154
	void DoAssert();

	// CgsAssertManager.h:157
	void InitialiseMapFileReader();

	// CgsAssertManager.h:160
	void ExecuteAssertHandlers();

	// CgsAssertManager.h:163
	bool Freeze();

	// CgsAssertManager.h:166
	void ClearCurrentAssert();

	// CgsAssertManager.h:171
	bool CanRenderAssert();

	// CgsAssertManager.h:174
	void DisplayAssertScreen();

	// CgsAssertManager.h:177
	void DisplayCurrentAssert();

	// CgsAssertManager.h:180
	void DisplayCallstack();

	// CgsAssertManager.h:183
	void DrawLine(const char *);

	// CgsAssertManager.h:186
	void DrawLines(const char *);

	// CgsAssertManager.h:189
	void DrawText(int32_t, int32_t, const char *);

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct DateAndTime;

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct DateAndTime;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct IThreadClass;

	struct FrameRateTypeRequestInterface;

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

	struct Time;

	struct DateAndTime;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

}

// CgsAssertManager.h:102
struct CgsDev::Assert::Manager {
protected:
	// CgsAssertManager.h:128
	extern CgsDev::Debug2DImmediateRender * mpRender;

	// CgsAssertManager.h:129
	extern CgsDev::MapFile::Reader * mpMapFileReader;

	// CgsAssertManager.h:130
	extern const char * mpcMapFileName;

	// CgsAssertManager.h:131
	extern CgsSystem::ThreadLayout * mpThreadLayout;

	// CgsAssertManager.h:134
	CgsDev::Assert::AssertHandler * mpAssertHandlerList;

	// CgsAssertManager.h:135
	AssertData mCurrentAssert;

	// CgsAssertManager.h:136
	VectorFont mVectorFont;

	// CgsAssertManager.h:138
	bool mbInitialised;

	// CgsAssertManager.h:139
	bool mbGotAssert;

	// CgsAssertManager.h:140
	int16_t miDrawPositionY;

	// CgsAssertManager.h:143
	extern const int32_t KI_MAX_LINE_LENGTH;

public:
	// CgsAssertManager.h:106
	void Manager();

	// CgsAssertManager.h:111
	void RenderThreadAsserts();

	// CgsAssertManager.h:114
	void RegisterAssertHandler(CgsDev::Assert::AssertHandler *);

	// CgsAssertManager.h:117
	void SetRenderer(CgsDev::Debug2DImmediateRender *);

	// CgsAssertManager.h:120
	void SetMapFileReader(CgsDev::MapFile::Reader *, const char *);

	// CgsAssertManager.h:123
	void SetThreadLayout(CgsSystem::ThreadLayout *);

protected:
	// CgsAssertManager.h:150
	// Declaration
	void HandleAssert(const char *, const char *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAssertManager.cpp:299
		using namespace Message;

		// CgsAssertManager.cpp:329
		using namespace Message;

		// CgsAssertManager.cpp:335
		using namespace Message;

	}

	// CgsAssertManager.h:154
	// Declaration
	void DoAssert() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAssertManager.cpp:373
		using namespace Message;

		// CgsAssertManager.cpp:399
		using namespace Message;

		// CgsAssertManager.cpp:401
		using namespace Message;

	}

	// CgsAssertManager.h:157
	void InitialiseMapFileReader();

	// CgsAssertManager.h:160
	void ExecuteAssertHandlers();

	// CgsAssertManager.h:163
	bool Freeze();

	// CgsAssertManager.h:166
	void ClearCurrentAssert();

	// CgsAssertManager.h:171
	bool CanRenderAssert();

	// CgsAssertManager.h:174
	void DisplayAssertScreen();

	// CgsAssertManager.h:177
	void DisplayCurrentAssert();

	// CgsAssertManager.h:180
	void DisplayCallstack();

	// CgsAssertManager.h:183
	void DrawLine(const char *);

	// CgsAssertManager.h:186
	void DrawLines(const char *);

	// CgsAssertManager.h:189
	void DrawText(int32_t, int32_t, const char *);

}

// CgsAssertManager.h:30
namespace CgsSystem {
	struct ThreadLayout;

	struct IThreadClass;

}

// CgsAssertManager.h:77
struct CgsDev::Assert::AssertHandler {
	int (*)(...) * _vptr.AssertHandler;

private:
	// CgsAssertManager.h:87
	CgsDev::Assert::AssertHandler * mpNext;

public:
	void AssertHandler(const AssertHandler &);

	void AssertHandler();

	// CgsAssertManager.h:81
	virtual void OnAssert(AssertData &);

}

// CgsAssertManager.h:77
void CgsDev::Assert::AssertHandler::AssertHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

