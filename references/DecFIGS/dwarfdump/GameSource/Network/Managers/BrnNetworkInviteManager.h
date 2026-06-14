// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkInviteManager {
		// BrnNetworkInviteManager.h:103
		enum EInviteState {
			E_INVITE_STATE_PREPARING_FOR_INVITE = 0,
			E_INVITE_STATE_LOGGING_IN_TO_SERVER = 1,
			E_INVITE_STATE_GETTING_GAME_ID = 2,
			E_INVITE_STATE_WAITING_FOR_GAME_ID = 3,
			E_INVITE_STATE_VERIFYING_GAME_ID = 4,
			E_INVITE_STATE_START_JOIN_GAME_SESSION = 5,
			E_INVITE_STATE_JOINING_GAME_SESSION = 6,
			E_INVITE_STATE_COUNT = 7,
		}

		// BrnNetworkInviteManager.h:116
		enum EGetGameIDState {
			E_GET_ID_STATE_START = 0,
			E_GET_ID_STATE_WAITING_FOR_SERVER_INTERFACE = 0,
			E_GET_ID_STATE_WAITING_FOR_PLAYER_INFO = 1,
			E_GET_ID_STATE_IDLE = 2,
			E_GET_ID_STATE_COUNT = 2,
		}

	}

}

// BrnNetworkInviteManager.h:44
struct BrnNetwork::NetworkInviteManager {
private:
	// BrnNetworkInviteManager.h:127
	InviteOrJoinParams mInviteOrJoinParams;

	// BrnNetworkInviteManager.h:128
	BrnNetwork::PlayerInfoData mPlayerInfoData;

	// BrnNetworkInviteManager.h:129
	PlayerName mPlayerNameToGetGameID;

	// BrnNetworkInviteManager.h:131
	BrnNetwork::NetworkInviteManager::EGetGameIDState meGetGameIDState;

	// BrnNetworkInviteManager.h:132
	BrnNetwork::NetworkInviteManager::EInviteState meInviteState;

	// BrnNetworkInviteManager.h:133
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

public:
	// BrnNetworkInviteManager.h:50
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkInviteManager.h:54
	bool Prepare();

	// BrnNetworkInviteManager.h:58
	bool Release();

	// BrnNetworkInviteManager.h:62
	void Destruct();

	// BrnNetworkInviteManager.h:66
	void Update();

	// BrnNetworkInviteManager.h:70
	void SetPreparingForInvite();

	// BrnNetworkInviteManager.h:75
	void StartInviteOrJoin(InviteOrJoinParams);

	// BrnNetworkInviteManager.h:80
	void LogInComplete(bool);

	// BrnNetworkInviteManager.h:85
	void JoinGameComplete(bool);

	// BrnNetworkInviteManager.h:89
	bool IsInInvite() const;

	// BrnNetworkInviteManager.h:94
	void DownloadPlayersGameIDFromServer(const PlayerName *);

	// BrnNetworkInviteManager.h:99
	bool GetGameID(int32_t *);

private:
	// BrnNetworkInviteManager.h:137
	void ProcessGameStateActions();

	// BrnNetworkInviteManager.h:142
	void CompleteInvite(bool);

	// BrnNetworkInviteManager.h:146
	void UpdateGettingGameID();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkInviteManager {
		// BrnNetworkInviteManager.h:103
		enum EInviteState {
			E_INVITE_STATE_PREPARING_FOR_INVITE = 0,
			E_INVITE_STATE_LOGGING_IN_TO_SERVER = 1,
			E_INVITE_STATE_GETTING_GAME_ID = 2,
			E_INVITE_STATE_WAITING_FOR_GAME_ID = 3,
			E_INVITE_STATE_VERIFYING_GAME_ID = 4,
			E_INVITE_STATE_START_JOIN_GAME_SESSION = 5,
			E_INVITE_STATE_JOINING_GAME_SESSION = 6,
			E_INVITE_STATE_COUNT = 7,
		}

		// BrnNetworkInviteManager.h:116
		enum EGetGameIDState {
			E_GET_ID_STATE_START = 0,
			E_GET_ID_STATE_WAITING_FOR_SERVER_INTERFACE = 0,
			E_GET_ID_STATE_WAITING_FOR_PLAYER_INFO = 1,
			E_GET_ID_STATE_IDLE = 2,
			E_GET_ID_STATE_COUNT = 2,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkInviteManager {
		// BrnNetworkInviteManager.h:103
		enum EInviteState {
			E_INVITE_STATE_PREPARING_FOR_INVITE = 0,
			E_INVITE_STATE_LOGGING_IN_TO_SERVER = 1,
			E_INVITE_STATE_GETTING_GAME_ID = 2,
			E_INVITE_STATE_WAITING_FOR_GAME_ID = 3,
			E_INVITE_STATE_VERIFYING_GAME_ID = 4,
			E_INVITE_STATE_START_JOIN_GAME_SESSION = 5,
			E_INVITE_STATE_JOINING_GAME_SESSION = 6,
			E_INVITE_STATE_COUNT = 7,
		}

		// BrnNetworkInviteManager.h:116
		enum EGetGameIDState {
			E_GET_ID_STATE_START = 0,
			E_GET_ID_STATE_WAITING_FOR_SERVER_INTERFACE = 0,
			E_GET_ID_STATE_WAITING_FOR_PLAYER_INFO = 1,
			E_GET_ID_STATE_IDLE = 2,
			E_GET_ID_STATE_COUNT = 2,
		}

	}

}

