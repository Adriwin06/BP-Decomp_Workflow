// BrnCrashNavAchievements.h:93
extern int32_t[] maiEventToObserve;

// BrnCrashNavAchievements.h:94
extern const int32_t miNumEventsObserved;

// BrnCrashNavAchievements.h:95
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnCrashNavAchievements.h:96
extern const int32_t miNumResourcesToLoad;

// BrnCrashNavAchievements.h:100
extern char[] KAC_ACHIEVEMENTS_LIST_COMPONENT;

// BrnCrashNavAchievements.h:101
extern char[] KAC_UP_ARROW_ANIMATION_COMPONENT;

// BrnCrashNavAchievements.h:102
extern char[] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

// BrnCrashNavAchievements.h:103
extern char[] KAC_TOTAL_ACHIEVEMENTS_COMPONENT;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavAchievements {
		// BrnCrashNavAchievements.h:83
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnCrashNavAchievements.h:48
struct BrnGui::CrashNavAchievements : public CgsGui::State {
private:
	// BrnCrashNavAchievements.cpp:31
	extern const int32_t[4] maiEventToObserve;

	// BrnCrashNavAchievements.cpp:39
	extern const int32_t miNumEventsObserved = 4;

	// BrnCrashNavAchievements.cpp:41
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnCrashNavAchievements.cpp:47
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnCrashNavAchievements.cpp:50
	extern const char[17] KAC_ACHIEVEMENTS_LIST_COMPONENT;

	// BrnCrashNavAchievements.cpp:51
	extern const char[17] KAC_UP_ARROW_ANIMATION_COMPONENT;

	// BrnCrashNavAchievements.cpp:52
	extern const char[19] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

	// BrnCrashNavAchievements.cpp:53
	extern const char[14] KAC_TOTAL_ACHIEVEMENTS_COMPONENT;

	// BrnCrashNavAchievements.cpp:55
	extern const char *[2] KAPC_ANIMATION_STATES;

	// BrnCrashNavAchievements.h:107
	BrnGui::CrashNavAchievements::ESubState meSubState;

	// BrnCrashNavAchievements.h:110
	BrnGui::AchievementsListComponent mAchievementsListComponent;

	// BrnCrashNavAchievements.h:111
	BrnGui::AnimationComponent mUpArrowAnimation;

	// BrnCrashNavAchievements.h:112
	BrnGui::AnimationComponent mDownArrowAnimation;

	// BrnCrashNavAchievements.h:114
	BrnGui::TextField mTotalAcheievements;

	// BrnCrashNavAchievements.h:116
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnCrashNavAchievements.cpp:79
	virtual void OnEnter();

	// BrnCrashNavAchievements.cpp:169
	virtual void OnLeave();

	// BrnCrashNavAchievements.cpp:105
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavAchievements.cpp:142
		using namespace CgsDev::Message;

	}

	// BrnCrashNavAchievements.h:74
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavAchievements.cpp:236
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnCrashNavAchievements.cpp:266
	void HandleControllerInputSelectParams(const GuiEventControllerInputPressed *);

	// BrnCrashNavAchievements.cpp:335
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnCrashNavAchievements.cpp:193
	void CheckForCompletedLoads();

	// BrnCrashNavAchievements.cpp:358
	void ShowScreen();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavAchievements {
	public:
		CrashNavAchievements();

	private:
		// BrnCrashNavAchievements.h:93
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavAchievements.h:94
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavAchievements.h:95
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnCrashNavAchievements.h:96
		extern const int32_t miNumResourcesToLoad;

		// BrnCrashNavAchievements.h:100
		extern char[] KAC_ACHIEVEMENTS_LIST_COMPONENT;

		// BrnCrashNavAchievements.h:101
		extern char[] KAC_UP_ARROW_ANIMATION_COMPONENT;

		// BrnCrashNavAchievements.h:102
		extern char[] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

		// BrnCrashNavAchievements.h:103
		extern char[] KAC_TOTAL_ACHIEVEMENTS_COMPONENT;

	}

}

// BrnCrashNavAchievements.h:48
void BrnGui::CrashNavAchievements::CrashNavAchievements() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

