// CgsMemoryMapAllocators.cpp:41
void CgsMemory::MemoryMapRawResource::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:75
void CgsMemory::MemoryMapLinearAllocator::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:112
void CgsMemory::MemoryMapHeapAllocator::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:146
void CgsMemory::MemoryMapRWLinearAllocator::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:177
void CgsMemory::MemoryMapRWGeneralAllocator::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:167
void CgsMemory::MemoryMapRWGeneralAllocator::Construct(const char *  lpcBankName, int32_t  liParentId, int32_t  liBankId, ResourceDescriptor *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MemoryIO::CreateGeneralAllocatorRequest::Construct(/* parameters */);
	MemoryIO::MemoryRequest::Construct(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

// CgsMemoryMapAllocators.cpp:183
void CgsMemory::MemoryMapRWGeneralAllocator::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryMapAllocators.cpp:185
		int32_t liEventType;

		rw::BaseResourceDescriptors<6u>::EndianSwap(/* parameters */);
	}
}

// CgsMemoryMapAllocators.cpp:118
void CgsMemory::MemoryMapHeapAllocator::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:47
void CgsMemory::MemoryMapRawResource::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryMapAllocators.cpp:49
		int32_t liEventType;

		rw::BaseResourceDescriptors<6u>::EndianSwap(/* parameters */);
	}
}

// CgsMemoryMapAllocators.cpp:152
void CgsMemory::MemoryMapRWLinearAllocator::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryMapAllocators.cpp:154
		int32_t liEventType;

		rw::BaseResourceDescriptors<6u>::EndianSwap(/* parameters */);
	}
}

// CgsMemoryMapAllocators.cpp:81
void CgsMemory::MemoryMapLinearAllocator::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryMapAllocators.cpp:31
void CgsMemory::MemoryMapRawResource::Construct(const char *  lpcBankName, int32_t  liParentId, int32_t  liBankId, ResourceDescriptor *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MemoryIO::CreateResourceRequest::Construct(/* parameters */);
	MemoryIO::MemoryRequest::Construct(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

// CgsMemoryMapAllocators.cpp:62
void CgsMemory::MemoryMapLinearAllocator::Construct(const char *  lpcBankName, int32_t  liParentId, int32_t  liBankId, int32_t  liMemType, ResourceDescriptor *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MemoryIO::CreateAllocatorRequest::Construct(/* parameters */);
	MemoryIO::MemoryRequest::Construct(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	MemoryIO::CreateAllocatorRequest::SetHeapAllocator(/* parameters */);
}

// CgsMemoryMapAllocators.cpp:99
void CgsMemory::MemoryMapHeapAllocator::Construct(const char *  lpcBankName, int32_t  liParentId, int32_t  liBankId, int32_t  liMemType, ResourceDescriptor *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MemoryIO::CreateAllocatorRequest::Construct(/* parameters */);
	MemoryIO::MemoryRequest::Construct(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	MemoryIO::CreateAllocatorRequest::SetHeapAllocator(/* parameters */);
}

// CgsMemoryMapAllocators.cpp:136
void CgsMemory::MemoryMapRWLinearAllocator::Construct(const char *  lpcBankName, int32_t  liParentId, int32_t  liBankId, ResourceDescriptor *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MemoryIO::CreateLinearAllocatorRequest::Construct(/* parameters */);
	MemoryIO::MemoryRequest::Construct(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

