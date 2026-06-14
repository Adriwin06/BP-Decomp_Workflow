// BrnOnlineQuickMatch.h:117
extern int32_t[] maiEventToObserve;

// BrnOnlineQuickMatch.h:118
extern const int32_t miNumEventsObserved;

// BrnOnlineQuickMatch.h:119
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineQuickMatch.h:120
extern const int32_t miNumResourcesToLoad;

// BrnOnlineQuickMatch.h:122
extern char[] KAC_SEARCH_PARAMS_COMPONENT;

// BrnOnlineQuickMatch.h:123
extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

// BrnOnlineQuickMatch.h:124
extern char[] KAC_MESSAGE_TEXT_COMPONENT;

// BrnOnlineQuickMatch.h:126
extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

// BrnOnlineQuickMatch.h:127
extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

// BrnOnlineQuickMatch.h:128
extern char[] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

// BrnOnlineQuickMatch.h:133
extern char[] KAC_NO_GAMES_FOUND_STRING_ID;

// BrnOnlineQuickMatch.h:134
extern char[] KAC_RANKED_TITLE_STRING_ID;

// BrnOnlineQuickMatch.h:135
extern char[] KAC_SEARCHING_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineQuickMatch {
		// BrnOnlineQuickMatch.h:105
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SEARCHING = 2,
			E_SUBSTATE_NO_GAMES_FOUND = 3,
			E_SUBSTATE_NO_GAMES_FOUND_IN_GAME = 4,
			E_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnOnlineQuickMatch.h:47
struct BrnGui::OnlineQuickMatch : public CgsGui::State {
private:
	// BrnOnlineQuickMatch.cpp:30
	extern const int32_t[7] maiEventToObserve;

	// BrnOnlineQuickMatch.cpp:41
	extern const int32_t miNumEventsObserved = 7;

	// BrnOnlineQuickMatch.cpp:43
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineQuickMatch.cpp:48
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineQuickMatch.cpp:50
	extern const char[12] KAC_SEARCH_PARAMS_COMPONENT;

	// BrnOnlineQuickMatch.cpp:51
	extern const char[7] KAC_MESSAGE_BUTTONS_COMPONENT;

	// BrnOnlineQuickMatch.cpp:52
	extern const char[12] KAC_MESSAGE_TEXT_COMPONENT;

	// BrnOnlineQuickMatch.cpp:54
	extern const char[22] KAC_MESSAGE_ANIMATION_COMPONENT;

	// BrnOnlineQuickMatch.cpp:55
	extern const char[24] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

	// BrnOnlineQuickMatch.cpp:56
	extern const char[23] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

	// BrnOnlineQuickMatch.cpp:74
	extern const char *[2] KAPC_ANIMATION_STATES;

	// BrnOnlineQuickMatch.cpp:58
	extern const char[29] KAC_NO_GAMES_FOUND_STRING_ID;

	// BrnOnlineQuickMatch.cpp:59
	extern const char[27] KAC_RANKED_TITLE_STRING_ID;

	// BrnOnlineQuickMatch.cpp:60
	extern const char[30] KAC_SEARCHING_STRING_ID;

	// BrnOnlineQuickMatch.cpp:62
	extern const char *[2] KPAC_RANKED_OPTION_STRING_IDS;

	// BrnOnlineQuickMatch.cpp:68
	extern const char *[2] KAPC_YES_NO_BUTTON_STRING_ID;

	// BrnOnlineQuickMatch.cpp:80
	extern const char *[1] KAPC_OK_BUTTON_STRING_ID;

	// BrnOnlineQuickMatch.h:141
	BrnGui::OnlineQuickMatch::ESubState meSubState;

	// BrnOnlineQuickMatch.h:144
	BrnGui::AnimationComponent mMessageAnimation;

	// BrnOnlineQuickMatch.h:145
	BrnGui::AnimationComponent mMessageButtonsAnimation;

	// BrnOnlineQuickMatch.h:147
	BrnGui::MenuComponent mMessageButtons;

	// BrnOnlineQuickMatch.h:149
	BrnGui::TextField mMessageText;

	// BrnOnlineQuickMatch.h:151
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnOnlineQuickMatch.cpp:102
	virtual void OnEnter();

	// BrnOnlineQuickMatch.cpp:231
	virtual void OnLeave();

	// BrnOnlineQuickMatch.cpp:140
	virtual void Update();

	// BrnOnlineQuickMatch.h:96
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineQuickMatch.cpp:310
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineQuickMatch.cpp:346
	void HandleControllerInputNoGames(const GuiEventControllerInputPressed *);

	// BrnOnlineQuickMatch.cpp:428
	void HandleControllerInputNoGamesInGame(const GuiEventControllerInputPressed *);

	// BrnOnlineQuickMatch.cpp:505
	void HandleSearchResultsEvent(const GuiEventNetworkCustomMatchResults *);

	// BrnOnlineQuickMatch.cpp:529
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineQuickMatch.cpp:259
	void CheckForCompletedLoads();

	// BrnOnlineQuickMatch.cpp:578
	void ShowMessage(const char *);

	// BrnOnlineQuickMatch.cpp:595
	void ShowNoGamesFound();

	// BrnOnlineQuickMatch.cpp:622
	void ShowNoGamesFoundInGame();

	// BrnOnlineQuickMatch.cpp:649
	bool CheckPrivileges();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineQuickMatch {
	public:
		OnlineQuickMatch();

	private:
		// BrnOnlineQuickMatch.h:117
		extern int32_t[] maiEventToObserve;

		// BrnOnlineQuickMatch.h:118
		extern const int32_t miNumEventsObserved;

		// BrnOnlineQuickMatch.h:119
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineQuickMatch.h:120
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineQuickMatch.h:122
		extern char[] KAC_SEARCH_PARAMS_COMPONENT;

		// BrnOnlineQuickMatch.h:123
		extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

		// BrnOnlineQuickMatch.h:124
		extern char[] KAC_MESSAGE_TEXT_COMPONENT;

		// BrnOnlineQuickMatch.h:126
		extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

		// BrnOnlineQuickMatch.h:127
		extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

		// BrnOnlineQuickMatch.h:128
		extern char[] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

		// BrnOnlineQuickMatch.h:133
		extern char[] KAC_NO_GAMES_FOUND_STRING_ID;

		// BrnOnlineQuickMatch.h:134
		extern char[] KAC_RANKED_TITLE_STRING_ID;

		// BrnOnlineQuickMatch.h:135
		extern char[] KAC_SEARCHING_STRING_ID;

	}

}

// BrnOnlineQuickMatch.h:47
void BrnGui::OnlineQuickMatch::OnlineQuickMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

