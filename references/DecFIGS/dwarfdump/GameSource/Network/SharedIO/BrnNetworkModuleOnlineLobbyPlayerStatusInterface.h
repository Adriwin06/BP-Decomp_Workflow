// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:23
using BrnGameState::GameStateModuleIO;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// Declaration
		struct LobbyPlayerStatusData {
			// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:50
			enum EReadyStatus {
				E_READY_STATUS_HOST = 0,
				E_READY_STATUS_READY = 1,
				E_READY_STATUS_NOT_READY = 2,
				E_READY_STATUS_PLAYING = 3,
				E_READY_STATUS_COUNT = 4,
			}

		}

	}

}

// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:47
struct BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData {
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:60
	CgsID mSelectedCarID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:61
	CgsID mSelectedWheelID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:62
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:63
	BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData::EReadyStatus meReadyStatus;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:64
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:65
	CgsNetwork::ConnectionDataPS3::EConnectionType meGameConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:66
	CgsNetwork::ConnectionDataPS3::EConnectionType meVoipConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:67
	int32_t miPlayerColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:68
	uint32_t muCarColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:69
	uint32_t muCarPaintFinishIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:70
	bool mbLocalPlayer;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:71
	bool mbIsHost;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:72
	bool mbFinalSelection;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:73
	bool mbIsCriterion;

public:
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:76
	void Clear();

}

// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:109
struct BrnNetwork::BrnNetworkModuleIO::OnlineLobbyPlayerStatusInterface {
private:
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:127
	LobbyPlayerStatusData[8] maPlayerData;

public:
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:115
	LobbyPlayerStatusData * GetPlayerLobbyData(int32_t);

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:120
	const LobbyPlayerStatusData * GetPlayerLobbyData(int32_t) const;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:124
	void Clear();

}

// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:47
struct BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData {
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:60
	CgsID mSelectedCarID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:61
	CgsID mSelectedWheelID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:62
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:63
	BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData::EReadyStatus meReadyStatus;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:64
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:65
	CgsNetwork::ConnectionDataPS3::EConnectionType meGameConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:66
	CgsNetwork::ConnectionDataPS3::EConnectionType meVoipConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:67
	int32_t miPlayerColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:68
	uint32_t muCarColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:69
	uint32_t muCarPaintFinishIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:70
	bool mbLocalPlayer;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:71
	bool mbIsHost;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:72
	bool mbFinalSelection;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:73
	bool mbIsCriterion;

public:
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:76
	void Clear();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// Declaration
		struct LobbyPlayerStatusData {
			// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:50
			enum EReadyStatus {
				E_READY_STATUS_HOST = 0,
				E_READY_STATUS_READY = 1,
				E_READY_STATUS_NOT_READY = 2,
				E_READY_STATUS_PLAYING = 3,
				E_READY_STATUS_COUNT = 4,
			}

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// Declaration
		struct LobbyPlayerStatusData {
			// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:50
			enum EReadyStatus {
				E_READY_STATUS_HOST = 0,
				E_READY_STATUS_READY = 1,
				E_READY_STATUS_NOT_READY = 2,
				E_READY_STATUS_PLAYING = 3,
				E_READY_STATUS_COUNT = 4,
			}

		}

	}

}

// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:47
struct BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData {
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:60
	CgsID mSelectedCarID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:61
	CgsID mSelectedWheelID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:62
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:63
	BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData::EReadyStatus meReadyStatus;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:64
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:65
	CgsNetwork::ConnectionDataPS3::EConnectionType meGameConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:66
	CgsNetwork::ConnectionDataPS3::EConnectionType meVoipConnectionType;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:67
	int32_t miPlayerColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:68
	uint32_t muCarColourIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:69
	uint32_t muCarPaintFinishIndex;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:70
	bool mbLocalPlayer;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:71
	bool mbIsHost;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:72
	bool mbFinalSelection;

	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:73
	bool mbIsCriterion;

public:
	// BrnNetworkModuleOnlineLobbyPlayerStatusInterface.h:76
	void Clear();

}

