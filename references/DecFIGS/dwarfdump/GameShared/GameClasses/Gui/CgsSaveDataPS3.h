// CgsSaveDataPS3.h:93
extern const uint32_t KI_TITLEID_SIZE = 10;

// CgsSaveDataPS3.h:173
extern const int32_t KI_CONTENTINFORMATIONFILE_MAX = 4;

// CgsSaveDataPS3.h:174
extern const int32_t KI_MAX_SAVEFILES_PER_OPERATION = 1;

// CgsSaveDataPS3.h:175
extern const int32_t KI_FILES_MAX = 5;

// CgsSaveDataPS3.h:176
extern const int32_t KI_MAX_FILES_PER_SAVE = 5;

// CgsSaveDataPS3.h:264
extern const char[16] mSecureFileId;

// CgsSaveDataPS3.h:265
extern const CellSaveDataFileType[4] maContentInformationFileTypes;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct SaveDataSystem {
		// CgsSaveDataPS3.h:81
		enum ETaskResult {
			E_TASKRESULT_SUCCESS = 0,
			E_TASKRESULT_CANCELLED = 1,
			E_TASKRESULT_FAILURE = 2,
			E_TASKRESULT_BROKENDATA = 3,
			E_TASKRESULT_NODATA = 4,
			E_TASKRESULT_INVALIDPROFILE = 5,
			E_TASKRESULT_NOSPACE = 6,
			E_TASKRESULT_MAX = 7,
		}

		// CgsSaveDataPS3.h:99
		struct Metadata {
			// CgsSaveDataPS3.h:100
			const char * mpcTitleId;

			// CgsSaveDataPS3.h:101
			const char * mpFilename;

			// CgsSaveDataPS3.h:102
			OpaqueBuffer mData;

		}

		// CgsSaveDataPS3.h:132
		struct SaveFileInfo {
			// CgsSaveDataPS3.h:134
			CellSaveDataFileType mFileType;

			// CgsSaveDataPS3.h:135
			CgsGui::ESaveLoadCif meCifType;

			// CgsSaveDataPS3.h:136
			char[13] macFileName;

			// CgsSaveDataPS3.h:137
			uint32_t miBufferSize;

			// CgsSaveDataPS3.h:138
			void * mpBuffer;

			// CgsSaveDataPS3.h:139
			bool mbDelete;

		}

		// CgsSaveDataPS3.h:144
		struct DirectoryMetadata {
			// CgsSaveDataPS3.h:145
			char[10] macDirName;

			// CgsSaveDataPS3.h:146
			char[128] title;

			// CgsSaveDataPS3.h:147
			char[128] subTitle;

			// CgsSaveDataPS3.h:148
			char[1024] detail;

			// CgsSaveDataPS3.h:149
			uint32_t muParentalLevel;

		}

		// CgsSaveDataPS3.h:186
		struct FixedOptions {
		private:
			// CgsSaveDataPS3.h:194
			char[32] macDirName;

			// CgsSaveDataPS3.h:195
			CellSaveDataSetList mSetList;

		public:
			// CgsSaveDataPS3.h:189
			void Construct(const char *);

			// CgsSaveDataPS3.h:191
			CellSaveDataSetList * operator CellSaveDataSetList*();

		}

		// CgsSaveDataPS3.h:201
		struct AutoOptions {
		private:
			// CgsSaveDataPS3.h:209
			char[32] macDirName;

		public:
			// CgsSaveDataPS3.h:204
			void Construct(const char *);

			// CgsSaveDataPS3.h:206
			const char * operator const char*();

		}

	}

}

// CgsSaveDataPS3.h:77
struct CgsGui::SaveDataSystem {
	// CgsSaveDataPS3.h:93
	extern const uint32_t KI_TITLEID_SIZE = 10;

	// CgsSaveDataPS3.h:94
	extern const uint32_t KI_TITLEID_PREFIX_SIZE = 4;

	// CgsSaveDataPS3.h:95
	extern bool mbErrorDialog;

private:
	// CgsSaveDataPS3.h:173
	extern const int32_t KI_CONTENTINFORMATIONFILE_MAX = 4;

	// CgsSaveDataPS3.h:174
	extern const int32_t KI_MAX_SAVEFILES_PER_OPERATION = 1;

	// CgsSaveDataPS3.h:175
	extern const int32_t KI_FILES_MAX = 5;

	// CgsSaveDataPS3.h:176
	extern const int32_t KI_MAX_FILES_PER_SAVE = 5;

	// CgsSaveDataPS3.h:264
	extern const char[16] mSecureFileId;

	// CgsSaveDataPS3.h:265
	extern const CellSaveDataFileType[4] maContentInformationFileTypes;

	// CgsSaveDataPS3.h:267
	LanguageManager * mpLanguageManager;

	// CgsSaveDataPS3.h:268
	sys_memory_container_t mMemoryContainer;

	// CgsSaveDataPS3.h:270
	int miResult;

	// CgsSaveDataPS3.h:271
	int miErrorCbResult;

	// CgsSaveDataPS3.h:273
	CgsGui::ContentInformationFileInterface * mpCifInterface;

	// CgsSaveDataPS3.h:274
	uint32_t miProgressBarIncrement;

	// CgsSaveDataPS3.h:275
	CellSaveDataNewDataIcon mNewDataIcon;

	// CgsSaveDataPS3.h:277
	CgsGui::SaveDataSystem::DirectoryMetadata mMetadata;

	// CgsSaveDataPS3.h:279
	int32_t miCurrentSaveFile;

	// CgsSaveDataPS3.h:280
	bool mbSaveContentInformationFiles;

	// CgsSaveDataPS3.h:282
	int32_t miNumberOfSaveFiles;

	// CgsSaveDataPS3.h:283
	CgsGui::SaveDataSystem::SaveFileInfo[5] maSaveFileList;

	// CgsSaveDataPS3.h:285
	int32_t miSaveGameOverheadKb;

	// Unknown accessibility
	struct GenericStorage<5u,0u>;

	// Unknown accessibility
	struct GenericStorage<5u,1u>;

public:
	// CgsSaveDataPS3.h:108
	void Construct(sys_memory_container_t, LanguageManager *);

	// CgsSaveDataPS3.h:111
	int SaveExists(CgsGui::SaveDataSystem::Metadata *, int32_t *);

	// CgsSaveDataPS3.h:114
	int FixedSave(const CgsGui::SaveDataSystem::Metadata &, const ContentInformation &);

	// CgsSaveDataPS3.h:117
	int FixedLoad(const CgsGui::SaveDataSystem::Metadata &);

	// CgsSaveDataPS3.h:120
	int AutoSave(const CgsGui::SaveDataSystem::Metadata &, const ContentInformation &);

	// CgsSaveDataPS3.h:123
	int AutoLoad(const CgsGui::SaveDataSystem::Metadata &);

	// CgsSaveDataPS3.h:126
	int Delete();

private:
	// CgsSaveDataPS3.h:213
	void Reset();

	// CgsSaveDataPS3.h:216
	bool DataIsValid(CellSaveDataStatGet *);

	// CgsSaveDataPS3.h:220
	void SaveExistsStatusCallback(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:223
	void GetSaveStatus(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:225
	void GetSaveStatusCallback(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:228
	void GetLoadStatus(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:230
	void GetLoadStatusCallback(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:232
	void GetAutoLoadStatusCallback(CellSaveDataCBResult *, CellSaveDataStatGet *, CellSaveDataStatSet *);

	// CgsSaveDataPS3.h:235
	void SaveFile(CellSaveDataCBResult *, CellSaveDataFileGet *, CellSaveDataFileSet *);

	// CgsSaveDataPS3.h:237
	void SaveFileCallback(CellSaveDataCBResult *, CellSaveDataFileGet *, CellSaveDataFileSet *);

	// CgsSaveDataPS3.h:239
	void LoadFile(CellSaveDataCBResult *, CellSaveDataFileGet *, CellSaveDataFileSet *);

	// CgsSaveDataPS3.h:241
	void LoadFileCallback(CellSaveDataCBResult *, CellSaveDataFileGet *, CellSaveDataFileSet *);

	// CgsSaveDataPS3.h:244
	void FixedSaveInfo(CellSaveDataCBResult *, CellSaveDataListGet *, CellSaveDataFixedSet *);

	// CgsSaveDataPS3.h:246
	void FixedSaveInfoCallback(CellSaveDataCBResult *, CellSaveDataListGet *, CellSaveDataFixedSet *);

	// CgsSaveDataPS3.h:248
	void FixedLoadInfo(CellSaveDataCBResult *, CellSaveDataListGet *, CellSaveDataFixedSet *);

	// CgsSaveDataPS3.h:250
	void FixedLoadInfoCallback(CellSaveDataCBResult *, CellSaveDataListGet *, CellSaveDataFixedSet *);

	// CgsSaveDataPS3.h:253
	void SetContentInformation(const ContentInformation &);

	// CgsSaveDataPS3.h:256
	void AppendSaveFile(const CgsGui::SaveDataSystem::Metadata *);

	// CgsSaveDataPS3.h:259
	void SetDirName(const char *);

	// CgsSaveDataPS3.h:262
	CgsGui::SaveDataSystem::ETaskResult TranslateReturnValues(int, int);

}

// CgsSaveDataPS3.h:156
struct CgsGui::SaveDataSystem::GenericStorage<5u,0u> {
private:
	// CgsSaveDataPS3.h:161
	extern const int32_t SIZE;

	// CgsSaveDataPS3.h:169
	OpaqueBuffer::Byte[280] maBuffer;

	// CgsSaveDataPS3.h:170
	CellSaveDataSetBuf mSetBuf;

public:
	// CgsSaveDataPS3.h:299
	void Construct();

	// CgsSaveDataPS3.h:316
	CellSaveDataSetBuf * GetCellSaveDataSetBuf();

}

// CgsSaveDataPS3.h:156
struct CgsGui::SaveDataSystem::GenericStorage<5u,1u> {
private:
	// CgsSaveDataPS3.h:161
	extern const int32_t SIZE;

	// CgsSaveDataPS3.h:169
	OpaqueBuffer::Byte[280] maBuffer;

	// CgsSaveDataPS3.h:170
	CellSaveDataSetBuf mSetBuf;

public:
	// CgsSaveDataPS3.h:299
	void Construct();

	// CgsSaveDataPS3.h:316
	CellSaveDataSetBuf * GetCellSaveDataSetBuf();

}

// CgsSaveDataPS3.h:94
extern const uint32_t KI_TITLEID_PREFIX_SIZE = 4;

// CgsSaveDataPS3.h:161
extern const int32_t SIZE;

// CgsSaveDataPS3.h:38
namespace CgsLanguage {
	struct LanguageManagerDebugComponent;

}

// CgsSaveDataPS3.h:95
extern bool mbErrorDialog;

