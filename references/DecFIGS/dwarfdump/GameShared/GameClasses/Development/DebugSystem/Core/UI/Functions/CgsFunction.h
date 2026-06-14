// CgsFunction.h:52
struct CgsDev::DebugUI::Function {
private:
	// CgsFunction.h:81
	DebugCallbackFunction mpFunction;

	// CgsFunction.h:82
	void * mpParameter;

	// CgsFunction.h:83
	const char * mpcName;

public:
	// CgsFunction.h:56
	bool Prepare(DebugCallbackFunction, void *, const char *);

	// CgsFunction.h:59
	void Release();

	// CgsFunction.h:66
	DebugCallbackFunction GetFunction();

	// CgsFunction.h:69
	void * GetParameter();

	// CgsFunction.h:72
	const char * GetName() const;

	// CgsFunction.h:76
	void Select();

}

// CgsFunction.h:52
struct CgsDev::DebugUI::Function {
	// CgsTypes.h:75
	typedef void (*)(void *) DebugCallbackFunction;

private:
	// CgsFunction.h:81
	Function::DebugCallbackFunction mpFunction;

	// CgsFunction.h:82
	void * mpParameter;

	// CgsFunction.h:83
	const char * mpcName;

public:
	// CgsFunction.h:56
	bool Prepare(Function::DebugCallbackFunction, void *, const char *);

	// CgsFunction.h:59
	void Release();

	// CgsFunction.h:66
	Function::DebugCallbackFunction GetFunction();

	// CgsFunction.h:69
	void * GetParameter();

	// CgsFunction.h:72
	const char * GetName() const;

	// CgsFunction.h:76
	void Select();

}

