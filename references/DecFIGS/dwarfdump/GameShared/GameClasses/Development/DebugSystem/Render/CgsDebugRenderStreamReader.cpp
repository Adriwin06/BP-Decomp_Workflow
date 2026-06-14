// CgsDebugRenderStreamReader.cpp:49
void CgsDev::DebugRenderStreamReader::Construct(DebugStreamInput *  lpCommandBuffer, int32_t  liCommandBufferLength, void *  lpDataBuffer, int32_t  liDataBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamReader.cpp:142
void CgsDev::DebugRenderStreamReader::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamReader.cpp:155
void CgsDev::DebugRenderStreamReader::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamReader.cpp:64
void CgsDev::DebugRenderStreamReader::Construct(rw::IResourceAllocator *  lpAllocator, int32_t  liMaxCommands, int32_t  liDataBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamReader.cpp:67
		int32_t liCommandBufferLength;

		// CgsDebugRenderStreamReader.cpp:70
		DebugStreamInput * lpCommandBuffer;

		// CgsDebugRenderStreamReader.cpp:71
		void * lpDataBuffer;

	}
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// CgsDebugRenderStreamReader.cpp:72
		StrStream lStrStream;

		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRenderStreamReader.cpp:86
void CgsDev::DebugRenderStreamReader::Construct(LinearMalloc *  lpAllocator, int32_t  liMaxCommands, int32_t  liDataBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamReader.cpp:89
		uint32_t liStartAlignment;

		// CgsDebugRenderStreamReader.cpp:93
		int32_t liCommandBufferLength;

		// CgsDebugRenderStreamReader.cpp:96
		DebugStreamInput * lpCommandBuffer;

		// CgsDebugRenderStreamReader.cpp:97
		void * lpDataBuffer;

	}
	CgsMemory::LinearMalloc::GetAlignment(/* parameters */);
	MallocArray<CgsDev::Internal::DebugStreamInput>(/* parameters */);
	{
		// CgsDebugRenderStreamReader.cpp:98
		StrStream lStrStream;

		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRenderStreamReader.cpp:116
void CgsDev::DebugRenderStreamReader::Construct(HeapMalloc *  lpAllocator, int32_t  liMaxCommands, int32_t  liDataBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamReader.cpp:119
		int32_t liCommandBufferLength;

		// CgsDebugRenderStreamReader.cpp:122
		DebugStreamInput * lpCommandBuffer;

		// CgsDebugRenderStreamReader.cpp:123
		void * lpDataBuffer;

	}
	{
		// CgsDebugRenderStreamReader.cpp:124
		StrStream lStrStream;

		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRenderStreamReader.cpp:168
void CgsDev::DebugRenderStreamReader::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamReader.cpp:170
		DebugInterface lDebugInterface;

		// CgsDebugRenderStreamReader.cpp:174
		DebugStreamInput lInput;

		DebugInterface::DebugInterface(/* parameters */);
	}
	{
		// CgsDebugRenderStreamReader.cpp:177
		int32_t liIndex;

	}
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	DebugInterface::~DebugInterface(/* parameters */);
	DebugManager::ThreadSafeRelease(/* parameters */);
}

