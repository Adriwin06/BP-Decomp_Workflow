// voipconnection.h:21
struct VoipUserT {
	// voipconnection.h:22
	unsigned char[20] uData;

}

// voipconnection.h:23
typedef VoipUserT VoipUserT;

// voipconnection.h:34
typedef void (VoipUserT *, VoipPacketT *, void *) VoipConnectRecvVoiceCbT;

// voipconnection.h:37
typedef void (VoipUserT *, void *, uint32_t) VoipConnectRegUserCbT;

// voipconnection.h:50
enum {
	ST_DISC = 0,
	ST_CONN = 1,
	ST_ACTV = 2,
}

// voipconnection.h:41
struct VoipConnectionT {
	// voipconnection.h:42
	sockaddr_in SendAddr;

	// voipconnection.h:43
	sockaddr_in RecvAddr;

	// voipconnection.h:44
	uint32_t uClientId;

	// voipconnection.h:45
	uint32_t uSessionId;

	// voipconnection.h:46
	VoipUserT RemoteUser;

	// voipconnection.h:47
	uint32_t uRemoteStatus;

	// voipconnection.h:54
	enumeration  eState;

	// voipconnection.h:56
	VoipPacketT VoipPacket;

	// voipconnection.h:57
	uint32_t uNumDataPackets;

	// voipconnection.h:59
	uint32_t uLastVoiceSend;

	// voipconnection.h:61
	uint32_t uLastSend;

	// voipconnection.h:62
	uint32_t uLastRecv;

	// voipconnection.h:64
	int32_t iChangePort;

	// voipconnection.h:65
	int32_t iChangeAddr;

	// voipconnection.h:66
	int32_t iRecvPackets;

	// voipconnection.h:67
	int32_t iRecvData;

	// voipconnection.h:69
	uint32_t bRemoteBroadband;

}

// voipconnection.h:70
typedef VoipConnectionT VoipConnectionT;

// voipconnection.h:74
struct VoipConnectionlistT {
	// voipconnection.h:75
	SocketT * pSocket;

	// voipconnection.h:76
	NetCritT NetCrit;

	// voipconnection.h:78
	VoipConnectRecvVoiceCbT * pVoiceCb;

	// voipconnection.h:79
	VoipConnectRegUserCbT * pRegUserCb;

	// voipconnection.h:80
	void * pCbUserData;

	// voipconnection.h:82
	int32_t iMaxConnections;

	// voipconnection.h:83
	VoipConnectionT * pConnections;

	// voipconnection.h:85
	uint32_t uSendMask;

	// voipconnection.h:86
	uint32_t uRecvMask;

	// voipconnection.h:87
	uint32_t uRecvVoice;

	// voipconnection.h:88
	uint32_t uLocalStatus;

	// voipconnection.h:90
	uint32_t uLastVoiceData;

	// voipconnection.h:92
	VoipUserT LocalUser;

	// voipconnection.h:93
	uint32_t uClientId;

	// voipconnection.h:95
	uint32_t uBindPort;

	// voipconnection.h:97
	int32_t iDataTimeout;

	// voipconnection.h:99
	uint8_t bBroadband;

	// voipconnection.h:100
	uint8_t bServer;

	// voipconnection.h:101
	uint8_t bSentVoiceData;

}

// voipconnection.h:102
typedef VoipConnectionlistT VoipConnectionlistT;

