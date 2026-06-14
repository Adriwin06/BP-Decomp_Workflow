// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceStructureInterface {
	public:
		// CgsServerInterfaceStructureInterface.h:47
		virtual ~ServerInterfaceStructureInterface();

		ServerInterfaceStructureInterface();

		CgsNetwork::ServerInterfaceStructureInterface & operator=(const CgsNetwork::ServerInterfaceStructureInterface &);

	}

}

// CgsServerInterfaceStructureInterface.h:43
void CgsNetwork::ServerInterfaceStructureInterface::ServerInterfaceStructureInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:43
void CgsNetwork::ServerInterfaceStructureInterface::operator=(const const CgsNetwork::ServerInterfaceStructureInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceStructureInterface {
	public:
		// CgsServerInterfaceStructureInterface.h:47
		virtual ~ServerInterfaceStructureInterface();

		ServerInterfaceStructureInterface();

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	struct ServerInterfaceGameParamsBase;

	struct LobbyPrepareParams;

	struct ConnAPIPrepareParams;

	struct ServerInterfacePrepareParams;

	struct ServerInterfaceComponent;

	struct ServerInterfaceComponentData;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct ServerInterface;

	struct BitStream;

	struct FloatQuantiser;

	struct IntQuantiser;

	struct SmartBitStream;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct SignalMessage;

	struct ReliableMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct NetworkPlayer;

	struct NetMessageData;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerName;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct BuddyManagerBase;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct NetworkImageConverter;

	struct NetworkTexture;

	struct ServerInterfaceBroadcastMessage;

	struct ServerInterfaceBroadcastDataPacket;

	struct LobbyLoginErrorToServerInterfaceError;

	struct ServerInterfacePlayerParamsBase;

	struct ServerInterfaceQuickJoinParamsBase;

	struct ServerInterfaceGameSearchParamsBase;

	struct ServerInterfaceGameResultsBase;

	struct ServerInterfaceStructureInterface;

	struct DataIDToMemoryAddr;

	struct EventDataKeys;

	struct DSBuddyErrorToBuddyManagerError;

	struct NetworkTextureDXTCompress;

	struct MessageHeader;

	struct ServerInterfacePlayerParams;

	struct ServerInterfaceDirtySockPS3;

	struct ServerInterfaceGamesPS3;

	struct ServerInterfaceUsersetParamsBase;

	struct ServerInterfaceCustomCommands;

	struct ServerInterfaceTelemetry;

	struct ServerInterfaceEndGameDataBase;

	struct DefaultPlayerParameters;

	struct DefaultPlayerInfoData;

	struct PingMessage;

	struct PingReplyMessage;

}

// CgsServerInterfaceStructureInterface.h:43
struct CgsNetwork::ServerInterfaceStructureInterface {
	int (*)(...) * _vptr.ServerInterfaceStructureInterface;

public:
	void ServerInterfaceStructureInterface(const ServerInterfaceStructureInterface &);

	void ServerInterfaceStructureInterface();

	// CgsServerInterfaceStructureInterface.h:47
	virtual void ~ServerInterfaceStructureInterface();

	// CgsServerInterfaceStructureInterface.h:50
	virtual const char * GetPattern() const;

	// CgsServerInterfaceStructureInterface.cpp:41
	virtual int32_t GetPatternLength() const;

	// CgsServerInterfaceStructureInterface.h:56
	virtual uint32_t GetDataSize() const;

	// CgsServerInterfaceStructureInterface.h:59
	virtual void * GetData();

	// CgsServerInterfaceStructureInterface.h:62
	virtual const void * GetData() const;

}

