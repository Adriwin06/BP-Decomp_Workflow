// BrnCredits.h:81
extern int32_t[] maiEventToObserve;

// BrnCredits.h:82
extern const int32_t miNumEventsObserved;

// BrnCredits.h:84
extern sResourceTuple[] maResourcesToLoad;

// BrnCredits.h:85
extern const uint32_t muNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct Credits {
		// BrnCredits.h:71
		enum InternalState {
			E_INTERNALSTATE_LOADRESOURCES = 0,
			E_INTERNALSTATE_WFINIT = 1,
			E_INTERNALSTATE_RUNNING = 2,
			E_INTERNALSTATE_LEFT = 3,
			E_INTERNALSTATE_COUNT = 4,
		}

	}

}

// BrnCredits.h:44
struct BrnGui::Credits : public CgsGui::State {
private:
	// BrnCredits.cpp:26
	extern const int32_t[2] maiEventToObserve;

	// BrnCredits.cpp:32
	extern const int32_t miNumEventsObserved = 2;

	// BrnCredits.cpp:34
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnCredits.cpp:39
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnCredits.h:87
	BrnGui::GuiCache * mpGuiCache;

	// BrnCredits.h:88
	BrnGui::Credits::InternalState meInternalState;

public:
	// BrnCredits.cpp:58
	virtual void OnEnter();

	// BrnCredits.cpp:143
	virtual void OnLeave();

	// BrnCredits.cpp:82
	virtual void Update();

	// BrnCredits.h:62
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCredits.cpp:175
	bool UpdateLoadResources();

	// BrnCredits.cpp:207
	bool UpdateWFInit();

	// BrnCredits.cpp:224
	void UpdateRunning();

	// BrnCredits.cpp:271
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Credits {
	public:
		Credits();

	private:
		// BrnCredits.h:81
		extern int32_t[] maiEventToObserve;

		// BrnCredits.h:82
		extern const int32_t miNumEventsObserved;

		// BrnCredits.h:84
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCredits.h:85
		extern const uint32_t muNumResourcesToLoad;

	}

}

// BrnCredits.h:44
void BrnGui::Credits::Credits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

