// BrnOnlineScoreboards.h:124
extern const int32_t KI_MAX_ROAD_STRING = 20;

// BrnOnlineScoreboards.h:133
extern int32_t[] maiEventToObserve;

// BrnOnlineScoreboards.h:134
extern const int32_t miNumEventsObserved;

// BrnOnlineScoreboards.h:136
extern sResourceTuple[] maResourcesToLoad;

// BrnOnlineScoreboards.h:137
extern const uint32_t muNumResourcesToLoad;

// BrnOnlineScoreboards.h:139
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

// BrnOnlineScoreboards.h:165
extern const float32_t KF_DELAY_TO_REQUEST_TABLE;

// BrnOnlineScoreboards.h:174
extern char[] KAC_FILTER_GROUP_NAME;

// BrnOnlineScoreboards.h:178
extern char[] KAC_LEADERBOARD_TABLE_NAME;

// BrnOnlineScoreboards.h:183
extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_TABLE;

// BrnOnlineScoreboards.h:184
extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_FILTER;

// BrnOnlineScoreboards.h:187
extern char[] KAC_LOADING_ICON_NAME;

// BrnOnlineScoreboards.h:191
extern char[] KAC_BUTTON_ANIMATOR_NAME;

// BrnOnlineScoreboards.h:195
extern char[] KAC_TABLE_EMPTY_ANIMATOR_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineScoreboards {
		// BrnOnlineScoreboards.h:82
		enum EInternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADRESOURCES = 1,
			E_INTERNALSTATE_WFDATA = 2,
			E_INTERNALSTATE_PLAYSWF = 3,
			E_INTERNALSTATE_WFINIT = 4,
			E_INTERNALSTATE_SETUPCOMPONENTS = 5,
			E_INTERNALSTATE_RUNNING = 6,
			E_INTERNALSTATE_LEFT = 7,
			E_INTERNALSTATE_COUNT = 8,
		}

		// BrnOnlineScoreboards.h:97
		enum ELeaderboardRequestState {
			E_LEADERBOARD_REQUEST_STATE_GET_CATEGORIES = 0,
			E_LEADERBOARD_REQUEST_STATE_WF_CATEGORIES = 1,
			E_LEADERBOARD_REQUEST_STATE_GET_INDEX = 2,
			E_LEADERBOARD_REQUEST_STATE_WF_INDEX = 3,
			E_LEADERBOARD_REQUEST_STATE_GET_VARIATIONS = 4,
			E_LEADERBOARD_REQUEST_STATE_WF_VARIATIONS = 5,
			E_LEADERBOARD_REQUEST_STATE_GET_TABLE = 6,
			E_LEADERBOARD_REQUEST_STATE_WF_TABLE = 7,
			E_LEADERBOARD_REQUEST_STATE_DONE = 8,
			E_LEADERBOARD_REQUEST_STATE_COUNT = 9,
		}

		// BrnOnlineScoreboards.h:122
		struct RoadSortData {
			// BrnOnlineScoreboards.h:124
			extern const int32_t KI_MAX_ROAD_STRING = 20;

			// BrnOnlineScoreboards.h:126
			int32_t liIndex;

			// BrnOnlineScoreboards.h:127
			char[20] lacRoadString;

		}

	}

}

// BrnOnlineScoreboards.h:46
struct BrnGui::OnlineScoreboards : public CgsGui::State {
private:
	// BrnOnlineScoreboards.h:130
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineScoreboards.h:131
	BrnGui::OnlineScoreboards::EInternalState meInternalState;

	// BrnOnlineScoreboards.cpp:31
	extern const int32_t[10] maiEventToObserve;

	// BrnOnlineScoreboards.cpp:47
	extern const int32_t miNumEventsObserved = 10;

	// BrnOnlineScoreboards.cpp:49
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnOnlineScoreboards.cpp:54
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnOnlineScoreboards.h:139
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

	// BrnOnlineScoreboards.h:140
	uint32_t[4] mauExpectedComponentIds;

	// BrnOnlineScoreboards.h:141
	uint32_t muNumExpectedComponents;

	// BrnOnlineScoreboards.h:143
	int32_t[64] maiAlphabeticalRoadIndex;

	// BrnOnlineScoreboards.h:145
	BrnGui::OnlineScoreboards::ELeaderboardRequestState meLeaderboardRequestState;

	// BrnOnlineScoreboards.h:147
	int32_t miCurrentCategory;

	// BrnOnlineScoreboards.h:148
	int32_t miMaxCategories;

	// BrnOnlineScoreboards.h:149
	char[10][31] maacCategories;

	// BrnOnlineScoreboards.h:150
	const char *[10] mapcCategories;

	// BrnOnlineScoreboards.h:152
	int32_t miCurrentIndex;

	// BrnOnlineScoreboards.h:153
	int32_t miMaxIndexes;

	// BrnOnlineScoreboards.h:154
	char[10][31] maacIndexes;

	// BrnOnlineScoreboards.h:155
	const char *[10] mapcIndexes;

	// BrnOnlineScoreboards.h:157
	int32_t miCurrentVariation;

	// BrnOnlineScoreboards.h:158
	int32_t miMaxVariations;

	// BrnOnlineScoreboards.h:159
	char[66][31] maacVariations;

	// BrnOnlineScoreboards.h:160
	const char *[66] mapcVariations;

	// BrnOnlineScoreboards.h:163
	int32_t miCurrentFilterHighlighted;

	// BrnOnlineScoreboards.cpp:98
	extern const float32_t KF_DELAY_TO_REQUEST_TABLE;

	// BrnOnlineScoreboards.h:166
	float32_t mfCurrentTableWaitTime;

	// BrnOnlineScoreboards.h:168
	bool mbUsingFilters;

	// BrnOnlineScoreboards.h:169
	bool mbPerRoadLeaderboard;

	// BrnOnlineScoreboards.h:173
	BrnGui::MenuToggleGroup mFilterToggleGroup;

	// BrnOnlineScoreboards.cpp:56
	extern const char[10] KAC_FILTER_GROUP_NAME;

	// BrnOnlineScoreboards.cpp:57
	extern const char *[3] KAPC_FILTER_TITLE_STRINGS;

	// BrnOnlineScoreboards.h:177
	BrnGui::LeaderboardTableComponent mTable;

	// BrnOnlineScoreboards.cpp:64
	extern const char[9] KAC_LEADERBOARD_TABLE_NAME;

	// BrnOnlineScoreboards.cpp:66
	extern const char *[1] KAPC_HELP_BAR_TABLE;

	// BrnOnlineScoreboards.cpp:74
	extern const char *[4] KAPC_HELP_BAR_FILTER;

	// BrnOnlineScoreboards.cpp:82
	extern const BrnGui::ButtonIconComponent::EPadButton[1] KAE_HELP_BAR_TABLE;

	// BrnOnlineScoreboards.cpp:90
	extern const BrnGui::ButtonIconComponent::EPadButton[4] KAE_HELP_BAR_FILTER;

	// BrnOnlineScoreboards.h:186
	BrnGui::IconComponent mLoadingIcon;

	// BrnOnlineScoreboards.cpp:100
	extern const char[11] KAC_LOADING_ICON_NAME;

	// BrnOnlineScoreboards.h:188
	bool mbCurrentlyLoading;

	// BrnOnlineScoreboards.h:190
	BrnGui::AnimationComponent mButtonAnimator;

	// BrnOnlineScoreboards.cpp:102
	extern const char[19] KAC_BUTTON_ANIMATOR_NAME;

	// BrnOnlineScoreboards.h:193
	BrnGui::AnimationComponent mTableEmptyAnimator;

	// BrnOnlineScoreboards.h:194
	bool mbTableEmptyShowing;

	// BrnOnlineScoreboards.cpp:103
	extern const char[16] KAC_TABLE_EMPTY_ANIMATOR_NAME;

public:
	// BrnOnlineScoreboards.cpp:123
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnOnlineScoreboards.cpp:224
	virtual void OnEnter();

	// BrnOnlineScoreboards.cpp:383
	virtual void OnLeave();

	// BrnOnlineScoreboards.cpp:285
	virtual void Update();

	// BrnOnlineScoreboards.h:70
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnOnlineScoreboards.h:77
	const char * GetCurrentlySelectedGame();

private:
	// BrnOnlineScoreboards.cpp:459
	void UpdateGetCache();

	// BrnOnlineScoreboards.cpp:497
	bool UpdateWFInit();

	// BrnOnlineScoreboards.cpp:519
	void UpdateSetupComponents();

	// BrnOnlineScoreboards.cpp:541
	void UpdateRunning();

	// BrnOnlineScoreboards.cpp:590
	void UpdatePermanent();

	// BrnOnlineScoreboards.cpp:405
	void SetExpectedComponent(const char *);

	// BrnOnlineScoreboards.cpp:420
	void ClearExpectedComponent();

	// BrnOnlineScoreboards.cpp:440
	void SetExpectedAptComponentList();

	// BrnOnlineScoreboards.cpp:774
	void HandleControllerInputPressedUsingFilters(const GuiEventControllerInputPressed *);

	// BrnOnlineScoreboards.cpp:697
	void HandleControllerInputPressedUsingTable(const GuiEventControllerInputPressed *);

	// BrnOnlineScoreboards.cpp:953
	void HandleLeaderboardRequestState();

	// BrnOnlineScoreboards.cpp:1066
	// Declaration
	void HandleCategoryList(const GuiEventScoreboardResponseCategoryEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineScoreboards.cpp:1074
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1075
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1076
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1077
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1078
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1083
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1086
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1087
		using namespace CgsDev::Message;

	}

	// BrnOnlineScoreboards.cpp:1105
	// Declaration
	void HandleIndexList(const GuiEventScoreboardResponseIndexEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineScoreboards.cpp:1120
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1121
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1122
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1123
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1124
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1129
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1132
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1133
		using namespace CgsDev::Message;

	}

	// BrnOnlineScoreboards.cpp:1151
	// Declaration
	void HandleVariationList(const GuiEventScoreboardResponseVariationEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineScoreboards.cpp:1186
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1187
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1188
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1189
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1190
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1195
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1198
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1199
		using namespace CgsDev::Message;

	}

	// BrnOnlineScoreboards.cpp:1217
	// Declaration
	void HandleTableData(const GuiEventScoreboardResponseTableEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineScoreboards.cpp:1234
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1235
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1236
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1237
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1238
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1239
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1242
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1244
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1248
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1253
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1258
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1261
		using namespace CgsDev::Message;

		// BrnOnlineScoreboards.cpp:1262
		using namespace CgsDev::Message;

	}

	// BrnOnlineScoreboards.cpp:1277
	void SetupCategories();

	// BrnOnlineScoreboards.cpp:1299
	void SetupIndexes();

	// BrnOnlineScoreboards.cpp:1330
	void SetupVariations();

	// BrnOnlineScoreboards.cpp:1362
	void SetLoading(bool);

	// BrnOnlineScoreboards.cpp:1390
	void ShowTableEmpty(bool);

	// BrnOnlineScoreboards.cpp:183
	void BuildAlphabeticalRoadIndexes();

	// BrnOnlineScoreboards.cpp:1418
	void TriggerSound(EGameInputActions);

	// BrnOnlineScoreboards.cpp:164
	int _RoadQSortFunction(const void *, const void *);

	// BrnOnlineScoreboards.cpp:1470
	void PageUp(bool);

	// BrnOnlineScoreboards.cpp:1503
	void PageDown(bool);

	// BrnOnlineScoreboards.h:333
	bool CanPageUp() const;

	// BrnOnlineScoreboards.h:340
	bool CanPageDown() const;

	// BrnOnlineScoreboards.cpp:1535
	void SetupButtons();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineScoreboards {
	public:
		OnlineScoreboards();

	private:
		// BrnOnlineScoreboards.h:133
		extern int32_t[] maiEventToObserve;

		// BrnOnlineScoreboards.h:134
		extern const int32_t miNumEventsObserved;

		// BrnOnlineScoreboards.h:136
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOnlineScoreboards.h:137
		extern const uint32_t muNumResourcesToLoad;

		// BrnOnlineScoreboards.h:139
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

		// BrnOnlineScoreboards.h:165
		extern const float32_t KF_DELAY_TO_REQUEST_TABLE;

		// BrnOnlineScoreboards.h:174
		extern char[] KAC_FILTER_GROUP_NAME;

		// BrnOnlineScoreboards.h:178
		extern char[] KAC_LEADERBOARD_TABLE_NAME;

		// BrnOnlineScoreboards.h:183
		extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_TABLE;

		// BrnOnlineScoreboards.h:184
		extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_FILTER;

		// BrnOnlineScoreboards.h:187
		extern char[] KAC_LOADING_ICON_NAME;

		// BrnOnlineScoreboards.h:191
		extern char[] KAC_BUTTON_ANIMATOR_NAME;

		// BrnOnlineScoreboards.h:195
		extern char[] KAC_TABLE_EMPTY_ANIMATOR_NAME;

	}

}

// BrnOnlineScoreboards.h:46
void BrnGui::OnlineScoreboards::OnlineScoreboards() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

