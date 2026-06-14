// protoadvt.h:223
typedef ProtoAdvtRef ProtoAdvtRef;

// protoadvt.h:223
struct ProtoAdvtRef {
	// protoadvt.c:83
	NetCritT crit;

	// protoadvt.c:85
	ServListT * announce;

	// protoadvt.c:87
	ServListT * snoopbuf;

	// protoadvt.c:88
	ServListT * snoopend;

	// protoadvt.c:90
	int32_t memgroup;

	// protoadvt.c:92
	int32_t seed;

	// protoadvt.c:94
	int32_t usage;

	// protoadvt.c:96
	SocketT * sock;

	// protoadvt.c:98
	sockaddr addr;

	// protoadvt.c:100
	int32_t snoop;

}

