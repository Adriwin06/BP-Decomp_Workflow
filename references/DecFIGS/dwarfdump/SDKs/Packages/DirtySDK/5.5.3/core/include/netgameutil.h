// netgameutil.h:61
typedef NetGameUtilRefT NetGameUtilRefT;

// netgameutil.h:61
struct NetGameUtilRefT {
	// netgameutil.c:53
	int32_t memgroup;

	// netgameutil.c:56
	char * table;

	// netgameutil.c:58
	char[32] kind;

	// netgameutil.c:60
	char[128] addr;

	// netgameutil.c:63
	ProtoAdvtRef * advt;

	// netgameutil.c:65
	ProtoAdvtRef * find;

	// netgameutil.c:68
	int32_t hosting;

	// netgameutil.c:71
	uint32_t hostip;

	// netgameutil.c:73
	uint32_t hostport;

	// netgameutil.c:75
	uint32_t peerip;

	// netgameutil.c:77
	uint32_t peerport;

	// netgameutil.c:80
	SocketT * pSocket;

	// netgameutil.c:83
	uint32_t proto;

	// netgameutil.c:86
	int32_t maxwid;

	// netgameutil.c:89
	int32_t maxout;

	// netgameutil.c:92
	int32_t maxinp;

	// netgameutil.c:95
	int32_t advtfreq;

	// netgameutil.c:98
	int32_t clientid;

	// netgameutil.c:101
	int32_t rclientid;

	// netgameutil.c:111
	structure [4] port;

}

