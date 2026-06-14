// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineSelectRoute {
		// BrnOnlineSelectRoute.h:70
		struct HelpBarItem {
			// BrnOnlineSelectRoute.h:72
			const char * mpcText;

			// BrnOnlineSelectRoute.h:73
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineSelectRoute.h:142
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTION_NEXT = 0,
			E_MAIN_MENU_OPTION_EDIT = 1,
			E_MAIN_MENU_OPTION_PRESET = 2,
			E_MAIN_MENU_OPTION_FINISHED = 3,
			E_MAIN_MENU_OPTION_COUNT = 4,
		}

		// BrnOnlineSelectRoute.h:153
		struct MenuOptions {
			// BrnOnlineSelectRoute.h:155
			BrnGui::OnlineSelectRoute::EMainMenuOptions meMenuOption;

			// BrnOnlineSelectRoute.h:156
			const char * mpcText;

		}

	}

}

// BrnOnlineSelectRoute.h:162
extern int32_t[] maiEventToObserve;

// BrnOnlineSelectRoute.h:163
extern const int32_t miNumEventsObserved;

// BrnOnlineSelectRoute.h:164
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineSelectRoute.h:165
extern const int32_t miNumResourcesToLoad;

// BrnOnlineSelectRoute.h:167
extern const int32_t KI_MAX_NUM_LANDMARKS;

// BrnOnlineSelectRoute.h:169
extern const float32_t KF_ONE_OVER_AVERAGE_METRES_PER_SECOND;

// BrnOnlineSelectRoute.h:170
extern const float32_t KF_EVENT_ICON_FADE_TIME;

// BrnOnlineSelectRoute.h:171
extern const float32_t KF_SECONDS_ROUND_VALUE;

// BrnOnlineSelectRoute.h:173
extern char[] KAC_SELECT_ROUTES_COMPONENT;

// BrnOnlineSelectRoute.h:174
extern char[] KAC_MENU_OPTIONS_COMPONENT;

// BrnOnlineSelectRoute.h:175
extern char[] KAC_CHECKPOINT_MENU_ANIMATOR_COMPONENT;

// BrnOnlineSelectRoute.h:176
extern char[] KAC_CURSOR_ANIMATOR_COMPONENT;

// BrnOnlineSelectRoute.h:177
extern char[] KAC_EVENT_NAME_ANIMATOR_COMPONENT;

// BrnOnlineSelectRoute.h:179
extern char[] KAC_CURRENT_ROUND_DISPLAY_COMPONENT;

// BrnOnlineSelectRoute.h:181
extern char[] KAC_EVENT_NAME_VALUE_COMPONENT;

// BrnOnlineSelectRoute.h:182
extern char[] KAC_TIME_VALUE_COMPONENT;

// BrnOnlineSelectRoute.h:183
extern char[] KAC_DISTANCE_VALUE_COMPONENT;

// BrnOnlineSelectRoute.h:184
extern char[] KAC_TITLE_TEXT_COMPONENT;

// BrnOnlineSelectRoute.h:186
extern char[] KAC_HELP_BAR_COMPONENT;

// BrnOnlineSelectRoute.h:189
extern char[] KAC_ROUTE_DISTANCE_STRINGID;

// BrnOnlineSelectRoute.h:190
extern char[] KAC_ROUTE_MIMIUMUM_DISTANCE_STRINGID;

// BrnOnlineSelectRoute.h:192
extern char[] KAC_EVENT_NAME_VALUE_STRINGID;

// BrnOnlineSelectRoute.h:193
extern char[] KAC_TIME_VALUE_STRINGID;

// BrnOnlineSelectRoute.h:194
extern char[] KAC_DISTANCE_VALUE_STRINGID;

// BrnOnlineSelectRoute.h:195
extern char[] KAC_ROUND_STRING_FORMAT_ID;

// BrnOnlineSelectRoute.h:196
extern char[] KAC_RR_ROUND_STRING_FORMAT_ID;

// BrnOnlineSelectRoute.h:197
extern char[] KAC_CURRENT_ROUND_STRING_ID;

// BrnOnlineSelectRoute.h:198
extern char[] KAC_MAIN_TITLE_STRING_ID;

// BrnOnlineSelectRoute.h:199
extern char[] KAC_EDIT_ROUTE_TITLE_STRING_ID;

// BrnOnlineSelectRoute.h:201
extern BrnGui::OnlineSelectRoute::HelpBarItem[] KA_HELPBAR_ITEMS;

// BrnOnlineSelectRoute.h:203
extern const rw::math::vpu::Vector2 K_MAP_LONG_DISPLAY_RECT;

// BrnOnlineSelectRoute.h:205
extern BrnGui::OnlineSelectRoute::MenuOptions[] KA_MENU_OPTIONS;

// BrnOnlineSelectRoute.h:206
extern BrnGui::OnlineSelectRoute::MenuOptions[] KA_FINAL_MENU_OPTIONS;

// BrnOnlineSelectRoute.h:232
extern char[] macSatNavIconBaseName;

// BrnOnlineSelectRoute.h:236
extern char[] macCrashNavBoroughName;

// BrnOnlineSelectRoute.h:239
extern char[] mCursorName;

// BrnOnlineSelectRoute.h:240
extern const float32_t KF_CURSOR_SPEED;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineSelectRoute {
		// BrnOnlineSelectRoute.h:70
		struct HelpBarItem {
			// BrnOnlineSelectRoute.h:72
			const char * mpcText;

			// BrnOnlineSelectRoute.h:73
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineSelectRoute.h:142
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTION_NEXT = 0,
			E_MAIN_MENU_OPTION_EDIT = 1,
			E_MAIN_MENU_OPTION_PRESET = 2,
			E_MAIN_MENU_OPTION_FINISHED = 3,
			E_MAIN_MENU_OPTION_COUNT = 4,
		}

		// BrnOnlineSelectRoute.h:153
		struct MenuOptions {
			// BrnOnlineSelectRoute.h:155
			BrnGui::OnlineSelectRoute::EMainMenuOptions meMenuOption;

			// BrnOnlineSelectRoute.h:156
			const char * mpcText;

		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineSelectRoute {
		// BrnOnlineSelectRoute.h:70
		struct HelpBarItem {
			// BrnOnlineSelectRoute.h:72
			const char * mpcText;

			// BrnOnlineSelectRoute.h:73
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineSelectRoute.h:120
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_MAIN_OPTION = 2,
			E_SUBSTATE_SELECTING_CHECKPOINT = 3,
			E_SUBSTATE_SELECTING_POINT = 4,
			E_SUBSTATE_SELECTING_PRESET_EVENT = 5,
			E_SUBSTATE_WAIT_IN_GAME = 6,
			E_SUBSTATE_LEAVING_STATE = 7,
			E_SUBSTATE_COUNT = 8,
		}

		// BrnOnlineSelectRoute.h:134
		enum ESelectRound {
			E_SELECT_ROUND_FORWARDS = 0,
			E_SELECT_ROUND_BACKWARDS = 1,
			E_SELECT_ROUND_COUNT = 2,
		}

		// BrnOnlineSelectRoute.h:142
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTION_NEXT = 0,
			E_MAIN_MENU_OPTION_EDIT = 1,
			E_MAIN_MENU_OPTION_PRESET = 2,
			E_MAIN_MENU_OPTION_FINISHED = 3,
			E_MAIN_MENU_OPTION_COUNT = 4,
		}

		// BrnOnlineSelectRoute.h:153
		struct MenuOptions {
			// BrnOnlineSelectRoute.h:155
			BrnGui::OnlineSelectRoute::EMainMenuOptions meMenuOption;

			// BrnOnlineSelectRoute.h:156
			const char * mpcText;

		}

	}

}

// BrnOnlineSelectRoute.h:48
struct BrnGui::OnlineSelectRoute : public CgsGui::State {
private:
	// BrnOnlineSelectRoute.h:159
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 6;

	// BrnOnlineSelectRoute.h:160
	extern const int32_t KI_MAX_HELP_BAR_ITEMS = 5;

	// BrnOnlineSelectRoute.cpp:34
	extern const int32_t[10] maiEventToObserve;

	// BrnOnlineSelectRoute.cpp:49
	extern const int32_t miNumEventsObserved = 10;

	// BrnOnlineSelectRoute.cpp:51
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnOnlineSelectRoute.cpp:57
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnOnlineSelectRoute.cpp:78
	extern const int32_t KI_MAX_NUM_LANDMARKS = 512;

	// BrnOnlineSelectRoute.cpp:82
	extern const float32_t KF_ONE_OVER_AVERAGE_METRES_PER_SECOND;

	// BrnOnlineSelectRoute.cpp:83
	extern const float32_t KF_EVENT_ICON_FADE_TIME;

	// BrnOnlineSelectRoute.cpp:84
	extern const float32_t KF_SECONDS_ROUND_VALUE;

	// BrnOnlineSelectRoute.cpp:59
	extern const char[13] KAC_SELECT_ROUTES_COMPONENT;

	// BrnOnlineSelectRoute.cpp:60
	extern const char[9] KAC_MENU_OPTIONS_COMPONENT;

	// BrnOnlineSelectRoute.cpp:64
	extern const char[20] KAC_CHECKPOINT_MENU_ANIMATOR_COMPONENT;

	// BrnOnlineSelectRoute.cpp:65
	extern const char[12] KAC_CURSOR_ANIMATOR_COMPONENT;

	// BrnOnlineSelectRoute.cpp:66
	extern const char[16] KAC_EVENT_NAME_ANIMATOR_COMPONENT;

	// BrnOnlineSelectRoute.cpp:72
	extern const char[16] KAC_CURRENT_ROUND_DISPLAY_COMPONENT;

	// BrnOnlineSelectRoute.cpp:74
	extern const char[11] KAC_EVENT_NAME_VALUE_COMPONENT;

	// BrnOnlineSelectRoute.cpp:75
	extern const char[10] KAC_TIME_VALUE_COMPONENT;

	// BrnOnlineSelectRoute.cpp:76
	extern const char[14] KAC_DISTANCE_VALUE_COMPONENT;

	// BrnOnlineSelectRoute.cpp:68
	extern const char[9] KAC_TITLE_TEXT_COMPONENT;

	// BrnOnlineSelectRoute.cpp:67
	extern const char[7] KAC_HELP_BAR_COMPONENT;

	// BrnOnlineSelectRoute.cpp:86
	extern const char[22] KAC_ROUTE_DISTANCE_STRINGID;

	// BrnOnlineSelectRoute.cpp:87
	extern const char[30] KAC_ROUTE_MIMIUMUM_DISTANCE_STRINGID;

	// BrnOnlineSelectRoute.cpp:88
	extern const char[38] KAC_EVENT_NAME_VALUE_STRINGID;

	// BrnOnlineSelectRoute.cpp:89
	extern const char[32] KAC_TIME_VALUE_STRINGID;

	// BrnOnlineSelectRoute.cpp:90
	extern const char[36] KAC_DISTANCE_VALUE_STRINGID;

	// BrnOnlineSelectRoute.cpp:92
	extern const char[24] KAC_ROUND_STRING_FORMAT_ID;

	// BrnOnlineSelectRoute.cpp:93
	extern const char[27] KAC_RR_ROUND_STRING_FORMAT_ID;

	// BrnOnlineSelectRoute.cpp:94
	extern const char[22] KAC_CURRENT_ROUND_STRING_ID;

	// BrnOnlineSelectRoute.cpp:95
	extern const char[23] KAC_MAIN_TITLE_STRING_ID;

	// BrnOnlineSelectRoute.cpp:96
	extern const char[21] KAC_EDIT_ROUTE_TITLE_STRING_ID;

	// BrnOnlineSelectRoute.cpp:101
	extern const BrnGui::OnlineSelectRoute::HelpBarItem[12] KA_HELPBAR_ITEMS;

	// BrnOnlineSelectRoute.cpp:99
	extern const rw::math::vpu::Vector2 K_MAP_LONG_DISPLAY_RECT;

	// BrnOnlineSelectRoute.cpp:117
	extern const BrnGui::OnlineSelectRoute::MenuOptions[4] KA_MENU_OPTIONS;

	// BrnOnlineSelectRoute.cpp:125
	extern const BrnGui::OnlineSelectRoute::MenuOptions[3] KA_FINAL_MENU_OPTIONS;

	// BrnOnlineSelectRoute.cpp:132
	extern const char *[2] KPC_ANIMATION_STATES;

	// BrnOnlineSelectRoute.h:211
	BrnGui::SelectRoutes mSelectRoutes;

	// BrnOnlineSelectRoute.h:212
	BrnGui::MenuComponent mMenuOptions;

	// BrnOnlineSelectRoute.h:213
	BrnGui::TextField mCurrentRoundDisplay;

	// BrnOnlineSelectRoute.h:214
	BrnGui::TextField mEventNameValue;

	// BrnOnlineSelectRoute.h:215
	BrnGui::TextField mTimeValue;

	// BrnOnlineSelectRoute.h:216
	BrnGui::TextField mDistanceValue;

	// BrnOnlineSelectRoute.h:217
	BrnGui::TextField mTitleText;

	// BrnOnlineSelectRoute.h:218
	BrnGui::AnimationComponent mCheckpointMenuAnimator;

	// BrnOnlineSelectRoute.h:219
	BrnGui::AnimationComponent mCursorAnimator;

	// BrnOnlineSelectRoute.h:220
	BrnGui::AnimationComponent mEventNameAnimator;

	// BrnOnlineSelectRoute.h:221
	BrnGui::HelpBar mHelpBar;

	// BrnOnlineSelectRoute.h:223
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineSelectRoute.h:225
	Random mRandom;

	// BrnOnlineSelectRoute.h:228
	MapIconManager * mpIconManager;

	// BrnOnlineSelectRoute.h:229
	BrnGui::MapIconManager::OwnerId mIconManagerOwnerId;

	// BrnOnlineSelectRoute.h:230
	BrnGui::MainMapComponent mMainMapComponent;

	// BrnOnlineSelectRoute.h:231
	Vector2 mv2WorldCenterPoint;

	// BrnOnlineSelectRoute.cpp:62
	extern const char[11] macSatNavIconBaseName;

	// BrnOnlineSelectRoute.h:233
	extern const int32_t KAC_ONLINEROUTEMAP_NUMICONS = 50;

	// BrnOnlineSelectRoute.h:235
	BrnGui::CrashNavBorough mCrashNavBorough;

	// BrnOnlineSelectRoute.cpp:61
	extern const char[11] macCrashNavBoroughName;

	// BrnOnlineSelectRoute.h:238
	BrnGui::GuiCursor mCursor;

	// BrnOnlineSelectRoute.cpp:63
	extern const char[10] mCursorName;

	// BrnOnlineSelectRoute.cpp:70
	extern const float32_t KF_CURSOR_SPEED;

	// BrnOnlineSelectRoute.h:242
	BrnGui::OnlineSelectRoute::ESubState meSubState;

	// BrnOnlineSelectRoute.h:244
	uint32_t muSavedCheckpointId;

	// BrnOnlineSelectRoute.h:245
	uint32_t muCurrentPresetEventID;

	// BrnOnlineSelectRoute.h:247
	bool mbWaitingForRoute;

	// BrnOnlineSelectRoute.h:248
	bool mbEditingNewCheckpoint;

	// BrnOnlineSelectRoute.h:249
	bool mbRouteEdited;

public:
	// BrnOnlineSelectRoute.cpp:155
	virtual void OnEnter();

	// BrnOnlineSelectRoute.cpp:382
	// Declaration
	virtual void OnLeave() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineSelectRoute.cpp:407
		using namespace CgsDev::Message;

	}

	// BrnOnlineSelectRoute.cpp:221
	virtual void Update();

	// BrnOnlineSelectRoute.h:89
	const char * GetCurrentlySelectedGame();

	// BrnOnlineSelectRoute.h:93
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineSelectRoute.cpp:1335
	void HandleInGameEvent(const CgsModule::Event *);

	// BrnOnlineSelectRoute.cpp:1361
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlineSelectRoute.cpp:494
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineSelectRoute.cpp:604
	void HandleControllerInputSelectMainOption(const GuiEventControllerInputPressed *);

	// BrnOnlineSelectRoute.cpp:741
	void HandleControllerInputSelectCheckpoint(const GuiEventControllerInputPressed *);

	// BrnOnlineSelectRoute.cpp:772
	void HandleControllerInputSelectPoint(const GuiEventControllerInputPressed *);

	// BrnOnlineSelectRoute.cpp:922
	void HandleControllerInputSelectPresetEvent(const GuiEventControllerInputPressed *);

	// BrnOnlineSelectRoute.cpp:1034
	void UpdateAfterToggleChange(BrnGui::SelectRoutes::EChangedItem);

	// BrnOnlineSelectRoute.cpp:1377
	// Declaration
	void HandleGuiCacheEvent(const GuiEventCache *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineSelectRoute.cpp:1391
		using namespace CgsDev::Message;

	}

	// BrnOnlineSelectRoute.cpp:2398
	void HandleControllerAxis(const GuiEventControllerAxis *);

	// BrnOnlineSelectRoute.cpp:426
	void CheckForCompletedLoads();

	// BrnOnlineSelectRoute.cpp:1613
	void RandomiseLandmarks(GuiEventSpecificPresetRaces *);

	// BrnOnlineSelectRoute.cpp:1698
	void ShowMainMenu();

	// BrnOnlineSelectRoute.cpp:1766
	void ShowSelectCheckpointMenu();

	// BrnOnlineSelectRoute.cpp:1813
	void ShowPresetEvents();

	// BrnOnlineSelectRoute.cpp:1858
	void SetupPreSetRaceToggle();

	// BrnOnlineSelectRoute.cpp:570
	void SetupNormalRoute();

	// BrnOnlineSelectRoute.cpp:540
	void SetupRouteWithoutCheckpoints();

	// BrnOnlineSelectRoute.cpp:2026
	void UpdateIconManager();

	// BrnOnlineSelectRoute.cpp:2432
	void UpdateCursor();

	// BrnOnlineSelectRoute.cpp:2070
	void PlaceCursorOnLandmark();

	// BrnOnlineSelectRoute.cpp:2147
	void DrawRoute();

	// BrnOnlineSelectRoute.cpp:2196
	void ClearRoute();

	// BrnOnlineSelectRoute.cpp:1983
	float32_t CalculateZoomFactor();

	// BrnOnlineSelectRoute.cpp:1886
	int32_t GetNumBoundingBoxCoords() const;

	// BrnOnlineSelectRoute.cpp:1921
	Vector3 GetZoomBoundingBoxCoord(int32_t) const;

	// BrnOnlineSelectRoute.cpp:1435
	void SetupHelpBar(bool);

	// BrnOnlineSelectRoute.cpp:1257
	void SetActiveLandmarks();

	// BrnOnlineSelectRoute.cpp:2217
	void FinishedSelectingRoute();

	// BrnOnlineSelectRoute.cpp:2243
	void SelectRound(BrnGui::OnlineSelectRoute::ESelectRound);

	// BrnOnlineSelectRoute.cpp:2311
	void DisplayTooShortRouteMessage();

	// BrnOnlineSelectRoute.cpp:2342
	void DisplayCurrentRound();

	// BrnOnlineSelectRoute.cpp:2518
	void DisplayEventName();

}

// BrnOnlineSelectRoute.h:160
extern const int32_t KI_MAX_HELP_BAR_ITEMS = 5;

// BrnOnlineSelectRoute.h:233
extern const int32_t KAC_ONLINEROUTEMAP_NUMICONS = 50;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineSelectRoute {
		// BrnOnlineSelectRoute.h:70
		struct HelpBarItem {
			// BrnOnlineSelectRoute.h:72
			const char * mpcText;

			// BrnOnlineSelectRoute.h:73
			BrnGui::ButtonIconComponent::EPadButton meButton;

		}

		// BrnOnlineSelectRoute.h:142
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTION_NEXT = 0,
			E_MAIN_MENU_OPTION_EDIT = 1,
			E_MAIN_MENU_OPTION_PRESET = 2,
			E_MAIN_MENU_OPTION_FINISHED = 3,
			E_MAIN_MENU_OPTION_COUNT = 4,
		}

		// BrnOnlineSelectRoute.h:153
		struct MenuOptions {
			// BrnOnlineSelectRoute.h:155
			BrnGui::OnlineSelectRoute::EMainMenuOptions meMenuOption;

			// BrnOnlineSelectRoute.h:156
			const char * mpcText;

		}

	public:
		OnlineSelectRoute();

	private:
		// BrnOnlineSelectRoute.h:162
		extern int32_t[] maiEventToObserve;

		// BrnOnlineSelectRoute.h:163
		extern const int32_t miNumEventsObserved;

		// BrnOnlineSelectRoute.h:164
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineSelectRoute.h:165
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineSelectRoute.h:167
		extern const int32_t KI_MAX_NUM_LANDMARKS;

		// BrnOnlineSelectRoute.h:169
		extern const float32_t KF_ONE_OVER_AVERAGE_METRES_PER_SECOND;

		// BrnOnlineSelectRoute.h:170
		extern const float32_t KF_EVENT_ICON_FADE_TIME;

		// BrnOnlineSelectRoute.h:171
		extern const float32_t KF_SECONDS_ROUND_VALUE;

		// BrnOnlineSelectRoute.h:173
		extern char[] KAC_SELECT_ROUTES_COMPONENT;

		// BrnOnlineSelectRoute.h:174
		extern char[] KAC_MENU_OPTIONS_COMPONENT;

		// BrnOnlineSelectRoute.h:175
		extern char[] KAC_CHECKPOINT_MENU_ANIMATOR_COMPONENT;

		// BrnOnlineSelectRoute.h:176
		extern char[] KAC_CURSOR_ANIMATOR_COMPONENT;

		// BrnOnlineSelectRoute.h:177
		extern char[] KAC_EVENT_NAME_ANIMATOR_COMPONENT;

		// BrnOnlineSelectRoute.h:179
		extern char[] KAC_CURRENT_ROUND_DISPLAY_COMPONENT;

		// BrnOnlineSelectRoute.h:181
		extern char[] KAC_EVENT_NAME_VALUE_COMPONENT;

		// BrnOnlineSelectRoute.h:182
		extern char[] KAC_TIME_VALUE_COMPONENT;

		// BrnOnlineSelectRoute.h:183
		extern char[] KAC_DISTANCE_VALUE_COMPONENT;

		// BrnOnlineSelectRoute.h:184
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnOnlineSelectRoute.h:186
		extern char[] KAC_HELP_BAR_COMPONENT;

		// BrnOnlineSelectRoute.h:189
		extern char[] KAC_ROUTE_DISTANCE_STRINGID;

		// BrnOnlineSelectRoute.h:190
		extern char[] KAC_ROUTE_MIMIUMUM_DISTANCE_STRINGID;

		// BrnOnlineSelectRoute.h:192
		extern char[] KAC_EVENT_NAME_VALUE_STRINGID;

		// BrnOnlineSelectRoute.h:193
		extern char[] KAC_TIME_VALUE_STRINGID;

		// BrnOnlineSelectRoute.h:194
		extern char[] KAC_DISTANCE_VALUE_STRINGID;

		// BrnOnlineSelectRoute.h:195
		extern char[] KAC_ROUND_STRING_FORMAT_ID;

		// BrnOnlineSelectRoute.h:196
		extern char[] KAC_RR_ROUND_STRING_FORMAT_ID;

		// BrnOnlineSelectRoute.h:197
		extern char[] KAC_CURRENT_ROUND_STRING_ID;

		// BrnOnlineSelectRoute.h:198
		extern char[] KAC_MAIN_TITLE_STRING_ID;

		// BrnOnlineSelectRoute.h:199
		extern char[] KAC_EDIT_ROUTE_TITLE_STRING_ID;

		// BrnOnlineSelectRoute.h:201
		extern BrnGui::OnlineSelectRoute::HelpBarItem[] KA_HELPBAR_ITEMS;

		// BrnOnlineSelectRoute.h:203
		extern const rw::math::vpu::Vector2 K_MAP_LONG_DISPLAY_RECT;

		// BrnOnlineSelectRoute.h:205
		extern BrnGui::OnlineSelectRoute::MenuOptions[] KA_MENU_OPTIONS;

		// BrnOnlineSelectRoute.h:206
		extern BrnGui::OnlineSelectRoute::MenuOptions[] KA_FINAL_MENU_OPTIONS;

		// BrnOnlineSelectRoute.h:232
		extern char[] macSatNavIconBaseName;

		// BrnOnlineSelectRoute.h:236
		extern char[] macCrashNavBoroughName;

		// BrnOnlineSelectRoute.h:239
		extern char[] mCursorName;

		// BrnOnlineSelectRoute.h:240
		extern const float32_t KF_CURSOR_SPEED;

	}

}

// BrnOnlineSelectRoute.h:48
void BrnGui::OnlineSelectRoute::OnlineSelectRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

