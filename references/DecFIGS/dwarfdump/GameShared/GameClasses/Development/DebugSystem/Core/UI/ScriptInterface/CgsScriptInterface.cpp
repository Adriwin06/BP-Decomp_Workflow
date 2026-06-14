// CgsScriptInterface.cpp:83
void CgsDev::DebugUI::ScriptInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:85
		int32_t liIndex;

	}
}

// CgsScriptInterface.cpp:146
void CgsDev::DebugUI::ScriptInterface::FindAlias(const char *  lpcAlias) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:149
		int32_t liIndex;

	}
}

// CgsScriptInterface.cpp:829
void CgsDev::DebugUI::ScriptInterface::ExecuteScriptComponent(const char *  lpcCommand, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:833
		CgsDev::DebugComponent * lpComponent;

	}
}

// CgsScriptInterface.cpp:1071
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Print(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsScriptInterface.cpp:853
void CgsDev::DebugUI::ScriptInterface::OutputMessage(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
}

// CgsScriptInterface.cpp:1231
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Window(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:1241
		const char * lpcWindowPath;

		// CgsScriptInterface.cpp:1242
		float32_t lfX;

		// CgsScriptInterface.cpp:1243
		float32_t lfY;

		// CgsScriptInterface.cpp:1246
		bool lbPinned;

		// CgsScriptInterface.cpp:1248
		int32_t liParameter;

		// CgsScriptInterface.cpp:1265
		CgsDev::DebugUI::Window * lpWindow;

	}
	std(/* parameters */);
	std(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
	{
		// CgsScriptInterface.cpp:1269
		char[256] lacPath;

	}
	Window::TogglePin(/* parameters */);
	{
		// CgsScriptInterface.cpp:1257
		char[256] lacBuf;

	}
}

// CgsScriptInterface.cpp:1162
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Bind(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:1172
		const char * lpcFunctionKey;

		// CgsScriptInterface.cpp:1183
		int32_t liBindingIndex;

	}
	std(/* parameters */);
	{
		// CgsScriptInterface.cpp:1204
		int32_t liParameter;

	}
	{
		// CgsScriptInterface.cpp:1194
		char[256] lacMessage;

	}
}

// CgsScriptInterface.cpp:1041
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_ActivateComponent(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:1044
		const CgsDev::DebugManager & lDebugManager;

		// CgsScriptInterface.cpp:1047
		CgsDev::DebugComponent * lpComponent;

	}
}

// CgsScriptInterface.cpp:878
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Help(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:884
		int32_t liCommandIndex;

	}
	{
		// CgsScriptInterface.cpp:891
		char[256] lacMessage;

	}
}

// CgsScriptInterface.cpp:781
void CgsDev::DebugUI::ScriptInterface::ExecuteScriptAlias(const char *  lpcCommand, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:784
		CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

		{
			// CgsScriptInterface.cpp:805
			char[100] lacBuf;

		}
	}
}

// CgsScriptInterface.cpp:739
void CgsDev::DebugUI::ScriptInterface::ExecuteScriptCommand(const char *  lpcCommand, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:742
		int32_t liCommandIndex;

	}
}

// CgsScriptInterface.cpp:368
void CgsDev::DebugUI::ScriptInterface::Execute(const char *  lpcCommandString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:371
		char[256] lacBuffer;

		// CgsScriptInterface.cpp:375
		char * lpcRead;

		// CgsScriptInterface.cpp:400
		char * lpcScriptCommand;

		// CgsScriptInterface.cpp:419
		const char *[10] lpacScriptParameters;

		// CgsScriptInterface.cpp:420
		int32_t liParameterCount;

		// CgsScriptInterface.cpp:466
		int32_t liCount;

	}
	{
		// CgsScriptInterface.cpp:424
		bool lbQuote;

	}
}

// CgsScriptInterface.cpp:486
void CgsDev::DebugUI::ScriptInterface::ExecuteScript(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:488
		char[512] lacBuffer;

		// CgsScriptInterface.cpp:489
		char[256] lacLine;

		// CgsScriptInterface.cpp:492
		int liFile;

		// CgsScriptInterface.cpp:501
		uint32_t liSize;

	}
	{
		// CgsScriptInterface.cpp:506
		char * lpcEnd;

	}
}

// CgsScriptInterface.cpp:1101
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Exec(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsScriptInterface.cpp:113
void CgsDev::DebugUI::ScriptInterface::Update(CgsDev::DebugController::SpecialKey  leSpecialKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:122
		int32_t liBinding;

	}
}

// CgsScriptInterface.cpp:205
void CgsDev::DebugUI::ScriptInterface::FindFunction(const char *  lpcPathOrAlias, bool  lbCheckAlias) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:211
		CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

	}
}

// CgsScriptInterface.cpp:1017
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Function(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:1020
		Function * lpFunction;

	}
}

// CgsScriptInterface.cpp:175
void CgsDev::DebugUI::ScriptInterface::FindVariable(const char *  lpcPathOrAlias, bool  lbCheckAlias) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:181
		CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

	}
}

// CgsScriptInterface.cpp:983
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_DecrementVariable(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:993
		Variable * lpVariable;

	}
}

// CgsScriptInterface.cpp:952
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_IncrementVariable(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:962
		Variable * lpVariable;

	}
}

// CgsScriptInterface.cpp:911
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_SetVariable(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:921
		Variable * lpVariable;

	}
	{
		// CgsScriptInterface.cpp:924
		char[256] lacBuf;

	}
	{
		// CgsScriptInterface.cpp:933
		char[256] lacBuf;

	}
}

// CgsScriptInterface.cpp:235
void CgsDev::DebugUI::ScriptInterface::CreateAlias(const char *  lpcAlias, const char *  lpcPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:237
		CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

		// CgsScriptInterface.cpp:238
		int32_t liIndex;

	}
	CgsCore::StrCpy(/* parameters */);
	{
		// CgsScriptInterface.cpp:243
		char[100] lacMessage;

	}
}

// CgsScriptInterface.cpp:319
void CgsDev::DebugUI::ScriptInterface::GetAliasString(CgsDev::DebugUI::ScriptInterface::Alias *  lpAlias, char *  lpcStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:328
		CgsDev::DebugUI::MenuItemVariable * lpMenuItemVariable;

		CgsCore::StrCat(/* parameters */);
		Variable::GetName(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	{
		// CgsScriptInterface.cpp:342
		CgsDev::DebugUI::MenuItemFunction * lpMenuItemFunction;

		CgsCore::StrCat(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
	Function::GetName(/* parameters */);
}

// CgsScriptInterface.cpp:1115
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Alias(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:1128
		CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

		{
			// CgsScriptInterface.cpp:1136
			char[256] lacPath;

			// CgsScriptInterface.cpp:1140
			char[256] lacMessage;

		}
	}
}

// CgsScriptInterface.cpp:551
void CgsDev::DebugUI::ScriptInterface::SaveState(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptInterface.cpp:553
		int liIndex;

		// CgsScriptInterface.cpp:554
		char[512] lacLine;

		// CgsScriptInterface.cpp:559
		const CgsDev::DebugManager & lDebugManager;

		// CgsScriptInterface.cpp:562
		int liFile;

		// CgsScriptInterface.cpp:581
		CgsDev::DebugComponent * lpComponent;

		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst(/* parameters */);
		{
			// CgsScriptInterface.cpp:588
			char[256] lacBuffer;

		}
		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(/* parameters */);
		{
			// CgsScriptInterface.cpp:611
			CgsDev::DebugUI::MenuItemVariable * lpMenuItemVariable;

			// CgsScriptInterface.cpp:621
			char[256] lacPath;

			// CgsScriptInterface.cpp:627
			char[256] lacValue;

			Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveAt(/* parameters */);
		}
		{
			// CgsScriptInterface.cpp:646
			CgsDev::DebugUI::ScriptInterface::Alias * lpAlias;

			// CgsScriptInterface.cpp:653
			char[256] lacPath;

		}
		{
			// CgsScriptInterface.cpp:675
			CgsDev::DebugUI::ScriptInterface::Binding * lpBinding;

		}
		{
			// CgsScriptInterface.cpp:695
			CgsDev::DebugUI::Window * lpWindow;

			Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
			{
				// CgsScriptInterface.cpp:698
				char[256] lacPath;

			}
			Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
			CgsCore::StrCat(/* parameters */);
		}
	}
	CgsCore::StrCat(/* parameters */);
	Variable::GetName(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
}

// CgsScriptInterface.cpp:1086
void CgsDev::DebugUI::ScriptInterface::ScriptCommand_Save(CgsDev::DebugUI::ScriptInterface *  lpThis, const char **  lppcParametersArray, int32_t  liParameterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsScriptInterface.cpp:46
