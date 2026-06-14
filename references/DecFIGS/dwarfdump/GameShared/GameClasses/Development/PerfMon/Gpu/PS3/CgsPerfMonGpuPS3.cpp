// CgsStrStream.h:39
namespace CgsDev {
	// CgsPerfMonGpuPS3.cpp:33
	const int32_t KI_NUMBUFFERS = 4;

	// CgsPerfMonGpuPS3.cpp:61
	PerfMonGpuPS3_Buffer volatile gValues;

}

// CgsPerfMonGpuPS3.cpp:40
struct CgsDev::PerfMonGpuPS3_Values {
	// CgsPerfMonGpuPS3.cpp:42
	uint64_t[33] mau64CostInNs;

	// CgsPerfMonGpuPS3.cpp:43
	uint16_t[33] mau16StartID;

	// CgsPerfMonGpuPS3.cpp:44
	uint16_t[33] mau16StopID;

	// CgsPerfMonGpuPS3.cpp:45
	bool[33] mabAlreadyComputed;

}

// CgsPerfMonGpuPS3.cpp:49
struct CgsDev::PerfMonGpuPS3_Buffer {
	// CgsPerfMonGpuPS3.cpp:51
	PerfMonGpuPS3_Values[4] maValues;

	// CgsPerfMonGpuPS3.cpp:52
	bool[32] mabUsedThisFrame;

	// CgsPerfMonGpuPS3.cpp:53
	int32_t miCurrentGPUWriteBuffer;

	// CgsPerfMonGpuPS3.cpp:54
	int32_t miCurrentCPUReadBuffer;

}

// CgsPerfMonGpuPS3.cpp:264
void CgsDev::PerfMonGpu::ComputeValueFromTimer(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:266
		float32_t lfCycleCostToPercentageConvertor;

		// CgsPerfMonGpuPS3.cpp:267
		float32_t lfCost;

	}
	{
		// CgsPerfMonGpuPS3.cpp:293
		uint64_t luStartTime;

		// CgsPerfMonGpuPS3.cpp:294
		uint64_t luStopTime;

	}
}

// CgsPerfMonGpuPS3.cpp:120
void CgsDev::PerfMonGpu::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonGpuPS3.cpp:166
void CgsDev::PerfMonGpu::StartProfiling() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:172
		int32_t i;

	}
}

// CgsPerfMonGpuPS3.cpp:190
void CgsDev::PerfMonGpu::StopProfiling() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerfMonGpuPS3.cpp:237
void CgsDev::PerfMonGpu::StopMonitor(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:241
		StrStream lStrStream;

		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPerfMonGpuPS3.cpp:207
void CgsDev::PerfMonGpu::StartMonitor(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:211
		StrStream lStrStream;

		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPerfMonGpuPS3.cpp:141
void CgsDev::PerfMonGpu::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:150
		int32_t i;

	}
}

// CgsPerfMonGpuPS3.cpp:77
void CgsDev::PerfMonGpu::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerfMonGpuPS3.cpp:93
		int32_t i;

		// CgsPerfMonGpuPS3.cpp:93
		int32_t j;

		// CgsPerfMonGpuPS3.cpp:94
		uint16_t lu16RsxId;

	}
}

