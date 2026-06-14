// CgsThreadLayout.cpp:143
void CgsSystem::ThreadLayout::GlobalThreadBeginWrapper(RunnableFunction  defaultRunnableFunction, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsThreadLayout.cpp:296
void CgsSystem::ThreadLayout::InteruptThreadForAssert(const AssertData *  lpAssert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetDispatchThreadId(/* parameters */);
	EA::Thread::AtomicPointer::SetValue(/* parameters */);
}

// CgsThreadLayout.cpp:43
void CgsSystem::ThreadLayout::ThreadLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsThreadLayout.cpp:192
void CgsSystem::ThreadLayout::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsThreadLayout.cpp:201
		bool lbResult;

		// CgsThreadLayout.cpp:211
		uint32_t luStartTime;

		// CgsThreadLayout.cpp:217
		uint32_t luTimeTaken;

		// CgsThreadLayout.cpp:220
		bool _lbAllowStallTest;

		EA::Thread::AtomicInt<std::int32_t>::operator const std::int32_t(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsThreadLayout.cpp:226
		bool _lbContinue;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsThreadLayout.cpp:87
void CgsSystem::ThreadLayout::InitThreads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsThreadLayout.cpp:91
		BarrierParameters lBarrierParams;

		// CgsThreadLayout.cpp:103
		ThreadParameters lThreadParams;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsThreadLayout.cpp:64
void CgsSystem::ThreadLayout::Begin(CgsSystem::IThreadClass *  lpThreadInterface, int32_t  liPerfMonResource, int32_t  liPerfMonAllThreadSyncs, int32_t  liPerfMonUpdateWaitForDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsThreadLayout.cpp:159
void CgsSystem::ThreadLayout::DispatchThread(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsThreadLayout.cpp:161
		CgsSystem::ThreadLayout * lpThreadLayout;

		// CgsThreadLayout.cpp:166
		sys_ppu_thread_stack_t lStackInfo;

		sys_ppu_thread_get_stack_information(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

