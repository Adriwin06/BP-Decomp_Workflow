// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct MatchMakingManager {
		// BrnNetworkMatchMakingManager.h:115
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_TO_SEARCH = 2,
			E_SUBSTATE_WAIT_IN_GAME = 3,
			E_SUBSTATE_COUNT = 4,
		}

		// BrnNetworkMatchMakingManager.h:125
		enum EProcess {
			E_PROCESS_CREATE_GAME = 0,
			E_PROCESS_LEAVE_AND_CREATE_GAME = 1,
			E_PROCESS_JOIN_GAME = 2,
			E_PROCESS_LEAVE_GAME = 3,
			E_PROCESS_LEAVE_AND_JOIN_GAME = 4,
			E_PROCESS_QUICK_JOIN_GAME = 5,
			E_PROCESS_LEAVE_AND_QUICK_JOIN_GAME = 6,
			E_PROCESS_SEARCH_FOR_GAMES = 7,
			E_PROCESS_COUNT = 8,
		}

		// BrnNetworkMatchMakingManager.h:139
		enum EAction {
			E_ACTION_LOCK_USERSET = 0,
			E_ACTION_CREATE_GAME = 1,
			E_ACTION_JOIN_GAME = 2,
			E_ACTION_LEAVE_GAME = 3,
			E_ACTION_QUICK_JOIN_GAME = 4,
			E_ACTION_SEARCH_FOR_GAMES = 5,
			E_ACTION_WAIT_SEARCH_FOR_GAMES = 6,
			E_ACTION_UNLOCK_USERSET = 7,
			E_ACTION_CREATE_USERSET = 8,
			E_ACTION_JOIN_USERSET = 9,
			E_ACTION_LEAVE_USERSET = 10,
			E_ACTION_WAIT_IN_GAME = 11,
			E_ACTION_COUNT = 12,
		}

		// BrnNetworkMatchMakingManager.h:158
		struct ProcessActions {
			// BrnNetworkMatchMakingManager.h:160
			extern const int32_t KI_MAX_ACTIONS = 4;

			// BrnNetworkMatchMakingManager.h:162
			BrnNetwork::MatchMakingManager::EAction[4] maeAction;

		}

	}

}

// BrnNetworkMatchMakingManager.h:49
struct BrnNetwork::MatchMakingManager {
private:
	// BrnNetworkMatchMakingManager.h:165
	BrnNetwork::MatchMakingManager::ProcessActions[8] maProcessActions;

	// BrnNetworkMatchMakingManager.h:166
	void (*)()[4] maUpdateFunctions;

	// BrnNetworkMatchMakingManager.h:167
	bool (*)()[12] maActionFunctions;

	// BrnNetworkMatchMakingManager.h:168
	CgsNetwork::EComponents[12] maeComponentToUse;

	// BrnNetworkMatchMakingManager.h:170
	BrnNetwork::MatchMakingManager::ESubState meSubState;

	// BrnNetworkMatchMakingManager.h:172
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkMatchMakingManager.h:174
	void (*)(bool, void *) mCallback;

	// BrnNetworkMatchMakingManager.h:175
	void * mpCallbackUserData;

	// BrnNetworkMatchMakingManager.h:177
	BrnNetwork::GameParams mGameParameters;

	// BrnNetworkMatchMakingManager.h:178
	BrnNetwork::GameSearchParams mGameSearchParameters;

	// BrnNetworkMatchMakingManager.h:179
	BrnNetwork::GameParams mFoundGameA;

	// BrnNetworkMatchMakingManager.h:180
	BrnNetwork::GameParams mFoundGameB;

	// BrnNetworkMatchMakingManager.h:181
	bool mbQuickJoinRanked;

	// BrnNetworkMatchMakingManager.h:182
	bool mbQuickJoinFreeburn;

	// BrnNetworkMatchMakingManager.h:184
	Time mLastSearchTime;

	// BrnNetworkMatchMakingManager.h:186
	BrnNetwork::MatchMakingManager::EProcess meCurrentProcess;

	// BrnNetworkMatchMakingManager.h:187
	uint8_t mun8NextAction;

	// BrnNetworkMatchMakingManager.h:189
	bool mbCreateGameServerGame;

public:
	// BrnNetworkMatchMakingManager.h:56
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkMatchMakingManager.h:59
	bool Prepare();

	// BrnNetworkMatchMakingManager.h:62
	bool Release();

	// BrnNetworkMatchMakingManager.h:65
	void Destruct();

	// BrnNetworkMatchMakingManager.h:68
	void Update();

	// BrnNetworkMatchMakingManager.h:75
	void CreateGame(const BrnNetwork::GameParams *, void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:83
	void JoinGame(const BrnNetwork::GameParams *, bool, void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:89
	void LeaveGame(void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:97
	void QuickJoinGame(bool, bool, void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:104
	void SearchForGames(const BrnNetwork::GameSearchParams *, void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:108
	void Disconnected();

private:
	// BrnNetworkMatchMakingManager.h:192
	void InitialiseUpdateArray();

	// BrnNetworkMatchMakingManager.h:195
	void InitialiseActionArray();

	// BrnNetworkMatchMakingManager.h:202
	void StartProcess(BrnNetwork::MatchMakingManager::EProcess, void (*)(bool, void *), void *);

	// BrnNetworkMatchMakingManager.h:207
	void ProcessComplete(bool);

	// BrnNetworkMatchMakingManager.h:211
	void SetNextAction();

	// BrnNetworkMatchMakingManager.h:218
	int32_t SortGameSearchResultsCallback(void *, CgsNetwork::ServerInterfaceGameParams *, CgsNetwork::ServerInterfaceGameParams *);

	// BrnNetworkMatchMakingManager.h:223
	void UpdateNone();

	// BrnNetworkMatchMakingManager.h:226
	void UpdateWaitIdle();

	// BrnNetworkMatchMakingManager.h:229
	void UpdateWaitToSearch();

	// BrnNetworkMatchMakingManager.h:232
	void UpdateWaitInGame();

	// BrnNetworkMatchMakingManager.h:239
	bool ActionLockUserset();

	// BrnNetworkMatchMakingManager.h:242
	bool ActionCreateGame();

	// BrnNetworkMatchMakingManager.h:245
	bool ActionJoinGame();

	// BrnNetworkMatchMakingManager.h:248
	bool ActionLeaveGame();

	// BrnNetworkMatchMakingManager.h:251
	bool ActionQuickJoinGame();

	// BrnNetworkMatchMakingManager.h:254
	bool ActionSearchForGames();

	// BrnNetworkMatchMakingManager.h:257
	bool ActionWaitSearchForGames();

	// BrnNetworkMatchMakingManager.h:260
	bool ActionUnLockUserset();

	// BrnNetworkMatchMakingManager.h:263
	bool ActionCreateUserset();

	// BrnNetworkMatchMakingManager.h:266
	bool ActionJoinUserset();

	// BrnNetworkMatchMakingManager.h:269
	bool ActionLeaveUserset();

	// BrnNetworkMatchMakingManager.h:272
	bool ActionWaitInGame();

	// BrnNetworkMatchMakingManager.h:277
	bool ServerInterfaceIdle();

}

// BrnNetworkMatchMakingManager.h:113
struct {
	// BrnNetworkMatchMakingManager.h:113
	void (*)() __pfn;

	// BrnNetworkMatchMakingManager.h:113
	int __delta;

}

// BrnNetworkMatchMakingManager.h:112
struct {
	// BrnNetworkMatchMakingManager.h:112
	bool (*)() __pfn;

	// BrnNetworkMatchMakingManager.h:112
	int __delta;

}

// BrnNetworkMatchMakingManager.h:160
extern const int32_t KI_MAX_ACTIONS = 4;

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct MatchMakingManager {
		// BrnNetworkMatchMakingManager.h:115
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_TO_SEARCH = 2,
			E_SUBSTATE_WAIT_IN_GAME = 3,
			E_SUBSTATE_COUNT = 4,
		}

		// BrnNetworkMatchMakingManager.h:125
		enum EProcess {
			E_PROCESS_CREATE_GAME = 0,
			E_PROCESS_LEAVE_AND_CREATE_GAME = 1,
			E_PROCESS_JOIN_GAME = 2,
			E_PROCESS_LEAVE_GAME = 3,
			E_PROCESS_LEAVE_AND_JOIN_GAME = 4,
			E_PROCESS_QUICK_JOIN_GAME = 5,
			E_PROCESS_LEAVE_AND_QUICK_JOIN_GAME = 6,
			E_PROCESS_SEARCH_FOR_GAMES = 7,
			E_PROCESS_COUNT = 8,
		}

		// BrnNetworkMatchMakingManager.h:139
		enum EAction {
			E_ACTION_LOCK_USERSET = 0,
			E_ACTION_CREATE_GAME = 1,
			E_ACTION_JOIN_GAME = 2,
			E_ACTION_LEAVE_GAME = 3,
			E_ACTION_QUICK_JOIN_GAME = 4,
			E_ACTION_SEARCH_FOR_GAMES = 5,
			E_ACTION_WAIT_SEARCH_FOR_GAMES = 6,
			E_ACTION_UNLOCK_USERSET = 7,
			E_ACTION_CREATE_USERSET = 8,
			E_ACTION_JOIN_USERSET = 9,
			E_ACTION_LEAVE_USERSET = 10,
			E_ACTION_WAIT_IN_GAME = 11,
			E_ACTION_COUNT = 12,
		}

		// BrnNetworkMatchMakingManager.h:158
		struct ProcessActions {
			// BrnNetworkMatchMakingManager.h:160
			extern const int32_t KI_MAX_ACTIONS = 4;

			// BrnNetworkMatchMakingManager.h:162
			BrnNetwork::MatchMakingManager::EAction[4] maeAction;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct MatchMakingManager {
		// BrnNetworkMatchMakingManager.h:115
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_TO_SEARCH = 2,
			E_SUBSTATE_WAIT_IN_GAME = 3,
			E_SUBSTATE_COUNT = 4,
		}

		// BrnNetworkMatchMakingManager.h:125
		enum EProcess {
			E_PROCESS_CREATE_GAME = 0,
			E_PROCESS_LEAVE_AND_CREATE_GAME = 1,
			E_PROCESS_JOIN_GAME = 2,
			E_PROCESS_LEAVE_GAME = 3,
			E_PROCESS_LEAVE_AND_JOIN_GAME = 4,
			E_PROCESS_QUICK_JOIN_GAME = 5,
			E_PROCESS_LEAVE_AND_QUICK_JOIN_GAME = 6,
			E_PROCESS_SEARCH_FOR_GAMES = 7,
			E_PROCESS_COUNT = 8,
		}

		// BrnNetworkMatchMakingManager.h:139
		enum EAction {
			E_ACTION_LOCK_USERSET = 0,
			E_ACTION_CREATE_GAME = 1,
			E_ACTION_JOIN_GAME = 2,
			E_ACTION_LEAVE_GAME = 3,
			E_ACTION_QUICK_JOIN_GAME = 4,
			E_ACTION_SEARCH_FOR_GAMES = 5,
			E_ACTION_WAIT_SEARCH_FOR_GAMES = 6,
			E_ACTION_UNLOCK_USERSET = 7,
			E_ACTION_CREATE_USERSET = 8,
			E_ACTION_JOIN_USERSET = 9,
			E_ACTION_LEAVE_USERSET = 10,
			E_ACTION_WAIT_IN_GAME = 11,
			E_ACTION_COUNT = 12,
		}

		// BrnNetworkMatchMakingManager.h:158
		struct ProcessActions {
			// BrnNetworkMatchMakingManager.h:160
			extern const int32_t KI_MAX_ACTIONS = 4;

			// BrnNetworkMatchMakingManager.h:162
			BrnNetwork::MatchMakingManager::EAction[4] maeAction;

		}

	}

}

