// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsHashTable.h:120
	enum EHashTableCallbackResult {
		E_HTCRESULT_STOP = 0,
		E_HTCRESULT_REMOVE_AND_STOP = 1,
		E_HTCRESULT_REMOVE_AND_CONTINUE = 2,
		E_HTCRESULT_CONTINUE = 3,
	}

}

// CgsHashTable.h:152
struct CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u> {
private:
	// CgsHashTable.h:199
	LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >[13] maBins;

	// CgsHashTable.h:202
	bool mbInitialised;

public:
	// CgsHashTable.h:155
	void HashTable();

	// CgsHashTable.h:210
	void Init();

	// CgsHashTable.h:227
	void Insert(CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*> *);

	// CgsHashTable.h:269
	const UnicodeBuffer::CgsUtf8 *const* Get(unsigned int) const;

	// CgsHashTable.h:287
	const UnicodeBuffer::CgsUtf8 ** Get(unsigned int);

	// CgsHashTable.h:332
	void Remove(unsigned int);

	// CgsHashTable.h:349
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsHashTable.h:400
	void GetBulk(const uint32_t *, unsigned int, const UnicodeBuffer::CgsUtf8 **) const;

private:
	// CgsHashTable.h:305
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetInternal(unsigned int, LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > **);

}

// CgsHashTable.h:152
struct CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u> {
private:
	// CgsHashTable.h:199
	LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >[25] maBins;

	// CgsHashTable.h:202
	bool mbInitialised;

public:
	// CgsHashTable.h:155
	void HashTable();

	// CgsHashTable.h:210
	void Init();

	// CgsHashTable.h:227
	void Insert(CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> *);

	// CgsHashTable.h:269
	TextureState *const* Get(unsigned int) const;

	// CgsHashTable.h:287
	TextureState ** Get(unsigned int);

	// CgsHashTable.h:332
	void Remove(unsigned int);

	// CgsHashTable.h:349
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsHashTable.h:400
	void GetBulk(const uint32_t *, unsigned int, TextureState **) const;

private:
	// CgsHashTable.h:305
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetInternal(unsigned int, LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > **);

}

// CgsHashTable.h:46
struct CgsContainers::HashTableElementData<uint32_t,renderengine::TextureState*> {
	// CgsHashTable.h:48
	uint32_t mKey;

	// CgsHashTable.h:49
	TextureState * mValue;

}

// CgsHashTable.h:54
struct CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> {
private:
	// CgsHashTable.h:78
	LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > mListNode;

public:
	// CgsHashTable.h:86
	void Set(unsigned int, TextureState *const&);

	// CgsHashTable.h:94
	TextureState *const& GetValue() const;

	// CgsHashTable.h:101
	TextureState *& GetValue();

	// CgsHashTable.h:108
	uint32_t GetKey() const;

	// CgsHashTable.h:115
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetListNode();

}

// CgsBitArray.h:29
namespace CgsContainers {
	// CgsHashTable.h:120
	enum EHashTableCallbackResult {
		E_HTCRESULT_STOP = 0,
		E_HTCRESULT_REMOVE_AND_STOP = 1,
		E_HTCRESULT_REMOVE_AND_CONTINUE = 2,
		E_HTCRESULT_CONTINUE = 3,
	}

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsHashTable.h:120
	enum EHashTableCallbackResult {
		E_HTCRESULT_STOP = 0,
		E_HTCRESULT_REMOVE_AND_STOP = 1,
		E_HTCRESULT_REMOVE_AND_CONTINUE = 2,
		E_HTCRESULT_CONTINUE = 3,
	}

}

// CgsHashTable.h:152
struct CgsContainers::HashTable<uint32_t,const CgsUnicode::CgsUtf8*,13u> {
private:
	// CgsHashTable.h:199
	LinkedList<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> >[13] maBins;

	// CgsHashTable.h:202
	bool mbInitialised;

public:
	// CgsHashTable.h:155
	void HashTable();

	// CgsHashTable.h:210
	void Init();

	// CgsHashTable.h:227
	void Insert(CgsContainers::HashTableElement<uint32_t,const CgsUnicode::CgsUtf8*> *);

	// CgsHashTable.h:269
	const UnicodeBuffer::CgsUtf8 *const* Get(unsigned int) const;

	// CgsHashTable.h:287
	const UnicodeBuffer::CgsUtf8 ** Get(unsigned int);

	// CgsHashTable.h:332
	void Remove(unsigned int);

	// CgsHashTable.h:349
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsHashTable.h:400
	void GetBulk(const uint32_t *, unsigned int, const UnicodeBuffer::CgsUtf8 **) const;

private:
	// CgsHashTable.h:305
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > * GetInternal(unsigned int, LinkedList<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > **);

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	// CgsHashTable.h:120
	enum EHashTableCallbackResult {
		E_HTCRESULT_STOP = 0,
		E_HTCRESULT_REMOVE_AND_STOP = 1,
		E_HTCRESULT_REMOVE_AND_CONTINUE = 2,
		E_HTCRESULT_CONTINUE = 3,
	}

}

// CgsSet.h:28
namespace CgsContainers {
	// CgsHashTable.h:120
	enum EHashTableCallbackResult {
		E_HTCRESULT_STOP = 0,
		E_HTCRESULT_REMOVE_AND_STOP = 1,
		E_HTCRESULT_REMOVE_AND_CONTINUE = 2,
		E_HTCRESULT_CONTINUE = 3,
	}

}

// CgsHashTable.h:152
struct CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u> {
private:
	// CgsHashTable.h:199
	LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >[7] maBins;

	// CgsHashTable.h:202
	bool mbInitialised;

public:
	// CgsHashTable.h:155
	void HashTable();

	// CgsHashTable.h:210
	void Init();

	// CgsHashTable.h:227
	void Insert(CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry> *);

	// CgsHashTable.h:269
	const CgsGui::EventInterpreterModule::sMapEntry * Get(int) const;

	// CgsHashTable.h:287
	CgsGui::EventInterpreterModule::sMapEntry * Get(int);

	// CgsHashTable.h:332
	void Remove(int);

	// CgsHashTable.h:349
	void Parse(CgsContainers::EHashTableCallbackResult (*)(void *, void *), void (*)(void *, void *), void *);

	// CgsHashTable.h:400
	void GetBulk(const int32_t *, unsigned int, CgsGui::EventInterpreterModule::sMapEntry *) const;

private:
	// CgsHashTable.h:305
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetInternal(int, LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > **);

}

// CgsHashTable.h:46
struct CgsContainers::HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry> {
	// CgsHashTable.h:48
	int32_t mKey;

	// CgsHashTable.h:49
	CgsGui::EventInterpreterModule::sMapEntry mValue;

}

// CgsHashTable.h:54
struct CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry> {
private:
	// CgsHashTable.h:78
	LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > mListNode;

public:
	// CgsHashTable.h:86
	void Set(int, const CgsGui::EventInterpreterModule::sMapEntry &);

	// CgsHashTable.h:94
	const CgsGui::EventInterpreterModule::sMapEntry & GetValue() const;

	// CgsHashTable.h:101
	CgsGui::EventInterpreterModule::sMapEntry & GetValue();

	// CgsHashTable.h:108
	int32_t GetKey() const;

	// CgsHashTable.h:115
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetListNode();

}

// CgsHashTable.h:46
struct CgsContainers::HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*> {
	// CgsHashTable.h:48
	uint32_t mKey;

	// CgsHashTable.h:49
	const UnicodeBuffer::CgsUtf8 * mValue;

}

// CgsHashTable.h:54
struct CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*> {
private:
	// CgsHashTable.h:78
	LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > mListNode;

public:
	// CgsHashTable.h:86
	void Set(unsigned int, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsHashTable.h:94
	const UnicodeBuffer::CgsUtf8 *const& GetValue() const;

	// CgsHashTable.h:101
	const UnicodeBuffer::CgsUtf8 *& GetValue();

	// CgsHashTable.h:108
	uint32_t GetKey() const;

	// CgsHashTable.h:115
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetListNode();

}

