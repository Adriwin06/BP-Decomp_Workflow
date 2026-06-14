// BrnCarSelectVehicle.h:100
extern const uint32_t muNumResourcesToLoad;

// BrnCarSelectVehicle.h:102
extern int32_t[] maiEventToObserve;

// BrnCarSelectVehicle.h:103
extern const int32_t miNumEventsObserved;

// BrnCarSelectVehicle.h:120
extern char[] KAC_SPEED_STATS_BAR_NAME;

// BrnCarSelectVehicle.h:121
extern char[] KAC_BOOST_STATS_BAR_NAME;

// BrnCarSelectVehicle.h:122
extern char[] KAC_STRENGTH_STATS_BAR_NAME;

// BrnCarSelectVehicle.h:123
extern char[] KAC_CARS_AVAILABLE_STRINGID;

// BrnCarSelectVehicle.h:126
extern char[] KAC_CARS_UNLOCKED_NAME;

// BrnCarSelectVehicle.h:127
extern char[] KAC_CAR_TYPE;

// BrnCarSelectVehicle.h:129
extern char[] KAC_OPTION_NAME;

// BrnCarSelectVehicle.h:131
extern const int32_t KI_NUMBER_VISIBLE_VEHICLE_ICONS = 5;

// BrnCarSelectVehicle.h:137
extern char[] KAC_SLIDER_BAR_NAME;

// BrnCarSelectVehicle.h:140
extern char[] macTrackAnimTransitionComponentName;

// BrnCarSelectVehicle.h:143
extern char[] macMainAnimComponentName;

// BrnCarSelectVehicle.h:146
extern char[] KAC_ONLINE_COUNTDOWN_NAME;

// BrnCarSelectVehicle.h:149
extern char[] KAC_ONLINE_PLAYER_LIST;

// BrnCarSelectVehicle.h:155
extern uint32_t[] mauBoostColours;

// BrnCarSelectVehicle.h:160
extern const float KC_CAROUSEL_X_ADVANCE;

// BrnCarSelectVehicle.h:161
extern const float KC_SCREEN_WIDTH;

// BrnCarSelectVehicle.h:163
extern const float KC_X_FRAME_CAROUSEL_ADJUST;

// BrnCarSelectVehicle.h:164
extern const float KC_X_FRAME_CAROUSEL_DECAY_ADJUST;

// BrnCarSelectVehicle.h:165
extern const float32_t KF_AXIS_DEAD_ZONE;

// BrnCarSelectVehicle.h:58
struct BrnGui::CarSelectVehicle : public BrnGui::CarSelectMain {
private:
	// BrnCarSelectVehicle.cpp:34
	extern sResourceTuple[6] maResourcesToLoad;

	// BrnCarSelectVehicle.cpp:44
	extern const uint32_t muNumResourcesToLoad = 6;

	// BrnCarSelectVehicle.cpp:46
	extern const int32_t[5] maiEventToObserve;

	// BrnCarSelectVehicle.cpp:56
	extern const int32_t miNumEventsObserved = 5;

	// BrnCarSelectVehicle.cpp:58
	extern const char * mpacCarSelectorName;

	// BrnCarSelectVehicle.h:106
	BrnGui::TextSelection mCarSelector;

	// BrnCarSelectVehicle.h:108
	CgsID[92] maSelectedCars;

	// BrnCarSelectVehicle.h:110
	BitArray<92u> maSelectedCarsDrivenState;

	// BrnCarSelectVehicle.h:112
	BitArray<92u> maSelectedCarsWreckedState;

	// BrnCarSelectVehicle.h:114
	BrnGui::PlayerStatsBar mSpeedStatsBar;

	// BrnCarSelectVehicle.h:115
	BrnGui::PlayerStatsBar mBoostStatsBar;

	// BrnCarSelectVehicle.h:116
	BrnGui::PlayerStatsBar mStrengthStatsBar;

	// BrnCarSelectVehicle.h:117
	BrnGui::TextField mCarType;

	// BrnCarSelectVehicle.cpp:61
	extern const char[17] KAC_SPEED_STATS_BAR_NAME;

	// BrnCarSelectVehicle.cpp:62
	extern const char[17] KAC_BOOST_STATS_BAR_NAME;

	// BrnCarSelectVehicle.cpp:63
	extern const char[20] KAC_STRENGTH_STATS_BAR_NAME;

	// BrnCarSelectVehicle.cpp:60
	extern const char[21] KAC_CARS_AVAILABLE_STRINGID;

	// BrnCarSelectVehicle.h:125
	BrnGui::TextField mCarsUnlocked;

	// BrnCarSelectVehicle.cpp:65
	extern const char[16] KAC_CARS_UNLOCKED_NAME;

	// BrnCarSelectVehicle.cpp:66
	extern const char[11] KAC_CAR_TYPE;

	// BrnCarSelectVehicle.cpp:70
	extern const char[13] KAC_OPTION_NAME;

	// BrnCarSelectVehicle.cpp:72
	extern const char *[1] KAPC_OPTIONS;

	// BrnCarSelectVehicle.h:131
	extern const int32_t KI_NUMBER_VISIBLE_VEHICLE_ICONS = 5;

	// BrnCarSelectVehicle.h:134
	BrnGui::RivalTableCell[5] maCarouselOverviewSelectable;

	// BrnCarSelectVehicle.h:135
	BrnGui::SelectableGroup mCarouselOverviewSelectableGroup;

	// BrnCarSelectVehicle.h:136
	BrnGui::CarouselSliderBar mCarouselSliderBar;

	// BrnCarSelectVehicle.cpp:68
	extern const char[21] KAC_SLIDER_BAR_NAME;

	// BrnCarSelectVehicle.h:139
	BrnGui::AnimationComponent mTrackAnimTransitionComponent;

	// BrnCarSelectVehicle.cpp:80
	extern const char[14] macTrackAnimTransitionComponentName;

	// BrnCarSelectVehicle.h:142
	BrnGui::AnimationComponent mMainAnimComponent;

	// BrnCarSelectVehicle.cpp:81
	extern const char[13] macMainAnimComponentName;

	// BrnCarSelectVehicle.cpp:77
	extern const char[13] KAC_ONLINE_COUNTDOWN_NAME;

	// BrnCarSelectVehicle.h:147
	BrnGui::CarSelectOnlineCountdown mOnlineCountdown;

	// BrnCarSelectVehicle.cpp:78
	extern const char[15] KAC_ONLINE_PLAYER_LIST;

	// BrnCarSelectVehicle.h:150
	BrnGui::CarSelectOnlinePlayerList mOnlinePlayerList;

	// BrnCarSelectVehicle.h:152
	bool mbFirstFrame;

	// BrnCarSelectVehicle.h:153
	const LobbyPlayerStatusData * mpHostStatusData;

	// BrnCarSelectVehicle.cpp:83
	extern const uint32_t[3] mauBoostColours;

	// BrnCarSelectVehicle.h:158
	float mfCarouselXOffset;

	// BrnCarSelectVehicle.h:159
	float mfCarouselXOffsetDecay;

	// BrnCarSelectVehicle.cpp:90
	extern const float KC_CAROUSEL_X_ADVANCE;

	// BrnCarSelectVehicle.cpp:91
	extern const float KC_SCREEN_WIDTH;

	// BrnCarSelectVehicle.h:162
	float[5] mafCarouselOriginalXPos;

	// BrnCarSelectVehicle.cpp:92
	extern const float KC_X_FRAME_CAROUSEL_ADJUST;

	// BrnCarSelectVehicle.cpp:93
	extern const float KC_X_FRAME_CAROUSEL_DECAY_ADJUST;

	// BrnCarSelectVehicle.cpp:94
	extern const float32_t KF_AXIS_DEAD_ZONE;

	// BrnCarSelectVehicle.h:167
	uint32_t muCarouselControllerRightPressedRefCount;

	// BrnCarSelectVehicle.h:168
	uint32_t muCarouselControllerLeftPressedRefCount;

	// BrnCarSelectVehicle.h:169
	bool mbControllerAxisActive;

	// BrnCarSelectVehicle.h:170
	bool mbVoiceOverPlaying;

public:
	// BrnCarSelectVehicle.cpp:113
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCarSelectVehicle.cpp:138
	// Declaration
	virtual void OnEnter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectVehicle.cpp:142
		using namespace CgsDev::Message;

	}

	// BrnCarSelectVehicle.cpp:229
	virtual void OnLeave();

	// BrnCarSelectVehicle.cpp:245
	virtual void Update();

protected:
	// BrnCarSelectVehicle.cpp:328
	virtual void AppendAptComponents();

	// BrnCarSelectVehicle.cpp:355
	virtual void SetupComponents();

private:
	// BrnCarSelectVehicle.cpp:488
	bool IsCarSelectable(CgsID);

	// BrnCarSelectVehicle.cpp:1338
	virtual void PlayMovie();

	// BrnCarSelectVehicle.cpp:572
	// Declaration
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectVehicle.cpp:677
		using namespace CgsDev::Message;

	}

	// BrnCarSelectVehicle.cpp:937
	virtual void HandleCarInfoResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectVehicle.cpp:971
	void UpdateComponents();

	// BrnCarSelectVehicle.cpp:1023
	virtual void SetupCar(const CarSetupInfo *, bool);

	// BrnCarSelectVehicle.cpp:519
	void SetupMenuComponents();

	// BrnCarSelectVehicle.cpp:1287
	void HandleAptTrigger(const GuiEventAptTrigger *);

	// BrnCarSelectVehicle.cpp:1109
	void SetupStatsComponent(const CarSetupInfo *);

	// BrnCarSelectVehicle.cpp:1155
	void SetupCarsUnlockedTextComponent();

	// BrnCarSelectVehicle.cpp:1176
	void SetCarouselComponent(CgsID);

	// BrnCarSelectVehicle.cpp:1354
	virtual sResourceTuple * GetResourcesToLoad() const;

	// BrnCarSelectVehicle.cpp:1367
	virtual uint32_t GetNumberResourcesToLoad() const;

	// BrnCarSelectVehicle.cpp:1380
	// Declaration
	void HandleLobbyPlayerList(const GuiEventNetworkLobbyPlayerList *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectVehicle.cpp:1413
		using namespace CgsDev::Message;

	}

	// BrnCarSelectVehicle.cpp:425
	void SetCarSelectorComponent();

	// BrnCarSelectVehicle.cpp:1475
	virtual bool IsLoading() const;

	// BrnCarSelectVehicle.cpp:1264
	void SetSliderBarComponent();

	// BrnCarSelectVehicle.cpp:1059
	void SetTicker(CgsID);

	// BrnCarSelectVehicle.cpp:1520
	void TriggerSound(bool);

	// BrnCarSelectVehicle.cpp:854
	bool UpdateCarouselTransition();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectVehicle {
	public:
		CarSelectVehicle();

	private:
		// BrnCarSelectVehicle.h:100
		extern const uint32_t muNumResourcesToLoad;

		// BrnCarSelectVehicle.h:102
		extern int32_t[] maiEventToObserve;

		// BrnCarSelectVehicle.h:103
		extern const int32_t miNumEventsObserved;

		// BrnCarSelectVehicle.h:120
		extern char[] KAC_SPEED_STATS_BAR_NAME;

		// BrnCarSelectVehicle.h:121
		extern char[] KAC_BOOST_STATS_BAR_NAME;

		// BrnCarSelectVehicle.h:122
		extern char[] KAC_STRENGTH_STATS_BAR_NAME;

		// BrnCarSelectVehicle.h:123
		extern char[] KAC_CARS_AVAILABLE_STRINGID;

		// BrnCarSelectVehicle.h:126
		extern char[] KAC_CARS_UNLOCKED_NAME;

		// BrnCarSelectVehicle.h:127
		extern char[] KAC_CAR_TYPE;

		// BrnCarSelectVehicle.h:129
		extern char[] KAC_OPTION_NAME;

		// BrnCarSelectVehicle.h:131
		extern const int32_t KI_NUMBER_VISIBLE_VEHICLE_ICONS = 5;

		// BrnCarSelectVehicle.h:137
		extern char[] KAC_SLIDER_BAR_NAME;

		// BrnCarSelectVehicle.h:140
		extern char[] macTrackAnimTransitionComponentName;

		// BrnCarSelectVehicle.h:143
		extern char[] macMainAnimComponentName;

		// BrnCarSelectVehicle.h:146
		extern char[] KAC_ONLINE_COUNTDOWN_NAME;

		// BrnCarSelectVehicle.h:149
		extern char[] KAC_ONLINE_PLAYER_LIST;

		// BrnCarSelectVehicle.h:155
		extern uint32_t[] mauBoostColours;

		// BrnCarSelectVehicle.h:160
		extern const float KC_CAROUSEL_X_ADVANCE;

		// BrnCarSelectVehicle.h:161
		extern const float KC_SCREEN_WIDTH;

		// BrnCarSelectVehicle.h:163
		extern const float KC_X_FRAME_CAROUSEL_ADJUST;

		// BrnCarSelectVehicle.h:164
		extern const float KC_X_FRAME_CAROUSEL_DECAY_ADJUST;

		// BrnCarSelectVehicle.h:165
		extern const float32_t KF_AXIS_DEAD_ZONE;

	}

}

// BrnCarSelectVehicle.h:58
void BrnGui::CarSelectVehicle::CarSelectVehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

