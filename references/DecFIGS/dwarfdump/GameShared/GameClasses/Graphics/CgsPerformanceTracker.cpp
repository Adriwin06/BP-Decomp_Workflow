// CgsPerformanceTracker.cpp:23
void CgsGraphics::PerformanceTracker::Startup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:71
void CgsGraphics::PerformanceTracker::Shutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:95
void CgsGraphics::PerformanceTracker::GetDiagnosticLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:101
void CgsGraphics::PerformanceTracker::SetDiagnosticLevel(int  liNewLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:107
void CgsGraphics::PerformanceTracker::BeginFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:112
void CgsGraphics::PerformanceTracker::EndFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:216
void CgsGraphics::PerformanceTracker::GetCounter(CgsGraphics::PerformanceTracker::CounterType  lCounterType, CgsGraphics::PerformanceTracker::CounterUsage  lCounterUsage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:224
		CgsGraphics::PerformanceTracker::Counter sDummyCounter;

	}
}

// CgsPerformanceTracker.cpp:163
void CgsGraphics::PerformanceTracker::ResetCounterPeaks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:165
		int lCounterType;

		{
			// CgsPerformanceTracker.cpp:167
			int lCounterUsage;

		}
	}
}

// CgsPerformanceTracker.cpp:178
void CgsGraphics::PerformanceTracker::AdjustCounter(CgsGraphics::PerformanceTracker::CounterType  lCounterType, CgsGraphics::PerformanceTracker::CounterUsage  lCounterUsage, int32_t  lIncrement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:229
void CgsGraphics::PerformanceTracker::TraceSummary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:321
void CgsGraphics::PerformanceTracker::GetCounterInfo(CgsGraphics::PerformanceTracker::CounterType  lCounterType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:328
		CgsGraphics::PerformanceTracker::CounterInfo sDummyCounterInfo;

	}
}

// CgsPerformanceTracker.cpp:334
void CgsGraphics::PerformanceTracker::TraceSummaryOnNextFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:392
void CgsGraphics::PerformanceTracker::GetIncrementSinceSnapshot(CgsGraphics::PerformanceTracker::CounterType  lCounterType, CgsGraphics::PerformanceTracker::CounterUsage  lCounterUsage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:394
		const CgsGraphics::PerformanceTracker::Counter & lCounter;

	}
}

// CgsPerformanceTracker.cpp:370
void CgsGraphics::PerformanceTracker::TakeSnapshot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:372
		int lCounterType;

		{
			// CgsPerformanceTracker.cpp:374
			int lCounterUsage;

			{
				// CgsPerformanceTracker.cpp:376
				const CgsGraphics::PerformanceTracker::Counter & lCounter;

			}
		}
	}
}

// CgsPerformanceTracker.cpp:384
void CgsGraphics::PerformanceTracker::GetCounterName(CgsGraphics::PerformanceTracker::CounterType  lCounterType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerformanceTracker.cpp:342
void CgsGraphics::PerformanceTracker::SetCounterClient(CgsGraphics::PerformanceTracker::CounterType  lCounterType, const char *  lNewClientName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerformanceTracker.cpp:344
		const CgsGraphics::PerformanceTracker::CounterInfo & lCounterInfo;

		// CgsPerformanceTracker.cpp:345
		const char * lOldClientName;

		{
			// CgsPerformanceTracker.cpp:351
			char[999] lFormattedOutput;

		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPerformanceTracker.cpp:20
// CgsPerformanceTracker.cpp:11
// CgsPerformanceTracker.cpp:10
// CgsPerformanceTracker.cpp:12
// CgsPerformanceTracker.cpp:13
