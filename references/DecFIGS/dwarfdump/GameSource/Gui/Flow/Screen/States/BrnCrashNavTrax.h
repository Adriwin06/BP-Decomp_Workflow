// BrnCrashNavTrax.h:91
extern int32_t[] maiEventToObserve;

// BrnCrashNavTrax.h:92
extern const int32_t miNumEventsObserved;

// BrnCrashNavTrax.h:94
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavTrax.h:95
extern uint32_t muNumResourcesToLoad;

// BrnCrashNavTrax.h:97
extern char[] mpacEATraxMenuComponentName;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavTrax {
		// BrnCrashNavTrax.h:76
		enum EInternalScreenState {
			E_INTERNALSCREENSTATE_SETUP = 0,
			E_INTERNALSCREENSTATE_LOADING = 1,
			E_INTERNALSCREENSTATE_INITIALISING = 2,
			E_INTERNALSCREENSTATE_RUNNING = 3,
			E_INTERNALSCREENSTATE_LEAVING = 4,
			E_RACEINTERNALSTATE_COUNT = 5,
		}

	}

}

// BrnCrashNavTrax.h:48
struct BrnGui::CrashNavTrax : public CgsGui::State {
private:
	// BrnCrashNavTrax.h:87
	BrnGui::CrashNavTrax::EInternalScreenState meCurrentState;

	// BrnCrashNavTrax.h:89
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavTrax.cpp:31
	extern const int32_t[4] maiEventToObserve;

	// BrnCrashNavTrax.cpp:39
	extern const int32_t miNumEventsObserved = 4;

	// BrnCrashNavTrax.cpp:42
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnCrashNavTrax.cpp:48
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavTrax.cpp:50
	extern const char[19] mpacEATraxMenuComponentName;

	// BrnCrashNavTrax.h:99
	BrnGui::EATraxMenuComponent mEATraxMenuComponent;

	// BrnCrashNavTrax.h:102
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode meTraxPlayOrderMode;

public:
	// BrnCrashNavTrax.cpp:69
	virtual void OnEnter();

	// BrnCrashNavTrax.cpp:178
	virtual void OnLeave();

	// BrnCrashNavTrax.cpp:95
	virtual void Update();

	// BrnCrashNavTrax.h:66
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavTrax.cpp:203
	bool UpdateInitSetup();

	// BrnCrashNavTrax.cpp:243
	bool UpdateLoading();

	// BrnCrashNavTrax.cpp:296
	bool UpdateWFInit();

	// BrnCrashNavTrax.cpp:333
	bool UpdateRunning();

	// BrnCrashNavTrax.cpp:351
	void UpdatePermanent();

	// BrnCrashNavTrax.cpp:406
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavTrax.cpp:634
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavTrax.cpp:647
	void HandleTraxEnabledStateChange();

	// BrnCrashNavTrax.cpp:542
	void HandleOverlayCompleteEvent(const GuiOverlayCompleteEvent *);

	// BrnCrashNavTrax.cpp:594
	void OnUpdatePlayOrderMode();

	// BrnCrashNavTrax.cpp:614
	void PreviewTrack(int32_t);

	// BrnCrashNavTrax.cpp:668
	void ApplyAndSaveSettings();

	// BrnCrashNavTrax.cpp:277
	void SetExpectedAptComponentList();

	// BrnCrashNavTrax.cpp:565
	void StateCancelFlow();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavTrax {
	public:
		CrashNavTrax();

	private:
		// BrnCrashNavTrax.h:91
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavTrax.h:92
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavTrax.h:94
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavTrax.h:95
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashNavTrax.h:97
		extern char[] mpacEATraxMenuComponentName;

	}

}

// BrnCrashNavTrax.h:48
void BrnGui::CrashNavTrax::CrashNavTrax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

