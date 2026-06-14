// BrnCarSelectMain.h:70
extern const int32_t KI_MAX_CAR_COUNT = 92;

// BrnCarSelectMain.h:212
extern char[] KAC_MANUFACTURER_NAME;

// BrnCarSelectMain.h:215
extern char[] KAC_CAR_NAME;

// BrnCarSelectMain.h:218
extern char[] KAC_COLOUR_SELECTOR_NAME;

// BrnCarSelectMain.h:235
extern char[] KAC_MANUFACTURER_LOGO;

// BrnCarSelectMain.h:241
extern char[] KAC_HELPITEM_CONTINUE;

// BrnCarSelectMain.h:242
extern char[] KAC_HELPITEM_BACK;

// BrnCarSelectMain.h:243
extern char[] KAC_HELPITEM_TOGGLE;

// BrnCarSelectMain.h:254
extern int32_t[] maiEventToObserve;

// BrnCarSelectMain.h:255
extern const int32_t miNumEventsObserved;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarSelectMain {
		// BrnCarSelectMain.h:72
		enum CarSelectState {
			E_CARSELECT_INVALID = -1,
			E_CARSELECT_UNLOADED = 0,
			E_CARSELECT_LOADING_COMPONENTS = 1,
			E_CARSELECT_VISIBLE_INTERACTIVE = 2,
			E_CARSELECT_COUNT = 3,
		}

	}

}

// BrnCarSelectMain.h:47
struct BrnGui::CarSetupInfo {
	// BrnCarSelectMain.h:53
	CgsID mCarId;

	// BrnCarSelectMain.h:54
	bool mbSelectable;

public:
	// BrnCarSelectMain.h:51
	void Construct();

}

// BrnCarSelectMain.h:67
struct BrnGui::CarSelectMain : public CgsGui::State {
	// BrnCarSelectMain.h:70
	extern const int32_t KI_MAX_CAR_COUNT = 92;

protected:
	// BrnCarSelectMain.h:211
	BrnGui::TextField mManufacturerName;

	// BrnCarSelectMain.cpp:73
	extern const char[10] KAC_MANUFACTURER_NAME;

	// BrnCarSelectMain.h:214
	BrnGui::TextField mCarName;

	// BrnCarSelectMain.cpp:72
	extern const char[11] KAC_CAR_NAME;

	// BrnCarSelectMain.cpp:31
	extern const char[15] KAC_COLOUR_SELECTOR_NAME;

	// BrnCarSelectMain.h:220
	BrnGui::GuiCache * mpGuiCache;

	// BrnCarSelectMain.h:221
	const VehicleList * mpVehicleList;

	// BrnCarSelectMain.h:224
	CarSetupInfo mCurrentSetupInfo;

	// BrnCarSelectMain.h:225
	CarSetupInfo mDesiredSetupInfo;

	// BrnCarSelectMain.h:227
	CgsID miMostRecentDropInId;

	// BrnCarSelectMain.h:229
	BrnGui::TextField mTitleText;

	// BrnCarSelectMain.cpp:69
	extern const char * mpacTitleTextFieldName;

	// BrnCarSelectMain.cpp:70
	extern const char * mpacWaitingTextFieldName;

	// BrnCarSelectMain.h:234
	BrnGui::ManufacturersIcon mManufacturerLogo;

	// BrnCarSelectMain.cpp:71
	extern const char[20] KAC_MANUFACTURER_LOGO;

	// BrnCarSelectMain.h:238
	BrnGui::HelpItem mHelpItemContinue;

	// BrnCarSelectMain.h:239
	BrnGui::HelpItem mHelpItemBack;

	// BrnCarSelectMain.cpp:75
	extern const char[20] KAC_HELPITEM_CONTINUE;

	// BrnCarSelectMain.cpp:76
	extern const char[16] KAC_HELPITEM_BACK;

	// BrnCarSelectMain.cpp:77
	extern const char[18] KAC_HELPITEM_TOGGLE;

	// BrnCarSelectMain.h:245
	bool mbCarChangeInProgress;

	// BrnCarSelectMain.cpp:64
	extern int32_t miNumSelectableCars;

	// BrnCarSelectMain.cpp:65
	extern int32_t miMaxAvailableCars;

	// BrnCarSelectMain.h:250
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

private:
	// BrnCarSelectMain.cpp:33
	extern const int32_t[21] maiEventToObserve;

	// BrnCarSelectMain.cpp:67
	extern const int32_t miNumEventsObserved = 21;

	// BrnCarSelectMain.cpp:79
	extern const char *[7] KPC_LAUNCH_FAILED_STRINGIDS;

	// BrnCarSelectMain.cpp:90
	extern const char *[17] KPAC_MODE_STRINGS;

	// BrnCarSelectMain.h:260
	BrnGui::CarSelectMain::CarSelectState meCurrentState;

	// BrnCarSelectMain.h:263
	const BrnResource::WheelList * mpWheelList;

	// BrnCarSelectMain.h:264
	EventReceiverQueue<256,16> mGameDataEventReceiverQueue;

public:
	// BrnCarSelectMain.cpp:128
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCarSelectMain.cpp:151
	virtual void OnEnter();

	// BrnCarSelectMain.cpp:197
	virtual void OnLeave();

	// BrnCarSelectMain.cpp:223
	virtual void Update();

	// BrnCarSelectMain.cpp:916
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

protected:
	// BrnCarSelectMain.cpp:936
	virtual void GetResourcesToLoadForCarSelect(const sResourceTuple **, uint32_t *) const;

	// BrnCarSelectMain.cpp:301
	// Declaration
	void ProcesssIncomingEvents() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectMain.cpp:416
		using namespace CgsDev::Message;

		// BrnCarSelectMain.cpp:428
		using namespace CgsDev::Message;

		// BrnCarSelectMain.cpp:446
		using namespace CgsDev::Message;

	}

	// BrnCarSelectMain.cpp:954
	virtual bool IsLoading() const;

	// BrnCarSelectMain.h:324
	const BrnGui::GuiCache * GetGuiCache() const;

	// BrnCarSelectMain.h:350
	BrnGui::GuiCache * GetGuiCache();

	// BrnCarSelectMain.h:337
	BrnGui::CarSelectMain::CarSelectState GetState() const;

	// BrnCarSelectMain.h:136
	virtual void PlayMovie();

	// BrnCarSelectMain.cpp:493
	virtual void AppendAptComponents();

	// BrnCarSelectMain.cpp:511
	virtual void SetupComponents();

	// BrnCarSelectMain.cpp:527
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:544
	virtual void UpdateGuiCache(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:563
	virtual void HandleCarInfoResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:789
	virtual void HandleCarAudioLoadComplete();

	// BrnCarSelectMain.cpp:803
	virtual void HandlePlayerInfoResponse(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:819
	virtual void HandleUnlockedLiveryResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:834
	virtual void HandlePlayerCarColourResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectMain.cpp:577
	virtual void SetupCar(const CarSetupInfo *);

	// BrnCarSelectMain.cpp:597
	// Declaration
	virtual void ExitCarSelection() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectMain.cpp:615
		using namespace CgsDev::Message;

	}

	// BrnCarSelectMain.h:363
	CgsID GetMostRecentDropInId() const;

	// BrnCarSelectMain.cpp:847
	void SetManufacturerLogo(CgsID);

	// BrnCarSelectMain.cpp:861
	void SetupCarNameComponent(CgsID);

private:
	// BrnCarSelectMain.cpp:627
	void TriggerSetupCar();

	// BrnCarSelectMain.cpp:732
	// Declaration
	void HandleLeftGameEvent(const CgsModule::Event *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectMain.cpp:770
		using namespace CgsDev::Message;

	}

	// BrnCarSelectMain.cpp:690
	void HandleLaunchingEvent(const CgsModule::Event *);

	// BrnCarSelectMain.cpp:667
	void HandleLaunchedEvent(const CgsModule::Event *);

	// BrnCarSelectMain.cpp:653
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

	// BrnCarSelectMain.h:292
	virtual sResourceTuple * GetResourcesToLoad() const;

	// BrnCarSelectMain.h:296
	virtual uint32_t GetNumberResourcesToLoad() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectMain {
	public:
		CarSelectMain();

		// Unknown accessibility
		// BrnCarSelectMain.h:70
		extern const int32_t KI_MAX_CAR_COUNT = 92;

	protected:
		// BrnCarSelectMain.h:212
		extern char[] KAC_MANUFACTURER_NAME;

		// BrnCarSelectMain.h:215
		extern char[] KAC_CAR_NAME;

		// BrnCarSelectMain.h:218
		extern char[] KAC_COLOUR_SELECTOR_NAME;

		// BrnCarSelectMain.h:235
		extern char[] KAC_MANUFACTURER_LOGO;

		// BrnCarSelectMain.h:241
		extern char[] KAC_HELPITEM_CONTINUE;

		// BrnCarSelectMain.h:242
		extern char[] KAC_HELPITEM_BACK;

		// BrnCarSelectMain.h:243
		extern char[] KAC_HELPITEM_TOGGLE;

	private:
		// BrnCarSelectMain.h:254
		extern int32_t[] maiEventToObserve;

		// BrnCarSelectMain.h:255
		extern const int32_t miNumEventsObserved;

	}

}

// BrnCarSelectMain.h:67
void BrnGui::CarSelectMain::CarSelectMain() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

