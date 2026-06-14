// BrnGameMainFlowStates.h:94
extern LoadingScriptedState::ELoadingStateStage meLoadingStateStage;

// BrnGameMainFlowStates.h:95
extern bool mbLoadingPaused;

// BrnGameMainFlowStates.h:65
struct LoadingScriptedState : public MainGameFlowState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

protected:
	// BrnLoadingScriptedState.cpp:32
	extern LoadingScriptedState::ELoadingStateStage meLoadingStateStage;

	// BrnLoadingScriptedState.cpp:33
	extern bool mbLoadingPaused;

public:
	// BrnLoadingScriptedState.cpp:52
	virtual void OnEnter();

	// BrnLoadingScriptedState.cpp:483
	virtual void OnLeave();

	// BrnLoadingScriptedState.cpp:69
	virtual void Update();

	// BrnLoadingScriptedState.cpp:462
	virtual void Render();

protected:
	// BrnLoadingScriptedState.cpp:501
	bool LoadControllerModule(InputBuffer *, const OutputBuffer *, rw::core::GeneralResourceAllocator **);

	// BrnLoadingScriptedState.cpp:554
	bool LoadGUIModule(InputBuffer *, InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:614
	bool LoadWorldModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:651
	bool LoadWorldCollision(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:694
	bool LoadDirectorModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:733
	bool LoadSoundModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:783
	bool LoadSoundModuleAgain(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:825
	bool LoadEffectsModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:856
	bool LoadNetworkModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:920
	bool LoadReplayModule(InputBuffer *, const OutputBuffer *);

	// BrnLoadingScriptedState.cpp:954
	void RenderGUI(InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, InputBuffer *, bool);

	// BrnLoadingScriptedState.cpp:936
	virtual void FinishLoading();

	// BrnGameMainFlowStates.h:181
	void SuspendLoadingWorld();

	// BrnGameMainFlowStates.h:195
	void ResumeLoadingWorld();

}

// BrnGameMainFlowStates.h:211
struct MainGameFlowStateInitialLoadingScreen : public LoadingScriptedState {
	// BrnGameMainFlowStates.h:223
	enum ELoadingScreenStage {
		E_LOADINGSTAGE_START = 0,
		E_LOADINGSTAGE_CONTROLLERMODULE = 1,
		E_LOADINGSTAGE_GUIMODULE = 2,
		E_LOADINGSTAGE_DIRECTORMODULE = 3,
		E_LOADINGSTAGE_SOUND_MODULE = 4,
		E_LOADINGSTAGE_NETWORK = 5,
		E_LOADINGSTAGE_JUICE = 6,
		E_LOADINGSTAGE_MASSIVE = 7,
		E_LOADINGSTAGE_REPLAYS = 8,
		E_LOADINGSTAGE_DONE = 9,
	}

protected:
	// BrnGameMainFlowStates.h:239
	MainGameFlowStateInitialLoadingScreen::ELoadingScreenStage meLoadingScreenStage;

	// BrnGameMainFlowStates.h:240
	rw::core::GeneralResourceAllocator * mpInputModuleAllocator;

	// BrnGameMainFlowStates.h:241
	bool mbGuiPreloadDone;

public:
	// BrnGameMainFlowInitialLoadingScreenState.cpp:47
	virtual void OnEnter();

	// BrnGameMainFlowInitialLoadingScreenState.cpp:374
	virtual void OnLeave();

	// BrnGameMainFlowInitialLoadingScreenState.cpp:74
	virtual void Update();

protected:
	// BrnGameMainFlowInitialLoadingScreenState.cpp:391
	virtual void FinishLoading();

}

// BrnGameMainFlowStates.h:311
struct MainGameFlowStateStartScreen : public LoadingScriptedState {
	// BrnGameMainFlowStates.h:326
	enum EStartScreenLoadingStage {
		E_STARTSCREEN_START = 0,
		E_STARTSCREEN_WORLD = 1,
		E_STARTSCREEN_SOUND_BINDPROPS = 2,
		E_STARTSCREEN_EFFECTS = 3,
		E_STARTSCREEN_DONE = 4,
		E_STARTSCREEN_NUM = 5,
	}

private:
	// BrnGameMainFlowStates.h:337
	MainGameFlowStateStartScreen::EStartScreenLoadingStage meLoadingStage;

public:
	// BrnGameMainFlowStartScreen.cpp:39
	virtual void OnEnter();

	// BrnGameMainFlowStartScreen.cpp:91
	virtual void OnLeave();

	// BrnGameMainFlowStartScreen.cpp:61
	virtual void Update();

	// BrnGameMainFlowStartScreen.cpp:110
	virtual void Render();

}

// BrnGameMainFlowStates.h:40
struct MainGameFlowState {
	int (*)(...) * _vptr.MainGameFlowState;

public:
	// BrnGameMainFlowStates.h:43
	virtual void OnEnter();

	// BrnGameMainFlowStates.h:46
	virtual void OnLeave();

	// BrnGameMainFlowStates.h:49
	virtual void Update();

	// BrnGameMainFlowStates.h:52
	virtual void Render();

}

// BrnGameMainFlowStates.h:258
struct MainGameFlowStateMarketingScreens : public LoadingScriptedState {
public:
	// BrnGameMainFlowMarketingScreens.cpp:39
	virtual void OnEnter();

	// BrnGameMainFlowMarketingScreens.cpp:97
	virtual void OnLeave();

	// BrnGameMainFlowMarketingScreens.cpp:60
	virtual void Update();

	// BrnGameMainFlowMarketingScreens.cpp:81
	virtual void Render();

}

// BrnGameMainFlowStates.h:287
struct MainGameFlowStateCheckDiskSpace : public LoadingScriptedState {
private:
	// BrnGameMainFlowCheckDiskSpace.cpp:40
	virtual void OnEnter();

	// BrnGameMainFlowCheckDiskSpace.cpp:95
	virtual void OnLeave();

	// BrnGameMainFlowCheckDiskSpace.cpp:59
	virtual void Update();

	// BrnGameMainFlowCheckDiskSpace.cpp:79
	virtual void Render();

}

// BrnGameMainFlowStates.h:381
struct MainGameFlowStateMemoryCard : public LoadingScriptedState {
public:
	// BrnGameMainFlowMemoryCard.cpp:40
	virtual void OnEnter();

	// BrnGameMainFlowMemoryCard.cpp:116
	virtual void OnLeave();

	// BrnGameMainFlowMemoryCard.cpp:66
	virtual void Update();

	// BrnGameMainFlowMemoryCard.cpp:100
	virtual void Render();

}

// BrnGameMainFlowStates.h:351
struct MainGameFlowStateCompleteLoading : public LoadingScriptedState {
private:
	// BrnGameMainFlowStates.h:367
	bool mbIsCollisionWorldPrepared;

public:
	// BrnGameMainFlowCompleteLoading.cpp:39
	virtual void OnEnter();

	// BrnGameMainFlowCompleteLoading.cpp:100
	virtual void OnLeave();

	// BrnGameMainFlowCompleteLoading.cpp:62
	virtual void Update();

	// BrnGameMainFlowCompleteLoading.cpp:120
	virtual void Render();

}

// BrnGameMainFlowStates.h:407
struct MainGameFlowStateInGame : public MainGameFlowState {
private:
	// BrnGameMainFlowInGameState.cpp:40
	virtual void OnEnter();

	// BrnGameMainFlowInGameState.cpp:94
	virtual void OnLeave();

	// BrnGameMainFlowInGameState.cpp:57
	virtual void Update();

	// BrnGameMainFlowInGameState.cpp:78
	virtual void Render();

}

// BrnGameMainFlowStates.h:40
struct MainGameFlowState {
	int (*)(...) * _vptr.MainGameFlowState;

public:
	MainGameFlowState(const MainGameFlowState &);

	MainGameFlowState();

	// BrnGameMainFlowStates.h:43
	virtual void OnEnter();

	// BrnGameMainFlowStates.h:46
	virtual void OnLeave();

	// BrnGameMainFlowStates.h:49
	virtual void Update();

	// BrnGameMainFlowStates.h:52
	virtual void Render();

}

// BrnGameMainFlowStates.h:211
void MainGameFlowStateInitialLoadingScreen::MainGameFlowStateInitialLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:65
void LoadingScriptedState::LoadingScriptedState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:40
void MainGameFlowState::MainGameFlowState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:258
void MainGameFlowStateMarketingScreens::MainGameFlowStateMarketingScreens() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:287
void MainGameFlowStateCheckDiskSpace::MainGameFlowStateCheckDiskSpace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:311
void MainGameFlowStateStartScreen::MainGameFlowStateStartScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:381
void MainGameFlowStateMemoryCard::MainGameFlowStateMemoryCard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:351
void MainGameFlowStateCompleteLoading::MainGameFlowStateCompleteLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameMainFlowStates.h:407
void MainGameFlowStateInGame::MainGameFlowStateInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

