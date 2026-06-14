// netgameutil.c:111
struct {
	// netgameutil.c:106
	CommRef * comm;

	// netgameutil.c:108
	uint32_t tick;

	// netgameutil.c:110
	uint32_t wait;

}

// netgameutil.c:146
ProtoAdvtRef * _NetGameUtilAdvtConstruct(NetGameUtilRefT *  pRef, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgameutil.c:147
	ProtoAdvtRef * pAdvt;

}

// netgameutil.c:174
extern NetGameUtilRefT * NetGameUtilCreate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgameutil.c:175
	NetGameUtilRefT * pRef;

	// netgameutil.c:176
	int32_t iMemGroup;

}

// netgameutil.c:211
extern void NetGameUtilDestroy(NetGameUtilRefT *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:234
extern void NetGameUtilReset(NetGameUtilRefT *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgameutil.c:235
	int32_t i;

}

// netgameutil.c:290
extern void NetGameUtilControl(NetGameUtilRefT *  pRef, int32_t  iKind, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:348
extern int32_t NetGameUtilConnect(NetGameUtilRefT *  ref, int32_t  conn, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgameutil.c:349
	int32_t i;

	// netgameutil.c:349
	int32_t iErr;

}

// netgameutil.c:465
extern void * NetGameUtilComplete(NetGameUtilRefT *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgameutil.c:466
	int32_t i;

	// netgameutil.c:467
	int32_t conn;

	// netgameutil.c:468
	uint32_t tick;

	{
		// netgameutil.c:479
		char[256] text;

		// netgameutil.c:480
		uint32_t peer;

		// netgameutil.c:480
		uint32_t host;

	}
}

// netgameutil.c:598
extern int32_t NetGameUtilStatus(NetGameUtilRefT *  ref, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:651
extern void NetGameUtilAdvert(NetGameUtilRefT *  ref, const char *  kind, const char *  name, const char *  note) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:683
extern void NetGameUtilWithdraw(NetGameUtilRefT *  ref, const char *  kind, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:708
extern uint32_t NetGameUtilLocate(NetGameUtilRefT *  ref, const char *  kind, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgameutil.c:742
extern int32_t NetGameUtilQuery(NetGameUtilRefT *  ref, const char *  kind, char *  buf, int32_t  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

