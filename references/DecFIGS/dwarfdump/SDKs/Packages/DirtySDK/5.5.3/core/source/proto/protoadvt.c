// protoadvt.c:42
struct ProtoAdvtPacketT {
	// protoadvt.c:44
	uint8_t[3] ident;

	// protoadvt.c:46
	uint8_t freq;

	// protoadvt.c:48
	uint8_t[4] seqn;

	// protoadvt.c:53
	char[32] kind;

	// protoadvt.c:55
	char[32] name;

	// protoadvt.c:57
	char[192] note;

	// protoadvt.c:59
	char[120] addr;

}

// protoadvt.c:60
typedef ProtoAdvtPacketT ProtoAdvtPacketT;

// protoadvt.c:64
struct ServListT {
	// protoadvt.c:66
	ProtoAdvtPacketT packet;

	// protoadvt.c:68
	uint32_t timeout;

	// protoadvt.c:70
	char[16] inetdot;

	// protoadvt.c:71
	uint32_t inetval;

	// protoadvt.c:72
	uint32_t hostval;

	// protoadvt.c:74
	int32_t local;

	// protoadvt.c:76
	ServListT * next;

}

// protoadvt.c:77
typedef ServListT ServListT;

// protoadvt.c:137
int32_t _ProtoAdvtSendPacket(ProtoAdvtRef *  pRef, const ProtoAdvtPacketT *  pPacket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:138
	int32_t iPacketSize;

}

// protoadvt.c:190
int32_t _ProtoAdvtRecvPacket(ProtoAdvtRef *  pRef, ProtoAdvtPacketT *  pPacket, sockaddr *  pFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:191
	int32_t iFromLen;

}

// protoadvt.c:240
void _ProtoAdvtRequestSeed(ProtoAdvtRef *  pRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:242
	ProtoAdvtPacketT Packet;

}

// protoadvt.c:274
int32_t _ProtoAdvtCallback(SocketT *  sock, int32_t  flags, void *  _ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:275
	int32_t len;

	// protoadvt.c:276
	int32_t local;

	// protoadvt.c:277
	sockaddr base;

	// protoadvt.c:278
	sockaddr from;

	// protoadvt.c:279
	ServListT * list;

	// protoadvt.c:279
	ServListT * item;

	// protoadvt.c:279
	ServListT ** link;

	// protoadvt.c:280
	ProtoAdvtPacketT packet;

	// protoadvt.c:281
	ProtoAdvtRef * ref;

	// protoadvt.c:282
	uint32_t tick;

}

// protoadvt.c:487
extern int32_t ProtoAdvtSnoop(ProtoAdvtRef *  ref, int32_t *  revn, char *  buffer, int32_t  buflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:488
	int32_t len;

}

// protoadvt.c:538
extern int32_t ProtoAdvtAnnounce(ProtoAdvtRef *  ref, const char *  kind, const char *  name, const char *  note, const char *  addr, int32_t  freq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:539
	ServListT * list;

	// protoadvt.c:540
	ServListT * item;

}

// protoadvt.c:649
extern int32_t ProtoAdvtCancel(ProtoAdvtRef *  ref, const char *  kind, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:650
	ServListT * list;

}

// protoadvt.c:697
extern int32_t ProtoAdvtQuery(ProtoAdvtRef *  ref, const char *  kind, const char *  proto, char *  buffer, int32_t  buflen, int32_t  local) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:698
	char * s;

	// protoadvt.c:698
	char * t;

	// protoadvt.c:698
	char * u;

	// protoadvt.c:699
	char[256] addr;

	// protoadvt.c:700
	char[512] record;

	// protoadvt.c:701
	int32_t count;

	// protoadvt.c:702
	ServListT * list;

}

// protoadvt.c:826
extern uint32_t ProtoAdvtLocate(ProtoAdvtRef *  ref, const char *  kind, const char *  name, uint32_t *  host, uint32_t  defval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:827
	ServListT * list;

}

// protoadvt.c:879
extern ProtoAdvtRef * ProtoAdvtConstruct(int32_t  limit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:880
	SocketT * sock;

	// protoadvt.c:881
	sockaddr bindaddr;

	// protoadvt.c:882
	sockaddr peeraddr;

	// protoadvt.c:883
	ProtoAdvtRef * ref;

	// protoadvt.c:884
	int32_t iMemGroup;

	{
		// protoadvt.c:940
		uint32_t val2;

	}
}

// protoadvt.c:981
extern void ProtoAdvtDestroy(ProtoAdvtRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoadvt.c:982
	SocketT * sock;

	{
		// protoadvt.c:1004
		ProtoAdvtPacketT * packet;

	}
}

// protoadvt.c:110
int32_t g_count;

// protoadvt.c:111
ProtoAdvtRef * g_ref;

