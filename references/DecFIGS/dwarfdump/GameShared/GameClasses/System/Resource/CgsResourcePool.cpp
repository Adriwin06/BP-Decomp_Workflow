// CgsResourcePool.cpp:153
void CgsResource::Pool::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourcePool.cpp:190
void CgsResource::Pool::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourcePool.cpp:227
void CgsResource::Pool::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:231
		uint32_t i;

	}
}

// CgsResourcePool.cpp:2994
void CgsResource::Pool::ResolveAllResourcesThatImportList(const ID *  lpMovedIds, void **  lppMovedAddresses, uint32_t  luNumMovedIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourcePool.cpp:3253
void CgsResource::Pool::DebugReport(FPoolReportCallback *  lpfCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:3255
		PoolStats lStats;

		// CgsResourcePool.cpp:3256
		int32_t liIndex;

		// CgsResourcePool.cpp:3256
		int32_t liNumUsed;

		// CgsResourcePool.cpp:3256
		int32_t liNumUnused;

		// CgsResourcePool.cpp:3256
		int32_t liNumAllocated;

		// CgsResourcePool.cpp:3256
		int32_t liNumFree;

		// CgsResourcePool.cpp:3256
		int32_t liTotalAllocated;

		// CgsResourcePool.cpp:3256
		int32_t liTotalFree;

		// CgsResourcePool.cpp:3256
		int32_t liLargest;

	}
}

// CgsResourcePool.cpp:3236
void CgsResource::Pool::DebugWipeHeap(int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:3238
		char * lpcAddress;

		// CgsResourcePool.cpp:3239
		int32_t liSize;

	}
}

// CgsResourcePool.cpp:2539
void CgsResource::Pool::ClearImportsForEntry(int32_t  liEntryIndex, uint32_t  luInvalidValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2541
		void * lpInvalidPointer;

		// CgsResourcePool.cpp:2544
		CgsResource::BundleV2::ImportEntry * lpImport;

		// CgsResourcePool.cpp:2551
		int32_t liNumImports;

		// CgsResourcePool.cpp:2552
		int32_t liImportIndex;

		GetResourceEntryImports(/* parameters */);
		GetEntryImportCount(/* parameters */);
		{
			// CgsResourcePool.cpp:2556
			void ** lpResolve;

		}
	}
}

// CgsResourcePool.cpp:481
void CgsResource::Pool::ResetPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:499
		uint32_t i;

	}
}

// CgsResourcePool.cpp:100
void CgsResource::Pool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:124
		uint32_t i;

	}
}

// CgsResourcePool.cpp:422
void CgsResource::Pool::Invalidate(ResourceHandle::Resource *  lpOutResource, Entry::ResourceDescriptor *  lpOutDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:426
		uint16_t liIndex;

	}
	{
		// CgsResourcePool.cpp:424
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:520
void CgsResource::Pool::AllocateResourceEntry(CgsResource::Entry **  lppOutEntry, int32_t *  lpnOutIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:530
		uint16_t luCurrentIndex;

	}
	{
		// CgsResourcePool.cpp:538
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:522
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:571
void CgsResource::Pool::AllocateMemoryForResource(CgsResource::Entry *  lpEntry, const char *  lpcName, void *  lpOwner, const CgsResource::Type *  lpResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:576
		const BaseResourceDescriptor * lpBaseDescriptor;

		// CgsResourcePool.cpp:578
		uint32_t luType;

		// CgsResourcePool.cpp:580
		bool lbAllocTop;

		// CgsResourcePool.cpp:580
		bool lbAllocBest;

		// CgsResourcePool.cpp:583
		ResourceHandle::Resource * lpResource;

	}
	{
		// CgsResourcePool.cpp:608
		uint16_t luStartIndex;

	}
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::BaseResources<3u>::GetBaseResource(/* parameters */);
	{
		// CgsResourcePool.cpp:617
		uint32_t luFreeType;

	}
	{
		// CgsResourcePool.cpp:630
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:573
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:660
void CgsResource::Pool::FreeResourceEntry(int16_t  liResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsResourcePool.cpp:662
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
}

// CgsResourcePool.cpp:735
void CgsResource::Pool::GetResource(int32_t  liIndex, bool  lbAllowNoRef, uint16_t  lxStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:738
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:737
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:803
void CgsResource::Pool::FindResourceIndex(ID  lId, bool  lbAllowNoRef, uint16_t  lxStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:809
		int32_t liIndex;

	}
	{
		// CgsResourcePool.cpp:805
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:768
void CgsResource::Pool::FindResource(ID  lId, bool  lbAllowNoRef, uint16_t  lxStatus, int32_t *  lpiOutIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:772
		int32_t liIndex;

	}
	{
		// CgsResourcePool.cpp:770
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:846
void CgsResource::Pool::FindResourceWithDependencies(ID  lId, CgsResource::Pool **  lppOutPool, bool  lbAllowNoRef, uint16_t  lxStatus, int32_t *  lpiOutIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:850
		CgsResource::Entry * lpResult;

	}
	{
		// CgsResourcePool.cpp:848
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:865
		int32_t liDependency;

	}
}

// CgsResourcePool.cpp:901
void CgsResource::Pool::FindResourceIndexWithDependencies(ID  lId, CgsResource::Pool **  lppOutPool, bool  lbAllowNoRef, uint16_t  lxStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:905
		int32_t liResult;

	}
	{
		// CgsResourcePool.cpp:903
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:920
		int32_t liDependency;

	}
}

// CgsResourcePool.cpp:953
void CgsResource::Pool::CreateBatchEntrySlots(int16_t  liNumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:957
		uint16_t luCurrentEntry;

		// CgsResourcePool.cpp:958
		uint16_t luCurrentIndex;

		// CgsResourcePool.cpp:959
		uint16_t luNumEntries;

	}
	{
		// CgsResourcePool.cpp:971
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:955
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1043
void CgsResource::Pool::CreateEntryInSlot(const NewResource *  lpNewResource, CgsResource::Entry **  lppOutResource, int32_t  liEntryIndex, bool  lbAllocate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1049
		CgsResource::Entry * lpEntry;

	}
	{
		// CgsResourcePool.cpp:1064
		ResourceHandle::Resource lResource;

		SmallResource::SmallResource(/* parameters */);
		{
			// CgsResourcePool.cpp:1067
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsResourcePool.cpp:1045
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1006
void CgsResource::Pool::CreateEntry(const NewResource *  lpNewResource, CgsResource::Entry **  lppOutResource, int32_t *  lpnOutResourceIndex, bool  lbAllocate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1010
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:1011
		int32_t liEntryIndex;

	}
	{
		// CgsResourcePool.cpp:1016
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1008
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1214
void CgsResource::Pool::ExecuteBatchAllocation(AllocListSet *  lpAllocList, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1216
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1108
void CgsResource::Pool::ExecuteBatchAllocations(AllocListSet *  lpAllocList, bool  lbIsReallocationAttempt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1112
		int32_t _liForceFailMemType;

		// CgsResourcePool.cpp:1126
		int32_t liMemType;

		// CgsResourcePool.cpp:1129
		bool lbFailNoRoom;

		// CgsResourcePool.cpp:1130
		bool lbFailNeedDefrag;

		{
			// CgsResourcePool.cpp:1110
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsResourcePool.cpp:1146
			CgsResource::EBatchAllocResult leBatchAllocResult;

		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:1239
void CgsResource::Pool::MergeBatchAllocations(AllocListSet *  lpAllocList, const CgsResource::BundleV2::ResourceEntry *  lpBundleEntries, ResourceHandle::Resource *  lpOutResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1243
		uint32_t luMemType;

		// CgsResourcePool.cpp:1244
		uint32_t luAllocation;

		// CgsResourcePool.cpp:1245
		CgsResource::Entry * lpResource;

		// CgsResourcePool.cpp:1246
		uint16_t luEntryIndex;

		// CgsResourcePool.cpp:1247
		int32_t liBundleIndex;

	}
	{
		// CgsResourcePool.cpp:1241
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsResourcePool.cpp:1252
		AllocRequest * lpRequests;

		// CgsResourcePool.cpp:1253
		AllocResult * lpResults;

		// CgsResourcePool.cpp:1254
		uint32_t luAllocCount;

		{
			// CgsResourcePool.cpp:1262
			intptr_t liIntPtr;

		}
	}
	{
		// CgsResourcePool.cpp:1279
		AllocRequest * lpRequests;

		// CgsResourcePool.cpp:1280
		AllocResult * lpResults;

		// CgsResourcePool.cpp:1281
		uint32_t luAllocCount;

		{
			// CgsResourcePool.cpp:1289
			intptr_t liIntPtr;

			SetEntryImportCount(/* parameters */);
		}
		GetEntryImportCount(/* parameters */);
		SetEntryImportCount(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:1365
void CgsResource::Pool::AddReference(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1370
		CgsResource::Entry * lpResource;

	}
	{
		// CgsResourcePool.cpp:1367
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1407
void CgsResource::Pool::RemoveReference(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1412
		CgsResource::Entry * lpResource;

	}
	{
		// CgsResourcePool.cpp:1409
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1614
void CgsResource::Pool::ResolveAllTempScratchResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1618
		uint16_t luUsedIndex;

	}
	{
		// CgsResourcePool.cpp:1630
		CgsResource::BundleV2::ImportEntry * lpImport;

		// CgsResourcePool.cpp:1637
		int32_t liNumImports;

		// CgsResourcePool.cpp:1638
		int32_t liImportIndex;

		GetResourceEntryImports(/* parameters */);
		GetEntryImportCount(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1642
		void * lpImportAddress;

		// CgsResourcePool.cpp:1649
		void ** lpResolve;

		ScratchPool::GetTempAddress(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1616
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1668
void CgsResource::Pool::ResolveAllDestScratchResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1672
		uint16_t luUsedIndex;

	}
	{
		// CgsResourcePool.cpp:1684
		CgsResource::BundleV2::ImportEntry * lpImport;

		// CgsResourcePool.cpp:1691
		int32_t liNumImports;

		// CgsResourcePool.cpp:1692
		int32_t liImportIndex;

		GetResourceEntryImports(/* parameters */);
		GetEntryImportCount(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1696
		void * lpImportAddress;

		// CgsResourcePool.cpp:1703
		void ** lpResolve;

		ScratchPool::GetDestAddress(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1670
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1725
void CgsResource::Pool::ResolveImportForEntry(CgsResource::Entry *  lpEntry, CgsResource::BundleV2::ImportEntry *  lpImport) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1727
		CgsResource::Entry * lpImportResource;

		// CgsResourcePool.cpp:1728
		CgsResource::Pool * lpContainingPool;

	}
	{
		// CgsResourcePool.cpp:1763
		void ** lpResolve;

		SmallResource::GetMemoryResource(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1730
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1766
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1774
		intptr_t liTemp;

		// CgsResourcePool.cpp:1775
		void ** lpResolve;

		{
			// CgsResourcePool.cpp:1780
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Type::GetCachedId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1581
void CgsResource::Pool::ResolveAllResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1585
		uint16_t luUsedIndex;

	}
	ResolveImportsForEntry(/* parameters */);
	{
		// CgsResourcePool.cpp:1583
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1984
void CgsResource::Pool::BeginDefragmentation(CgsResource::ScratchPool *  lpScratchPool, RelocateRequest *  lpRelocateRequests, RelocateSource *  lpRelocateSources, uint32_t  luNumRelocations, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1987
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1986
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2025
void CgsResource::Pool::BeginEmergencyDefragmentation(CgsMemory::Relocator *  lpRelocator, CgsMemory::RelocationParams *  lpRelocationParams, RelocateRequest *  lpRelocateRequests, RelocateSource *  lpRelocateSources, uint32_t  luNumRelocations, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2048
		char * lpcBase;

		// CgsResourcePool.cpp:2051
		uint32_t luFlags;

		// CgsResourcePool.cpp:2059
		int32_t liIndex;

	}
	Heap::GetBaseAddress(/* parameters */);
	{
		// CgsResourcePool.cpp:2062
		const RelocationEntry & lEntry;

	}
	{
		// CgsResourcePool.cpp:2027
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2028
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2086
void CgsResource::Pool::BeginDefragNextSetOfRelocations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2088
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2356
void CgsResource::Pool::AddResourceToScratchPool(uint32_t  luRelocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2360
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:2361
		void * lpTempLocation;

		// CgsResourcePool.cpp:2363
		int32_t liEntryIndex;

	}
	{
		// CgsResourcePool.cpp:2358
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2574
void CgsResource::Pool::CheckImportsStillClearForEntry(int32_t  liEntryIndex, uint32_t  luInvalidValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2576
		void * lpInvalidPointer;

		// CgsResourcePool.cpp:2579
		CgsResource::BundleV2::ImportEntry * lpImport;

		// CgsResourcePool.cpp:2585
		int32_t liNumFailures;

		// CgsResourcePool.cpp:2588
		int32_t liNumImports;

		// CgsResourcePool.cpp:2589
		int32_t liImportIndex;

	}
	GetResourceEntryImports(/* parameters */);
	GetEntryImportCount(/* parameters */);
	{
		// CgsResourcePool.cpp:2593
		void ** lpResolve;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:2624
void CgsResource::Pool::AddResourcesToScratchPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2630
		PoolPerfMonHelper lHelper;

		// CgsResourcePool.cpp:2632
		uint32_t luCurrentRelocation;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2626
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
}

// CgsResourcePool.cpp:2750
void CgsResource::Pool::DebugWipeSourceResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2754
		uint32_t luNumEntries;

		// CgsResourcePool.cpp:2755
		uint32_t luCurrentEntry;

	}
	ScratchPool::GetNumEntries(/* parameters */);
	{
		// CgsResourcePool.cpp:2763
		ScratchEntry * lpScratchEntry;

		// CgsResourcePool.cpp:2764
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:2765
		ResourceDescriptor lDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		ScratchPool::GetEntry(/* parameters */);
		SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetDisposableResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetUninitializedResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2752
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2785
void CgsResource::Pool::DebugWipeTempResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2789
		const ScratchEntry * lpScratchEntry;

		// CgsResourcePool.cpp:2790
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:2791
		Resource lSrc;

		// CgsResourcePool.cpp:2791
		Resource lDest;

		// CgsResourcePool.cpp:2792
		uint32_t luNumEntries;

		// CgsResourcePool.cpp:2793
		uint32_t luCurrentEntry;

	}
	{
		// CgsResourcePool.cpp:2787
		CgsDev::StrStream lStrStream;

	}
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	ScratchPool::GetNumEntries(/* parameters */);
	{
		// CgsResourcePool.cpp:2804
		ResourceDescriptor lDescriptor;

	}
	ScratchPool::GetEntry(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetUninitializedResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::ResourceDescriptor::GetDisposableResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:2824
void CgsResource::Pool::VerifyResourceImports() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2828
		bool lbSuccess;

		// CgsResourcePool.cpp:2829
		int32_t liFailCount;

		// CgsResourcePool.cpp:2830
		uint16_t luUsedIndex;

		// CgsResourcePool.cpp:2831
		int32_t liImportIndex;

		// CgsResourcePool.cpp:2833
		uint16_t luMax;

	}
	{
		// CgsResourcePool.cpp:2852
		const Entry & lEntry;

		// CgsResourcePool.cpp:2853
		CgsResource::BundleV2::ImportEntry * lpImports;

		// CgsResourcePool.cpp:2856
		int32_t liNumImports;

		GetResourceEntryImports(/* parameters */);
		GetEntryImportCount(/* parameters */);
		{
			// CgsResourcePool.cpp:2859
			CgsResource::Entry * lpImportResource;

			// CgsResourcePool.cpp:2860
			CgsResource::Pool * lpContainingPool;

			// CgsResourcePool.cpp:2887
			void ** lpResolve;

		}
	}
	{
		// CgsResourcePool.cpp:2826
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2926
void CgsResource::Pool::ResolveAllResourcesThatImportList(const ID *  lpMovedIds, uint32_t  luNumMovedIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2945
		uint16_t luUsedIndex;

	}
	{
		// CgsResourcePool.cpp:2943
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2958
		const Entry & lEntry;

		// CgsResourcePool.cpp:2959
		CgsResource::BundleV2::ImportEntry * lpImports;

		// CgsResourcePool.cpp:2962
		int32_t liImportIndex;

		// CgsResourcePool.cpp:2963
		int32_t liMovedIndex;

		// CgsResourcePool.cpp:2964
		int32_t liNumImports;

		GetResourceEntryImports(/* parameters */);
		GetEntryImportCount(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2928
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2940
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:3009
void CgsResource::Pool::GenerateRangeMask(const ID *  lpSortedIdList, int32_t  liNumIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:3013
		int32_t liIdIndex;

		// CgsResourcePool.cpp:3014
		uint32_t luCurrentMaskBit;

		// CgsResourcePool.cpp:3015
		uint32_t luCurrentMaskIndex;

		// CgsResourcePool.cpp:3016
		uint32_t luCurrentMask;

		// CgsResourcePool.cpp:3017
		uint32_t luCurrentRangeStart;

		// CgsResourcePool.cpp:3018
		uint32_t luCurrentRangeEnd;

	}
	ID::GetHash(/* parameters */);
	{
		// CgsResourcePool.cpp:3033
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:3023
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:3011
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:3122
void CgsResource::Pool::DeleteMemoryForEntry(ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:3126
		CgsResource::Entry * lpResource;

		// CgsResourcePool.cpp:3127
		ResourceHandle::Resource lEntryResource;

		// CgsResourcePool.cpp:3128
		int32_t liResourceIndex;

		// CgsResourcePool.cpp:3138
		int32_t liMemType;

	}
	{
		// CgsResourcePool.cpp:3124
		CgsDev::StrStream lStrStream;

	}
	SmallResource::SmallResource(/* parameters */);
	BaseResourcePtr::GetResource(/* parameters */);
	rw::BaseResources<3u>::GetBaseResource(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsResourcePool.cpp:3132
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:3163
void CgsResource::Pool::ReAllocateMemoryForEntry(ID  lResourceId, Entry::ResourceDescriptor *  lpNewDescriptor, int32_t  liNewNumImports, ResourceHandle::Resource *  lpOutNewResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:3167
		CgsResource::Entry * lpResource;

		// CgsResourcePool.cpp:3168
		ResourceHandle::Resource lEntryResource;

		// CgsResourcePool.cpp:3169
		int32_t liResourceIndex;

		// CgsResourcePool.cpp:3170
		uintptr_t luResourceIndex;

		// CgsResourcePool.cpp:3171
		void * lpNewAddress;

		// CgsResourcePool.cpp:3172
		uint16_t luFoundIndex;

		// CgsResourcePool.cpp:3173
		Entry::ResourceDescriptor lExtendedDescriptor;

		// CgsResourcePool.cpp:3183
		int32_t liMemType;

	}
	{
		// CgsResourcePool.cpp:3165
		CgsDev::StrStream lStrStream;

	}
	SmallResource::SmallResource(/* parameters */);
	SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	SetEntryImportCount(/* parameters */);
	SetEntryStatus(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsResourcePool.cpp:3177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:3196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2471
void CgsResource::Pool::RebaseResourceFromScratchPool(int32_t  luScratchEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2475
		Resource lSrc;

		// CgsResourcePool.cpp:2475
		Resource lDest;

		// CgsResourcePool.cpp:2476
		int32_t liEntryIndex;

		// CgsResourcePool.cpp:2477
		ScratchEntry * lpScratchEntry;

		// CgsResourcePool.cpp:2478
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:2479
		ResourceDescriptor lDescriptor;

	}
	{
		// CgsResourcePool.cpp:2473
		CgsDev::StrStream lStrStream;

	}
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	ScratchPool::GetEntry(/* parameters */);
	SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetUninitializedResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetDisposableResourceDescriptor(/* parameters */);
	SmallResource::ConvertToRWResource(/* parameters */);
	SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	SmallResource::GetGraphicsSystemResource(/* parameters */);
	SmallResource::GetGraphicsLocalResource(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	SmallResource::ConvertToRWResource(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	SmallResource::CreateFromRWResource(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2711
void CgsResource::Pool::RebaseResourcesFromScratchPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2717
		PoolPerfMonHelper lHelper;

		// CgsResourcePool.cpp:2719
		uint32_t luNumEntries;

		// CgsResourcePool.cpp:2720
		uint32_t luCurrentEntry;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		ScratchPool::GetNumEntries(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2730
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2713
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
}

// CgsResourcePool.cpp:2401
void CgsResource::Pool::RebaseResourceToScratchPool(int32_t  luScratchEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2405
		Resource lSrc;

		// CgsResourcePool.cpp:2405
		Resource lDest;

		// CgsResourcePool.cpp:2406
		int32_t liEntryIndex;

		// CgsResourcePool.cpp:2407
		ScratchEntry * lpScratchEntry;

		// CgsResourcePool.cpp:2408
		CgsResource::Entry * lpEntry;

		// CgsResourcePool.cpp:2409
		ResourceDescriptor lDescriptor;

	}
	{
		// CgsResourcePool.cpp:2403
		CgsDev::StrStream lStrStream;

	}
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	ScratchPool::GetEntry(/* parameters */);
	SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetUninitializedResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetDisposableResourceDescriptor(/* parameters */);
	SmallResource::ConvertToRWResource(/* parameters */);
	SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	SmallResource::GetGraphicsSystemResource(/* parameters */);
	SmallResource::GetGraphicsLocalResource(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	SmallResource::ConvertToRWResource(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	SmallResource::CreateFromRWResource(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:2670
void CgsResource::Pool::RebaseResourcesToScratchPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2676
		PoolPerfMonHelper lHelper;

		// CgsResourcePool.cpp:2678
		uint32_t luNumEntries;

		// CgsResourcePool.cpp:2679
		uint32_t luCurrentEntry;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		ScratchPool::GetNumEntries(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2689
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2672
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
}

// CgsResourcePool.cpp:2278
void CgsResource::Pool::UpdateEmergencyDefrag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2280
		Resource lSrc;

		// CgsResourcePool.cpp:2280
		Resource lDest;

		// CgsResourcePool.cpp:2281
		ResourceDescriptor lDescriptor;

		rw::Resource::Resource(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		{
			// CgsResourcePool.cpp:2295
			char * lpcHeap;

			// CgsResourcePool.cpp:2298
			int32_t liIndex;

			Heap::GetBaseAddress(/* parameters */);
			{
				// CgsResourcePool.cpp:2302
				int32_t liEntryIndex;

				// CgsResourcePool.cpp:2303
				CgsResource::Entry * lpEntry;

				CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
				SmallResource::CreateFromRWResource(/* parameters */);
			}
			SmallResource::ConvertToRWResource(/* parameters */);
			SmallResource::ConvertToRWResource(/* parameters */);
			SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
			SmallResource::GetGraphicsSystemResource(/* parameters */);
			SmallResource::GetGraphicsLocalResource(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		~ResourceDescriptor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:685
void CgsResource::Pool::FreeMemoryForResource(CgsResource::Entry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:689
		uint32_t luType;

		// CgsResourcePool.cpp:691
		ResourceHandle::Resource lResource;

	}
	{
		// CgsResourcePool.cpp:687
		CgsDev::StrStream lStrStream;

	}
	SmallResource::SmallResource(/* parameters */);
	rw::BaseResources<3u>::GetBaseResource(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	BaseResourcePtr::SetResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:391
void CgsResource::Pool::InitManagementData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:393
		int32_t liNumHashEntries;

		// CgsResourcePool.cpp:394
		uint32_t i;

		HashTable::CalculateRequiredSize(/* parameters */);
		CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::CalculateRequiredSize(/* parameters */);
		BaseResourcePtr::Reset(/* parameters */);
	}
}

// CgsResourcePool.cpp:452
void CgsResource::Pool::Validate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:454
		uint32_t i;

	}
	{
		// CgsResourcePool.cpp:456
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:251
void CgsResource::Pool::InitPool(const CgsResource::Pool::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:253
		int32_t liIndex;

		// CgsResourcePool.cpp:254
		void *[3] lapHeapAddresses;

		// CgsResourcePool.cpp:255
		void * lpOverhead;

		// CgsResourcePool.cpp:256
		uint32_t luOverheadSize;

		// CgsResourcePool.cpp:257
		LinearMalloc lOverheadAlloc;

		// CgsResourcePool.cpp:263
		LinearMalloc[3] lAllocators;

		// CgsResourcePool.cpp:319
		int32_t liNumHashEntries;

		// CgsResourcePool.cpp:338
		uint32_t i;

		// CgsResourcePool.cpp:339
		char[64] lacHeapName;

		// CgsResourcePool.cpp:367
		int32_t liCurrentDependency;

	}
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	rw::BaseResources<3u>::GetBaseResource(/* parameters */);
	GetOverheadMemoryRequired(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	PrintOverheadMemoryRequired(/* parameters */);
	HashTable::CalculateRequiredSize(/* parameters */);
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::CalculateRequiredSize(/* parameters */);
	{
		// CgsResourcePool.cpp:344
		const const CgsResource::Pool::HeapInfo & lHeapInfo;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsResourcePool.cpp:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsResourcePool.cpp:353
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:289
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:1337
void CgsResource::Pool::DeleteEntry(int16_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsResourcePool.cpp:1339
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
}

// CgsResourcePool.cpp:1804
void CgsResource::Pool::FixUpAndResolveResourceList(const ID *  lpIds, int32_t  liSize, int32_t  liFirstIndex, int32_t  liCount, bool  lbFinalFixup, bool  lbFixUpDependencies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1812
		int32_t liIndex;

		// CgsResourcePool.cpp:1813
		int32_t liResourceIndex;

		// CgsResourcePool.cpp:1815
		bool lbFailed;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1846
		CgsResource::Entry * lpEntry;

		FixUpEntry(/* parameters */);
		ResolveImportsForEntry(/* parameters */);
		GetEntryImportCount(/* parameters */);
		{
		}
	}
	{
		// CgsResourcePool.cpp:1863
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1934
		CgsResource::Entry * lpEntry;

		PostFixUpEntry(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		SmallResource::ConvertToRWResource(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1898
		CgsResource::Pool * lpPool;

		// CgsResourcePool.cpp:1900
		CgsResource::Entry * lpEntry;

		PostFixUpEntry(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	{
		// CgsResourcePool.cpp:1806
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1825
		CgsResource::Pool * lpPool;

		// CgsResourcePool.cpp:1826
		CgsResource::Entry * lpEntry;

		FixUpEntry(/* parameters */);
		ResolveImportsForEntry(/* parameters */);
		GetEntryImportCount(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1922
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		operator<<(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:1956
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsResourcePool.cpp:2116
void CgsResource::Pool::UpdateDefrag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:2118
		PoolPerfMonHelper _lDefragPerfhelp_;

		// CgsResourcePool.cpp:2120
		int32_t _liDefragFrameCount;

	}
	PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	{
		// CgsResourcePool.cpp:2262
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	{
		// CgsResourcePool.cpp:2123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2131
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2151
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2201
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	{
		// CgsResourcePool.cpp:2183
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	{
		// CgsResourcePool.cpp:2229
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsResourcePool.cpp:2247
		PoolPerfMonHelper _lPerfhelp_;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsResourcePool.cpp:1437
void CgsResource::Pool::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.cpp:1444
		uint32_t luIndex;

		// CgsResourcePool.cpp:1445
		uint16_t luMax;

		// CgsResourcePool.cpp:1446
		uint16_t luStart;

	}
	{
		// CgsResourcePool.cpp:1556
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePool.cpp:29
// CgsResourcePool.cpp:30
// CgsResourcePool.cpp:31
// CgsResourcePool.cpp:32
// CgsResourcePool.cpp:33
// CgsResourcePool.cpp:34
// CgsResourcePool.cpp:35
// CgsResourcePool.cpp:36
// CgsResourcePool.cpp:38
// CgsResourcePool.cpp:41
// CgsResourcePool.cpp:39
// CgsResourcePool.cpp:40
// CgsResourcePool.cpp:42
// CgsResourcePool.cpp:43
// CgsResourcePool.cpp:44
// CgsResourcePool.cpp:46
// CgsResourcePool.cpp:47
// CgsResourcePool.cpp:48
// CgsResourcePool.cpp:49
// CgsResourcePool.cpp:50
// CgsResourcePool.cpp:52
// CgsResourcePool.cpp:55
// CgsResourcePool.cpp:59
// CgsResourcePool.cpp:53
// CgsResourcePool.cpp:56
// CgsResourcePool.cpp:57
// CgsResourcePool.cpp:60
// CgsResourcePool.cpp:62
// CgsResourcePool.cpp:64
// CgsResourcePool.cpp:65
// CgsResourcePool.cpp:66
// CgsResourcePool.cpp:68
// CgsResourcePool.cpp:69
// CgsResourcePool.cpp:70
