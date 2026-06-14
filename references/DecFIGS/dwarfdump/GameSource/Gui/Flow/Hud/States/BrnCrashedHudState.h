// BrnCrashedHudState.h:114
extern int32_t[] maiEventToObserve;

// BrnCrashedHudState.h:115
extern const int32_t miNumEventsObserved;

// BrnCrashedHudState.h:117
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashedHudState.h:118
extern uint32_t muNumResourcesToLoad;

// BrnCrashedHudState.h:120
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

// BrnCrashedHudState.h:147
extern char[] macHudMessagesName;

// BrnCrashedHudState.h:155
extern char[] macImpactTimePageChangerName;

// BrnCrashedHudState.h:156
extern char[] macImpactTimeButtonName;

// BrnCrashedHudState.h:165
extern char[] macShowTimeButton1Name;

// BrnCrashedHudState.h:166
extern char[] macShowTimeButton2Name;

// BrnCrashedHudState.h:167
extern char[] macShowTimeAnimatorName;

// BrnCrashedHudState.h:174
extern char[] macMudAnimatorName;

// BrnCrashedHudState.h:180
extern char[] macMugShotComponentName;

// BrnCrashedHudState.h:183
extern char[] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

// BrnCrashedHudState.h:199
extern char[] KAC_SKIP_PROMPT_ANIM_NAME;

// BrnCrashedHudState.h:200
extern char[] KAC_SKIP_PROMPT_HELP_NAME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashedHudState {
		// BrnCrashedHudState.h:80
		enum CrashInternalState {
			E_CRASHINTERNALSTATE_GETCACHE = 0,
			E_CRASHINTERNALSTATE_LOADING = 1,
			E_CRASHINTERNALSTATE_WF_INIT = 2,
			E_CRASHINTERNALSTATE_SETUPSTATE = 3,
			E_CRASHINTERNALSTATE_RUNNING = 4,
			E_CRASHINTERNALSTATE_IDLE = 5,
			E_CRASHINTERNALSTATE_COUNT = 6,
		}

	}

}

// BrnCrashedHudState.h:75
struct BrnGui::CrashedHudState : public CgsGui::State {
private:
	// BrnCrashedHudState.cpp:21
	extern const int32_t[21] maiEventToObserve;

	// BrnCrashedHudState.cpp:47
	extern const int32_t miNumEventsObserved = 21;

	// BrnCrashedHudState.cpp:49
	extern sResourceTuple[4] maResourcesToLoad;

	// BrnCrashedHudState.cpp:57
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashedHudState.h:120
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

	// BrnCrashedHudState.h:121
	uint32_t[8] mauExpectedComponentIds;

	// BrnCrashedHudState.h:122
	uint32_t muNumExpectedComponents;

	// BrnCrashedHudState.h:124
	BrnGui::CrashedHudState::CrashInternalState meInternalState;

	// BrnCrashedHudState.h:126
	bool mbInImpactTime;

	// BrnCrashedHudState.h:128
	BrnGui::GuiCache * mpCache;

	// BrnCrashedHudState.h:134
	bool mbHudMessages;

	// BrnCrashedHudState.h:141
	bool mbBoostBar;

	// BrnCrashedHudState.h:146
	InGameMessagesComponent mHudMessageComponent;

	// BrnCrashedHudState.cpp:59
	extern const char[20] macHudMessagesName;

	// BrnCrashedHudState.h:153
	BrnGui::AnimationComponent mImpactTimePageChanger;

	// BrnCrashedHudState.h:154
	BrnGui::ButtonIconComponent mImpactTimeButton;

	// BrnCrashedHudState.cpp:60
	extern const char[16] macImpactTimePageChangerName;

	// BrnCrashedHudState.cpp:61
	extern const char[16] macImpactTimeButtonName;

	// BrnCrashedHudState.h:157
	bool mbImpactTimer;

	// BrnCrashedHudState.h:162
	BrnGui::ButtonIconComponent mShowTimeButton1;

	// BrnCrashedHudState.h:163
	BrnGui::ButtonIconComponent mShowTimeButton2;

	// BrnCrashedHudState.h:164
	BrnGui::AnimationComponent mShowTimeAnimator;

	// BrnCrashedHudState.cpp:62
	extern const char[19] macShowTimeButton1Name;

	// BrnCrashedHudState.cpp:63
	extern const char[19] macShowTimeButton2Name;

	// BrnCrashedHudState.cpp:64
	extern const char[16] macShowTimeAnimatorName;

	// BrnCrashedHudState.h:168
	bool mbShowTime;

	// BrnCrashedHudState.h:173
	BrnGui::AnimationComponent mMudAnimator;

	// BrnCrashedHudState.cpp:65
	extern const char[16] macMudAnimatorName;

	// Unknown accessibility
	// BrnCrashedHudState.h:47
	typedef BrnGui::FlaptIconComponent MugshotIconComponent;

	// BrnCrashedHudState.h:179
	CrashedHudState::MugshotIconComponent mMugShotComponent;

	// BrnCrashedHudState.cpp:69
	extern const char[16] macMugShotComponentName;

	// BrnCrashedHudState.cpp:74
	extern const char *[6][6] KAAPC_MUGSHOT_FRAME_LABELS;

	// Unknown accessibility
	// BrnCrashedHudState.h:48
	typedef TextFieldRef MugshotTextComponent;

	// BrnCrashedHudState.h:182
	CrashedHudState::MugshotTextComponent mMugshotOpponentGamertag;

	// BrnCrashedHudState.cpp:72
	extern const char[12] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

	// BrnCrashedHudState.cpp:137
	extern const char *[6] KAPC_MUGSHOT_STRING_IDS_CAPTURING;

	// BrnCrashedHudState.cpp:147
	extern const char *[6] KAPC_MUGSHOT_STRING_IDS_TAKE;

	// BrnCrashedHudState.h:190
	BrnGui::RoadRuleShotComponent mRoadRuleShotComponent;

	// BrnCrashedHudState.cpp:160
	extern const char * KPC_ROAD_RULE_SHOT_COMPONENT_NAME;

	// BrnCrashedHudState.h:196
	bool mbSkipPrompt;

	// Unknown accessibility
	// BrnCrashedHudState.h:55
	typedef BrnGui::FlaptAnimatorComponent ShowtimeAnimComponent;

	// BrnCrashedHudState.h:197
	CrashedHudState::ShowtimeAnimComponent mSkipPromptAnimator;

	// Unknown accessibility
	// BrnCrashedHudState.h:56
	typedef FlaptHelpItem ShowtimeHelpComponent;

	// BrnCrashedHudState.h:198
	CrashedHudState::ShowtimeHelpComponent mSkipPromptButton;

	// BrnCrashedHudState.cpp:163
	extern const char[13] KAC_SKIP_PROMPT_ANIM_NAME;

	// BrnCrashedHudState.cpp:164
	extern const char[11] KAC_SKIP_PROMPT_HELP_NAME;

	// BrnCrashedHudState.h:201
	bool mbCrashIsSkippable;

	// BrnCrashedHudState.h:205
	MovieClipRef mCrashHudAnimator;

public:
	// BrnCrashedHudState.cpp:184
	virtual void OnEnter();

	// BrnCrashedHudState.cpp:960
	virtual void OnLeave();

	// BrnCrashedHudState.cpp:268
	virtual void Update();

	// BrnCrashedHudState.h:106
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashedHudState.cpp:348
	void UpdateGetCache();

	// BrnCrashedHudState.cpp:386
	bool UpdateLoading();

	// BrnCrashedHudState.cpp:433
	bool UpdateWFInit();

	// BrnCrashedHudState.cpp:457
	// Declaration
	bool UpdateSetupState() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashedHudState.cpp:487
		using namespace CgsDev::Message;

		// BrnCrashedHudState.cpp:488
		using namespace CgsDev::Message;

	}

	// BrnCrashedHudState.cpp:590
	// Declaration
	bool UpdateRunning() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashedHudState.cpp:688
		using namespace CgsDev::Message;

	}

	// BrnCrashedHudState.cpp:768
	void UpdatePermenant();

	// BrnCrashedHudState.h:283
	void SetExpectedComponent(const char *);

	// BrnCrashedHudState.cpp:990
	void SetExpectedAptComponentList();

	// BrnCrashedHudState.h:291
	void ClearExpectedComponent();

	// BrnCrashedHudState.h:313
	void EnterSteerWreckScreen();

	// BrnCrashedHudState.h:329
	void EnterImpactTimeScreen();

	// BrnCrashedHudState.h:345
	void EnterImpactInvisible();

	// BrnCrashedHudState.cpp:1027
	void HandleMugshotEvent(const GuiMugshotControlEvent *);

	// BrnCrashedHudState.cpp:1053
	// Declaration
	void DoMugshot(const GuiMugshotControlEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashedHudState.cpp:1059
		using namespace CgsDev::Message;

	}

	// BrnCrashedHudState.cpp:1109
	void DoRoadRuleShot(const GuiMugshotControlEvent *);

	// BrnCrashedHudState.cpp:1180
	void StartFreeburnChallengeTicker();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashedHudState {
	public:
		CrashedHudState();

	private:
		// BrnCrashedHudState.h:114
		extern int32_t[] maiEventToObserve;

		// BrnCrashedHudState.h:115
		extern const int32_t miNumEventsObserved;

		// BrnCrashedHudState.h:117
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashedHudState.h:118
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashedHudState.h:120
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

		// BrnCrashedHudState.h:147
		extern char[] macHudMessagesName;

		// BrnCrashedHudState.h:155
		extern char[] macImpactTimePageChangerName;

		// BrnCrashedHudState.h:156
		extern char[] macImpactTimeButtonName;

		// BrnCrashedHudState.h:165
		extern char[] macShowTimeButton1Name;

		// BrnCrashedHudState.h:166
		extern char[] macShowTimeButton2Name;

		// BrnCrashedHudState.h:167
		extern char[] macShowTimeAnimatorName;

		// BrnCrashedHudState.h:174
		extern char[] macMudAnimatorName;

		// BrnCrashedHudState.h:180
		extern char[] macMugShotComponentName;

		// BrnCrashedHudState.h:183
		extern char[] KAC_MUGSHOT_COMPONENT_GAMERTAG_NAME;

		// BrnCrashedHudState.h:199
		extern char[] KAC_SKIP_PROMPT_ANIM_NAME;

		// BrnCrashedHudState.h:200
		extern char[] KAC_SKIP_PROMPT_HELP_NAME;

	}

}

// BrnCrashedHudState.h:75
void BrnGui::CrashedHudState::CrashedHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

