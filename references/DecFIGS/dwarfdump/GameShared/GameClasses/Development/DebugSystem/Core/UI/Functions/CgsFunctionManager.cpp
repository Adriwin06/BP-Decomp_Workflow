// CgsFunctionManager.cpp:83
void CgsDev::DebugUI::FunctionManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFunctionManager.cpp:205
void CgsDev::DebugUI::FunctionManager::FindFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:208
		int32_t liIndex;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::Function>::GetActiveAt(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::Function>::GetActiveAt(/* parameters */);
}

// CgsFunctionManager.cpp:177
void CgsDev::DebugUI::FunctionManager::SetFunctionName(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:180
		Function * lpFunction;

	}
}

// CgsFunctionManager.cpp:236
void CgsDev::DebugUI::FunctionManager::FindMenuItem(Function *  lpFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:239
		int32_t liIndex;

		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetActiveAt(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetActiveCount(/* parameters */);
	}
}

// CgsFunctionManager.cpp:61
void CgsDev::DebugUI::FunctionManager::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Construct(/* parameters */);
	operator new [](/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	MenuItemFunction::MenuItemFunction(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Clear(/* parameters */);
}

// CgsFunctionManager.cpp:100
void CgsDev::DebugUI::FunctionManager::RegisterFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:103
		CgsDev::DebugUI::Menu * lpMenu;

		// CgsFunctionManager.cpp:111
		Function * lpFunction;

		// CgsFunctionManager.cpp:119
		CgsDev::DebugUI::MenuItemFunction * lpMenuItem;

		Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Allocate(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Allocate(/* parameters */);
	}
}

// CgsFunctionManager.cpp:141
void CgsDev::DebugUI::FunctionManager::UnregisterFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:144
		Function * lpFunction;

		// CgsFunctionManager.cpp:151
		CgsDev::DebugUI::MenuItemFunction * lpMenuItem;

		Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Free(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Free(/* parameters */);
	}
}

// CgsFunctionManager.cpp:288
void CgsDev::DebugUI::FunctionManager::FindFunctionFromPath(const char *  lpcPathAndName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:297
		char[512] lacOtherPathAndName;

		// CgsFunctionManager.cpp:298
		int32_t liIndex;

	}
	{
		// CgsFunctionManager.cpp:302
		CgsDev::DebugUI::MenuItemFunction * lpMenuItem;

		// CgsFunctionManager.cpp:311
		char * lpcCompare;

		CgsCore::StrCat(/* parameters */);
		Function::GetName(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetActiveAt(/* parameters */);
	MenuItemFunction::GetFunction(/* parameters */);
}

// CgsFunctionManager.cpp:268
void CgsDev::DebugUI::FunctionManager::CallFunction(const char *  lpFunctionName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFunctionManager.cpp:270
		Function * lpFunctionToCall;

	}
}

