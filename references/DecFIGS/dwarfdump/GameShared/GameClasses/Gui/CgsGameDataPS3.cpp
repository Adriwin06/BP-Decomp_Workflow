// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGameDataPS3.cpp:39
	const char * mpacSystemVersion;

}

// CgsGameDataPS3.cpp:61
void CgsGui::GameData::Construct(sys_memory_container_t  lMemoryContainer, int32_t  liNumberOfMugshotTypes, int32_t  liNumberOfMugshotsPerType, uint32_t  luMugshotSizeBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGameDataPS3.cpp:81
void CgsGui::GameData::UserGameDataDirectoryExists() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:83
		int lFileDescriptor;

		// CgsGameDataPS3.cpp:84
		CellFsErrno lCellFsErrno;

	}
}

// CgsGameDataPS3.cpp:103
void CgsGui::GameData::CheckGameData(const char *  lpTitleID, int32_t  liFreeSpaceRequiredKb, int32_t  liSaveGameRequiredKb, int32_t *  lpiGameDataOverheadKb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:105
		int32_t liResult;

	}
}

// CgsGameDataPS3.cpp:287
void CgsGui::GameData::CreateUserDirName(char *  lacDestUserName, const char *  lpacSourceUserName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:291
		int32_t liSrcLength;

		// CgsGameDataPS3.cpp:292
		int32_t liSrcPos;

		// CgsGameDataPS3.cpp:293
		int32_t liDestPos;

		// CgsGameDataPS3.cpp:294
		uint32_t luHash;

	}
	std(/* parameters */);
}

// CgsGameDataPS3.cpp:457
void CgsGui::GameData::CreateGameDataCallbackStatic(CellGameDataCBResult *  lpCallbackResult, CellGameDataStatGet *  lpGet, CellGameDataStatSet *  lpSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGameDataPS3.cpp:171
void CgsGui::GameData::CheckGameDataCallback(CellGameDataCBResult *  lpCallbackResult, CellGameDataStatGet *  lpGet, CellGameDataStatSet *  lpSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:173
		char[64] lacVanillaUserName;

		// CgsGameDataPS3.cpp:174
		char[73] lacUserDirName;

		// CgsGameDataPS3.cpp:175
		bool lbCreateGameData;

		// CgsGameDataPS3.cpp:176
		int32_t liSpaceRequiredKb;

		// CgsGameDataPS3.cpp:177
		int32_t liResult;

	}
	{
		// CgsGameDataPS3.cpp:203
		int lFileDescriptor;

		// CgsGameDataPS3.cpp:204
		CellFsErrno lCellFsErrno;

	}
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGameDataPS3.cpp:156
void CgsGui::GameData::CheckGameDataCallbackStatic(CellGameDataCBResult *  lpCallbackResult, CellGameDataStatGet *  lpGet, CellGameDataStatSet *  lpSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGameDataPS3.cpp:492
void CgsGui::GameData::SaveGameDataFile(uint32_t  luID, void *  lpBuffer, uint32_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:498
		char[1055] lacFilePath;

		// CgsGameDataPS3.cpp:499
		Handle lHandle;

		CgsFileSystem::AsyncOp::GetLastOperationResult(/* parameters */);
		CgsFileSystem::AsyncOp::GetLastOperationHandle(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGameDataPS3.cpp:322
void CgsGui::GameData::CreateUserGameDataFiles(const char *  lpTitleID, ContentInformation *  lpContentInformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:324
		CellFsErrno lCellFsErrno;

		// CgsGameDataPS3.cpp:325
		int32_t liIndex;

		// CgsGameDataPS3.cpp:326
		int32_t liInnerIndex;

		// CgsGameDataPS3.cpp:327
		int32_t liResult;

		// CgsGameDataPS3.cpp:373
		bool lbSaveSystemVersion;

	}
	CgsCore::StrnCpy(/* parameters */);
	{
		// CgsGameDataPS3.cpp:385
		CgsGui::ESaveLoadCif leCifType;

	}
	{
		// CgsGameDataPS3.cpp:390
		char[1055] lacFilePath;

		// CgsGameDataPS3.cpp:391
		Handle lHandle;

		// CgsGameDataPS3.cpp:392
		void * lpBufferData;

		// CgsGameDataPS3.cpp:393
		int32_t liBufferSize;

		// CgsGameDataPS3.cpp:394
		const char * lpCifFileName;

	}
	CgsFileSystem::AsyncOp::GetLastOperationResult(/* parameters */);
	CgsFileSystem::AsyncOp::GetLastOperationHandle(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// CgsGameDataPS3.cpp:532
void CgsGui::GameData::LoadGameDataFile(uint32_t  luID, void *  lpBuffer, uint32_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGameDataPS3.cpp:538
		char[1055] lacFilePath;

		// CgsGameDataPS3.cpp:539
		Handle lHandle;

		CgsFileSystem::AsyncOp::GetLastOperationResult(/* parameters */);
		CgsFileSystem::AsyncOp::GetLastOperationHandle(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGameDataPS3.cpp:36
