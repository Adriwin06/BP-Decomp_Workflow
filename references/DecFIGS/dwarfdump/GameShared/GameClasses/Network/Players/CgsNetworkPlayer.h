// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkPlayer.h:42
	const int32_t KI_MAX_MESSAGE_TYPES = 41;

	// CgsNetworkPlayer.h:45
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS = 2;

	// CgsNetworkPlayer.h:46
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS_IN_GAME = 5;

}

// CgsNetworkPlayer.h:146
struct CgsNetwork::CgsNetworkPlayerConstructParams {
	// CgsNetworkPlayer.h:148
	CgsNetwork::PlayerManager * mpPlayerManager;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkPlayer {
	public:
		// CgsNetworkPlayer.h:447
		bool HasConnectionFailed() const;

		// CgsNetworkPlayer.h:561
		CgsSystem::EFrameRate GetRemoteConsoleFrameRate();

		// CgsNetworkPlayer.h:475
		const char * GetName() const;

		// CgsNetworkPlayer.h:547
		CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	}

	// CgsNetworkPlayer.h:42
	const int32_t KI_MAX_MESSAGE_TYPES = 41;

	// CgsNetworkPlayer.h:45
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS = 2;

	// CgsNetworkPlayer.h:46
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS_IN_GAME = 5;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsNetworkPlayer.h:42
	const int32_t KI_MAX_MESSAGE_TYPES = 41;

	// CgsNetworkPlayer.h:45
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS = 2;

	// CgsNetworkPlayer.h:46
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS_IN_GAME = 5;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkPlayer {
	public:
		// CgsNetworkPlayer.h:578
		RoadRulesRecvData::NetworkPlayerID GetPlayerID() const;

		// CgsNetworkPlayer.h:447
		bool HasConnectionFailed() const;

		// CgsNetworkPlayer.h:547
		CgsSystem::EFrameRate GetLocalConsoleFrameRate();

		// CgsNetworkPlayer.h:561
		CgsSystem::EFrameRate GetRemoteConsoleFrameRate();

		// CgsNetworkPlayer.h:431
		CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData GetConnectionData() const;

	}

	// CgsNetworkPlayer.h:42
	const int32_t KI_MAX_MESSAGE_TYPES = 41;

	// CgsNetworkPlayer.h:45
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS = 2;

	// CgsNetworkPlayer.h:46
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS_IN_GAME = 5;

}

// CgsNetworkPlayer.h:160
void CgsNetwork::NetworkPlayer::NetworkPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkPlayer.h:71
void CgsNetwork::PlayerMenuData::PlayerMenuData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkPlayer.h:42
	const int32_t KI_MAX_MESSAGE_TYPES = 41;

	// CgsNetworkPlayer.h:45
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS = 2;

	// CgsNetworkPlayer.h:46
	const int32_t KI_FRAME_GAP_BETWEEN_PINGS_IN_GAME = 5;

}

// CgsNetworkPlayer.h:111
struct CgsNetwork::NetMessageData {
	// CgsNetworkPlayer.h:113
	EMessageType meType;

	// CgsNetworkPlayer.h:114
	int32_t miLength;

	// CgsNetworkPlayer.h:115
	CgsNetwork::Message * mpMsg;

	// CgsNetworkPlayer.h:61
	typedef void (*)(CgsNetwork::ReliableMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) ReliableMessageArrivedCallback;

	// CgsNetworkPlayer.h:116
	NetMessageData::ReliableMessageArrivedCallback mpfMsgArrivedCallback;

	// CgsNetworkPlayer.h:68
	typedef void (*)(bool, bool, CgsNetwork::SignalMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) ReliableMessageDeliveredCallback;

	// CgsNetworkPlayer.h:117
	NetMessageData::ReliableMessageDeliveredCallback mpfMsgDeliveredCallback;

	// CgsNetworkPlayer.h:118
	void * mpCallbackUserData;

	// CgsNetworkPlayer.h:123
	int32_t miValidCountdown;

	// CgsNetworkPlayer.h:124
	uint16_t mu16Frame;

public:
	// CgsNetworkPlayer.h:127
	void Construct();

	// CgsNetworkPlayer.h:133
	void Prepare(EMessageType, int32_t, CgsNetwork::Message *);

}

// CgsNetworkPlayer.h:160
struct CgsNetwork::NetworkPlayer {
	int (*)(...) * _vptr.NetworkPlayer;

protected:
	// CgsNetworkPlayer.h:334
	NetworkAdapter * mpNetworkAdapter;

	// CgsNetworkPlayer.h:335
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

	// CgsNetworkPlayer.h:336
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsNetworkPlayer.h:337
	uint16_t mu16CurrentFrame;

	// CgsNetworkPlayer.h:338
	Time mTimeLastPacketReceived;

	// CgsNetworkPlayer.h:339
	float32_t mfPingToReplyTo;

	// CgsNetworkPlayer.h:341
	CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

	// CgsNetworkPlayer.h:343
	NetMessageData[41] maSendMessageData;

	// CgsNetworkPlayer.h:344
	NetMessageData[41] maRecvMessageData;

	// CgsNetworkPlayer.h:345
	int32_t miNumberMessagesRegistered;

	// CgsNetworkPlayer.h:347
	CompressionAndEncryptionUtils mPacketPacker;

	// CgsNetworkPlayer.h:349
	char[20] macName;

	// CgsNetworkPlayer.h:351
	bool mbNetworkPlayerPaused;

	// CgsNetworkPlayer.cpp:43
	extern bool _mbRegisteredPerfmons;

	// CgsNetworkPlayer.cpp:44
	extern int32_t _miNetworkPlayerSendMessagesTotalPM;

	// CgsNetworkPlayer.cpp:45
	extern int32_t _miNetworkPlayerSendNewMessagesPM;

	// CgsNetworkPlayer.cpp:46
	extern int32_t _miNetworkPlayerResendReliablePM;

	// CgsNetworkPlayer.cpp:47
	extern int32_t _miNetworkPlayerSendAcksAndNacksPM;

	// CgsNetworkPlayer.cpp:48
	extern int32_t _miNetworkPlayerPackMessagesPM;

	// CgsNetworkPlayer.cpp:49
	extern int32_t _miNetworkPlayerSendToPM;

private:
	// CgsNetworkPlayer.h:383
	bool mbHasConnectionFailed;

	// CgsNetworkPlayer.h:385
	float_t mfPingInMs;

	// CgsNetworkPlayer.h:387
	CgsNetwork::PingMessage mPingMessageSend;

	// CgsNetworkPlayer.h:388
	CgsNetwork::PingMessage mPingMessageRecv;

	// CgsNetworkPlayer.h:390
	CgsNetwork::PingReplyMessage mPingReplyMessageSend;

	// CgsNetworkPlayer.h:391
	CgsNetwork::PingReplyMessage mPingReplyMessageRecv;

	// CgsNetworkPlayer.h:393
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsNetworkPlayer.h:394
	CgsSystem::EFrameRate meRemoteConsoleFrameRate;

public:
	// CgsNetworkPlayer.cpp:152
	virtual void Construct(CgsNetworkPlayerConstructParams *);

	// CgsNetworkPlayer.cpp:294
	void Destruct();

	// CgsNetworkPlayer.cpp:206
	// Declaration
	virtual bool Prepare(NetworkAdapter *, const TimerStatus *, const char *, CgsSystem::EFrameRate, CgsSystem::EFrameRate, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkPlayer.cpp:208
		using namespace CgsDev::Message;

	}

	// CgsNetworkPlayer.cpp:266
	virtual bool Release();

	// CgsNetworkPlayer.cpp:317
	virtual void Update(const TimerStatus *, uint16_t, bool);

	// CgsNetworkPlayer.cpp:344
	// Declaration
	void SendMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkPlayer.cpp:444
		using namespace CgsDev::Message;

		// CgsNetworkPlayer.cpp:486
		using namespace CgsDev::Message;

		// CgsNetworkPlayer.cpp:523
		using namespace CgsDev::Message;

	}

	// CgsNetworkPlayer.cpp:611
	void ReceiveMessage(uint8_t *, int32_t, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsNetworkPlayer.cpp:667
	void ReceiveAckOrNack(CgsNetwork::SignalMessage *, bool);

	// CgsNetworkPlayer.cpp:737
	void RegisterMessageType(EMessageType, int32_t, CgsNetwork::Message *, CgsNetwork::Message *, NetMessageData::ReliableMessageArrivedCallback, NetMessageData::ReliableMessageDeliveredCallback, void *);

	// CgsNetworkPlayer.cpp:798
	void UnRegisterMessageType(EMessageType);

	// CgsNetworkPlayer.cpp:860
	void RegisterReliableMessageCallback(EMessageType, NetMessageData::ReliableMessageArrivedCallback, void *);

	// CgsNetworkPlayer.cpp:897
	bool IsMessageTypeRegistered(EMessageType);

	// CgsNetworkPlayer.h:578
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetPlayerID() const;

	// CgsNetworkPlayer.h:415
	void SetConnectionData(CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkPlayer.h:431
	CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData GetConnectionData() const;

	// CgsNetworkPlayer.h:475
	const char * GetName() const;

	// CgsNetworkPlayer.h:518
	void SetLocalConsoleFrameRate(CgsSystem::EFrameRate);

	// CgsNetworkPlayer.h:533
	void SetRemoteConsoleFrameRate(CgsSystem::EFrameRate);

	// CgsNetworkPlayer.h:547
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// CgsNetworkPlayer.h:561
	CgsSystem::EFrameRate GetRemoteConsoleFrameRate();

	// CgsNetworkPlayer.cpp:1069
	// Declaration
	void PrepareToResetAllMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkPlayer.cpp:1088
		using namespace CgsDev::Message;

		// CgsNetworkPlayer.cpp:1093
		using namespace CgsDev::Message;

		// CgsNetworkPlayer.cpp:1100
		using namespace CgsDev::Message;

	}

	// CgsNetworkPlayer.cpp:1043
	void ResetAllMessages();

	// CgsNetworkPlayer.cpp:958
	void RegisterMessages();

	// CgsNetworkPlayer.cpp:986
	CgsNetwork::Message * GetRegisteredSendMessage(EMessageType);

	// CgsNetworkPlayer.cpp:1016
	CgsNetwork::Message * GetRegisteredRecvMessage(EMessageType);

	// CgsNetworkPlayer.h:447
	bool HasConnectionFailed() const;

	// CgsNetworkPlayer.h:461
	void SetDisconnected();

	// CgsNetworkPlayer.cpp:1259
	virtual void OnRoundLoadingStart();

	// CgsNetworkPlayer.cpp:1277
	virtual void OnRoundStart();

	// CgsNetworkPlayer.cpp:1294
	void OnGroupJoin();

	// CgsNetworkPlayer.h:489
	float_t GetPing();

	// CgsNetworkPlayer.cpp:1422
	void OnReceivedFromWrongIPCallback(CgsNetwork::NetworkPlayer *, int32_t, int32_t);

	// CgsNetworkPlayer.h:503
	bool IsNetworkPlayerReceivingPings() const;

	// CgsNetworkPlayer.cpp:1459
	virtual void SendDirtySockConnectionTelemetry(uint32_t, uint32_t);

	// Unknown accessibility
	// netgamelink.h:96
	typedef NetGameLinkStatT NetGameLinkStatT;

	// CgsNetworkPlayer.cpp:1478
	const NetworkPlayer::NetGameLinkStatT * GetNetGameStat();

	// CgsNetworkPlayer.cpp:1574
	uint32_t GetBytesSentForMessageType(EMessageType);

	// CgsNetworkPlayer.cpp:1503
	uint32_t GetBytesSentToNetwork();

	// CgsNetworkPlayer.cpp:1527
	uint32_t GetBytesSentToNetworkWithOverhead();

	// CgsNetworkPlayer.cpp:1550
	uint32_t GetBytesSentToDirtySock();

protected:
	// CgsNetworkPlayer.cpp:1312
	void CheckForPlayerDisconnectTimeout(const TimerStatus *);

private:
	// CgsNetworkPlayer.cpp:926
	void UnregisterAllMessages();

	// CgsNetworkPlayer.cpp:1343
	void UpdatePing(const TimerStatus *, uint16_t, bool);

	// CgsNetworkPlayer.cpp:1218
	// Declaration
	void UpdateMessagesReceived() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkPlayer.cpp:1235
		using namespace CgsDev::Message;

	}

	// CgsNetworkPlayer.cpp:1133
	// Declaration
	void OnMessageUnpackedCallback(CgsNetwork::Message *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkPlayer.cpp:1150
		using namespace CgsDev::Message;

	}

}

// CgsNetworkPlayer.h:71
struct CgsNetwork::PlayerMenuData {
	int (*)(...) * _vptr.PlayerMenuData;

	// CgsNetworkPlayer.h:88
	int32_t miConnectionIndex;

	// CgsNetworkPlayer.h:90
	char[20] macName;

	// CgsNetworkPlayer.h:92
	RGBA mNameColour;

	// CgsNetworkPlayer.h:96
	uint8_t mu8PlayerType;

	// CgsNetworkPlayer.h:98
	uint8_t mu8HeadsetStatus;

public:
	// CgsNetworkPlayer.cpp:80
	virtual void Clear();

}

