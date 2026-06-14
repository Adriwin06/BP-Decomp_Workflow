// BrnPreloadOverlayState.h:83
extern int32_t[] maiEventToObserve;

// BrnPreloadOverlayState.h:84
extern const int32_t miNumEventsObserved;

// BrnPreloadOverlayState.h:86
extern sResourceTuple[] maResourcesToLoad;

// BrnPreloadOverlayState.h:87
extern uint32_t muNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PreloadOverlayState {
		// BrnPreloadOverlayState.h:47
		enum OverlayInternalState {
			E_OVERLAYINTERNALSTATE_START = 0,
			E_OVERLAYINTERNALSTATE_GETCACHE = 1,
			E_OVERLAYINTERNALSTATE_WFLOADMAIN = 2,
			E_OVERLAYINTERNALSTATE_WFLOAD = 3,
			E_OVERLAYINTERNALSTATE_DONE = 4,
			E_OVERLAYINTERNALSTATE_COUNT = 5,
		}

	}

}

// BrnPreloadOverlayState.h:42
struct BrnGui::PreloadOverlayState : public CgsGui::State {
private:
	// BrnPreloadOverlayState.h:80
	BrnGui::PreloadOverlayState::OverlayInternalState meInternalState;

	// BrnPreloadOverlayState.h:81
	BrnGui::GuiCache * mpGuiCache;

	// BrnPreloadOverlayState.cpp:26
	extern const int32_t[1] maiEventToObserve;

	// BrnPreloadOverlayState.cpp:30
	extern const int32_t miNumEventsObserved = 1;

	// BrnPreloadOverlayState.cpp:33
	extern sResourceTuple[9] maResourcesToLoad;

	// BrnPreloadOverlayState.cpp:46
	extern uint32_t muNumResourcesToLoad;

public:
	// BrnPreloadOverlayState.cpp:64
	virtual void OnEnter();

	// BrnPreloadOverlayState.cpp:160
	virtual void OnLeave();

	// BrnPreloadOverlayState.cpp:83
	virtual void Update();

	// BrnPreloadOverlayState.h:72
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnPreloadOverlayState.cpp:176
	bool GetCache();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PreloadOverlayState {
	public:
		PreloadOverlayState();

	private:
		// BrnPreloadOverlayState.h:83
		extern int32_t[] maiEventToObserve;

		// BrnPreloadOverlayState.h:84
		extern const int32_t miNumEventsObserved;

		// BrnPreloadOverlayState.h:86
		extern sResourceTuple[] maResourcesToLoad;

		// BrnPreloadOverlayState.h:87
		extern uint32_t muNumResourcesToLoad;

	}

}

// BrnPreloadOverlayState.h:42
void BrnGui::PreloadOverlayState::PreloadOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

