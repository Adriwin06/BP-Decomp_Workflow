// BrnCrashNavStats.h:153
extern int32_t[] maiEventToObserve;

// BrnCrashNavStats.h:154
extern const int32_t miNumEventsObserved;

// BrnCrashNavStats.h:156
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavStats.h:157
extern uint32_t muNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavStats {
		// BrnCrashNavStats.h:137
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

// BrnCrashNavStats.h:46
struct BrnGui::CrashNavStats : public CgsGui::State {
private:
	// BrnCrashNavStats.h:149
	BrnGui::CrashNavStats::EInternalScreenState meCurrentState;

	// BrnCrashNavStats.h:151
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavStats.cpp:29
	extern const int32_t[4] maiEventToObserve;

	// BrnCrashNavStats.cpp:37
	extern const int32_t miNumEventsObserved = 4;

	// BrnCrashNavStats.cpp:40
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnCrashNavStats.cpp:45
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavStats.h:159
	BrnGui::TextField[36] maStatTextfields;

	// BrnCrashNavStats.cpp:48
	extern const char *[36] KAPC_STAT_TEXTFIELD_NAMES;

	// BrnCrashNavStats.h:163
	bool mbDataReceived;

public:
	// BrnCrashNavStats.cpp:118
	virtual void OnEnter();

	// BrnCrashNavStats.cpp:230
	virtual void OnLeave();

	// BrnCrashNavStats.cpp:147
	virtual void Update();

	// BrnCrashNavStats.h:127
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavStats.cpp:255
	bool UpdateInitSetup();

	// BrnCrashNavStats.cpp:302
	bool UpdateLoading();

	// BrnCrashNavStats.cpp:337
	bool UpdateInitialising();

	// BrnCrashNavStats.cpp:374
	bool UpdateRunning();

	// BrnCrashNavStats.cpp:390
	void UpdatePermanent();

	// BrnCrashNavStats.cpp:445
	void HandleStatData(const GuiEventStatsResponse *);

	// BrnCrashNavStats.cpp:584
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavStats.cpp:613
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavStats.cpp:626
	void SetExpectedAptComponents();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavStats {
	public:
		CrashNavStats();

	private:
		// BrnCrashNavStats.h:153
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavStats.h:154
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavStats.h:156
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavStats.h:157
		extern uint32_t muNumResourcesToLoad;

	}

}

// BrnCrashNavStats.h:46
void BrnGui::CrashNavStats::CrashNavStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

