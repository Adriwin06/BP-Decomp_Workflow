// BrnCrashedStuntHudState.h:105
extern int32_t[] maiEventToObserve;

// BrnCrashedStuntHudState.h:106
extern const int32_t miNumEventsObserved;

// BrnCrashedStuntHudState.h:108
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashedStuntHudState.h:109
extern uint32_t muNumResourcesToLoad;

// BrnCrashedStuntHudState.h:130
extern char[] macHudMessagesName;

// BrnCrashedStuntHudState.h:134
extern char[] KAC_SCORE_ANIMATOR_NAME;

// BrnCrashedStuntHudState.h:137
extern char[] KAC_MULTIPLIER_ANIMATOR_NAME;

// BrnCrashedStuntHudState.h:140
extern char[] KAC_SCORETALLY_NAME;

// BrnCrashedStuntHudState.h:143
extern char[] KAC_STUNTRUNSCORE_NAME;

// BrnCrashedStuntHudState.h:145
extern char[] KAC_STUNTRUNMULT_NAME;

// BrnCrashedStuntHudState.h:147
extern const float32_t KF_TALLYSCORE_DURATION;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashedStuntHudState {
		// BrnCrashedStuntHudState.h:62
		enum CrashInternalState {
			E_CRASHINTERNALSTATE_LOADING = 0,
			E_CRASHINTERNALSTATE_WF_INIT = 1,
			E_CRASHINTERNALSTATE_SETUPSTATE = 2,
			E_CRASHINTERNALSTATE_RUNNING = 3,
			E_CRASHINTERNALSTATE_IDLE = 4,
			E_CRASHINTERNALSTATE_COUNT = 5,
		}

		// BrnCrashedStuntHudState.h:73
		enum CrashRunningState {
			E_CRASHRUNNINGSTATE_NONE = 0,
			E_CRASHRUNNINGSTATE_TRANSIN = 1,
			E_CRASHRUNNINGSTATE_TALLYSCORE = 2,
			E_CRASHRUNNINGSTATE_TRANSOUT = 3,
			E_CRASHRUNNINGSTATE_COUNT = 4,
		}

	}

	// BrnCrashedStuntHudState.h:199
	extern BrnGui::CrashedStuntHudState::CrashRunningState operator++(BrnGui::CrashedStuntHudState::CrashRunningState &, int);

}

// BrnCrashedStuntHudState.h:57
struct BrnGui::CrashedStuntHudState : public CgsGui::State {
private:
	// BrnCrashedStuntHudState.cpp:21
	extern const int32_t[12] maiEventToObserve;

	// BrnCrashedStuntHudState.cpp:38
	extern const int32_t miNumEventsObserved = 12;

	// BrnCrashedStuntHudState.cpp:40
	extern sResourceTuple[4] maResourcesToLoad;

	// BrnCrashedStuntHudState.cpp:48
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashedStuntHudState.h:111
	BrnGui::CrashedStuntHudState::CrashInternalState meInternalState;

	// BrnCrashedStuntHudState.h:112
	BrnGui::CrashedStuntHudState::CrashRunningState meRunningState;

	// BrnCrashedStuntHudState.h:114
	BrnGui::GuiCache * mpCache;

	// BrnCrashedStuntHudState.cpp:50
	extern const char *[4] KAPC_SCORETALLY_FRAMELABELS;

	// BrnCrashedStuntHudState.h:121
	bool mbHudMessages;

	// BrnCrashedStuntHudState.h:126
	bool mbBoostBar;

	// BrnCrashedStuntHudState.h:129
	InGameMessagesComponent mHudMessageComponent;

	// BrnCrashedStuntHudState.cpp:61
	extern const char[20] macHudMessagesName;

	// BrnCrashedStuntHudState.h:133
	BrnGui::AnimationComponent mStuntScoreAnimator;

	// BrnCrashedStuntHudState.cpp:58
	extern const char[16] KAC_SCORE_ANIMATOR_NAME;

	// BrnCrashedStuntHudState.h:136
	BrnGui::AnimationComponent mStuntMultiplierAnimator;

	// BrnCrashedStuntHudState.cpp:59
	extern const char[21] KAC_MULTIPLIER_ANIMATOR_NAME;

	// BrnCrashedStuntHudState.h:139
	BrnGui::AnimationComponent mScoreTallyAnimator;

	// BrnCrashedStuntHudState.cpp:63
	extern const char[15] KAC_SCORETALLY_NAME;

	// BrnCrashedStuntHudState.h:142
	BrnGui::TextField mStuntRunScoreText;

	// BrnCrashedStuntHudState.cpp:65
	extern const char[14] KAC_STUNTRUNSCORE_NAME;

	// BrnCrashedStuntHudState.h:144
	BrnGui::TextField mStuntRunMultiplierText;

	// BrnCrashedStuntHudState.cpp:66
	extern const char[19] KAC_STUNTRUNMULT_NAME;

	// BrnCrashedStuntHudState.cpp:68
	extern const float32_t KF_TALLYSCORE_DURATION;

	// BrnCrashedStuntHudState.h:148
	float32_t mfTallyScoreStartTime;

	// BrnCrashedStuntHudState.h:149
	int32_t miStartMultiplier;

	// BrnCrashedStuntHudState.h:150
	int32_t miStartScore;

	// BrnCrashedStuntHudState.h:151
	int32_t miFinishMultiplier;

	// BrnCrashedStuntHudState.h:152
	int32_t miFinishScore;

	// BrnCrashedStuntHudState.h:154
	int32_t miCurrentScore;

	// BrnCrashedStuntHudState.h:155
	int32_t miCurrentMultiplier;

	// BrnCrashedStuntHudState.h:158
	MovieClipRef mCrashHudAnimator;

public:
	// BrnCrashedStuntHudState.cpp:90
	virtual void OnEnter();

	// BrnCrashedStuntHudState.cpp:717
	virtual void OnLeave();

	// BrnCrashedStuntHudState.cpp:146
	virtual void Update();

	// BrnCrashedStuntHudState.h:97
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashedStuntHudState.cpp:220
	bool UpdateLoading();

	// BrnCrashedStuntHudState.cpp:266
	bool UpdateWFInit();

	// BrnCrashedStuntHudState.cpp:290
	bool UpdateSetupState();

	// BrnCrashedStuntHudState.cpp:373
	// Declaration
	bool UpdateRunning() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashedStuntHudState.cpp:490
		using namespace CgsDev::Message;

	}

	// BrnCrashedStuntHudState.cpp:541
	void UpdatePermenant();

	// BrnCrashedStuntHudState.cpp:613
	void UpdateCrashRunningState();

	// BrnCrashedStuntHudState.h:188
	void SetExpectedComponent(const char *);

	// BrnCrashedStuntHudState.cpp:747
	void SetExpectedAptComponentList();

	// BrnCrashedStuntHudState.h:196
	void ClearExpectedComponent();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashedStuntHudState {
	public:
		CrashedStuntHudState();

	private:
		// BrnCrashedStuntHudState.h:105
		extern int32_t[] maiEventToObserve;

		// BrnCrashedStuntHudState.h:106
		extern const int32_t miNumEventsObserved;

		// BrnCrashedStuntHudState.h:108
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashedStuntHudState.h:109
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashedStuntHudState.h:130
		extern char[] macHudMessagesName;

		// BrnCrashedStuntHudState.h:134
		extern char[] KAC_SCORE_ANIMATOR_NAME;

		// BrnCrashedStuntHudState.h:137
		extern char[] KAC_MULTIPLIER_ANIMATOR_NAME;

		// BrnCrashedStuntHudState.h:140
		extern char[] KAC_SCORETALLY_NAME;

		// BrnCrashedStuntHudState.h:143
		extern char[] KAC_STUNTRUNSCORE_NAME;

		// BrnCrashedStuntHudState.h:145
		extern char[] KAC_STUNTRUNMULT_NAME;

		// BrnCrashedStuntHudState.h:147
		extern const float32_t KF_TALLYSCORE_DURATION;

	}

}

// BrnCrashedStuntHudState.h:57
void BrnGui::CrashedStuntHudState::CrashedStuntHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

