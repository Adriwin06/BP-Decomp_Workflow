// BrnPauseScreen.h:92
extern int32_t[] maiEventToObserve;

// BrnPauseScreen.h:93
extern const int32_t miNumEventsObserved;

// BrnPauseScreen.h:100
extern char[] KAC_OPTION_CPT_NAME_BASE;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PauseScreen {
		// BrnPauseScreen.h:70
		enum ESubState {
			E_SUBSTATE_LOADING = 0,
			E_SUBSTATE_INITIALISING = 1,
			E_SUBSTATE_PROMPT = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnPauseScreen.h:44
struct BrnGui::PauseScreen : public CgsGui::State {
private:
	// BrnPauseScreen.h:89
	BrnGui::PauseScreen::ESubState meSubState;

	// BrnPauseScreen.cpp:26
	extern const int32_t[2] maiEventToObserve;

	// BrnPauseScreen.cpp:32
	extern const int32_t miNumEventsObserved = 2;

	// BrnPauseScreen.cpp:35
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnPauseScreen.cpp:43
	extern uint32_t muNumResourcesToLoad;

	// BrnPauseScreen.cpp:47
	extern const char[7] KAC_OPTION_CPT_NAME_BASE;

	// BrnPauseScreen.cpp:51
	extern const char *[1] KAPC_PAUSE_OPTION_STRING_IDS;

	// BrnPauseScreen.h:107
	BrnGui::MenuComponent mPauseOptions;

public:
	// BrnPauseScreen.cpp:74
	virtual void OnEnter();

	// BrnPauseScreen.cpp:213
	virtual void OnLeave();

	// BrnPauseScreen.cpp:110
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPauseScreen.cpp:187
		using namespace CgsDev::Message;

	}

	// BrnPauseScreen.h:62
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnPauseScreen.cpp:238
	void HandleControllerInput(const CgsModule::Event *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PauseScreen {
	public:
		PauseScreen();

	private:
		// BrnPauseScreen.h:92
		extern int32_t[] maiEventToObserve;

		// BrnPauseScreen.h:93
		extern const int32_t miNumEventsObserved;

		// BrnPauseScreen.h:100
		extern char[] KAC_OPTION_CPT_NAME_BASE;

	}

}

// BrnPauseScreen.h:44
void BrnGui::PauseScreen::PauseScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

