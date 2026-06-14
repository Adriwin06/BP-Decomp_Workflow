// vechashmap.h:153
struct VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u> {
	struct Node;

private:
	// vechashmap.h:527
	VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node * mTable;

	// vechashmap.h:528
	short unsigned int mTableSize;

	// vechashmap.h:529
	short unsigned int mNumEntries;

	// vechashmap.h:530
	short unsigned int mFixedAlloc;

	// vechashmap.h:531
	short unsigned int mWorstCollision;

public:
	// vechashmap.h:155
	void VecHashMap(unsigned int);

	// vechashmap.h:162
	void ~VecHashMap();

	// vechashmap.h:167
	bool ValidIndex(unsigned int) const;

	// vechashmap.h:168
	Attribute::Key GetKeyAtIndex(unsigned int) const;

	// vechashmap.h:169
	Attrib::Collection * GetPtrAtIndex(unsigned int) const;

	// vechashmap.h:170
	unsigned int Size() const;

	// vechashmap.h:171
	unsigned int Capacity() const;

	// vechashmap.h:173
	void Clear();

	// vechashmap.h:199
	bool Add(long long unsigned int, Attrib::Collection *);

	// vechashmap.h:210
	Attrib::Collection * RemoveIndex(unsigned int);

	// vechashmap.h:231
	Attrib::Collection * Remove(long long unsigned int);

	// vechashmap.h:238
	void DeleteIndex(unsigned int);

	// vechashmap.h:245
	void Delete(long long unsigned int);

	// vechashmap.h:252
	unsigned int FindIndex(long long unsigned int) const;

	// vechashmap.h:271
	Attrib::Collection * Find(long long unsigned int) const;

	// vechashmap.h:280
	unsigned int GetNextValidIndex(unsigned int) const;

	// vechashmap.h:302
	void Reserve(unsigned int);

	// vechashmap.h:308
	void SetTableBuffer(void *, unsigned int);

	// vechashmap.h:337
	size_t GetTableNodeSize() const;

private:
	// vechashmap.h:373
	bool InternalAdd(long long unsigned int, Attrib::Collection *);

	// vechashmap.h:403
	unsigned int UpdateSearchLength(unsigned int, unsigned int);

	// vechashmap.h:459
	void CopyFromOldTable(VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node *, unsigned int, bool);

	// vechashmap.h:476
	void RebuildTable(unsigned int);

	// vechashmap.h:510
	void ValidateTable() const;

}

// vechashmap.h:344
struct VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node {
private:
	// vechashmap.h:368
	Attribute::Key mKey;

	// vechashmap.h:369
	Attrib::Collection * mPtr;

	// vechashmap.h:370
	unsigned int mMax;

public:
	// vechashmap.h:349
	void Node();

	// vechashmap.h:350
	void Node(long long unsigned int, Attrib::Collection *);

	// vechashmap.h:351
	const Node & operator=(const Node &);

	// vechashmap.h:352
	bool operator==(const Node &) const;

	// vechashmap.h:353
	bool operator!=(const Node &) const;

	// vechashmap.h:354
	bool operator<(const Node &) const;

	// vechashmap.h:355
	bool operator==(long long unsigned int) const;

	// vechashmap.h:356
	bool operator!=(long long unsigned int) const;

	// vechashmap.h:357
	bool operator<(long long unsigned int) const;

	// vechashmap.h:358
	bool IsValid() const;

	// vechashmap.h:359
	void Invalidate();

	// vechashmap.h:360
	Attrib::Collection * Get() const;

	// vechashmap.h:361
	Attribute::Key Key() const;

	// vechashmap.h:362
	unsigned int MaxSearch() const;

	// vechashmap.h:363
	void ResetSearchLength(unsigned int);

	// vechashmap.h:364
	void SetSearchLength(unsigned int);

	// vechashmap.h:365
	void Move(Node &);

private:
	// vechashmap.h:367
	void Node(const Node &);

}

// vechashmap.h:344
struct VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node {
private:
	// vechashmap.h:368
	Attribute::Key mKey;

	// vechashmap.h:369
	Class * mPtr;

	// vechashmap.h:370
	unsigned int mMax;

public:
	// vechashmap.h:349
	void Node();

	// vechashmap.h:350
	void Node(long long unsigned int, Class *);

	// vechashmap.h:351
	const Node & operator=(const Node &);

	// vechashmap.h:352
	bool operator==(const Node &) const;

	// vechashmap.h:353
	bool operator!=(const Node &) const;

	// vechashmap.h:354
	bool operator<(const Node &) const;

	// vechashmap.h:355
	bool operator==(long long unsigned int) const;

	// vechashmap.h:356
	bool operator!=(long long unsigned int) const;

	// vechashmap.h:357
	bool operator<(long long unsigned int) const;

	// vechashmap.h:358
	bool IsValid() const;

	// vechashmap.h:359
	void Invalidate();

	// vechashmap.h:360
	Class * Get() const;

	// vechashmap.h:361
	Attribute::Key Key() const;

	// vechashmap.h:362
	unsigned int MaxSearch() const;

	// vechashmap.h:363
	void ResetSearchLength(unsigned int);

	// vechashmap.h:364
	void SetSearchLength(unsigned int);

	// vechashmap.h:365
	void Move(Node &);

private:
	// vechashmap.h:367
	void Node(const Node &);

}

// vechashmap.h:51
extern unsigned int RotateNTo32<long long unsigned int>(long long unsigned int  v, unsigned int  amount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

