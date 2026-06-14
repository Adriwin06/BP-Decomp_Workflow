// CgsStrStream.h:39
namespace CgsDev {
	// CgsPerfMonCpu.cpp:155
	// Declaration
	void PerfMonCpu_HELPER_printspaces(int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerfMonCpu.cpp:159
		using namespace Message;

	}

}

// CgsPerfMonCpu.cpp:94
void CgsDev::PerfMonCpu::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonCpu.cpp:114
void CgsDev::PerfMonCpu::PrepareActiveMonitorsForUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonCpu.cpp:116
		int32_t liIndex;

	}
}

// CgsPerfMonCpu.cpp:141
void CgsDev::PerfMonCpu::ResetValuesInActiveMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonCpu.cpp:202
void CgsDev::PerfMonCpu::DumpMonitorResultsToBuffer(void *  lpBuffer, CgsDev::PerfMonCpuPage  lePage, RwBool  lbDumpHeader, float32_t  lfUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonCpu.cpp:204
		char * lpStringBuffer;

		// CgsPerfMonCpu.cpp:205
		int32_t liIndex;

	}
}

// CgsPerfMonCpu.cpp:360
void CgsDev::PerfMonCpu::SetNumIterationsTaken(int32_t  liNumIterations) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonCpu.cpp:165
void CgsDev::PerfMonCpu::DumpActiveMonitorResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonCpu.cpp:167
		int32_t liIndex;

	}
	StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPerfMonCpu.cpp:174
		char[128] lacMsg;

	}
	CgsDev(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
}

// CgsPerfMonCpu.cpp:313
void CgsDev::PerfMonCpu::GetMonitorData(int32_t  liMonitorID, PerfMonCpuMonitorData *  lpResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonCpu.cpp:380
void CgsDev::PerfMonCpu::ReportMonitors(FPerfMonCpuReportCallback *  lpDisplayCallback, void *  lpUserData, CgsDev::PerfMonCpuPage  lePage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonCpu.cpp:382
		int32_t liIndex;

	}
	{
		// CgsPerfMonCpu.cpp:389
		PerfMonCpuMonitorData lCallbackParameters;

	}
}

// CgsPerfMonCpu.cpp:66
void CgsDev::PerfMonCpu::Construct(int32_t  liMaxMonitors, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsPerfMonCpu.cpp:261
void CgsDev::PerfMonCpu::AddMonitor(const char *  lpcString, CgsDev::PerfMonCpuPage  lePage, bool  lbRecordMinNotMax, float32_t  lfCpuBudget, bool  lbScaled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonCpu.cpp:271
		int32_t liCount;

	}
	CgsCore::StrnCpy(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPerfMonCpu.cpp:41
// CgsPerfMonCpu.cpp:43
// CgsPerfMonCpu.cpp:42
// CgsPerfMonCpu.cpp:44
// CgsPerfMonCpu.cpp:45
// CgsPerfMonCpu.cpp:46
// CgsPerfMonCpu.cpp:47
// CgsPerfMonCpu.cpp:48
