// CgsLinkedList.h:56
struct CgsContainers::BaseLinkedListNode {
protected:
	// CgsLinkedList.h:60
	BaseLinkedListNode * mpNext;

	// CgsLinkedList.h:61
	BaseLinkedListNode * mpPrev;

}

// CgsLinkedList.h:75
struct CgsContainers::BaseLinkedList {
protected:
	// CgsLinkedList.h:89
	BaseLinkedListNode * mpFirst;

	// CgsLinkedList.h:90
	BaseLinkedListNode * mpLast;

	// CgsLinkedList.h:91
	int32_t miCount;

public:
	// CgsLinkedList.h:78
	void BaseLinkedList();

	// CgsLinkedList.h:82
	int32_t CountElements() const;

	// CgsLinkedList.h:85
	bool IsEmpty() const;

protected:
	// CgsLinkedList.h:97
	void InternalInit(BaseLinkedListNode *, int32_t, int32_t);

	// CgsLinkedList.h:100
	BaseLinkedListNode * InternalGetHead() const;

	// CgsLinkedList.h:103
	BaseLinkedListNode * InternalGetTail() const;

	// CgsLinkedList.h:107
	void InternalAddHead(BaseLinkedListNode *);

	// CgsLinkedList.h:111
	void InternalAddTail(BaseLinkedListNode *);

	// CgsLinkedList.h:116
	void InternalAddAfter(BaseLinkedListNode *, BaseLinkedListNode *);

	// CgsLinkedList.h:121
	void InternalAddBefore(BaseLinkedListNode *, BaseLinkedListNode *);

	// CgsLinkedList.h:124
	BaseLinkedListNode * InternalRemoveHead();

	// CgsLinkedList.h:127
	BaseLinkedListNode * InternalRemoveTail();

	// CgsLinkedList.h:131
	void InternalRemoveNode(BaseLinkedListNode *);

	// CgsLinkedList.h:135
	int32_t InternalGetNodeIndex(BaseLinkedListNode *);

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *, int);

	// CgsLinkedList.h:471
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetHead() const;

	// CgsLinkedList.h:478
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:494
	void AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:503
	void AddAfter(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:512
	void AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:520
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * RemoveHead();

	// CgsLinkedList.h:527
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:543
	int GetNodeIndex(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > *) const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> : public BaseLinkedListNode {
	// CgsLanguageManager.h:53
	typedef CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*> HashIDStringArrayElement;

private:
	// CgsLinkedList.h:166
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mData;

public:
	// CgsLinkedList.h:428
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement ** GetData();

	// CgsLinkedList.h:435
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const* GetData() const;

	// CgsLinkedList.h:442
	void SetData(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const*);

	// CgsLinkedList.h:449
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetNext() const;

	// CgsLinkedList.h:455
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *, int);

	// CgsLinkedList.h:471
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetHead() const;

	// CgsLinkedList.h:478
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:494
	void AddTail(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:503
	void AddAfter(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:512
	void AddBefore(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:520
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * RemoveHead();

	// CgsLinkedList.h:527
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:543
	int GetNodeIndex(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *) const;

}

// CgsLinkedList.h:240
struct CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> {
private:
	// CgsLinkedList.h:410
	int32_t miNumNodes;

	// CgsLinkedList.h:411
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>[1024] maNodes;

	// CgsLinkedList.h:412
	LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> mFreeNodes;

	// CgsLinkedList.h:413
	LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> mUsedNodes;

public:
	// CgsLinkedList.h:246
	void LinkedListHelper();

	// CgsLinkedList.h:254
	LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> & operator=(const LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> &);

	// CgsLinkedList.h:269
	void Clear();

	// CgsLinkedList.h:276
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetHead() const;

	// CgsLinkedList.h:282
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * GetTail() const;

	// CgsLinkedList.h:289
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * AddHead(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:303
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * AddTail(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:318
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * AddAfter(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:335
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * AddBefore(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:350
	void RemoveHead();

	// CgsLinkedList.h:357
	void RemoveTail();

	// CgsLinkedList.h:365
	void RemoveNode(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:373
	int GetNodeIndex(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *) const;

	// CgsLinkedList.h:380
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * Find(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&) const;

	// CgsLinkedList.h:396
	int32_t CountElements() const;

	// CgsLinkedList.h:402
	bool IsEmpty() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *, int);

	// CgsLinkedList.h:471
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetHead() const;

	// CgsLinkedList.h:478
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *);

	// CgsLinkedList.h:494
	void AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *);

	// CgsLinkedList.h:503
	void AddAfter(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *);

	// CgsLinkedList.h:512
	void AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *);

	// CgsLinkedList.h:520
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * RemoveHead();

	// CgsLinkedList.h:527
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *);

	// CgsLinkedList.h:543
	int GetNodeIndex(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *) const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	HashTableElementData<uint32_t,renderengine::TextureState*> mData;

public:
	// CgsLinkedList.h:428
	HashTableElementData<uint32_t,renderengine::TextureState*> * GetData();

	// CgsLinkedList.h:435
	const HashTableElementData<uint32_t,renderengine::TextureState*> * GetData() const;

	// CgsLinkedList.h:442
	void SetData(const HashTableElementData<uint32_t,renderengine::TextureState*> *);

	// CgsLinkedList.h:449
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetNext() const;

	// CgsLinkedList.h:455
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *, int);

	// CgsLinkedList.h:471
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > * GetHead() const;

	// CgsLinkedList.h:478
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:494
	void AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:503
	void AddAfter(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:512
	void AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:520
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > * RemoveHead();

	// CgsLinkedList.h:527
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *);

	// CgsLinkedList.h:543
	int GetNodeIndex(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> > *) const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> : public BaseLinkedListNode {
	// CgsLanguageManager.h:53
	typedef CgsContainers::HashTableElement<uint32_t,const CgsUnicode::CgsUtf8*> HashIDStringArrayElement;

private:
	// CgsLinkedList.h:166
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mData;

public:
	// CgsLinkedList.h:428
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement ** GetData();

	// CgsLinkedList.h:435
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const* GetData() const;

	// CgsLinkedList.h:442
	void SetData(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const*);

	// CgsLinkedList.h:449
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetNext() const;

	// CgsLinkedList.h:455
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *, int);

	// CgsLinkedList.h:471
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetHead() const;

	// CgsLinkedList.h:478
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:494
	void AddTail(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:503
	void AddAfter(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:512
	void AddBefore(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:520
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * RemoveHead();

	// CgsLinkedList.h:527
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:543
	int GetNodeIndex(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *) const;

}

// CgsLinkedList.h:240
struct CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> {
private:
	// CgsLinkedList.h:410
	int32_t miNumNodes;

	// CgsLinkedList.h:411
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>[1024] maNodes;

	// CgsLinkedList.h:412
	LinkedList<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> mFreeNodes;

	// CgsLinkedList.h:413
	LinkedList<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> mUsedNodes;

public:
	// CgsLinkedList.h:246
	void LinkedListHelper();

	// CgsLinkedList.h:254
	LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> & operator=(const LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> &);

	// CgsLinkedList.h:269
	void Clear();

	// CgsLinkedList.h:276
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetHead() const;

	// CgsLinkedList.h:282
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * GetTail() const;

	// CgsLinkedList.h:289
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * AddHead(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:303
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * AddTail(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:318
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * AddAfter(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:335
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * AddBefore(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *, LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&);

	// CgsLinkedList.h:350
	void RemoveHead();

	// CgsLinkedList.h:357
	void RemoveTail();

	// CgsLinkedList.h:365
	void RemoveNode(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *);

	// CgsLinkedList.h:373
	int GetNodeIndex(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> *) const;

	// CgsLinkedList.h:380
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*> * Find(LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement *const&) const;

	// CgsLinkedList.h:396
	int32_t CountElements() const;

	// CgsLinkedList.h:402
	bool IsEmpty() const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<BrnSound::Logic::IResourceRequester*> : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	BrnSound::Logic::IResourceRequester * mData;

public:
	// CgsLinkedList.h:428
	BrnSound::Logic::IResourceRequester ** GetData();

	// CgsLinkedList.h:435
	BrnSound::Logic::IResourceRequester *const* GetData() const;

	// CgsLinkedList.h:442
	void SetData(BrnSound::Logic::IResourceRequester *const*);

	// CgsLinkedList.h:449
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetNext() const;

	// CgsLinkedList.h:455
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<BrnSound::Logic::IResourceRequester*> : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(LinkedListNode<BrnSound::Logic::IResourceRequester*> *, int);

	// CgsLinkedList.h:471
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetHead() const;

	// CgsLinkedList.h:478
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:494
	void AddTail(LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:503
	void AddAfter(LinkedListNode<BrnSound::Logic::IResourceRequester*> *, LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:512
	void AddBefore(LinkedListNode<BrnSound::Logic::IResourceRequester*> *, LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:520
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * RemoveHead();

	// CgsLinkedList.h:527
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:543
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::IResourceRequester*> *) const;

}

// CgsLinkedList.h:240
struct CgsContainers::LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u> {
private:
	// CgsLinkedList.h:410
	int32_t miNumNodes;

	// CgsLinkedList.h:411
	LinkedListNode<BrnSound::Logic::IResourceRequester*>[16] maNodes;

	// CgsLinkedList.h:412
	LinkedList<BrnSound::Logic::IResourceRequester*> mFreeNodes;

	// CgsLinkedList.h:413
	LinkedList<BrnSound::Logic::IResourceRequester*> mUsedNodes;

public:
	// CgsLinkedList.h:246
	void LinkedListHelper();

	// CgsLinkedList.h:254
	LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u> & operator=(const LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u> &);

	// CgsLinkedList.h:269
	void Clear();

	// CgsLinkedList.h:276
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetHead() const;

	// CgsLinkedList.h:282
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * GetTail() const;

	// CgsLinkedList.h:289
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * AddHead(BrnSound::Logic::IResourceRequester *const&);

	// CgsLinkedList.h:303
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * AddTail(BrnSound::Logic::IResourceRequester *const&);

	// CgsLinkedList.h:318
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * AddAfter(LinkedListNode<BrnSound::Logic::IResourceRequester*> *, BrnSound::Logic::IResourceRequester *const&);

	// CgsLinkedList.h:335
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * AddBefore(LinkedListNode<BrnSound::Logic::IResourceRequester*> *, BrnSound::Logic::IResourceRequester *const&);

	// CgsLinkedList.h:350
	void RemoveHead();

	// CgsLinkedList.h:357
	void RemoveTail();

	// CgsLinkedList.h:365
	void RemoveNode(LinkedListNode<BrnSound::Logic::IResourceRequester*> *);

	// CgsLinkedList.h:373
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::IResourceRequester*> *) const;

	// CgsLinkedList.h:380
	LinkedListNode<BrnSound::Logic::IResourceRequester*> * Find(BrnSound::Logic::IResourceRequester *const&) const;

	// CgsLinkedList.h:396
	int32_t CountElements() const;

	// CgsLinkedList.h:402
	bool IsEmpty() const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	BrnSound::Logic::ResourceRegistrar::QueuedResource mData;

public:
	// CgsLinkedList.h:428
	BrnSound::Logic::ResourceRegistrar::QueuedResource * GetData();

	// CgsLinkedList.h:435
	const BrnSound::Logic::ResourceRegistrar::QueuedResource * GetData() const;

	// CgsLinkedList.h:442
	void SetData(const BrnSound::Logic::ResourceRegistrar::QueuedResource *);

	// CgsLinkedList.h:449
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetNext() const;

	// CgsLinkedList.h:455
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource> : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *, int);

	// CgsLinkedList.h:471
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetHead() const;

	// CgsLinkedList.h:478
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:494
	void AddTail(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:503
	void AddAfter(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *, LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:512
	void AddBefore(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *, LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:520
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * RemoveHead();

	// CgsLinkedList.h:527
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:543
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *) const;

}

// CgsLinkedList.h:240
struct CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u> {
private:
	// CgsLinkedList.h:410
	int32_t miNumNodes;

	// CgsLinkedList.h:411
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>[18] maNodes;

	// CgsLinkedList.h:412
	LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource> mFreeNodes;

	// CgsLinkedList.h:413
	LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource> mUsedNodes;

public:
	// CgsLinkedList.h:246
	void LinkedListHelper();

	// CgsLinkedList.h:254
	LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u> & operator=(const LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u> &);

	// CgsLinkedList.h:269
	void Clear();

	// CgsLinkedList.h:276
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetHead() const;

	// CgsLinkedList.h:282
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * GetTail() const;

	// CgsLinkedList.h:289
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * AddHead(const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

	// CgsLinkedList.h:303
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * AddTail(const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

	// CgsLinkedList.h:318
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * AddAfter(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *, const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

	// CgsLinkedList.h:335
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * AddBefore(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *, const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

	// CgsLinkedList.h:350
	void RemoveHead();

	// CgsLinkedList.h:357
	void RemoveTail();

	// CgsLinkedList.h:365
	void RemoveNode(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *);

	// CgsLinkedList.h:373
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *) const;

	// CgsLinkedList.h:380
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * Find(const BrnSound::Logic::ResourceRegistrar::QueuedResource &) const;

	// CgsLinkedList.h:396
	int32_t CountElements() const;

	// CgsLinkedList.h:402
	bool IsEmpty() const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	BrnSound::Logic::ResourceRegistrar::RequestedResource mData;

public:
	// CgsLinkedList.h:428
	BrnSound::Logic::ResourceRegistrar::RequestedResource * GetData();

	// CgsLinkedList.h:435
	const BrnSound::Logic::ResourceRegistrar::RequestedResource * GetData() const;

	// CgsLinkedList.h:442
	void SetData(const BrnSound::Logic::ResourceRegistrar::RequestedResource *);

	// CgsLinkedList.h:449
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetNext() const;

	// CgsLinkedList.h:455
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetPrev() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource> : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *, int);

	// CgsLinkedList.h:471
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetHead() const;

	// CgsLinkedList.h:478
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:494
	void AddTail(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:503
	void AddAfter(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *, LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:512
	void AddBefore(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *, LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:520
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * RemoveHead();

	// CgsLinkedList.h:527
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:543
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *) const;

}

// CgsLinkedList.h:240
struct CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u> {
private:
	// CgsLinkedList.h:410
	int32_t miNumNodes;

	// CgsLinkedList.h:411
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>[124] maNodes;

	// CgsLinkedList.h:412
	LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource> mFreeNodes;

	// CgsLinkedList.h:413
	LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource> mUsedNodes;

public:
	// CgsLinkedList.h:246
	void LinkedListHelper();

	// CgsLinkedList.h:254
	LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u> & operator=(const LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u> &);

	// CgsLinkedList.h:269
	void Clear();

	// CgsLinkedList.h:276
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetHead() const;

	// CgsLinkedList.h:282
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * GetTail() const;

	// CgsLinkedList.h:289
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * AddHead(const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

	// CgsLinkedList.h:303
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * AddTail(const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

	// CgsLinkedList.h:318
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * AddAfter(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *, const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

	// CgsLinkedList.h:335
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * AddBefore(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *, const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

	// CgsLinkedList.h:350
	void RemoveHead();

	// CgsLinkedList.h:357
	void RemoveTail();

	// CgsLinkedList.h:365
	void RemoveNode(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

	// CgsLinkedList.h:373
	int GetNodeIndex(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *) const;

	// CgsLinkedList.h:380
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * Find(const BrnSound::Logic::ResourceRegistrar::RequestedResource &) const;

	// CgsLinkedList.h:396
	int32_t CountElements() const;

	// CgsLinkedList.h:402
	bool IsEmpty() const;

}

// CgsLinkedList.h:179
struct CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > : public BaseLinkedList {
public:
	// CgsLinkedList.h:464
	void Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *, int);

	// CgsLinkedList.h:471
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetHead() const;

	// CgsLinkedList.h:478
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetTail() const;

	// CgsLinkedList.h:486
	void AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *);

	// CgsLinkedList.h:494
	void AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *);

	// CgsLinkedList.h:503
	void AddAfter(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *);

	// CgsLinkedList.h:512
	void AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *);

	// CgsLinkedList.h:520
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * RemoveHead();

	// CgsLinkedList.h:527
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * RemoveTail();

	// CgsLinkedList.h:535
	void RemoveNode(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *);

	// CgsLinkedList.h:543
	int GetNodeIndex(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *) const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry> mData;

public:
	// CgsLinkedList.h:428
	HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry> * GetData();

	// CgsLinkedList.h:435
	const HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry> * GetData() const;

	// CgsLinkedList.h:442
	void SetData(const HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry> *);

	// CgsLinkedList.h:449
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetNext() const;

	// CgsLinkedList.h:455
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * GetPrev() const;

}

// CgsLinkedList.h:148
struct CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > : public BaseLinkedListNode {
private:
	// CgsLinkedList.h:166
	HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*> mData;

public:
	// CgsLinkedList.h:428
	HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*> * GetData();

	// CgsLinkedList.h:435
	const HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*> * GetData() const;

	// CgsLinkedList.h:442
	void SetData(const HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*> *);

	// CgsLinkedList.h:449
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetNext() const;

	// CgsLinkedList.h:455
	CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> > * GetPrev() const;

}

