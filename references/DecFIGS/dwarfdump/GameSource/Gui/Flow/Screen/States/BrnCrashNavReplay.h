// BrnCrashNavReplay.h:89
extern int32_t[] maiEventToObserve;

// BrnCrashNavReplay.h:90
extern const int32_t miNumEventsObserved;

// BrnCrashNavReplay.h:92
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavReplay.h:93
extern const uint32_t muNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavReplay {
		// BrnCrashNavReplay.h:72
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADRESOURCES = 1,
			E_INTERNALSTATE_WFINIT = 2,
			E_INTERNALSTATE_RUNNING = 3,
			E_INTERNALSTATE_PLAYING = 4,
			E_INTERNALSTATE_LEFT = 5,
			E_INTERNALSTATE_COUNT = 6,
		}

	}

}

// BrnCrashNavReplay.h:45
struct BrnGui::CrashNavReplay : public CgsGui::State {
private:
	// BrnCrashNavReplay.h:84
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavReplay.h:85
	BrnGui::CrashNavReplay::InternalState meInternalState;

	// BrnCrashNavReplay.h:86
	StatusInterface mReplayStatus;

	// BrnCrashNavReplay.h:87
	int32_t miSelectedReel;

	// BrnCrashNavReplay.cpp:30
	extern const int32_t[3] maiEventToObserve;

	// BrnCrashNavReplay.cpp:37
	extern const int32_t miNumEventsObserved = 3;

	// BrnCrashNavReplay.cpp:39
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnCrashNavReplay.cpp:44
	extern const uint32_t muNumResourcesToLoad = 1;

public:
	// BrnCrashNavReplay.cpp:63
	virtual void OnEnter();

	// BrnCrashNavReplay.cpp:174
	virtual void OnLeave();

	// BrnCrashNavReplay.cpp:98
	virtual void Update();

	// BrnCrashNavReplay.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavReplay.cpp:202
	void UpdateGetCache();

	// BrnCrashNavReplay.cpp:242
	bool UpdateLoadResources();

	// BrnCrashNavReplay.cpp:269
	bool UpdateWFInit();

	// BrnCrashNavReplay.cpp:287
	void UpdateRunning();

	// BrnCrashNavReplay.cpp:389
	void UpdatePlaying();

	// BrnCrashNavReplay.cpp:516
	// Declaration
	void PlayReel(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavReplay.cpp:518
		using namespace CgsDev::Message;

	}

	// BrnCrashNavReplay.cpp:536
	// Declaration
	void DeleteReel(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavReplay.cpp:538
		using namespace CgsDev::Message;

	}

	// BrnCrashNavReplay.cpp:555
	// Declaration
	void StopPlaying() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavReplay.cpp:557
		using namespace CgsDev::Message;

	}

	// BrnCrashNavReplay.cpp:452
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavReplay {
	public:
		CrashNavReplay();

	private:
		// BrnCrashNavReplay.h:89
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavReplay.h:90
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavReplay.h:92
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavReplay.h:93
		extern const uint32_t muNumResourcesToLoad;

	}

}

// BrnCrashNavReplay.h:45
void BrnGui::CrashNavReplay::CrashNavReplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

