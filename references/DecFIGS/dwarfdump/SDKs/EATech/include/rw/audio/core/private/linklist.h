// linklist.h:33
struct rw::audio::core::ListNode {
private:
	// linklist.h:36
	ListNode * pnext;

public:
	// linklist.h:40
	void SetNext(ListNode *);

	// linklist.h:45
	ListNode * GetNext() const;

}

// linklist.h:55
struct rw::audio::core::ListDNode {
private:
	// linklist.h:57
	ListDNode * pnext;

	// linklist.h:58
	ListDNode * pprev;

public:
	// linklist.h:62
	void SetNext(ListDNode *);

	// linklist.h:67
	void SetPrev(ListDNode *);

	// linklist.h:72
	ListDNode * GetNext() const;

	// linklist.h:77
	ListDNode * GetPrev() const;

}

// linklist.h:143
struct rw::audio::core::ListDStack {
private:
	// linklist.h:145
	ListDNode * phead;

public:
	// linklist.h:149
	void ListDStack();

	// linklist.h:154
	void Reset();

	// linklist.h:159
	bool IsEmpty();

	// linklist.h:164
	ListDNode * GetHead() const;

	// linklist.h:169
	void Push(ListDNode *);

	// linklist.h:185
	ListDNode * Pop();

	// linklist.h:204
	void Remove(ListDNode *);

}

// linklist.h:237
struct rw::audio::core::ListQueue {
private:
	// linklist.h:239
	ListNode * phead;

	// linklist.h:240
	ListNode * ptail;

	// linklist.h:242
	int entries;

public:
	// linklist.h:247
	void ListQueue();

	// linklist.h:254
	void Reset();

	// linklist.h:261
	bool IsEmpty();

	// linklist.h:266
	ListNode * GetHead() const;

	// linklist.h:271
	ListNode * GetTail() const;

	// linklist.h:276
	int GetEntries() const;

	// linklist.h:281
	void Push(ListNode *);

	// linklist.h:298
	void PushTail(ListNode *);

	// linklist.h:325
	ListNode * Pop();

}

