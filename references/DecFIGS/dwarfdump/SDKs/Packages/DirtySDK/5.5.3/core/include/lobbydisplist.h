// lobbydisplist.h:43
typedef DispListRef DispListRef;

// lobbydisplist.h:45
typedef DispListT DispListT;

// lobbydisplist.h:43
struct DispListRef {
	// lobbydisplist.c:51
	int32_t memgroup;

	// lobbydisplist.c:53
	int32_t addcnt;

	// lobbydisplist.c:54
	int32_t addpct;

	// lobbydisplist.c:56
	int32_t change;

	// lobbydisplist.c:57
	int32_t dirty;

	// lobbydisplist.c:59
	int32_t avail;

	// lobbydisplist.c:60
	int32_t shown;

	// lobbydisplist.c:61
	int32_t count;

	// lobbydisplist.c:63
	int32_t filtcon;

	// lobbydisplist.c:64
	void * filtref;

	// lobbydisplist.c:65
	int32_t (*)(void *, int32_t, void *) filtptr;

	// lobbydisplist.c:67
	int32_t sortcon;

	// lobbydisplist.c:68
	void * sortref;

	// lobbydisplist.c:69
	int32_t (*)(void *, int32_t, void *, void *) sortptr;

	// lobbydisplist.c:71
	void * dataref;

	// lobbydisplist.c:73
	DispListT * free;

	// lobbydisplist.c:74
	DispListT * list;

	// lobbydisplist.c:75
	DispListT ** view;

}

// lobbydisplist.h:45
struct DispListT {
	// lobbydisplist.c:45
	void * data;

}

