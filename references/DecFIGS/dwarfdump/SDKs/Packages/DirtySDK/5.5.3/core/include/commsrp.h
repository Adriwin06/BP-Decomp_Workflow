// commsrp.h:43
typedef CommSRPRef CommSRPRef;

// commsrp.h:43
struct CommSRPRef {
	// commsrp.c:142
	CommRef common;

	// commsrp.c:144
	CommSRPRef * link;

	// commsrp.c:146
	SocketT * socket;

	// commsrp.c:148
	sockaddr peeraddr;

	// commsrp.c:157
	enumeration  state;

	// commsrp.c:160
	uint32_t connident;

	// commsrp.c:163
	int32_t rcvwid;

	// commsrp.c:165
	int32_t rcvrelresv;

	// commsrp.c:167
	int32_t rcvlen;

	// commsrp.c:169
	int32_t rcvinp;

	// commsrp.c:171
	int32_t rcvout;

	// commsrp.c:173
	char * rcvbuf;

	// commsrp.c:176
	int32_t sndwid;

	// commsrp.c:178
	int32_t sndlen;

	// commsrp.c:180
	int32_t sndinp;

	// commsrp.c:182
	int32_t sndout;

	// commsrp.c:184
	char * sndbuf;

	// commsrp.c:187
	uint32_t sendtick;

	// commsrp.c:189
	uint32_t recvtick;

	// commsrp.c:192
	uint32_t unrelseqn;

	// commsrp.c:194
	uint32_t unrelrecvseqn;

	// commsrp.c:196
	uint32_t relseqn;

	// commsrp.c:198
	uint32_t relrecvseqn;

	// commsrp.c:201
	uint32_t dnsid;

	// commsrp.c:202
	char[256] dnsquery;

	// commsrp.c:203
	char * dnsbuf;

	// commsrp.c:204
	int32_t dnslen;

	// commsrp.c:205
	char dnsdiv;

	// commsrp.c:208
	NetCritT crit;

	// commsrp.c:210
	int32_t volatile callback;

	// commsrp.c:212
	int32_t gotevent;

	// commsrp.c:214
	void (*)(CommRef *, int32_t) callproc;

}

