// BrnRaceMainHudState.h:217
extern int32_t[] maiEventToObserve;

// BrnRaceMainHudState.h:218
extern const int32_t miNumEventsObserved;

// BrnRaceMainHudState.h:220
extern sResourceTuple[] maResourcesToLoad;

// BrnRaceMainHudState.h:221
extern uint32_t muNumResourcesToLoad;

// BrnRaceMainHudState.h:223
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

// BrnRaceMainHudState.h:278
extern char[] macEventInfoName;

// BrnRaceMainHudState.h:284
extern char[] KAC_SAT_NAV_ANIMATOR_NAME;

// BrnRaceMainHudState.h:291
extern char[] macPaybackName;

// BrnRaceMainHudState.h:298
extern char[] macHudMessagesName;

// BrnRaceMainHudState.h:305
extern char[] macDistrictMarkerName;

// BrnRaceMainHudState.h:313
extern char[] macBoostManagerComponentName;

// BrnRaceMainHudState.h:326
extern char[] macEventCountdownName;

// BrnRaceMainHudState.h:329
extern const const char *[6] maIconIdentifiers;

// BrnRaceMainHudState.h:338
extern char[] macPositionIndicatorName;

// BrnRaceMainHudState.h:344
extern char[] macPlayerPositionTableName;

// BrnRaceMainHudState.h:351
extern char[] macFriendListName;

// BrnRaceMainHudState.h:352
extern char[] macFriendsListChangeIconName;

// BrnRaceMainHudState.h:361
extern char[] macGeneralTransitionComponentName;

// BrnRaceMainHudState.h:376
extern char[] macRoadRuleComponentName;

// BrnRaceMainHudState.h:396
extern char[] macMugShotComponentName;

// BrnRaceMainHudState.h:397
extern char[] macMugshotDIARRHiderComponentName;

// BrnRaceMainHudState.h:400
extern char[] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

// BrnRaceMainHudState.h:410
extern char[] KAC_BOUNCE_BOOST_NAME;

// BrnRaceMainHudState.h:426
extern char[] KAC_IDENT_ANIMATOR_NAME;

// BrnRaceMainHudState.h:451
extern char[] KAC_ONLINE_TIMEOUT_TIMER_NAME;

// BrnRaceMainHudState.h:457
extern char[] KAC_COMPASS_COMPONENT_NAME;

// BrnRaceMainHudState.h:463
extern char[] KAC_CHALLENGE_COMPONENT_NAME;

// BrnRaceMainHudState.h:465
extern char[] KAC_CHALLENGE_SELECTOR_COMPONENT_NAME;

// BrnRaceMainHudState.h:473
extern char[] KAC_CHALLENGE_ON_COMPONENT_NAME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RaceMainHudState {
		// BrnRaceMainHudState.h:101
		struct GuiShowTimeComboItem {
			// BrnRaceMainHudState.h:104
			const char * mpcText;

			// BrnRaceMainHudState.h:105
			bool mbNumberInclusive;

		}

		// BrnRaceMainHudState.h:184
		enum RaceInternalState {
			E_RACEINTERNALSTATE_SETUPSTATE = 0,
			E_RACEINTERNALSTATE_LOADING = 1,
			E_RACEINTERNALSTATE_WF_INIT = 2,
			E_RACEINTERNALSTATE_RUNNING = 3,
			E_RACEINTERNALSTATE_IDLE = 4,
			E_RACEINTERNALSTATE_COUNT = 5,
		}

		// BrnRaceMainHudState.h:196
		enum EventCountdownState {
			E_EVENT_COUNTDOWN_STATE_DONE = 0,
			E_EVENT_COUNTDOWN_STATE_GO = 1,
			E_EVENT_COUNTDOWN_STATE_ONE = 2,
			E_EVENT_COUNTDOWN_STATE_TWO = 3,
			E_EVENT_COUNTDOWN_STATE_THREE = 4,
			E_EVENT_COUNTDOWN_STATE_IDLE = 5,
			E_EVENT_COUNTDOWN_STATE_COUNT = 6,
		}

	}

}

// BrnRaceMainHudState.h:95
struct BrnGui::RaceMainHudState : public CgsGui::State {
private:
	// BrnRaceMainHudState.h:215
	BrnGui::RaceMainHudState::RaceInternalState meInternalState;

	// BrnRaceMainHudState.cpp:33
	extern const int32_t[77] maiEventToObserve;

	// BrnRaceMainHudState.cpp:130
	extern const int32_t miNumEventsObserved = 77;

	// BrnRaceMainHudState.cpp:132
	extern sResourceTuple[21] maResourcesToLoad;

	// BrnRaceMainHudState.cpp:157
	extern uint32_t muNumResourcesToLoad;

	// BrnRaceMainHudState.h:223
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

	// BrnRaceMainHudState.h:224
	uint32_t[64] mauExpectedComponentIds;

	// BrnRaceMainHudState.h:225
	uint32_t muNumExpectedComponents;

	// BrnRaceMainHudState.h:227
	BrnGui::GuiCache * mpCache;

	// BrnRaceMainHudState.h:228
	bool mbInRaceHud;

	// BrnRaceMainHudState.h:231
	MovieClipRef mMainHUDMovieclip;

	// BrnRaceMainHudState.h:244
	bool mbSatNav;

	// BrnRaceMainHudState.h:245
	bool mbSatNavStatic;

	// BrnRaceMainHudState.h:246
	bool mbHudMessages;

	// BrnRaceMainHudState.h:247
	bool mbBoostBar;

	// BrnRaceMainHudState.h:248
	bool mbBoostMessages;

	// BrnRaceMainHudState.h:249
	bool mbPreRaceCountdown;

	// BrnRaceMainHudState.h:250
	bool mbPreRaceCountdownRenders;

	// BrnRaceMainHudState.h:251
	bool mbEventInfo;

	// BrnRaceMainHudState.h:252
	bool mbDistrictMarker;

	// BrnRaceMainHudState.h:253
	bool mbPlayerPositionTable;

	// BrnRaceMainHudState.h:254
	bool mbFriendsList;

	// BrnRaceMainHudState.h:255
	bool mbTemporaryReplayIndicator;

	// BrnRaceMainHudState.h:256
	bool mbAboveCarIcons;

	// BrnRaceMainHudState.h:257
	bool mbRoadRuleComponent;

	// BrnRaceMainHudState.h:258
	bool mbPreEventOverlay;

	// BrnRaceMainHudState.h:259
	bool mbMugShotComponent;

	// BrnRaceMainHudState.h:260
	bool mbPaybackComponent;

	// BrnRaceMainHudState.h:261
	bool mbShowTimeBar;

	// BrnRaceMainHudState.h:262
	bool mbB5Ident;

	// BrnRaceMainHudState.h:263
	bool mbBurnoutSkillz;

	// BrnRaceMainHudState.h:264
	bool mbOnlineTimeoutTimer;

	// BrnRaceMainHudState.h:265
	bool mbCompass;

	// BrnRaceMainHudState.h:266
	bool mbFreeburnChallengeButtonStart;

	// BrnRaceMainHudState.h:267
	bool mbFreeburnChallengeSelector;

	// BrnRaceMainHudState.h:268
	bool mbFreeburnChallengeTicker;

	// BrnRaceMainHudState.h:269
	bool mbFreeburnChallengeOnComponent;

	// BrnRaceMainHudState.h:277
	EventInfoComponent mEventInfoComponent;

	// BrnRaceMainHudState.cpp:171
	extern const char[13] macEventInfoName;

	// BrnRaceMainHudState.h:283
	BrnGui::AnimationComponent mSatNavAnimationComponent;

	// BrnRaceMainHudState.cpp:189
	extern const char[21] KAC_SAT_NAV_ANIMATOR_NAME;

	// BrnRaceMainHudState.h:285
	BrnGui::SatNavComponent mSatNavComponent;

	// BrnRaceMainHudState.h:290
	BrnGui::PaybackComponent mPaybackComponent;

	// BrnRaceMainHudState.cpp:170
	extern const char[11] macPaybackName;

	// BrnRaceMainHudState.h:297
	InGameMessagesComponent mHudMessageComponent;

	// BrnRaceMainHudState.cpp:172
	extern const char[15] macHudMessagesName;

	// BrnRaceMainHudState.h:304
	DistrictMarkerComponent mDistrictMarker;

	// BrnRaceMainHudState.cpp:175
	extern const char[10] macDistrictMarkerName;

	// BrnRaceMainHudState.h:306
	bool mbFirstFrame;

	// BrnRaceMainHudState.h:312
	BoostMessageManager mBoostMessageManager;

	// BrnRaceMainHudState.cpp:174
	extern const char[13] macBoostManagerComponentName;

	// BrnRaceMainHudState.h:322
	BrnGui::FlaptIconComponent mEventCountdownIcon;

	// BrnRaceMainHudState.cpp:173
	extern const char[9] macEventCountdownName;

	// BrnRaceMainHudState.h:328
	BrnGui::RaceMainHudState::EventCountdownState meCurrentEventCountdownState;

	// BrnRaceMainHudState.cpp:160
	extern const const char *[6] maIconIdentifiers;

	// BrnRaceMainHudState.h:331
	float32_t mfEventCountdownTimer;

	// BrnRaceMainHudState.h:337
	BrnGui::PositionIndicator mPositionIndicatorComponent;

	// BrnRaceMainHudState.cpp:176
	extern const char[21] macPositionIndicatorName;

	// BrnRaceMainHudState.h:343
	PlayerPositionTableComponent mPlayerPositionTable;

	// BrnRaceMainHudState.cpp:177
	extern const char[23] macPlayerPositionTableName;

	// BrnRaceMainHudState.h:349
	FriendsListComponent mFriendsList;

	// BrnRaceMainHudState.h:350
	BrnGui::FriendsListChangeIconComponent mFriendsListChangeIcon;

	// BrnRaceMainHudState.cpp:182
	extern const char[11] macFriendListName;

	// BrnRaceMainHudState.cpp:183
	extern const char[20] macFriendsListChangeIconName;

	// BrnRaceMainHudState.h:357
	BrnGui::AnimationComponent mGeneralTransitionComponentApt;

	// BrnRaceMainHudState.h:359
	BrnGui::FlaptAnimatorComponent mGeneralTransitionComponentFlapt;

	// BrnRaceMainHudState.cpp:178
	extern const char[18] macGeneralTransitionComponentName;

	// BrnRaceMainHudState.h:362
	bool mbHudVisible;

	// BrnRaceMainHudState.h:375
	RoadRuleComponent mRoadRuleComponent;

	// BrnRaceMainHudState.cpp:184
	extern const char[12] macRoadRuleComponentName;

	// BrnRaceMainHudState.h:381
	float32_t mfOverlayRemovalTime;

	// BrnRaceMainHudState.h:382
	bool mbOverlayInProgress;

	// BrnRaceMainHudState.h:383
	BrnGameState::GameStateModuleIO::EGameModeType meModeOverlayDisplayed;

	// BrnRaceMainHudState.h:388
	CrashedHudState::MugshotIconComponent mMugShotComponent;

	// BrnRaceMainHudState.h:392
	BrnGui::FlaptAnimatorComponent mMugshotDIARRHiderComponent;

	// BrnRaceMainHudState.cpp:185
	extern const char[11] macMugShotComponentName;

	// BrnRaceMainHudState.cpp:188
	extern const char[18] macMugshotDIARRHiderComponentName;

	// BrnRaceMainHudState.cpp:196
	extern const char *[6][6] KAAPC_MUGSHOT_FRAME_LABELS;

	// BrnRaceMainHudState.h:399
	CrashedHudState::MugshotTextComponent mMugshotOpponentGamertag;

	// BrnRaceMainHudState.cpp:186
	extern const char[12] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

	// BrnRaceMainHudState.cpp:260
	extern const char *[6] KAPC_MUGSHOT_STRING_IDS_CAPTURING;

	// BrnRaceMainHudState.cpp:270
	extern const char *[6] KAPC_MUGSHOT_STRING_IDS_SHOW;

	// BrnRaceMainHudState.h:408
	extern const int32_t KI_SHOW_TIME_BAR_TEXT_COUNT = 3;

	// BrnRaceMainHudState.cpp:280
	extern BrnGui::RaceMainHudState::GuiShowTimeComboItem[30] KA_SHOW_TIME_COMBO_DATA;

	// BrnRaceMainHudState.cpp:360
	extern const char[15] KAC_BOUNCE_BOOST_NAME;

	// Unknown accessibility
	// BrnRaceMainHudState.h:76
	typedef FlaptHelpItem ShowtimeBounceBoostHelpItem;

	// BrnRaceMainHudState.h:411
	RaceMainHudState::ShowtimeBounceBoostHelpItem mShowtimeBounceBoostButton;

	// BrnRaceMainHudState.h:412
	bool mbBounceBoostPromptVisible;

	// BrnRaceMainHudState.h:413
	bool mbBounceBoostPromptNeeded;

	// BrnRaceMainHudState.h:422
	BrnGui::FlaptAnimatorComponent mIdentAnimator;

	// BrnRaceMainHudState.cpp:190
	extern const char[15] KAC_IDENT_ANIMATOR_NAME;

	// BrnRaceMainHudState.h:431
	float32_t mfBlackBarsCurrentValue;

	// BrnRaceMainHudState.h:436
	BrnGui::RoadRuleShotComponent mRoadRuleShotComponent;

	// BrnRaceMainHudState.cpp:353
	extern const char * KPC_ROAD_RULE_SHOT_COMPONENT_NAME;

	// BrnRaceMainHudState.h:450
	BrnGui::OnlineTimeoutComponent mOnlineTimeoutTimer;

	// BrnRaceMainHudState.cpp:356
	extern const char[24] KAC_ONLINE_TIMEOUT_TIMER_NAME;

	// BrnRaceMainHudState.h:456
	CompassComponent mCompass;

	// BrnRaceMainHudState.cpp:194
	extern const char[11] KAC_COMPASS_COMPONENT_NAME;

	// BrnRaceMainHudState.h:462
	BrnGui::FreeburnChallengeStartComponent mChallengeComponent;

	// BrnRaceMainHudState.cpp:357
	extern const char[21] KAC_CHALLENGE_COMPONENT_NAME;

	// BrnRaceMainHudState.h:464
	BrnGui::ChallengeSelector mChallengeSelectorComponent;

	// BrnRaceMainHudState.cpp:358
	extern const char[15] KAC_CHALLENGE_SELECTOR_COMPONENT_NAME;

	// BrnRaceMainHudState.h:466
	bool mbChallengeOnShowing;

	// BrnRaceMainHudState.h:471
	BrnGui::FlaptIconComponent mChallengeOnComponent;

	// BrnRaceMainHudState.cpp:359
	extern const char[15] KAC_CHALLENGE_ON_COMPONENT_NAME;

	// BrnRaceMainHudState.cpp:346
	extern bool msbDEBUG_OverrideNormalCptStates;

	// BrnRaceMainHudState.cpp:347
	extern const bool * mspbDEBUG_ComponentEnabledStates;

public:
	// BrnRaceMainHudState.cpp:385
	virtual void OnEnter();

	// BrnRaceMainHudState.cpp:1637
	virtual void OnLeave();

	// BrnRaceMainHudState.cpp:1775
	virtual void Update();

	// BrnRaceMainHudState.h:129
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnRaceMainHudState.cpp:4221
	void ForceReenter(bool, const bool *);

private:
	// BrnRaceMainHudState.cpp:1862
	bool UpdateSetupState();

	// BrnRaceMainHudState.cpp:2700
	bool UpdateLoading();

	// BrnRaceMainHudState.cpp:2734
	bool UpdateWFInit();

	// BrnRaceMainHudState.cpp:694
	void UpdateRunning();

	// BrnRaceMainHudState.cpp:3575
	void UpdatePermenant();

	// BrnRaceMainHudState.h:640
	void SetExpectedComponent(const char *);

	// BrnRaceMainHudState.cpp:3511
	void SetExpectedAptComponentList();

	// BrnRaceMainHudState.h:657
	void ClearExpectedComponent();

	// BrnRaceMainHudState.cpp:2937
	void ProcessBoostInfo(const CgsModule::Event *);

	// BrnRaceMainHudState.cpp:2964
	void ProcessAptEvents(const CgsModule::Event *);

	// BrnRaceMainHudState.cpp:3190
	void RevealHud(bool);

	// BrnRaceMainHudState.h:543
	void UpdateHud(const CgsModule::Event *);

	// BrnRaceMainHudState.h:548
	void UpdateDirtyTrickFlag(const CgsModule::Event *);

	// BrnRaceMainHudState.cpp:3261
	void UpdateSatNav(const CgsModule::Event *, int32_t);

	// BrnRaceMainHudState.cpp:3287
	void UpdateEventCountdown(const CgsModule::Event *);

	// BrnRaceMainHudState.cpp:3443
	void ConcludeEventCountdown();

	// BrnRaceMainHudState.cpp:3491
	void SendLocaliseEvent(const char *, const char *, float32_t, CgsGui::LocaliseFormat);

	// BrnRaceMainHudState.cpp:3791
	void HandleImpactEvent(const CgsModule::Event *);

	// BrnRaceMainHudState.cpp:3826
	void SetupEventInfo();

	// BrnRaceMainHudState.cpp:3850
	void RunReplayState(BrnGui::GuiEventChangeReplayState::ReplayState);

	// BrnRaceMainHudState.cpp:3890
	void HandleMugshotEvent(const GuiMugshotControlEvent *);

	// BrnRaceMainHudState.cpp:3916
	// Declaration
	void DoMugshot(const GuiMugshotControlEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceMainHudState.cpp:3922
		using namespace CgsDev::Message;

	}

	// BrnRaceMainHudState.cpp:3983
	void DoRoadRuleShot(const GuiMugshotControlEvent *);

	// BrnRaceMainHudState.cpp:4058
	void AddCrashCombo(BrnWorld::EComboEntryType, float32_t);

	// BrnRaceMainHudState.cpp:4085
	void StartFreeburnChallengeTicker();

	// BrnRaceMainHudState.cpp:4185
	void StartFreeburnChallengeNotActiveTicker();

	// BrnRaceMainHudState.cpp:4244
	void AddFakeEvents();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RaceMainHudState {
	public:
		RaceMainHudState();

	private:
		// BrnRaceMainHudState.h:217
		extern int32_t[] maiEventToObserve;

		// BrnRaceMainHudState.h:218
		extern const int32_t miNumEventsObserved;

		// BrnRaceMainHudState.h:220
		extern sResourceTuple[] maResourcesToLoad;

		// BrnRaceMainHudState.h:221
		extern uint32_t muNumResourcesToLoad;

		// BrnRaceMainHudState.h:223
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 64;

		// BrnRaceMainHudState.h:278
		extern char[] macEventInfoName;

		// BrnRaceMainHudState.h:284
		extern char[] KAC_SAT_NAV_ANIMATOR_NAME;

		// BrnRaceMainHudState.h:291
		extern char[] macPaybackName;

		// BrnRaceMainHudState.h:298
		extern char[] macHudMessagesName;

		// BrnRaceMainHudState.h:305
		extern char[] macDistrictMarkerName;

		// BrnRaceMainHudState.h:313
		extern char[] macBoostManagerComponentName;

		// BrnRaceMainHudState.h:326
		extern char[] macEventCountdownName;

		// BrnRaceMainHudState.h:329
		extern const const char *[6] maIconIdentifiers;

		// BrnRaceMainHudState.h:338
		extern char[] macPositionIndicatorName;

		// BrnRaceMainHudState.h:344
		extern char[] macPlayerPositionTableName;

		// BrnRaceMainHudState.h:351
		extern char[] macFriendListName;

		// BrnRaceMainHudState.h:352
		extern char[] macFriendsListChangeIconName;

		// BrnRaceMainHudState.h:361
		extern char[] macGeneralTransitionComponentName;

		// BrnRaceMainHudState.h:376
		extern char[] macRoadRuleComponentName;

		// BrnRaceMainHudState.h:396
		extern char[] macMugShotComponentName;

		// BrnRaceMainHudState.h:397
		extern char[] macMugshotDIARRHiderComponentName;

		// BrnRaceMainHudState.h:400
		extern char[] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

		// BrnRaceMainHudState.h:410
		extern char[] KAC_BOUNCE_BOOST_NAME;

		// BrnRaceMainHudState.h:426
		extern char[] KAC_IDENT_ANIMATOR_NAME;

		// BrnRaceMainHudState.h:451
		extern char[] KAC_ONLINE_TIMEOUT_TIMER_NAME;

		// BrnRaceMainHudState.h:457
		extern char[] KAC_COMPASS_COMPONENT_NAME;

		// BrnRaceMainHudState.h:463
		extern char[] KAC_CHALLENGE_COMPONENT_NAME;

		// BrnRaceMainHudState.h:465
		extern char[] KAC_CHALLENGE_SELECTOR_COMPONENT_NAME;

		// BrnRaceMainHudState.h:473
		extern char[] KAC_CHALLENGE_ON_COMPONENT_NAME;

	}

}

// BrnRaceMainHudState.h:95
void BrnGui::RaceMainHudState::RaceMainHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

