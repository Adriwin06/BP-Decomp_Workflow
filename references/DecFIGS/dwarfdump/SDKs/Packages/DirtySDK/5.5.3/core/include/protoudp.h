// protoudp.h:37
typedef ProtoUdpT ProtoUdpT;

// protoudp.h:37
struct ProtoUdpT {
	// protoudp.c:76
	SocketT * pSocket;

	// protoudp.c:77
	NetCritT crit;

	// protoudp.c:78
	int32_t iMemGroup;

	// protoudp.c:79
	char * pPackets;

	// protoudp.c:80
	uint32_t uMaxPacketSize;

	// protoudp.c:81
	uint32_t uTotalPacketSpace;

	// protoudp.c:82
	uint32_t uPacketsHead;

	// protoudp.c:83
	uint32_t uPacketsTail;

	// protoudp.c:84
	sockaddr_in RemoteAddr;

}

