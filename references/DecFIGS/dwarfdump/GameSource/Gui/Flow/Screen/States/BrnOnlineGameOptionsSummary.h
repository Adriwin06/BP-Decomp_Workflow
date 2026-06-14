// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineGameOptionsSummary {
		// BrnOnlineGameOptionsSummary.h:50
		struct HelpBarItem {
			// BrnOnlineGameOptionsSummary.h:52
			const char * mpcText;

			// BrnOnlineGameOptionsSummary.h:53
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	}

}

// BrnOnlineGameOptionsSummary.h:113
extern int32_t[] maiEventToObserve;

// BrnOnlineGameOptionsSummary.h:114
extern const int32_t miNumEventsObserved;

// BrnOnlineGameOptionsSummary.h:115
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineGameOptionsSummary.h:116
extern const int32_t miNumResourcesToLoad;

// BrnOnlineGameOptionsSummary.h:118
extern char[] KAC_TITLE_TEXT_COMPONENT;

// BrnOnlineGameOptionsSummary.h:119
extern char[] KAC_MENU_OPTIONS_COMPONENT;

// BrnOnlineGameOptionsSummary.h:120
extern char[] KAC_ROUTE_INFO_NAME;

// BrnOnlineGameOptionsSummary.h:121
extern char[] KAC_UP_ARROW_COMPONENT;

// BrnOnlineGameOptionsSummary.h:122
extern char[] KAC_DOWN_ARROW_COMPONENT;

// BrnOnlineGameOptionsSummary.h:123
extern char[] KAC_HELP_BAR_COMPONENT;

// BrnOnlineGameOptionsSummary.h:128
extern char[] KAC_SUMMARY_TITLE_STRING_ID;

// BrnOnlineGameOptionsSummary.h:129
extern char[] KAC_SAVE_OPTIONS_TITLE_STRING_ID;

// BrnOnlineGameOptionsSummary.h:131
extern BrnGui::OnlineGameOptionsSummary::HelpBarItem[] KA_HELPBAR_ITEMS;

// BrnOnlineGameOptionsSummary.h:132
extern char[] KPC_EMPTY_SLOT_STRING_IDS;

// BrnOnlineGameOptionsSummary.h:133
extern char[] KPC_SLOT_STRING_FORMAT_ID;

// BrnOnlineGameOptionsSummary.h:134
extern char[] KPC_SLOT_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineGameOptionsSummary {
		// BrnOnlineGameOptionsSummary.h:50
		struct HelpBarItem {
			// BrnOnlineGameOptionsSummary.h:52
			const char * mpcText;

			// BrnOnlineGameOptionsSummary.h:53
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineGameOptionsSummary {
		// BrnOnlineGameOptionsSummary.h:50
		struct HelpBarItem {
			// BrnOnlineGameOptionsSummary.h:52
			const char * mpcText;

			// BrnOnlineGameOptionsSummary.h:53
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineGameOptionsSummary.h:88
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_SAVE_OPTIONS = 3,
			E_SUBSTATE_WAIT_IN_GAME = 4,
			E_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnOnlineGameOptionsSummary.h:45
struct BrnGui::OnlineGameOptionsSummary : public CgsGui::State {
private:
	// BrnOnlineGameOptionsSummary.h:109
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 7;

	// BrnOnlineGameOptionsSummary.h:110
	extern const int32_t KI_NUM_MAIN_MENU_OPTIONS = 2;

	// BrnOnlineGameOptionsSummary.h:111
	extern const int32_t KI_MAX_HELP_BAR_ITEMS = 2;

	// BrnOnlineGameOptionsSummary.cpp:30
	extern const int32_t[9] maiEventToObserve;

	// BrnOnlineGameOptionsSummary.cpp:43
	extern const int32_t miNumEventsObserved = 9;

	// BrnOnlineGameOptionsSummary.cpp:45
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnOnlineGameOptionsSummary.cpp:51
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnOnlineGameOptionsSummary.cpp:57
	extern const char[11] KAC_TITLE_TEXT_COMPONENT;

	// BrnOnlineGameOptionsSummary.cpp:53
	extern const char[9] KAC_MENU_OPTIONS_COMPONENT;

	// BrnOnlineGameOptionsSummary.cpp:54
	extern const char[10] KAC_ROUTE_INFO_NAME;

	// BrnOnlineGameOptionsSummary.cpp:55
	extern const char[13] KAC_UP_ARROW_COMPONENT;

	// BrnOnlineGameOptionsSummary.cpp:56
	extern const char[15] KAC_DOWN_ARROW_COMPONENT;

	// BrnOnlineGameOptionsSummary.cpp:58
	extern const char[7] KAC_HELP_BAR_COMPONENT;

	// BrnOnlineGameOptionsSummary.cpp:73
	extern const char *[3] KPC_ARROW_ANIMATION_STATES;

	// BrnOnlineGameOptionsSummary.cpp:83
	extern const char[34] KAC_SUMMARY_TITLE_STRING_ID;

	// BrnOnlineGameOptionsSummary.cpp:84
	extern const char[32] KAC_SAVE_OPTIONS_TITLE_STRING_ID;

	// BrnOnlineGameOptionsSummary.cpp:67
	extern const char *[2] KPC_MAIN_MENU_OPTION_STRING_IDS;

	// BrnOnlineGameOptionsSummary.cpp:60
	extern const BrnGui::OnlineGameOptionsSummary::HelpBarItem[3] KA_HELPBAR_ITEMS;

	// BrnOnlineGameOptionsSummary.cpp:80
	extern const char[30] KPC_EMPTY_SLOT_STRING_IDS;

	// BrnOnlineGameOptionsSummary.cpp:81
	extern const char[24] KPC_SLOT_STRING_FORMAT_ID;

	// BrnOnlineGameOptionsSummary.cpp:82
	extern const char[28] KPC_SLOT_STRING_ID;

	// BrnOnlineGameOptionsSummary.h:136
	BrnGui::OnlineGameOptionsSummary::ESubState meSubState;

	// BrnOnlineGameOptionsSummary.h:139
	BrnGui::MenuComponent mMenuOptions;

	// BrnOnlineGameOptionsSummary.h:140
	BrnGui::AnimationComponent mUpArrowAnimator;

	// BrnOnlineGameOptionsSummary.h:141
	BrnGui::AnimationComponent mDownArrowAnimator;

	// BrnOnlineGameOptionsSummary.h:142
	BrnGui::GuiNetworkRouteInfo mRouteInfoDisplay;

	// BrnOnlineGameOptionsSummary.h:143
	BrnGui::TextField mTitleText;

	// BrnOnlineGameOptionsSummary.h:144
	BrnGui::HelpBar mHelpBar;

	// BrnOnlineGameOptionsSummary.h:146
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineGameOptionsSummary.h:148
	int32_t miCurrentRound;

	// BrnOnlineGameOptionsSummary.h:150
	int32_t miStartSaveItem;

public:
	// BrnOnlineGameOptionsSummary.cpp:103
	virtual void OnEnter();

	// BrnOnlineGameOptionsSummary.cpp:249
	virtual void OnLeave();

	// BrnOnlineGameOptionsSummary.cpp:144
	virtual void Update();

	// BrnOnlineGameOptionsSummary.h:70
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineGameOptionsSummary.cpp:326
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptionsSummary.cpp:363
	void HandleControllerInputCreateGame(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptionsSummary.cpp:482
	void HandleControllerInputSaveOptions(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptionsSummary.cpp:1021
	void HandleInGameEvent(const CgsModule::Event *);

	// BrnOnlineGameOptionsSummary.cpp:1050
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlineGameOptionsSummary.cpp:686
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineGameOptionsSummary.cpp:1099
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

	// BrnOnlineGameOptionsSummary.cpp:282
	void CheckForCompletedLoads();

	// BrnOnlineGameOptionsSummary.cpp:712
	void SetupHelpBar(bool);

	// BrnOnlineGameOptionsSummary.cpp:774
	void ShowGameOptionsScreen();

	// BrnOnlineGameOptionsSummary.h:201
	void ShowLoadOptions();

	// BrnOnlineGameOptionsSummary.cpp:814
	void ShowSaveScreen();

	// BrnOnlineGameOptionsSummary.cpp:881
	void SetupSaveMenuText();

	// BrnOnlineGameOptionsSummary.cpp:947
	void FinishedCreatingGame();

}

// BrnOnlineGameOptionsSummary.h:109
extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 7;

// BrnOnlineGameOptionsSummary.h:110
extern const int32_t KI_NUM_MAIN_MENU_OPTIONS = 2;

// BrnOnlineGameOptionsSummary.h:111
extern const int32_t KI_MAX_HELP_BAR_ITEMS = 2;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineGameOptionsSummary {
		// BrnOnlineGameOptionsSummary.h:50
		struct HelpBarItem {
			// BrnOnlineGameOptionsSummary.h:52
			const char * mpcText;

			// BrnOnlineGameOptionsSummary.h:53
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	public:
		OnlineGameOptionsSummary();

	private:
		// BrnOnlineGameOptionsSummary.h:113
		extern int32_t[] maiEventToObserve;

		// BrnOnlineGameOptionsSummary.h:114
		extern const int32_t miNumEventsObserved;

		// BrnOnlineGameOptionsSummary.h:115
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineGameOptionsSummary.h:116
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineGameOptionsSummary.h:118
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnOnlineGameOptionsSummary.h:119
		extern char[] KAC_MENU_OPTIONS_COMPONENT;

		// BrnOnlineGameOptionsSummary.h:120
		extern char[] KAC_ROUTE_INFO_NAME;

		// BrnOnlineGameOptionsSummary.h:121
		extern char[] KAC_UP_ARROW_COMPONENT;

		// BrnOnlineGameOptionsSummary.h:122
		extern char[] KAC_DOWN_ARROW_COMPONENT;

		// BrnOnlineGameOptionsSummary.h:123
		extern char[] KAC_HELP_BAR_COMPONENT;

		// BrnOnlineGameOptionsSummary.h:128
		extern char[] KAC_SUMMARY_TITLE_STRING_ID;

		// BrnOnlineGameOptionsSummary.h:129
		extern char[] KAC_SAVE_OPTIONS_TITLE_STRING_ID;

		// BrnOnlineGameOptionsSummary.h:131
		extern BrnGui::OnlineGameOptionsSummary::HelpBarItem[] KA_HELPBAR_ITEMS;

		// BrnOnlineGameOptionsSummary.h:132
		extern char[] KPC_EMPTY_SLOT_STRING_IDS;

		// BrnOnlineGameOptionsSummary.h:133
		extern char[] KPC_SLOT_STRING_FORMAT_ID;

		// BrnOnlineGameOptionsSummary.h:134
		extern char[] KPC_SLOT_STRING_ID;

	}

}

// BrnOnlineGameOptionsSummary.h:45
void BrnGui::OnlineGameOptionsSummary::OnlineGameOptionsSummary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

