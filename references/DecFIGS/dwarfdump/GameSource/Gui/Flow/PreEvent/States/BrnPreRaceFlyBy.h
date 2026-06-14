// BrnPreRaceFlyBy.h:109
extern const int32_t KI_MAX_LINES_DESCRIPTION_TEXT = 5;

// BrnPreRaceFlyBy.h:111
extern sResourceTuple[] maResourcesToLoad;

// BrnPreRaceFlyBy.h:112
extern uint32_t muNumResourcesToLoad;

// BrnPreRaceFlyBy.h:116
extern int32_t[] maiEventToObserve;

// BrnPreRaceFlyBy.h:117
extern const int32_t miNumEventsObserved;

// BrnPreRaceFlyBy.h:119
extern char[] KAC_EVENT_NAME_TEXTFIELD_NAME;

// BrnPreRaceFlyBy.h:120
extern char[] KAC_MODE_TYPE_TEXTFIELD_NAME;

// BrnPreRaceFlyBy.h:124
extern char[] KAC_LARGE_EVENT_ICON_NAME;

// BrnPreRaceFlyBy.h:126
extern char[] KAC_STATE_ANIMATOR_NAME;

// BrnPreRaceFlyBy.h:128
extern char[] KAC_STATE_COMPONENT_NAME;

// BrnPreRaceFlyBy.h:130
extern float32_t[] KAF_MODE_TYPE_PRE_EVENT_DURATION;

// BrnPreRaceFlyBy.h:132
extern const float32_t KF_MAP_PAN_TIME;

// BrnPreRaceFlyBy.h:133
extern const float32_t KF_MAP_PAN_RESET_TIME;

// BrnPreRaceFlyBy.h:136
extern float32_t[] KAF_ICON_ANIMATION_TIME;

// BrnPreRaceFlyBy.h:137
extern float32_t[] KAF_ICON_ANIMATION_DELAY;

// BrnPreRaceFlyBy.h:139
extern const rw::math::vpu::Vector4 KV4_VIEW_RECT;

// BrnPreRaceFlyBy.h:140
extern const rw::math::vpu::Vector4 KV4_PADDING_RECT;

// BrnPreRaceFlyBy.h:179
extern const int32_t KI_PRERACEMAP_NUMICONS;

// BrnPreRaceFlyBy.h:181
extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_X;

// BrnPreRaceFlyBy.h:182
extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_Y;

// BrnPreRaceFlyBy.h:183
extern const rw::math::vpu::Vector2 K_PRERACE_LONG_DISPLAY_RECT;

// BrnPreRaceFlyBy.h:184
extern const rw::math::vpu::Vector2 K_PRERACE_TALL_DISPLAY_RECT;

// BrnPreRaceFlyBy.h:186
extern const float32_t KF_MAP_FADEIN_TIME;

// BrnPreRaceFlyBy.h:187
extern const float32_t KF_MAP_FADEOUT_TIME;

// BrnPreRaceFlyBy.h:193
extern char[] macSatNavIconBaseName;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PreRaceFlyByState {
		// BrnPreRaceFlyBy.h:84
		enum EPreRaceState {
			E_PRERACE_INVALID = -1,
			E_PRERACE_UNLOADED = 0,
			E_PRERACE_LOADING_COMPONENTS = 1,
			E_PRERACE_ACTIVE_MAP_ICON_DELAY = 2,
			E_PRERACE_ACTIVE_EVENT_TITLES = 3,
			E_PRERACE_ACTIVE_MAP_INTRO = 4,
			E_PRERACE_ACTIVE_SHOW_MAP = 5,
			E_PRERACE_ACTIVE_MEDALS = 6,
			E_PRERACE_ACTIVE_TRANS_OUT = 7,
			E_PRERACE_ACTIVE_DONE = 8,
			E_PRERACE_COUNT = 9,
		}

	}

}

// BrnPreRaceFlyBy.h:57
struct BrnGui::PreRaceFlyByState : public CgsGui::State {
private:
	// BrnPreRaceFlyBy.h:109
	extern const int32_t KI_MAX_LINES_DESCRIPTION_TEXT = 5;

	// BrnPreRaceFlyBy.cpp:53
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnPreRaceFlyBy.cpp:59
	extern uint32_t muNumResourcesToLoad;

	// BrnPreRaceFlyBy.cpp:61
	extern sResourceTuple[10] maPerGamemodeScreens;

	// BrnPreRaceFlyBy.cpp:33
	extern const int32_t[8] maiEventToObserve;

	// BrnPreRaceFlyBy.cpp:51
	extern const int32_t miNumEventsObserved = 8;

	// BrnPreRaceFlyBy.cpp:76
	extern const char[10] KAC_EVENT_NAME_TEXTFIELD_NAME;

	// BrnPreRaceFlyBy.cpp:77
	extern const char[9] KAC_MODE_TYPE_TEXTFIELD_NAME;

	// BrnPreRaceFlyBy.cpp:79
	extern const char *[5] KAAC_EVENT_DESC_TEXTFIELD_NAMES;

	// BrnPreRaceFlyBy.cpp:88
	extern const char[9] KAC_LARGE_EVENT_ICON_NAME;

	// BrnPreRaceFlyBy.cpp:90
	extern const char[14] KAC_STATE_ANIMATOR_NAME;

	// BrnPreRaceFlyBy.cpp:92
	extern const char[12] KAC_STATE_COMPONENT_NAME;

	// BrnPreRaceFlyBy.cpp:96
	extern const float32_t[10] KAF_MODE_TYPE_PRE_EVENT_DURATION;

	// BrnPreRaceFlyBy.cpp:110
	extern const float32_t KF_MAP_PAN_TIME;

	// BrnPreRaceFlyBy.cpp:111
	extern const float32_t KF_MAP_PAN_RESET_TIME;

	// BrnPreRaceFlyBy.cpp:132
	extern const float32_t[10] KAF_ICON_ANIMATION_TIME;

	// BrnPreRaceFlyBy.cpp:146
	extern const float32_t[10] KAF_ICON_ANIMATION_DELAY;

	// BrnPreRaceFlyBy.cpp:161
	extern const rw::math::vpu::Vector4 KV4_VIEW_RECT;

	// BrnPreRaceFlyBy.cpp:166
	extern const rw::math::vpu::Vector4 KV4_PADDING_RECT;

	// BrnPreRaceFlyBy.h:142
	BrnGui::TextField mEventName;

	// BrnPreRaceFlyBy.h:143
	BrnGui::TextField mModeType;

	// BrnPreRaceFlyBy.h:145
	BrnGui::TextField[5] mEventDescriptionText;

	// BrnPreRaceFlyBy.h:154
	BrnGui::IconComponent mLargeEventIcon;

	// BrnPreRaceFlyBy.h:156
	BrnGui::AnimationComponent mStateAnimator;

	// BrnPreRaceFlyBy.h:158
	sResourceTuple mLargeIconResource;

	// BrnPreRaceFlyBy.h:160
	BrnGui::PreRaceFlyByState::EPreRaceState meCurrentState;

	// BrnPreRaceFlyBy.h:162
	float32_t mfTimeRemaining;

	// BrnPreRaceFlyBy.h:163
	bool mbEndRequestSent;

	// BrnPreRaceFlyBy.h:165
	bool mbDoMapPan;

	// BrnPreRaceFlyBy.h:169
	float32_t mfIconAnimationStartTime;

	// BrnPreRaceFlyBy.h:171
	BrnGui::GuiCache * mpGuiCache;

	// BrnPreRaceFlyBy.h:174
	MapIconManager * mpIconManager;

	// BrnPreRaceFlyBy.h:175
	BrnGui::MapIconManager::OwnerId mIconManagerOwnerId;

	// BrnPreRaceFlyBy.h:176
	BrnGui::MainMapComponent mMainMapComponent;

	// BrnPreRaceFlyBy.h:177
	Vector2 mv2WorldCenterPoint;

	// BrnPreRaceFlyBy.cpp:120
	extern const int32_t KI_PRERACEMAP_NUMICONS = 16;

	// BrnPreRaceFlyBy.cpp:122
	extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_X;

	// BrnPreRaceFlyBy.cpp:123
	extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_Y;

	// BrnPreRaceFlyBy.cpp:126
	extern const rw::math::vpu::Vector2 K_PRERACE_LONG_DISPLAY_RECT;

	// BrnPreRaceFlyBy.cpp:127
	extern const rw::math::vpu::Vector2 K_PRERACE_TALL_DISPLAY_RECT;

	// BrnPreRaceFlyBy.cpp:129
	extern const float32_t KF_MAP_FADEIN_TIME;

	// BrnPreRaceFlyBy.cpp:130
	extern const float32_t KF_MAP_FADEOUT_TIME;

	// BrnPreRaceFlyBy.cpp:117
	extern const char[11] macSatNavIconBaseName;

	// BrnPreRaceFlyBy.h:196
	bool mbHiddenDueToPause;

	// BrnPreRaceFlyBy.h:198
	int32_t miPreviousIconCount;

public:
	// BrnPreRaceFlyBy.cpp:187
	// Declaration
	virtual void OnEnter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPreRaceFlyBy.cpp:279
		using namespace CgsDev::Message;

	}

	// BrnPreRaceFlyBy.cpp:565
	// Declaration
	virtual void OnLeave() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPreRaceFlyBy.cpp:623
		using namespace CgsDev::Message;

	}

	// BrnPreRaceFlyBy.cpp:308
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPreRaceFlyBy.cpp:514
		using namespace CgsDev::Message;

	}

	// BrnPreRaceFlyBy.h:76
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnPreRaceFlyBy.cpp:638
	void SetupComponents();

	// BrnPreRaceFlyBy.cpp:722
	void TriggerExitState();

	// BrnPreRaceFlyBy.cpp:742
	void AppendExpectedComponents();

	// BrnPreRaceFlyBy.cpp:1101
	void GetLandmarkIDAndDistrict(LandmarkIndex *, BrnWorld::EDistrict *);

	// BrnPreRaceFlyBy.cpp:1658
	void UpdateMainMap();

	// BrnPreRaceFlyBy.cpp:1671
	void SetupMapForEvent();

	// BrnPreRaceFlyBy.cpp:1689
	void SetEventIconResource();

	// BrnPreRaceFlyBy.cpp:1763
	float32_t CalculateZoomFactor();

	// BrnPreRaceFlyBy.cpp:1874
	void UpdateIconManager();

	// BrnPreRaceFlyBy.h:331
	bool IsMapApplicableToGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPreRaceFlyBy.h:366
	bool IsDestinationIconApplicableToGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPreRaceFlyBy.h:396
	bool IsMapPanApplicableToGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPreRaceFlyBy.h:427
	float32_t FindAngleInRange(float32_t, float32_t, float32_t);

	// BrnPreRaceFlyBy.cpp:1128
	void SetRaceDescription();

	// BrnPreRaceFlyBy.cpp:1203
	void SetRoadRageDescription();

	// BrnPreRaceFlyBy.cpp:1266
	void SetFreestyleDescription();

	// BrnPreRaceFlyBy.cpp:1346
	void SetMarkedManDescription();

	// BrnPreRaceFlyBy.cpp:1451
	void SetBurningRouteDescription();

	// BrnPreRaceFlyBy.cpp:1596
	BrnGui::ECompassPoints FindEventDirection();

	// BrnPreRaceFlyBy.cpp:795
	void HandleIncomingEvents();

	// BrnPreRaceFlyBy.cpp:947
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnPreRaceFlyBy.cpp:979
	void HandlePreRaceTriggerEvent(const GuiEventPreraceTrigger *);

	// BrnPreRaceFlyBy.cpp:996
	void HandleAptEvents(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PreRaceFlyByState {
	public:
		PreRaceFlyByState();

	private:
		// BrnPreRaceFlyBy.h:109
		extern const int32_t KI_MAX_LINES_DESCRIPTION_TEXT = 5;

		// BrnPreRaceFlyBy.h:111
		extern sResourceTuple[] maResourcesToLoad;

		// BrnPreRaceFlyBy.h:112
		extern uint32_t muNumResourcesToLoad;

		// BrnPreRaceFlyBy.h:116
		extern int32_t[] maiEventToObserve;

		// BrnPreRaceFlyBy.h:117
		extern const int32_t miNumEventsObserved;

		// BrnPreRaceFlyBy.h:119
		extern char[] KAC_EVENT_NAME_TEXTFIELD_NAME;

		// BrnPreRaceFlyBy.h:120
		extern char[] KAC_MODE_TYPE_TEXTFIELD_NAME;

		// BrnPreRaceFlyBy.h:124
		extern char[] KAC_LARGE_EVENT_ICON_NAME;

		// BrnPreRaceFlyBy.h:126
		extern char[] KAC_STATE_ANIMATOR_NAME;

		// BrnPreRaceFlyBy.h:128
		extern char[] KAC_STATE_COMPONENT_NAME;

		// BrnPreRaceFlyBy.h:130
		extern float32_t[] KAF_MODE_TYPE_PRE_EVENT_DURATION;

		// BrnPreRaceFlyBy.h:132
		extern const float32_t KF_MAP_PAN_TIME;

		// BrnPreRaceFlyBy.h:133
		extern const float32_t KF_MAP_PAN_RESET_TIME;

		// BrnPreRaceFlyBy.h:136
		extern float32_t[] KAF_ICON_ANIMATION_TIME;

		// BrnPreRaceFlyBy.h:137
		extern float32_t[] KAF_ICON_ANIMATION_DELAY;

		// BrnPreRaceFlyBy.h:139
		extern const rw::math::vpu::Vector4 KV4_VIEW_RECT;

		// BrnPreRaceFlyBy.h:140
		extern const rw::math::vpu::Vector4 KV4_PADDING_RECT;

		// BrnPreRaceFlyBy.h:179
		extern const int32_t KI_PRERACEMAP_NUMICONS;

		// BrnPreRaceFlyBy.h:181
		extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_X;

		// BrnPreRaceFlyBy.h:182
		extern const float32_t KF_PRERACE_MAP_VIEW_BUFFERZONE_Y;

		// BrnPreRaceFlyBy.h:183
		extern const rw::math::vpu::Vector2 K_PRERACE_LONG_DISPLAY_RECT;

		// BrnPreRaceFlyBy.h:184
		extern const rw::math::vpu::Vector2 K_PRERACE_TALL_DISPLAY_RECT;

		// BrnPreRaceFlyBy.h:186
		extern const float32_t KF_MAP_FADEIN_TIME;

		// BrnPreRaceFlyBy.h:187
		extern const float32_t KF_MAP_FADEOUT_TIME;

		// BrnPreRaceFlyBy.h:193
		extern char[] macSatNavIconBaseName;

	}

}

// BrnPreRaceFlyBy.h:57
void BrnGui::PreRaceFlyByState::PreRaceFlyByState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

