// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnServerInterfaceCustomCommands.h:30
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct RaceCarRaceDistanceInterface;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct BaseGameActionQueue<13312>;

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ServerInterfaceCustomCommands {
		// BrnServerInterfaceCustomCommands.h:71
		enum EAction {
			E_ACTION_START = 0,
			E_ACTION_SET_ROAD_RULES_SCORES = 0,
			E_ACTION_GET_ROAD_RULES_SCORES = 1,
			E_ACTION_GET_LOCAL_ROAD_RULES_SCORES = 2,
			E_ACTION_GET_FRIENDS = 3,
			E_ACTION_UPLOAD_FRIENDS = 4,
			E_ACTION_UPLOAD_FREEBURN_LOBBY_STATS = 5,
			E_ACTION_UPLOAD_OFFLINE_PROGRESSION = 6,
			E_ACTION_UPLOAD_RIVAL_DATA = 7,
			E_ACTION_GET_ELO = 8,
			E_ACTION_SET_ELO = 9,
			E_ACTION_COUNT = 10,
		}

	}

}

// BrnServerInterfaceCustomCommands.h:68
struct BrnNetwork::ServerInterfaceCustomCommands : public CgsNetwork::ServerInterfaceCustomCommands {
private:
	// BrnServerInterfaceCustomCommands.h:204
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// BrnServerInterfaceCustomCommands.h:207
	int32_t * mpiRaceElo;

	// BrnServerInterfaceCustomCommands.h:208
	int32_t * mpiRoadRageElo;

	// BrnServerInterfaceCustomCommands.h:209
	int32_t * mpiBurningHomeRunElo;

	// BrnServerInterfaceCustomCommands.h:212
	BrnNetwork::ServerInterfaceCustomCommands::EAction meCurrentAction;

	// Unknown accessibility
	// BrnServerInterfaceCustomCommands.h:56
	typedef void (*)(void *, void *, bool) CustomCommandCallback;

	// BrnServerInterfaceCustomCommands.h:213
	ServerInterfaceCustomCommands::CustomCommandCallback mCallback;

	// BrnServerInterfaceCustomCommands.h:214
	void * mpCallbackData;

public:
	// BrnServerInterfaceCustomCommands.cpp:152
	virtual void Construct();

	// BrnServerInterfaceCustomCommands.cpp:179
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// BrnServerInterfaceCustomCommands.cpp:211
	bool Release();

	// BrnServerInterfaceCustomCommands.cpp:242
	void Destruct();

	// BrnServerInterfaceCustomCommands.cpp:1117
	void Update();

	// BrnServerInterfaceCustomCommands.cpp:567
	void GetEloOfLocalPlayer(int32_t *, int32_t *, int32_t *, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:599
	void SetEloOfLocalPlayer(int32_t, int32_t, int32_t, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:626
	void SetRoadRulesForLocalPlayer(RoadRulesUploadData *, const char *, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:720
	void GetRoadRulesHighScores(uint32_t, int32_t, int32_t, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:774
	void GetLocalRoadRulesHighScores(int32_t, int32_t, const char *, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:814
	void GetFriendsListFromServer(ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:849
	void UpdateServerFriendsRecord(PlayerName *, PlayerName *, int32_t, int32_t, ServerInterfaceCustomCommands::CustomCommandCallback, void *);

	// BrnServerInterfaceCustomCommands.cpp:959
	void OverWriteServerFriendsRecord(PlayerName *, int32_t);

	// BrnServerInterfaceCustomCommands.cpp:1132
	// Declaration
	void UploadFreeBurnLobbyStats(const OnlineGameResults *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnServerInterfaceCustomCommands.cpp:1187
		using namespace CgsDev::Message;

	}

	// BrnServerInterfaceCustomCommands.cpp:1200
	void UploadOfflineProgress(const NetworkInOfflineProgression::OfflineProgressionT *);

	// BrnServerInterfaceCustomCommands.cpp:1228
	// Declaration
	void UploadLiveRevengeData(const RivalDataT *, int32_t *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkSharedServerTypes.h:102
		typedef RivalDataT RivalDataT;

	}

private:
	// BrnServerInterfaceCustomCommands.cpp:537
	void SendCustomCommand(BrnNetwork::ServerInterfaceCustomCommands::EAction, const char *);

	// BrnServerInterfaceCustomCommands.cpp:1035
	void EndAction(int32_t, int32_t);

	// BrnServerInterfaceCustomCommands.cpp:1054
	int ConvertError(int, int);

	// BrnServerInterfaceCustomCommands.cpp:288
	// Declaration
	void HandleIncomingMessage(LobbyApiMsgT *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbyapi.h:161
		typedef LobbyApiMsgT LobbyApiMsgT;

		// BrnServerInterfaceCustomCommands.cpp:333
		using namespace CgsDev::Message;

	}

	// BrnServerInterfaceCustomCommands.cpp:271
	// Declaration
	void _CustomCommandSentCallback(LobbyApiRefT *, LobbyApiMsgT *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbyapi.h:70
		typedef CgsNetwork::DirtySock::LobbyApiRefT LobbyApiRefT;

	}

public:
	virtual void ~ServerInterfaceCustomCommands();

}

// BrnServerInterfaceCustomCommands.h:68
void BrnNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterfaceCustomCommands.h:68
void BrnNetwork::ServerInterfaceCustomCommands::ServerInterfaceCustomCommands() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

