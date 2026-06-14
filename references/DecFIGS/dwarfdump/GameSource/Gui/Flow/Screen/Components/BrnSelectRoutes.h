// BrnSelectRoutes.h:50
extern const int32_t KI_MAX_CHECKPOINTS = 17;

// BrnSelectRoutes.h:51
extern const float32_t KF_MIN_ROUTE_DISTANCE;

// BrnSelectRoutes.h:52
extern const float32_t KF_MIN_CHECKPOINT_DISTANCE;

// BrnSelectRoutes.h:200
extern const int32_t KI_NUM_DISPLAYABLE_CHECKPOINTS;

// BrnSelectRoutes.h:202
extern char[] KAC_MENU_OPTIONS_COMPONENT;

// BrnSelectRoutes.h:203
extern char[] KAC_UP_ARROW_COMPONENT;

// BrnSelectRoutes.h:204
extern char[] KAC_DOWN_ARROW_COMPONENT;

// BrnSelectRoutes.h:206
extern char[] KAC_ADD_ROUND_STRING_ID;

// BrnSelectRoutes.h:207
extern char[] KAC_DONE_STRING_ID;

// BrnSelectRoutes.h:208
extern char[] KAC_ROUND_STRING_ID;

// BrnSelectRoutes.h:209
extern char[] KAC_ROUND_STRING_FORMAT_ID;

// BrnSelectRoutes.h:211
extern char[] KAC_COUNTY_TITLE_STRING_ID;

// BrnSelectRoutes.h:212
extern char[] KAC_START_POINT_TITLE_STRING_ID;

// BrnSelectRoutes.h:213
extern char[] KAC_CHECKPOINT_TITLE_STRING_ID;

// BrnSelectRoutes.h:214
extern char[] KAC_FINISH_POINT_TITLE_STRING_ID;

// BrnSelectRoutes.h:215
extern char[] KAC_ROUTE_TITLE_STRING_ID;

// BrnSelectRoutes.h:216
extern char[] KAC_RANDOM_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectRoutes {
		// BrnSelectRoutes.h:54
		enum EChangedItem {
			E_CHANGED_ITEM_LANDMARK = 0,
			E_CHANGED_ITEM_CHECKPOINT = 1,
			E_CHANGED_ITEM_EDIT_CHECKPOINT = 2,
			E_CHANGED_ITEM_EDIT_NEW_CHECKPOINT = 3,
			E_CHANGED_ITEM_FINISHED_EDIT = 4,
			E_CHANGED_ITEM_COUNT = 5,
		}

		// BrnSelectRoutes.h:65
		enum EMenuItemType {
			E_MENU_ITEM_TYPE_START_POINT = 0,
			E_MENU_ITEM_TYPE_CHECKPOINT = 1,
			E_MENU_ITEM_TYPE_ADD_CHECKPOINT = 2,
			E_MENU_ITEM_TYPE_FINISH_POINT = 3,
			E_MENU_ITEM_TYPE_DONE = 4,
			E_MENU_ITEM_TYPE_COUNT = 5,
		}

		// BrnSelectRoutes.h:193
		struct CheckpointData {
			// BrnSelectRoutes.h:195
			LandmarkIndex[10] maLandmarkIndex;

			// BrnSelectRoutes.h:196
			LightTriggerId[10] maStartLightTriggerID;

			// BrnSelectRoutes.h:197
			BrnWorld::ECounty[10] maeSelectedCounty;

		}

	}

}

// BrnSelectRoutes.h:46
struct BrnGui::SelectRoutes : public CgsGui::GuiComponent {
	// BrnSelectRoutes.h:49
	extern const int32_t KI_MAX_DISPLAYABLE_CHECKPOINTS = 4;

	// BrnSelectRoutes.h:50
	extern const int32_t KI_MAX_CHECKPOINTS = 17;

	// BrnSelectRoutes.cpp:38
	extern const float32_t KF_MIN_ROUTE_DISTANCE;

	// BrnSelectRoutes.cpp:39
	extern const float32_t KF_MIN_CHECKPOINT_DISTANCE;

private:
	// BrnSelectRoutes.cpp:36
	extern const int32_t KI_NUM_DISPLAYABLE_CHECKPOINTS = 6;

	// BrnSelectRoutes.cpp:25
	extern const char[15] KAC_MENU_OPTIONS_COMPONENT;

	// BrnSelectRoutes.cpp:26
	extern const char[13] KAC_UP_ARROW_COMPONENT;

	// BrnSelectRoutes.cpp:27
	extern const char[15] KAC_DOWN_ARROW_COMPONENT;

	// BrnSelectRoutes.cpp:29
	extern const char[30] KAC_ADD_ROUND_STRING_ID;

	// BrnSelectRoutes.cpp:30
	extern const char[24] KAC_DONE_STRING_ID;

	// BrnSelectRoutes.cpp:31
	extern const char[34] KAC_ROUND_STRING_ID;

	// BrnSelectRoutes.cpp:32
	extern const char[35] KAC_ROUND_STRING_FORMAT_ID;

	// BrnSelectRoutes.cpp:41
	extern const char[28] KAC_COUNTY_TITLE_STRING_ID;

	// BrnSelectRoutes.cpp:42
	extern const char[33] KAC_START_POINT_TITLE_STRING_ID;

	// BrnSelectRoutes.cpp:43
	extern const char[32] KAC_CHECKPOINT_TITLE_STRING_ID;

	// BrnSelectRoutes.cpp:44
	extern const char[34] KAC_FINISH_POINT_TITLE_STRING_ID;

	// BrnSelectRoutes.cpp:45
	extern const char[27] KAC_ROUTE_TITLE_STRING_ID;

	// BrnSelectRoutes.cpp:46
	extern const char[28] KAC_RANDOM_STRING_ID;

	// BrnSelectRoutes.cpp:48
	extern const char *[3] KPC_ARROW_ANIMATION_STATES;

	// BrnSelectRoutes.h:220
	BrnGui::SelectRoutes::CheckpointData[17] maCheckpointData;

	// BrnSelectRoutes.h:222
	BrnGui::MenuComponent mMenuOptions;

	// BrnSelectRoutes.h:223
	BrnGui::AnimationComponent mUpArrowAnimator;

	// BrnSelectRoutes.h:224
	BrnGui::AnimationComponent mDownArrowAnimator;

	// BrnSelectRoutes.h:226
	BrnGui::GuiCache * mpGuiCache;

	// BrnSelectRoutes.h:228
	int32_t miCurrentRound;

	// BrnSelectRoutes.h:229
	int32_t miStartItem;

	// BrnSelectRoutes.h:231
	int32_t[10] maiNumCheckpoints;

public:
	// BrnSelectRoutes.cpp:73
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSelectRoutes.cpp:453
	void Setup(const BrnGui::GuiEventNetworkGameParams *, BrnGui::GuiCache *);

	// BrnSelectRoutes.cpp:546
	void Update();

	// BrnSelectRoutes.cpp:134
	BrnGui::SelectRoutes::EChangedItem HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnSelectRoutes.cpp:118
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnSelectRoutes.h:277
	int32_t GetNumberCheckpoints(int32_t) const;

	// BrnSelectRoutes.h:285
	LandmarkIndex GetCheckpointLandmark(int32_t, int32_t) const;

	// BrnSelectRoutes.h:297
	LandmarkIndex GetCurrentlySelectedCheckpointLandmark(int32_t) const;

	// BrnSelectRoutes.h:320
	LightTriggerId GetStartLightTriggerID(int32_t) const;

	// BrnSelectRoutes.cpp:563
	uint32_t GetStartPointEventIndex(int32_t) const;

	// BrnSelectRoutes.h:326
	int32_t GetCurrentlySelectedCheckpointIndex() const;

	// BrnSelectRoutes.h:355
	void SetStartLightTriggerID(int32_t, LightTriggerId);

	// BrnSelectRoutes.h:376
	void SetCurrentlySelectedCheckpointLandmark(int32_t, LandmarkIndex);

	// BrnSelectRoutes.cpp:1172
	void SetRouteFromPresetEvent(int32_t);

	// BrnSelectRoutes.h:338
	void SetCurrentRound(int32_t);

	// BrnSelectRoutes.h:347
	int32_t GetCurrentRound() const;

	// BrnSelectRoutes.cpp:1012
	void Show();

	// BrnSelectRoutes.cpp:1156
	void Hide();

	// BrnSelectRoutes.cpp:1028
	void SetupMenuText();

	// BrnSelectRoutes.h:408
	void RemoveLastCheckpoint();

	// BrnSelectRoutes.h:438
	BrnGui::SelectRoutes::EMenuItemType GetCurrentMenuItemType() const;

	// BrnSelectRoutes.cpp:1241
	BrnGui::SelectRoutes::EMenuItemType GetMenuItemType(int32_t) const;

	// BrnSelectRoutes.cpp:1300
	void HighlightAddCheckpoint();

private:
	// BrnSelectRoutes.h:236
	void SetupCheckpointItem(int32_t);

	// BrnSelectRoutes.cpp:600
	bool SelectRandomLandmark(int32_t, BrnWorld::ECounty);

	// BrnSelectRoutes.cpp:677
	bool SelectRandomLandmarkInWorld(int32_t);

	// BrnSelectRoutes.cpp:697
	LandmarkIndex GenerateRandomLandmark(int32_t, int32_t, BrnWorld::ECounty);

	// BrnSelectRoutes.cpp:809
	LandmarkIndex GenerateRandomFinishPoint(int32_t, int32_t, BrnWorld::ECounty);

	// BrnSelectRoutes.cpp:920
	LightTriggerId GenerateRandomStartPoint(int32_t, BrnWorld::ECounty);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectRoutes {
		// BrnSelectRoutes.h:54
		enum EChangedItem {
			E_CHANGED_ITEM_LANDMARK = 0,
			E_CHANGED_ITEM_CHECKPOINT = 1,
			E_CHANGED_ITEM_EDIT_CHECKPOINT = 2,
			E_CHANGED_ITEM_EDIT_NEW_CHECKPOINT = 3,
			E_CHANGED_ITEM_FINISHED_EDIT = 4,
			E_CHANGED_ITEM_COUNT = 5,
		}

		// BrnSelectRoutes.h:65
		enum EMenuItemType {
			E_MENU_ITEM_TYPE_START_POINT = 0,
			E_MENU_ITEM_TYPE_CHECKPOINT = 1,
			E_MENU_ITEM_TYPE_ADD_CHECKPOINT = 2,
			E_MENU_ITEM_TYPE_FINISH_POINT = 3,
			E_MENU_ITEM_TYPE_DONE = 4,
			E_MENU_ITEM_TYPE_COUNT = 5,
		}

	public:
		// BrnSelectRoutes.h:347
		int32_t GetCurrentRound() const;

		// BrnSelectRoutes.h:326
		int32_t GetCurrentlySelectedCheckpointIndex() const;

		// BrnSelectRoutes.h:320
		LightTriggerId GetStartLightTriggerID(int32_t) const;

		// BrnSelectRoutes.h:285
		LandmarkIndex GetCheckpointLandmark(int32_t, int32_t) const;

		// BrnSelectRoutes.h:277
		int32_t GetNumberCheckpoints(int32_t) const;

		// BrnSelectRoutes.h:438
		BrnGui::SelectRoutes::EMenuItemType GetCurrentMenuItemType() const;

		// BrnSelectRoutes.h:297
		LandmarkIndex GetCurrentlySelectedCheckpointLandmark(int32_t) const;

		// BrnSelectRoutes.h:338
		void SetCurrentRound(int32_t);

		// BrnSelectRoutes.h:408
		void RemoveLastCheckpoint();

		// BrnSelectRoutes.h:355
		void SetStartLightTriggerID(int32_t, LightTriggerId);

		// BrnSelectRoutes.h:376
		void SetCurrentlySelectedCheckpointLandmark(int32_t, LandmarkIndex);

		// Unknown accessibility
		// BrnSelectRoutes.h:50
		extern const int32_t KI_MAX_CHECKPOINTS = 17;

		// Unknown accessibility
		// BrnSelectRoutes.h:51
		extern const float32_t KF_MIN_ROUTE_DISTANCE;

		// Unknown accessibility
		// BrnSelectRoutes.h:52
		extern const float32_t KF_MIN_CHECKPOINT_DISTANCE;

	private:
		// BrnSelectRoutes.h:200
		extern const int32_t KI_NUM_DISPLAYABLE_CHECKPOINTS;

		// BrnSelectRoutes.h:202
		extern char[] KAC_MENU_OPTIONS_COMPONENT;

		// BrnSelectRoutes.h:203
		extern char[] KAC_UP_ARROW_COMPONENT;

		// BrnSelectRoutes.h:204
		extern char[] KAC_DOWN_ARROW_COMPONENT;

		// BrnSelectRoutes.h:206
		extern char[] KAC_ADD_ROUND_STRING_ID;

		// BrnSelectRoutes.h:207
		extern char[] KAC_DONE_STRING_ID;

		// BrnSelectRoutes.h:208
		extern char[] KAC_ROUND_STRING_ID;

		// BrnSelectRoutes.h:209
		extern char[] KAC_ROUND_STRING_FORMAT_ID;

		// BrnSelectRoutes.h:211
		extern char[] KAC_COUNTY_TITLE_STRING_ID;

		// BrnSelectRoutes.h:212
		extern char[] KAC_START_POINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:213
		extern char[] KAC_CHECKPOINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:214
		extern char[] KAC_FINISH_POINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:215
		extern char[] KAC_ROUTE_TITLE_STRING_ID;

		// BrnSelectRoutes.h:216
		extern char[] KAC_RANDOM_STRING_ID;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectRoutes {
		// BrnSelectRoutes.h:193
		struct CheckpointData {
			// BrnSelectRoutes.h:195
			LandmarkIndex[10] maLandmarkIndex;

			// BrnSelectRoutes.h:196
			LightTriggerId[10] maStartLightTriggerID;

			// BrnSelectRoutes.h:197
			BrnWorld::ECounty[10] maeSelectedCounty;

		}

	public:
		SelectRoutes();

		// Unknown accessibility
		// BrnSelectRoutes.h:50
		extern const int32_t KI_MAX_CHECKPOINTS = 17;

		// Unknown accessibility
		// BrnSelectRoutes.h:51
		extern const float32_t KF_MIN_ROUTE_DISTANCE;

		// Unknown accessibility
		// BrnSelectRoutes.h:52
		extern const float32_t KF_MIN_CHECKPOINT_DISTANCE;

	private:
		// BrnSelectRoutes.h:200
		extern const int32_t KI_NUM_DISPLAYABLE_CHECKPOINTS;

		// BrnSelectRoutes.h:202
		extern char[] KAC_MENU_OPTIONS_COMPONENT;

		// BrnSelectRoutes.h:203
		extern char[] KAC_UP_ARROW_COMPONENT;

		// BrnSelectRoutes.h:204
		extern char[] KAC_DOWN_ARROW_COMPONENT;

		// BrnSelectRoutes.h:206
		extern char[] KAC_ADD_ROUND_STRING_ID;

		// BrnSelectRoutes.h:207
		extern char[] KAC_DONE_STRING_ID;

		// BrnSelectRoutes.h:208
		extern char[] KAC_ROUND_STRING_ID;

		// BrnSelectRoutes.h:209
		extern char[] KAC_ROUND_STRING_FORMAT_ID;

		// BrnSelectRoutes.h:211
		extern char[] KAC_COUNTY_TITLE_STRING_ID;

		// BrnSelectRoutes.h:212
		extern char[] KAC_START_POINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:213
		extern char[] KAC_CHECKPOINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:214
		extern char[] KAC_FINISH_POINT_TITLE_STRING_ID;

		// BrnSelectRoutes.h:215
		extern char[] KAC_ROUTE_TITLE_STRING_ID;

		// BrnSelectRoutes.h:216
		extern char[] KAC_RANDOM_STRING_ID;

	}

}

// BrnSelectRoutes.h:46
void BrnGui::SelectRoutes::SelectRoutes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

