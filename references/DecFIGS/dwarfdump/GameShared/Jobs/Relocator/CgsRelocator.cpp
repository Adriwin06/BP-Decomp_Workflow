// CgsRelocator.cpp:72
void CgsMemory::Relocator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRelocator.cpp:88
void CgsMemory::Relocator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRelocator.cpp:355
void _GLOBAL__D__ZN9CgsMemory10HeapMalloc9ConstructEPvi() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRelocator.cpp:354
void _GLOBAL__I__ZN9CgsMemory10HeapMalloc9ConstructEPvi() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRelocator.cpp:176
void CgsMemory::Relocator::Update(bool  lbDoneGPURefresh, bool  lbWaitForMainMemCompletion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsRelocator.cpp:199
		uint64_t luStartTime;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

// CgsRelocator.cpp:272
void CgsMemory::Relocator::GPUMemCopy(void *  lpDest, const void *  lpSrc, bool  lbDestGDDR, bool  lbSrcGDDR, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRelocator.cpp:274
		uint32_t luDestOffset;

		// CgsRelocator.cpp:275
		uint32_t luSrcOffset;

		// CgsRelocator.cpp:287
		uint32_t luSizeSmall;

		// CgsRelocator.cpp:288
		uint32_t luSizeLarge;

		// CgsRelocator.cpp:291
		uint32_t luTransferMode;

	}
	{
		// CgsRelocator.cpp:306
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsRelocator.cpp:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsRelocator.cpp:229
void CgsMemory::Relocator::GPUMove(void *  lpDest, const void *  lpSrc, bool  lbDestGDDR, bool  lbSrcGDDR, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRelocator.cpp:236
		intptr_t liDestMin;

		// CgsRelocator.cpp:237
		intptr_t liDestMax;

		// CgsRelocator.cpp:238
		intptr_t liSrcMin;

		// CgsRelocator.cpp:239
		intptr_t liSrcMax;

	}
	{
		// CgsRelocator.cpp:245
		const char * lpcSrc;

		// CgsRelocator.cpp:246
		int32_t liSizeRemaining;

		{
			// CgsRelocator.cpp:249
			int32_t liToCopy;

		}
	}
	{
		// CgsRelocator.cpp:233
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsRelocator.cpp:232
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsRelocator.cpp:231
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsRelocator.cpp:101
void CgsMemory::Relocator::Execute(CgsMemory::RelocationParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRelocator.cpp:119
		int32_t liRemaining;

		// CgsRelocator.cpp:123
		int32_t liIndex;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// CgsRelocator.cpp:126
			bool lbSrcGPU;

			// CgsRelocator.cpp:127
			bool lbDestGPU;

		}
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
		EA::Jobs::Job::SetCode(/* parameters */);
		EA::Jobs::Job::SetName(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	{
		// CgsRelocator.cpp:103
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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

// CgsRelocator.cpp:50
// CgsRelocator.cpp:51
// CgsRelocator.cpp:52
