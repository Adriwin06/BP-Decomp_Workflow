// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct MarkedManManager {
		// BrnNetworkMarkedManManager.h:103
		struct DataEntry {
			// BrnNetworkMarkedManManager.h:105
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkMarkedManManager.h:106
			BrnNetwork::MarkedManMessage mMarkedManMessageSend;

			// BrnNetworkMarkedManManager.h:107
			BrnNetwork::MarkedManMessage mMarkedManMessageRecv;

		}

	}

}

// BrnNetworkMarkedManManager.h:48
struct BrnNetwork::MarkedManManager {
private:
	// BrnNetworkMarkedManManager.h:110
	BrnNetwork::MarkedManManager::DataEntry[7] maPlayers;

	// BrnNetworkMarkedManManager.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkMarkedManManager.h:113
	int32_t miNumberOfPlayersFinishedMarking;

public:
	// BrnNetworkMarkedManManager.h:53
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkMarkedManManager.h:56
	bool Prepare();

	// BrnNetworkMarkedManManager.h:59
	bool Release();

	// BrnNetworkMarkedManManager.h:62
	void Destruct();

	// BrnNetworkMarkedManManager.h:65
	void Update();

	// BrnNetworkMarkedManManager.h:68
	void OnRoundStart();

	// BrnNetworkMarkedManManager.h:71
	void Disconnected();

	// BrnNetworkMarkedManManager.h:75
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:79
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:83
	void SendMarkedManDataToAll(bool);

	// BrnNetworkMarkedManManager.h:87
	int32_t GetNumberOfPlayersFinishedMarking();

	// BrnNetworkMarkedManManager.h:91
	void MarkingFinished();

private:
	// BrnNetworkMarkedManManager.h:118
	BrnNetwork::MarkedManManager::DataEntry * GetDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:121
	void ResetRemotePlayers();

	// BrnNetworkMarkedManManager.h:128
	void _MarkedManMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkMarkedManManager.h:137
	void _MarkedManMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct MarkedManManager {
		// BrnNetworkMarkedManManager.h:103
		struct DataEntry {
			// BrnNetworkMarkedManManager.h:105
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkMarkedManManager.h:106
			BrnNetwork::MarkedManMessage mMarkedManMessageSend;

			// BrnNetworkMarkedManManager.h:107
			BrnNetwork::MarkedManMessage mMarkedManMessageRecv;

		}

	}

}

// BrnNetworkMarkedManManager.h:48
struct BrnNetwork::MarkedManManager {
private:
	// BrnNetworkMarkedManManager.h:110
	BrnNetwork::MarkedManManager::DataEntry[7] maPlayers;

	// BrnNetworkMarkedManManager.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkMarkedManManager.h:113
	int32_t miNumberOfPlayersFinishedMarking;

public:
	// BrnNetworkMarkedManManager.h:53
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkMarkedManManager.h:56
	bool Prepare();

	// BrnNetworkMarkedManManager.h:59
	bool Release();

	// BrnNetworkMarkedManManager.h:62
	void Destruct();

	// BrnNetworkMarkedManManager.h:65
	void Update();

	// BrnNetworkMarkedManManager.h:68
	void OnRoundStart();

	// BrnNetworkMarkedManManager.h:71
	void Disconnected();

	// BrnNetworkMarkedManManager.h:75
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:79
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:83
	void SendMarkedManDataToAll(bool);

	// BrnNetworkMarkedManManager.h:87
	int32_t GetNumberOfPlayersFinishedMarking();

	// BrnNetworkMarkedManManager.h:91
	void MarkingFinished();

private:
	// BrnNetworkMarkedManManager.h:118
	BrnNetwork::MarkedManManager::DataEntry * GetDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:121
	void ResetRemotePlayers();

	// BrnNetworkMarkedManManager.h:128
	void _MarkedManMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkMarkedManManager.h:137
	void _MarkedManMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct MarkedManManager {
		// BrnNetworkMarkedManManager.h:103
		struct DataEntry {
			// BrnNetworkMarkedManManager.h:105
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkMarkedManManager.h:106
			BrnNetwork::MarkedManMessage mMarkedManMessageSend;

			// BrnNetworkMarkedManManager.h:107
			BrnNetwork::MarkedManMessage mMarkedManMessageRecv;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct MarkedManManager {
		// BrnNetworkMarkedManManager.h:103
		struct DataEntry {
			// BrnNetworkMarkedManManager.h:105
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkMarkedManManager.h:106
			BrnNetwork::MarkedManMessage mMarkedManMessageSend;

			// BrnNetworkMarkedManManager.h:107
			BrnNetwork::MarkedManMessage mMarkedManMessageRecv;

		}

	}

}

// BrnNetworkMarkedManManager.h:48
struct BrnNetwork::MarkedManManager {
private:
	// BrnNetworkMarkedManManager.h:110
	BrnNetwork::MarkedManManager::DataEntry[7] maPlayers;

	// BrnNetworkMarkedManManager.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkMarkedManManager.h:113
	int32_t miNumberOfPlayersFinishedMarking;

public:
	// BrnNetworkMarkedManManager.h:53
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkMarkedManManager.h:56
	bool Prepare();

	// BrnNetworkMarkedManManager.h:59
	bool Release();

	// BrnNetworkMarkedManManager.h:62
	void Destruct();

	// BrnNetworkMarkedManManager.h:65
	void Update();

	// BrnNetworkMarkedManManager.h:68
	void OnRoundStart();

	// BrnNetworkMarkedManManager.h:71
	void Disconnected();

	// BrnNetworkMarkedManManager.h:75
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:79
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:83
	void SendMarkedManDataToAll(bool);

	// BrnNetworkMarkedManManager.h:87
	int32_t GetNumberOfPlayersFinishedMarking();

	// BrnNetworkMarkedManManager.h:91
	void MarkingFinished();

private:
	// BrnNetworkMarkedManManager.h:118
	BrnNetwork::MarkedManManager::DataEntry * GetDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkMarkedManManager.h:121
	void ResetRemotePlayers();

	// BrnNetworkMarkedManManager.h:128
	void _MarkedManMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkMarkedManManager.h:137
	// Declaration
	void _MarkedManMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkMarkedManManager.cpp:368
		using namespace CgsDev::Message;

	}

}

