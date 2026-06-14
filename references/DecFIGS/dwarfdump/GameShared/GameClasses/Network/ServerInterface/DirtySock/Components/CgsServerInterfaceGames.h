// CgsServerInterfaceGames.h:351
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceGames.h:352
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGames {
		// CgsServerInterfaceGames.h:100
		enum EGameServerConnectionType {
			E_GAME_SERVER_CONNECTION_TYPE_NONE = 0,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_BOTH = 1,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_VOIP_ONLY = 2,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_GAME_ONLY = 3,
			E_GAME_SERVER_CONNECTION_TYPE_NO_FALLBACK = 4,
			E_GAME_SERVER_CONNECTION_TYPE_COUNT = 5,
		}

	private:
		// CgsServerInterfaceGames.h:351
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceGames.h:352
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGames {
		// CgsServerInterfaceGames.h:100
		enum EGameServerConnectionType {
			E_GAME_SERVER_CONNECTION_TYPE_NONE = 0,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_BOTH = 1,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_VOIP_ONLY = 2,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_GAME_ONLY = 3,
			E_GAME_SERVER_CONNECTION_TYPE_NO_FALLBACK = 4,
			E_GAME_SERVER_CONNECTION_TYPE_COUNT = 5,
		}

	public:
		virtual ~ServerInterfaceGames();

	private:
		// CgsServerInterfaceGames.h:351
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceGames.h:352
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceGames.h:78
void CgsNetwork::ServerInterfaceGames::~ServerInterfaceGames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGames {
	public:
		virtual ~ServerInterfaceGames();

		ServerInterfaceGames();

	private:
		// CgsServerInterfaceGames.h:351
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceGames.h:352
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceGames.h:78
void CgsNetwork::ServerInterfaceGames::ServerInterfaceGames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGames {
		// CgsServerInterfaceGames.h:81
		enum EAction {
			E_ACTION_CREATE_GAME = 0,
			E_ACTION_JOIN_GAME = 1,
			E_ACTION_QUICK_JOIN_GAME = 2,
			E_ACTION_SEARCH_FOR_GAMES = 3,
			E_ACTION_CANCEL_SEARCH_FOR_GAMES = 4,
			E_ACTION_LEAVE_GAME = 5,
			E_ACTION_KICK_PLAYER = 6,
			E_ACTION_UPDATE_GAME_PARAMS = 7,
			E_ACTION_UPDATE_PLAYER_PARAMS = 8,
			E_ACTION_LOCK_GAME = 9,
			E_ACTION_UNLOCK_GAME = 10,
			E_ACTION_START_GAME = 11,
			E_ACTION_SEND_RESULTS = 12,
			E_ACTION_COUNT = 13,
		}

		// CgsServerInterfaceGames.h:100
		enum EGameServerConnectionType {
			E_GAME_SERVER_CONNECTION_TYPE_NONE = 0,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_BOTH = 1,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_VOIP_ONLY = 2,
			E_GAME_SERVER_CONNECTION_TYPE_FALLBACK_GAME_ONLY = 3,
			E_GAME_SERVER_CONNECTION_TYPE_NO_FALLBACK = 4,
			E_GAME_SERVER_CONNECTION_TYPE_COUNT = 5,
		}

	}

}

// CgsServerInterfaceGames.h:78
struct CgsNetwork::ServerInterfaceGames : public CgsNetwork::ServerInterfaceComponent {
	// lobbyapi.h:213
	typedef LobbyApiPlayT LobbyApiPlayT;

protected:
	// CgsServerInterfaceGames.h:326
	ServerInterfaceGames::LobbyApiPlayT mLastGameRecord;

	// CgsServerInterfaceGames.h:328
	ServerInterfaceUsersets::DispListRef * mpFoundGames;

	// CgsServerInterfaceGames.h:330
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceGames.h:331
	CgsNetwork::ServerInterfaceGames::EAction meCurrentAction;

private:
	// CgsServerInterfaceGames.cpp:59
	extern const int[13] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceGames.cpp:201
	extern const DSErrorToServerInterfaceErrorTable[13] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceGames.cpp:220
	extern const char *[13] KAPC_ACTION_NAMES;

	// CgsServerInterfaceGames.h:355
	int32_t miEventCallback;

	// CgsServerInterfaceGames.h:356
	int32_t miRespCallback;

	// CgsServerInterfaceGames.h:357
	int32_t miRequestCallbackID;

	// Unknown accessibility
	// CgsServerInterfaceGames.h:67
	typedef int32_t (void *, CgsNetwork::ServerInterfaceGameParamsBase *, CgsNetwork::ServerInterfaceGameParamsBase *) SearchResultsSortCallback;

	// CgsServerInterfaceGames.h:359
	ServerInterfaceGames::SearchResultsSortCallback * mpSearchSortCallback;

	// CgsServerInterfaceGames.h:360
	void * mpSearchSortUserData;

	// CgsServerInterfaceGames.h:361
	CgsNetwork::ServerInterfaceGameParamsBase * mpGameParamsA;

	// CgsServerInterfaceGames.h:362
	CgsNetwork::ServerInterfaceGameParamsBase * mpGameParamsB;

public:
	// CgsServerInterfaceGames.cpp:251
	virtual void Construct();

	// CgsServerInterfaceGames.cpp:282
	virtual void Destruct();

	// CgsServerInterfaceGames.cpp:311
	virtual bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceGames.cpp:357
	virtual bool Release();

	// CgsServerInterfaceGames.cpp:395
	virtual void Update();

	// CgsServerInterfaceGames.cpp:417
	virtual void Suspend();

	// CgsServerInterfaceGames.cpp:438
	virtual void Resume();

	// CgsServerInterfaceGames.cpp:501
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceGames.cpp:1036
	// Declaration
	virtual void CreateGame(const CgsNetwork::ServerInterfaceGameParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1041
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1111
	// Declaration
	virtual void JoinGame(const CgsNetwork::ServerInterfaceGameParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1116
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1138
	// Declaration
	virtual void QuickJoinGame(const CgsNetwork::ServerInterfaceQuickJoinParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1143
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1169
	// Declaration
	virtual void SearchForGames(const CgsNetwork::ServerInterfaceGameSearchParamsBase *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1174
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1233
	// Declaration
	void CancelSearchForGames() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1238
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1272
	void RegisterGameSearchSortCallback(ServerInterfaceGames::SearchResultsSortCallback *, void *, CgsNetwork::ServerInterfaceGameParamsBase *, CgsNetwork::ServerInterfaceGameParamsBase *);

	// CgsServerInterfaceGames.cpp:1335
	int32_t GetNumberOfFoundGames() const;

	// CgsServerInterfaceGames.cpp:1354
	bool GetFoundGame(int32_t, CgsNetwork::ServerInterfaceGameParamsBase *) const;

	// CgsServerInterfaceGames.cpp:1391
	// Declaration
	void LeaveGame(bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1398
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1601
	// Declaration
	void KickPlayer(const char *, CgsNetwork::EKickReason, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:1606
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1643
	void KickPlayer(int32_t, CgsNetwork::EKickReason, bool);

	// CgsServerInterfaceGames.cpp:1662
	void KickPlayerByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::EKickReason, bool);

	// CgsServerInterfaceGames.cpp:1686
	void GetGameParameters(CgsNetwork::ServerInterfaceGameParamsBase *) const;

	// CgsServerInterfaceGames.cpp:1703
	virtual void UpdateGameParameters(const CgsNetwork::ServerInterfaceGameParamsBase *);

	// CgsServerInterfaceGames.cpp:1742
	void GetPlayerParametersByIndex(int32_t, ServerInterfacePlayerParamsBase *) const;

	// CgsServerInterfaceGames.cpp:1762
	void GetPlayerParametersByPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, ServerInterfacePlayerParamsBase *) const;

	// CgsServerInterfaceGames.cpp:1792
	void GetPlayerParametersByPlayerName(const char *, ServerInterfacePlayerParamsBase *) const;

	// CgsServerInterfaceGames.cpp:1822
	void UpdatePlayerParameters(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, const CgsNetwork::ServerInterfacePlayerParamsBase *);

	// CgsServerInterfaceGames.cpp:1919
	void UnlockGame();

	// CgsServerInterfaceGames.cpp:1947
	void LockGame();

	// CgsServerInterfaceGames.cpp:1975
	void StartGame();

	// CgsServerInterfaceGames.cpp:2003
	virtual void EndGame(const CgsNetwork::ServerInterfaceEndGameDataBase *);

	// CgsServerInterfaceGames.cpp:2018
	// Declaration
	void SendGameResult(const CgsNetwork::ServerInterfaceGameResultsBase *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:2020
		using namespace CgsDev::Message;

		// CgsServerInterfaceGames.cpp:2067
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1446
	bool IsLocalPlayerInGame() const;

	// CgsServerInterfaceGames.cpp:1507
	bool IsLocalPlayerHost() const;

	// CgsServerInterfaceGames.cpp:1527
	bool IsLocalPlayerLeavingGame() const;

	// CgsServerInterfaceGames.cpp:1544
	int32_t GetGameID() const;

	// CgsServerInterfaceGames.cpp:1566
	const char * GetGameName() const;

	// CgsServerInterfaceGames.cpp:1478
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetHostPlayerID() const;

	// CgsServerInterfaceGames.cpp:1724
	int32_t GetNumberPlayersInGame() const;

	// CgsServerInterfaceGames.cpp:1899
	bool IsGameLocked() const;

	// CgsServerInterfaceGames.cpp:1877
	bool IsGameStarted() const;

	// CgsServerInterfaceGames.cpp:2184
	bool IsPlayerInGame(const char *) const;

	// CgsServerInterfaceGames.cpp:2212
	bool IsPlayerInGame(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsServerInterfaceGames.cpp:2238
	bool IsGameServerGame() const;

	// CgsServerInterfaceGames.cpp:2265
	void SetGameServerConnectionType(CgsNetwork::ServerInterfaceGames::EGameServerConnectionType);

	// CgsServerInterfaceGames.cpp:2324
	bool IsGameServerHosted();

protected:
	// CgsServerInterfaceGames.cpp:912
	virtual void ReceivedGameEvent(LobbyApiMsgT *);

	// CgsServerInterfaceGames.cpp:952
	void StartAction(CgsNetwork::ServerInterfaceGames::EAction, LobbyApiCallbackT *);

	// CgsServerInterfaceGames.cpp:982
	void StartGameManagerAction(CgsNetwork::ServerInterfaceGames::EAction, LobbyApiCallbackT *);

	// CgsServerInterfaceGames.cpp:1011
	void EndAction(int);

private:
	// CgsServerInterfaceGames.cpp:585
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfaceGames::EAction);

	// CgsServerInterfaceGames.cpp:461
	// Declaration
	void AllocDisplayLists() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:465
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:480
	// Declaration
	void FreeDisplayLists() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGames.cpp:484
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:1584
	void GetLocalPlayerUserData(LobbyApiUserT *) const;

	// CgsServerInterfaceGames.cpp:779
	void ProcessGameManagerPlayRecord();

	// CgsServerInterfaceGames.cpp:2089
	bool CheckForPlayerChange(const ServerInterfaceGames::LobbyApiPlayT *, const ServerInterfaceGames::LobbyApiPlayT *, CgsNetwork::EServerInterfaceEvent, CgsNetwork::EServerInterfaceEvent);

	// CgsServerInterfaceGames.cpp:2142
	bool CheckForPlayerParameterChange(const ServerInterfaceGames::LobbyApiPlayT *, const ServerInterfaceGames::LobbyApiPlayT *);

	// CgsServerInterfaceGames.cpp:1300
	int32_t FoundGamesSort(void *, int32_t, void *, void *);

	// CgsServerInterfaceGames.cpp:608
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceGames.cpp:629
	void OnlyFinishOnErrorCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceGames.cpp:1206
	void SearchForGamesCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceGames.cpp:686
	// Declaration
	void ConnApiCallback(ConnApiCbInfoT *, CgsNetwork::ServerInterfaceComponent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// connapi.h:90
		typedef ConnApiCbInfoT ConnApiCbInfoT;

		// CgsServerInterfaceGames.cpp:690
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:845
	void EventStatusCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceGames.cpp:880
	void RespCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceGames.cpp:708
	// Declaration
	void GameManagerCallback(GameManagerRefT *, GameManagerCBDataT *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbygamemanager.h:49
		typedef CgsNetwork::DirtySock::GameManagerRefT GameManagerRefT;

		// lobbygamemanager.h:67
		typedef GameManagerCBDataT GameManagerCBDataT;

		// CgsServerInterfaceGames.cpp:746
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGames.cpp:655
	void LeaveGameCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceGames();

}

