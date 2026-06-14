// voippacket.h:34
struct VoipPacketHeadT {
	// voippacket.h:35
	uint8_t[3] aType;

	// voippacket.h:36
	uint8_t bBroadband;

	// voippacket.h:37
	uint8_t[4] aClientId;

}

// voippacket.h:38
typedef VoipPacketHeadT VoipPacketHeadT;

// voippacket.h:67
struct VoipPacketT {
	// voippacket.h:69
	uint32_t uDataSize;

	// voippacket.h:72
	VoipPacketHeadT Head;

	// voippacket.h:73
	uint8_t[4] aSendMask;

	// voippacket.h:74
	uint8_t uSeqn;

	// voippacket.h:75
	uint8_t uNumPackets;

	// voippacket.h:76
	uint8_t[1024] aData;

}

// voippacket.h:77
typedef VoipPacketT VoipPacketT;

// voippacket.h:42
struct VoipConnPacketT {
	// voippacket.h:43
	VoipPacketHeadT Head;

	// voippacket.h:44
	uint8_t[4] aRemoteClientId;

	// voippacket.h:45
	uint8_t[4] aSessionId;

	// voippacket.h:46
	VoipUserT LocalUser;

	// voippacket.h:47
	uint8_t bConnected;

}

// voippacket.h:48
typedef VoipConnPacketT VoipConnPacketT;

// voippacket.h:52
struct VoipPingPacketT {
	// voippacket.h:53
	VoipPacketHeadT Head;

	// voippacket.h:54
	uint8_t[4] aRemoteClientId;

}

// voippacket.h:55
typedef VoipPingPacketT VoipPingPacketT;

// voippacket.h:59
struct VoipDiscPacketT {
	// voippacket.h:60
	VoipPacketHeadT Head;

	// voippacket.h:61
	uint8_t[4] aRemoteClientId;

	// voippacket.h:62
	uint8_t[4] aSessionId;

}

// voippacket.h:63
typedef VoipDiscPacketT VoipDiscPacketT;

