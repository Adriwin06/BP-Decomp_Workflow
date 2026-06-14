// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ConnectionDataPS3 {
		// CgsConnectionDataPS3.h:41
		enum EConnectionType {
			E_CONNECTION_TYPE_DIRECT = 0,
			E_CONNECTION_TYPE_GAME_SERVER = 1,
			E_CONNECTION_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

		}

	}

}

// CgsConnectionDataPS3.h:39
struct CgsNetwork::ConnectionDataPS3 {
	// netgamelink.h:49
	typedef CgsNetwork::DirtySock::NetGameLinkRefT NetGameLinkRefT;

	// CgsConnectionDataPS3.h:49
	ConnectionDataPS3::NetGameLinkRefT * mpNetGameLink;

	// CgsConnectionDataPS3.h:50
	int32_t miIPAddress;

	// CgsConnectionDataPS3.h:51
	int32_t miLocalIPAddress;

	// CgsConnectionDataPS3.h:52
	uint32_t muConnApiClientId;

	// CgsConnectionDataPS3.h:53
	uint32_t muGamePort;

	// CgsConnectionDataPS3.h:54
	uint32_t muVoipPort;

	// CgsConnectionDataPS3.h:55
	uint32_t muLocalGamePort;

	// CgsConnectionDataPS3.h:56
	uint32_t muMnglGamePort;

	// CgsConnectionDataPS3.h:57
	uint32_t muLocalVoipPort;

	// CgsConnectionDataPS3.h:58
	uint32_t muMnglVoipPort;

	// CgsConnectionDataPS3.h:59
	CgsNetwork::ConnectionDataPS3::EConnectionType meGameConnectionType;

	// CgsConnectionDataPS3.h:60
	CgsNetwork::ConnectionDataPS3::EConnectionType meVoipConnectionType;

	// CgsConnectionDataPS3.h:61
	LobbyApiUserT::DirtyAddrT mDirtyAddr;

public:
	// CgsConnectionDataPS3.h:64
	void Clear();

	// CgsConnectionDataPS3.h:82
	bool IsValid();

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ConnectionDataPS3 {
		// CgsConnectionDataPS3.h:41
		enum EConnectionType {
			E_CONNECTION_TYPE_DIRECT = 0,
			E_CONNECTION_TYPE_GAME_SERVER = 1,
			E_CONNECTION_TYPE_COUNT = 2,
		}

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ConnectionDataPS3 {
		// CgsConnectionDataPS3.h:41
		enum EConnectionType {
			E_CONNECTION_TYPE_DIRECT = 0,
			E_CONNECTION_TYPE_GAME_SERVER = 1,
			E_CONNECTION_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct PlayersConnectionManager {
		// CgsPlayersConnectionManager.h:147
		struct ConnectionDataEntry {
			// CgsPlayersConnectionManager.h:150
			PlayerConnectionData mPlayerConnectionData;

			// CgsPlayersConnectionManager.h:154
			PlayerConnectionData[7] maLastFinaliseStateSent;

			// CgsPlayersConnectionManager.h:155
			PlayerConnectionData[7] maLastFinaliseStateRecvd;

			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

			// CgsPlayersConnectionManager.h:157
			CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData mConnectionData;

			// CgsPlayersConnectionManager.h:159
			CgsNetwork::TestConnectionMessage mTestConnectionMessageSend;

			// CgsPlayersConnectionManager.h:160
			CgsNetwork::TestConnectionMessage mTestConnectionMessageRecv;

			// CgsPlayersConnectionManager.h:161
			Time mTimeTestConnectionSent;

			// CgsPlayersConnectionManager.h:162
			bool mbHaveReceivedTestPacketFromPlayer;

			// CgsPlayersConnectionManager.h:163
			bool mbTestConnectionPacketDelivered;

			// CgsPlayersConnectionManager.h:164
			bool mbTestConnectionPacketNacked;

			// CgsPlayersConnectionManager.h:166
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageSend;

			// CgsPlayersConnectionManager.h:167
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageRecv;

		}

	}

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct ConnectionDataPS3 {
		// CgsConnectionDataPS3.h:41
		enum EConnectionType {
			E_CONNECTION_TYPE_DIRECT = 0,
			E_CONNECTION_TYPE_GAME_SERVER = 1,
			E_CONNECTION_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ConnectionDataPS3 {
		// CgsConnectionDataPS3.h:41
		enum EConnectionType {
			E_CONNECTION_TYPE_DIRECT = 0,
			E_CONNECTION_TYPE_GAME_SERVER = 1,
			E_CONNECTION_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsFakeNetworkConditions.h:90
			uint8_t * mpData;

			// CgsFakeNetworkConditions.h:91
			int32_t miLength;

			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

			// CgsFakeNetworkConditions.h:92
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

			// CgsFakeNetworkConditions.h:93
			int32_t miFramesBeforeSend;

		public:
			// CgsFakeNetworkConditions.h:81
			void Construct(uint8_t *);

			// CgsFakeNetworkConditions.h:88
			void Prepare(uint8_t *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, int32_t);

		}

	}

}

