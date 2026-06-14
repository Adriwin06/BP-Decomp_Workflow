// BrnJuiceNetworkScriptInterface.h:32
namespace BrnJuice {
}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	struct RoadRulesUploadData;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct BrnNetworkModule;

	struct StatsRequestEvent;

	struct LoginManagerPS3;

	struct ConnectionManager;

	struct GameSearchParams;

	struct GameResults;

	struct BuddyManagerPS3;

	struct StandingsData;

	struct PlayerFinishedRoundMessage;

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	struct HullSyncMessage;

	struct CrashingTrafficMessage;

	struct RestartTrafficMessage;

	struct TrafficHashMessage;

	struct NetworkPlayerStatsResults;

	struct StatsDebugComponent;

	struct StatsUpdateMessage;

	struct BrnServerInterface;

	struct ScoreboardDebugComponent;

	struct AggressiveMoveData;

	struct AggressiveDrivingMessage;

	struct DirtyTrickMessage;

	struct ImageManagerDebugComponent;

	struct SelectedRoutesMessage;

	struct MarkedManMessage;

	struct RoadRulesMessage;

	struct RoadRulesPersonalBestMessage;

	struct RoadRulesManagerDebugComponent;

	struct FburnSuccessUpdateMessage;

	struct FburnChallengeSuccessMessage;

	struct PlayerInfoData;

	struct NetworkGamerCardManagerPS3;

	struct CameraRequestResponseMessage;

	struct CameraStatusMessage;

	struct CameraRequestMessage;

	struct NetworkNotificationManagerPS3;

	struct BrnNetworkPlayer;

	struct PlayerMenuData;

}

// BrnJuiceNetworkScriptInterface.h:32
namespace BrnJuice {
	struct BrnJuice;

	struct BrnJuiceScripting;

	struct JuiceNetworkScriptInterface;

	struct JuiceGuiScriptInterface;

	struct JuiceGameStateScriptInterface;

	struct JuiceWorldScriptInterface;

}

// BrnJuiceNetworkScriptInterface.h:48
struct BrnJuice::JuiceNetworkScriptInterface : public CgsDev::JuiceScriptInterface {
private:
	// BrnJuiceNetworkScriptInterface.h:94
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnJuiceNetworkScriptInterface.h:95
	bool mbGameModeAborted;

	// BrnJuiceNetworkScriptInterface.h:96
	bool mbGameModeEnded;

public:
	// BrnJuiceNetworkScriptInterface.cpp:53
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnJuiceNetworkScriptInterface.h:114
	void GameModeEnded();

	// BrnJuiceNetworkScriptInterface.h:128
	void GameModeAborted();

	// BrnJuiceNetworkScriptInterface.cpp:76
	const int ConnectedPlayersNumber(Juice::Scripting::VarArgs &);

	// BrnJuiceNetworkScriptInterface.cpp:97
	const int QuickJoinGame(Juice::Scripting::VarArgs &);

	// BrnJuiceNetworkScriptInterface.cpp:138
	const int IsLoggedInToServers(Juice::Scripting::VarArgs &);

	// BrnJuiceNetworkScriptInterface.cpp:169
	const int IsNetworkGameOver(Juice::Scripting::VarArgs &);

	// BrnJuiceNetworkScriptInterface.cpp:197
	virtual const char * GetNamespaceName() const;

	// BrnJuiceNetworkScriptInterface.cpp:211
	virtual void RegisterRPCs();

	virtual void ~JuiceNetworkScriptInterface();

}

// BrnJuiceNetworkScriptInterface.h:48
void BrnJuice::JuiceNetworkScriptInterface::~JuiceNetworkScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJuiceNetworkScriptInterface.h:48
void BrnJuice::JuiceNetworkScriptInterface::JuiceNetworkScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

