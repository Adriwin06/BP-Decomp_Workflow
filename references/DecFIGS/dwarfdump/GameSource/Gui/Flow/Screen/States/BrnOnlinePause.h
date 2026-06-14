// BrnOnlinePause.h:96
extern int32_t[] maiEventToObserve;

// BrnOnlinePause.h:97
extern const int32_t miNumEventsObserved;

// BrnOnlinePause.h:98
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlinePause.h:99
extern const int32_t miNumResourcesToLoad;

// BrnOnlinePause.h:101
extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

// BrnOnlinePause.h:104
extern char[] KAC_PAUSE_OPTIONS_COMPONENT;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePause {
		// BrnOnlinePause.h:72
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_PROMPT = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnOnlinePause.h:45
struct BrnGui::OnlinePause : public CgsGui::State {
private:
	// BrnOnlinePause.cpp:26
	extern const int32_t[6] maiEventToObserve;

	// BrnOnlinePause.cpp:36
	extern const int32_t miNumEventsObserved = 6;

	// BrnOnlinePause.cpp:38
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlinePause.cpp:43
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlinePause.cpp:60
	extern const int32_t KI_NUM_COMPONENTS_TO_LOAD = 3;

	// BrnOnlinePause.cpp:47
	extern const char[7] KAC_PAUSE_OPTIONS_COMPONENT;

	// BrnOnlinePause.cpp:50
	extern const char *[3] KAPC_PAUSE_OPTION_STRING_IDS;

	// BrnOnlinePause.h:110
	BrnGui::MenuComponent mPauseOptions;

	// BrnOnlinePause.h:112
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlinePause.h:114
	BrnGui::OnlinePause::ESubState meSubState;

public:
	// BrnOnlinePause.cpp:79
	virtual void OnEnter();

	// BrnOnlinePause.cpp:226
	virtual void OnLeave();

	// BrnOnlinePause.cpp:113
	virtual void Update();

	// BrnOnlinePause.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlinePause.cpp:380
	void CheckForCompletedLoads();

	// BrnOnlinePause.cpp:260
	void HandleControllerInput(const CgsModule::Event *);

	// BrnOnlinePause.cpp:358
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePause {
	public:
		OnlinePause();

	private:
		// BrnOnlinePause.h:96
		extern int32_t[] maiEventToObserve;

		// BrnOnlinePause.h:97
		extern const int32_t miNumEventsObserved;

		// BrnOnlinePause.h:98
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlinePause.h:99
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlinePause.h:101
		extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

		// BrnOnlinePause.h:104
		extern char[] KAC_PAUSE_OPTIONS_COMPONENT;

	}

}

// BrnOnlinePause.h:45
void BrnGui::OnlinePause::OnlinePause() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

