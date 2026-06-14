// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CreateMatchOptions {
		// BrnOnlineGameOptions.h:55
		enum EOption {
			E_OPTION_GAME_MODE = 0,
			E_OPTION_GAME_MODE_RACE = 1,
			E_OPTION_GAME_MODE_ROAD_RAGE = 2,
			E_OPTION_GAME_MODE_FUGITIVE = 3,
			E_OPTION_GAME_MODE_STUNT = 4,
			E_OPTION_GAME_MODE_BURNING_HOME_RUN = 5,
			E_OPTION_GAME_MODE_FREE_BURN = 6,
			E_OPTION_VEHICLE_CHOICE = 7,
			E_OPTION_VEHICLE_CHOICE_FREE = 8,
			E_OPTION_VEHICLE_CHOICE_HOST = 9,
			E_OPTION_VEHICLE_CLASS = 10,
			E_OPTION_VEHICLE_CLASS_1 = 11,
			E_OPTION_VEHICLE_CLASS_2 = 12,
			E_OPTION_VEHICLE_CLASS_3 = 13,
			E_OPTION_VEHICLE_CLASS_4 = 14,
			E_OPTION_VEHICLE_CLASS_5 = 15,
			E_OPTION_VEHICLE_CLASS_6 = 16,
			E_OPTION_VEHICLE_CLASS_7 = 17,
			E_OPTION_VEHICLE_CLASS_8 = 18,
			E_OPTION_VEHICLE_CLASS_9 = 19,
			E_OPTION_VEHICLE_CLASS_10 = 20,
			E_OPTION_ROUNDS = 21,
			E_OPTION_ROUNDS_EVEN = 22,
			E_OPTION_ROUNDS_1 = 23,
			E_OPTION_ROUNDS_2 = 24,
			E_OPTION_ROUNDS_3 = 25,
			E_OPTION_ROUNDS_4 = 26,
			E_OPTION_ROUNDS_5 = 27,
			E_OPTION_ROUNDS_6 = 28,
			E_OPTION_ROUNDS_7 = 29,
			E_OPTION_ROUNDS_8 = 30,
			E_OPTION_ROUNDS_9 = 31,
			E_OPTION_ROUNDS_10 = 32,
			E_OPTION_INFINITE_BOOST = 33,
			E_OPTION_INFINITE_BOOST_ON = 34,
			E_OPTION_INFINITE_BOOST_OFF = 35,
			E_OPTION_TRAFFIC = 36,
			E_OPTION_TRAFFIC_ON = 37,
			E_OPTION_TRAFFIC_OFF = 38,
			E_OPTION_TRAFFIC_CHECKING = 39,
			E_OPTION_TRAFFIC_CHECKING_ON = 40,
			E_OPTION_TRAFFIC_CHECKING_OFF = 41,
			E_OPTION_BOOST_TYPE = 42,
			E_OPTION_BOOST_TYPE_NORMAL = 43,
			E_OPTION_BOOST_TYPE_DANAGER = 44,
			E_OPTION_BOOST_TYPE_AGGRESSION = 45,
			E_OPTION_BOOST_TYPE_STUNT = 46,
			E_OPTION_BOOST_TYPE_INFINITE = 47,
			E_OPTION_RUNNER_CRASH_LIMIT = 48,
			E_OPTION_RUNNER_CRASH_LIMIT_1 = 49,
			E_OPTION_RUNNER_CRASH_LIMIT_2 = 50,
			E_OPTION_RUNNER_CRASH_LIMIT_3 = 51,
			E_OPTION_RUNNER_CRASH_LIMIT_4 = 52,
			E_OPTION_RUNNER_CRASH_LIMIT_5 = 53,
			E_OPTION_RUNNER_CRASH_LIMIT_NEVER = 54,
			E_OPTION_TIME_LIMIT = 55,
			E_OPTION_TIME_LIMIT_10 = 56,
			E_OPTION_TIME_LIMIT_20 = 57,
			E_OPTION_TIME_LIMIT_30 = 58,
			E_OPTION_TERMINATION = 59,
			E_OPTION_COUNT = 60,
		}

	}

	// Declaration
	struct OnlineGameOptions {
		// BrnOnlineGameOptions.h:154
		struct HelpBarItem {
			// BrnOnlineGameOptions.h:156
			const char * mpcText;

			// BrnOnlineGameOptions.h:157
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	}

}

// BrnOnlineGameOptions.h:52
struct BrnGui::CreateMatchOptions {
	// BrnOnlineGameOptions.h:135
	char * mpcName;

	// BrnOnlineGameOptions.h:136
	BrnGui::CreateMatchOptions::EOption meOption;

}

// BrnOnlineGameOptions.h:246
extern int32_t[] maiEventToObserve;

// BrnOnlineGameOptions.h:247
extern const int32_t miNumEventsObserved;

// BrnOnlineGameOptions.h:248
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineGameOptions.h:249
extern const int32_t miNumResourcesToLoad;

// BrnOnlineGameOptions.h:251
extern char[] KAC_TITLE_TEXT_COMPONENT;

// BrnOnlineGameOptions.h:252
extern char[] KAC_MENU_OPTIONS_COMPONENT;

// BrnOnlineGameOptions.h:253
extern char[] KAC_CREATE_GAME_TOGGLE_COMPONENT;

// BrnOnlineGameOptions.h:254
extern char[] KAC_ROUTE_INFO_NAME;

// BrnOnlineGameOptions.h:255
extern char[] KAC_UP_ARROW_COMPONENT;

// BrnOnlineGameOptions.h:256
extern char[] KAC_DOWN_ARROW_COMPONENT;

// BrnOnlineGameOptions.h:257
extern char[] KAC_LOAD_HEADER_COMPONENT;

// BrnOnlineGameOptions.h:258
extern char[] KAC_LOAD_HEADER_TEXT_COMPONENT;

// BrnOnlineGameOptions.h:259
extern char[] KAC_HELP_BAR_COMPONENT;

// BrnOnlineGameOptions.h:260
extern char[] KAC_MAP_BORDER_ANIMATION_COMPONENT;

// BrnOnlineGameOptions.h:266
extern CreateMatchOptions[] KA_OPTIONS;

// BrnOnlineGameOptions.h:267
extern BrnGui::CreateMatchOptions::EOption[] KAE_COMMON_OPTIONS;

// BrnOnlineGameOptions.h:268
extern BrnGui::CreateMatchOptions::EOption[] KAE_RACE_MODE_OPTIONS;

// BrnOnlineGameOptions.h:269
extern BrnGui::CreateMatchOptions::EOption[] KAE_ROAD_RAGE_MODE_OPTIONS;

// BrnOnlineGameOptions.h:270
extern BrnGui::CreateMatchOptions::EOption[] KAE_BURNING_HOME_RUN_MODE_OPTIONS;

// BrnOnlineGameOptions.h:274
extern char[] KAC_GAME_OPTIONS_TITLE_STRING_ID;

// BrnOnlineGameOptions.h:275
extern char[] KAC_LOAD_OPTIONS_TITLE_STRING_ID;

// BrnOnlineGameOptions.h:276
extern char[] KAC_CREATED_OPTIONS_STRING_ID;

// BrnOnlineGameOptions.h:277
extern char[] KAC_RECENT_OPTIONS_STRING_ID;

// BrnOnlineGameOptions.h:278
extern char[] KPC_SLOT_STRING_FORMAT_ID;

// BrnOnlineGameOptions.h:279
extern char[] KPC_SLOT_STRING_ID;

// BrnOnlineGameOptions.h:281
extern BrnGui::OnlineGameOptions::HelpBarItem[] KA_HELPBAR_ITEMS;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CreateMatchOptions {
		// BrnOnlineGameOptions.h:55
		enum EOption {
			E_OPTION_GAME_MODE = 0,
			E_OPTION_GAME_MODE_RACE = 1,
			E_OPTION_GAME_MODE_ROAD_RAGE = 2,
			E_OPTION_GAME_MODE_FUGITIVE = 3,
			E_OPTION_GAME_MODE_STUNT = 4,
			E_OPTION_GAME_MODE_BURNING_HOME_RUN = 5,
			E_OPTION_GAME_MODE_FREE_BURN = 6,
			E_OPTION_VEHICLE_CHOICE = 7,
			E_OPTION_VEHICLE_CHOICE_FREE = 8,
			E_OPTION_VEHICLE_CHOICE_HOST = 9,
			E_OPTION_VEHICLE_CLASS = 10,
			E_OPTION_VEHICLE_CLASS_1 = 11,
			E_OPTION_VEHICLE_CLASS_2 = 12,
			E_OPTION_VEHICLE_CLASS_3 = 13,
			E_OPTION_VEHICLE_CLASS_4 = 14,
			E_OPTION_VEHICLE_CLASS_5 = 15,
			E_OPTION_VEHICLE_CLASS_6 = 16,
			E_OPTION_VEHICLE_CLASS_7 = 17,
			E_OPTION_VEHICLE_CLASS_8 = 18,
			E_OPTION_VEHICLE_CLASS_9 = 19,
			E_OPTION_VEHICLE_CLASS_10 = 20,
			E_OPTION_ROUNDS = 21,
			E_OPTION_ROUNDS_EVEN = 22,
			E_OPTION_ROUNDS_1 = 23,
			E_OPTION_ROUNDS_2 = 24,
			E_OPTION_ROUNDS_3 = 25,
			E_OPTION_ROUNDS_4 = 26,
			E_OPTION_ROUNDS_5 = 27,
			E_OPTION_ROUNDS_6 = 28,
			E_OPTION_ROUNDS_7 = 29,
			E_OPTION_ROUNDS_8 = 30,
			E_OPTION_ROUNDS_9 = 31,
			E_OPTION_ROUNDS_10 = 32,
			E_OPTION_INFINITE_BOOST = 33,
			E_OPTION_INFINITE_BOOST_ON = 34,
			E_OPTION_INFINITE_BOOST_OFF = 35,
			E_OPTION_TRAFFIC = 36,
			E_OPTION_TRAFFIC_ON = 37,
			E_OPTION_TRAFFIC_OFF = 38,
			E_OPTION_TRAFFIC_CHECKING = 39,
			E_OPTION_TRAFFIC_CHECKING_ON = 40,
			E_OPTION_TRAFFIC_CHECKING_OFF = 41,
			E_OPTION_BOOST_TYPE = 42,
			E_OPTION_BOOST_TYPE_NORMAL = 43,
			E_OPTION_BOOST_TYPE_DANAGER = 44,
			E_OPTION_BOOST_TYPE_AGGRESSION = 45,
			E_OPTION_BOOST_TYPE_STUNT = 46,
			E_OPTION_BOOST_TYPE_INFINITE = 47,
			E_OPTION_RUNNER_CRASH_LIMIT = 48,
			E_OPTION_RUNNER_CRASH_LIMIT_1 = 49,
			E_OPTION_RUNNER_CRASH_LIMIT_2 = 50,
			E_OPTION_RUNNER_CRASH_LIMIT_3 = 51,
			E_OPTION_RUNNER_CRASH_LIMIT_4 = 52,
			E_OPTION_RUNNER_CRASH_LIMIT_5 = 53,
			E_OPTION_RUNNER_CRASH_LIMIT_NEVER = 54,
			E_OPTION_TIME_LIMIT = 55,
			E_OPTION_TIME_LIMIT_10 = 56,
			E_OPTION_TIME_LIMIT_20 = 57,
			E_OPTION_TIME_LIMIT_30 = 58,
			E_OPTION_TERMINATION = 59,
			E_OPTION_COUNT = 60,
		}

	}

	// Declaration
	struct OnlineGameOptions {
		// BrnOnlineGameOptions.h:154
		struct HelpBarItem {
			// BrnOnlineGameOptions.h:156
			const char * mpcText;

			// BrnOnlineGameOptions.h:157
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CreateMatchOptions {
		// BrnOnlineGameOptions.h:55
		enum EOption {
			E_OPTION_GAME_MODE = 0,
			E_OPTION_GAME_MODE_RACE = 1,
			E_OPTION_GAME_MODE_ROAD_RAGE = 2,
			E_OPTION_GAME_MODE_FUGITIVE = 3,
			E_OPTION_GAME_MODE_STUNT = 4,
			E_OPTION_GAME_MODE_BURNING_HOME_RUN = 5,
			E_OPTION_GAME_MODE_FREE_BURN = 6,
			E_OPTION_VEHICLE_CHOICE = 7,
			E_OPTION_VEHICLE_CHOICE_FREE = 8,
			E_OPTION_VEHICLE_CHOICE_HOST = 9,
			E_OPTION_VEHICLE_CLASS = 10,
			E_OPTION_VEHICLE_CLASS_1 = 11,
			E_OPTION_VEHICLE_CLASS_2 = 12,
			E_OPTION_VEHICLE_CLASS_3 = 13,
			E_OPTION_VEHICLE_CLASS_4 = 14,
			E_OPTION_VEHICLE_CLASS_5 = 15,
			E_OPTION_VEHICLE_CLASS_6 = 16,
			E_OPTION_VEHICLE_CLASS_7 = 17,
			E_OPTION_VEHICLE_CLASS_8 = 18,
			E_OPTION_VEHICLE_CLASS_9 = 19,
			E_OPTION_VEHICLE_CLASS_10 = 20,
			E_OPTION_ROUNDS = 21,
			E_OPTION_ROUNDS_EVEN = 22,
			E_OPTION_ROUNDS_1 = 23,
			E_OPTION_ROUNDS_2 = 24,
			E_OPTION_ROUNDS_3 = 25,
			E_OPTION_ROUNDS_4 = 26,
			E_OPTION_ROUNDS_5 = 27,
			E_OPTION_ROUNDS_6 = 28,
			E_OPTION_ROUNDS_7 = 29,
			E_OPTION_ROUNDS_8 = 30,
			E_OPTION_ROUNDS_9 = 31,
			E_OPTION_ROUNDS_10 = 32,
			E_OPTION_INFINITE_BOOST = 33,
			E_OPTION_INFINITE_BOOST_ON = 34,
			E_OPTION_INFINITE_BOOST_OFF = 35,
			E_OPTION_TRAFFIC = 36,
			E_OPTION_TRAFFIC_ON = 37,
			E_OPTION_TRAFFIC_OFF = 38,
			E_OPTION_TRAFFIC_CHECKING = 39,
			E_OPTION_TRAFFIC_CHECKING_ON = 40,
			E_OPTION_TRAFFIC_CHECKING_OFF = 41,
			E_OPTION_BOOST_TYPE = 42,
			E_OPTION_BOOST_TYPE_NORMAL = 43,
			E_OPTION_BOOST_TYPE_DANAGER = 44,
			E_OPTION_BOOST_TYPE_AGGRESSION = 45,
			E_OPTION_BOOST_TYPE_STUNT = 46,
			E_OPTION_BOOST_TYPE_INFINITE = 47,
			E_OPTION_RUNNER_CRASH_LIMIT = 48,
			E_OPTION_RUNNER_CRASH_LIMIT_1 = 49,
			E_OPTION_RUNNER_CRASH_LIMIT_2 = 50,
			E_OPTION_RUNNER_CRASH_LIMIT_3 = 51,
			E_OPTION_RUNNER_CRASH_LIMIT_4 = 52,
			E_OPTION_RUNNER_CRASH_LIMIT_5 = 53,
			E_OPTION_RUNNER_CRASH_LIMIT_NEVER = 54,
			E_OPTION_TIME_LIMIT = 55,
			E_OPTION_TIME_LIMIT_10 = 56,
			E_OPTION_TIME_LIMIT_20 = 57,
			E_OPTION_TIME_LIMIT_30 = 58,
			E_OPTION_TERMINATION = 59,
			E_OPTION_COUNT = 60,
		}

	}

	// Declaration
	struct OnlineGameOptions {
		// BrnOnlineGameOptions.h:154
		struct HelpBarItem {
			// BrnOnlineGameOptions.h:156
			const char * mpcText;

			// BrnOnlineGameOptions.h:157
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineGameOptions.h:185
		enum EOptionsToLoad {
			E_OPTIONS_TO_LOAD_SAVED = 0,
			E_OPTIONS_TO_LOAD_RECENT = 1,
			E_OPTIONS_TO_LOAD_COUNT = 2,
		}

		// BrnOnlineGameOptions.h:204
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_LOAD_OPTIONS = 3,
			E_SUBSTATE_WAIT_IN_GAME = 4,
			E_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnOnlineGameOptions.h:149
struct BrnGui::OnlineGameOptions : public CgsGui::State {
private:
	// BrnOnlineGameOptions.h:242
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 5;

	// BrnOnlineGameOptions.h:243
	extern const int32_t KI_MAX_LOAD_OPTIONS = 6;

	// BrnOnlineGameOptions.h:244
	extern const int32_t KI_MAX_HELP_BAR_ITEMS = 3;

	// BrnOnlineGameOptions.cpp:32
	extern const int32_t[11] maiEventToObserve;

	// BrnOnlineGameOptions.cpp:47
	extern const int32_t miNumEventsObserved = 11;

	// BrnOnlineGameOptions.cpp:49
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnOnlineGameOptions.cpp:55
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnOnlineGameOptions.cpp:64
	extern const char[11] KAC_TITLE_TEXT_COMPONENT;

	// BrnOnlineGameOptions.cpp:57
	extern const char[9] KAC_MENU_OPTIONS_COMPONENT;

	// BrnOnlineGameOptions.cpp:58
	extern const char[17] KAC_CREATE_GAME_TOGGLE_COMPONENT;

	// BrnOnlineGameOptions.cpp:59
	extern const char[10] KAC_ROUTE_INFO_NAME;

	// BrnOnlineGameOptions.cpp:60
	extern const char[13] KAC_UP_ARROW_COMPONENT;

	// BrnOnlineGameOptions.cpp:61
	extern const char[15] KAC_DOWN_ARROW_COMPONENT;

	// BrnOnlineGameOptions.cpp:62
	extern const char[16] KAC_LOAD_HEADER_COMPONENT;

	// BrnOnlineGameOptions.cpp:63
	extern const char[15] KAC_LOAD_HEADER_TEXT_COMPONENT;

	// BrnOnlineGameOptions.cpp:65
	extern const char[7] KAC_HELP_BAR_COMPONENT;

	// BrnOnlineGameOptions.cpp:66
	extern const char[10] KAC_MAP_BORDER_ANIMATION_COMPONENT;

	// BrnOnlineGameOptions.cpp:231
	extern const char *[3] KPC_ARROW_ANIMATION_STATES;

	// BrnOnlineGameOptions.cpp:238
	extern const char *[3] KPC_LOAD_HEADER_ANIMATION_STATES;

	// BrnOnlineGameOptions.cpp:245
	extern const char *[2] KPC_MAP_BORDER_ANIMATION_STATES;

	// BrnOnlineGameOptions.cpp:75
	extern const CreateMatchOptions[60] KA_OPTIONS;

	// BrnOnlineGameOptions.cpp:168
	extern const BrnGui::CreateMatchOptions::EOption[1] KAE_COMMON_OPTIONS;

	// BrnOnlineGameOptions.cpp:175
	extern const BrnGui::CreateMatchOptions::EOption[5] KAE_RACE_MODE_OPTIONS;

	// BrnOnlineGameOptions.cpp:187
	extern const BrnGui::CreateMatchOptions::EOption[6] KAE_ROAD_RAGE_MODE_OPTIONS;

	// BrnOnlineGameOptions.cpp:200
	extern const BrnGui::CreateMatchOptions::EOption[8] KAE_BURNING_HOME_RUN_MODE_OPTIONS;

	// BrnOnlineGameOptions.cpp:215
	extern const BrnGui::CreateMatchOptions::EOption *[3] KAP_GAME_MODE_OPTION_DATA;

	// BrnOnlineGameOptions.cpp:68
	extern const char[27] KAC_GAME_OPTIONS_TITLE_STRING_ID;

	// BrnOnlineGameOptions.cpp:69
	extern const char[32] KAC_LOAD_OPTIONS_TITLE_STRING_ID;

	// BrnOnlineGameOptions.cpp:70
	extern const char[28] KAC_CREATED_OPTIONS_STRING_ID;

	// BrnOnlineGameOptions.cpp:71
	extern const char[27] KAC_RECENT_OPTIONS_STRING_ID;

	// BrnOnlineGameOptions.cpp:72
	extern const char[24] KPC_SLOT_STRING_FORMAT_ID;

	// BrnOnlineGameOptions.cpp:73
	extern const char[28] KPC_SLOT_STRING_ID;

	// BrnOnlineGameOptions.cpp:223
	extern const BrnGui::OnlineGameOptions::HelpBarItem[4] KA_HELPBAR_ITEMS;

	// BrnOnlineGameOptions.h:284
	BrnGui::OnlineGameOptions::ESubState meSubState;

	// BrnOnlineGameOptions.h:287
	BrnGui::MenuComponent mMenuOptions;

	// BrnOnlineGameOptions.h:288
	BrnGui::MenuToggleGroup mCreateGameToggles;

	// BrnOnlineGameOptions.h:289
	BrnGui::HelpBar mHelpBar;

	// BrnOnlineGameOptions.h:290
	BrnGui::AnimationComponent mUpArrowAnimator;

	// BrnOnlineGameOptions.h:291
	BrnGui::AnimationComponent mDownArrowAnimator;

	// BrnOnlineGameOptions.h:292
	BrnGui::AnimationComponent mLoadHeaderAnimator;

	// BrnOnlineGameOptions.h:293
	BrnGui::AnimationComponent mMapBorderAnimator;

	// BrnOnlineGameOptions.h:294
	BrnGui::TextField mLoadHeaderText;

	// BrnOnlineGameOptions.h:295
	BrnGui::TextField mTitleText;

	// BrnOnlineGameOptions.h:297
	BrnGui::GuiNetworkRouteInfo mRouteInfoDisplay;

	// BrnOnlineGameOptions.h:298
	GuiEventNetworkGameParams mGameOptions;

	// BrnOnlineGameOptions.h:300
	const BrnGui::CreateMatchOptions::EOption * mpCommonOptions;

	// BrnOnlineGameOptions.h:302
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineGameOptions.h:304
	BrnGui::OnlineGameOptions::EOptionsToLoad meOptionsToLoad;

	// BrnOnlineGameOptions.h:306
	int32_t miCurrentRound;

	// BrnOnlineGameOptions.h:307
	int32_t miStartItem;

	// BrnOnlineGameOptions.h:309
	bool mbIsCreating;

public:
	// BrnOnlineGameOptions.cpp:268
	virtual void OnEnter();

	// BrnOnlineGameOptions.cpp:443
	virtual void OnLeave();

	// BrnOnlineGameOptions.cpp:327
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineGameOptions.cpp:408
		using namespace CgsDev::Message;

	}

	// BrnOnlineGameOptions.h:174
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnOnlineGameOptions.h:181
	const char * GetCurrentlySelectedGame();

private:
	// BrnOnlineGameOptions.cpp:530
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptions.cpp:567
	void HandleControllerInputCreateGame(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptions.cpp:787
	void HandleControllerInputLoadOptions(const GuiEventControllerInputPressed *);

	// BrnOnlineGameOptions.cpp:2237
	void HandleInGameEvent(const CgsModule::Event *);

	// BrnOnlineGameOptions.cpp:2263
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlineGameOptions.cpp:1121
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineGameOptions.cpp:2293
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

	// BrnOnlineGameOptions.cpp:2349
	void HandleCarInfoResponseEvent(const GuiCarSelectionEvent *);

	// BrnOnlineGameOptions.cpp:484
	void CheckForCompletedLoads();

	// BrnOnlineGameOptions.cpp:1336
	void SetupCommonCreateGameOptions();

	// BrnOnlineGameOptions.cpp:1363
	void SetupGameModeOptions();

	// BrnOnlineGameOptions.cpp:1415
	void SetupOptions(int32_t, BrnGui::CreateMatchOptions::EOption);

	// BrnOnlineGameOptions.cpp:1228
	bool IsToggleAvailable(BrnGui::CreateMatchOptions::EOption);

	// BrnOnlineGameOptions.cpp:1211
	int32_t GetToggleIndex(BrnGui::CreateMatchOptions::EOption);

	// BrnOnlineGameOptions.cpp:1896
	int32_t GetOptionIndex(BrnGui::CreateMatchOptions::EOption);

	// BrnOnlineGameOptions.cpp:1271
	int32_t GetSelectedGameMode() const;

	// BrnOnlineGameOptions.cpp:1244
	int32_t GetNumberCommonOptions();

	// BrnOnlineGameOptions.cpp:1313
	int32_t GetNumberOptions();

	// BrnOnlineGameOptions.cpp:1465
	void HighlightCreateGameOptions();

	// BrnOnlineGameOptions.cpp:1652
	void ResetGameOptions();

	// BrnOnlineGameOptions.cpp:1697
	void StoreCreateGameOptions();

	// BrnOnlineGameOptions.cpp:1815
	void StoreGameMode();

	// BrnOnlineGameOptions.cpp:1874
	BrnGui::CreateMatchOptions::EOption GetHighlightedOption(BrnGui::CreateMatchOptions::EOption);

	// BrnOnlineGameOptions.cpp:1933
	bool CheckPrivileges();

	// BrnOnlineGameOptions.cpp:1949
	void SetupHelpBar(bool);

	// BrnOnlineGameOptions.cpp:2029
	void ShowGameOptionsScreen();

	// BrnOnlineGameOptions.cpp:2077
	void ShowLoadScreen();

	// BrnOnlineGameOptions.cpp:2149
	void ShowLoadOptions();

	// BrnOnlineGameOptions.h:438
	void ShowSaveScreen();

	// BrnOnlineGameOptions.cpp:2310
	void RequestPresetEvents();

	// BrnOnlineGameOptions.cpp:2398
	void TriggerSound(EGameInputActions);

}

// BrnOnlineGameOptions.h:242
extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 5;

// BrnOnlineGameOptions.h:243
extern const int32_t KI_MAX_LOAD_OPTIONS = 6;

// BrnOnlineGameOptions.h:244
extern const int32_t KI_MAX_HELP_BAR_ITEMS = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CreateMatchOptions {
		// BrnOnlineGameOptions.h:55
		enum EOption {
			E_OPTION_GAME_MODE = 0,
			E_OPTION_GAME_MODE_RACE = 1,
			E_OPTION_GAME_MODE_ROAD_RAGE = 2,
			E_OPTION_GAME_MODE_FUGITIVE = 3,
			E_OPTION_GAME_MODE_STUNT = 4,
			E_OPTION_GAME_MODE_BURNING_HOME_RUN = 5,
			E_OPTION_GAME_MODE_FREE_BURN = 6,
			E_OPTION_VEHICLE_CHOICE = 7,
			E_OPTION_VEHICLE_CHOICE_FREE = 8,
			E_OPTION_VEHICLE_CHOICE_HOST = 9,
			E_OPTION_VEHICLE_CLASS = 10,
			E_OPTION_VEHICLE_CLASS_1 = 11,
			E_OPTION_VEHICLE_CLASS_2 = 12,
			E_OPTION_VEHICLE_CLASS_3 = 13,
			E_OPTION_VEHICLE_CLASS_4 = 14,
			E_OPTION_VEHICLE_CLASS_5 = 15,
			E_OPTION_VEHICLE_CLASS_6 = 16,
			E_OPTION_VEHICLE_CLASS_7 = 17,
			E_OPTION_VEHICLE_CLASS_8 = 18,
			E_OPTION_VEHICLE_CLASS_9 = 19,
			E_OPTION_VEHICLE_CLASS_10 = 20,
			E_OPTION_ROUNDS = 21,
			E_OPTION_ROUNDS_EVEN = 22,
			E_OPTION_ROUNDS_1 = 23,
			E_OPTION_ROUNDS_2 = 24,
			E_OPTION_ROUNDS_3 = 25,
			E_OPTION_ROUNDS_4 = 26,
			E_OPTION_ROUNDS_5 = 27,
			E_OPTION_ROUNDS_6 = 28,
			E_OPTION_ROUNDS_7 = 29,
			E_OPTION_ROUNDS_8 = 30,
			E_OPTION_ROUNDS_9 = 31,
			E_OPTION_ROUNDS_10 = 32,
			E_OPTION_INFINITE_BOOST = 33,
			E_OPTION_INFINITE_BOOST_ON = 34,
			E_OPTION_INFINITE_BOOST_OFF = 35,
			E_OPTION_TRAFFIC = 36,
			E_OPTION_TRAFFIC_ON = 37,
			E_OPTION_TRAFFIC_OFF = 38,
			E_OPTION_TRAFFIC_CHECKING = 39,
			E_OPTION_TRAFFIC_CHECKING_ON = 40,
			E_OPTION_TRAFFIC_CHECKING_OFF = 41,
			E_OPTION_BOOST_TYPE = 42,
			E_OPTION_BOOST_TYPE_NORMAL = 43,
			E_OPTION_BOOST_TYPE_DANAGER = 44,
			E_OPTION_BOOST_TYPE_AGGRESSION = 45,
			E_OPTION_BOOST_TYPE_STUNT = 46,
			E_OPTION_BOOST_TYPE_INFINITE = 47,
			E_OPTION_RUNNER_CRASH_LIMIT = 48,
			E_OPTION_RUNNER_CRASH_LIMIT_1 = 49,
			E_OPTION_RUNNER_CRASH_LIMIT_2 = 50,
			E_OPTION_RUNNER_CRASH_LIMIT_3 = 51,
			E_OPTION_RUNNER_CRASH_LIMIT_4 = 52,
			E_OPTION_RUNNER_CRASH_LIMIT_5 = 53,
			E_OPTION_RUNNER_CRASH_LIMIT_NEVER = 54,
			E_OPTION_TIME_LIMIT = 55,
			E_OPTION_TIME_LIMIT_10 = 56,
			E_OPTION_TIME_LIMIT_20 = 57,
			E_OPTION_TIME_LIMIT_30 = 58,
			E_OPTION_TERMINATION = 59,
			E_OPTION_COUNT = 60,
		}

	}

	// Declaration
	struct OnlineGameOptions {
		// BrnOnlineGameOptions.h:154
		struct HelpBarItem {
			// BrnOnlineGameOptions.h:156
			const char * mpcText;

			// BrnOnlineGameOptions.h:157
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

	public:
		OnlineGameOptions();

	private:
		// BrnOnlineGameOptions.h:246
		extern int32_t[] maiEventToObserve;

		// BrnOnlineGameOptions.h:247
		extern const int32_t miNumEventsObserved;

		// BrnOnlineGameOptions.h:248
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineGameOptions.h:249
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineGameOptions.h:251
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnOnlineGameOptions.h:252
		extern char[] KAC_MENU_OPTIONS_COMPONENT;

		// BrnOnlineGameOptions.h:253
		extern char[] KAC_CREATE_GAME_TOGGLE_COMPONENT;

		// BrnOnlineGameOptions.h:254
		extern char[] KAC_ROUTE_INFO_NAME;

		// BrnOnlineGameOptions.h:255
		extern char[] KAC_UP_ARROW_COMPONENT;

		// BrnOnlineGameOptions.h:256
		extern char[] KAC_DOWN_ARROW_COMPONENT;

		// BrnOnlineGameOptions.h:257
		extern char[] KAC_LOAD_HEADER_COMPONENT;

		// BrnOnlineGameOptions.h:258
		extern char[] KAC_LOAD_HEADER_TEXT_COMPONENT;

		// BrnOnlineGameOptions.h:259
		extern char[] KAC_HELP_BAR_COMPONENT;

		// BrnOnlineGameOptions.h:260
		extern char[] KAC_MAP_BORDER_ANIMATION_COMPONENT;

		// BrnOnlineGameOptions.h:266
		extern CreateMatchOptions[] KA_OPTIONS;

		// BrnOnlineGameOptions.h:267
		extern BrnGui::CreateMatchOptions::EOption[] KAE_COMMON_OPTIONS;

		// BrnOnlineGameOptions.h:268
		extern BrnGui::CreateMatchOptions::EOption[] KAE_RACE_MODE_OPTIONS;

		// BrnOnlineGameOptions.h:269
		extern BrnGui::CreateMatchOptions::EOption[] KAE_ROAD_RAGE_MODE_OPTIONS;

		// BrnOnlineGameOptions.h:270
		extern BrnGui::CreateMatchOptions::EOption[] KAE_BURNING_HOME_RUN_MODE_OPTIONS;

		// BrnOnlineGameOptions.h:274
		extern char[] KAC_GAME_OPTIONS_TITLE_STRING_ID;

		// BrnOnlineGameOptions.h:275
		extern char[] KAC_LOAD_OPTIONS_TITLE_STRING_ID;

		// BrnOnlineGameOptions.h:276
		extern char[] KAC_CREATED_OPTIONS_STRING_ID;

		// BrnOnlineGameOptions.h:277
		extern char[] KAC_RECENT_OPTIONS_STRING_ID;

		// BrnOnlineGameOptions.h:278
		extern char[] KPC_SLOT_STRING_FORMAT_ID;

		// BrnOnlineGameOptions.h:279
		extern char[] KPC_SLOT_STRING_ID;

		// BrnOnlineGameOptions.h:281
		extern BrnGui::OnlineGameOptions::HelpBarItem[] KA_HELPBAR_ITEMS;

	}

}

// BrnOnlineGameOptions.h:149
void BrnGui::OnlineGameOptions::OnlineGameOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

