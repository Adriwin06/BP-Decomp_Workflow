// BrnFBurnMainHudState.h:128
extern int32_t[] maiEventToObserve;

// BrnFBurnMainHudState.h:129
extern const int32_t miNumEventsObserved;

// BrnFBurnMainHudState.h:131
extern sResourceTuple[] maResourcesToLoad;

// BrnFBurnMainHudState.h:132
extern uint32_t muNumResourcesToLoad;

// BrnFBurnMainHudState.h:135
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

// BrnFBurnMainHudState.h:183
extern char[] macHudMessagesName;

// BrnFBurnMainHudState.h:190
extern char[] macDistrictMarkerName;

// BrnFBurnMainHudState.h:198
extern char[] macBoostManagerComponentName;

// BrnFBurnMainHudState.h:204
extern char[] macGeneralTransitionComponentName;

// BrnFBurnMainHudState.h:222
extern char[] macRoadRuleComponentName;

// BrnFBurnMainHudState.h:229
extern char[] macFriendListName;

// BrnFBurnMainHudState.h:230
extern char[] macFriendsListChangeIconName;

// BrnFBurnMainHudState.h:236
extern char[] macJunctionInfoComponentName;

// BrnFBurnMainHudState.h:242
extern char[] macOdometerComponentName;

// BrnFBurnMainHudState.h:254
extern char[] KAC_IDENT_ANIMATOR_NAME;

// BrnFBurnMainHudState.h:256
extern const float32_t KF_IDENT_ANIMATION_DURATION;

// BrnFBurnMainHudState.h:257
extern const float32_t KF_IDENT_SINGLE_INTERVAL;

// BrnFBurnMainHudState.h:258
extern const float32_t KF_IDENT_MAX_TOTAL_INTERVAL;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FBurnMainHudState {
		// BrnFBurnMainHudState.h:109
		enum RaceInternalState {
			E_RACEINTERNALSTATE_SETUPSTATE = 0,
			E_RACEINTERNALSTATE_LOADING = 1,
			E_RACEINTERNALSTATE_WF_INIT = 2,
			E_RACEINTERNALSTATE_RUNNING = 3,
			E_RACEINTERNALSTATE_IDLE = 4,
			E_RACEINTERNALSTATE_COUNT = 5,
		}

	}

}

// BrnFBurnMainHudState.h:70
struct BrnGui::FBurnMainHudState : public CgsGui::State {
private:
	// BrnFBurnMainHudState.h:126
	BrnGui::FBurnMainHudState::RaceInternalState meInternalState;

	// BrnFBurnMainHudState.cpp:32
	extern const int32_t[57] maiEventToObserve;

	// BrnFBurnMainHudState.cpp:108
	extern const int32_t miNumEventsObserved = 57;

	// BrnFBurnMainHudState.cpp:110
	extern sResourceTuple[42] maResourcesToLoad;

	// BrnFBurnMainHudState.cpp:158
	extern uint32_t muNumResourcesToLoad;

	// BrnFBurnMainHudState.h:133
	extern const char *[] mapcResourcesToLoad;

	// BrnFBurnMainHudState.h:135
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

	// BrnFBurnMainHudState.h:136
	uint32_t[64] mauExpectedComponentIds;

	// BrnFBurnMainHudState.h:137
	uint32_t muNumExpectedComponents;

	// BrnFBurnMainHudState.h:139
	BrnGui::GuiCache * mpCache;

	// BrnFBurnMainHudState.h:142
	MovieClipRef mMainHUDMovieclip;

	// BrnFBurnMainHudState.h:155
	bool mbSatNav;

	// BrnFBurnMainHudState.h:156
	bool mbHudMessages;

	// BrnFBurnMainHudState.h:157
	bool mbBoostBar;

	// BrnFBurnMainHudState.h:158
	bool mbBoostMessages;

	// BrnFBurnMainHudState.h:159
	bool mbTemporaryReplayIndicator;

	// BrnFBurnMainHudState.h:160
	bool mbRoadRuleComponent;

	// BrnFBurnMainHudState.h:161
	bool mbFriendsList;

	// BrnFBurnMainHudState.h:162
	bool mbJunctionInfo;

	// BrnFBurnMainHudState.h:163
	bool mbOdometer;

	// BrnFBurnMainHudState.h:164
	bool mbB5Ident;

	// BrnFBurnMainHudState.h:165
	bool mbDistrictMarker;

	// BrnFBurnMainHudState.h:173
	BrnGui::SatNavComponent mSatNavComponent;

	// BrnFBurnMainHudState.cpp:160
	extern const char *[7] KAPC_SATNAV_FILTER_DESCRIPTIONS;

	// BrnFBurnMainHudState.cpp:171
	extern const char * KAPC_SATNAV_FILTER_DISABLED;

	// BrnFBurnMainHudState.h:176
	BrnProgression::RaceEventData::EModeType meSatNavEventFilter;

	// BrnFBurnMainHudState.h:177
	bool mbEventFilterEnabled;

	// BrnFBurnMainHudState.h:182
	InGameMessagesComponent mHudMessageComponent;

	// BrnFBurnMainHudState.cpp:173
	extern const char[15] macHudMessagesName;

	// BrnFBurnMainHudState.h:189
	DistrictMarkerComponent mDistrictMarker;

	// BrnFBurnMainHudState.cpp:175
	extern const char[10] macDistrictMarkerName;

	// BrnFBurnMainHudState.h:191
	bool mbFirstFrame;

	// BrnFBurnMainHudState.h:197
	BoostMessageManager mBoostMessageManager;

	// BrnFBurnMainHudState.cpp:174
	extern const char[13] macBoostManagerComponentName;

	// BrnFBurnMainHudState.h:203
	BrnGui::AnimationComponent mGeneralTransitionComponentApt;

	// BrnFBurnMainHudState.cpp:176
	extern const char[18] macGeneralTransitionComponentName;

	// BrnFBurnMainHudState.h:207
	BrnGui::FlaptAnimatorComponent mGeneralTransitionComponentFlapt;

	// BrnFBurnMainHudState.h:221
	RoadRuleComponent mRoadRuleComponent;

	// BrnFBurnMainHudState.cpp:177
	extern const char[12] macRoadRuleComponentName;

	// BrnFBurnMainHudState.h:227
	FriendsListComponent mFriendsList;

	// BrnFBurnMainHudState.h:228
	BrnGui::FriendsListChangeIconComponent mFriendsListChangeIcon;

	// BrnFBurnMainHudState.cpp:178
	extern const char[11] macFriendListName;

	// BrnFBurnMainHudState.cpp:179
	extern const char[20] macFriendsListChangeIconName;

	// BrnFBurnMainHudState.h:235
	JunctionInfoComponent mJunctionInfoComponent;

	// BrnFBurnMainHudState.cpp:180
	extern const char[16] macJunctionInfoComponentName;

	// BrnFBurnMainHudState.h:241
	OdometerComponent mOdometerComponent;

	// BrnFBurnMainHudState.cpp:181
	extern const char[12] macOdometerComponentName;

	// BrnFBurnMainHudState.h:250
	BrnGui::FlaptAnimatorComponent mIdentAnimator;

	// BrnFBurnMainHudState.cpp:182
	extern const char[15] KAC_IDENT_ANIMATOR_NAME;

	// BrnFBurnMainHudState.cpp:192
	extern const float32_t KF_IDENT_ANIMATION_DURATION;

	// BrnFBurnMainHudState.cpp:193
	extern const float32_t KF_IDENT_SINGLE_INTERVAL;

	// BrnFBurnMainHudState.cpp:194
	extern const float32_t KF_IDENT_MAX_TOTAL_INTERVAL;

	// BrnFBurnMainHudState.h:260
	bool mbIdentRunning;

	// BrnFBurnMainHudState.h:261
	float32_t mfNextIdentTransInTime;

	// BrnFBurnMainHudState.h:262
	int32_t miNumIdentAnimations;

	// BrnFBurnMainHudState.h:267
	float32_t mfBlackBarsCurrentValue;

	// BrnFBurnMainHudState.h:277
	bool mbCheckedForNewTrophyUnlocks;

public:
	// BrnFBurnMainHudState.cpp:288
	virtual void OnEnter();

	// BrnFBurnMainHudState.cpp:1139
	virtual void OnLeave();

	// BrnFBurnMainHudState.cpp:1224
	virtual void Update();

	// BrnFBurnMainHudState.h:94
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnFBurnMainHudState.cpp:1300
	bool UpdateSetupState();

	// BrnFBurnMainHudState.cpp:1465
	bool UpdateLoading();

	// BrnFBurnMainHudState.cpp:1499
	bool UpdateWFInit();

	// BrnFBurnMainHudState.cpp:496
	void UpdateRunning();

	// BrnFBurnMainHudState.cpp:1943
	void UpdatePermenant();

	// BrnFBurnMainHudState.h:414
	void SetExpectedComponent(const char *);

	// BrnFBurnMainHudState.cpp:1875
	void SetExpectedAptComponentList();

	// BrnFBurnMainHudState.h:431
	void ClearExpectedComponent();

	// BrnFBurnMainHudState.cpp:1628
	void ProcessBoostInfo(const CgsModule::Event *);

	// BrnFBurnMainHudState.cpp:1655
	void ProcessAptEvents(const CgsModule::Event *);

	// BrnFBurnMainHudState.h:365
	void UpdateHud(const CgsModule::Event *);

	// BrnFBurnMainHudState.cpp:1825
	void UpdateSatNav(const CgsModule::Event *, int32_t);

	// BrnFBurnMainHudState.cpp:1855
	void SendLocaliseEvent(const char *, const char *, float32_t, CgsGui::LocaliseFormat);

	// BrnFBurnMainHudState.cpp:2048
	void RunReplayState(BrnGui::GuiEventChangeReplayState::ReplayState);

	// BrnFBurnMainHudState.cpp:2138
	void ToggleSatNavEventFilter();

	// BrnFBurnMainHudState.cpp:2233
	void EnableSatNavEventsFilter();

	// BrnFBurnMainHudState.cpp:2257
	void DisableSatNavEventsFilter();

	// BrnFBurnMainHudState.cpp:2280
	void RefreshSatNavEventsFilter();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FBurnMainHudState {
	public:
		FBurnMainHudState();

	private:
		// BrnFBurnMainHudState.h:128
		extern int32_t[] maiEventToObserve;

		// BrnFBurnMainHudState.h:129
		extern const int32_t miNumEventsObserved;

		// BrnFBurnMainHudState.h:131
		extern sResourceTuple[] maResourcesToLoad;

		// BrnFBurnMainHudState.h:132
		extern uint32_t muNumResourcesToLoad;

		// BrnFBurnMainHudState.h:135
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

		// BrnFBurnMainHudState.h:183
		extern char[] macHudMessagesName;

		// BrnFBurnMainHudState.h:190
		extern char[] macDistrictMarkerName;

		// BrnFBurnMainHudState.h:198
		extern char[] macBoostManagerComponentName;

		// BrnFBurnMainHudState.h:204
		extern char[] macGeneralTransitionComponentName;

		// BrnFBurnMainHudState.h:222
		extern char[] macRoadRuleComponentName;

		// BrnFBurnMainHudState.h:229
		extern char[] macFriendListName;

		// BrnFBurnMainHudState.h:230
		extern char[] macFriendsListChangeIconName;

		// BrnFBurnMainHudState.h:236
		extern char[] macJunctionInfoComponentName;

		// BrnFBurnMainHudState.h:242
		extern char[] macOdometerComponentName;

		// BrnFBurnMainHudState.h:254
		extern char[] KAC_IDENT_ANIMATOR_NAME;

		// BrnFBurnMainHudState.h:256
		extern const float32_t KF_IDENT_ANIMATION_DURATION;

		// BrnFBurnMainHudState.h:257
		extern const float32_t KF_IDENT_SINGLE_INTERVAL;

		// BrnFBurnMainHudState.h:258
		extern const float32_t KF_IDENT_MAX_TOTAL_INTERVAL;

	}

}

// BrnFBurnMainHudState.h:70
void BrnGui::FBurnMainHudState::FBurnMainHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

