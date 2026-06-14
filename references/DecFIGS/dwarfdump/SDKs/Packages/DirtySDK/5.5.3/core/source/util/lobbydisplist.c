// lobbydisplist.c:112
int32_t DispListExpand(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:113
	int32_t size;

	// lobbydisplist.c:114
	DispListT * list;

	// lobbydisplist.c:115
	DispListT ** view;

}

// lobbydisplist.c:188
int32_t DispListCompare(void *  zref, const void *  p1, const void *  p2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:190
	DispListRef * ref;

	// lobbydisplist.c:191
	DispListT * q1;

	// lobbydisplist.c:192
	DispListT * q2;

}

// lobbydisplist.c:220
extern DispListRef * DispListCreate(int32_t  basis, int32_t  addcnt, int32_t  addpct) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:221
	DispListRef * ref;

	// lobbydisplist.c:222
	int32_t memgroup;

}

// lobbydisplist.c:261
extern void DispListDestroy(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbydisplist.c:264
		DispListT * kill;

	}
}

// lobbydisplist.c:294
extern void DispListClear(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:295
	int32_t idx;

	// lobbydisplist.c:296
	DispListT * item;

}

// lobbydisplist.c:333
extern DispListT * DispListAdd(DispListRef *  ref, void *  recptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:334
	DispListT * item;

}

// lobbydisplist.c:385
extern void DispListSet(DispListRef *  ref, DispListT *  item, void *  recptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:418
extern void * DispListGet(DispListRef *  ref, DispListT *  item) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:443
extern void * DispListDelByIndex(DispListRef *  ref, int32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:444
	void * data;

	// lobbydisplist.c:445
	DispListT * item;

}

// lobbydisplist.c:498
extern void * DispListDel(DispListRef *  ref, DispListT *  item) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:499
	int32_t idx;

}

// lobbydisplist.c:528
extern int32_t DispListCount(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:553
extern int32_t DispListShown(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:579
extern void * DispListIndex(DispListRef *  ref, int32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:612
extern void DispListSort(DispListRef *  ref, void *  sortref, int32_t  sortcon, int32_t (*)(void *, int32_t, void *, void *)  sortptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:644
extern void DispListFilt(DispListRef *  ref, void *  filtref, int32_t  filtcon, int32_t (*)(void *, int32_t, void *)  filtptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:673
extern int32_t DispListChange(DispListRef *  ref, int32_t  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:700
extern int32_t DispListDirty(DispListRef *  ref, int32_t  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:726
extern int32_t DispListOrder(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbydisplist.c:727
	DispListT ** src;

	// lobbydisplist.c:727
	DispListT ** dst1;

	// lobbydisplist.c:727
	DispListT ** dst2;

}

// lobbydisplist.c:785
extern void DispListDataSet(DispListRef *  ref, void *  dataref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbydisplist.c:805
extern void * DispListDataGet(DispListRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

