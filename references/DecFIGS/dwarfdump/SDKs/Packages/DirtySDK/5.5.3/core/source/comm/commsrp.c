// commsrp.c:128
struct {
	// commsrp.c:126
	uint32_t when;

	// commsrp.c:127
	uint32_t len;

}

// commsrp.c:134
struct {
	// commsrp.c:132
	unsigned char code;

	// commsrp.c:133
	unsigned char[1] data;

}

// commsrp.c:135
struct {
	// commsrp.c:128
	// commsrp.c:128
	struct {
		// commsrp.c:126
		uint32_t when;

		// commsrp.c:127
		uint32_t len;

	}

 head;

	// commsrp.c:134
	// commsrp.c:134
	struct {
		// commsrp.c:132
		unsigned char code;

		// commsrp.c:133
		unsigned char[1] data;

	}

 body;

}

// commsrp.c:135
typedef structure  RawSRPPacketT;

// commsrp.c:151
enum {
	ST_IDLE = 0,
	ST_CONN = 1,
	ST_LIST = 2,
	ST_OPEN = 3,
	ST_CLOSE = 4,
}

// commsrp.c:245
void _CommSRPSetAddrInfo(CommSRPRef *  ref, sockaddr *  sin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:246
	sockaddr SockAddr;

}

// commsrp.c:282
void _CommSRPSetSocket(CommSRPRef *  pRef, SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:303
void _CommSRPResetTransfer(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:336
int32_t _CommSRPSendImmediate(CommSRPRef *  ref, RawSRPPacketT *  packet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:337
	int32_t len;

	// commsrp.c:337
	int32_t err;

}

// commsrp.c:401
void _CommSRPSendCtrl(CommSRPRef *  ref, unsigned char  code) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:402
	RawSRPPacketT packet;

}

// commsrp.c:430
void _CommSRPProcessInitRequest(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:470
void _CommSRPProcessACK(CommSRPRef *  ref, RawSRPPacketT *  packet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:471
	uint32_t ackseqnid;

	// commsrp.c:471
	uint32_t refseqnid;

	// commsrp.c:472
	RawSRPPacketT * refpkt;

}

// commsrp.c:519
void _CommSRPProcessCtrl(CommSRPRef *  ref, RawSRPPacketT *  packet, sockaddr *  pFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:633
int32_t _CommSRPProcessData(CommSRPRef *  ref, RawSRPPacketT *  packet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:634
	RawSRPPacketT * buffer;

	{
		// commsrp.c:638
		int32_t queuepos;

		// commsrp.c:638
		int32_t pktsfree;

	}
	{
		// commsrp.c:663
		uint32_t uPacketId;

	}
}

// commsrp.c:736
void _CommSRPProcessAlive(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:764
void _CommSRPProcessRecvQueue(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:765
	int32_t len;

	// commsrp.c:765
	int32_t sinlen;

	// commsrp.c:765
	int32_t iResult;

	// commsrp.c:766
	char * buffer;

	// commsrp.c:767
	sockaddr sin;

	// commsrp.c:768
	RawSRPPacketT * packet;

}

// commsrp.c:851
void _CommSRPProcessSendQueue(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:852
	RawSRPPacketT * packet;

}

// commsrp.c:906
int32_t _CommSRPClose(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:941
void _CommSRPEvent0(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:993
int32_t _CommSRPEvent(SocketT *  sock, int32_t  flags, void *  _ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:994
	CommSRPRef * ref;

}

// commsrp.c:1030
int32_t _CommSRPSendQueued(CommSRPRef *  ref, RawSRPPacketT *  packet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1031
	int32_t pos;

}

// commsrp.c:1074
extern CommSRPRef * CommSRPConstruct(int32_t  maxwid, int32_t  maxinp, int32_t  maxout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1075
	CommSRPRef * ref;

	// commsrp.c:1076
	int32_t iMemGroup;

}

// commsrp.c:1149
extern void CommSRPDestroy(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1189
extern void CommSRPCallback(CommSRPRef *  ref, void (*)(CommRef *, int32_t)  callback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1219
extern int32_t CommSRPResolve(CommSRPRef *  ref, const char *  addr, char *  buf, int32_t  len, char  div) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1240
extern void CommSRPUnresolve(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1260
extern int32_t CommSRPUnlisten(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1289
extern int32_t CommSRPUnconnect(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1318
extern int32_t CommSRPStatus(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1345
extern uint32_t CommSRPTick(CommSRPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commsrp.c:1369
extern int32_t CommSRPSend(CommSRPRef *  ref, const void *  buffer, int32_t  length, uint32_t  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1370
	RawSRPPacketT * packet;

	// commsrp.c:1371
	int32_t pos;

}

// commsrp.c:1465
extern int32_t CommSRPPeek(CommSRPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1466
	RawSRPPacketT * packet;

	// commsrp.c:1467
	int32_t packetlen;

}

// commsrp.c:1517
extern int32_t CommSRPRecv(CommSRPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1519
	int32_t len;

}

// commsrp.c:1548
extern int32_t CommSRPListen(CommSRPRef *  ref, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1549
	int32_t err;

	// commsrp.c:1549
	int32_t iListenPort;

	// commsrp.c:1549
	int32_t iConnPort;

	// commsrp.c:1550
	uint32_t uPokeAddr;

	// commsrp.c:1551
	sockaddr bindaddr;

	// commsrp.c:1552
	SocketT * sock;

	{
		// commsrp.c:1605
		uint32_t val2;

	}
}

// commsrp.c:1635
extern int32_t CommSRPConnect(CommSRPRef *  ref, const char *  pAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commsrp.c:1636
	sockaddr bindaddr;

	// commsrp.c:1637
	int32_t iErr;

	// commsrp.c:1637
	int32_t iConnPort;

	// commsrp.c:1637
	int32_t iListenPort;

	// commsrp.c:1638
	uint32_t uAddr;

	// commsrp.c:1639
	SocketT * sock;

	{
		// commsrp.c:1686
		uint32_t val2;

	}
}

