// BrnGuiModule.h:133
struct BrnGui::ProfileHost : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnGuiModule.h:187
	BrnGui::ProfileManager mProfileManager;

public:
	// BrnGuiModule.h:781
	void Construct(GuiCache &, SystemUserProfile &, LanguageManager *);

	// BrnGuiModule.h:794
	bool Prepare(HeapMalloc *, LinearMalloc *);

	// BrnGuiModule.h:805
	bool Release();

	// BrnGuiModule.h:817
	void Destruct();

	// BrnGuiModule.h:917
	// Declaration
	void Bootup() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:919
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:929
	void Autosave(const ImageFileInfo *);

	// BrnGuiModule.h:947
	// Declaration
	void Save() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:949
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:958
	// Declaration
	void Load() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:960
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:971
	void ExportImage(void *, const char *, bool);

	// BrnGuiModule.h:839
	bool TaskIsRunning();

	// BrnGuiModule.h:828
	void Update();

	// BrnGuiModule.h:850
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiModule.h:861
	BrnGui::ProfileManager & GetProfileManager();

	// BrnGuiModule.h:876
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiModule.h:892
	void LoadImageFiles(const ImageFileInfo *);

	// BrnGuiModule.h:903
	void HandleMessageChoice(uint32_t);

private:
	// BrnGuiModule.h:982
	// Declaration
	virtual void HandleProfileTaskResult() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:984
		using namespace CgsDev::Message;

	}

}

// BrnGuiModule.h:332
extern const float32_t KF_POST_100PERCENT_SAVE_FREQUENCY;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiModule {
	public:
		// BrnGuiModule.h:660
		void SetMovieBootMode(bool);

		// BrnGuiModule.h:654
		BrnGui::BrnScreenFlow * GetScreenFlow();

		// BrnGuiModule.h:690
		bool IsPerformingInvite() const;

		// BrnGuiModule.h:701
		bool IsLoginNeededForInvite() const;

		// BrnGuiModule.h:648
		GuiTracker * GetGuiTracker();

	private:
		// BrnGuiModule.h:332
		extern const float32_t KF_POST_100PERCENT_SAVE_FREQUENCY;

	}

}

// BrnGuiModule.h:133
struct BrnGui::ProfileHost : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnGuiModule.h:187
	BrnGui::ProfileManager mProfileManager;

public:
	// BrnGuiModule.h:781
	void Construct(GuiCache &, SystemUserProfile &, CgsLanguage::LanguageManager *);

	// BrnGuiModule.h:794
	bool Prepare(HeapMalloc *, LinearMalloc *);

	// BrnGuiModule.h:805
	bool Release();

	// BrnGuiModule.h:817
	void Destruct();

	// BrnGuiModule.h:917
	// Declaration
	void Bootup() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:919
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:929
	void Autosave(const ImageFileInfo *);

	// BrnGuiModule.h:947
	// Declaration
	void Save() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:949
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:958
	// Declaration
	void Load() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:960
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:971
	void ExportImage(void *, const char *, bool);

	// BrnGuiModule.h:839
	bool TaskIsRunning();

	// BrnGuiModule.h:828
	void Update();

	// BrnGuiModule.h:850
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiModule.h:861
	BrnGui::ProfileManager & GetProfileManager();

	// BrnGuiModule.h:876
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiModule.h:892
	void LoadImageFiles(const ImageFileInfo *);

	// BrnGuiModule.h:903
	void HandleMessageChoice(uint32_t);

private:
	// BrnGuiModule.h:982
	// Declaration
	virtual void HandleProfileTaskResult() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:984
		using namespace CgsDev::Message;

	}

}

// BrnGuiModule.h:133
struct BrnGui::ProfileHost : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnGuiModule.h:187
	BrnGui::ProfileManager mProfileManager;

public:
	// BrnGuiModule.h:781
	void Construct(GuiCache &, SystemUserProfile &, LanguageManager *);

	// BrnGuiModule.h:794
	bool Prepare(CgsMemory::HeapMalloc *, LinearMalloc *);

	// BrnGuiModule.h:805
	bool Release();

	// BrnGuiModule.h:817
	void Destruct();

	// BrnGuiModule.h:917
	// Declaration
	void Bootup() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:919
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:929
	void Autosave(const ImageFileInfo *);

	// BrnGuiModule.h:947
	// Declaration
	void Save() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:949
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:958
	// Declaration
	void Load() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:960
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:971
	void ExportImage(void *, const char *, bool);

	// BrnGuiModule.h:839
	bool TaskIsRunning();

	// BrnGuiModule.h:828
	void Update();

	// BrnGuiModule.h:850
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiModule.h:861
	BrnGui::ProfileManager & GetProfileManager();

	// BrnGuiModule.h:876
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiModule.h:892
	void LoadImageFiles(const ImageFileInfo *);

	// BrnGuiModule.h:903
	void HandleMessageChoice(uint32_t);

private:
	// BrnGuiModule.h:982
	// Declaration
	virtual void HandleProfileTaskResult() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:984
		using namespace CgsDev::Message;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiModule {
		// BrnGuiModule.h:334
		enum GuiPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_MEMORY = 1,
			E_PREPARE_PARENT = 2,
			E_PREPARE_HUD = 3,
			E_PREPARE_SCREEN = 4,
			E_PREPARE_OVERLAY = 5,
			E_PREPARE_FSM_CONTROLLER = 6,
			E_PREPARE_CUSTOMRENDERER_PREPARE = 7,
			E_PREPARE_MOVIE_MANAGER = 8,
			E_PREPARE_COLOUR_CALIBRATION_SCREEN = 9,
			E_PREPARE_WORLD_DATA_CONTROLLER = 10,
			E_PREPARE_GUI_DEBUG_COMPONENT = 11,
			E_PREPARE_PROFILE = 12,
			E_PREPARE_SYSTEM_NOTIFICATIONS = 13,
			E_PREPARE_WF_RESOURCES = 14,
			E_PREPARE_DONE = 15,
		}

		// BrnGuiModule.h:369
		enum GuiReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_MEMORY = 1,
			E_RELEASE_PARENT = 2,
			E_RELEASE_HUD = 3,
			E_RELEASE_SCREEN = 4,
			E_RELEASE_OVERLAY = 5,
			E_RELEASE_FSM_CONTROLLER = 6,
			E_RELEASE_CUSTOMRENDERER_DESTRUCT = 7,
			E_RELEASE_CUSTOMRENDERER_RELEASE = 8,
			E_RELEASE_MOVIE_MANAGER = 9,
			E_RELEASE_COLOUR_CALIBRATION_SCREEN = 10,
			E_RELEASE_WORLD_DATA_CONTROLLER = 11,
			E_RELEASE_GUI_DEBUG_COMPONENT = 12,
			E_RELEASE_PROFILE = 13,
			E_RELEASE_SYSTEM_NOTIFICATIONS = 14,
			E_RELEASE_DONE = 15,
		}

		// BrnGuiModule.h:390
		enum ECollisionWorldStateValidationState {
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_IDLE = 0,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALIDATING_FOR_BOOT = 1,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALID_FOR_BOOT = 2,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_VALIDATING_FOR_BOOT = 3,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALIDATING_FOR_SAVELOAD = 4,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALID_FOR_SAVELOAD = 5,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_VALIDATING_FOR_SAVELOAD = 6,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALIDATING_FOR_MOVIE = 7,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALID_FOR_MOVIE = 8,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_VALIDATING_FOR_MOVIE = 9,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALIDATING_FOR_NETWORKING = 10,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_INVALID_FOR_NETWORKING = 11,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_VALIDATING_FOR_NETWORKING = 12,
			E_COLLISIONWORLDSTATEVALIDATIONSTATE_COUNT = 13,
		}

		// BrnGuiModule.h:420
		enum ECarPoolValidationState {
			E_CARPOOLSTATEVALIDATIONSTATE_IDLE = 0,
			E_CARPOOLSTATEVALIDATIONSTATE_WAITING_FOR_POOL_TO_EMPTY = 1,
			E_CARPOOLSTATEVALIDATIONSTATE_INVALIDATING_FOR_MOVIE = 2,
			E_CARPOOLSTATEVALIDATIONSTATE_INVALID_FOR_MOVIE = 3,
			E_CARPOOLSTATEVALIDATIONSTATE_VALIDATING_FOR_MOVIE = 4,
			E_CARPOOLSTATEVALIDATIONSTATE_WAITING_FOR_POOL_TO_FILL = 5,
			E_CARPOOLSTATEVALIDATIONSTATE_COUNT = 6,
		}

	}

}

// BrnGuiModule.h:99
struct BrnGui::KeyboardHost : public CgsGui::GuiKeyboardListener {
private:
	// BrnGuiModule.h:121
	BrnGuiKeyboard * mpGuiKeyboard;

public:
	// BrnGuiModule.h:712
	void Construct();

	// BrnGuiModule.h:723
	bool Prepare(BrnGuiKeyboard *);

	// BrnGuiModule.h:738
	bool Release();

	// BrnGuiModule.h:753
	void Destruct();

	// BrnGuiModule.h:764
	void ShowKeyboard();

private:
	// BrnGuiModule.cpp:3274
	// Declaration
	virtual void KeyboardClosed(UTF16String) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.cpp:3279
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:3285
		using namespace CgsDev::Message;

	}

}

// BrnGuiModule.h:199
struct BrnGui::GuiModule : public CgsGui::GuiModule {
private:
	// BrnGuiModule.cpp:130
	extern const float32_t KF_POST_100PERCENT_SAVE_FREQUENCY;

	// BrnGuiModule.h:414
	BrnGui::GuiModule::ECollisionWorldStateValidationState meCollisionWorldStateValidationState;

	// BrnGuiModule.h:416
	bool mbCollisionWorldInvalid;

	// BrnGuiModule.h:417
	bool mbBootMovieMode;

	// BrnGuiModule.h:436
	BrnGui::GuiModule::ECarPoolValidationState meCarPoolStateValidationState;

	// BrnGuiModule.h:438
	GuiAccessPointers::GuiEventReceiverQueue mEventReceiverQueue;

	// BrnGuiModule.h:439
	GuiAccessPointers::GuiEventReceiverQueue mCollisonPoolValidationReceiverQueue;

	// BrnGuiModule.h:441
	ViewModule mViewModule;

	// BrnGuiModule.h:504
	MovieManager mMovieManager;

	// BrnGuiModule.h:506
	ColourCalibrationScreen mColourCalibrationScreen;

	// BrnGuiModule.h:509
	WorldDataController mWorldDataController;

	// BrnGuiModule.h:510
	BurnoutSkillsManager mBurnoutSkillsManager;

	// BrnGuiModule.h:511
	FreeburnChallengeManager mFreeburnChallengeManager;

	// BrnGuiModule.h:513
	BrnGui::GuiModule::GuiPrepareStage mePrepareStage;

	// BrnGuiModule.h:514
	BrnGui::GuiModule::GuiReleaseStage meReleaseStage;

	// BrnGuiModule.h:516
	GuiModuleConfig mGuiConfig;

	// BrnGuiModule.h:518
	BrnGui::CustomRendererManager mCustomRenderManager;

	// BrnGuiModule.h:520
	float32_t mfAspectRatio;

	// BrnGuiModule.h:523
	int32_t miNumWaitingFlows;

	// BrnGuiModule.h:524
	int32_t miNumHandledFlows;

	// BrnGuiModule.h:525
	BrnHudFlow mHudFlow;

	// BrnGuiModule.h:526
	BrnScreenFlow mScreenFlow;

	// BrnGuiModule.h:527
	BrnOverlayFlow mOverlayFlow;

	// BrnGuiModule.h:528
	GuiFsmController mFsmController;

	// BrnGuiModule.h:530
	HudMessageDirector mHudMessageDirector;

	// BrnGuiModule.h:531
	HudMessageAnalyzer mHudMessageAnalyzer;

	// BrnGuiModule.h:533
	GuiOverlaysDirector mOverlayDirector;

	// BrnGuiModule.h:535
	KeyboardHost mKeyboardHost;

	// BrnGuiModule.h:536
	BrnGui::ProfileHost mProfileHost;

	// BrnGuiModule.h:537
	SystemUserProfile mSystemUserProfile;

	// BrnGuiModule.h:539
	CgsGui::CgsGuiModuleIO::OutputBuffer * mpOutputBuffer;

	// BrnGuiModule.h:546
	BrnGui::GuiDebugComponent mDebugComponent;

	// BrnGuiModule.h:547
	BrnGui::GuiHudMessagesDebugComponent mHudMessageDebugComponent;

	// BrnGuiModule.h:548
	BrnGui::SatNavDebugComponent mSatNavDebugComponent;

	// BrnGuiModule.h:549
	BrnGui::GuiCacheDebugComponent mGuiCacheDebugComponent;

	// BrnGuiModule.h:552
	GuiAccessPointers mGuiAccessPointers;

	// BrnGuiModule.h:553
	GuiCache mGuiCache;

	// BrnGuiModule.h:554
	MapIconManager mIconManager;

	// BrnGuiModule.h:555
	GuiTracker mGuiTracker;

	// BrnGuiModule.h:557
	BrnGuiKeyboard mGuiKeyboard;

	// BrnGuiModule.h:559
	EffectsArbitrator mGuiEffectsArbitrator;

	// BrnGuiModule.h:561
	AlwaysAvailableComponentsManager mAlwaysAvailableComponentsManager;

	// BrnGuiModule.h:563
	bool mbPerformingInvite;

	// BrnGuiModule.h:564
	bool mbInviteRequiresLogin;

	// BrnGuiModule.h:565
	bool mbStartLobbyDueToPlayerJoin;

	// BrnGuiModule.h:567
	bool mbCollisionWorldInvalidateForNetworking;

	// BrnGuiModule.h:568
	bool mbCollisionWorldValidateForNetworking;

	// BrnGuiModule.h:570
	bool mbTrafficPoolEmptied;

	// BrnGuiModule.h:572
	float32_t mfLastAutosave;

	// BrnGuiModule.h:573
	bool mbAutosaveRequested;

	// BrnGuiModule.h:575
	bool mbHasSeenNeedUpdatePopup;

	// BrnGuiModule.h:576
	GuiAccessPointers::GuiEventReceiverQueue mGDMReceiverQueue;

	// BrnGuiModule.cpp:62
	extern sResourceTuple[2] maBasicResourcesToLoad;

	// BrnGuiModule.cpp:73
	extern uint32_t muBasicNumResourcesToLoad;

	// BrnGuiModule.cpp:75
	extern sResourceTuple[3] maEuropeanFontResourcesToLoad;

	// BrnGuiModule.cpp:82
	extern uint32_t muEuropeanFontNumResourcesToLoad;

	// BrnGuiModule.cpp:85
	extern sResourceTuple[2] maJapaneseFontResourcesToLoad;

	// BrnGuiModule.cpp:91
	extern uint32_t muJapaneseFontNumResourcesToLoad;

	// BrnGuiModule.h:623
	SafeResourceHandle<CgsResource::Font> mpTestFont;

	// BrnGuiModule.h:624
	bool mbInvalidCharacters;

	// BrnGuiModule.h:626
	void * mpSnapShotBuffer;

public:
	// BrnGuiModule.cpp:146
	// Declaration
	virtual void Construct(const HudMessageController *, const PopupController *, float32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.cpp:153
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:155
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:156
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:158
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:159
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:160
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:162
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:163
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:164
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:165
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:166
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:167
		using namespace CgsDev::Message;

		// BrnGuiModule.cpp:168
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.cpp:336
	virtual bool Prepare(InputBuffer *, const OutputBuffer *);

	// BrnGuiModule.cpp:616
	virtual bool Release();

	// BrnGuiModule.cpp:764
	virtual void Destruct();

	// BrnGuiModule.cpp:1486
	virtual void PreWorldUpdate(IOBufferStack *, IOBufferStack *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *);

	// BrnGuiModule.cpp:1711
	virtual void Update(BrnUpdateSet, IOBufferStack *, IOBufferStack *, InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, InputBuffer *, InputBuffer *, const OutputBuffer *);

	// BrnGuiModule.cpp:2916
	virtual void Render(InputBuffer *, InputBuffer *, OutputBuffer *);

	// BrnGuiModule.cpp:3019
	void EndOfFrame();

	// BrnGuiModule.cpp:3032
	void DebugMemoryInit(BrnGui::GuiModule *);

	// BrnGuiModule.h:648
	BrnGui::GuiTracker * GetGuiTracker();

	// BrnGuiModule.h:654
	BrnGui::BrnScreenFlow * GetScreenFlow();

	// BrnGuiModule.h:690
	bool IsPerformingInvite() const;

	// BrnGuiModule.h:701
	bool IsLoginNeededForInvite() const;

	// BrnGuiModule.cpp:3044
	void BootupProfile();

	// BrnGuiModule.cpp:3058
	void AutosaveProfile(const ImageFileInfo *);

	// BrnGuiModule.cpp:3083
	void SaveProfile();

	// BrnGuiModule.cpp:3097
	void LoadProfile();

	// BrnGuiModule.h:679
	void ShowKeyboard();

	// BrnGuiModule.cpp:1556
	void SetCollisionWorldInvalidateForNetworking();

	// BrnGuiModule.cpp:1588
	void SetCollisionWorldValidateForNetworking();

	// BrnGuiModule.h:660
	void SetMovieBootMode(bool);

	// BrnGuiModule.cpp:1603
	void OnFlaptFileLoaded(BrnFlapt::FlaptFiles, const BrnFlapt::FileRef &);

	// BrnGuiModule.h:667
	GuiAccessPointers * GetGuiAccessPointers();

private:
	// BrnGuiModule.cpp:3112
	bool CheckSaveLoadPreconditions();

	// BrnGuiModule.cpp:3127
	bool CheckForceFreeburnLobbyStartPreconditions();

	// BrnGuiModule.cpp:3240
	void HandleFSMChangeCommand(const CgsModule::Event *);

	// BrnGuiModule.cpp:3257
	void HandleStateChangeEvent(const GuiEventStateChange *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiModule.cpp:3148
	void HandleControllerPressed(const CgsModule::Event *);

	// BrnGuiModule.cpp:3203
	void HandleControllerReleased(const CgsModule::Event *);

	// BrnGuiModule.cpp:3301
	void PerformInvite(InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiModule.cpp:2963
	void UpdateAndRenderMovieManager(InputBuffer *);

	// BrnGuiModule.cpp:2988
	void FlaptSoundTriggerCallback(void *, const char *, const char *, const char *, const char *);

	// BrnGuiModule.cpp:1539
	bool PendingCollisionWorldInvalidateForNetworking();

	// BrnGuiModule.cpp:1571
	bool PendingCollisionWorldValidateForNetworking();

	// BrnGuiModule.cpp:1620
	void HandleEventsPostBaseModuleUpdate(CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiModule.cpp:1154
	void UpdateCollisionWorldValidation(CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiModule.cpp:809
	void UpdateCarPoolValidation(CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiModule.cpp:1038
	void UpdatePlayerName(GuiStackEventQueue::GuiEventQueueLarge *);

	// BrnGuiModule.cpp:992
	bool SystemUserNameHasInvalidCharacters();

	// BrnGuiModule.cpp:3391
	void UpdateGameDataModule(InputBuffer::GuiEventInputQueue *);

}

// BrnGuiModule.h:133
struct BrnGui::ProfileHost : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnGuiModule.h:187
	ProfileManager mProfileManager;

public:
	// BrnGuiModule.h:781
	void Construct(GuiCache &, SystemUserProfile &, CgsLanguage::LanguageManager *);

	// BrnGuiModule.h:794
	bool Prepare(HeapMalloc *, LinearMalloc *);

	// BrnGuiModule.h:805
	bool Release();

	// BrnGuiModule.h:817
	void Destruct();

	// BrnGuiModule.h:917
	// Declaration
	void Bootup() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:919
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:929
	void Autosave(const ImageFileInfo *);

	// BrnGuiModule.h:947
	// Declaration
	void Save() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:949
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:958
	// Declaration
	void Load() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:960
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:971
	void ExportImage(void *, const char *, bool);

	// BrnGuiModule.h:839
	bool TaskIsRunning();

	// BrnGuiModule.h:828
	void Update();

	// BrnGuiModule.h:850
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiModule.h:861
	BrnGui::ProfileManager & GetProfileManager();

	// BrnGuiModule.h:876
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiModule.h:892
	void LoadImageFiles(const ImageFileInfo *);

	// BrnGuiModule.h:903
	void HandleMessageChoice(uint32_t);

private:
	// BrnGuiModule.h:982
	// Declaration
	virtual void HandleProfileTaskResult() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:984
		using namespace CgsDev::Message;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiModule {
	public:
		// BrnGuiModule.h:654
		BrnGui::BrnScreenFlow * GetScreenFlow();

	private:
		// BrnGuiModule.h:332
		extern const float32_t KF_POST_100PERCENT_SAVE_FREQUENCY;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiModule {
	public:
		GuiModule();

		~GuiModule();

	private:
		// BrnGuiModule.h:332
		extern const float32_t KF_POST_100PERCENT_SAVE_FREQUENCY;

	}

}

// BrnGuiModule.h:133
struct BrnGui::ProfileHost : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnGuiModule.h:187
	BrnGui::ProfileManager mProfileManager;

public:
	void ~ProfileHost();

	void ProfileHost(const ProfileHost &);

	void ProfileHost();

	// BrnGuiModule.h:781
	void Construct(GuiCache &, SystemUserProfile &, LanguageManager *);

	// BrnGuiModule.h:794
	bool Prepare(HeapMalloc *, LinearMalloc *);

	// BrnGuiModule.h:805
	bool Release();

	// BrnGuiModule.h:817
	void Destruct();

	// BrnGuiModule.h:917
	// Declaration
	void Bootup() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:919
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:929
	void Autosave(const ImageFileInfo *);

	// BrnGuiModule.h:947
	// Declaration
	void Save() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:949
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:958
	// Declaration
	void Load() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:960
		using namespace CgsDev::Message;

	}

	// BrnGuiModule.h:971
	void ExportImage(void *, const char *, bool);

	// BrnGuiModule.h:839
	bool TaskIsRunning();

	// BrnGuiModule.h:828
	void Update();

	// BrnGuiModule.h:850
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiModule.h:861
	BrnGui::ProfileManager & GetProfileManager();

	// BrnGuiModule.h:876
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiModule.h:892
	void LoadImageFiles(const ImageFileInfo *);

	// BrnGuiModule.h:903
	void HandleMessageChoice(uint32_t);

private:
	// BrnGuiModule.h:982
	// Declaration
	virtual void HandleProfileTaskResult() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiModule.h:984
		using namespace CgsDev::Message;

	}

}

// BrnGuiModule.h:99
void BrnGui::KeyboardHost::KeyboardHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiModule.h:133
void BrnGui::ProfileHost::ProfileHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiModule.h:133
void BrnGui::ProfileHost::~ProfileHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiModule.h:199
void BrnGui::GuiModule::GuiModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiModule.h:199
void BrnGui::GuiModule::~GuiModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

