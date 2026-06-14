// BrnGameMainFlowController.h:24
namespace BrnGameMainFlowController {
}

// BrnGameMainFlowController.h:24
namespace BrnGameMainFlowController {
	// BrnGameMainFlowController.h:28
	enum EMainGameFlowState {
		E_MGS_INVALID = -1,
		E_MGS_INITIAL_LOADING_SCREEN = 0,
		E_MGS_CHECK_DISK_SPACE = 1,
		E_MGS_MARKETING_SCREENS = 2,
		E_MGS_START_SCREEN = 3,
		E_MGS_MEMORY_CARD = 4,
		E_MGS_COMPLETE_LOADING = 5,
		E_MGS_IN_GAME = 6,
		E_MGS_COUNT = 7,
	}

	// BrnGameMainFlowController.h:43
	enum EMainGameFlowEvent {
		E_MGE_GAMEOVER = 0,
		E_MGE_SKIP = 1,
		E_MGE_STATEEND = 2,
		E_MGE_COUNT = 3,
	}

	struct GameMainFlowController;

}

// BrnGameMainFlowController.h:65
struct BrnGameMainFlowController::GameMainFlowController {
private:
	// BrnGameMainFlowController.h:107
	MainGameFlowStateInitialLoadingScreen mInitialLoadingScreen;

	// BrnGameMainFlowController.h:108
	MainGameFlowStateMarketingScreens mMarketingScreens;

	// BrnGameMainFlowController.h:109
	MainGameFlowStateCheckDiskSpace mCheckDiskSpace;

	// BrnGameMainFlowController.h:110
	MainGameFlowStateStartScreen mStartScreen;

	// BrnGameMainFlowController.h:111
	MainGameFlowStateMemoryCard mMemoryCard;

	// BrnGameMainFlowController.h:112
	MainGameFlowStateCompleteLoading mCompleteLoading;

	// BrnGameMainFlowController.h:113
	MainGameFlowStateInGame mInGame;

	// BrnGameMainFlowController.h:115
	Array<MainGameFlowState*,7u> maStates;

	// BrnGameMainFlowController.h:116
	BrnGameMainFlowController::EMainGameFlowState meCurrentState;

	// BrnGameMainFlowController.h:118
	bool mbSaveLoadState;

	// BrnGameMainFlowController.h:119
	bool mbVideoState;

	// BrnGameMainFlowController.h:120
	bool mbInGameState;

public:
	// BrnGameMainFlowController.h:68
	void Construct();

	// BrnGameMainFlowController.h:71
	void Update();

	// BrnGameMainFlowController.h:74
	const bool IsSaveLoadState() const;

	// BrnGameMainFlowController.h:77
	const bool IsVideoState() const;

	// BrnGameMainFlowController.h:80
	const bool IsInGameState() const;

	// BrnGameMainFlowController.h:84
	void SetVideoState(bool);

	// BrnGameMainFlowController.h:88
	void SetSaveLoadState(bool);

	// BrnGameMainFlowController.h:92
	void SetInGameState(bool);

	// BrnGameMainFlowController.h:96
	void SendEvent(BrnGameMainFlowController::EMainGameFlowEvent);

	// BrnGameMainFlowController.h:100
	void SetState(BrnGameMainFlowController::EMainGameFlowState);

	// BrnGameMainFlowController.h:103
	void Render();

}

