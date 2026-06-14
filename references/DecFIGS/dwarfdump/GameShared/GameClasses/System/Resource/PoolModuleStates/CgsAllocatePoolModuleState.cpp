// CgsAllocatePoolModuleState.cpp:593
void CgsResource::AllocatePoolModuleState::BeginDefragmentation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAllocatePoolModuleState.cpp:274
void CgsResource::AllocatePoolModuleState::GenerateResponse(AllocateResourceListResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Pool::GetId(/* parameters */);
	Events::AllocateResourceListResponse::Construct(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:480
void CgsResource::AllocatePoolModuleState::CheckEntryListDependency() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:482
		CgsResource::Entry * lpResource;

		// CgsAllocatePoolModuleState.cpp:483
		int32_t liIndex;

		Pool::IncEntryRefCount(/* parameters */);
		Pool::GetEntryRefCount(/* parameters */);
	}
	Pool::SetEntryRefCount(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:50
void CgsResource::AllocatePoolModuleState::Construct(CgsResource::PoolModule *  lpPoolModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ID::Construct(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:86
void CgsResource::AllocatePoolModuleState::BeginAllocation(CgsResource::Pool *  lpPool, ID  lListId, const CgsResource::BundleV2::ResourceEntry *  lpEntries, int32_t  liNumEntries, AllocListSet *  lpAllocListSet, bool *  lpOutNeeds, ResourceHandle::Resource *  lpOutResources, bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:88
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAllocatePoolModuleState.cpp:298
void CgsResource::AllocatePoolModuleState::CheckListDependencies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:300
		int32_t liIndex;

		// CgsAllocatePoolModuleState.cpp:301
		CgsResource::Pool * lpContainingPool;

		// CgsAllocatePoolModuleState.cpp:302
		CgsResource::Entry * lpResource;

		// CgsAllocatePoolModuleState.cpp:303
		int32_t liResourceIndex;

		// CgsAllocatePoolModuleState.cpp:304
		int32_t liNeedCount;

	}
	{
		// CgsAllocatePoolModuleState.cpp:325
		int16_t liRefCount;

		// CgsAllocatePoolModuleState.cpp:329
		int32_t liMemTypeIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		BundleV2::ResourceEntry::GetUncompressedSize(/* parameters */);
		Pool::GetEntryRefCount(/* parameters */);
		Pool::SetEntryRefCount(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:369
void CgsResource::AllocatePoolModuleState::CreateResourceList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:371
		int32_t liIndex;

		// CgsAllocatePoolModuleState.cpp:372
		NewResource lNewResource;

		// CgsAllocatePoolModuleState.cpp:373
		CgsResource::Entry * lpResource;

		// CgsAllocatePoolModuleState.cpp:374
		int32_t liNeedCount;

		// CgsAllocatePoolModuleState.cpp:384
		const int16_t * lpiSlotIndices;

		NewResource(/* parameters */);
		{
			// CgsAllocatePoolModuleState.cpp:399
			const const CgsResource::BundleV2::ResourceEntry & lEntry;

			BundleV2::ResourceEntry::GetUncompresssedResourceDescriptor(/* parameters */);
			Pool::BuildAllocRequestForEntry(/* parameters */);
			{
				rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
				rw::BaseResourceDescriptor::~BaseResourceDescriptor(/* parameters */);
			}
			{
			}
			Pool::SetEntryImportCount(/* parameters */);
		}
		~NewResource(/* parameters */);
	}
	{
		// CgsAllocatePoolModuleState.cpp:443
		int32_t liRequiredSize;

		// CgsAllocatePoolModuleState.cpp:444
		int32_t liPoolAlign;

	}
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	Pool::SetEntryImportCount(/* parameters */);
	{
		// CgsAllocatePoolModuleState.cpp:390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Pool::BuildAllocRequestForEntry(/* parameters */);
	{
		rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::~BaseResourceDescriptor(/* parameters */);
	}
	{
	}
	{
		// CgsAllocatePoolModuleState.cpp:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:519
void CgsResource::AllocatePoolModuleState::CreateEntryListResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:521
		CgsResource::Entry * lpResource;

		// CgsAllocatePoolModuleState.cpp:522
		int32_t liIndex;

		// CgsAllocatePoolModuleState.cpp:523
		EntryListResource * lpEntryList;

	}
	{
		// CgsAllocatePoolModuleState.cpp:527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAllocatePoolModuleState.cpp:559
void CgsResource::AllocatePoolModuleState::UndoEntryCreations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:561
		int32_t liIndex;

		// CgsAllocatePoolModuleState.cpp:562
		CgsResource::Pool * lpContainingPool;

		// CgsAllocatePoolModuleState.cpp:563
		CgsResource::Entry * lpResource;

		// CgsAllocatePoolModuleState.cpp:564
		int32_t liResourceIndex;

	}
	Pool::DecEntryRefCount(/* parameters */);
	{
		// CgsAllocatePoolModuleState.cpp:573
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAllocatePoolModuleState.cpp:606
void CgsResource::AllocatePoolModuleState::DebugPrintAllocListSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:608
		int32_t liMemType;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsAllocatePoolModuleState.cpp:114
void CgsResource::AllocatePoolModuleState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAllocatePoolModuleState.cpp:256
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAllocatePoolModuleState.cpp:170
		PoolPerfMonHelper lPerfVar;

		// CgsAllocatePoolModuleState.cpp:173
		CgsResource::Pool::ECreateResult leResult;

		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsAllocatePoolModuleState.cpp:225
		CgsResource::Entry * lpResource;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	}
	{
		// CgsAllocatePoolModuleState.cpp:129
		PoolPerfMonHelper lAllocListPerfHelper;

		// CgsAllocatePoolModuleState.cpp:131
		NewResource lNewResource;

		~NewResource(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	NewResource(/* parameters */);
	AllocListSet::ClearCountsAndResults(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		// CgsAllocatePoolModuleState.cpp:238
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

