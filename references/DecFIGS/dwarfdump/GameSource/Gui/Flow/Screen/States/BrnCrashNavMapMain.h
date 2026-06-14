// BrnCrashNavMapMain.h:72
extern int32_t[] maiEventToObserve;

// BrnCrashNavMapMain.h:73
extern const int32_t miNumEventsObserved;

// BrnCrashNavMapMain.h:41
struct BrnGui::CrashNavMapMain : public BrnGui::CrashNavMap {
private:
	// BrnCrashNavMapMain.cpp:29
	extern const int32_t[18] maiEventToObserve;

	// BrnCrashNavMapMain.cpp:54
	extern const int32_t miNumEventsObserved = 18;

	// BrnCrashNavMapMain.cpp:56
	extern const char * KPC_SOUND_MAP_ZOOM;

	// BrnCrashNavMapMain.h:76
	bool mbFirstUpdate;

public:
	// BrnCrashNavMapMain.cpp:75
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCrashNavMapMain.cpp:97
	virtual void OnEnter();

	// BrnCrashNavMapMain.cpp:259
	virtual void OnLeave();

	// BrnCrashNavMapMain.cpp:129
	virtual void Update();

	// BrnCrashNavMapMain.h:65
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavMapMain.cpp:282
	virtual void HandleCrashNavInputPressed(const CgsModule::Event *);

	// BrnCrashNavMapMain.cpp:446
	virtual void HandleCrashNavInputReleased(const CgsModule::Event *);

	// BrnCrashNavMapMain.cpp:505
	void CheckForComponents(const CgsModule::Event *);

	// BrnCrashNavMapMain.cpp:564
	void SetTrackerToIcon();

	// BrnCrashNavMapMain.cpp:635
	void ToggleMapLegendDisplay();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavMapMain {
	public:
		CrashNavMapMain();

	private:
		// BrnCrashNavMapMain.h:72
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavMapMain.h:73
		extern const int32_t miNumEventsObserved;

	}

}

// BrnCrashNavMapMain.h:41
void BrnGui::CrashNavMapMain::CrashNavMapMain() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

