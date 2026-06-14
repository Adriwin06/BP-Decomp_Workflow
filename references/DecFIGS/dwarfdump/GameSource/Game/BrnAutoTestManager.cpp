// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnAutoTestManager.cpp:88
	extern void OpenLUALibs(lua_State *);

	// BrnAutoTestManager.cpp:163
	extern void GetScriptName(char *, int32_t, const char *);

	// BrnAutoTestManager.cpp:70
	const char * gacGameStateDumpFile;

	// BrnAutoTestManager.cpp:72
	const int32_t KI_DUMP_FRAMES_COUNT = 600;

}

// BrnAutoTestManager.cpp:150
void BrnGame::AutoTestManager::LuaAllocator(void *  ud, void *  ptr, size_t  osize, size_t  nsize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTestManager.cpp:284
void BrnGame::AutoTestManager::IsInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTestManager.cpp:313
void BrnGame::AutoTestManager::FillKeyBindings(ActionInfo *  lpBindingInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:317
		int32_t lnCount;

		CgsInput::InputIO::ActionInfo::SetValue(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:358
void BrnGame::AutoTestManager::ScriptStateFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTestManager.cpp:443
void BrnGame::AutoTestManager::ScriptReader(lua_State *  lpLuaHandle, void *  lpUserData, size_t *  lpSizeOfScript) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:446
		AutoTestManager * lpAutoTest;

	}
}

// BrnAutoTestManager.cpp:471
void BrnGame::AutoTestManager::ScriptStateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:473
		int32_t lnResult;

		// BrnAutoTestManager.cpp:479
		int32_t liSubModuleIndex;

	}
	{
		// BrnAutoTestManager.cpp:482
		char[1024] lacBuffer;

	}
}

// BrnAutoTestManager.cpp:509
void BrnGame::AutoTestManager::ScriptStateInitialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:511
		int32_t lnResult;

	}
}

// BrnAutoTestManager.cpp:743
void BrnGame::AutoTestManager::LUACBDeactivateDebugComponent(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:746
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::GetStringParam(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:263
void BrnGame::AutoTestManager::GetCurrentGameState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateMachine::GetCurrentState(/* parameters */);
}

// BrnAutoTestManager.cpp:663
void BrnGame::AutoTestManager::LUACBRelinquishPad(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:666
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:689
void BrnGame::AutoTestManager::LUACBAcquirePad(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:692
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:374
void BrnGame::AutoTestManager::ScriptStateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:376
		char[13] lacStateID;

		// BrnAutoTestManager.cpp:377
		int32_t lnIndex;

		// BrnAutoTestManager.cpp:385
		LUACall lCall;

		LUACall::AddArgument(/* parameters */);
		LUACall::GetNumResults(/* parameters */);
		LUACall::ResetStack(/* parameters */);
	}
	LUACall::GetArgType(/* parameters */);
	LUACall::GetInt32(/* parameters */);
	LUACall::GetInt32(/* parameters */);
	{
		// BrnAutoTestManager.cpp:410
		const char * lpDebugFunctionToCall;

		LUACall::GetString(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:531
void BrnGame::AutoTestManager::UpdateScriptFSM() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTestManager.cpp:334
void BrnGame::AutoTestManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTestManager.cpp:578
void BrnGame::AutoTestManager::LUACBCallDebugFunction(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:580
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::GetStringParam(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:715
void BrnGame::AutoTestManager::LUACBActivateDebugComponent(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:718
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::GetStringParam(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:198
void BrnGame::AutoTestManager::LoadScripts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:200
		std::FILE * fpFileHandle;

		// BrnAutoTestManager.cpp:201
		char[1024] lacFileName;

		// BrnAutoTestManager.cpp:242
		const luaL_Reg * lpFunc;

	}
	{
		// BrnAutoTestManager.cpp:218
		char[1024] lacBuffer;

		CgsCore::StrCat(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnAutoTestManager.cpp:108
void BrnGame::AutoTestManager::Init(BrnGame::BrnGameModule *  lpGameModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:110
		int32_t lnIndex;

	}
	CgsDev::Log::LogChannelOutput::SetChannel(/* parameters */);
}

// BrnAutoTestManager.cpp:631
void BrnGame::AutoTestManager::LUACBPressButton(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:634
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::IsParamString(/* parameters */);
		LUACallbackHelper::GetInt32Param(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	LUACallbackHelper::GetParamType(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	LUACallbackHelper::GetStringParam(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	LUACallbackHelper::IsParamNumber(/* parameters */);
	LUACallbackHelper::IsParamString(/* parameters */);
	LUACallbackHelper::IsParamBool(/* parameters */);
}

// BrnAutoTestManager.cpp:771
void BrnGame::AutoTestManager::DumpGameState(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:780
		const char * lpcFileNameToUse;

		// BrnAutoTestManager.cpp:800
		char[1024] lacFileName;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		CgsCore::StrCat(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSystem::Timer::GetTime(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnAutoTestManager.cpp:602
void BrnGame::AutoTestManager::LUACBRecordLog(lua_State *  lpLUAState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:604
		LUACallbackHelper lHelper;

		LUACallbackHelper::LUACallbackHelper(/* parameters */);
		LUACallbackHelper::GetStringParam(/* parameters */);
		LUACallbackHelper::ClearParams(/* parameters */);
	}
}

// BrnAutoTestManager.cpp:879
void BrnGame::AutoTestManager::PerfMonCpuReportCallback(const const PerfMonCpuMonitorData &  lParameters, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:881
		const CgsDev::StrStreamBase & lStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnAutoTestManager.cpp:904
void BrnGame::AutoTestManager::PerfMonGpuReportCallback(const const PerfMonGpuMonitorData &  lParameters, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:906
		const CgsDev::StrStreamBase & lStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnAutoTestManager.cpp:925
void BrnGame::AutoTestManager::PoolReportCallback(const const PoolStats &  lParameters, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTestManager.cpp:927
		const CgsDev::StrStreamBase & lStream;

		// BrnAutoTestManager.cpp:937
		int32_t liIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// _built-in_
namespace :: {
	// BrnAutoTestManager.cpp:33
	const luaL_Reg[7] gaLualibs;

	// BrnAutoTestManager.cpp:44
	const luaL_Reg[8] gaBurnoutLUACallbacks;

	// BrnAutoTestManager.cpp:56
	const char *[4] gapcBurnoutModules;

}

