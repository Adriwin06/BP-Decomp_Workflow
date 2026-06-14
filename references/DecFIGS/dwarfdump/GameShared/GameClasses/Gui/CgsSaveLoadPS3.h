// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct SaveLoadSystem {
	public:
		// CgsSaveLoadPS3.h:443
		void SetSilentMode(bool);

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct SaveLoadSystem {
	public:
		// CgsSaveLoadPS3.h:455
		void UIClosed();

		// CgsSaveLoadPS3.h:432
		void Destruct();

		// CgsSaveLoadPS3.h:469
		bool AutosaveIsEnabled() const;

		// CgsSaveLoadPS3.h:481
		void SetInvalidCharactersInNameFlag(bool);

	}

}

// CgsSaveLoadPS3.h:71
void CgsGui::SaveLoadSystem::~SaveLoadSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveLoadPS3.h:71
void CgsGui::SaveLoadSystem::SaveLoadSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct SaveLoadSystem {
		// CgsSaveLoadPS3.h:361
		enum EFreeSpaceCheckState {
			E_FREESPACECHECKSTATE_NONE = 0,
			E_FREESPACECHECKSTATE_RUNNING = 1,
			E_FREESPACECHECKSTATE_DONE = 2,
		}

	}

}

// CgsSaveLoadPS3.h:71
struct CgsGui::SaveLoadSystem : public CgsGui::ContentInformationFileInterface {
private:
	// CgsSaveLoadPS3.cpp:62
	extern const char *[8] maCifSourceFileNames;

	// CgsSaveLoadPS3.cpp:73
	extern const char *[8] maCifDestFileNames;

	// CgsSaveLoadPS3.cpp:84
	extern int[4] maCifFileTypes;

	// CgsSaveLoadPS3.cpp:131
	extern const char * mpacSystemVersion;

	// CgsSaveLoadPS3.cpp:132
	extern const char * mpacGameVersion;

	// CgsSaveLoadPS3.cpp:91
	extern const char *[11] maMessages;

	// CgsSaveLoadPS3.cpp:105
	extern const char *[2] maSaveLoadFailedChoiceOptions;

	// CgsSaveLoadPS3.cpp:117
	extern const char *[2] maBrokenDataChoiceOptions;

	// CgsSaveLoadPS3.cpp:122
	extern const char *[1] maNoSpaceChoiceOptions;

	// CgsSaveLoadPS3.cpp:126
	extern const char *[1] maContinueOptions;

	// CgsSaveLoadPS3.h:381
	CgsGui::SaveLoadSystem::EFreeSpaceCheckState meFreeSpaceCheckState;

	// CgsSaveLoadPS3.h:382
	uint32_t muSaveDataSizeKb;

	// CgsSaveLoadPS3.h:383
	uint32_t muGameDataSizeKb;

	// CgsSaveLoadPS3.h:385
	Thread mSaveLoadThread;

	// CgsSaveLoadPS3.h:386
	SaveDataSystem mSaveDataSystem;

	// CgsSaveLoadPS3.h:387
	GameData mGameData;

	// CgsSaveLoadPS3.h:388
	ImageExportPS3 mImageExport;

	// CgsSaveLoadPS3.h:389
	LanguageManager * mpLanguageManager;

	// CgsSaveLoadPS3.h:391
	// CgsSaveLoadPS3.h:184
	struct {
	}

 mpMessageDisplayOptionFunc;

	// CgsSaveLoadPS3.h:392
	// CgsSaveLoadPS3.h:185
	struct {
	}

 mpSaveDataTaskResultFunc;

	// CgsSaveLoadPS3.h:393
	CgsGui::SaveLoadTaskResultHandler * mpTaskResultHandler;

	// CgsSaveLoadPS3.h:394
	CgsGui::MessageDisplay * mpMessageDisplay;

	// CgsSaveLoadPS3.h:395
	CgsGui::SaveDataSystem::Metadata mMetadata;

	// CgsSaveLoadPS3.h:396
	ContentInformation mContentInformation;

	// CgsSaveLoadPS3.h:397
	ImageFileInfo[7] maImageFileInfos;

	// CgsSaveLoadPS3.h:398
	int32_t miNumberOfImageFiles;

	// CgsSaveLoadPS3.h:400
	bool mbHasExistingSave;

	// CgsSaveLoadPS3.h:401
	bool mbHasExistingGameData;

	// CgsSaveLoadPS3.h:402
	bool mbSilentMode;

	// CgsSaveLoadPS3.h:403
	bool mbIsAutosaveEnabled;

	// CgsSaveLoadPS3.h:404
	bool mbAutoLoad;

	// CgsSaveLoadPS3.h:405
	char[10] macTitleId;

	// CgsSaveLoadPS3.h:406
	bool mbSaveSystemVersion;

	// CgsSaveLoadPS3.h:408
	bool mbIsSavingCifFiles;

	// CgsSaveLoadPS3.h:409
	BitArray<8u> mbaIsCifEnabled;

	// CgsSaveLoadPS3.h:410
	const char * mpacContentInformationPath;

	// CgsSaveLoadPS3.h:412
	AsyncOp mAsyncOp;

	// CgsSaveLoadPS3.h:415
	void * mpTempImageBufferData;

	// CgsSaveLoadPS3.h:416
	void * mpSnapShotBuffer;

	// CgsSaveLoadPS3.h:417
	bool mbAddVignette;

	// CgsSaveLoadPS3.h:418
	int32_t miTempImageBufferSize;

	// CgsSaveLoadPS3.h:419
	char[128] macTempImagePhotoName;

	// CgsSaveLoadPS3.h:420
	bool mbInvalidCharacters;

public:
	// CgsSaveLoadPS3.cpp:155
	void Construct(CgsGui::MessageDisplay *, LanguageManager *, const char *, const char *, const char *, sys_memory_container_t, int32_t, int32_t, uint32_t);

	// CgsSaveLoadPS3.cpp:214
	bool Prepare(HeapMalloc *, LinearMalloc *, SystemUserProfile *);

	// CgsSaveLoadPS3.cpp:255
	bool Release();

	// CgsSaveLoadPS3.h:432
	void Destruct();

	// CgsSaveLoadPS3.cpp:267
	const char * GetUserGameDataPath() const;

	// CgsSaveLoadPS3.cpp:1495
	void Update();

	// CgsSaveLoadPS3.cpp:1524
	void SetSaveCif(CgsGui::ESaveLoadCif, uint32_t);

	// CgsSaveLoadPS3.h:443
	void SetSilentMode(bool);

	// CgsSaveLoadPS3.h:455
	void UIClosed();

	// CgsSaveLoadPS3.h:469
	bool AutosaveIsEnabled() const;

	// CgsSaveLoadPS3.cpp:449
	void CheckDiskSpace(CgsGui::SaveLoadTaskResultHandler *, SaveLoadMetadata *);

	// CgsSaveLoadPS3.cpp:551
	void Bootup(CgsGui::SaveLoadTaskResultHandler &, const SaveLoadMetadata &, bool);

	// CgsSaveLoadPS3.cpp:868
	void Autosave(CgsGui::SaveLoadTaskResultHandler &, const SaveLoadMetadata &, const SaveInfo &, int32_t, const ImageFileInfo *);

	// CgsSaveLoadPS3.cpp:1037
	void Save(CgsGui::SaveLoadTaskResultHandler &, const SaveLoadMetadata &, const SaveInfo &);

	// CgsSaveLoadPS3.cpp:1142
	void Load(CgsGui::SaveLoadTaskResultHandler &, const SaveLoadMetadata &);

	// CgsSaveLoadPS3.cpp:1334
	void Delete(CgsGui::SaveLoadTaskResultHandler &);

	// CgsSaveLoadPS3.cpp:1243
	void LoadImageFiles(CgsGui::SaveLoadTaskResultHandler &, const SaveLoadMetadata &, int32_t, const ImageFileInfo *);

	// CgsSaveLoadPS3.cpp:1380
	void ExportImage(CgsGui::SaveLoadTaskResultHandler *, void *, const char *, bool);

	// CgsSaveLoadPS3.h:481
	void SetInvalidCharactersInNameFlag(bool);

private:
	// CgsSaveLoadPS3.cpp:410
	void SetMetadata(const SaveLoadMetadata &, const SaveInfo &);

	// CgsSaveLoadPS3.cpp:281
	void StartWorkerThread(int (*)(void *), void (*)(CgsGui::SaveDataSystem::ETaskResult), const char *);

	// CgsSaveLoadPS3.cpp:304
	bool IsWorkerThreadRunning() const;

	// CgsSaveLoadPS3.cpp:316
	bool IsWorkerThreadFinished(int *) const;

	// CgsSaveLoadPS3.cpp:328
	void ReportTaskCompleted(CgsGui::ESaveLoadTaskResult);

	// CgsSaveLoadPS3.cpp:359
	void ShowMessage(const char *, const char **, uint32_t);

	// CgsSaveLoadPS3.cpp:377
	void ShowAutosaveIcon(bool);

	// CgsSaveLoadPS3.cpp:392
	virtual void HandleOption(uint32_t);

	// CgsSaveLoadPS3.cpp:435
	void NoSpaceChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:469
	int CheckDiskSpaceThreadProc(void *);

	// CgsSaveLoadPS3.cpp:512
	void CheckDiskSpaceResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:594
	bool IsChatDisabled();

	// CgsSaveLoadPS3.cpp:612
	void BootupShowAutosaveWarning();

	// CgsSaveLoadPS3.cpp:643
	void BootupWarningChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:632
	void BootupChatDisabledChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:666
	void BootupStartThread();

	// CgsSaveLoadPS3.cpp:686
	int BootupThreadProc(void *);

	// CgsSaveLoadPS3.cpp:710
	void CreateGameDataStartThread();

	// CgsSaveLoadPS3.cpp:731
	int CreateGameDataThreadProc(void *);

	// CgsSaveLoadPS3.cpp:779
	void BootupResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:846
	void BootupAutoLoadFailureChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:893
	void AutosaveStartThread();

	// CgsSaveLoadPS3.cpp:914
	int AutosaveThreadProc(void *);

	// CgsSaveLoadPS3.cpp:974
	void AutosaveResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1017
	void AutosaveFailureChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:1051
	void SaveStartThread();

	// CgsSaveLoadPS3.cpp:1065
	int SaveThreadProc(void *);

	// CgsSaveLoadPS3.cpp:1084
	void SaveResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1122
	void SaveFailureChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:1157
	void LoadStartThread();

	// CgsSaveLoadPS3.cpp:1171
	int LoadThreadProc(void *);

	// CgsSaveLoadPS3.cpp:1189
	void LoadResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1220
	void LoadFailureChoice(uint32_t);

	// CgsSaveLoadPS3.cpp:1267
	int LoadImagesThreadProc(void *);

	// CgsSaveLoadPS3.cpp:1303
	void LoadImagesResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1348
	void Delete(void (*)(CgsGui::SaveDataSystem::ETaskResult));

	// CgsSaveLoadPS3.cpp:1363
	void DeleteResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1405
	int ExportImageThreadProc(void *);

	// CgsSaveLoadPS3.cpp:1453
	void ExportImageResult(CgsGui::SaveDataSystem::ETaskResult);

	// CgsSaveLoadPS3.cpp:1550
	virtual bool IsSavingCif(CgsGui::ESaveLoadCif);

	// CgsSaveLoadPS3.cpp:1566
	virtual int GetCifFileType(CgsGui::ESaveLoadCif);

	// CgsSaveLoadPS3.cpp:1584
	virtual const char * GetCifFileName(CgsGui::ESaveLoadCif);

	// CgsSaveLoadPS3.cpp:1603
	virtual bool LoadCifFile(CgsGui::ESaveLoadCif, void **, int32_t *);

}

