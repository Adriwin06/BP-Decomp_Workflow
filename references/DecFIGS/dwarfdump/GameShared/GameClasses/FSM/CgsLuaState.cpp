// CgsLuaState.cpp:61
void CgsFsm::LuaState::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:469
void CgsFsm::LuaState::IsLuaResourceValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:103
void CgsFsm::LuaState::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:436
void CgsFsm::LuaState::LuaPushId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:440
		int liCharIndex;

		// CgsLuaState.cpp:441
		char[13] lacId;

	}
}

// CgsLuaState.cpp:283
void CgsFsm::LuaState::SetInt(const char *  lpcFunctionName, CgsID  lVariableId, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:254
void CgsFsm::LuaState::SetBool(const char *  lpcFunctionName, CgsID  lVariableId, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:312
void CgsFsm::LuaState::SetString(const char *  lpcFunctionName, CgsID  lVariableId, const char *  lpcValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:339
void CgsFsm::LuaState::NextState(CgsID  lEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLuaState.cpp:410
void CgsFsm::LuaState::LuaAllocator(void *  lpData, void *  lpPointer, size_t  luOldSize, size_t  luNewSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:414
		CgsMemory::HeapMalloc * lpHeapMalloc;

	}
}

// CgsLuaState.cpp:79
void CgsFsm::LuaState::Prepare(CgsResource::LuaCodeResource *  lpLuaCodeResource, CgsMemory::HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLuaState.cpp:125
void CgsFsm::LuaState::GetBool(const char *  lpcFunctionName, CgsID  lVariableId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:129
		bool lBool;

	}
	{
		// CgsLuaState.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// CgsLuaState.cpp:167
void CgsFsm::LuaState::GetInt(const char *  lpcFunctionName, CgsID  lVariableId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:171
		int32_t lInt;

	}
	{
		// CgsLuaState.cpp:187
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// CgsLuaState.cpp:210
void CgsFsm::LuaState::GetString(const char *  lpcFunctionName, CgsID  lVariableId, char *  lpBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:226
		const char * lTmpString;

		CgsCore::StrnCpy(/* parameters */);
	}
	{
		// CgsLuaState.cpp:232
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLuaState.cpp:367
void CgsFsm::LuaState::GetCurrentState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLuaState.cpp:371
		CgsID lNextStateId;

	}
	{
		// CgsLuaState.cpp:386
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// CgsLuaState.cpp:38
// CgsLuaState.cpp:39
