// BrnInvisibleOverlayState.h:68
extern int32_t[] maiEventToObserve;

// BrnInvisibleOverlayState.h:69
extern const int32_t miNumEventsObserved;

// BrnInvisibleOverlayState.h:72
extern char[] macOverlayComponentName;

// BrnInvisibleOverlayState.h:43
struct BrnGui::InvisibleOverlayState : public CgsGui::State {
private:
	// BrnInvisibleOverlayState.cpp:26
	extern const int32_t[2] maiEventToObserve;

	// BrnInvisibleOverlayState.cpp:32
	extern const int32_t miNumEventsObserved = 2;

	// BrnInvisibleOverlayState.h:71
	OverlayComponent mOverlayComponent;

	// BrnInvisibleOverlayState.cpp:34
	extern const char[12] macOverlayComponentName;

public:
	// BrnInvisibleOverlayState.cpp:53
	virtual void OnEnter();

	// BrnInvisibleOverlayState.cpp:240
	virtual void OnLeave();

	// BrnInvisibleOverlayState.cpp:82
	virtual void Update();

	// BrnInvisibleOverlayState.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct InvisibleOverlayState {
	public:
		InvisibleOverlayState();

	private:
		// BrnInvisibleOverlayState.h:68
		extern int32_t[] maiEventToObserve;

		// BrnInvisibleOverlayState.h:69
		extern const int32_t miNumEventsObserved;

		// BrnInvisibleOverlayState.h:72
		extern char[] macOverlayComponentName;

	}

}

// BrnInvisibleOverlayState.h:43
void BrnGui::InvisibleOverlayState::InvisibleOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

