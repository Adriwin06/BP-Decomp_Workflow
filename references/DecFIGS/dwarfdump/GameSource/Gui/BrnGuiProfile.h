// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ProfileManager {
	private:
		// BrnGuiProfile.h:712
		// Declaration
		virtual void UserNameChanged(const char *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:714
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:722
		// Declaration
		virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:724
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:732
		// Declaration
		virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:734
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:149
		extern const int32_t KI_PROFILE_SIZE = 262144;

		// BrnGuiProfile.h:150
		extern const int32_t KI_REQUIRED_PADDING = 81184;

	}

}

// BrnGuiProfile.h:77
struct BrnGui::ProfileTaskResultHandler {
	int (*)(...) * _vptr.ProfileTaskResultHandler;

public:
	// BrnGuiProfile.h:79
	virtual void HandleProfileTaskResult();

}

// BrnGuiProfile.h:149
extern const int32_t KI_PROFILE_SIZE = 262144;

// BrnGuiProfile.h:150
extern const int32_t KI_REQUIRED_PADDING = 81184;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ProfileManager {
	private:
		// BrnGuiProfile.h:712
		// Declaration
		virtual void UserNameChanged(const char *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:714
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:722
		// Declaration
		virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:724
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:732
		// Declaration
		virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:734
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:149
		extern const int32_t KI_PROFILE_SIZE = 262144;

		// BrnGuiProfile.h:150
		extern const int32_t KI_REQUIRED_PADDING = 81184;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ProfileManager {
	private:
		// BrnGuiProfile.h:712
		// Declaration
		virtual void UserNameChanged(const char *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:714
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:722
		// Declaration
		virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:724
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:732
		// Declaration
		virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:734
			using namespace CgsDev::Message;

		}

	public:
		// BrnGuiProfile.h:536
		void SetSilentMode(bool);

		// BrnGuiProfile.h:662
		void HandleMessageChoice(uint32_t);

		// BrnGuiProfile.h:604
		void DetachMessageDisplay(ProfileMessageDisplay &);

		// BrnGuiProfile.h:592
		void AttachMessageDisplay(ProfileMessageDisplay *);

	private:
		// BrnGuiProfile.h:149
		extern const int32_t KI_PROFILE_SIZE = 262144;

		// BrnGuiProfile.h:150
		extern const int32_t KI_REQUIRED_PADDING = 81184;

	}

}

// BrnGuiProfile.h:61
struct BrnGui::ProfileMessageDisplay {
	int (*)(...) * _vptr.ProfileMessageDisplay;

public:
	// BrnGuiProfile.h:63
	virtual void ShowMessage(const char *, uint32_t, const char **);

	// BrnGuiProfile.h:64
	virtual void ShowNoSpaceMessage(const char *, uint32_t, uint32_t);

	// BrnGuiProfile.h:65
	virtual void HideMessage();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ProfileManager {
	private:
		// BrnGuiProfile.h:712
		// Declaration
		virtual void UserNameChanged(const char *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:714
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:722
		// Declaration
		virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:724
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:732
		// Declaration
		virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:734
			using namespace CgsDev::Message;

		}

	public:
		// BrnGuiProfile.h:662
		void HandleMessageChoice(uint32_t);

		// BrnGuiProfile.h:592
		void AttachMessageDisplay(BrnGui::ProfileMessageDisplay *);

		// BrnGuiProfile.h:604
		void DetachMessageDisplay(BrnGui::ProfileMessageDisplay &);

	private:
		// BrnGuiProfile.h:149
		extern const int32_t KI_PROFILE_SIZE = 262144;

		// BrnGuiProfile.h:150
		extern const int32_t KI_REQUIRED_PADDING = 81184;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ProfileManager {
		// BrnGuiProfile.h:141
		struct FixedSizeOpaqueBuffer<BrnProgression::Profile> {
			// BrnGuiProfile.h:142
			uint8_t[121392] maData;

		}

		// BrnGuiProfile.h:141
		struct FixedSizeOpaqueBuffer<BrnNetwork::LiveRevengeProfile> {
			// BrnGuiProfile.h:142
			uint8_t[30016] maData;

		}

		// BrnGuiProfile.h:141
		struct FixedSizeOpaqueBuffer<BrnGui::OptionsDataProfile> {
			// BrnGuiProfile.h:142
			uint8_t[29552] maData;

		}

		// BrnGuiProfile.h:153
		struct ProfileStoredData {
			// BrnGuiProfile.h:154
			BrnGui::ProfileManager::FixedSizeOpaqueBuffer<BrnProgression::Profile> mProgressionProfile;

			// BrnGuiProfile.h:156
			BrnGui::ProfileManager::FixedSizeOpaqueBuffer<BrnNetwork::LiveRevengeProfile> mLiveRevengeProfile;

			// BrnGuiProfile.h:158
			BrnGui::ProfileManager::FixedSizeOpaqueBuffer<BrnGui::OptionsDataProfile> mOptionsDataProfile;

			// BrnGuiProfile.h:161
			char[81184] macPadData;

		}

		// BrnGuiProfile.h:266
		enum EProfileOperation {
			E_PROFILEOPERATION_NONE = 0,
			E_PROFILEOPERATION_LOAD = 1,
			E_PROFILEOPERATION_SAVE = 2,
			E_PROFILEOPERATION_AUTOSAVE = 3,
			E_PROFILEOPERATION_LOAD_IMAGES = 4,
			E_PROFILEOPERATION_EXPORT_IMAGE = 5,
		}

		// BrnGuiProfile.h:297
		enum ESaveLoadResult {
			E_SAVELOADRESULT_INVALID = 0,
			E_SAVELOADRESULT_PROFILE_LOADED = 1,
			E_SAVELOADRESULT_PROFILE_AND_IMAGE_FILES_SAVED = 2,
			E_SAVELOADRESULT_IMAGE_FILES_LOADED = 3,
			E_SAVELOADRESULT_EXPORT_IMAGE = 4,
		}

		// BrnGuiProfile.h:306
		enum ECollisionWorldState {
			E_COLLISIONWORLDSTATE_VALID = 0,
			E_COLLISIONWORLDSTATE_INVALIDATE = 1,
			E_COLLISIONWORLDSTATE_INVALIDATING = 2,
			E_COLLISIONWORLDSTATE_INVALID = 3,
			E_COLLISIONWORLDSTATE_VALIDATE = 4,
			E_COLLISIONWORLDSTATE_VALIDATING = 5,
		}

	}

}

// BrnGuiProfile.h:93
struct BrnGui::MugshotSaveBuffer {
private:
	// BrnGuiProfile.h:114
	extern const uint32_t muCorrectMagicNumber = 1297434451;

	// BrnGuiProfile.h:116
	uint32_t muMagicNumber;

	// BrnGuiProfile.h:117
	uint32_t muHash;

	// BrnGuiProfile.h:118
	char[9600] macBuffer;

public:
	// BrnGuiProfile.h:97
	void Construct();

	// BrnGuiProfile.h:100
	void Construct(char *, int32_t);

	// BrnGuiProfile.h:103
	bool IsCorrupt();

	// BrnGuiProfile.h:107
	char * GetBuffer();

	// BrnGuiProfile.h:111
	int32_t GetBufferLength() const;

}

// BrnGuiProfile.h:134
struct BrnGui::ProfileManager : public SystemUserProfile::Listener {
private:
	// BrnGuiProfile.h:149
	extern const int32_t KI_PROFILE_SIZE = 262144;

	// BrnGuiProfile.h:150
	extern const int32_t KI_REQUIRED_PADDING = 81184;

	// BrnGuiProfile.cpp:29
	extern const char *[3] maMessages;

	// BrnGuiProfile.cpp:35
	extern const char *[1] maConfirmChoiceOptions;

	// BrnGuiProfile.cpp:39
	extern const char *[2] maResetProfileChoiceOptions;

	// BrnGuiProfile.h:426
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiProfile.h:427
	SystemUserProfile * mpSystemUserProfile;

	// BrnGuiProfile.h:429
	// BrnGuiProfile.h:135
	struct {
	}

 mpTaskResultFunc;

	// BrnGuiProfile.h:430
	// BrnGuiProfile.h:137
	struct {
	}

 mpOptionFunc;

	// BrnGuiProfile.h:431
	GuiEventQueueSmall mEventQueue;

	// BrnGuiProfile.h:433
	HeapMalloc * mpHeapMalloc;

	// BrnGuiProfile.h:434
	CgsGui::SaveLoadSystem mSaveLoadSystem;

	// BrnGuiProfile.h:435
	uint32_t muOptionCount;

	// BrnGuiProfile.h:436
	CgsGui::MessageDisplay::OptionHandler * mpOptionHandler;

	// BrnGuiProfile.h:438
	BrnGui::ProfileManager::ProfileStoredData mStoredData;

	// BrnGuiProfile.h:439
	SaveLoadMetadata mMetadata;

	// BrnGuiProfile.h:440
	SaveInfo mSaveInfo;

	// BrnGuiProfile.h:441
	bool mbAutosaveEnabled;

	// BrnGuiProfile.h:442
	BrnGui::ProfileManager::ESaveLoadResult miSaveLoadResult;

	// BrnGuiProfile.h:443
	bool mbSilentMode;

	// BrnGuiProfile.h:444
	bool mbAutoLoad;

	// BrnGuiProfile.h:446
	BrnGui::ProfileManager::ECollisionWorldState meCollisionWorldState;

	// BrnGuiProfile.h:448
	BrnGui::ProfileMessageDisplay * mpMessageDisplay;

	// BrnGuiProfile.h:449
	BrnGui::ProfileTaskResultHandler * mpTaskResultHandler;

	// BrnGuiProfile.h:452
	Profile * mpProgressionProfile;

	// BrnGuiProfile.h:453
	const BrnProgression::ProgressionData * mpProgressionData;

	// BrnGuiProfile.h:454
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnGuiProfile.h:455
	ImageFileInfo[7] maImageFileInfo;

	// BrnGuiProfile.h:456
	int32_t miNumberOfImageFiles;

	// BrnGuiProfile.h:459
	MugshotSaveBuffer * mpaMugshotCircularBuffer;

	// BrnGuiProfile.h:460
	int32_t miNextMugshotInCircularBuffer;

	// BrnGuiProfile.h:463
	BrnGui::ProfileManager::EProfileOperation meBufferedOperation;

	// BrnGuiProfile.h:464
	ImageFileInfo[7] maBufferedImageFileInfo;

	// BrnGuiProfile.h:465
	int32_t miBufferedNumberOfImageFiles;

	// BrnGuiProfile.h:466
	BrnGui::ProfileTaskResultHandler * mpBufferedTaskResultHandler;

public:
	// BrnGuiProfile.cpp:91
	void Construct(GuiCache &, SystemUserProfile &, CgsLanguage::LanguageManager *);

	// BrnGuiProfile.cpp:212
	bool Prepare(HeapMalloc *, LinearMalloc *);

	// BrnGuiProfile.h:511
	bool Release();

	// BrnGuiProfile.h:524
	void Destruct();

	// BrnGuiProfile.h:616
	void Update();

	// BrnGuiProfile.h:559
	BrnGui::ProfileTaskResultHandler * GetTaskResultHandler() const;

	// BrnGuiProfile.h:570
	bool AutosaveIsEnabled() const;

	// BrnGuiProfile.h:592
	void AttachMessageDisplay(BrnGui::ProfileMessageDisplay *);

	// BrnGuiProfile.h:604
	void DetachMessageDisplay(BrnGui::ProfileMessageDisplay &);

	// BrnGuiProfile.h:777
	bool IsAutoSaveEnabled() const;

	// BrnGuiProfile.h:536
	void SetSilentMode(bool);

	// BrnGuiProfile.h:199
	void SetSignedInUserIndex(uint32_t);

	// BrnGuiProfile.h:201
	bool CurrentUserIsSignedIn();

	// BrnGuiProfile.h:632
	void SetProgressionProfile(Profile *, const BrnProgression::ProgressionData *);

	// BrnGuiProfile.h:650
	void SetLiveRevengeProfile(BrnNetwork::LiveRevengeProfile *);

	// BrnGuiProfile.cpp:587
	void LoadImageFiles(BrnGui::ProfileTaskResultHandler *, const ImageFileInfo *);

	// BrnGuiProfile.cpp:663
	void ExportImage(BrnGui::ProfileTaskResultHandler *, void *, const char *, bool);

	// BrnGuiProfile.h:662
	void HandleMessageChoice(uint32_t);

	// BrnGuiProfile.h:581
	GuiEventQueueSmall & GetOutEventQueue();

	// BrnGuiProfile.cpp:238
	void CheckDiskSpace(BrnGui::ProfileTaskResultHandler *);

	// BrnGuiProfile.cpp:272
	void Bootup(BrnGui::ProfileTaskResultHandler &, bool);

	// BrnGuiProfile.h:677
	void BootupNoLoad(BrnGui::ProfileTaskResultHandler &);

	// BrnGuiProfile.cpp:334
	void Autosave(BrnGui::ProfileTaskResultHandler *, int32_t, const ImageFileInfo *);

	// BrnGuiProfile.cpp:463
	void Save(BrnGui::ProfileTaskResultHandler &);

	// BrnGuiProfile.cpp:523
	void Load(BrnGui::ProfileTaskResultHandler &);

	// BrnGuiProfile.h:688
	void Reset(BrnGui::ProfileTaskResultHandler &);

	// BrnGuiProfile.cpp:149
	bool PendingCollisionWorldInvalidate();

	// BrnGuiProfile.cpp:165
	bool PendingCollisionWorldValidate();

	// BrnGuiProfile.cpp:181
	void SetCollisionWorldValid(bool);

	// BrnGuiProfile.h:794
	void SetInvalidCharactersInName(bool);

private:
	// BrnGuiProfile.cpp:838
	virtual void HandleSaveLoadTaskResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:1066
	virtual void HandleOption(uint32_t);

	// BrnGuiProfile.cpp:1079
	void HandleWarningOption(uint32_t);

	// BrnGuiProfile.cpp:1090
	void HandleResetProfileOption(uint32_t);

	// BrnGuiProfile.cpp:1112
	virtual void ShowMessage(CgsGui::MessageDisplay::OptionHandler *, const char *, const char **, uint32_t);

	// BrnGuiProfile.cpp:1146
	virtual void ShowNoSpaceMessage(CgsGui::MessageDisplay::OptionHandler *, const char *, uint32_t, uint32_t);

	// BrnGuiProfile.cpp:1175
	virtual void HideMessage();

	// BrnGuiProfile.cpp:1193
	virtual void ShowAutosaveIcon(bool);

	// BrnGuiProfile.h:712
	// Declaration
	virtual void UserNameChanged(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiProfile.h:714
		using namespace CgsDev::Message;

	}

	// BrnGuiProfile.h:722
	// Declaration
	virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiProfile.h:724
		using namespace CgsDev::Message;

	}

	// BrnGuiProfile.h:732
	// Declaration
	virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiProfile.h:734
		using namespace CgsDev::Message;

	}

	// BrnGuiProfile.h:766
	virtual void UIClosed();

	// BrnGuiProfile.h:548
	bool TaskIsRunning() const;

	// BrnGuiProfile.cpp:854
	void BufferProfileOperation(BrnGui::ProfileManager::EProfileOperation, BrnGui::ProfileTaskResultHandler *, int32_t, const ImageFileInfo *);

	// BrnGuiProfile.cpp:909
	void ReportTaskCompleted();

	// BrnGuiProfile.cpp:415
	void ShowAutosaveEnabledMessage();

	// BrnGuiProfile.cpp:431
	void ShowAutosaveDisabledMessage();

	// BrnGuiProfile.cpp:447
	void ShowResetProfileMessage();

	// BrnGuiProfile.h:701
	void UpdateMessageTask();

	// BrnGuiProfile.cpp:261
	void CheckDiskSpaceResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:295
	void BootupResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:384
	void AutosaveResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:487
	void SaveResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:545
	void LoadResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:639
	void LoadImageFilesResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:693
	void ExportImageResult(CgsGui::ESaveLoadTaskResult);

	// BrnGuiProfile.cpp:708
	void ReadProfileData();

	// BrnGuiProfile.cpp:733
	// Declaration
	bool ValidateProfiles() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiProfile.cpp:753
		using namespace CgsDev::Message;

		// BrnGuiProfile.cpp:785
		using namespace CgsDev::Message;

		// BrnGuiProfile.cpp:813
		using namespace CgsDev::Message;

	}

	// BrnGuiProfile.h:407
	void OnProfileSegmentLocked();

	// BrnGuiProfile.h:409
	void OnProfileSegmentUnlocked();

	// BrnGuiProfile.cpp:1213
	void SetMugshotBufferFromCircularBuffer(ImageFileInfo *, const ImageFileInfo *);

	// BrnGuiProfile.cpp:1255
	void StartTask(void (*)(CgsGui::ESaveLoadTaskResult), BrnGui::ProfileTaskResultHandler *);

}

// BrnGuiProfile.h:77
struct BrnGui::ProfileTaskResultHandler {
	int (*)(...) * _vptr.ProfileTaskResultHandler;

public:
	void ProfileTaskResultHandler(const ProfileTaskResultHandler &);

	void ProfileTaskResultHandler();

	// BrnGuiProfile.h:79
	virtual void HandleProfileTaskResult();

}

// BrnGuiProfile.h:61
struct BrnGui::ProfileMessageDisplay {
	int (*)(...) * _vptr.ProfileMessageDisplay;

public:
	void ProfileMessageDisplay(const ProfileMessageDisplay &);

	void ProfileMessageDisplay();

	// BrnGuiProfile.h:63
	virtual void ShowMessage(const char *, uint32_t, const char **);

	// BrnGuiProfile.h:64
	virtual void ShowNoSpaceMessage(const char *, uint32_t, uint32_t);

	// BrnGuiProfile.h:65
	virtual void HideMessage();

}

// BrnGuiProfile.h:77
void BrnGui::ProfileTaskResultHandler::ProfileTaskResultHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiProfile.h:61
void BrnGui::ProfileMessageDisplay::ProfileMessageDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiProfile.h:114
extern const uint32_t muCorrectMagicNumber = 1297434451;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ProfileManager {
	private:
		// BrnGuiProfile.h:712
		// Declaration
		virtual void UserNameChanged(const char *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:714
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:722
		// Declaration
		virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:724
			using namespace CgsDev::Message;

		}

		// BrnGuiProfile.h:732
		// Declaration
		virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiProfile.h:734
			using namespace CgsDev::Message;

		}

	public:
		ProfileManager();

		~ProfileManager();

	private:
		// BrnGuiProfile.h:149
		extern const int32_t KI_PROFILE_SIZE = 262144;

		// BrnGuiProfile.h:150
		extern const int32_t KI_REQUIRED_PADDING = 81184;

	}

}

// BrnGuiProfile.h:134
void BrnGui::ProfileManager::ProfileManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiProfile.h:134
void BrnGui::ProfileManager::~ProfileManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

