// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateToGuiIOInterfaces.h:36
		const int32_t KI_MAX_GAME_STATE_TO_GUI_QUEUE_LENGTH = 4;

	}

}

// BrnGameStateToGuiIOInterfaces.h:60
struct BrnGameState::GameStateModuleIO::GameStateToGuiInterface {
private:
	// BrnGameStateToGuiIOInterfaces.h:142
	int32_t miPlayerRaceCarIndex;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:42
	typedef EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4> NewDirtyTrickQueue;

	// BrnGameStateToGuiIOInterfaces.h:143
	GameStateToGuiInterface::NewDirtyTrickQueue mNewDirtyTrickQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:43
	typedef EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4> DirtyTrickTriggeredQueue;

	// BrnGameStateToGuiIOInterfaces.h:144
	GameStateToGuiInterface::DirtyTrickTriggeredQueue mDirtyTrickTriggeredQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:44
	typedef EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4> DirtyTrickEndingQueue;

	// BrnGameStateToGuiIOInterfaces.h:145
	GameStateToGuiInterface::DirtyTrickEndingQueue mDirtyTrickEndingQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:45
	typedef EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4> OvertakeEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:146
	GameStateToGuiInterface::OvertakeEventQueue mOvertakeEventQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:46
	typedef EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4> FinishedRaceEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:147
	GameStateToGuiInterface::FinishedRaceEventQueue mFinishedRaceEventQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:47
	typedef EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1> TookLeadEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:148
	GameStateToGuiInterface::TookLeadEventQueue mTookLeadEventQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:48
	typedef EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1> TookLastEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:149
	GameStateToGuiInterface::TookLastEventQueue mTookLastEventQueue;

	// Unknown accessibility
	// BrnGameStateToGuiIOInterfaces.h:49
	typedef EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7> OnTailEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:150
	GameStateToGuiInterface::OnTailEventQueue mOnTailEventQueue;

	// BrnGameStateToGuiIOInterfaces.h:151
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

public:
	// BrnGameStateToGuiIOInterfaces.h:65
	void Construct();

	// BrnGameStateToGuiIOInterfaces.h:69
	void Clear();

	// BrnGameStateToGuiIOInterfaces.h:76
	void AddNewDirtyTrick(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType);

	// BrnGameStateToGuiIOInterfaces.h:83
	void AddDirtyTrickTriggered(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType);

	// BrnGameStateToGuiIOInterfaces.h:91
	void AddDirtyTrickEnding(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType, bool);

	// BrnGameStateToGuiIOInterfaces.h:97
	void AddOvertakeEvent(uint8_t, EActiveRaceCarIndex);

	// BrnGameStateToGuiIOInterfaces.h:103
	void AddFinishedRaceEvent(BrnGui::EFinishType, EActiveRaceCarIndex);

	// BrnGameStateToGuiIOInterfaces.h:109
	void AddTookLeadEvent(CgsID, EActiveRaceCarIndex);

	// BrnGameStateToGuiIOInterfaces.h:115
	void AddTookLastEvent(CgsID, EActiveRaceCarIndex);

	// BrnGameStateToGuiIOInterfaces.h:121
	void AddOnTailEvent(CgsID, EActiveRaceCarIndex);

	// BrnGameStateToGuiIOInterfaces.h:126
	void AppendRaceCarCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *);

	// BrnGameStateToGuiIOInterfaces.h:128
	const GameStateToGuiInterface::NewDirtyTrickQueue * GetNewDirtyTrickQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:129
	const GameStateToGuiInterface::DirtyTrickTriggeredQueue * GetDirtyTrickTriggeredQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:130
	const GameStateToGuiInterface::DirtyTrickEndingQueue * GetDirtyTrickEndingQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:131
	const GameStateToGuiInterface::OvertakeEventQueue * GetOvertakeEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:132
	const GameStateToGuiInterface::FinishedRaceEventQueue * GetFinishedRaceEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:133
	const GameStateToGuiInterface::TookLeadEventQueue * GetTookLeadEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:134
	const GameStateToGuiInterface::TookLastEventQueue * GetTookLastEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:135
	const GameStateToGuiInterface::OnTailEventQueue * GetOnTailEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:136
	const VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue() const;

	// BrnGameStateToGuiIOInterfaces.h:137
	void SetPlayerRaceCarIndex(int32_t);

	// BrnGameStateToGuiIOInterfaces.h:138
	int32_t GetPlayerRaceCarIndex() const;

}

