// BrnBootPreload.h:94
extern int32_t[] maiEventToObserve;

// BrnBootPreload.h:95
extern const int32_t miNumEventsObserved;

// BrnBootPreload.h:100
extern sResourceTuple[] maSecondPhaseResourcesToLoad;

// BrnBootPreload.h:101
extern uint32_t muSecondPhaseNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BootPreload {
		// BrnBootPreload.h:70
		enum PreloadStage {
			E_PRELOADSTAGE_START = 0,
			E_PRELOADSTAGE_WAIT = 1,
			E_PRELOADSTAGE_APT_MAIN = 2,
			E_PRELOADSTAGE_MISC = 3,
			E_PRELOADSTAGE_FLAPT = 4,
			E_PRELOADSTAGE_COMPONENTS = 5,
			E_PRELOADSTAGE_FIRST_SCREENS = 6,
			E_PRELOADSTAGE_CLEAR_LOADING_SCREEN = 7,
			E_PRELOADSTAGE_DONE = 8,
			E_PRELOADSTAGE_COUNT = 9,
		}

	}

}

// BrnBootPreload.h:43
struct BrnGui::BootPreload : public CgsGui::State {
private:
	// BrnBootPreload.cpp:33
	extern const int32_t[1] maiEventToObserve;

	// BrnBootPreload.cpp:38
	extern const int32_t miNumEventsObserved = 1;

	// BrnBootPreload.cpp:149
	extern sResourceTuple[1] maFirstPhaseResourcesToLoad;

	// BrnBootPreload.cpp:155
	extern uint32_t muFirstPhaseNumResourcesToLoad;

	// BrnBootPreload.cpp:40
	extern sResourceTuple[68] maSecondPhaseResourcesToLoad;

	// BrnBootPreload.cpp:130
	extern uint32_t muSecondPhaseNumResourcesToLoad;

	// BrnBootPreload.cpp:134
	extern sResourceTuple[1] maFlaptResourcesToLoad;

	// BrnBootPreload.cpp:140
	extern uint32_t muFlaptNumResourcesToLoad;

	// BrnBootPreload.cpp:158
	extern sResourceTuple[3] maEuropeanFontResourcesToLoad;

	// BrnBootPreload.cpp:165
	extern uint32_t muEuropeanFontNumResourcesToLoad;

	// BrnBootPreload.cpp:168
	extern sResourceTuple[2] maJapaneseFontResourcesToLoad;

	// BrnBootPreload.cpp:174
	extern uint32_t muJapaneseFontNumResourcesToLoad;

	// BrnBootPreload.h:116
	BrnGui::GuiCache * mpGuiCache;

	// BrnBootPreload.h:118
	BrnGui::BootPreload::PreloadStage mePreloadStage;

public:
	// BrnBootPreload.cpp:193
	virtual void OnEnter();

	// BrnBootPreload.cpp:382
	virtual void OnLeave();

	// BrnBootPreload.cpp:217
	virtual void Update();

	// BrnBootPreload.h:62
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootPreload {
	public:
		BootPreload();

	private:
		// BrnBootPreload.h:94
		extern int32_t[] maiEventToObserve;

		// BrnBootPreload.h:95
		extern const int32_t miNumEventsObserved;

		// BrnBootPreload.h:100
		extern sResourceTuple[] maSecondPhaseResourcesToLoad;

		// BrnBootPreload.h:101
		extern uint32_t muSecondPhaseNumResourcesToLoad;

	}

}

// BrnBootPreload.h:43
void BrnGui::BootPreload::BootPreload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

