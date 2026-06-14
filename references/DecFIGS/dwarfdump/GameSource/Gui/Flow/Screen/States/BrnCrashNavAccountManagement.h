// BrnCrashNavAccountManagement.h:112
extern char[] KAC_TOS_TEXT_COMPONENT;

// BrnCrashNavAccountManagement.h:116
extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

// BrnCrashNavAccountManagement.h:117
extern const float32_t KF_AXIS_DEAD_ZONE;

// BrnCrashNavAccountManagement.h:123
extern int32_t[] maiEventToObserve;

// BrnCrashNavAccountManagement.h:124
extern const int32_t miNumEventsObserved;

// BrnCrashNavAccountManagement.h:126
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavAccountManagement.h:127
extern uint32_t muNumResourcesToLoad;

// BrnCrashNavAccountManagement.h:134
extern char[] KAC_OPTION_NAME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavAccountManagement {
		// BrnCrashNavAccountManagement.h:74
		enum EInternalScreenState {
			E_INTERNALSCREENSTATE_SETUP = 0,
			E_INTERNALSCREENSTATE_LOADING = 1,
			E_INTERNALSCREENSTATE_INITIALISING = 2,
			E_INTERNALSCREENSTATE_RUNNING = 3,
			E_INTERNALSCREENSTATE_WAITING_COMPLETE = 4,
			E_INTERNALSCREENSTATE_LEAVING = 5,
			E_RACEINTERNALSTATE_COUNT = 6,
		}

		// BrnCrashNavAccountManagement.h:95
		enum EDownloadState {
			E_DOWNLOAD_STATE_DOWNLOADING = 0,
			E_DOWNLOAD_STATE_DONE = 1,
			E_DOWNLOAD_STATE_FAILED = 2,
			E_DOWNLOAD_STATE_COUNT = 3,
		}

	}

}

// BrnCrashNavAccountManagement.h:46
struct BrnGui::CrashNavAccountManagement : public CgsGui::State {
private:
	// BrnCrashNavAccountManagement.cpp:67
	extern const char[8] KAC_TOS_TEXT_COMPONENT;

	// BrnCrashNavAccountManagement.cpp:69
	extern const char *[3] KAPC_TOS_TEXT_STRING_ID;

	// BrnCrashNavAccountManagement.cpp:53
	extern const char *[2] KAPC_YES_NO_BUTTON_STRING_ID;

	// BrnCrashNavAccountManagement.cpp:76
	extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

	// BrnCrashNavAccountManagement.cpp:77
	extern const float32_t KF_AXIS_DEAD_ZONE;

	// BrnCrashNavAccountManagement.h:119
	BrnGui::CrashNavAccountManagement::EInternalScreenState meCurrentState;

	// BrnCrashNavAccountManagement.h:121
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavAccountManagement.cpp:30
	extern const int32_t[9] maiEventToObserve;

	// BrnCrashNavAccountManagement.cpp:43
	extern const int32_t miNumEventsObserved = 9;

	// BrnCrashNavAccountManagement.cpp:46
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnCrashNavAccountManagement.cpp:51
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavAccountManagement.cpp:59
	extern const char *[3] KAPC_OPTIONS;

	// BrnCrashNavAccountManagement.h:131
	BrnGui::MenuToggleGroup mOptionToggles;

	// BrnCrashNavAccountManagement.h:132
	BrnGui::TextField mTOSText;

	// BrnCrashNavAccountManagement.cpp:66
	extern const char[13] KAC_OPTION_NAME;

	// BrnCrashNavAccountManagement.h:136
	BrnGui::CrashNavAccountManagement::EDownloadState meDownloadState;

	// BrnCrashNavAccountManagement.h:138
	float32_t mfScrollAmount;

	// BrnCrashNavAccountManagement.h:139
	float32_t mfLastAxisValue;

	// BrnCrashNavAccountManagement.h:141
	bool mbAgreeToShareInfoEA;

	// BrnCrashNavAccountManagement.h:142
	bool mbAgreeToShareInfoPartners;

	// BrnCrashNavAccountManagement.h:143
	bool mbTelemetryEnable;

public:
	// BrnCrashNavAccountManagement.cpp:96
	virtual void OnEnter();

	// BrnCrashNavAccountManagement.cpp:234
	virtual void OnLeave();

	// BrnCrashNavAccountManagement.cpp:141
	virtual void Update();

	// BrnCrashNavAccountManagement.h:64
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavAccountManagement.cpp:261
	bool UpdateInitSetup();

	// BrnCrashNavAccountManagement.cpp:304
	bool UpdateLoading();

	// BrnCrashNavAccountManagement.cpp:342
	bool UpdateWFInit();

	// BrnCrashNavAccountManagement.cpp:431
	bool UpdateRunning();

	// BrnCrashNavAccountManagement.cpp:447
	void UpdatePermanent();

	// BrnCrashNavAccountManagement.cpp:563
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavAccountManagement.cpp:757
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavAccountManagement.cpp:720
	void HandleNewsAndTOSEvent(const GuiEventNetworkNewsAndTOS *);

	// BrnCrashNavAccountManagement.cpp:686
	void HandleControllerAxis(const GuiEventControllerAxis *);

	// BrnCrashNavAccountManagement.cpp:771
	// Declaration
	void HandleAccountUpdateComplete(const GuiEventOnlineAccountUpdateComplete *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:6536
		typedef GuiEvent<125> GuiEventOnlineAccountUpdateComplete;

	}

	// BrnCrashNavAccountManagement.cpp:794
	void HandleAccountSettings(const GuiEventOnlineAccountSettings *);

	// BrnCrashNavAccountManagement.cpp:811
	void HandleOptionChanged();

	// BrnCrashNavAccountManagement.cpp:852
	void GetSettingsFromProfile();

	// BrnCrashNavAccountManagement.cpp:865
	void ApplyAndSaveSettings();

	// BrnCrashNavAccountManagement.cpp:889
	void ShowText();

	// BrnCrashNavAccountManagement.cpp:907
	void TriggerSound(EGameInputActions);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavAccountManagement {
	public:
		CrashNavAccountManagement();

	private:
		// BrnCrashNavAccountManagement.h:112
		extern char[] KAC_TOS_TEXT_COMPONENT;

		// BrnCrashNavAccountManagement.h:116
		extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

		// BrnCrashNavAccountManagement.h:117
		extern const float32_t KF_AXIS_DEAD_ZONE;

		// BrnCrashNavAccountManagement.h:123
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavAccountManagement.h:124
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavAccountManagement.h:126
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavAccountManagement.h:127
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashNavAccountManagement.h:134
		extern char[] KAC_OPTION_NAME;

	}

}

// BrnCrashNavAccountManagement.h:46
void BrnGui::CrashNavAccountManagement::CrashNavAccountManagement() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

