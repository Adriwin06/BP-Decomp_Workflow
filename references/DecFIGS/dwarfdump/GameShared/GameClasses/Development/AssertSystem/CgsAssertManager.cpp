// CgsStrStream.h:39
namespace CgsDev {
	// CgsAssert.h:244
	namespace Assert {
		// CgsAssertManager.cpp:174
		extern void BeginAssert();

		// CgsAssertManager.cpp:191
		extern void EndAssert();

		// CgsAssertManager.cpp:141
		extern void FireAssert(const char *, const char *, int32_t);

		// CgsAssertManager.cpp:106
		extern void Construct();

		// CgsAssertManager.cpp:83
		extern char * gpcMessageBuffer;

		// CgsAssertManager.cpp:84
		extern int32_t giMessageBufferSize;

		// CgsAssertManager.cpp:56
		const float32_t KF_VECTOR_FONT_SIZE;

		// CgsAssertManager.cpp:67
		extern Manager gManager;

		// CgsAssertManager.cpp:79
		char[256] gacAssertMessageBuffer;

		// CgsAssertManager.cpp:87
		extern DebugCriticalSection gAssertMutex;

	}

}

// CgsAssertManager.cpp:349
void CgsDev::Assert::Manager::CanRenderAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:434
void CgsDev::Assert::Manager::InitialiseMapFileReader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:458
void CgsDev::Assert::Manager::ExecuteAssertHandlers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:461
		CgsDev::Assert::AssertHandler * lpHandler;

	}
}

// CgsAssertManager.cpp:725
void CgsDev::Assert::Manager::Freeze() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:749
void CgsDev::Assert::Manager::ClearCurrentAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:207
void CgsDev::Assert::Manager::Manager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:365
void CgsDev::Assert::Manager::DoAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:374
		int32_t liIndex;

	}
	StrStreamBase::operator<<(/* parameters */);
	{
		// CgsAssertManager.cpp:379
		const char * lpcString;

		// CgsAssertManager.cpp:382
		char[16] lacBuffer;

		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsAssertManager.cpp:390
		const char * lpcDecodedString;

	}
	StrStreamBase::operator<<(/* parameters */);
}

// CgsAssertManager.cpp:296
void CgsDev::Assert::Manager::HandleAssert(const char *  lpcMessage, const char *  lpcFile, int32_t  liLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
}

// CgsAssertManager.cpp:251
void CgsDev::Assert::Manager::RegisterAssertHandler(CgsDev::Assert::AssertHandler *  lpAssertHandler) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:265
		CgsDev::Assert::AssertHandler * lpList;

	}
}

// CgsAssertManager.cpp:706
void CgsDev::Assert::Manager::DrawText(int32_t  liX, int32_t  liY, const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:631
void CgsDev::Assert::Manager::DrawLine(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:655
void CgsDev::Assert::Manager::DrawLines(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:664
		char[51] lacLine;

	}
	{
		// CgsAssertManager.cpp:668
		int32_t liLength;

	}
}

// CgsAssertManager.cpp:585
void CgsDev::Assert::Manager::DisplayCallstack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:593
		int32_t liIndex;

	}
	{
		// CgsAssertManager.cpp:598
		const char * lpcString;

		// CgsAssertManager.cpp:601
		char[16] lacBuffer;

		{
			// CgsAssertManager.cpp:609
			const char * lpcDecodedString;

		}
	}
}

// CgsAssertManager.cpp:552
void CgsDev::Assert::Manager::DisplayCurrentAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAssertManager.cpp:555
		char[32] lacThread;

		// CgsAssertManager.cpp:559
		char[128] lacHeading;

		// CgsAssertManager.cpp:563
		char[32] lacLine;

	}
}

// CgsAssertManager.cpp:485
void CgsDev::Assert::Manager::DisplayAssertScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VectorFont::SetRenderer(/* parameters */);
	{
		// CgsAssertManager.cpp:513
		Matrix44 lMatrix;

		// CgsAssertManager.cpp:516
		Vector3 lCameraPos;

	}
}

// CgsAssertManager.cpp:226
void CgsDev::Assert::Manager::RenderThreadAsserts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAssertManager.cpp:72
// CgsAssertManager.cpp:75
// CgsAssertManager.cpp:76
// CgsAssertManager.cpp:69
// CgsAssertManager.cpp:55
