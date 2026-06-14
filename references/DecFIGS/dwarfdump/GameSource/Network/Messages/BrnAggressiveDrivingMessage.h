// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnAggressiveDrivingMessage.h:38
	enum EAggressiveMoveType {
		E_AGGRESSIVE_MOVE_TAKE_DOWN = 0,
		E_AGGRESSIVE_MOVE_SLAM = 1,
		E_AGGRESSIVE_MOVE_SHUNT = 2,
		E_AGGRESSIVE_MOVE_TRADING_PAINT = 3,
		E_AGGRESSIVE_MOVE_BATTLING = 4,
		E_AGGRESSIVE_MOVE_COUNT = 5,
	}

	// BrnAggressiveDrivingMessage.h:49
	const int32_t KI_MIN_PLAYERS;

	// BrnAggressiveDrivingMessage.h:50
	const int32_t KI_MIN_AGGRESSIVE_MOVE_TYPE;

	// BrnAggressiveDrivingMessage.h:51
	const int32_t KI_MAX_AGGRESSIVE_MOVE_TYPE = 5;

	// BrnAggressiveDrivingMessage.h:52
	const int32_t KI_MIN_AGGRESSIVE_MOVES;

	// BrnAggressiveDrivingMessage.h:53
	const int32_t KI_MAX_AGGRESSIVE_MOVES = 5;

	// BrnAggressiveDrivingMessage.h:54
	const int32_t KI_MIN_RACE_CARS;

	// BrnAggressiveDrivingMessage.h:55
	const int32_t KI_MAX_RACE_CARS = 8;

}

// BrnAggressiveDrivingMessage.h:61
struct BrnNetwork::AggressiveMoveData {
	// BrnAggressiveDrivingMessage.h:63
	BrnNetwork::EAggressiveMoveType meAggressiveMoveType;

	// BrnAggressiveDrivingMessage.h:64
	BrnGameState::ETakedownType meTakedownType;

	// BrnAggressiveDrivingMessage.h:65
	RoadRulesRecvData::NetworkPlayerID mAggressorNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:66
	RoadRulesRecvData::NetworkPlayerID mVictimNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:67
	bool mbMarkedMan;

	// BrnAggressiveDrivingMessage.h:68
	bool mbSettledScore;

	// BrnAggressiveDrivingMessage.h:69
	uint8_t muImpactScore;

	// BrnAggressiveDrivingMessage.h:71
	Vector3 mDirection;

	// BrnAggressiveDrivingMessage.h:72
	float32_t mfMagnitude;

	// BrnAggressiveDrivingMessage.h:73
	float32_t mfDuration;

	// BrnAggressiveDrivingMessage.h:74
	float32_t mfSteeringDirection;

	// BrnAggressiveDrivingMessage.h:75
	float32_t mfRecoveryTime;

	// BrnAggressiveDrivingMessage.h:77
	int32_t miNumberOfTimesTriedToSend;

public:
	// BrnAggressiveDrivingMessage.h:80
	void Clear();

}

// BrnAggressiveDrivingMessage.h:61
struct BrnNetwork::AggressiveMoveData {
	// BrnAggressiveDrivingMessage.h:63
	BrnNetwork::EAggressiveMoveType meAggressiveMoveType;

	// BrnAggressiveDrivingMessage.h:64
	BrnGameState::ETakedownType meTakedownType;

	// BrnAggressiveDrivingMessage.h:65
	GuiEventNetworkLaunching::NetworkPlayerID mAggressorNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:66
	GuiEventNetworkLaunching::NetworkPlayerID mVictimNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:67
	bool mbMarkedMan;

	// BrnAggressiveDrivingMessage.h:68
	bool mbSettledScore;

	// BrnAggressiveDrivingMessage.h:69
	uint8_t muImpactScore;

	// BrnAggressiveDrivingMessage.h:71
	Vector3 mDirection;

	// BrnAggressiveDrivingMessage.h:72
	float32_t mfMagnitude;

	// BrnAggressiveDrivingMessage.h:73
	float32_t mfDuration;

	// BrnAggressiveDrivingMessage.h:74
	float32_t mfSteeringDirection;

	// BrnAggressiveDrivingMessage.h:75
	float32_t mfRecoveryTime;

	// BrnAggressiveDrivingMessage.h:77
	int32_t miNumberOfTimesTriedToSend;

public:
	// BrnAggressiveDrivingMessage.h:80
	void Clear();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnAggressiveDrivingMessage.h:38
	enum EAggressiveMoveType {
		E_AGGRESSIVE_MOVE_TAKE_DOWN = 0,
		E_AGGRESSIVE_MOVE_SLAM = 1,
		E_AGGRESSIVE_MOVE_SHUNT = 2,
		E_AGGRESSIVE_MOVE_TRADING_PAINT = 3,
		E_AGGRESSIVE_MOVE_BATTLING = 4,
		E_AGGRESSIVE_MOVE_COUNT = 5,
	}

	// BrnAggressiveDrivingMessage.h:49
	const int32_t KI_MIN_PLAYERS;

	// BrnAggressiveDrivingMessage.h:50
	const int32_t KI_MIN_AGGRESSIVE_MOVE_TYPE;

	// BrnAggressiveDrivingMessage.h:51
	const int32_t KI_MAX_AGGRESSIVE_MOVE_TYPE = 5;

	// BrnAggressiveDrivingMessage.h:52
	const int32_t KI_MIN_AGGRESSIVE_MOVES;

	// BrnAggressiveDrivingMessage.h:53
	const int32_t KI_MAX_AGGRESSIVE_MOVES = 5;

	// BrnAggressiveDrivingMessage.h:54
	const int32_t KI_MIN_RACE_CARS;

	// BrnAggressiveDrivingMessage.h:55
	const int32_t KI_MAX_RACE_CARS = 8;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnAggressiveDrivingMessage.h:38
	enum EAggressiveMoveType {
		E_AGGRESSIVE_MOVE_TAKE_DOWN = 0,
		E_AGGRESSIVE_MOVE_SLAM = 1,
		E_AGGRESSIVE_MOVE_SHUNT = 2,
		E_AGGRESSIVE_MOVE_TRADING_PAINT = 3,
		E_AGGRESSIVE_MOVE_BATTLING = 4,
		E_AGGRESSIVE_MOVE_COUNT = 5,
	}

	struct AggressiveMoveData;

	struct AggressiveDrivingMessage;

	struct RoadRulesUploadData;

	struct RoadRulesLocalPlayerDownloadedScores;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct ScoreboardRow;

	struct Scoreboard;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct LiveRevengeProfile;

	struct StatsRequestEvent;

	struct ServerInterfaceCustomCommands;

	struct ConnectionManager;

	struct GameSearchParams;

	struct GameResults;

	struct StandingsData;

	struct PlayerFinishedRoundMessage;

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	struct HullSyncMessage;

	struct RestartTrafficMessage;

	struct TrafficHashMessage;

	struct NetworkPlayerStatsResults;

	struct StatsDebugComponent;

	struct StatsUpdateMessage;

	struct BrnServerInterface;

	struct ScoreboardDebugComponent;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct DirtyTrickMessage;

	struct ImageManagerDebugComponent;

	struct SelectedRoutesMessage;

	struct MarkedManMessage;

	struct RoadRulesMessage;

	struct RoadRulesPersonalBestMessage;

	struct RoadRulesManagerDebugComponent;

	struct FburnSuccessUpdateMessage;

	struct FburnChallengeSuccessMessage;

	// Declaration
	struct PlayerInfoData {
	public:
		PlayerInfoData();

		virtual ~PlayerInfoData();

	}

	struct NetworkGamerCardManagerPS3;

	struct CameraRequestResponseMessage;

	struct CameraStatusMessage;

	struct CameraRequestMessage;

	struct NetworkNotificationManagerPS3;

	struct RankCodeToScoreboardColumnEDataType;

	struct NetworkNotificationManagerBase;

	// Declaration
	struct GameSearchParamsPS3 {
	public:
		virtual ~GameSearchParamsPS3();

		BrnNetwork::GameSearchParamsPS3 & operator=(const BrnNetwork::GameSearchParamsPS3 &);

		GameSearchParamsPS3();

	}

	struct PlayerParams;

	// Declaration
	struct UsersetParams {
	public:
		UsersetParams();

		virtual ~UsersetParams();

	}

	struct BrnServerInterfaceTelemetry;

	// Declaration
	struct QuickJoinParams {
	public:
		QuickJoinParams();

		virtual ~QuickJoinParams();

	}

	// BrnAggressiveDrivingMessage.h:49
	const int32_t KI_MIN_PLAYERS;

	// BrnAggressiveDrivingMessage.h:50
	const int32_t KI_MIN_AGGRESSIVE_MOVE_TYPE;

	// BrnAggressiveDrivingMessage.h:51
	const int32_t KI_MAX_AGGRESSIVE_MOVE_TYPE = 5;

	// BrnAggressiveDrivingMessage.h:52
	const int32_t KI_MIN_AGGRESSIVE_MOVES;

	// BrnAggressiveDrivingMessage.h:53
	const int32_t KI_MAX_AGGRESSIVE_MOVES = 5;

	// BrnAggressiveDrivingMessage.h:54
	const int32_t KI_MIN_RACE_CARS;

	// BrnAggressiveDrivingMessage.h:55
	const int32_t KI_MAX_RACE_CARS = 8;

}

// BrnAggressiveDrivingMessage.h:61
struct BrnNetwork::AggressiveMoveData {
	// BrnAggressiveDrivingMessage.h:63
	BrnNetwork::EAggressiveMoveType meAggressiveMoveType;

	// BrnAggressiveDrivingMessage.h:64
	BrnGameState::ETakedownType meTakedownType;

	// CgsNetworkConstants.h:38
	typedef int32_t NetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:65
	AggressiveMoveData::NetworkPlayerID mAggressorNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:66
	AggressiveMoveData::NetworkPlayerID mVictimNetworkPlayerID;

	// BrnAggressiveDrivingMessage.h:67
	bool mbMarkedMan;

	// BrnAggressiveDrivingMessage.h:68
	bool mbSettledScore;

	// BrnAggressiveDrivingMessage.h:69
	uint8_t muImpactScore;

	// BrnAggressiveDrivingMessage.h:71
	Vector3 mDirection;

	// BrnAggressiveDrivingMessage.h:72
	float32_t mfMagnitude;

	// BrnAggressiveDrivingMessage.h:73
	float32_t mfDuration;

	// BrnAggressiveDrivingMessage.h:74
	float32_t mfSteeringDirection;

	// BrnAggressiveDrivingMessage.h:75
	float32_t mfRecoveryTime;

	// BrnAggressiveDrivingMessage.h:77
	int32_t miNumberOfTimesTriedToSend;

public:
	// BrnAggressiveDrivingMessage.h:80
	void Clear();

}

// BrnAggressiveDrivingMessage.h:108
struct BrnNetwork::AggressiveDrivingMessage : public CgsNetwork::Message {
private:
	// BrnAggressiveDrivingMessage.h:150
	int32_t miNumberOfAggressiveMoves;

	// BrnAggressiveDrivingMessage.h:151
	AggressiveMoveData[5] maAggressiveMoveDataArray;

public:
	// BrnAggressiveDrivingMessage.cpp:50
	void Construct();

	// BrnAggressiveDrivingMessage.cpp:67
	void PrepareForSend(uint16_t, int32_t, AggressiveMoveData *);

	// BrnAggressiveDrivingMessage.cpp:100
	void Release();

	// BrnAggressiveDrivingMessage.cpp:118
	void Destruct();

	// BrnAggressiveDrivingMessage.cpp:177
	virtual int32_t GetPackedMessageSize();

	// BrnAggressiveDrivingMessage.h:156
	int32_t GetNumberOfAggressiveMoves();

	// BrnAggressiveDrivingMessage.h:164
	const AggressiveMoveData * GetAggressiveMove(int32_t);

	// BrnAggressiveDrivingMessage.cpp:212
	bool Retrieve(int32_t *, AggressiveMoveData *);

	// BrnAggressiveDrivingMessage.h:173
	virtual const char * GetName() const;

protected:
	// BrnAggressiveDrivingMessage.cpp:131
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnAggressiveDrivingMessage.h:108
void BrnNetwork::AggressiveDrivingMessage::AggressiveDrivingMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

