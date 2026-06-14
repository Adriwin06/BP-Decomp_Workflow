// commall.h:86
typedef CommRef CommRef;

// commall.h:86
struct CommRef {
	// commall.h:100
	CommRef *(*)(int32_t, int32_t, int32_t) Construct;

	// commall.h:107
	void (*)(CommRef *) Destroy;

	// commall.h:114
	int32_t (*)(CommRef *, const char *, char *, int32_t, char) Resolve;

	// commall.h:121
	void (*)(CommRef *) Unresolve;

	// commall.h:128
	int32_t (*)(CommRef *, const char *) Listen;

	// commall.h:135
	int32_t (*)(CommRef *) Unlisten;

	// commall.h:144
	int32_t (*)(CommRef *, const char *) Connect;

	// commall.h:151
	int32_t (*)(CommRef *) Unconnect;

	// commall.h:170
	void (*)(CommRef *, void (*)(CommRef *, int32_t)) Callback;

	// commall.h:177
	int32_t (*)(CommRef *) Status;

	// commall.h:183
	int32_t (*)(CommRef *, int32_t, int32_t, void *) Control;

	// commall.h:190
	uint32_t (*)(CommRef *) Tick;

	// commall.h:199
	int32_t (*)(CommRef *, const void *, int32_t, uint32_t) Send;

	// commall.h:206
	int32_t (*)(CommRef *, void *, int32_t, uint32_t *) Peek;

	// commall.h:213
	int32_t (*)(CommRef *, void *, int32_t, uint32_t *) Recv;

	// commall.h:224
	void (*)(CommRef *, const void *, int32_t, uint32_t) SendCallback;

	// commall.h:235
	void (*)(CommRef *, void *, int32_t, uint32_t) RecvCallback;

	// commall.h:238
	int32_t memgroup;

	// commall.h:241
	int32_t refnum;

	// commall.h:244
	void * refptr;

	// commall.h:247
	SocketT * sockptr;

	// commall.h:250
	uint16_t maxwid;

	// commall.h:253
	uint8_t maxinp;

	// commall.h:256
	uint8_t maxout;

	// commall.h:259
	int32_t datasent;

	// commall.h:262
	int32_t datarcvd;

	// commall.h:265
	int32_t packsent;

	// commall.h:268
	int32_t packrcvd;

	// commall.h:271
	int32_t packlost;

	// commall.h:274
	int32_t overhead;

	// commall.h:277
	uint32_t hostip;

	// commall.h:280
	uint32_t peerip;

	// commall.h:283
	uint16_t hostport;

	// commall.h:286
	uint16_t peerport;

}

