// CgsLiveUpdatePoolModuleState.cpp:45
void CgsResource::LiveUpdatePoolModuleState::Construct(CgsResource::PoolModule *  lpPoolModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ID::Construct(/* parameters */);
}

// CgsLiveUpdatePoolModuleState.cpp:579
void CgsResource::LiveUpdatePoolModuleState::UndoEntryCreations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLiveUpdatePoolModuleState.cpp:211
void CgsResource::LiveUpdatePoolModuleState::GenerateResponse(AllocateResourceListResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Events::AllocateResourceListResponse::Construct(/* parameters */);
	Pool::GetId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
}

// CgsLiveUpdatePoolModuleState.cpp:284
void CgsResource::LiveUpdatePoolModuleState::FindPoolToUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:286
		int32_t liPoolIndex;

		// CgsLiveUpdatePoolModuleState.cpp:287
		int32_t liEntryIndex;

		// CgsLiveUpdatePoolModuleState.cpp:288
		CgsResource::Entry * lpResource;

		// CgsLiveUpdatePoolModuleState.cpp:289
		int32_t liResourceIndex;

		// CgsLiveUpdatePoolModuleState.cpp:290
		int32_t liNeedCount;

		// CgsLiveUpdatePoolModuleState.cpp:291
		int32_t[128] laiPoolPoll;

		// CgsLiveUpdatePoolModuleState.cpp:292
		int32_t liHighestPoolIndex;

		// CgsLiveUpdatePoolModuleState.cpp:293
		bool lbResourceFound;

	}
}

// CgsLiveUpdatePoolModuleState.cpp:235
void CgsResource::LiveUpdatePoolModuleState::CheckListDependencies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:237
		int32_t liIndex;

		// CgsLiveUpdatePoolModuleState.cpp:238
		CgsResource::Entry * lpResource;

		// CgsLiveUpdatePoolModuleState.cpp:239
		int32_t liResourceIndex;

		// CgsLiveUpdatePoolModuleState.cpp:240
		int32_t liNeedCount;

	}
	{
		// CgsLiveUpdatePoolModuleState.cpp:249
		CgsResource::Pool * lpPool;

	}
}

// CgsLiveUpdatePoolModuleState.cpp:361
void CgsResource::LiveUpdatePoolModuleState::DeleteOriginalResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:363
		int32_t liIndex;

		// CgsLiveUpdatePoolModuleState.cpp:364
		int32_t liResourceIndex;

	}
	{
		// CgsLiveUpdatePoolModuleState.cpp:371
		CgsResource::Pool * lpPool;

	}
}

// CgsLiveUpdatePoolModuleState.cpp:517
void CgsResource::LiveUpdatePoolModuleState::CreateEntryListResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:519
		CgsResource::Entry * lpResource;

		// CgsLiveUpdatePoolModuleState.cpp:520
		int32_t liIndex;

		// CgsLiveUpdatePoolModuleState.cpp:530
		NewResource lNewResource;

		// CgsLiveUpdatePoolModuleState.cpp:531
		int32_t liResourceIndex;

		// CgsLiveUpdatePoolModuleState.cpp:532
		EntryListResource * lpEntryList;

		// CgsLiveUpdatePoolModuleState.cpp:544
		int32_t liRequiredSize;

		// CgsLiveUpdatePoolModuleState.cpp:545
		int32_t liPoolAlign;

	}
	NewResource(/* parameters */);
	rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	~NewResource(/* parameters */);
}

// CgsLiveUpdatePoolModuleState.cpp:73
void CgsResource::LiveUpdatePoolModuleState::BeginAllocation(CgsResource::Pool *  lpPool, ID  lListId, const CgsResource::BundleV2::ResourceEntry *  lpEntries, int32_t  liNumEntries, bool *  lpOutNeeds, ResourceHandle::Resource *  lpOutResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:75
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLiveUpdatePoolModuleState.cpp:393
void CgsResource::LiveUpdatePoolModuleState::AllocateNewResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:395
		int32_t liIndex;

		// CgsLiveUpdatePoolModuleState.cpp:396
		Entry::ResourceDescriptor lEntryDescriptor;

		// CgsLiveUpdatePoolModuleState.cpp:397
		ResourceHandle::Resource lEntryResource;

		// CgsLiveUpdatePoolModuleState.cpp:398
		int32_t liNumImports;

		// CgsLiveUpdatePoolModuleState.cpp:399
		CgsResource::Entry * lpResource;

		// CgsLiveUpdatePoolModuleState.cpp:400
		int32_t liResourceIndex;

		// CgsLiveUpdatePoolModuleState.cpp:402
		bool lbSuccess;

		// CgsLiveUpdatePoolModuleState.cpp:478
		int32_t liPoolIndex;

		SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		SmallResource::SmallResource(/* parameters */);
		{
			// CgsLiveUpdatePoolModuleState.cpp:408
			const const CgsResource::BundleV2::ResourceEntry & lEntry;

			BundleV2::ResourceEntry::GetUncompresssedResourceDescriptor(/* parameters */);
			{
				// CgsLiveUpdatePoolModuleState.cpp:420
				CgsResource::Pool * lpPool;

			}
			{
				// CgsLiveUpdatePoolModuleState.cpp:445
				NewResource lNewResource;

				NewResource(/* parameters */);
				rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType(/* parameters */);
				~NewResource(/* parameters */);
			}
		}
		{
			// CgsLiveUpdatePoolModuleState.cpp:485
			int32_t liDependency;

		}
		Pool::GetDependency(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
	}
	Pool::GetDependency(/* parameters */);
	BaseResourcePtr::GetResource(/* parameters */);
	{
		// CgsLiveUpdatePoolModuleState.cpp:425
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Pool::GetName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Pool::GetName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsLiveUpdatePoolModuleState.cpp:423
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLiveUpdatePoolModuleState.cpp:97
void CgsResource::LiveUpdatePoolModuleState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLiveUpdatePoolModuleState.cpp:193
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLiveUpdatePoolModuleState.cpp:164
		CgsResource::Entry * lpResource;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Pool::GetName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsLiveUpdatePoolModuleState.cpp:179
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

