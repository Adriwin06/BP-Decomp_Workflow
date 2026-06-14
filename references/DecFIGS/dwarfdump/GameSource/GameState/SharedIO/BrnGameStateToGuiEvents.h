// BrnGameStateToGuiEvents.h:41
struct BrnGameState::GameStateToGuiNewDirtyTrick {
	// BrnGameStateToGuiEvents.h:44
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:45
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:46
	BrnNetwork::EPaybackType meTrickType;

}

// BrnGameStateToGuiEvents.h:59
struct BrnGameState::GameStateToGuiTriggeredDirtyTrick {
	// BrnGameStateToGuiEvents.h:62
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:63
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:64
	BrnNetwork::EPaybackType meTrickType;

}

// BrnGameStateToGuiEvents.h:77
struct BrnGameState::GameStateToGuiEndingDirtyTrick {
	// BrnGameStateToGuiEvents.h:80
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:81
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGameStateToGuiEvents.h:82
	BrnNetwork::EPaybackType meTrickType;

	// BrnGameStateToGuiEvents.h:83
	bool mbSurvived;

}

// BrnGameStateToGuiEvents.h:96
struct BrnGameState::GameStateToGuiOvertakeEvent {
	// BrnGameStateToGuiEvents.h:99
	uint8_t mu8NewPosition;

	// BrnGameStateToGuiEvents.h:100
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameStateToGuiEvents.h:112
struct BrnGameState::GameStateToGuiFinishedRaceEvent {
	// BrnGameStateToGuiEvents.h:114
	BrnGui::EFinishType meFinishType;

	// BrnGameStateToGuiEvents.h:115
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameStateToGuiEvents.h:127
struct BrnGameState::GameStateToGuiTookLeadEvent {
	// BrnGameStateToGuiEvents.h:129
	CgsID mOfflineRivalCarID;

	// BrnGameStateToGuiEvents.h:130
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameStateToGuiEvents.h:142
struct BrnGameState::GameStateToGuiTookLastEvent {
	// BrnGameStateToGuiEvents.h:144
	CgsID mOfflineRivalCarID;

	// BrnGameStateToGuiEvents.h:145
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameStateToGuiEvents.h:157
struct BrnGameState::GameStateToGuiOnTailEvent {
	// BrnGameStateToGuiEvents.h:159
	CgsID mOfflineRivalCarID;

	// BrnGameStateToGuiEvents.h:160
	EActiveRaceCarIndex meOnTailActiveRaceCarIndex;

}

