// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSaveDataPS3.cpp:64
	namespace SaveDataDetail {
		struct FileStatNameEqualPredicate;

		// CgsSaveDataPS3.cpp:218
		extern bool CharIsNumber(char);

		// CgsSaveDataPS3.cpp:229
		extern bool CharIsUppercaseAlphabet(char);

		// CgsSaveDataPS3.cpp:341
		extern FileListIterator FindFileStat(FileListIterator, FileListIterator, const char *);

		// CgsSaveDataPS3.cpp:281
		extern const CellSaveDataFileStat * FindFirst<const CellSaveDataFileStat*, CgsGui::SaveDataDetail::FileStatNameEqualPredicate>(const CellSaveDataFileStat *, const CellSaveDataFileStat *, FileStatNameEqualPredicate);

		// CgsSaveDataPS3.cpp:118
		extern void DebugCellSaveDataStatGet(CellSaveDataStatGet *);

		// CgsSaveDataPS3.cpp:98
		extern void DebugCellSaveDataListGet(CellSaveDataListGet *);

		// CgsSaveDataPS3.cpp:301
		extern const char * FindFirstNot<const char*, bool (*)(char)>(const char *, const char *, bool (*)(char));

		// CgsSaveDataPS3.cpp:162
		extern const char * GetSaveDataErrorString(int);

		// CgsSaveDataPS3.cpp:195
		extern void DebugSaveDataResult(const char *, int);

	}

}

// CgsSaveDataPS3.cpp:72
struct CgsGui::SaveDataDetail::FileStatNameEqualPredicate {
	// CgsSaveDataPS3.cpp:76
	const char * mpFilename;

public:
	// CgsSaveDataPS3.cpp:74
	bool operator()(const CellSaveDataFileStat &) const;

}

// CgsSaveDataPS3.cpp:371
void CgsGui::SaveDataSystem::Construct(sys_memory_container_t  lAutoSaveMemoryContainer, LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveDataPS3.cpp:386
void CgsGui::SaveDataSystem::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveDataPS3.cpp:442
void CgsGui::SaveDataSystem::SaveExistsStatusCallback(CellSaveDataCBResult *  lpResult, CellSaveDataStatGet *  lpGet, CellSaveDataStatSet *  lpSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:444
		SaveDataSystem * lpThis;

	}
}

// CgsSaveDataPS3.cpp:1183
void CgsGui::SaveDataSystem::SetContentInformation(const const ContentInformation &  mContentInformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1185
		CgsGui::SaveDataSystem::SaveFileInfo * lpSaveFileInfo;

		// CgsSaveDataPS3.cpp:1186
		int32_t liIndex;

	}
	{
		// CgsSaveDataPS3.cpp:1203
		CgsGui::ESaveLoadCif leCifType;

	}
}

// CgsSaveDataPS3.cpp:68
typedef const CellSaveDataFileStat * FileListIterator;

// CgsSaveDataPS3.cpp:674
void CgsGui::SaveDataSystem::DataIsValid(CellSaveDataStatGet *  get) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:679
		CgsGui::SaveDataSystem::SaveFileInfo * lpSaveFileInfo;

		// CgsSaveDataPS3.cpp:682
		FileListIterator lFound;

	}
	SaveDataDetail::FindFileStat(/* parameters */);
}

// CgsSaveDataPS3.cpp:821
void CgsGui::SaveDataSystem::SaveFile(CellSaveDataCBResult *  result, CellSaveDataFileGet *  get, CellSaveDataFileSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:853
		CgsGui::SaveDataSystem::SaveFileInfo * lpSaveFileInfo;

		{
			// CgsSaveDataPS3.cpp:864
			void * lpBufferData;

			// CgsSaveDataPS3.cpp:865
			int32_t liBufferSize;

		}
	}
}

// CgsSaveDataPS3.cpp:917
void CgsGui::SaveDataSystem::SaveFileCallback(CellSaveDataCBResult *  result, CellSaveDataFileGet *  get, CellSaveDataFileSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:919
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:931
void CgsGui::SaveDataSystem::GetLoadStatus(CellSaveDataCBResult *  result, CellSaveDataStatGet *  get, CellSaveDataStatSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveDataPS3.cpp:975
void CgsGui::SaveDataSystem::GetLoadStatusCallback(CellSaveDataCBResult *  result, CellSaveDataStatGet *  get, CellSaveDataStatSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:977
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:989
void CgsGui::SaveDataSystem::GetAutoLoadStatusCallback(CellSaveDataCBResult *  result, CellSaveDataStatGet *  get, CellSaveDataStatSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:991
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:1003
void CgsGui::SaveDataSystem::LoadFile(CellSaveDataCBResult *  result, CellSaveDataFileGet *  get, CellSaveDataFileSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1014
		CgsGui::SaveDataSystem::SaveFileInfo * lpSaveFileInfo;

	}
}

// CgsSaveDataPS3.cpp:1046
void CgsGui::SaveDataSystem::LoadFileCallback(CellSaveDataCBResult *  result, CellSaveDataFileGet *  get, CellSaveDataFileSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1048
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:1127
void CgsGui::SaveDataSystem::FixedLoadInfo(CellSaveDataCBResult *  result, CellSaveDataListGet *  get, CellSaveDataFixedSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1129
		unsigned int i;

	}
}

// CgsSaveDataPS3.cpp:1170
void CgsGui::SaveDataSystem::FixedLoadInfoCallback(CellSaveDataCBResult *  result, CellSaveDataListGet *  get, CellSaveDataFixedSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1172
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:1060
void CgsGui::SaveDataSystem::FixedSaveInfo(CellSaveDataCBResult *  result, CellSaveDataListGet *  get, CellSaveDataFixedSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveDataPS3.cpp:1113
void CgsGui::SaveDataSystem::FixedSaveInfoCallback(CellSaveDataCBResult *  result, CellSaveDataListGet *  get, CellSaveDataFixedSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1115
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:715
void CgsGui::SaveDataSystem::GetSaveStatus(CellSaveDataCBResult *  result, CellSaveDataStatGet *  get, CellSaveDataStatSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:753
		int32_t liNumberOfFilesToSave;

		{
			// CgsSaveDataPS3.cpp:760
			int32_t liIndex;

		}
		{
			// CgsSaveDataPS3.cpp:777
			int32_t liSaveFileIndex;

			// CgsSaveDataPS3.cpp:778
			uint32_t liFileOnDiskIndex;

		}
	}
	CgsCore::StrCpy(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

// CgsSaveDataPS3.cpp:806
void CgsGui::SaveDataSystem::GetSaveStatusCallback(CellSaveDataCBResult *  result, CellSaveDataStatGet *  get, CellSaveDataStatSet *  set) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:808
		SaveDataSystem * lpSaveDataSystem;

	}
}

// CgsSaveDataPS3.cpp:1255
void CgsGui::SaveDataSystem::SetDirName(const char *  lpcTitleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1257
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	SaveDataDetail::FindFirstNot<const char*, bool (*)(char)>(/* parameters */);
	SaveDataDetail::FindFirstNot<const char*, bool (*)(char)>(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsSaveDataPS3.cpp:1258
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:1231
void CgsGui::SaveDataSystem::AppendSaveFile(const CgsGui::SaveDataSystem::Metadata *  lpMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1236
		CgsGui::SaveDataSystem::SaveFileInfo * lpSaveFile;

	}
}

// CgsSaveDataPS3.cpp:1277
void CgsGui::SaveDataSystem::TranslateReturnValues(int  ret, int  callbackRet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:1317
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		SaveDataDetail::GetSaveDataErrorString(/* parameters */);
	}
	{
		// CgsSaveDataPS3.cpp:1301
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:647
void CgsGui::SaveDataSystem::Delete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveDataPS3.cpp:603
void CgsGui::SaveDataSystem::AutoLoad(const const CgsGui::SaveDataSystem::Metadata &  lMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:605
		CgsGui::SaveDataSystem::AutoOptions lOptions;

		// CgsSaveDataPS3.cpp:606
		GenericStorage<5u,0u> lStorage;

		AutoOptions::Construct(/* parameters */);
		GenericStorage<5u,0u>::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:558
void CgsGui::SaveDataSystem::AutoSave(const const CgsGui::SaveDataSystem::Metadata &  lMetadata, const const ContentInformation &  lContentInformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:560
		CgsGui::SaveDataSystem::AutoOptions lOptions;

		// CgsSaveDataPS3.cpp:561
		GenericStorage<5u,0u> lStorage;

		AutoOptions::Construct(/* parameters */);
		GenericStorage<5u,0u>::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:514
void CgsGui::SaveDataSystem::FixedLoad(const const CgsGui::SaveDataSystem::Metadata &  lMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:516
		CgsGui::SaveDataSystem::FixedOptions lOptions;

		// CgsSaveDataPS3.cpp:517
		GenericStorage<5u,1u> lStorage;

		FixedOptions::Construct(/* parameters */);
	}
	GenericStorage<5u,1u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:470
void CgsGui::SaveDataSystem::FixedSave(const const CgsGui::SaveDataSystem::Metadata &  lMetadata, const const ContentInformation &  lContentInformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:472
		CgsGui::SaveDataSystem::FixedOptions lOptions;

		// CgsSaveDataPS3.cpp:473
		GenericStorage<5u,1u> lStorage;

		FixedOptions::Construct(/* parameters */);
		GenericStorage<5u,1u>::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:402
void CgsGui::SaveDataSystem::SaveExists(CgsGui::SaveDataSystem::Metadata *  lpMetadata, int32_t *  lpiSaveGameOverheadKb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:407
		CgsGui::SaveDataSystem::AutoOptions lOptions;

		// CgsSaveDataPS3.cpp:408
		GenericStorage<5u,0u> lStorage;

	}
	AutoOptions::Construct(/* parameters */);
	GenericStorage<5u,0u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSaveDataPS3.cpp:50
// CgsSaveDataPS3.cpp:38
// CgsSaveDataPS3.cpp:42
