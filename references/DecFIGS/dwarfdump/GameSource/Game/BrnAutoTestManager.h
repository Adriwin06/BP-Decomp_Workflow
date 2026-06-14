// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnAutoTestManager.h:48
	const int32_t KI_MAX_SCRIPT_SIZE = 15360;

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// Declaration
	struct AutoTestManager {
		// BrnAutoTestManager.h:93
		enum EScriptState {
			eScriptFinished = 0,
			eScriptRunning = 1,
			eScriptLoading = 2,
			eScriptInitialise = 3,
		}

	}

	// BrnAutoTestManager.h:48
	const int32_t KI_MAX_SCRIPT_SIZE = 15360;

}

// BrnAutoTestManager.h:65
struct BrnGame::AutoTestManager {
private:
	// BrnAutoTestManager.h:82
	char[15360] macScript;

	// BrnAutoTestManager.h:83
	BrnGame::BrnGameModule * mpGameModule;

	// BrnAutoTestManager.h:84
	CgsDev::Log::LogFile mAutoTestLogFile;

	// BrnAutoTestManager.h:85
	CgsDev::Log::LogChannelOutput mAutoTestLogChannel;

	// BrnAutoTestManager.h:86
	CgsDev::Log::LogCombined mAutoTestLog;

	// BrnAutoTestManager.h:87
	int32_t miFramesSinceLastGameStateSave;

	// BrnAutoTestManager.h:90
	CgsID mnCurrentGuiPage;

	// BrnAutoTestManager.h:101
	int32_t miNumScriptsLoaded;

	// BrnAutoTestManager.h:102
	lua_State * mpLuaHandle;

	// BrnAutoTestManager.h:103
	BrnGame::AutoTestManager::EScriptState meScriptState;

	// BrnAutoTestManager.h:104
	bool mbLoadComplete;

	// BrnAutoTestManager.h:105
	float32_t[61] maActions;

	// BrnAutoTestManager.h:106
	bool mbControlPad;

public:
	// BrnAutoTestManager.h:71
	void Init(BrnGame::BrnGameModule *);

	// BrnAutoTestManager.h:75
	void Update();

	// BrnAutoTestManager.h:79
	void FillKeyBindings(ActionInfo *);

private:
	// BrnAutoTestManager.h:112
	void PerfMonCpuReportCallback(const PerfMonCpuMonitorData &, void *);

	// BrnAutoTestManager.h:118
	void PerfMonGpuReportCallback(const PerfMonGpuMonitorData &, void *);

	// BrnAutoTestManager.h:124
	void PoolReportCallback(const PoolStats &, void *);

	// BrnAutoTestManager.h:129
	void DumpGameState(const char *);

	// BrnAutoTestManager.h:134
	bool IsInGame();

	// BrnAutoTestManager.h:137
	void GetCurrentGameState();

	// BrnAutoTestManager.h:145
	void * LuaAllocator(void *, void *, size_t, size_t);

	// BrnAutoTestManager.h:152
	const char * ScriptReader(lua_State *, void *, size_t *);

	// BrnAutoTestManager.h:155
	// Declaration
	void LoadScripts() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAutoTestManager.cpp:249
		using namespace CgsDev::Message;

	}

	// BrnAutoTestManager.h:158
	void UpdateScriptFSM();

	// BrnAutoTestManager.h:161
	void ScriptStateRunning();

	// BrnAutoTestManager.h:164
	void ScriptStateLoading();

	// BrnAutoTestManager.h:167
	void ScriptStateFinished();

	// BrnAutoTestManager.h:170
	void ScriptStateInitialise();

public:
	// BrnAutoTestManager.h:176
	int32_t LUACBCallDebugFunction(lua_State *);

	// BrnAutoTestManager.h:179
	int32_t LUACBRecordLog(lua_State *);

	// BrnAutoTestManager.h:182
	// Declaration
	int32_t LUACBPressButton(lua_State *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAutoTestManager.cpp:637
		using namespace CgsDev::Message;

		// BrnAutoTestManager.cpp:640
		using namespace CgsDev::Message;

	}

	// BrnAutoTestManager.h:185
	int32_t LUACBAcquirePad(lua_State *);

	// BrnAutoTestManager.h:188
	int32_t LUACBRelinquishPad(lua_State *);

	// BrnAutoTestManager.h:191
	int32_t LUACBActivateDebugComponent(lua_State *);

	// BrnAutoTestManager.h:194
	int32_t LUACBDeactivateDebugComponent(lua_State *);

}

// BrnAutoTestManager.h:65
struct BrnGame::AutoTestManager {
private:
	// BrnAutoTestManager.h:82
	char[15360] macScript;

	// BrnAutoTestManager.h:83
	BrnGame::BrnGameModule * mpGameModule;

	// BrnAutoTestManager.h:84
	CgsDev::Log::LogFile mAutoTestLogFile;

	// BrnAutoTestManager.h:85
	CgsDev::Log::LogChannelOutput mAutoTestLogChannel;

	// BrnAutoTestManager.h:86
	CgsDev::Log::LogCombined mAutoTestLog;

	// BrnAutoTestManager.h:87
	int32_t miFramesSinceLastGameStateSave;

	// BrnAutoTestManager.h:90
	CgsID mnCurrentGuiPage;

	// BrnAutoTestManager.h:101
	int32_t miNumScriptsLoaded;

	// BrnAutoTestManager.h:102
	lua_State * mpLuaHandle;

	// BrnAutoTestManager.h:103
	BrnGame::AutoTestManager::EScriptState meScriptState;

	// BrnAutoTestManager.h:104
	bool mbLoadComplete;

	// BrnAutoTestManager.h:105
	float32_t[61] maActions;

	// BrnAutoTestManager.h:106
	bool mbControlPad;

public:
	// BrnAutoTestManager.h:71
	void Init(BrnGame::BrnGameModule *);

	// BrnAutoTestManager.h:75
	void Update();

	// BrnAutoTestManager.h:79
	void FillKeyBindings(ActionInfo *);

private:
	// BrnAutoTestManager.h:112
	void PerfMonCpuReportCallback(const PerfMonCpuMonitorData &, void *);

	// BrnAutoTestManager.h:118
	void PerfMonGpuReportCallback(const PerfMonGpuMonitorData &, void *);

	// BrnAutoTestManager.h:124
	void PoolReportCallback(const PoolStats &, void *);

	// BrnAutoTestManager.h:129
	void DumpGameState(const char *);

	// BrnAutoTestManager.h:134
	bool IsInGame();

	// BrnAutoTestManager.h:137
	void GetCurrentGameState();

	// BrnAutoTestManager.h:145
	void * LuaAllocator(void *, void *, size_t, size_t);

	// BrnAutoTestManager.h:152
	const char * ScriptReader(lua_State *, void *, size_t *);

	// BrnAutoTestManager.h:155
	void LoadScripts();

	// BrnAutoTestManager.h:158
	void UpdateScriptFSM();

	// BrnAutoTestManager.h:161
	void ScriptStateRunning();

	// BrnAutoTestManager.h:164
	void ScriptStateLoading();

	// BrnAutoTestManager.h:167
	void ScriptStateFinished();

	// BrnAutoTestManager.h:170
	void ScriptStateInitialise();

public:
	// BrnAutoTestManager.h:176
	int32_t LUACBCallDebugFunction(lua_State *);

	// BrnAutoTestManager.h:179
	int32_t LUACBRecordLog(lua_State *);

	// BrnAutoTestManager.h:182
	int32_t LUACBPressButton(lua_State *);

	// BrnAutoTestManager.h:185
	int32_t LUACBAcquirePad(lua_State *);

	// BrnAutoTestManager.h:188
	int32_t LUACBRelinquishPad(lua_State *);

	// BrnAutoTestManager.h:191
	int32_t LUACBActivateDebugComponent(lua_State *);

	// BrnAutoTestManager.h:194
	int32_t LUACBDeactivateDebugComponent(lua_State *);

}

