// BrnPausedHudState.h:70
extern int32_t[] maiEventToObserve;

// BrnPausedHudState.h:71
extern const int32_t miNumEventsObserved;

// BrnPausedHudState.h:45
struct BrnGui::PausedHudState : public CgsGui::State {
private:
	// BrnPausedHudState.cpp:25
	extern const int32_t[3] maiEventToObserve;

	// BrnPausedHudState.cpp:32
	extern const int32_t miNumEventsObserved = 3;

public:
	// BrnPausedHudState.cpp:52
	virtual void OnEnter();

	// BrnPausedHudState.cpp:157
	virtual void OnLeave();

	// BrnPausedHudState.cpp:69
	virtual void Update();

	// BrnPausedHudState.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PausedHudState {
	public:
		PausedHudState();

	private:
		// BrnPausedHudState.h:70
		extern int32_t[] maiEventToObserve;

		// BrnPausedHudState.h:71
		extern const int32_t miNumEventsObserved;

	}

}

// BrnPausedHudState.h:45
void BrnGui::PausedHudState::PausedHudState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

