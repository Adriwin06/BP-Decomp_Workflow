// BrnOnlinePlay.h:119
extern int32_t[] maiEventToObserve;

// BrnOnlinePlay.h:120
extern const int32_t miNumEventsObserved;

// BrnOnlinePlay.h:121
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlinePlay.h:122
extern const int32_t miNumResourcesToLoad;

// BrnOnlinePlay.h:124
extern char[] KAC_MAIN_MENU_COMPONENT;

// BrnOnlinePlay.h:125
extern char[] KAC_PLAYER_STATS_COMPONENT;

// BrnOnlinePlay.h:128
extern char[] KAC_NEW_NEWS_ANIMATION_COMPONENT;

// BrnOnlinePlay.h:132
extern const int32_t KI_NUM_MAIN_MENU_COMPONENTS;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePlay {
		// BrnOnlinePlay.h:87
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_MAIN = 2,
			E_SUBSTATE_LEFT_SCREEN = 3,
			E_SUBSTATE_WAIT_SIGN_IN_FINISH = 4,
			E_SUBSTATE_WAIT_COLLISION_WORLD_UNLOAD = 5,
			E_SUBSTATE_WAIT_FRIENDS_LIST_FINISH = 6,
			E_SUBSTATE_WAIT_COLLISION_WORLD_LOAD = 7,
			E_SUBSTATE_COUNT = 8,
		}

		// BrnOnlinePlay.h:106
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTIONS_FREEBURN = 0,
			E_MAIN_MENU_OPTIONS_IMAGE_GALLERY = 1,
			E_MAIN_MENU_OPTIONS_VIEW_CHALLENGES = 2,
			E_MAIN_MENU_OPTIONS_UNRANKED = 3,
			E_MAIN_MENU_OPTIONS_RANKED = 4,
			E_MAIN_MENU_OPTIONS_SCOREBOARDS = 5,
			E_MAIN_MENU_OPTIONS_NEWS = 6,
			E_MAIN_MENU_OPTIONS_COUNT = 7,
		}

	}

}

// BrnOnlinePlay.h:50
struct BrnGui::OnlinePlay : public CgsGui::State {
private:
	// BrnOnlinePlay.h:84
	extern const int32_t KI_GUI_SYS_UTIL_CALLBACK_SLOT = 3;

	// BrnOnlinePlay.cpp:36
	extern const int32_t[8] maiEventToObserve;

	// BrnOnlinePlay.cpp:48
	extern const int32_t miNumEventsObserved = 8;

	// BrnOnlinePlay.cpp:50
	extern const sResourceTuple[3] maResourceTuplesToLoad;

	// BrnOnlinePlay.cpp:57
	extern const int32_t miNumResourcesToLoad = 3;

	// BrnOnlinePlay.cpp:60
	extern const char[9] KAC_MAIN_MENU_COMPONENT;

	// BrnOnlinePlay.cpp:61
	extern const char[12] KAC_PLAYER_STATS_COMPONENT;

	// BrnOnlinePlay.cpp:63
	extern const char *[7] KAPC_MAIN_MENU_TEXT;

	// BrnOnlinePlay.cpp:74
	extern const char *[7] KAPC_MAIN_MENU_STATE_ACTIONS_TEXT;

	// BrnOnlinePlay.cpp:59
	extern const char[18] KAC_NEW_NEWS_ANIMATION_COMPONENT;

	// BrnOnlinePlay.cpp:85
	extern const char *[2] KAPC_ANIMATION_STATES;

	// BrnOnlinePlay.cpp:91
	extern const int32_t KI_NUM_MAIN_MENU_COMPONENTS = 7;

	// BrnOnlinePlay.h:135
	BrnGui::AnimationComponent mNewNewsAnimation;

	// BrnOnlinePlay.h:136
	BrnGui::MenuComponent mMainMenuComponent;

	// BrnOnlinePlay.h:137
	BrnGui::GuiNetworkPlayerStats mPlayerStatsDisplay;

	// BrnOnlinePlay.h:139
	GuiEventNetworkPlayerStats mPlayerStatsEvent;

	// BrnOnlinePlay.h:141
	BrnGui::OnlinePlay::ESubState meSubState;

	// BrnOnlinePlay.h:143
	bool mbInviteInProgress;

	// BrnOnlinePlay.h:144
	bool mbPerformingInvite;

	// BrnOnlinePlay.h:146
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlinePlay.h:151
	sys_memory_container_t mMemoryContainer;

	// BrnOnlinePlay.h:152
	CellNetCtlNetStartDialogResult mNetStartResult;

	// BrnOnlinePlay.h:153
	bool mbFriendsListDone;

	// BrnOnlinePlay.h:154
	bool mbCleanUpThisFrame;

public:
	// BrnOnlinePlay.cpp:110
	virtual void OnEnter();

	// BrnOnlinePlay.cpp:310
	virtual void OnLeave();

	// BrnOnlinePlay.cpp:169
	virtual void Update();

	// BrnOnlinePlay.h:76
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlinePlay.cpp:485
	void HandleControllerInput(const CgsModule::Event *);

	// BrnOnlinePlay.cpp:517
	void HandleControllerInputMainMenu(const GuiEventControllerInputPressed *);

	// BrnOnlinePlay.cpp:739
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlinePlay.cpp:358
	void CheckForCompletedLoads();

	// BrnOnlinePlay.cpp:702
	void HandlePlayerStatsEvent(const CgsModule::Event *);

	// BrnOnlinePlay.h:184
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlinePlay.cpp:761
	void HandleOverlayCompleteEvent(const GuiOverlayCompleteEvent *);

	// BrnOnlinePlay.cpp:788
	void HandleCollisionWorldEvent(const GuiEventRequestCollisionWorldEvent *);

	// BrnOnlinePlay.cpp:628
	void ShowMainMenuScreen();

	// BrnOnlinePlay.cpp:650
	void ShowMainMenuOptions();

	// BrnOnlinePlay.cpp:839
	bool CheckPrivileges(BrnGui::OnlinePlay::EMainMenuOptions);

	// BrnOnlinePlay.cpp:885
	void SelectOnlineMenuOption(BrnGui::OnlinePlay::EMainMenuOptions);

	// BrnOnlinePlay.cpp:927
	void ShowFriendsMenu();

	// BrnOnlinePlay.cpp:968
	// Declaration
	void ShowFriendsSysUtil() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlinePlay.cpp:996
		using namespace CgsDev::Message;

	}

	// BrnOnlinePlay.cpp:1018
	void CleanUpFriendsSysUtil();

	// BrnOnlinePlay.cpp:1047
	int FriendsSysUtilCallback(int32_t, void *);

	// BrnOnlinePlay.cpp:1069
	void ShowSigninUI();

	// BrnOnlinePlay.cpp:1105
	void HideSigninUI();

	// BrnOnlinePlay.cpp:1125
	void CleanUpSigninUI();

	// BrnOnlinePlay.cpp:1168
	// Declaration
	void SysUtilCallback(uint64_t, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlinePlay.cpp:1195
		using namespace CgsDev::Message;

	}

}

// BrnOnlinePlay.h:84
extern const int32_t KI_GUI_SYS_UTIL_CALLBACK_SLOT = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePlay {
	public:
		OnlinePlay();

	private:
		// BrnOnlinePlay.h:119
		extern int32_t[] maiEventToObserve;

		// BrnOnlinePlay.h:120
		extern const int32_t miNumEventsObserved;

		// BrnOnlinePlay.h:121
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlinePlay.h:122
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlinePlay.h:124
		extern char[] KAC_MAIN_MENU_COMPONENT;

		// BrnOnlinePlay.h:125
		extern char[] KAC_PLAYER_STATS_COMPONENT;

		// BrnOnlinePlay.h:128
		extern char[] KAC_NEW_NEWS_ANIMATION_COMPONENT;

		// BrnOnlinePlay.h:132
		extern const int32_t KI_NUM_MAIN_MENU_COMPONENTS;

	}

}

// BrnOnlinePlay.h:50
void BrnGui::OnlinePlay::OnlinePlay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

