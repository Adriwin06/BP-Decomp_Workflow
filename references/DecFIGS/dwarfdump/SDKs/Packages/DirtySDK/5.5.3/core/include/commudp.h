// commudp.h:55
typedef CommUDPRef CommUDPRef;

// commudp.h:55
struct CommUDPRef {
	// commudp.c:122
	CommRef common;

	// commudp.c:125
	CommUDPRef * link;

	// commudp.c:127
	SocketT * socket;

	// commudp.c:129
	sockaddr peeraddr;

	// commudp.c:139
	enumeration  state;

	// commudp.c:142
	uint32_t connident;

	// commudp.c:145
	uint32_t clientident;

	// commudp.c:148
	uint32_t rclientident;

	// commudp.c:151
	int32_t rcvwid;

	// commudp.c:153
	int32_t rcvlen;

	// commudp.c:155
	int32_t rcvinp;

	// commudp.c:157
	int32_t rcvout;

	// commudp.c:159
	char * rcvbuf;

	// commudp.c:161
	uint32_t rcvseq;

	// commudp.c:163
	uint32_t urcvseq;

	// commudp.c:165
	uint32_t rcvack;

	// commudp.c:167
	int32_t rcvuna;

	// commudp.c:170
	int32_t sndwid;

	// commudp.c:172
	int32_t sndlen;

	// commudp.c:174
	int32_t sndinp;

	// commudp.c:176
	int32_t sndout;

	// commudp.c:178
	int32_t sndnxt;

	// commudp.c:180
	char * sndbuf;

	// commudp.c:182
	uint32_t sndseq;

	// commudp.c:184
	uint32_t usndseq;

	// commudp.c:186
	uint32_t snderr;

	// commudp.c:189
	uint32_t sendtick;

	// commudp.c:191
	uint32_t recvtick;

	// commudp.c:193
	uint32_t idletick;

	// commudp.c:196
	int32_t volatile callback;

	// commudp.c:198
	uint32_t gotevent;

	// commudp.c:200
	void (*)(void *, int32_t) callproc;

}

