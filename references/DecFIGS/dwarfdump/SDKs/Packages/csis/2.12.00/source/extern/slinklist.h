// slinklist.h:28
struct CListDNode {
private:
	// slinklist.h:35
	int padTo64Bit1;

	// slinklist.h:37
	CListDNode * pnext;

	// slinklist.h:40
	int padTo64Bit2;

	// slinklist.h:42
	CListDNode * pprev;

public:
	// slinklist.h:45
	void SetNext(CListDNode *);

	// slinklist.h:46
	void SetPrev(CListDNode *);

	// slinklist.h:47
	CListDNode * GetNext();

	// slinklist.h:48
	CListDNode * GetPrev();

}

// slinklist.h:96
struct CListDStack {
private:
	// slinklist.h:99
	int padTo64Bit1;

	// slinklist.h:101
	CListDNode * phead;

public:
	// slinklist.h:104
	CListDStack();

	// slinklist.h:106
	void Reset();

	// slinklist.h:108
	bool IsEmpty();

	// slinklist.h:110
	CListDNode * GetHead();

	// slinklist.h:112
	void Push(CListDNode *);

	// slinklist.h:129
	CListDNode * Pop();

	// slinklist.h:148
	void Remove(CListDNode *);

}

