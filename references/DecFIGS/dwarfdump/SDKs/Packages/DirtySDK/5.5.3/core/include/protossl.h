// protossl.h:80
typedef ProtoSSLRefT ProtoSSLRefT;

// protossl.h:80
struct ProtoSSLRefT {
	// protossl.c:294
	SocketT * pSock;

	// protossl.c:295
	HostentT * pHost;

	// protossl.c:296
	int32_t iMemGroup;

	// protossl.c:298
	char[256] strHost;

	// protossl.c:299
	sockaddr PeerAddr;

	// protossl.c:301
	int32_t iState;

	// protossl.c:302
	int32_t iClosed;

	// protossl.c:303
	SecureStateT * pSecure;

}

