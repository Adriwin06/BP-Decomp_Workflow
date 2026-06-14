// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct ScriptInterface {
			// CgsScriptInterface.h:79
			struct ScriptCommand {
				// CgsScriptInterface.h:81
				void (*)(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t) mpFunction;

				// CgsScriptInterface.h:82
				const char * mpcName;

				// CgsScriptInterface.h:83
				const char * mpcHelp;

			}

			// CgsScriptInterface.h:97
			struct Alias {
				// CgsScriptInterface.h:99
				char[10] macAlias;

				// CgsScriptInterface.h:100
				Variable * mpVariable;

				// CgsScriptInterface.h:101
				Function * mpFunction;

			}

			// CgsScriptInterface.h:121
			struct Binding {
				// CgsScriptInterface.h:123
				char[128] macBinding;

			}

		}

	}

}

// CgsScriptInterface.h:55
struct CgsDev::DebugUI::ScriptInterface : public DebugInternal {
protected:
	// CgsScriptInterface.h:72
	extern const int32_t KI_MAX_PARAMETERS = 10;

	// CgsScriptInterface.h:85
	extern CgsDev::DebugUI::ScriptInterface::ScriptCommand[] KA_COMMAND_TABLE;

	// CgsScriptInterface.h:90
	extern const int32_t KI_MAX_ALIASES = 40;

	// CgsScriptInterface.h:93
	extern const uint32_t KU_MAX_ALIAS_LENGTH = 10;

	// CgsScriptInterface.h:103
	CgsDev::DebugUI::ScriptInterface::Alias[40] maAliasTable;

	// CgsScriptInterface.h:114
	extern const uint32_t KU_MAX_BINDING_LENGTH = 128;

	// CgsScriptInterface.h:117
	extern const int32_t KI_MAX_BINDINGS = 12;

	// CgsScriptInterface.h:125
	CgsDev::DebugUI::ScriptInterface::Binding[12] maBindingTable;

public:
	// CgsScriptInterface.h:59
	void Construct();

	// CgsScriptInterface.h:60
	void Update(CgsDev::DebugController::SpecialKey);

	// CgsScriptInterface.h:63
	void Execute(const char *);

	// CgsScriptInterface.h:64
	void ExecuteScript(const char *);

	// CgsScriptInterface.h:67
	void SaveState(const char *);

protected:
	// CgsScriptInterface.h:107
	bool CreateAlias(const char *, const char *);

	// CgsScriptInterface.h:110
	void GetAliasString(CgsDev::DebugUI::ScriptInterface::Alias *, char *, int32_t);

	// CgsScriptInterface.h:131
	CgsDev::DebugUI::ScriptInterface::Alias * FindAlias(const char *);

	// CgsScriptInterface.h:134
	Variable * FindVariable(const char *, bool);

	// CgsScriptInterface.h:137
	Function * FindFunction(const char *, bool);

	// CgsScriptInterface.h:142
	void ExecuteScriptCommand(const char *, const char **, int32_t);

	// CgsScriptInterface.h:143
	bool ExecuteScriptAlias(const char *, const char **, int32_t);

	// CgsScriptInterface.h:144
	bool ExecuteScriptComponent(const char *, const char **, int32_t);

	// CgsScriptInterface.h:147
	void ScriptCommand_Help(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:148
	void ScriptCommand_SetVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:149
	void ScriptCommand_IncrementVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:150
	void ScriptCommand_DecrementVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:151
	void ScriptCommand_Function(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:152
	void ScriptCommand_ActivateComponent(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:153
	void ScriptCommand_Save(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:154
	void ScriptCommand_Exec(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:155
	void ScriptCommand_Print(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:156
	void ScriptCommand_Alias(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:157
	void ScriptCommand_Window(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:158
	void ScriptCommand_Bind(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:161
	void OutputMessage(const char *);

}

// CgsScriptInterface.h:85
extern CgsDev::DebugUI::ScriptInterface::ScriptCommand[] KA_COMMAND_TABLE;

// CgsScriptInterface.h:90
extern const int32_t KI_MAX_ALIASES = 40;

// CgsScriptInterface.h:93
extern const uint32_t KU_MAX_ALIAS_LENGTH = 10;

// CgsScriptInterface.h:114
extern const uint32_t KU_MAX_BINDING_LENGTH = 128;

// CgsScriptInterface.h:117
extern const int32_t KI_MAX_BINDINGS = 12;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct ScriptInterface {
			// CgsScriptInterface.h:79
			struct ScriptCommand {
				// CgsScriptInterface.h:81
				void (*)(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t) mpFunction;

				// CgsScriptInterface.h:82
				const char * mpcName;

				// CgsScriptInterface.h:83
				const char * mpcHelp;

			}

			// CgsScriptInterface.h:97
			struct Alias {
				// CgsScriptInterface.h:99
				char[10] macAlias;

				// CgsScriptInterface.h:100
				Variable * mpVariable;

				// CgsScriptInterface.h:101
				Function * mpFunction;

			}

			// CgsScriptInterface.h:121
			struct Binding {
				// CgsScriptInterface.h:123
				char[128] macBinding;

			}

		}

	}

}

// CgsScriptInterface.h:55
struct CgsDev::DebugUI::ScriptInterface : public DebugInternal {
protected:
	// CgsScriptInterface.h:72
	extern const int32_t KI_MAX_PARAMETERS = 10;

	// CgsScriptInterface.h:85
	extern CgsDev::DebugUI::ScriptInterface::ScriptCommand[] KA_COMMAND_TABLE;

	// CgsScriptInterface.h:90
	extern const int32_t KI_MAX_ALIASES = 40;

	// CgsScriptInterface.h:93
	extern const uint32_t KU_MAX_ALIAS_LENGTH = 10;

	// CgsScriptInterface.h:103
	CgsDev::DebugUI::ScriptInterface::Alias[40] maAliasTable;

	// CgsScriptInterface.h:114
	extern const uint32_t KU_MAX_BINDING_LENGTH = 128;

	// CgsScriptInterface.h:117
	extern const int32_t KI_MAX_BINDINGS = 12;

	// CgsScriptInterface.h:125
	CgsDev::DebugUI::ScriptInterface::Binding[12] maBindingTable;

public:
	// CgsScriptInterface.h:59
	void Construct();

	// CgsScriptInterface.h:60
	void Update(CgsDev::DebugController::SpecialKey);

	// CgsScriptInterface.h:63
	void Execute(const char *);

	// CgsScriptInterface.h:64
	void ExecuteScript(const char *);

	// CgsScriptInterface.h:67
	void SaveState(const char *);

protected:
	// CgsScriptInterface.h:107
	bool CreateAlias(const char *, const char *);

	// CgsScriptInterface.h:110
	void GetAliasString(CgsDev::DebugUI::ScriptInterface::Alias *, char *, int32_t);

	// CgsScriptInterface.h:131
	CgsDev::DebugUI::ScriptInterface::Alias * FindAlias(const char *);

	// CgsScriptInterface.h:134
	Variable * FindVariable(const char *, bool);

	// CgsScriptInterface.h:137
	Function * FindFunction(const char *, bool);

	// CgsScriptInterface.h:142
	void ExecuteScriptCommand(const char *, const char **, int32_t);

	// CgsScriptInterface.h:143
	bool ExecuteScriptAlias(const char *, const char **, int32_t);

	// CgsScriptInterface.h:144
	bool ExecuteScriptComponent(const char *, const char **, int32_t);

	// CgsScriptInterface.h:147
	void ScriptCommand_Help(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:148
	void ScriptCommand_SetVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:149
	void ScriptCommand_IncrementVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:150
	void ScriptCommand_DecrementVariable(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:151
	void ScriptCommand_Function(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:152
	void ScriptCommand_ActivateComponent(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:153
	void ScriptCommand_Save(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:154
	void ScriptCommand_Exec(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:155
	void ScriptCommand_Print(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:156
	void ScriptCommand_Alias(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:157
	void ScriptCommand_Window(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:158
	void ScriptCommand_Bind(CgsDev::DebugUI::ScriptInterface *, const char **, int32_t);

	// CgsScriptInterface.h:161
	// Declaration
	void OutputMessage(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsScriptInterface.cpp:856
		using namespace Message;

		// CgsScriptInterface.cpp:857
		using namespace Message;

	}

}

// CgsScriptInterface.h:72
extern const int32_t KI_MAX_PARAMETERS = 10;

