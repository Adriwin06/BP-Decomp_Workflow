// CgsIndexedNodeHeap.cpp:69
void CgsMemory::IndexedNodeHeap::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIndexedNodeHeap.cpp:233
void CgsMemory::IndexedNodeHeap::GetHeapBounds(uint32_t *  lpOutLowerBound, uint32_t *  lpOutUpperBound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIndexedNodeHeap.cpp:200
void CgsMemory::IndexedNodeHeap::GetTotalAllocated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedNodeHeap.cpp:202
		IndexedNodeHeapListNode * lpNode;

		// CgsIndexedNodeHeap.cpp:203
		uint32_t luTotal;

		CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetHead(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
}

// CgsIndexedNodeHeap.cpp:40
void CgsMemory::IndexedNodeHeap::Construct(IndexedNodeHeapListNode *  lpNodes, uint32_t  luNumNodes, void *  lpBuffer, uint32_t  luBufferSize, uint32_t  luAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedNodeHeap.cpp:42
		IndexedNodeHeapListNode * lpFirstNode;

	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::Init(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::Init(/* parameters */);
	PopNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddHead(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	{
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddHead(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsIndexedNodeHeap.cpp:84
void CgsMemory::IndexedNodeHeap::Malloc(uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedNodeHeap.cpp:86
		IndexedNodeHeapListNode * lpNode;

		// CgsIndexedNodeHeap.cpp:110
		IndexedNodeHeapEntry * lpData;

		CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetHead(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNext(/* parameters */);
	{
		// CgsIndexedNodeHeap.cpp:116
		IndexedNodeHeapListNode * lpNewNode;

		PopNode(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddAfter(/* parameters */);
	}
	{
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(/* parameters */);
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetNextIndex(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsIndexedNodeHeap.cpp:143
void CgsMemory::IndexedNodeHeap::Free(void *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedNodeHeap.cpp:145
		IndexedNodeHeapListNode * lpNode;

		// CgsIndexedNodeHeap.cpp:148
		uint32_t luOffset;

		// CgsIndexedNodeHeap.cpp:163
		IndexedNodeHeapListNode * lpPrevNode;

		// CgsIndexedNodeHeap.cpp:164
		IndexedNodeHeapListNode * lpNextNode;

		// CgsIndexedNodeHeap.cpp:167
		IndexedNodeHeapEntry * lpData;

		CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetHead(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNext(/* parameters */);
	{
		// CgsIndexedNodeHeap.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetPrev(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNext(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::RemoveNode(/* parameters */);
	PushNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::RemoveNode(/* parameters */);
	PushNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

