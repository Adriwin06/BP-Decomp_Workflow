// attribhashmap.h:40
struct Attrib::Array {
private:
	// attribhashmap.h:225
	uint16_t mAlloc;

	// attribhashmap.h:226
	uint16_t mCount;

	// attribhashmap.h:227
	uint16_t mSize;

	// attribhashmap.h:228
	uint16_t mEncodedTypePad;

	// attribhashmap.h:43
	uint8_t * BasePointer() const;

	// attribhashmap.h:44
	void * Data(unsigned int) const;

public:
	// attribhashmap.h:53
	void SetTypeIndex(uint16_t);

	// attribhashmap.h:55
	const Attrib::Array & operator=(const Attrib::Array &);

	// attribhashmap.h:69
	bool IsReferences() const;

	// attribhashmap.h:70
	uint16_t GetTypeIndex() const;

	// attribhashmap.h:71
	unsigned int GetTypeSize() const;

	// attribhashmap.h:72
	unsigned int GetElementSize() const;

	// attribhashmap.h:73
	unsigned int GetAlloc() const;

	// attribhashmap.h:74
	unsigned int GetCount() const;

	// attribhashmap.h:75
	unsigned int GetPad() const;

	// attribhashmap.h:76
	const TypeDesc & GetTypeDesc() const;

	// attribhashmap.h:78
	bool SetCount(unsigned int);

	// attribhashmap.h:92
	void * GetData(unsigned int) const;

	// attribhashmap.h:105
	void SetData(unsigned int, void *);

	// attribhashmap.h:121
	void CopyData(unsigned int, void *);

	// attribhashmap.h:138
	unsigned int AllocSizeFromCount(unsigned int, unsigned int, bool, unsigned int &);

	// attribhashmap.h:146
	Attrib::Array * CreateInPlace(void *, Attribute::Type, unsigned int, unsigned int);

	// attribhashmap.h:155
	Attrib::Array * Create(Attribute::Type, unsigned int);

	// attribhashmap.h:167
	Attrib::Array * Create(Attrib::Array *);

	// attribhashmap.h:173
	void Destroy(Attrib::Array *);

private:
	// attribhashmap.h:182
	void Array(unsigned int, unsigned int, unsigned int, unsigned int, bool);

	// attribhashmap.h:193
	void Array(const Attrib::Array &);

	// attribhashmap.h:209
	void ~Array();

}

// attribhashmap.h:241
struct Attrib::Node {
private:
	// attribhashmap.h:349
	Attribute::Key mKey;

	// attribhashmap.h:350
	union {
		// attribhashmap.h:351
		void * mPtr;

		// attribhashmap.h:352
		Attrib::Array * mArray;

		// attribhashmap.h:353
		uintptr_t mValue;

		// attribhashmap.h:354
		uintptr_t mOffset;

	}

	// attribhashmap.h:356
	uint16_t mTypeIndex;

	// attribhashmap.h:357
	uint8_t mMax;

	// attribhashmap.h:358
	uint8_t mFlags;

	// attribhashmap.h:243
	bool GetFlag(unsigned int) const;

	// attribhashmap.h:244
	void SetFlag(unsigned int, bool);

public:
	// attribhashmap.h:247
	void * operator new(size_t);

	// attribhashmap.h:247
	void operator delete(void *, size_t);

	// attribhashmap.h:247
	void * operator new(size_t, void *);

	// attribhashmap.h:247
	void operator delete(void *, void *);

	// attribhashmap.h:262
	void Node();

	// attribhashmap.h:263
	void Node(Attribute::Key, Attribute::Type, void *, bool, uint8_t, void *);

	// attribhashmap.h:270
	const Node & operator=(const Node &);

	// attribhashmap.h:271
	bool operator==(const Node &) const;

	// attribhashmap.h:272
	bool operator!=(const Node &) const;

	// attribhashmap.h:273
	bool operator<(const Node &) const;

	// attribhashmap.h:274
	bool operator==(Attribute::Key) const;

	// attribhashmap.h:275
	bool operator!=(Attribute::Key) const;

	// attribhashmap.h:276
	bool operator<(Attribute::Key) const;

	// attribhashmap.h:278
	bool RequiresRelease() const;

	// attribhashmap.h:279
	bool IsArray() const;

	// attribhashmap.h:280
	bool IsInherited() const;

	// attribhashmap.h:281
	bool IsLaidOut() const;

	// attribhashmap.h:282
	bool IsStatic() const;

	// attribhashmap.h:283
	bool IsByValue() const;

	// attribhashmap.h:284
	bool HasHandler() const;

	// attribhashmap.h:286
	void Invalidate();

	// attribhashmap.h:287
	bool IsValid() const;

	// attribhashmap.h:289
	void * GetPointer(void *, const Attrib::Collection *) const;

	// attribhashmap.h:301
	void * GetPointer(const void *, const Attrib::Collection *) const;

	// attribhashmap.h:306
	Attrib::Array * GetArray(void *, const Attrib::Collection *) const;

	// attribhashmap.h:316
	void SetArray(Attrib::Array *, bool);

	// attribhashmap.h:323
	Attribute::Key GetKey() const;

	// attribhashmap.h:324
	Attribute::Type GetType() const;

	// attribhashmap.h:325
	unsigned int GetSize(void *, const Attrib::Collection *) const;

	// attribhashmap.h:326
	unsigned int GetCount(void *, const Attrib::Collection *) const;

	// attribhashmap.h:327
	const TypeDesc & GetTypeDesc() const;

	// attribhashmap.h:329
	unsigned int MaxSearch() const;

	// attribhashmap.h:330
	void ResetSearchLength(unsigned int);

	// attribhashmap.h:331
	void SetSearchLength(unsigned int);

	// attribhashmap.h:333
	void Move(Node &);

private:
	// attribhashmap.h:346
	void Node(const Node &);

}

// attribhashmap.h:392
struct Attrib::HashMap {
private:
	// attribhashmap.h:720
	Attrib::Node * mTable;

	// attribhashmap.h:721
	uint16_t mTableSize;

	// attribhashmap.h:722
	uint16_t mNumEntries;

	// attribhashmap.h:723
	uint16_t mRefCount;

	// attribhashmap.h:724
	uint8_t mWorstCollision;

	// attribhashmap.h:725
	uint8_t mKeyShift;

public:
	// attribhashmap.h:394
	void * operator new(size_t);

	// attribhashmap.h:394
	void operator delete(void *, size_t);

	// attribhashmap.h:394
	void * operator new(size_t, void *);

	// attribhashmap.h:394
	void operator delete(void *, void *);

	// attribhashmap.h:399
	void HashMap(unsigned int, unsigned int, bool);

	// attribhashmap.h:410
	void ~HashMap();

	// attribhashmap.h:417
	bool ValidIndex(unsigned int) const;

	// attribhashmap.h:418
	Attribute::Key GetKeyAtIndex(unsigned int) const;

	// attribhashmap.h:419
	Attrib::Node * GetNodeAtIndex(unsigned int) const;

	// attribhashmap.h:420
	bool IsArrayAtIndex(unsigned int) const;

	// attribhashmap.h:421
	unsigned int Size() const;

	// attribhashmap.h:425
	bool Add(Attribute::Key, Attribute::Type, void *, bool, uint8_t, bool, void *);

	// attribhashmap.h:445
	void * Remove(Attrib::Node *, void *, const Attrib::Collection *, bool);

	// attribhashmap.h:472
	void * RemoveIndex(unsigned int, void *, const Attrib::Collection *, bool &);

	// attribhashmap.h:484
	unsigned int FindIndex(Attribute::Key) const;

	// attribhashmap.h:502
	Attrib::Node * Find(Attribute::Key) const;

	// attribhashmap.h:511
	unsigned int GetNextValidIndex(unsigned int) const;

	// attribhashmap.h:529
	void RebuildTable(unsigned int);

	// attribhashmap.h:564
	void Reserve(unsigned int);

	// attribhashmap.h:569
	unsigned int Capacity() const;

	// attribhashmap.h:574
	unsigned int Count() const;

	// attribhashmap.h:579
	unsigned int WorstCollision() const;

	// attribhashmap.h:584
	unsigned int KeyShift() const;

	// attribhashmap.h:589
	unsigned int CountSearchCacheLines(Attribute::Key, unsigned int) const;

	// attribhashmap.h:617
	void ClearForRelease();

	// attribhashmap.h:622
	void AddRef() const;

	// attribhashmap.h:623
	bool Release() const;

	// attribhashmap.h:624
	unsigned int GetRefs() const;

	// attribhashmap.h:625
	bool IsReferenced() const;

private:
	// attribhashmap.h:628
	void Transfer(Node &);

	// attribhashmap.h:641
	unsigned int UpdateSearchLength(unsigned int, unsigned int);

	// attribhashmap.h:697
	unsigned int PreFlightAdd(Attribute::Key, unsigned int, unsigned int &);

	// attribhashmap.h:712
	void PostFlightAdd(unsigned int, unsigned int);

}

// attribhashmap.h:368
struct Attrib::HashMapTablePolicy {
public:
	// attribhashmap.h:370
	void * Alloc(size_t);

	// attribhashmap.h:371
	void Free(void *, size_t);

	// attribhashmap.h:372
	unsigned int TableSize(unsigned int);

	// attribhashmap.h:373
	unsigned int GrowRequest(unsigned int, bool);

	// attribhashmap.h:374
	unsigned int KeyIndex(Attribute::Key, unsigned int, unsigned int);

	// attribhashmap.h:375
	unsigned int WrapIndex(unsigned int, unsigned int, unsigned int);

}

