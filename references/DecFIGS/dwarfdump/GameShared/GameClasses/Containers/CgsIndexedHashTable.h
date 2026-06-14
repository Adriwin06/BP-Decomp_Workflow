// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t> {
	// CgsIndexedHashTable.h:57
	EntityId mKey;

	// CgsIndexedHashTable.h:58
	uint16_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::EntityId,uint16_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(EntityId, const uint16_t &);

	// CgsIndexedHashTable.h:104
	const uint16_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint16_t & GetValue();

	// CgsIndexedHashTable.h:118
	EntityId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,uint16_t,541u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t>[541] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::EntityId,uint16_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::EntityId,uint16_t> *);

	// CgsIndexedHashTable.h:281
	const uint16_t * Get(EntityId) const;

	// CgsIndexedHashTable.h:299
	uint16_t * Get(EntityId);

	// CgsIndexedHashTable.h:344
	void Remove(EntityId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const EntityId *, unsigned int, uint16_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> * GetInternal(EntityId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t> **);

}

// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t> {
	// CgsIndexedHashTable.h:57
	VolumeInstanceId mKey;

	// CgsIndexedHashTable.h:58
	uint32_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,uint32_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(VolumeInstanceId, const uint32_t &);

	// CgsIndexedHashTable.h:104
	const uint32_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint32_t & GetValue();

	// CgsIndexedHashTable.h:118
	VolumeInstanceId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,uint32_t,509u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t>[509] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,uint32_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,uint32_t> *);

	// CgsIndexedHashTable.h:281
	const uint32_t * Get(VolumeInstanceId) const;

	// CgsIndexedHashTable.h:299
	uint32_t * Get(VolumeInstanceId);

	// CgsIndexedHashTable.h:344
	void Remove(VolumeInstanceId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const VolumeInstanceId *, unsigned int, uint32_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> * GetInternal(VolumeInstanceId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t> **);

}

// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t> {
	// CgsIndexedHashTable.h:57
	VolumeId mKey;

	// CgsIndexedHashTable.h:58
	uint32_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeId,uint32_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(VolumeId, const uint32_t &);

	// CgsIndexedHashTable.h:104
	const uint32_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint32_t & GetValue();

	// CgsIndexedHashTable.h:118
	VolumeId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,uint32_t,227u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t>[227] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::VolumeId,uint32_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::VolumeId,uint32_t> *);

	// CgsIndexedHashTable.h:281
	const uint32_t * Get(VolumeId) const;

	// CgsIndexedHashTable.h:299
	uint32_t * Get(VolumeId);

	// CgsIndexedHashTable.h:344
	void Remove(VolumeId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const VolumeId *, unsigned int, uint32_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> * GetInternal(VolumeId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t> **);

}

// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t> {
	// CgsIndexedHashTable.h:57
	EntityId mKey;

	// CgsIndexedHashTable.h:58
	uint16_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(EntityId, const uint16_t &);

	// CgsIndexedHashTable.h:104
	const uint16_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint16_t & GetValue();

	// CgsIndexedHashTable.h:118
	EntityId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>[541] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t> *);

	// CgsIndexedHashTable.h:281
	const uint16_t * Get(EntityId) const;

	// CgsIndexedHashTable.h:299
	uint16_t * Get(EntityId);

	// CgsIndexedHashTable.h:344
	void Remove(EntityId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const EntityId *, unsigned int, uint16_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> * GetInternal(EntityId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t> **);

}

// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t> {
	// CgsIndexedHashTable.h:57
	VolumeInstanceId mKey;

	// CgsIndexedHashTable.h:58
	uint32_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(VolumeInstanceId, const uint32_t &);

	// CgsIndexedHashTable.h:104
	const uint32_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint32_t & GetValue();

	// CgsIndexedHashTable.h:118
	VolumeInstanceId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,std::uint32_t,509u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t>[509] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t> *);

	// CgsIndexedHashTable.h:281
	const uint32_t * Get(VolumeInstanceId) const;

	// CgsIndexedHashTable.h:299
	uint32_t * Get(VolumeInstanceId);

	// CgsIndexedHashTable.h:344
	void Remove(VolumeInstanceId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const VolumeInstanceId *, unsigned int, uint32_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> * GetInternal(VolumeInstanceId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t> **);

}

// CgsIndexedHashTable.h:55
struct CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t> {
	// CgsIndexedHashTable.h:57
	VolumeId mKey;

	// CgsIndexedHashTable.h:58
	uint32_t mValue;

}

// CgsIndexedHashTable.h:63
struct CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t> {
private:
	// CgsIndexedHashTable.h:88
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> mListNode;

public:
	// CgsIndexedHashTable.h:96
	void Set(VolumeId, const uint32_t &);

	// CgsIndexedHashTable.h:104
	const uint32_t & GetValue() const;

	// CgsIndexedHashTable.h:111
	uint32_t & GetValue();

	// CgsIndexedHashTable.h:118
	VolumeId GetKey() const;

	// CgsIndexedHashTable.h:125
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetListNode();

}

// CgsIndexedHashTable.h:154
struct CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u> {
private:
	// CgsIndexedHashTable.h:202
	IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>[227] maBins;

	// CgsIndexedHashTable.h:205
	bool mbInitialised;

public:
	// CgsIndexedHashTable.h:157
	void IndexedHashTable();

	// CgsIndexedHashTable.h:213
	void Init(IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t> *);

	// CgsIndexedHashTable.h:230
	void Insert(IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t> *);

	// CgsIndexedHashTable.h:281
	const uint32_t * Get(VolumeId) const;

	// CgsIndexedHashTable.h:299
	uint32_t * Get(VolumeId);

	// CgsIndexedHashTable.h:344
	void Remove(VolumeId);

	// CgsIndexedHashTable.h:361
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsIndexedHashTable.h:412
	void GetBulk(const VolumeId *, unsigned int, uint32_t *) const;

private:
	// CgsIndexedHashTable.h:317
	IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> * GetInternal(VolumeId, IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t> **);

}

