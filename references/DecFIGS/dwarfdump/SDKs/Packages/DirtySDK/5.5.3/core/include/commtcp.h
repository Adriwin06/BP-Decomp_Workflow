// commtcp.h:51
typedef CommTCPRef CommTCPRef;

// commtcp.h:51
struct CommTCPRef {
	// commtcp.c:74
	CommRef common;

	// commtcp.c:76
	CommTCPRef * link;

	// commtcp.c:78
	SocketT * socket;

	// commtcp.c:80
	sockaddr peeraddr;

	// commtcp.c:86
	enumeration  state;

	// commtcp.c:89
	uint32_t connident;

	// commtcp.c:92
	int32_t rcvoff;

	// commtcp.c:94
	int32_t rcvwid;

	// commtcp.c:96
	int32_t rcvlen;

	// commtcp.c:98
	int32_t rcvinp;

	// commtcp.c:100
	int32_t rcvout;

	// commtcp.c:102
	char * rcvbuf;

	// commtcp.c:104
	uint32_t rcvseq;

	// commtcp.c:107
	int32_t sndoff;

	// commtcp.c:109
	int32_t sndwid;

	// commtcp.c:111
	int32_t sndlen;

	// commtcp.c:113
	int32_t sndinp;

	// commtcp.c:115
	int32_t sndout;

	// commtcp.c:117
	char * sndbuf;

	// commtcp.c:119
	uint32_t sndseq;

	// commtcp.c:122
	uint32_t sendtick;

	// commtcp.c:124
	uint32_t recvtick;

	// commtcp.c:127
	uint32_t dnsid;

	// commtcp.c:128
	char[256] dnsquery;

	// commtcp.c:129
	char * dnsbuf;

	// commtcp.c:130
	int32_t dnslen;

	// commtcp.c:131
	char dnsdiv;

	// commtcp.c:134
	NetCritT crit;

	// commtcp.c:136
	int32_t volatile callback;

	// commtcp.c:138
	int32_t gotevent;

	// commtcp.c:140
	void (*)(CommRef *, int32_t) callproc;

}

