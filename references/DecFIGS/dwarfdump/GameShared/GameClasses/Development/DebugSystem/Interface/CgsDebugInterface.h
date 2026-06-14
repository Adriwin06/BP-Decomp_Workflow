// CgsDebugInterface.h:55
struct CgsDev::DebugInterface {
private:
	// CgsDebugInterface.h:129
	DebugManager * mpDebugManager;

	// CgsDebugInterface.h:130
	bool mbIsAutomaticClass;

public:
	// CgsDebugInterface.h:59
	void DebugInterface();

	// CgsDebugInterface.h:60
	void ~DebugInterface();

	// CgsDebugInterface.h:61
	void DebugInterface(DebugManager *);

	// CgsDebugInterface.h:64
	DebugRender & GetRender();

	// CgsDebugInterface.h:67
	DebugRender & Get2dRender();

	// CgsDebugInterface.h:71
	CgsDev::DebugUI::LogWindowStrStream & GetConsole();

	// CgsDebugInterface.h:73
	void ConsolePrint(const char *);

	// CgsDebugInterface.h:74
	void ConsolePrintf(const char *, ...);

	// CgsDebugInterface.h:75
	void ShowConsole(bool);

	// CgsDebugInterface.h:77
	void EnableConsole();

	// CgsDebugInterface.h:78
	void DisableConsole();

	// CgsDebugInterface.h:79
	bool IsConsoleEnabled();

	// CgsDebugInterface.h:83
	void ShowErrorMessage(const char *);

	// CgsDebugInterface.h:87
	void RegisterVariable(float32_t *, const char *, const char *);

	// CgsDebugInterface.h:88
	void RegisterVariable(int32_t *, const char *, const char *);

	// CgsDebugInterface.h:89
	void RegisterVariable(uint32_t *, const char *, const char *);

	// CgsDebugInterface.h:90
	void RegisterVariable(bool *, const char *, const char *);

	// CgsDebugInterface.h:91
	void SetRange(float32_t *, float32_t, float32_t);

	// CgsDebugInterface.h:92
	void SetRange(int32_t *, int32_t, int32_t);

	// CgsDebugInterface.h:93
	void SetRange(uint32_t *, uint32_t, uint32_t);

	// CgsDebugInterface.h:94
	void SetStep(float32_t *, float32_t);

	// CgsDebugInterface.h:95
	void SetStep(int32_t *, int32_t);

	// CgsDebugInterface.h:96
	void SetStep(uint32_t *, uint32_t);

	// CgsDebugInterface.h:97
	void SetReadOnly(void *, bool);

	// CgsDebugInterface.h:98
	void SetSaveEnabled(void *, bool);

	// CgsDebugInterface.h:99
	void SetVisible(void *, bool);

	// CgsDebugInterface.h:100
	void SetCustomMenuItem(void *, CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugInterface.h:101
	void SetOptions(int32_t *, const CgsDev::DebugUI::StringList *);

	// CgsDebugInterface.h:102
	void SetChangeCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugInterface.h:103
	void SetSelectCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugInterface.h:104
	void SetVariableName(void *, const char *);

	// CgsDebugInterface.h:105
	void UnregisterVariable(void *);

	// CgsDebugInterface.h:108
	// Declaration
	void RegisterFunction() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTypes.h:75
		typedef void (*)(void *) DebugCallbackFunction;

	}

	// CgsDebugInterface.h:109
	void UnregisterFunction(DebugCallbackFunction, void *);

	// CgsDebugInterface.h:110
	void SetFunctionName(DebugCallbackFunction, void *, const char *);

	// CgsDebugInterface.h:113
	void ExecuteScript(const char *);

	// CgsDebugInterface.h:119
	CgsDev::DebugManager & GetDebugManager();

	// CgsDebugInterface.h:123
	CgsDev::DebugUI::DebugUI & GetUI();

}

// CgsDebugInterface.h:55
struct CgsDev::DebugInterface {
private:
	// CgsDebugInterface.h:129
	DebugManager * mpDebugManager;

	// CgsDebugInterface.h:130
	bool mbIsAutomaticClass;

public:
	// CgsDebugInterface.h:59
	void DebugInterface();

	// CgsDebugInterface.h:60
	void ~DebugInterface();

	// CgsDebugInterface.h:61
	void DebugInterface(DebugManager *);

	// CgsDebugInterface.h:64
	DebugRender & GetRender();

	// CgsDebugInterface.h:67
	DebugRender & Get2dRender();

	// CgsDebugInterface.h:71
	CgsDev::DebugUI::LogWindowStrStream & GetConsole();

	// CgsDebugInterface.h:73
	void ConsolePrint(const char *);

	// CgsDebugInterface.h:74
	void ConsolePrintf(const char *, ...);

	// CgsDebugInterface.h:75
	void ShowConsole(bool);

	// CgsDebugInterface.h:77
	void EnableConsole();

	// CgsDebugInterface.h:78
	void DisableConsole();

	// CgsDebugInterface.h:79
	bool IsConsoleEnabled();

	// CgsDebugInterface.h:83
	void ShowErrorMessage(const char *);

	// CgsDebugInterface.h:87
	void RegisterVariable(float32_t *, const char *, const char *);

	// CgsDebugInterface.h:88
	void RegisterVariable(int32_t *, const char *, const char *);

	// CgsDebugInterface.h:89
	void RegisterVariable(uint32_t *, const char *, const char *);

	// CgsDebugInterface.h:90
	void RegisterVariable(bool *, const char *, const char *);

	// CgsDebugInterface.h:91
	void SetRange(float32_t *, float32_t, float32_t);

	// CgsDebugInterface.h:92
	void SetRange(int32_t *, int32_t, int32_t);

	// CgsDebugInterface.h:93
	void SetRange(uint32_t *, uint32_t, uint32_t);

	// CgsDebugInterface.h:94
	void SetStep(float32_t *, float32_t);

	// CgsDebugInterface.h:95
	void SetStep(int32_t *, int32_t);

	// CgsDebugInterface.h:96
	void SetStep(uint32_t *, uint32_t);

	// CgsDebugInterface.h:97
	void SetReadOnly(void *, bool);

	// CgsDebugInterface.h:98
	void SetSaveEnabled(void *, bool);

	// CgsDebugInterface.h:99
	void SetVisible(void *, bool);

	// CgsDebugInterface.h:100
	void SetCustomMenuItem(void *, CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugInterface.h:101
	void SetOptions(int32_t *, const CgsDev::DebugUI::StringList *);

	// CgsDebugInterface.h:102
	void SetChangeCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugInterface.h:103
	void SetSelectCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugInterface.h:104
	void SetVariableName(void *, const char *);

	// CgsDebugInterface.h:105
	void UnregisterVariable(void *);

	// CgsDebugInterface.h:108
	void RegisterFunction(Function::DebugCallbackFunction, void *, const char *, const char *);

	// CgsDebugInterface.h:109
	void UnregisterFunction(Function::DebugCallbackFunction, void *);

	// CgsDebugInterface.h:110
	void SetFunctionName(Function::DebugCallbackFunction, void *, const char *);

	// CgsDebugInterface.h:113
	void ExecuteScript(const char *);

	// CgsDebugInterface.h:119
	CgsDev::DebugManager & GetDebugManager();

	// CgsDebugInterface.h:123
	CgsDev::DebugUI::DebugUI & GetUI();

}

