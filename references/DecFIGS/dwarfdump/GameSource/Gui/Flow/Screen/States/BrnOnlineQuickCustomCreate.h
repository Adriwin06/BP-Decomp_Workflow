// BrnOnlineQuickCustomCreate.h:104
extern int32_t[] maiEventToObserve;

// BrnOnlineQuickCustomCreate.h:105
extern const int32_t miNumEventsObserved;

// BrnOnlineQuickCustomCreate.h:107
extern sResourceTuple[] maResourcesToLoad;

// BrnOnlineQuickCustomCreate.h:108
extern const uint32_t muNumResourcesToLoad;

// BrnOnlineQuickCustomCreate.h:114
extern char[] KAC_NEW_NEWS_ANIMATION_COMPONENT;

// BrnOnlineQuickCustomCreate.h:115
extern char[] KAC_MAIN_MENU_COMPONENT;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineQuickCustomCreate {
		// BrnOnlineQuickCustomCreate.h:68
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTIONS_QUICK_MATCH = 0,
			E_MAIN_MENU_OPTIONS_CUSTOM_MATCH = 1,
			E_MAIN_MENU_OPTIONS_CREATE_MATCH = 2,
			E_MAIN_MENU_OPTIONS_COUNT = 3,
		}

		// BrnOnlineQuickCustomCreate.h:80
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADSCREEN = 1,
			E_INTERNALSTATE_LOADCOMPONENTS = 2,
			E_INTERNALSTATE_RUNNING = 3,
			E_INTERNALSTATE_LEFT = 4,
			E_SUBSTATE_WAIT_SIGN_IN_FINISH = 5,
			E_SUBSTATE_WAIT_COLLISION_WORLD_UNLOAD = 6,
			E_SUBSTATE_WAIT_FRIENDS_LIST_FINISH = 7,
			E_SUBSTATE_WAIT_COLLISION_WORLD_LOAD = 8,
			E_INTERNALSTATE_COUNT = 9,
		}

	}

}

// BrnOnlineQuickCustomCreate.h:42
struct BrnGui::OnlineQuickCustomCreate : public CgsGui::State {
private:
	// BrnOnlineQuickCustomCreate.h:99
	extern const int32_t KI_GUI_SYS_UTIL_CALLBACK_SLOT = 3;

	// BrnOnlineQuickCustomCreate.h:101
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineQuickCustomCreate.h:102
	BrnGui::OnlineQuickCustomCreate::InternalState meInternalState;

	// BrnOnlineQuickCustomCreate.cpp:26
	extern const int32_t[4] maiEventToObserve;

	// BrnOnlineQuickCustomCreate.cpp:35
	extern const int32_t miNumEventsObserved = 4;

	// BrnOnlineQuickCustomCreate.cpp:37
	extern const sResourceTuple[2] maResourcesToLoad;

	// BrnOnlineQuickCustomCreate.cpp:43
	extern const uint32_t muNumResourcesToLoad = 2;

	// BrnOnlineQuickCustomCreate.h:111
	BrnGui::AnimationComponent mNewNewsAnimation;

	// BrnOnlineQuickCustomCreate.h:112
	BrnGui::MenuComponent mMainMenuComponent;

	// BrnOnlineQuickCustomCreate.cpp:45
	extern const char[18] KAC_NEW_NEWS_ANIMATION_COMPONENT;

	// BrnOnlineQuickCustomCreate.cpp:46
	extern const char[9] KAC_MAIN_MENU_COMPONENT;

	// BrnOnlineQuickCustomCreate.cpp:48
	extern const char *[3] KAPC_MAIN_MENU_TEXT;

	// BrnOnlineQuickCustomCreate.cpp:55
	extern const char *[3] KAPC_MAIN_MENU_STATE_ACTIONS_TEXT;

	// BrnOnlineQuickCustomCreate.h:122
	sys_memory_container_t mMemoryContainer;

	// BrnOnlineQuickCustomCreate.h:123
	CellNetCtlNetStartDialogResult mNetStartResult;

	// BrnOnlineQuickCustomCreate.h:124
	bool mbFriendsListDone;

	// BrnOnlineQuickCustomCreate.h:125
	bool mbCleanUpThisFrame;

public:
	// BrnOnlineQuickCustomCreate.cpp:79
	virtual void OnEnter();

	// BrnOnlineQuickCustomCreate.cpp:257
	virtual void OnLeave();

	// BrnOnlineQuickCustomCreate.cpp:121
	virtual void Update();

	// BrnOnlineQuickCustomCreate.h:60
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineQuickCustomCreate.cpp:302
	void UpdateGetCache();

	// BrnOnlineQuickCustomCreate.cpp:359
	bool UpdateLoadResources();

	// BrnOnlineQuickCustomCreate.cpp:390
	bool UpdateLoadComponents();

	// BrnOnlineQuickCustomCreate.cpp:425
	void UpdateRunning();

	// BrnOnlineQuickCustomCreate.cpp:527
	void UpdatePermanent();

	// BrnOnlineQuickCustomCreate.cpp:466
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOnlineQuickCustomCreate.cpp:595
	void HandleCollisionWorldEvent(const GuiEventRequestCollisionWorldEvent *);

	// BrnOnlineQuickCustomCreate.cpp:578
	virtual void ProcessSelectedMenuOption(BrnGui::OnlineQuickCustomCreate::EMainMenuOptions);

	// BrnOnlineQuickCustomCreate.cpp:646
	void ShowFriendsMenu();

	// BrnOnlineQuickCustomCreate.cpp:687
	// Declaration
	void ShowFriendsSysUtil() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineQuickCustomCreate.cpp:714
		using namespace CgsDev::Message;

	}

	// BrnOnlineQuickCustomCreate.cpp:736
	void CleanUpFriendsSysUtil();

	// BrnOnlineQuickCustomCreate.cpp:765
	int FriendsSysUtilCallback(int32_t, void *);

	// BrnOnlineQuickCustomCreate.cpp:787
	void ShowSigninUI();

	// BrnOnlineQuickCustomCreate.cpp:818
	void HideSigninUI();

	// BrnOnlineQuickCustomCreate.cpp:838
	void CleanUpSigninUI();

	// BrnOnlineQuickCustomCreate.cpp:876
	// Declaration
	void SysUtilCallback(uint64_t, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineQuickCustomCreate.cpp:903
		using namespace CgsDev::Message;

	}

}

// BrnOnlineQuickCustomCreate.h:99
extern const int32_t KI_GUI_SYS_UTIL_CALLBACK_SLOT = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineQuickCustomCreate {
	public:
		OnlineQuickCustomCreate();

	private:
		// BrnOnlineQuickCustomCreate.h:104
		extern int32_t[] maiEventToObserve;

		// BrnOnlineQuickCustomCreate.h:105
		extern const int32_t miNumEventsObserved;

		// BrnOnlineQuickCustomCreate.h:107
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOnlineQuickCustomCreate.h:108
		extern const uint32_t muNumResourcesToLoad;

		// BrnOnlineQuickCustomCreate.h:114
		extern char[] KAC_NEW_NEWS_ANIMATION_COMPONENT;

		// BrnOnlineQuickCustomCreate.h:115
		extern char[] KAC_MAIN_MENU_COMPONENT;

	}

}

// BrnOnlineQuickCustomCreate.h:42
void BrnGui::OnlineQuickCustomCreate::OnlineQuickCustomCreate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

