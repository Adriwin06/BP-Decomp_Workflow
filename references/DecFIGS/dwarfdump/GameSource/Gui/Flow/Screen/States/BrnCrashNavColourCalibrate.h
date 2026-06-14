// BrnCrashNavColourCalibrate.h:95
extern char[] KAC_OPTION_NAME;

// BrnCrashNavColourCalibrate.h:103
extern int32_t[] maiEventToObserve;

// BrnCrashNavColourCalibrate.h:104
extern const int32_t miNumEventsObserved;

// BrnCrashNavColourCalibrate.h:106
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavColourCalibrate.h:107
extern uint32_t muNumResourcesToLoad;

// BrnCrashNavColourCalibrate.h:116
extern char[] KAC_HELPITEM_ACCEPT;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavColourCalibrate {
		// BrnCrashNavColourCalibrate.h:73
		enum EInternalScreenState {
			E_INTERNALSCREENSTATE_SETUP = 0,
			E_INTERNALSCREENSTATE_LOADING = 1,
			E_INTERNALSCREENSTATE_INITIALISING = 2,
			E_INTERNALSCREENSTATE_RUNNING = 3,
			E_INTERNALSCREENSTATE_LEAVING = 4,
			E_RACEINTERNALSTATE_COUNT = 5,
		}

		// BrnCrashNavColourCalibrate.h:84
		enum ECCOptions {
			E_CCOPTION_BRIGHTNESS = 0,
			E_CCOPTION_COUNT = 1,
		}

	}

}

// BrnCrashNavColourCalibrate.h:46
struct BrnGui::CrashNavColourCalibrate : public CgsGui::State {
private:
	// BrnCrashNavColourCalibrate.h:94
	BrnGui::MenuToggle mBrightnessToggle;

	// BrnCrashNavColourCalibrate.cpp:52
	extern const char[15] KAC_OPTION_NAME;

	// BrnCrashNavColourCalibrate.cpp:54
	extern const char *[100] KAPC_BRIGHTNESS_OPTION_VALUES;

	// BrnCrashNavColourCalibrate.h:99
	BrnGui::CrashNavColourCalibrate::EInternalScreenState meCurrentState;

	// BrnCrashNavColourCalibrate.h:101
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavColourCalibrate.cpp:30
	extern const int32_t[2] maiEventToObserve;

	// BrnCrashNavColourCalibrate.cpp:36
	extern const int32_t miNumEventsObserved = 2;

	// BrnCrashNavColourCalibrate.cpp:39
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnCrashNavColourCalibrate.cpp:45
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavColourCalibrate.h:109
	int32_t mBrightnessSetting;

	// BrnCrashNavColourCalibrate.h:110
	int32_t mContrastSetting;

	// BrnCrashNavColourCalibrate.h:112
	BrnGui::CrashNavColourCalibrate::ECCOptions mCurrentlySelectedOption;

	// BrnCrashNavColourCalibrate.h:115
	BrnGui::HelpItem mHelpItemAccept;

	// BrnCrashNavColourCalibrate.cpp:50
	extern const char[18] KAC_HELPITEM_ACCEPT;

	// BrnCrashNavColourCalibrate.h:118
	bool mbSettingsChanged;

public:
	// BrnCrashNavColourCalibrate.cpp:86
	virtual void OnEnter();

	// BrnCrashNavColourCalibrate.cpp:257
	virtual void OnLeave();

	// BrnCrashNavColourCalibrate.cpp:164
	virtual void Update();

	// BrnCrashNavColourCalibrate.h:64
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavColourCalibrate.cpp:287
	bool UpdateInitSetup();

	// BrnCrashNavColourCalibrate.cpp:329
	bool UpdateLoading();

	// BrnCrashNavColourCalibrate.cpp:369
	bool UpdateWFInit();

	// BrnCrashNavColourCalibrate.cpp:449
	bool UpdateRunning();

	// BrnCrashNavColourCalibrate.cpp:467
	void UpdatePermanent();

	// BrnCrashNavColourCalibrate.cpp:514
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavColourCalibrate.cpp:672
	void HandleOptionChanged();

	// BrnCrashNavColourCalibrate.cpp:686
	void GetSettingsFromProfile();

	// BrnCrashNavColourCalibrate.cpp:400
	void SetupComponents();

	// BrnCrashNavColourCalibrate.cpp:706
	void ApplySettings();

	// BrnCrashNavColourCalibrate.cpp:725
	void SaveSettings();

	// BrnCrashNavColourCalibrate.cpp:128
	void ShowCalibrationCard(bool);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavColourCalibrate {
	public:
		CrashNavColourCalibrate();

	private:
		// BrnCrashNavColourCalibrate.h:95
		extern char[] KAC_OPTION_NAME;

		// BrnCrashNavColourCalibrate.h:103
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavColourCalibrate.h:104
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavColourCalibrate.h:106
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavColourCalibrate.h:107
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashNavColourCalibrate.h:116
		extern char[] KAC_HELPITEM_ACCEPT;

	}

}

// BrnCrashNavColourCalibrate.h:46
void BrnGui::CrashNavColourCalibrate::CrashNavColourCalibrate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

