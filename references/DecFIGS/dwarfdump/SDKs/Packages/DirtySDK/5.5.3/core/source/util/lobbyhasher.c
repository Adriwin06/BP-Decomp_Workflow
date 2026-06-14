// lobbyhasher.c:54
union {
	// lobbyhasher.c:52
	int32_t val;

	// lobbyhasher.c:53
	const char * ptr;

}
// lobbyhasher.c:46
struct HasherT {
	// lobbyhasher.c:47
	HasherT * next;

	// lobbyhasher.c:48
	void * data;

	// lobbyhasher.c:54
	// lobbyhasher.c:54
	union {
		// lobbyhasher.c:52
		int32_t val;

		// lobbyhasher.c:53
		const char * ptr;

	}
 key;

}

// lobbyhasher.c:55
typedef HasherT HasherT;

// lobbyhasher.c:59
struct HashEnumT {
	// lobbyhasher.c:60
	int32_t idx;

	// lobbyhasher.c:61
	HasherT * curr;

}

// lobbyhasher.c:62
typedef HashEnumT HashEnumT;

// lobbyhasher.c:112
extern HasherRef * HasherCreate(int32_t  initial, int32_t  hashlen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:113
	HasherRef * ref;

	// lobbyhasher.c:114
	int32_t iMemGroup;

}

// lobbyhasher.c:160
extern void HasherDestroy(HasherRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyhasher.c:164
		HasherT * root;

	}
}

// lobbyhasher.c:191
extern void HasherSetStrCompareFunc(HasherRef *  ref, HasherCompareF *  compare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyhasher.c:211
extern void HasherClear(HasherRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:212
	int32_t idx;

	// lobbyhasher.c:213
	HasherT * item;

}

// lobbyhasher.c:251
extern int32_t HasherExpand(HasherRef *  ref, int32_t  expand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:252
	HasherT * table;

	// lobbyhasher.c:253
	HasherT * item;

}

// lobbyhasher.c:303
extern void * HasherFlush(HasherRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:304
	HasherT * item;

}

// lobbyhasher.c:342
extern int32_t HasherCount(HasherRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyhasher.c:362
int32_t HashStrHash(HasherRef *  ref, const char *  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:363
	int32_t hash;

}

// lobbyhasher.c:398
extern int32_t HashStrAdd(HasherRef *  ref, const char *  key, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:399
	HasherT * item;

	// lobbyhasher.c:400
	int32_t hash;

}

// lobbyhasher.c:442
extern void * HashStrReplace(HasherRef *  ref, const char *  key, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:443
	void * old;

	// lobbyhasher.c:444
	HasherT * item;

	// lobbyhasher.c:445
	int32_t hash;

}

// lobbyhasher.c:476
extern void * HashStrFind(HasherRef *  ref, const char *  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:477
	HasherT * item;

	// lobbyhasher.c:478
	int32_t hash;

}

// lobbyhasher.c:509
extern void * HashStrDel(HasherRef *  ref, const char *  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:510
	HasherT * item;

	// lobbyhasher.c:510
	HasherT ** link;

	// lobbyhasher.c:511
	int32_t hash;

}

// lobbyhasher.c:562
extern int32_t HashNumAdd(HasherRef *  ref, int32_t  key, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:563
	HasherT * item;

	// lobbyhasher.c:564
	int32_t hash;

}

// lobbyhasher.c:606
extern void * HashNumReplace(HasherRef *  ref, int32_t  key, void *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:607
	void * old;

	// lobbyhasher.c:608
	HasherT * item;

	// lobbyhasher.c:609
	int32_t hash;

}

// lobbyhasher.c:640
extern void * HashNumFind(HasherRef *  ref, int32_t  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:641
	HasherT * item;

	// lobbyhasher.c:642
	int32_t hash;

}

// lobbyhasher.c:673
extern void * HashNumDel(HasherRef *  ref, int32_t  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:674
	HasherT * item;

	// lobbyhasher.c:674
	HasherT ** link;

	// lobbyhasher.c:675
	int32_t hash;

}

// lobbyhasher.c:724
extern void HasherEnumInit(HasherRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyhasher.c:745
extern void * HasherEnum(HasherRef *  ref, void **  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyhasher.c:746
	HasherT * item;

}

