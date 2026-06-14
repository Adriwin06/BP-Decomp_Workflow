// dirtynet.h:180
struct CgsNetwork::DirtySock::HostentT {
	// dirtynet.h:181
	int32_t done;

	// dirtynet.h:182
	uint32_t addr;

	// dirtynet.h:184
	int32_t (*)(HostentT *) Done;

	// dirtynet.h:185
	void (*)(HostentT *) Free;

	// dirtynet.h:187
	char[64] name;

	// dirtynet.h:188
	int32_t sema;

	// dirtynet.h:189
	int32_t thread;

	// dirtynet.h:190
	uint32_t timeout;

}

// dirtynet.h:175
typedef SocketT SocketT;

// dirtynet.h:180
struct HostentT {
	// dirtynet.h:181
	int32_t done;

	// dirtynet.h:182
	uint32_t addr;

	// dirtynet.h:184
	int32_t (*)(HostentT *) Done;

	// dirtynet.h:185
	void (*)(HostentT *) Free;

	// dirtynet.h:187
	char[64] name;

	// dirtynet.h:188
	int32_t sema;

	// dirtynet.h:189
	int32_t thread;

	// dirtynet.h:190
	uint32_t timeout;

}

// dirtynet.h:191
typedef HostentT HostentT;

// dirtynet.h:175
struct SocketT {
	// dirtynetps3.c:69
	SocketT * next;

	// dirtynetps3.c:70
	SocketT * kill;

	// dirtynetps3.c:72
	int32_t family;

	// dirtynetps3.c:73
	int32_t type;

	// dirtynetps3.c:74
	int32_t proto;

	// dirtynetps3.c:76
	int8_t opened;

	// dirtynetps3.c:77
	uint8_t bImported;

	// dirtynetps3.c:78
	uint8_t virtual;

	// dirtynetps3.c:79
	uint8_t unused;

	// dirtynetps3.c:81
	int32_t socket;

	// dirtynetps3.c:83
	sockaddr local;

	// dirtynetps3.c:84
	sockaddr remote;

	// dirtynetps3.c:86
	uint16_t virtualport;

	// dirtynetps3.c:87
	uint16_t _pad;

	// dirtynetps3.c:89
	int32_t callmask;

	// dirtynetps3.c:90
	uint32_t calllast;

	// dirtynetps3.c:91
	uint32_t callidle;

	// dirtynetps3.c:92
	void * callref;

	// dirtynetps3.c:93
	int32_t (*)(SocketT *, int32_t, void *) callback;

	// dirtynetps3.c:96
	NetCritT recvcrit;

	// dirtynetps3.c:97
	int32_t recverr;

	// dirtynetps3.c:98
	uint32_t recvflag;

	// dirtynetps3.c:99
	unsigned char recvinp;

	// dirtynetps3.c:102
	sockaddr recvaddr;

	// dirtynetps3.c:103
	int32_t recvstat;

	// dirtynetps3.c:104
	char[1264] recvdata;

}

// dirtynet.h:247
typedef int32_t (SocketT *, int32_t, const uint8_t *, int32_t, const sockaddr *, void *) SocketSendCallbackT;

