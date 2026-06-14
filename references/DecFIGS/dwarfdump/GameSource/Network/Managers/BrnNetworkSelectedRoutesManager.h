// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct SelectedRoutesManager {
		// BrnNetworkSelectedRoutesManager.h:125
		struct SelectedRoutesData {
			// BrnNetworkSelectedRoutesManager.h:127
			uint16_t[10] mau16FrameNumRoundSent;

			// BrnNetworkSelectedRoutesManager.h:129
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkSelectedRoutesManager.h:130
			BrnNetwork::SelectedRoutesMessage mMessageSend;

			// BrnNetworkSelectedRoutesManager.h:131
			BrnNetwork::SelectedRoutesMessage mMessageRecv;

			// BrnNetworkSelectedRoutesManager.h:132
			BitArray<10u> mRoundsSent;

			// BrnNetworkSelectedRoutesManager.h:133
			BitArray<10u> mRoundsReceived;

		}

	}

}

// BrnNetworkSelectedRoutesManager.h:57
struct BrnNetwork::SelectedRoutesManager {
private:
	// BrnNetworkSelectedRoutesManager.h:136
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnNetworkSelectedRoutesManager.h:137
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData[7] maSelectedRoutesData;

	// BrnNetworkSelectedRoutesManager.h:139
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkSelectedRoutesManager.h:140
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkSelectedRoutesManager.h:142
	int32_t miNumRounds;

	// BrnNetworkSelectedRoutesManager.h:144
	bool mbRoutesChanged;

public:
	// BrnNetworkSelectedRoutesManager.h:64
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkSelectedRoutesManager.h:68
	bool Prepare();

	// BrnNetworkSelectedRoutesManager.h:72
	bool Release();

	// BrnNetworkSelectedRoutesManager.h:76
	void Destruct();

	// BrnNetworkSelectedRoutesManager.h:80
	void Update();

	// BrnNetworkSelectedRoutesManager.h:85
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:90
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:94
	void Disconnected();

	// BrnNetworkSelectedRoutesManager.h:98
	void OnLeaveGame();

	// BrnNetworkSelectedRoutesManager.h:101
	bool HaveAllPlayersReceivedRoutes();

	// BrnNetworkSelectedRoutesManager.h:104
	void SendRouteData();

	// BrnNetworkSelectedRoutesManager.h:109
	void SetRouteData(int32_t, const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnNetworkSelectedRoutesManager.h:113
	void GetRouteData(BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *) const;

	// BrnNetworkSelectedRoutesManager.h:116
	bool HaveRoutesChanged() const;

	// BrnNetworkSelectedRoutesManager.h:120
	void SetRoutesChanged(bool);

private:
	// BrnNetworkSelectedRoutesManager.h:148
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData * GetSelectedRoutesDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:151
	void ClearReceivedRounds();

	// BrnNetworkSelectedRoutesManager.h:158
	void _SelectedRoutesMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkSelectedRoutesManager.h:167
	void _SelectedRoutesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct SelectedRoutesManager {
		// BrnNetworkSelectedRoutesManager.h:125
		struct SelectedRoutesData {
			// BrnNetworkSelectedRoutesManager.h:127
			uint16_t[10] mau16FrameNumRoundSent;

			// BrnNetworkSelectedRoutesManager.h:129
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkSelectedRoutesManager.h:130
			BrnNetwork::SelectedRoutesMessage mMessageSend;

			// BrnNetworkSelectedRoutesManager.h:131
			BrnNetwork::SelectedRoutesMessage mMessageRecv;

			// BrnNetworkSelectedRoutesManager.h:132
			BitArray<10u> mRoundsSent;

			// BrnNetworkSelectedRoutesManager.h:133
			BitArray<10u> mRoundsReceived;

		}

	}

}

// BrnNetworkSelectedRoutesManager.h:57
struct BrnNetwork::SelectedRoutesManager {
private:
	// BrnNetworkSelectedRoutesManager.h:136
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnNetworkSelectedRoutesManager.h:137
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData[7] maSelectedRoutesData;

	// BrnNetworkSelectedRoutesManager.h:139
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkSelectedRoutesManager.h:140
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkSelectedRoutesManager.h:142
	int32_t miNumRounds;

	// BrnNetworkSelectedRoutesManager.h:144
	bool mbRoutesChanged;

public:
	// BrnNetworkSelectedRoutesManager.h:64
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkSelectedRoutesManager.h:68
	bool Prepare();

	// BrnNetworkSelectedRoutesManager.h:72
	bool Release();

	// BrnNetworkSelectedRoutesManager.h:76
	void Destruct();

	// BrnNetworkSelectedRoutesManager.h:80
	void Update();

	// BrnNetworkSelectedRoutesManager.h:85
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:90
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:94
	void Disconnected();

	// BrnNetworkSelectedRoutesManager.h:98
	void OnLeaveGame();

	// BrnNetworkSelectedRoutesManager.h:101
	bool HaveAllPlayersReceivedRoutes();

	// BrnNetworkSelectedRoutesManager.h:104
	void SendRouteData();

	// BrnNetworkSelectedRoutesManager.h:109
	void SetRouteData(int32_t, const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnNetworkSelectedRoutesManager.h:113
	void GetRouteData(BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *) const;

	// BrnNetworkSelectedRoutesManager.h:116
	bool HaveRoutesChanged() const;

	// BrnNetworkSelectedRoutesManager.h:120
	void SetRoutesChanged(bool);

private:
	// BrnNetworkSelectedRoutesManager.h:148
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData * GetSelectedRoutesDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:151
	void ClearReceivedRounds();

	// BrnNetworkSelectedRoutesManager.h:158
	void _SelectedRoutesMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkSelectedRoutesManager.h:167
	void _SelectedRoutesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct SelectedRoutesManager {
		// BrnNetworkSelectedRoutesManager.h:125
		struct SelectedRoutesData {
			// BrnNetworkSelectedRoutesManager.h:127
			uint16_t[10] mau16FrameNumRoundSent;

			// BrnNetworkSelectedRoutesManager.h:129
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkSelectedRoutesManager.h:130
			BrnNetwork::SelectedRoutesMessage mMessageSend;

			// BrnNetworkSelectedRoutesManager.h:131
			BrnNetwork::SelectedRoutesMessage mMessageRecv;

			// BrnNetworkSelectedRoutesManager.h:132
			BitArray<10u> mRoundsSent;

			// BrnNetworkSelectedRoutesManager.h:133
			BitArray<10u> mRoundsReceived;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct SelectedRoutesManager {
		// BrnNetworkSelectedRoutesManager.h:125
		struct SelectedRoutesData {
			// BrnNetworkSelectedRoutesManager.h:127
			uint16_t[10] mau16FrameNumRoundSent;

			// BrnNetworkSelectedRoutesManager.h:129
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkSelectedRoutesManager.h:130
			BrnNetwork::SelectedRoutesMessage mMessageSend;

			// BrnNetworkSelectedRoutesManager.h:131
			BrnNetwork::SelectedRoutesMessage mMessageRecv;

			// BrnNetworkSelectedRoutesManager.h:132
			BitArray<10u> mRoundsSent;

			// BrnNetworkSelectedRoutesManager.h:133
			BitArray<10u> mRoundsReceived;

		}

	}

}

// BrnNetworkSelectedRoutesManager.h:57
struct BrnNetwork::SelectedRoutesManager {
private:
	// BrnNetworkSelectedRoutesManager.h:136
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnNetworkSelectedRoutesManager.h:137
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData[7] maSelectedRoutesData;

	// BrnNetworkSelectedRoutesManager.h:139
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkSelectedRoutesManager.h:140
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkSelectedRoutesManager.h:142
	int32_t miNumRounds;

	// BrnNetworkSelectedRoutesManager.h:144
	bool mbRoutesChanged;

public:
	// BrnNetworkSelectedRoutesManager.h:64
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkSelectedRoutesManager.h:68
	bool Prepare();

	// BrnNetworkSelectedRoutesManager.h:72
	bool Release();

	// BrnNetworkSelectedRoutesManager.h:76
	void Destruct();

	// BrnNetworkSelectedRoutesManager.h:80
	void Update();

	// BrnNetworkSelectedRoutesManager.h:85
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:90
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:94
	void Disconnected();

	// BrnNetworkSelectedRoutesManager.h:98
	void OnLeaveGame();

	// BrnNetworkSelectedRoutesManager.h:101
	bool HaveAllPlayersReceivedRoutes();

	// BrnNetworkSelectedRoutesManager.h:104
	void SendRouteData();

	// BrnNetworkSelectedRoutesManager.h:109
	void SetRouteData(int32_t, const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnNetworkSelectedRoutesManager.h:113
	void GetRouteData(BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *) const;

	// BrnNetworkSelectedRoutesManager.h:116
	bool HaveRoutesChanged() const;

	// BrnNetworkSelectedRoutesManager.h:120
	void SetRoutesChanged(bool);

private:
	// BrnNetworkSelectedRoutesManager.h:148
	BrnNetwork::SelectedRoutesManager::SelectedRoutesData * GetSelectedRoutesDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkSelectedRoutesManager.h:151
	void ClearReceivedRounds();

	// BrnNetworkSelectedRoutesManager.h:158
	void _SelectedRoutesMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkSelectedRoutesManager.h:167
	// Declaration
	void _SelectedRoutesMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSelectedRoutesManager.cpp:541
		using namespace CgsDev::Message;

	}

}

