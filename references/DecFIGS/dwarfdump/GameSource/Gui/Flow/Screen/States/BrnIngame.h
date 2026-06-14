// BrnIngame.h:79
extern int32_t[] maiEventToObserve;

// BrnIngame.h:80
extern const int32_t miNumEventsObserved;

// BrnIngame.h:42
struct BrnGui::InGame : public CgsGui::State {
private:
	// BrnInGame.cpp:66
	extern const char *[13] KAPC_MAIN_MENU_STATE_ACTIONS_TEXT;

	// BrnIngame.h:75
	extern const int32_t KI_NUMBER_OF_DISCONNECTS_TO_IGNORE = 10;

	// BrnIngame.h:77
	BrnGui::GuiCache * mpGuiCache;

	// BrnIngame.h:78
	Profile * mpProfile;

	// BrnInGame.cpp:31
	extern const int32_t[30] maiEventToObserve;

	// BrnInGame.cpp:83
	extern const int32_t miNumEventsObserved = 30;

	// BrnIngame.h:82
	BrnGui::GuiEventPerformOnlineMainMenuOption::EMainMenuOptions meSelectedOnlineMainMenuOption;

	// BrnIngame.h:84
	bool mbIsInEventStartLocation;

	// BrnIngame.h:85
	bool mbIsGuideVisible;

	// BrnIngame.h:86
	float32_t mfTimeUntilTrophyCarUnlockSeq;

	// BrnIngame.h:87
	float32_t mfTimeUntilCompletionSeq;

	// BrnIngame.h:88
	float32_t mfTimeUntilNextEATrack;

	// BrnIngame.h:89
	float32_t mfTimeToDisableNextEATrack;

	// BrnIngame.h:90
	int32_t miNumberOfIgnoredDisconnects;

public:
	// BrnInGame.cpp:107
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnInGame.cpp:128
	virtual void OnEnter();

	// BrnInGame.cpp:734
	virtual void OnLeave();

	// BrnInGame.cpp:220
	virtual void Update();

	// BrnIngame.h:66
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnInGame.cpp:754
	void HandleControllerInput(const CgsModule::Event *);

	// BrnInGame.cpp:1036
	void PauseGame(bool, bool);

	// BrnInGame.cpp:1087
	bool PauseAllowed();

	// BrnInGame.cpp:1128
	void OpenMainMap();

	// BrnInGame.cpp:1156
	void OpenEventMap();

	// BrnInGame.cpp:1178
	void GotoPostEvent();

	// BrnInGame.cpp:1196
	void GotoCarLogBook();

	// BrnInGame.cpp:1214
	void OpenDriverDetails();

	// BrnInGame.cpp:1232
	void ShutDownHudComponents();

	// BrnInGame.cpp:849
	void HandleSplashScreenRequests(const GuiEventNetworkSplashEvent *);

	// BrnIngame.h:140
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnInGame.cpp:909
	void HandlePerformOnlineMainMenuOption(const GuiEventPerformOnlineMainMenuOption *);

	// BrnInGame.cpp:962
	void HandleInstantFreeburnSearchFail();

	// BrnInGame.cpp:980
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

	// BrnInGame.cpp:1249
	bool CheckPrivileges(BrnGui::GuiEventPerformOnlineMainMenuOption::EMainMenuOptions);

	// BrnInGame.cpp:1306
	void SelectOnlineMenuOption(BrnGui::GuiEventPerformOnlineMainMenuOption::EMainMenuOptions);

}

// BrnIngame.h:75
extern const int32_t KI_NUMBER_OF_DISCONNECTS_TO_IGNORE = 10;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct InGame {
	public:
		InGame();

	private:
		// BrnIngame.h:79
		extern int32_t[] maiEventToObserve;

		// BrnIngame.h:80
		extern const int32_t miNumEventsObserved;

	}

}

// BrnIngame.h:42
void BrnGui::InGame::InGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

