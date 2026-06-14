// commudp.c:90
struct {
	// commudp.c:88
	int32_t len;

	// commudp.c:89
	uint32_t when;

}

// commudp.c:98
struct {
	// commudp.c:93
	uint32_t seq;

	// commudp.c:94
	uint32_t ack;

	// commudp.c:95
	uint32_t scid;

	// commudp.c:96
	uint32_t tcid;

	// commudp.c:97
	uint8_t[1252] data;

}

// commudp.c:99
struct {
	// commudp.c:90
	// commudp.c:90
	struct {
		// commudp.c:88
		int32_t len;

		// commudp.c:89
		uint32_t when;

	}

 head;

	// commudp.c:98
	// commudp.c:98
	struct {
		// commudp.c:93
		uint32_t seq;

		// commudp.c:94
		uint32_t ack;

		// commudp.c:95
		uint32_t scid;

		// commudp.c:96
		uint32_t tcid;

		// commudp.c:97
		uint8_t[1252] data;

	}

 body;

}

// commudp.c:99
typedef structure  RawUDPPacketT;

// commudp.c:108
struct {
	// commudp.c:106
	int32_t len;

	// commudp.c:107
	uint32_t when;

}

// commudp.c:115
struct {
	// commudp.c:111
	uint32_t seq;

	// commudp.c:112
	uint32_t ack;

	// commudp.c:113
	uint32_t scid;

	// commudp.c:114
	uint32_t tcid;

}

// commudp.c:116
struct {
	// commudp.c:108
	// commudp.c:108
	struct {
		// commudp.c:106
		int32_t len;

		// commudp.c:107
		uint32_t when;

	}

 head;

	// commudp.c:115
	// commudp.c:115
	struct {
		// commudp.c:111
		uint32_t seq;

		// commudp.c:112
		uint32_t ack;

		// commudp.c:113
		uint32_t scid;

		// commudp.c:114
		uint32_t tcid;

	}

 body;

}

// commudp.c:116
typedef structure  RawUDPPacketHeadT;

// commudp.c:132
enum {
	DEAD = 0,
	IDLE = 1,
	CONN = 2,
	LIST = 3,
	OPEN = 4,
	CLOSE = 5,
}

// commudp.c:247
void _CommUDPSetAddrInfo(CommUDPRef *  ref, sockaddr *  sin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:248
	sockaddr SockAddr;

}

// commudp.c:281
void _CommUDPSetSocket(CommUDPRef *  pRef, SocketT *  pSocket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:303
void _CommUDPSetConnID(CommUDPRef *  ref, const char *  pStrConn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:304
	const char * pConnID;

}

// commudp.c:331
void _CommUDPResetTransfer(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:378
int32_t _CommUDPOverhead(CommUDPRef *  ref, int32_t  pktlen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:380
	int32_t overhead;

}

// commudp.c:432
int32_t _CommUDPWrite(CommUDPRef *  ref, RawUDPPacketT *  packet, sockaddr *  peeraddr, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:433
	int32_t err;

	// commudp.c:434
	int32_t len;

}

// commudp.c:515
int32_t _CommUDPClose(CommUDPRef *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:516
	RawUDPPacketHeadT packet;

}

// commudp.c:566
void _CommUDPProcessSetup(CommUDPRef *  ref, const RawUDPPacketT *  packet, sockaddr *  sin, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// commudp.c:586
		RawUDPPacketHeadT connpacket;

	}
}

// commudp.c:648
void _CommUDPProcessInit(CommUDPRef *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:649
	RawUDPPacketHeadT packet;

}

// commudp.c:683
void _CommUDPProcessOutput(CommUDPRef *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:684
	int32_t index;

	// commudp.c:684
	int32_t count;

	// commudp.c:685
	int32_t tlimit;

	// commudp.c:686
	int32_t plimit;

	// commudp.c:687
	RawUDPPacketT multi;

	// commudp.c:688
	RawUDPPacketT * buffer;

	// commudp.c:689
	uint32_t mlimit;

}

// commudp.c:810
void _CommUDPProcessFlow(CommUDPRef *  ref, RawUDPPacketHeadT *  packet, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:811
	int32_t nak;

	// commudp.c:812
	uint32_t ack;

	{
		// commudp.c:821
		RawUDPPacketT * buffer;

	}
}

// commudp.c:867
int32_t _CommUDPProcessInput(CommUDPRef *  ref, RawUDPPacketHeadT *  packet, uint8_t *  data, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:868
	RawUDPPacketT * buffer;

	{
		// commudp.c:884
		int32_t queuepos;

		// commudp.c:885
		int32_t pktsfree;

		// commudp.c:888
		int32_t delta;

	}
}

// commudp.c:985
void _CommUDPProcessPoke(CommUDPRef *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:986
	RawUDPPacketHeadT packet;

}

// commudp.c:1022
void _CommUDPProcessAlive(CommUDPRef *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1023
	RawUDPPacketHeadT packet;

}

// commudp.c:1067
uint32_t _CommUDPFlush(CommUDPRef *  ref, uint32_t  limit, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1068
	int32_t iNumPackets;

	// commudp.c:1069
	int32_t index;

	// commudp.c:1070
	RawUDPPacketT * buffer;

}

// commudp.c:1104
int32_t _CommUDPThreadData(uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1105
	int32_t len;

	// commudp.c:1106
	int32_t count;

	// commudp.c:1107
	CommUDPRef * ref;

	// commudp.c:1108
	CommUDPRef * pListen;

	// commudp.c:1109
	sockaddr sin;

	// commudp.c:1110
	RawUDPPacketT packet;

	// commudp.c:1111
	SocketT * pSocket;

	// commudp.c:1112
	uint32_t connidentmatch;

	{
		// commudp.c:1197
		RawUDPPacketHeadT multi;

		// commudp.c:1198
		uint32_t oldseq;

		// commudp.c:1199
		int32_t count2;

	}
	{
		// commudp.c:1306
		uint32_t timeout;

	}
	{
		// commudp.c:1326
		uint32_t bIgnored;

	}
	{
		// commudp.c:1363
		int32_t iPeerAddr;

	}
}

// commudp.c:1406
int32_t _CommUDPEvent(SocketT *  sock, int32_t  flags, void *  _ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// commudp.c:1413
		uint32_t currtick;

	}
}

// commudp.c:1461
void _CommUDPEnlistRef(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:1496
void _CommUDPDelistRef(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1497
	CommUDPRef ** link;

}

// commudp.c:1535
extern CommUDPRef * CommUDPConstruct(int32_t  maxwid, int32_t  maxinp, int32_t  maxout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1536
	CommUDPRef * ref;

	// commudp.c:1537
	int32_t iMemGroup;

}

// commudp.c:1614
extern void CommUDPDestroy(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1615
	CommUDPRef * find;

	// commudp.c:1616
	uint32_t currtick;

}

// commudp.c:1675
extern void CommUDPCallback(CommUDPRef *  ref, void (*)(void *, int32_t)  callback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:1708
extern int32_t CommUDPResolve(CommUDPRef *  ref, const char *  addr, char *  buf, int32_t  len, char  div) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:1733
extern void CommUDPUnresolve(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:1758
int32_t _CommUDPListen0(CommUDPRef *  ref, SocketT *  sock, sockaddr *  bindaddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1759
	int32_t err;

	// commudp.c:1760
	CommUDPRef * find;

	// commudp.c:1761
	sockaddr glueaddr;

}

// commudp.c:1841
extern int32_t CommUDPUnlisten(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1842
	uint32_t currtick;

}

// commudp.c:1890
int32_t _CommUDPConnect0(CommUDPRef *  ref, SocketT *  sock, sockaddr *  peeraddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:1935
extern int32_t CommUDPUnconnect(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:1936
	uint32_t currtick;

}

// commudp.c:1982
extern int32_t CommUDPStatus(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:2012
extern int32_t CommUDPControl(CommUDPRef *  pRef, int32_t  iControl, int32_t  iValue, void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:2047
extern uint32_t CommUDPTick(CommUDPRef *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// commudp.c:2074
extern int32_t CommUDPSend(CommUDPRef *  ref, const void *  buffer, int32_t  length, uint32_t  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:2075
	RawUDPPacketT * packet;

	// commudp.c:2076
	uint32_t currtick;

	// commudp.c:2077
	int32_t pos;

	{
		// commudp.c:2129
		sockaddr peeraddr;

		{
			// commudp.c:2131
			uint32_t val2;

		}
	}
}

// commudp.c:2204
extern int32_t CommUDPPeek(CommUDPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:2205
	RawUDPPacketT * packet;

}

// commudp.c:2265
extern int32_t CommUDPRecv(CommUDPRef *  ref, void *  target, int32_t  length, uint32_t *  when) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:2267
	int32_t len;

}

// commudp.c:2295
extern int32_t CommUDPListen(CommUDPRef *  ref, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:2296
	int32_t err;

	// commudp.c:2296
	int32_t iListenPort;

	// commudp.c:2296
	int32_t iConnPort;

	// commudp.c:2297
	uint32_t poke;

	// commudp.c:2298
	SocketT * sock;

	// commudp.c:2299
	sockaddr bindaddr;

	{
		// commudp.c:2336
		uint32_t val2;

	}
}

// commudp.c:2366
extern int32_t CommUDPConnect(CommUDPRef *  ref, const char *  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// commudp.c:2367
	int32_t err;

	// commudp.c:2367
	int32_t iConnPort;

	// commudp.c:2367
	int32_t iListenPort;

	// commudp.c:2368
	uint32_t uAddr;

	// commudp.c:2369
	CommUDPRef * find;

	// commudp.c:2370
	SocketT * sock;

	// commudp.c:2371
	sockaddr bindaddr;

	// commudp.c:2371
	sockaddr glueaddr;

	// commudp.c:2371
	sockaddr peeraddr;

	{
		// commudp.c:2445
		uint32_t val2;

	}
}

// commudp.c:210
CommUDPRef * g_link;

// commudp.c:213
NetCritT g_crit;

// commudp.c:216
int32_t g_missed;

// commudp.c:219
int32_t g_inevent;

// commudp.c:222
const char *[6] g_strConnNames;

