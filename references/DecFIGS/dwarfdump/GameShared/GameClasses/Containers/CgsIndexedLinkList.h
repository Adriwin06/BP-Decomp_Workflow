// CgsIndexedLinkList.h:120
extern const uint16_t KI_LIST_ZERO;

// CgsIndexedLinkList.h:121
extern const uint16_t KI_LIST_INVALID = 65535;

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	HeapEntry mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	HeapEntry * GetData();

	// CgsIndexedLinkList.h:257
	const HeapEntry * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(HeapEntry *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	HeapEntry * operator->();

	// CgsIndexedLinkList.h:365
	const HeapEntry * operator->() const;

	// CgsIndexedLinkList.h:379
	HeapEntry & operator*();

	// CgsIndexedLinkList.h:393
	const HeapEntry & operator*() const;

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:529
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:557
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:830
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> *);

	// CgsIndexedLinkList.h:1135
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedNodeHeapEntry mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedNodeHeapEntry * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedNodeHeapEntry * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedNodeHeapEntry *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedNodeHeapEntry * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedNodeHeapEntry * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedNodeHeapEntry & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedNodeHeapEntry & operator*() const;

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetNext(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * GetPrev(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *, CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedNodeHeapEntry mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedNodeHeapEntry * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedNodeHeapEntry * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedNodeHeapEntry *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedNodeHeapEntry * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedNodeHeapEntry * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedNodeHeapEntry & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedNodeHeapEntry & operator*() const;

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> * GetData();

	// CgsIndexedLinkList.h:257
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> * operator->();

	// CgsIndexedLinkList.h:365
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> * operator->() const;

	// CgsIndexedLinkList.h:379
	IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> & operator*();

	// CgsIndexedLinkList.h:393
	const IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *, IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * InternalRemoveTail();

}

// CgsIndexedLinkList.h:63
struct CgsContainers::IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> {
private:
	// CgsIndexedLinkList.h:101
	SpatialPartitionEntity mData;

	// CgsIndexedLinkList.h:102
	uint16_t miNextIndex;

	// CgsIndexedLinkList.h:103
	uint16_t miPrevIndex;

public:
	// CgsIndexedLinkList.h:241
	SpatialPartitionEntity * GetData();

	// CgsIndexedLinkList.h:257
	const SpatialPartitionEntity * GetData() const;

	// CgsIndexedLinkList.h:337
	void SetData(SpatialPartitionEntity *);

	// CgsIndexedLinkList.h:273
	uint16_t GetNextIndex() const;

	// CgsIndexedLinkList.h:289
	uint16_t GetPrevIndex() const;

	// CgsIndexedLinkList.h:305
	void SetNextIndex(short unsigned int);

	// CgsIndexedLinkList.h:321
	void SetPrevIndex(short unsigned int);

	// CgsIndexedLinkList.h:351
	SpatialPartitionEntity * operator->();

	// CgsIndexedLinkList.h:365
	const SpatialPartitionEntity * operator->() const;

	// CgsIndexedLinkList.h:379
	SpatialPartitionEntity & operator*();

	// CgsIndexedLinkList.h:393
	const SpatialPartitionEntity & operator*() const;

}

// CgsIndexedLinkList.h:117
struct CgsContainers::IndexedLinkedList<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> {
	// CgsIndexedLinkList.h:120
	extern const uint16_t KI_LIST_ZERO;

	// CgsIndexedLinkList.h:121
	extern const uint16_t KI_LIST_INVALID;

private:
	// CgsIndexedLinkList.h:203
	int32_t miCount;

	// CgsIndexedLinkList.h:204
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * mpBase;

	// CgsIndexedLinkList.h:205
	uint16_t miFirst;

	// CgsIndexedLinkList.h:206
	uint16_t miLast;

public:
	// CgsIndexedLinkList.h:412
	void Init(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *, short unsigned int);

	// CgsIndexedLinkList.h:453
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetHead();

	// CgsIndexedLinkList.h:476
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetTail();

	// CgsIndexedLinkList.h:500
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:529
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:557
	const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetHead() const;

	// CgsIndexedLinkList.h:597
	const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetTail() const;

	// CgsIndexedLinkList.h:621
	const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetNext(const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:650
	const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * GetPrev(const IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:580
	uint16_t GetHeadIndex() const;

	// CgsIndexedLinkList.h:679
	void AddHead(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:708
	void AddTail(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:739
	void AddAfter(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *, IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:786
	void AddBefore(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *, IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:830
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * RemoveHead();

	// CgsIndexedLinkList.h:857
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * RemoveTail();

	// CgsIndexedLinkList.h:885
	void RemoveNode(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:928
	int32_t GetNodeIndex(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *) const;

	// CgsIndexedLinkList.h:970
	int32_t CountElements() const;

	// CgsIndexedLinkList.h:1006
	bool IsEmpty() const;

	// CgsIndexedLinkList.h:1023
	uint16_t GetNodeOffset(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *) const;

private:
	// CgsIndexedLinkList.h:1051
	void InternalAddFirstNode(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:1079
	void InternalAddHead(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:1107
	void InternalAddTail(IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> *);

	// CgsIndexedLinkList.h:1135
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * InternalRemoveLastNode();

	// CgsIndexedLinkList.h:1159
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * InternalRemoveHead();

	// CgsIndexedLinkList.h:1184
	IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> * InternalRemoveTail();

}

