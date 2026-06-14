// CgsResourceHeap.cpp:192
void CgsResource::Heap::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:626
void CgsResource::Heap::GetAmountFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:774
void CgsResource::Heap::GetPoolChecksum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:800
void CgsResource::Heap::DebugPrint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:851
void CgsResource::Heap::UnitTestIteration(void **  lpAllocArray, int32_t  liMaxAllocs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:826
void CgsResource::Heap::UnitTest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:829
		void *[512] lapAllocs;

		// CgsResourceHeap.cpp:832
		int32_t liIndex;

	}
}

// CgsResourceHeap.cpp:1202
void CgsResource::Heap::SortAllocsBySizeQSortCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:1204
		AllocRequest * lpRequest0;

		// CgsResourceHeap.cpp:1205
		AllocRequest * lpRequest1;

	}
}

// CgsResourceHeap.cpp:641
void CgsResource::Heap::GetLargestFreeBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:645
		int32_t liLargestFree;

		{
			// CgsResourceHeap.cpp:646
			Heap::HeapEntryNode * lpNode;

			CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
			CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
		}
	}
}

// CgsResourceHeap.cpp:690
void CgsResource::Heap::GetNextNode(bool  lbStartFromTop, Heap::HeapEntryNode *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
}

// CgsResourceHeap.cpp:751
void CgsResource::Heap::GetNextAllocatedNode(bool  lbStartFromTop, Heap::HeapEntryNode *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:753
		Heap::HeapEntryNode * lpNextNode;

	}
}

// CgsResourceHeap.cpp:728
void CgsResource::Heap::GetNextFreeNode(bool  lbStartFromTop, Heap::HeapEntryNode *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:730
		Heap::HeapEntryNode * lpNextNode;

	}
}

// CgsResourceHeap.cpp:934
void CgsResource::Heap::GetFragmentationLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:936
		uint32_t luAllocatedCount;

		// CgsResourceHeap.cpp:937
		uint32_t luFreeCount;

		// CgsResourceHeap.cpp:938
		Heap::HeapEntryNode * lpNode;

		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
}

// CgsResourceHeap.cpp:1434
void CgsResource::Heap::GetNodeUsageStatistics(int32_t *  lpiOutNumUsedNodes, int32_t *  lpiOutNumUnusedNodes, int32_t *  lpiOutNumAllocatedNodes, int32_t *  lpiOutNumFreeNodes, int32_t *  lpiOutTotalAllocatedSize, int32_t *  lpiOutTotalFreeSize, int32_t *  lpiOutLargestFreeBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:1436
		Heap::HeapEntryNode * lpNode;

		// CgsResourceHeap.cpp:1437
		int32_t liNumUsed;

		// CgsResourceHeap.cpp:1437
		int32_t liNumAllocated;

		// CgsResourceHeap.cpp:1437
		int32_t liNumFree;

		// CgsResourceHeap.cpp:1437
		int32_t liTotalAllocated;

		// CgsResourceHeap.cpp:1437
		int32_t liTotalFree;

		// CgsResourceHeap.cpp:1437
		int32_t liLargest;

	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
}

// CgsResourceHeap.cpp:165
void CgsResource::Heap::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
}

// CgsResourceHeap.cpp:50
void CgsResource::Heap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
}

// CgsResourceHeap.cpp:241
void CgsResource::Heap::RemoveNode(Heap::HeapEntryNode *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHeap.cpp:207
void CgsResource::Heap::GetNewNode(void *  lpAddress, int32_t  liSize, bool  lbAllocated, const char *  lpcDebugName, void *  lpOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:209
		char * lpcAddress;

		// CgsResourceHeap.cpp:214
		Heap::HeapEntryNode * lpNode;

	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveHead(/* parameters */);
	HeapEntry::SetSize(/* parameters */);
	HeapEntry::SetAddress(/* parameters */);
	HeapEntry::SetAllocated(/* parameters */);
	HeapEntry::SetOwner(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
}

// CgsResourceHeap.cpp:267
void CgsResource::Heap::Malloc(uint32_t  luSize, const char *  lpcDebugName, void *  lpOwner, uint16_t  luStartIndex, uint16_t *  lpuFoundIndex, bool  lbBestFit, bool  lbAllocateFromTop, void *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:277
		char * lpcAddress;

		// CgsResourceHeap.cpp:290
		Heap::HeapEntryNode * lpFoundNode;

		// CgsResourceHeap.cpp:291
		HeapEntry * lpFoundEntry;

		// CgsResourceHeap.cpp:401
		Heap::HeapEntryNode * lpNewNode;

		// CgsResourceHeap.cpp:428
		int32_t liNewBottomSize;

		// CgsResourceHeap.cpp:429
		int32_t liNewTopSize;

	}
	FindFreeNodeContainingAddress(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddAfter(/* parameters */);
	HeapEntry::SetSize(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	FindFreeNodeContainingAddress(/* parameters */);
	{
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	}
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	FindFreeNodeBestFit(/* parameters */);
	{
		// CgsResourceHeap.cpp:452
		Heap::HeapEntryNode * lpTopNode;

		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddAfter(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddFirstNode(/* parameters */);
	}
	FindFreeNodeFromBottom(/* parameters */);
	{
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	}
	FindFreeNodeFromTop(/* parameters */);
	HeapEntry::GetAddress(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	FindFreeNodeBestFit(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	FindFreeNodeFromTop(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetTail(/* parameters */);
	FindFreeNodeFromBottom(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHeap.cpp:127
void CgsResource::Heap::Reprepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:141
		Heap::HeapEntryNode * lpNode;

		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddTail(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddFirstNode(/* parameters */);
	}
	{
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHeap.cpp:85
void CgsResource::Heap::Prepare(uint32_t  luMaxNodes, LinearMalloc *  lpOverheadAllocator, void *  lpHeapMemory, uint32_t  luHeapMemorySize, uint32_t  luHeapAlignment, const char *  lpcDebugName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceHeap.cpp:523
void CgsResource::Heap::Free(uint16_t  luNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:525
		Heap::HeapEntryNode * lpNode;

		// CgsResourceHeap.cpp:535
		int32_t liSize;

		// CgsResourceHeap.cpp:555
		Heap::HeapEntryNode * lpPrevNode;

		// CgsResourceHeap.cpp:578
		Heap::HeapEntryNode * lpNextNode;

	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetPrev(/* parameters */);
	HeapEntry::SetAllocated(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	HeapEntry::SetSize(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveNode(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	HeapEntry::SetAddress(/* parameters */);
	HeapEntry::SetSize(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveNode(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveTail(/* parameters */);
}

// CgsResourceHeap.cpp:1102
void CgsResource::Heap::ExecuteBatchAddressedAllocation(AllocRequestAddressed *  lpRequests, AllocResult *  lpResults, uint32_t  luNumRequests, bool  lbFreeOnFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:1104
		uint32_t luRequest;

		// CgsResourceHeap.cpp:1105
		uint16_t luBottomIndex;

		// CgsResourceHeap.cpp:1106
		uint16_t luTopIndex;

	}
	{
		// CgsResourceHeap.cpp:1174
		uint32_t luSizeNeeded;

	}
	{
		// CgsResourceHeap.cpp:1166
		uint16_t luFreeIndex;

	}
	CalculateRequiredSizeForAllocList(/* parameters */);
}

// CgsResourceHeap.cpp:977
void CgsResource::Heap::ExecuteBatchAllocation(AllocRequest *  lpRequests, AllocResult *  lpResults, uint32_t  luNumRequests, bool  lbFreeOnFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:979
		uint32_t luRequest;

		// CgsResourceHeap.cpp:980
		uint16_t luBottomIndex;

		// CgsResourceHeap.cpp:981
		uint16_t luTopIndex;

	}
	{
		// CgsResourceHeap.cpp:1080
		uint32_t luSizeNeeded;

	}
	{
		// CgsResourceHeap.cpp:1072
		uint16_t luFreeIndex;

	}
	CalculateRequiredSizeForAllocList(/* parameters */);
}

// CgsResourceHeap.cpp:490
void CgsResource::Heap::Free(void *  lpPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:496
		char * lpcAddress;

	}
	{
		// CgsResourceHeap.cpp:500
		Heap::HeapEntryNode * lpNode;

		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
}

// CgsResourceHeap.cpp:1233
void CgsResource::Heap::GenerateLinearHeap(LinearHeapNode *  lpInputLinearHeap, uint16_t  luMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:1237
		Heap::HeapEntryNode * lpNode;

		// CgsResourceHeap.cpp:1240
		int32_t liTotalUsedNodes;

		// CgsResourceHeap.cpp:1241
		int32_t liNum4Batches;

		// CgsResourceHeap.cpp:1242
		int32_t liNumRemaining;

		// CgsResourceHeap.cpp:1243
		int32_t liIndex;

		// CgsResourceHeap.cpp:1244
		LinearHeapNode * lpLinearHeap;

	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::CountElements(/* parameters */);
	{
		// CgsResourceHeap.cpp:1254
		Heap::HeapEntryNode * lpNode0;

		// CgsResourceHeap.cpp:1254
		Heap::HeapEntryNode * lpNode1;

		// CgsResourceHeap.cpp:1254
		Heap::HeapEntryNode * lpNode2;

		// CgsResourceHeap.cpp:1254
		Heap::HeapEntryNode * lpNode3;

		// CgsResourceHeap.cpp:1255
		HeapEntry * lpEntry0;

		// CgsResourceHeap.cpp:1255
		HeapEntry * lpEntry1;

		// CgsResourceHeap.cpp:1255
		HeapEntry * lpEntry2;

		// CgsResourceHeap.cpp:1255
		HeapEntry * lpEntry3;

		{
			// CgsResourceHeap.cpp:1252
			uintptr_t luAddress;

		}
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
	{
		// CgsResourceHeap.cpp:1301
		HeapEntry * lpEntry;

		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
	{
		// CgsResourceHeap.cpp:1235
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHeap.cpp:1356
void CgsResource::Heap::ExecuteBatchRelocation(RelocateRequest *  lpRelocateRequests, uint32_t  luNumRequests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.cpp:1358
		Heap::HeapEntryList lTempNodes;

		// CgsResourceHeap.cpp:1359
		Heap::HeapEntryNode * lpFreeNode;

		// CgsResourceHeap.cpp:1360
		HeapEntry lEntry;

		// CgsResourceHeap.cpp:1361
		uint32_t luCurrentRequest;

		// CgsResourceHeap.cpp:1362
		void * lpAddress;

		// CgsResourceHeap.cpp:1363
		uint16_t luStartIndex;

	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddTail(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddTail(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveHead(/* parameters */);
	{
		// CgsResourceHeap.cpp:1409
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	{
		// CgsResourceHeap.cpp:1373
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsResourceHeap.cpp:1393
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHeap.cpp:24
// CgsResourceHeap.cpp:25
// CgsResourceHeap.cpp:26
// CgsResourceHeap.cpp:27
// CgsResourceHeap.cpp:28
// CgsResourceHeap.cpp:29
// CgsResourceHeap.cpp:30
// CgsResourceHeap.cpp:31
// CgsResourceHeap.cpp:32
