// BrnIdleHudState.h:81
extern int32_t[] maiEventToObserve;

// BrnIdleHudState.h:82
extern const int32_t miNumEventsObserved;

// BrnIdleHudState.h:83
extern sResourceTuple[] maResourcesToLoad;

// BrnIdleHudState.h:84
extern uint32_t muNumResourcesToLoad;

// BrnIdleHudState.h:85
extern const uint32_t KU_MAX_IDLEHUD_COMPONENTS_NUM = 4;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct IdleHudState {
		// BrnIdleHudState.h:69
		enum EInternalState {
			E_IDLE_HUD_RESOURCES = 0,
			E_IDLE_HUD_COMPONENTS = 1,
			E_IDLE_HUD_LOADED = 2,
			E_IDLE_HUD_NUMSTATES = 3,
		}

	}

}

// BrnIdleHudState.h:43
struct BrnGui::IdleHudState : public CgsGui::State {
private:
	// BrnIdleHudState.h:76
	BrnGui::IdleHudState::EInternalState meCurrentState;

	// BrnIdleHudState.h:78
	BrnGui::TextField mTextField;

	// BrnIdleHudState.h:79
	BrnGui::GuiCache * mpGuiCache;

	// BrnIdleHudState.h:80
	bool mbIsLoaded;

	// BrnIdleHudState.cpp:24
	extern const int32_t[1] maiEventToObserve;

	// BrnIdleHudState.cpp:29
	extern const int32_t miNumEventsObserved = 1;

	// BrnIdleHudState.cpp:31
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnIdleHudState.cpp:37
	extern uint32_t muNumResourcesToLoad;

	// BrnIdleHudState.h:85
	extern const uint32_t KU_MAX_IDLEHUD_COMPONENTS_NUM = 4;

	// BrnIdleHudState.h:86
	uint32_t[4] mauExpectedComponentIds;

	// BrnIdleHudState.h:87
	uint32_t muNumExpectedComponents;

public:
	// BrnIdleHudState.cpp:56
	virtual void OnEnter();

	// BrnIdleHudState.cpp:165
	virtual void OnLeave();

	// BrnIdleHudState.cpp:78
	virtual void Update();

	// BrnIdleHudState.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct IdleHudState {
	public:
		IdleHudState();

	private:
		// BrnIdleHudState.h:81
		extern int32_t[] maiEventToObserve;

		// BrnIdleHudState.h:82
		extern const int32_t miNumEventsObserved;

		// BrnIdleHudState.h:83
		extern sResourceTuple[] maResourcesToLoad;

		// BrnIdleHudState.h:84
		extern uint32_t muNumResourcesToLoad;

		// BrnIdleHudState.h:85
		extern const uint32_t KU_MAX_IDLEHUD_COMPONENTS_NUM = 4;

	}

}

// BrnIdleHudState.h:43
void BrnGui::IdleHudState::IdleHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

