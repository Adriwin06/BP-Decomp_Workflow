// BrnOnlineViewChallenges.h:91
extern int32_t[] maiEventToObserve;

// BrnOnlineViewChallenges.h:92
extern const int32_t miNumEventsObserved;

// BrnOnlineViewChallenges.h:93
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineViewChallenges.h:94
extern const int32_t miNumResourcesToLoad;

// BrnOnlineViewChallenges.h:98
extern char[] KAC_CHALLENGE_TOGGLE_COMPONENT;

// BrnOnlineViewChallenges.h:99
extern char[] KAC_CHALLENGE_LIST_COMPONENT;

// BrnOnlineViewChallenges.h:100
extern char[] KAC_UP_ARROW_ANIMATION_COMPONENT;

// BrnOnlineViewChallenges.h:101
extern char[] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

// BrnOnlineViewChallenges.h:106
extern char[] KAC_CHALLENGE_TOGGLE_TITLE_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineViewChallenges {
		// BrnOnlineViewChallenges.h:81
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnOnlineViewChallenges.h:46
struct BrnGui::OnlineViewChallenges : public CgsGui::State {
private:
	// BrnOnlineViewChallenges.cpp:30
	extern const int32_t[5] maiEventToObserve;

	// BrnOnlineViewChallenges.cpp:39
	extern const int32_t miNumEventsObserved = 5;

	// BrnOnlineViewChallenges.cpp:41
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineViewChallenges.cpp:46
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineViewChallenges.cpp:49
	extern const char[15] KAC_CHALLENGE_TOGGLE_COMPONENT;

	// BrnOnlineViewChallenges.cpp:50
	extern const char[14] KAC_CHALLENGE_LIST_COMPONENT;

	// BrnOnlineViewChallenges.cpp:51
	extern const char[17] KAC_UP_ARROW_ANIMATION_COMPONENT;

	// BrnOnlineViewChallenges.cpp:52
	extern const char[19] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

	// BrnOnlineViewChallenges.cpp:67
	extern const char *[2] KAPC_ANIMATION_STATES;

	// BrnOnlineViewChallenges.cpp:55
	extern const char[26] KAC_CHALLENGE_TOGGLE_TITLE_STRING_ID;

	// BrnOnlineViewChallenges.cpp:56
	extern const char *[7] KAPC_CHALLENGE_TOGGLE_ITEM_STRING_IDS;

	// BrnOnlineViewChallenges.h:109
	BrnGui::OnlineViewChallenges::ESubState meSubState;

	// BrnOnlineViewChallenges.h:112
	BrnGui::MenuToggle mChallengeToggle;

	// BrnOnlineViewChallenges.h:113
	BrnGui::ChallengeListComponent mChallengeListComponent;

	// BrnOnlineViewChallenges.h:114
	BrnGui::AnimationComponent mUpArrowAnimation;

	// BrnOnlineViewChallenges.h:115
	BrnGui::AnimationComponent mDownArrowAnimation;

	// BrnOnlineViewChallenges.h:117
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnOnlineViewChallenges.cpp:90
	virtual void OnEnter();

	// BrnOnlineViewChallenges.cpp:199
	virtual void OnLeave();

	// BrnOnlineViewChallenges.cpp:128
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineViewChallenges.cpp:171
		using namespace CgsDev::Message;

	}

	// BrnOnlineViewChallenges.h:72
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineViewChallenges.cpp:266
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineViewChallenges.cpp:296
	void HandleControllerInputSelectParams(const GuiEventControllerInputPressed *);

	// BrnOnlineViewChallenges.cpp:409
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineViewChallenges.cpp:223
	void CheckForCompletedLoads();

	// BrnOnlineViewChallenges.cpp:432
	void ShowScreen();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineViewChallenges {
	public:
		OnlineViewChallenges();

	private:
		// BrnOnlineViewChallenges.h:91
		extern int32_t[] maiEventToObserve;

		// BrnOnlineViewChallenges.h:92
		extern const int32_t miNumEventsObserved;

		// BrnOnlineViewChallenges.h:93
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineViewChallenges.h:94
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineViewChallenges.h:98
		extern char[] KAC_CHALLENGE_TOGGLE_COMPONENT;

		// BrnOnlineViewChallenges.h:99
		extern char[] KAC_CHALLENGE_LIST_COMPONENT;

		// BrnOnlineViewChallenges.h:100
		extern char[] KAC_UP_ARROW_ANIMATION_COMPONENT;

		// BrnOnlineViewChallenges.h:101
		extern char[] KAC_DOWN_ARROW_ANIMATION_COMPONENT;

		// BrnOnlineViewChallenges.h:106
		extern char[] KAC_CHALLENGE_TOGGLE_TITLE_STRING_ID;

	}

}

// BrnOnlineViewChallenges.h:46
void BrnGui::OnlineViewChallenges::OnlineViewChallenges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

