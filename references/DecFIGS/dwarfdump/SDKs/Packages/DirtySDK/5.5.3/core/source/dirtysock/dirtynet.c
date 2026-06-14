// dirtynet.c:74
extern int32_t SockaddrCompare(sockaddr *  addr1, sockaddr *  addr2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:75
	int32_t len;

}

// dirtynet.c:110
extern int32_t SockaddrInSetAddrText(sockaddr *  addr, const char *  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:111
	int32_t i;

	// dirtynet.c:112
	unsigned char * ipaddr;

}

// dirtynet.c:149
extern char * SockaddrInGetAddrText(sockaddr *  addr, char *  str, int32_t  len) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:150
	int32_t i;

	// dirtynet.c:151
	char * s;

	{
		// dirtynet.c:163
		int32_t val;

	}
}

// dirtynet.c:204
extern uint16_t SocketHtons(uint16_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:208
	union {
		// dirtynet.c:206
		uint16_t host;

		// dirtynet.c:207
		unsigned char[2] netw;

	}
	// dirtynet.c:208
	union  x;

}

// dirtynet.c:234
extern uint32_t SocketHtonl(uint32_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:238
	union {
		// dirtynet.c:236
		uint32_t host;

		// dirtynet.c:237
		unsigned char[4] netw;

	}
	// dirtynet.c:238
	union  x;

}

// dirtynet.c:264
extern uint16_t SocketNtohs(uint16_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:268
	union {
		// dirtynet.c:266
		uint16_t host;

		// dirtynet.c:267
		unsigned char[2] netw;

	}
	// dirtynet.c:268
	union  x;

}

// dirtynet.c:296
extern uint32_t SocketNtohl(uint32_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:300
	union {
		// dirtynet.c:298
		uint32_t host;

		// dirtynet.c:299
		unsigned char[4] netw;

	}
	// dirtynet.c:300
	union  x;

}

// dirtynet.c:332
extern const char * SocketInAddrGetText(int32_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:333
	char[20] _addrtext;

	// dirtynet.c:334
	sockaddr sa;

	{
		// dirtynet.c:336
		uint32_t val2;

	}
}

// dirtynet.c:362
extern int32_t SocketInTextGetAddr(const char *  pAddrText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:363
	sockaddr SockAddr;

	// dirtynet.c:364
	int32_t iAddr;

}

// dirtynet.c:397
extern int32_t SockaddrInParse(sockaddr *  sa, const char *  pParse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:398
	int32_t iReturn;

	// dirtynet.c:398
	int32_t iPort;

	// dirtynet.c:399
	uint32_t uAddr;

	{
		// dirtynet.c:408
		uint32_t val2;

	}
}

// dirtynet.c:442
extern int32_t SockaddrInParse2(uint32_t *  pAddr, int32_t *  pPort, int32_t *  pPort2, const char *  pParse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// dirtynet.c:443
	int32_t iReturn;

	// dirtynet.c:444
	uint32_t uVal;

}

