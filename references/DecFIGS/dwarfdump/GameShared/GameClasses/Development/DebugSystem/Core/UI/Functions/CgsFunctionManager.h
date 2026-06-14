// CgsFunctionManager.h:58
struct CgsDev::DebugUI::FunctionManager : public DebugInternal {
private:
	// CgsFunctionManager.h:90
	DebugStaticPool<CgsDev::DebugUI::Function> mFunctionPool;

	// CgsFunctionManager.h:91
	DebugStaticPool<CgsDev::DebugUI::MenuItemFunction> mMenuItemPool;

public:
	// CgsFunctionManager.h:63
	void Construct(const DebugManagerConstructParameters *);

	// CgsFunctionManager.h:66
	void Destruct();

	// CgsFunctionManager.h:70
	void RegisterFunction(DebugCallbackFunction, void *, const char *, const char *);

	// CgsFunctionManager.h:71
	void UnregisterFunction(DebugCallbackFunction, void *);

	// CgsFunctionManager.h:73
	void SetFunctionName(DebugCallbackFunction, void *, const char *);

	// CgsFunctionManager.h:77
	void CallFunction(const char *);

private:
	// CgsFunctionManager.h:82
	Function * FindFunction(DebugCallbackFunction, void *);

	// CgsFunctionManager.h:85
	CgsDev::DebugUI::MenuItemFunction * FindMenuItem(Function *);

	// CgsFunctionManager.h:88
	Function * FindFunctionFromPath(const char *);

}

// CgsFunctionManager.h:58
struct CgsDev::DebugUI::FunctionManager : public DebugInternal {
private:
	// CgsFunctionManager.h:90
	DebugStaticPool<CgsDev::DebugUI::Function> mFunctionPool;

	// CgsFunctionManager.h:91
	DebugStaticPool<CgsDev::DebugUI::MenuItemFunction> mMenuItemPool;

public:
	// CgsFunctionManager.h:63
	void Construct(const DebugManagerConstructParameters *);

	// CgsFunctionManager.h:66
	void Destruct();

	// CgsFunctionManager.h:70
	void RegisterFunction(Function::DebugCallbackFunction, void *, const char *, const char *);

	// CgsFunctionManager.h:71
	void UnregisterFunction(Function::DebugCallbackFunction, void *);

	// CgsFunctionManager.h:73
	void SetFunctionName(Function::DebugCallbackFunction, void *, const char *);

	// CgsFunctionManager.h:77
	void CallFunction(const char *);

private:
	// CgsFunctionManager.h:82
	Function * FindFunction(Function::DebugCallbackFunction, void *);

	// CgsFunctionManager.h:85
	CgsDev::DebugUI::MenuItemFunction * FindMenuItem(Function *);

	// CgsFunctionManager.h:88
	Function * FindFunctionFromPath(const char *);

}

