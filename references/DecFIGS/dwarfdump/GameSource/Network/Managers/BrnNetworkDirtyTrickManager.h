// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkDirtyTrickManager {
		// BrnNetworkDirtyTrickManager.h:111
		struct DirtyTrickData {
			// BrnNetworkDirtyTrickManager.h:113
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkDirtyTrickManager.h:114
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageSend;

			// BrnNetworkDirtyTrickManager.h:115
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageRecv;

		}

	}

}

// BrnNetworkDirtyTrickManager.h:62
struct BrnNetwork::NetworkDirtyTrickManager {
private:
	// BrnNetworkDirtyTrickManager.h:118
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData[7] maDirtyTrickData;

	// BrnNetworkDirtyTrickManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkDirtyTrickManager.h:120
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkDirtyTrickManager.h:121
	CgsNetwork::TimeManager * mpTimeManager;

public:
	// BrnNetworkDirtyTrickManager.h:70
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkDirtyTrickManager.h:74
	bool Prepare();

	// BrnNetworkDirtyTrickManager.h:78
	bool Release();

	// BrnNetworkDirtyTrickManager.h:82
	void Destruct();

	// BrnNetworkDirtyTrickManager.h:87
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkDirtyTrickManager.h:92
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkDirtyTrickManager.h:97
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:102
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:106
	void Disconnected();

private:
	// BrnNetworkDirtyTrickManager.h:126
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * GetDirtyTrickDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:130
	void ProcessDirtyTrickEvents();

	// BrnNetworkDirtyTrickManager.h:138
	void SendDirtyTrickMessage(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkDirtyTrickManager.h:144
	void ReceiveDirtyTrickMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::DirtyTrickMessage *);

	// BrnNetworkDirtyTrickManager.h:151
	void _DirtyTrickMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkDirtyTrickManager.h:160
	void _DirtyTrickDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkDirtyTrickManager {
		// BrnNetworkDirtyTrickManager.h:111
		struct DirtyTrickData {
			// BrnNetworkDirtyTrickManager.h:113
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkDirtyTrickManager.h:114
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageSend;

			// BrnNetworkDirtyTrickManager.h:115
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageRecv;

		}

	}

}

// BrnNetworkDirtyTrickManager.h:62
struct BrnNetwork::NetworkDirtyTrickManager {
private:
	// BrnNetworkDirtyTrickManager.h:118
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData[7] maDirtyTrickData;

	// BrnNetworkDirtyTrickManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkDirtyTrickManager.h:120
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkDirtyTrickManager.h:121
	CgsNetwork::TimeManager * mpTimeManager;

public:
	// BrnNetworkDirtyTrickManager.h:70
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkDirtyTrickManager.h:74
	bool Prepare();

	// BrnNetworkDirtyTrickManager.h:78
	bool Release();

	// BrnNetworkDirtyTrickManager.h:82
	void Destruct();

	// BrnNetworkDirtyTrickManager.h:87
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkDirtyTrickManager.h:92
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkDirtyTrickManager.h:97
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:102
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:106
	void Disconnected();

private:
	// BrnNetworkDirtyTrickManager.h:126
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * GetDirtyTrickDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:130
	void ProcessDirtyTrickEvents();

	// BrnNetworkDirtyTrickManager.h:138
	void SendDirtyTrickMessage(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkDirtyTrickManager.h:144
	void ReceiveDirtyTrickMessage(GuiEventNetworkLaunching::NetworkPlayerID, BrnNetwork::DirtyTrickMessage *);

	// BrnNetworkDirtyTrickManager.h:151
	void _DirtyTrickMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkDirtyTrickManager.h:160
	void _DirtyTrickDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkDirtyTrickManager {
		// BrnNetworkDirtyTrickManager.h:111
		struct DirtyTrickData {
			// BrnNetworkDirtyTrickManager.h:113
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkDirtyTrickManager.h:114
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageSend;

			// BrnNetworkDirtyTrickManager.h:115
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageRecv;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkDirtyTrickManager {
		// BrnNetworkDirtyTrickManager.h:111
		struct DirtyTrickData {
			// BrnNetworkDirtyTrickManager.h:113
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkDirtyTrickManager.h:114
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageSend;

			// BrnNetworkDirtyTrickManager.h:115
			BrnNetwork::DirtyTrickMessage mDirtyTrickMessageRecv;

		}

	}

}

// BrnNetworkDirtyTrickManager.h:62
struct BrnNetwork::NetworkDirtyTrickManager {
private:
	// BrnNetworkDirtyTrickManager.h:118
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData[7] maDirtyTrickData;

	// BrnNetworkDirtyTrickManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkDirtyTrickManager.h:120
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkDirtyTrickManager.h:121
	CgsNetwork::TimeManager * mpTimeManager;

public:
	// BrnNetworkDirtyTrickManager.h:70
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkDirtyTrickManager.h:74
	bool Prepare();

	// BrnNetworkDirtyTrickManager.h:78
	bool Release();

	// BrnNetworkDirtyTrickManager.h:82
	void Destruct();

	// BrnNetworkDirtyTrickManager.h:87
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkDirtyTrickManager.h:92
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkDirtyTrickManager.h:97
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:102
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:106
	void Disconnected();

private:
	// BrnNetworkDirtyTrickManager.h:126
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * GetDirtyTrickDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:130
	void ProcessDirtyTrickEvents();

	// BrnNetworkDirtyTrickManager.h:138
	void SendDirtyTrickMessage(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkDirtyTrickManager.h:144
	void ReceiveDirtyTrickMessage(AggressiveMoveData::NetworkPlayerID, BrnNetwork::DirtyTrickMessage *);

	// BrnNetworkDirtyTrickManager.h:151
	void _DirtyTrickMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkDirtyTrickManager.h:160
	// Declaration
	void _DirtyTrickDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkDirtyTrickManager.cpp:490
		using namespace CgsDev::Message;

	}

}

// BrnNetworkDirtyTrickManager.h:62
struct BrnNetwork::NetworkDirtyTrickManager {
private:
	// BrnNetworkDirtyTrickManager.h:118
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData[7] maDirtyTrickData;

	// BrnNetworkDirtyTrickManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkDirtyTrickManager.h:120
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkDirtyTrickManager.h:121
	CgsNetwork::TimeManager * mpTimeManager;

public:
	// BrnNetworkDirtyTrickManager.h:70
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnNetworkDirtyTrickManager.h:74
	bool Prepare();

	// BrnNetworkDirtyTrickManager.h:78
	bool Release();

	// BrnNetworkDirtyTrickManager.h:82
	void Destruct();

	// BrnNetworkDirtyTrickManager.h:87
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkDirtyTrickManager.h:92
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnNetworkDirtyTrickManager.h:97
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:102
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:106
	void Disconnected();

private:
	// BrnNetworkDirtyTrickManager.h:126
	BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * GetDirtyTrickDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkDirtyTrickManager.h:130
	void ProcessDirtyTrickEvents();

	// BrnNetworkDirtyTrickManager.h:138
	void SendDirtyTrickMessage(EActiveRaceCarIndex, EActiveRaceCarIndex, uint8_t, uint8_t);

	// BrnNetworkDirtyTrickManager.h:144
	void ReceiveDirtyTrickMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::DirtyTrickMessage *);

	// BrnNetworkDirtyTrickManager.h:151
	void _DirtyTrickMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkDirtyTrickManager.h:160
	void _DirtyTrickDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

