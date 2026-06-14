// commtcp.c:60
struct {
	// commtcp.c:59
	uint32_t when;

}

// commtcp.c:66
struct {
	// commtcp.c:64
	int16_t len;

	// commtcp.c:65
	char[2048] data;

}

// commtcp.c:67
struct {
	// commtcp.c:60
	// commtcp.c:60
	struct {
		// commtcp.c:59
		uint32_t when;

	}

 head;

	// commtcp.c:66
	// commtcp.c:66
	struct {
		// commtcp.c:64
		int16_t len;

		// commtcp.c:65
		char[2048] data;

	}

 body;

}

// commtcp.c:67
typedef structure  RawTCPPacketT;

// commtcp.c:84
enum {
	DEAD = 0,
	IDLE = 1,
	CONN = 2,
	LIST = 3,
	OPEN = 4,
	CLOSE = 5,
}

// commtcp.c:173
void _CommTCPSetAddrInfo(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:174
	sockaddr SockAddr;

}

// commtcp.c:211
void _CommTCPSetSocket(CommTCPRef *  pRef, SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:232
void _CommTCPResetTransfer(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:264
int32_t _CommTCPClose(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:294
int32_t _CommTCPEventExclusive(CommTCPRef *  ref, uint32_t  tick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:295
	int32_t len;

	// commtcp.c:296
	int32_t count;

	// commtcp.c:297
	RawTCPPacketT * packet;

	// commtcp.c:298
	char * buffer;

	{
		// commtcp.c:318
		sockaddr addr;

		// commtcp.c:319
		int32_t addrlen;

		// commtcp.c:320
		SocketT * sock2;

	}
}

// commtcp.c:521
int32_t _CommTCPEvent(SocketT *  sock, int32_t  flags, void *  _ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:522
	CommTCPRef * ref;

	{
		// commtcp.c:527
		uint32_t tick;

	}
}

// commtcp.c:560
extern CommTCPRef * CommTCPConstruct(int32_t  maxwid, int32_t  maxinp, int32_t  maxout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:561
	CommTCPRef * ref;

	// commtcp.c:562
	int32_t iMemGroup;

}

// commtcp.c:634
extern void CommTCPDestroy(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:674
extern void CommTCPCallback(CommTCPRef *  ref, void (*)(CommRef *, int32_t)  callback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:704
extern int32_t CommTCPResolve(CommTCPRef *  ref, const char *  addr, char *  buf, int32_t  len, char  div) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:725
extern void CommTCPUnresolve(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:745
extern int32_t CommTCPUnlisten(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:780
extern int32_t CommTCPUnconnect(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:815
extern int32_t CommTCPStatus(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:848
extern uint32_t CommTCPTick(CommTCPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commtcp.c:874
extern int32_t CommTCPSend(CommTCPRef *  ref, const void *  buffer, int32_t  length, uint32_t  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:875
	int32_t pos;

	// commtcp.c:876
	RawTCPPacketT * packet;

}

// commtcp.c:950
extern int32_t CommTCPPeek(CommTCPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:951
	RawTCPPacketT * packet;

}

// commtcp.c:993
extern int32_t CommTCPRecv(CommTCPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:995
	int32_t len;

}

// commtcp.c:1021
extern int32_t CommTCPListen(CommTCPRef *  ref, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:1022
	int32_t err;

	// commtcp.c:1023
	sockaddr bindaddr;

	// commtcp.c:1024
	SocketT * sock;

}

// commtcp.c:1097
extern int32_t CommTCPConnect(CommTCPRef *  ref, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commtcp.c:1098
	SocketT * sock;

}

