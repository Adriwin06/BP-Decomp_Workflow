// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct SyncTimeMessageManager {
		// CgsSyncTimeBase.h:41
		enum EMessageMode {
			E_MESSAGE_MODE_HOST = 0,
			E_MESSAGE_MODE_CLIENT = 1,
			E_MESSAGE_MODE_NONE = 2,
			E_MESSAGE_MODE_COUNT = 2,
		}

	}

}

// CgsSyncTimeBase.h:38
struct CgsNetwork::SyncTimeMessageManager {
private:
	// CgsSyncTimeBase.h:90
	RoadRulesRecvData::NetworkPlayerID[7] mNetworkPlayerID;

	// CgsSyncTimeBase.h:91
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToSend;

	// CgsSyncTimeBase.h:92
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToReceive;

	// CgsSyncTimeBase.h:94
	CgsNetwork::SyncTimeMessageManager::EMessageMode meMessageMode;

public:
	// CgsSyncTimeBase.h:51
	void Construct();

	// CgsSyncTimeBase.h:54
	void Destruct();

	// CgsSyncTimeBase.h:58
	bool RegisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:62
	bool UnregisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:66
	void SwitchMode(CgsNetwork::SyncTimeMessageManager::EMessageMode);

	// CgsSyncTimeBase.h:74
	void PrepareSyncTimeMessageToSend(uint16_t, Time, Time, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// CgsSyncTimeBase.h:78
	bool GetNextRecievedMessage(CgsNetwork::SyncTimeMessage **);

private:
	// CgsSyncTimeBase.h:84
	int32_t GetPlayerMessageIndex(RoadRulesRecvData::NetworkPlayerID);

	// CgsSyncTimeBase.h:88
	int32_t AddNewPlayer(RoadRulesRecvData::NetworkPlayerID);

}

// CgsSyncTimeBase.h:38
struct CgsNetwork::SyncTimeMessageManager {
private:
	// CgsSyncTimeBase.h:90
	GuiEventNetworkLaunching::NetworkPlayerID[7] mNetworkPlayerID;

	// CgsSyncTimeBase.h:91
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToSend;

	// CgsSyncTimeBase.h:92
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToReceive;

	// CgsSyncTimeBase.h:94
	CgsNetwork::SyncTimeMessageManager::EMessageMode meMessageMode;

public:
	// CgsSyncTimeBase.h:51
	void Construct();

	// CgsSyncTimeBase.h:54
	void Destruct();

	// CgsSyncTimeBase.h:58
	bool RegisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:62
	bool UnregisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:66
	void SwitchMode(CgsNetwork::SyncTimeMessageManager::EMessageMode);

	// CgsSyncTimeBase.h:74
	void PrepareSyncTimeMessageToSend(uint16_t, Time, Time, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsSyncTimeBase.h:78
	bool GetNextRecievedMessage(CgsNetwork::SyncTimeMessage **);

private:
	// CgsSyncTimeBase.h:84
	int32_t GetPlayerMessageIndex(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsSyncTimeBase.h:88
	int32_t AddNewPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

}

// CgsSyncTimeBase.h:38
struct CgsNetwork::SyncTimeMessageManager {
private:
	// CgsSyncTimeBase.h:90
	AggressiveMoveData::NetworkPlayerID[7] mNetworkPlayerID;

	// CgsSyncTimeBase.h:91
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToSend;

	// CgsSyncTimeBase.h:92
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToReceive;

	// CgsSyncTimeBase.h:94
	CgsNetwork::SyncTimeMessageManager::EMessageMode meMessageMode;

public:
	// CgsSyncTimeBase.h:51
	void Construct();

	// CgsSyncTimeBase.h:54
	void Destruct();

	// CgsSyncTimeBase.h:58
	bool RegisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:62
	bool UnregisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:66
	void SwitchMode(CgsNetwork::SyncTimeMessageManager::EMessageMode);

	// CgsSyncTimeBase.h:74
	void PrepareSyncTimeMessageToSend(uint16_t, Time, Time, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID);

	// CgsSyncTimeBase.h:78
	bool GetNextRecievedMessage(CgsNetwork::SyncTimeMessage **);

private:
	// CgsSyncTimeBase.h:84
	int32_t GetPlayerMessageIndex(AggressiveMoveData::NetworkPlayerID);

	// CgsSyncTimeBase.h:88
	int32_t AddNewPlayer(AggressiveMoveData::NetworkPlayerID);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct SyncTimeMessageManager {
		// CgsSyncTimeBase.h:41
		enum EMessageMode {
			E_MESSAGE_MODE_HOST = 0,
			E_MESSAGE_MODE_CLIENT = 1,
			E_MESSAGE_MODE_NONE = 2,
			E_MESSAGE_MODE_COUNT = 2,
		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct SyncTimeMessageManager {
		// CgsSyncTimeBase.h:41
		enum EMessageMode {
			E_MESSAGE_MODE_HOST = 0,
			E_MESSAGE_MODE_CLIENT = 1,
			E_MESSAGE_MODE_NONE = 2,
			E_MESSAGE_MODE_COUNT = 2,
		}

	}

}

// CgsSyncTimeBase.h:38
struct CgsNetwork::SyncTimeMessageManager {
private:
	// CgsSyncTimeBase.h:90
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[7] mNetworkPlayerID;

	// CgsSyncTimeBase.h:91
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToSend;

	// CgsSyncTimeBase.h:92
	CgsNetwork::SyncTimeMessage[7] mSyncMessageToReceive;

	// CgsSyncTimeBase.h:94
	CgsNetwork::SyncTimeMessageManager::EMessageMode meMessageMode;

public:
	// CgsSyncTimeBase.h:51
	void Construct();

	// CgsSyncTimeBase.h:54
	void Destruct();

	// CgsSyncTimeBase.h:58
	bool RegisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:62
	bool UnregisterMessages(CgsNetwork::NetworkPlayer *);

	// CgsSyncTimeBase.h:66
	void SwitchMode(CgsNetwork::SyncTimeMessageManager::EMessageMode);

	// CgsSyncTimeBase.h:74
	void PrepareSyncTimeMessageToSend(uint16_t, Time, Time, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsSyncTimeBase.h:78
	bool GetNextRecievedMessage(CgsNetwork::SyncTimeMessage **);

private:
	// CgsSyncTimeBase.h:84
	int32_t GetPlayerMessageIndex(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsSyncTimeBase.h:88
	int32_t AddNewPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

}

