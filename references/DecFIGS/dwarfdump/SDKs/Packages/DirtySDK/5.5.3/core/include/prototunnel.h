// prototunnel.h:62
struct ProtoTunnelInfoT {
	// prototunnel.h:63
	uint32_t uRemoteClientId;

	// prototunnel.h:64
	uint32_t uRemoteAddr;

	// prototunnel.h:65
	uint16_t uRemotePort;

	// prototunnel.h:66
	uint16_t _pad;

	// prototunnel.h:67
	uint16_t[8] aRemotePortList;

	// prototunnel.h:68
	uint8_t[8] aPortFlags;

}

// prototunnel.h:69
typedef ProtoTunnelInfoT ProtoTunnelInfoT;

// prototunnel.h:81
typedef ProtoTunnelRefT ProtoTunnelRefT;

// prototunnel.h:46
enum ProtoTunnelEventE {
	PROTOTUNNEL_EVENT_RECVNOMATCH = 0,
	PROTOTUNNEL_NUMEVENTS = 1,
}

// prototunnel.h:50
typedef ProtoTunnelEventE ProtoTunnelEventE;

// prototunnel.h:54
enum ProtoTunnelModeE {
	PROTOTUNNEL_MODE_GENERIC = 0,
	PROTOTUNNEL_MODE_XBOX = 1,
	PROTOTUNNEL_MODE_XENON = 2,
}

// prototunnel.h:58
typedef ProtoTunnelModeE ProtoTunnelModeE;

// prototunnel.h:73
struct ProtoTunnelStatT {
	// prototunnel.h:74
	uint32_t uNumBytes;

	// prototunnel.h:75
	uint32_t uNumSubpacketBytes;

	// prototunnel.h:76
	uint16_t uNumPackets;

	// prototunnel.h:77
	uint16_t uNumSubpackets;

}

// prototunnel.h:78
typedef ProtoTunnelStatT ProtoTunnelStatT;

// prototunnel.h:81
struct ProtoTunnelRefT {
	// prototunnel.c:207
	int32_t iMemGroup;

	// prototunnel.c:209
	SocketT * pSocket;

	// prototunnel.c:210
	uint32_t uTunnelPort;

	// prototunnel.c:211
	uint32_t uLocalClientId;

	// prototunnel.c:213
	int8_t iNumTunnels;

	// prototunnel.c:214
	int8_t iMaxTunnels;

	// prototunnel.c:215
	int8_t iVerbosity;

	// prototunnel.c:217
	ProtoTunnelModeE eMode;

	// prototunnel.c:218
	uint32_t uVirtualAddr;

	// prototunnel.c:220
	uint32_t uFlushRate;

	// prototunnel.c:221
	uint32_t uLastFlush;

	// prototunnel.c:224
	int32_t iPacketDrop;

	// prototunnel.c:227
	ProtoTunnelCallbackT * pCallback;

	// prototunnel.c:228
	void * pUserData;

	// prototunnel.c:230
	NetCritT TunnelsCritS;

	// prototunnel.c:231
	NetCritT TunnelsCritR;

	// prototunnel.c:232
	ProtoTunnelT[1] Tunnels;

}

// prototunnel.h:84
typedef void (ProtoTunnelRefT *, ProtoTunnelEventE, const char *, int32_t, sockaddr *, void *) ProtoTunnelCallbackT;

