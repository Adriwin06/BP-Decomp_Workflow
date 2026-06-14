// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateInviteManager.h:33
	using GameStateModuleIO;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateInviteManager.h:33
	using GameStateModuleIO;

	// Declaration
	struct GameStateInviteManager {
		// BrnGameStateInviteManager.h:97
		enum EInviteState {
			E_INVITE_STATE_START_INVITE = 0,
			E_INVITE_STATE_PREPARE_FOR_INVITE = 1,
			E_INVITE_STATE_START_PERFORM_INVITE = 2,
			E_INVITE_STATE_PERFORM_INVITE = 3,
			E_INVITE_STATE_COUNT = 4,
		}

		// BrnGameStateInviteManager.h:107
		enum EPrepareInviteSubState {
			E_PREPARE_INVITE_SUBSTATE_UNBIND_EXISTING_CONTROLLER = 0,
			E_PREPARE_INVITE_SUBSTATE_WAIT_UNBIND_EXISTING_CONTROLLER_RESULT = 1,
			E_PREPARE_INVITE_SUBSTATE_BIND_NEW_CONTROLLER = 2,
			E_PREPARE_INVITE_SUBSTATE_WAIT_BIND_NEW_CONTROLLER_RESULT = 3,
			E_PREPARE_INVITE_SUBSTATE_DONE = 4,
			E_PREPARE_INVITE_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnGameStateInviteManager.h:48
struct BrnGameState::GameStateInviteManager {
private:
	// BrnGameStateInviteManager.h:118
	GameEventQueue mGameEventQueue;

	// BrnGameStateInviteManager.h:119
	PostWorldInputBuffer::BindRequestQueue mOutputBindRequestQueue;

	// BrnGameStateInviteManager.h:120
	PostWorldInputBuffer::UnBindRequestQueue mOutputUnBindRequestQueue;

	// BrnGameStateInviteManager.h:121
	OutputBuffer::BindResultQueue mInputBindResultQueue;

	// BrnGameStateInviteManager.h:122
	OutputBuffer::UnBindResultQueue mInputUnBindResultQueue;

	// BrnGameStateInviteManager.h:123
	BitArray<2u> mModulePreparedBitArray;

	// BrnGameStateInviteManager.h:124
	InviteOrJoinParams mInviteOrJoinParams;

	// BrnGameStateInviteManager.h:125
	BrnGameState::GameStateInviteManager::EInviteState meInviteState;

	// BrnGameStateInviteManager.h:126
	BrnGameState::GameStateInviteManager::EPrepareInviteSubState mePrepareInviteSubstate;

public:
	// BrnGameStateInviteManager.h:53
	void Construct();

	// BrnGameStateInviteManager.h:57
	bool Prepare();

	// BrnGameStateInviteManager.h:61
	bool Release();

	// BrnGameStateInviteManager.h:65
	void Destruct();

	// BrnGameStateInviteManager.h:71
	void Update(BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::GameActionQueue *);

	// BrnGameStateInviteManager.h:75
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnGameStateInviteManager.h:80
	void AppendFromPreWorldInputData(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnGameStateInviteManager.h:85
	void RequestInvite(InviteOrJoinParams);

	// BrnGameStateInviteManager.h:89
	void StartPrepareForInvite();

	// BrnGameStateInviteManager.h:93
	bool IsInviteInProgress();

private:
	// BrnGameStateInviteManager.h:130
	void CheckPreparedForInvite();

	// BrnGameStateInviteManager.h:135
	void ProcessGameStateActions(InputBuffer::GameActionQueue *);

	// BrnGameStateInviteManager.h:140
	void SetModulePreparedForInvite(const CgsModule::Event *);

	// BrnGameStateInviteManager.h:144
	void UpdatePrepareForInvite();

	// BrnGameStateInviteManager.h:148
	void UnbindExistingController();

	// BrnGameStateInviteManager.h:152
	void ProcessUnbindResults();

	// BrnGameStateInviteManager.h:156
	void BindNewController();

	// BrnGameStateInviteManager.h:160
	void ProcessBindResults();

	// BrnGameStateInviteManager.h:164
	void InviteFailed();

	// BrnGameStateInviteManager.h:169
	void WriteDataToOuputBuffer(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateInviteManager.h:175
	void RenderDebugText(const char *, Vector2);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateInviteManager {
		// BrnGameStateInviteManager.h:97
		enum EInviteState {
			E_INVITE_STATE_START_INVITE = 0,
			E_INVITE_STATE_PREPARE_FOR_INVITE = 1,
			E_INVITE_STATE_START_PERFORM_INVITE = 2,
			E_INVITE_STATE_PERFORM_INVITE = 3,
			E_INVITE_STATE_COUNT = 4,
		}

		// BrnGameStateInviteManager.h:107
		enum EPrepareInviteSubState {
			E_PREPARE_INVITE_SUBSTATE_UNBIND_EXISTING_CONTROLLER = 0,
			E_PREPARE_INVITE_SUBSTATE_WAIT_UNBIND_EXISTING_CONTROLLER_RESULT = 1,
			E_PREPARE_INVITE_SUBSTATE_BIND_NEW_CONTROLLER = 2,
			E_PREPARE_INVITE_SUBSTATE_WAIT_BIND_NEW_CONTROLLER_RESULT = 3,
			E_PREPARE_INVITE_SUBSTATE_DONE = 4,
			E_PREPARE_INVITE_SUBSTATE_COUNT = 5,
		}

	}

}

