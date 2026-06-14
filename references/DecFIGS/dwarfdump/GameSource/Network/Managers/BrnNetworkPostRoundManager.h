// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct PostRoundManager {
		// BrnNetworkPostRoundManager.h:94
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_CALLBACK = 2,
			E_SUBSTATE_WAIT_GAME_UNSTART = 3,
			E_SUBSTATE_WAIT_RESUME = 4,
			E_SUBSTATE_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:105
		enum EProcess {
			E_PROCESS_END_ROUND = 0,
			E_PROCESS_END_GAME_HOST = 1,
			E_PROCESS_END_GAME_CLIENT = 2,
			E_PROCESS_END_GAME_LEAVE_HOST = 3,
			E_PROCESS_END_GAME_LEAVE_CLIENT = 4,
			E_PROCESS_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:116
		enum EAction {
			E_ACTION_SEND_RESULTS = 0,
			E_ACTION_RESUME = 1,
			E_ACTION_LEAVE_GAME = 2,
			E_ACTION_WAIT_UNSTART_GAME = 3,
			E_ACTION_END_GAME = 4,
			E_ACTION_CHANGE_PLAYER_PARMS = 5,
			E_ACTION_CHANGE_GAME_PARMS = 6,
			E_ACTION_COUNT = 7,
		}

		// BrnNetworkPostRoundManager.h:130
		struct ProcessActions {
			// BrnNetworkPostRoundManager.h:132
			extern const int32_t KI_MAX_ACTIONS = 6;

			// BrnNetworkPostRoundManager.h:134
			BrnNetwork::PostRoundManager::EAction[6] maeAction;

		}

	}

}

// BrnNetworkPostRoundManager.h:47
struct BrnNetwork::PostRoundManager {
private:
	// BrnNetworkPostRoundManager.h:137
	BrnNetwork::PostRoundManager::ProcessActions[5] maProcessActions;

	// BrnNetworkPostRoundManager.h:138
	void (*)()[5] maUpdateFunctions;

	// BrnNetworkPostRoundManager.h:139
	bool (*)()[7] maActionFunctions;

	// BrnNetworkPostRoundManager.h:141
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPostRoundManager.h:143
	void (*)(bool, void *) mCallback;

	// BrnNetworkPostRoundManager.h:144
	void * mpCallbackUserData;

	// BrnNetworkPostRoundManager.h:146
	BrnNetwork::PostRoundManager::ESubState meSubState;

	// BrnNetworkPostRoundManager.h:147
	uint8_t mun8CurrentAction;

	// BrnNetworkPostRoundManager.h:148
	BrnNetwork::PostRoundManager::EProcess meCurrentProcess;

	// BrnNetworkPostRoundManager.h:149
	bool mbDidTheUserQuit;

	// BrnNetworkPostRoundManager.h:151
	BrnNetwork::GameResults mGameResults;

public:
	// BrnNetworkPostRoundManager.h:54
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkPostRoundManager.h:57
	bool Prepare();

	// BrnNetworkPostRoundManager.h:60
	bool Release();

	// BrnNetworkPostRoundManager.h:63
	void Destruct();

	// BrnNetworkPostRoundManager.h:66
	void Update();

	// BrnNetworkPostRoundManager.h:71
	void StartEndOfRound(void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:78
	void StartEndOfGame(bool, bool, void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:82
	void Disconnected();

	// BrnNetworkPostRoundManager.h:87
	void ProcessRaceResults(const OnlineGameResults *);

private:
	// BrnNetworkPostRoundManager.h:154
	void InitialiseUpdateArray();

	// BrnNetworkPostRoundManager.h:157
	void InitialiseActionArray();

	// BrnNetworkPostRoundManager.h:164
	void StartProcess(BrnNetwork::PostRoundManager::EProcess, void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:169
	void ProcessComplete(bool);

	// BrnNetworkPostRoundManager.h:173
	void SetNextAction();

	// BrnNetworkPostRoundManager.h:178
	void UpdateNone();

	// BrnNetworkPostRoundManager.h:181
	void UpdateWaitIdle();

	// BrnNetworkPostRoundManager.h:184
	void UpdateWaitCallback();

	// BrnNetworkPostRoundManager.h:187
	void UpdateWaitResume();

	// BrnNetworkPostRoundManager.h:190
	void UpdateWaitGameUnstart();

	// BrnNetworkPostRoundManager.h:197
	bool ActionResume();

	// BrnNetworkPostRoundManager.h:200
	bool ActionLeaveGame();

	// BrnNetworkPostRoundManager.h:203
	bool ActionSendResults();

	// BrnNetworkPostRoundManager.h:206
	bool ActionUnstartGame();

	// BrnNetworkPostRoundManager.h:209
	bool ActionEndGame();

	// BrnNetworkPostRoundManager.h:212
	bool ActionChangePlayerParams();

	// BrnNetworkPostRoundManager.h:215
	bool ActionChangeGameParams();

	// BrnNetworkPostRoundManager.h:220
	bool ServerInterfaceIdle();

	// BrnNetworkPostRoundManager.h:226
	void ResumeCompleteCallback(bool, void *);

}

// BrnNetworkPostRoundManager.h:92
struct {
	// BrnNetworkPostRoundManager.h:92
	void (*)() __pfn;

	// BrnNetworkPostRoundManager.h:92
	int __delta;

}

// BrnNetworkPostRoundManager.h:91
struct {
	// BrnNetworkPostRoundManager.h:91
	bool (*)() __pfn;

	// BrnNetworkPostRoundManager.h:91
	int __delta;

}

// BrnNetworkPostRoundManager.h:132
extern const int32_t KI_MAX_ACTIONS = 6;

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct PostRoundManager {
		// BrnNetworkPostRoundManager.h:94
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_CALLBACK = 2,
			E_SUBSTATE_WAIT_GAME_UNSTART = 3,
			E_SUBSTATE_WAIT_RESUME = 4,
			E_SUBSTATE_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:105
		enum EProcess {
			E_PROCESS_END_ROUND = 0,
			E_PROCESS_END_GAME_HOST = 1,
			E_PROCESS_END_GAME_CLIENT = 2,
			E_PROCESS_END_GAME_LEAVE_HOST = 3,
			E_PROCESS_END_GAME_LEAVE_CLIENT = 4,
			E_PROCESS_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:116
		enum EAction {
			E_ACTION_SEND_RESULTS = 0,
			E_ACTION_RESUME = 1,
			E_ACTION_LEAVE_GAME = 2,
			E_ACTION_WAIT_UNSTART_GAME = 3,
			E_ACTION_END_GAME = 4,
			E_ACTION_CHANGE_PLAYER_PARMS = 5,
			E_ACTION_CHANGE_GAME_PARMS = 6,
			E_ACTION_COUNT = 7,
		}

		// BrnNetworkPostRoundManager.h:130
		struct ProcessActions {
			// BrnNetworkPostRoundManager.h:132
			extern const int32_t KI_MAX_ACTIONS = 6;

			// BrnNetworkPostRoundManager.h:134
			BrnNetwork::PostRoundManager::EAction[6] maeAction;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct PostRoundManager {
		// BrnNetworkPostRoundManager.h:94
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_WAIT_IDLE = 1,
			E_SUBSTATE_WAIT_CALLBACK = 2,
			E_SUBSTATE_WAIT_GAME_UNSTART = 3,
			E_SUBSTATE_WAIT_RESUME = 4,
			E_SUBSTATE_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:105
		enum EProcess {
			E_PROCESS_END_ROUND = 0,
			E_PROCESS_END_GAME_HOST = 1,
			E_PROCESS_END_GAME_CLIENT = 2,
			E_PROCESS_END_GAME_LEAVE_HOST = 3,
			E_PROCESS_END_GAME_LEAVE_CLIENT = 4,
			E_PROCESS_COUNT = 5,
		}

		// BrnNetworkPostRoundManager.h:116
		enum EAction {
			E_ACTION_SEND_RESULTS = 0,
			E_ACTION_RESUME = 1,
			E_ACTION_LEAVE_GAME = 2,
			E_ACTION_WAIT_UNSTART_GAME = 3,
			E_ACTION_END_GAME = 4,
			E_ACTION_CHANGE_PLAYER_PARMS = 5,
			E_ACTION_CHANGE_GAME_PARMS = 6,
			E_ACTION_COUNT = 7,
		}

		// BrnNetworkPostRoundManager.h:130
		struct ProcessActions {
			// BrnNetworkPostRoundManager.h:132
			extern const int32_t KI_MAX_ACTIONS = 6;

			// BrnNetworkPostRoundManager.h:134
			BrnNetwork::PostRoundManager::EAction[6] maeAction;

		}

	}

}

// BrnNetworkPostRoundManager.h:47
struct BrnNetwork::PostRoundManager {
private:
	// BrnNetworkPostRoundManager.h:137
	BrnNetwork::PostRoundManager::ProcessActions[5] maProcessActions;

	// BrnNetworkPostRoundManager.h:138
	void (*)()[5] maUpdateFunctions;

	// BrnNetworkPostRoundManager.h:139
	bool (*)()[7] maActionFunctions;

	// BrnNetworkPostRoundManager.h:141
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPostRoundManager.h:143
	void (*)(bool, void *) mCallback;

	// BrnNetworkPostRoundManager.h:144
	void * mpCallbackUserData;

	// BrnNetworkPostRoundManager.h:146
	BrnNetwork::PostRoundManager::ESubState meSubState;

	// BrnNetworkPostRoundManager.h:147
	uint8_t mun8CurrentAction;

	// BrnNetworkPostRoundManager.h:148
	BrnNetwork::PostRoundManager::EProcess meCurrentProcess;

	// BrnNetworkPostRoundManager.h:149
	bool mbDidTheUserQuit;

	// BrnNetworkPostRoundManager.h:151
	BrnNetwork::GameResults mGameResults;

public:
	// BrnNetworkPostRoundManager.h:54
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkPostRoundManager.h:57
	bool Prepare();

	// BrnNetworkPostRoundManager.h:60
	bool Release();

	// BrnNetworkPostRoundManager.h:63
	void Destruct();

	// BrnNetworkPostRoundManager.h:66
	void Update();

	// BrnNetworkPostRoundManager.h:71
	void StartEndOfRound(void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:78
	void StartEndOfGame(bool, bool, void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:82
	void Disconnected();

	// BrnNetworkPostRoundManager.h:87
	void ProcessRaceResults(const OnlineGameResults *);

private:
	// BrnNetworkPostRoundManager.h:154
	void InitialiseUpdateArray();

	// BrnNetworkPostRoundManager.h:157
	void InitialiseActionArray();

	// BrnNetworkPostRoundManager.h:164
	void StartProcess(BrnNetwork::PostRoundManager::EProcess, void (*)(bool, void *), void *);

	// BrnNetworkPostRoundManager.h:169
	// Declaration
	void ProcessComplete(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:462
		using namespace CgsDev::Message;

		// BrnNetworkPostRoundManager.cpp:478
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:173
	void SetNextAction();

	// BrnNetworkPostRoundManager.h:178
	void UpdateNone();

	// BrnNetworkPostRoundManager.h:181
	void UpdateWaitIdle();

	// BrnNetworkPostRoundManager.h:184
	void UpdateWaitCallback();

	// BrnNetworkPostRoundManager.h:187
	void UpdateWaitResume();

	// BrnNetworkPostRoundManager.h:190
	void UpdateWaitGameUnstart();

	// BrnNetworkPostRoundManager.h:197
	// Declaration
	bool ActionResume() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:612
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:200
	// Declaration
	bool ActionLeaveGame() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:633
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:203
	// Declaration
	bool ActionSendResults() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:662
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:206
	// Declaration
	bool ActionUnstartGame() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:810
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:209
	// Declaration
	bool ActionEndGame() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:831
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:212
	// Declaration
	bool ActionChangePlayerParams() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:695
		using namespace CgsDev::Message;

		// BrnNetworkPostRoundManager.cpp:716
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:215
	// Declaration
	bool ActionChangeGameParams() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:747
		using namespace CgsDev::Message;

	}

	// BrnNetworkPostRoundManager.h:220
	bool ServerInterfaceIdle();

	// BrnNetworkPostRoundManager.h:226
	// Declaration
	void ResumeCompleteCallback(bool, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPostRoundManager.cpp:896
		using namespace CgsDev::Message;

		// BrnNetworkPostRoundManager.cpp:903
		using namespace CgsDev::Message;

	}

}

