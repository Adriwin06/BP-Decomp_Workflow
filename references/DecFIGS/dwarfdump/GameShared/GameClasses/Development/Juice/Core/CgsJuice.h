// CgsJuice.h:56
struct CgsDev::JuiceConstructParams {
	// CgsJuice.h:59
	const char * mpcTitleName;

	// CgsJuice.h:60
	const char * mpcBuildName;

	// CgsJuice.h:61
	const char * mpcChangeList;

	// CgsJuice.h:62
	const char * mpcExecutableName;

	// CgsJuice.h:63
	const char * mpcConsoleName;

	// CgsJuice.h:67
	const char * mpcServerIP;

	// CgsJuice.h:68
	int32_t miServerPort;

	// CgsJuice.h:71
	const char * mpcDefaultScriptNamespace;

	// CgsJuice.h:74
	const char * mpcXBoxPath;

	// CgsJuice.h:75
	const char * mpcXBoxExeName;

	// CgsJuice.h:78
	CgsDev::JuiceExtension * mpCustomJuiceExtension;

	// CgsJuice.h:79
	CgsDev::JuiceScripting * mpCustomJuiceScripting;

	// CgsJuice.h:82
	bool mbUseExceptionHandler;

	// CgsJuice.h:85
	extern const JuiceConstructParams DEFAULT;

}

// CgsJuice.h:85
extern const JuiceConstructParams DEFAULT;

// CgsJuice.h:100
struct CgsDev::CgsJuice {
private:
	// CgsJuice.h:149
	const JuiceConstructParams * mpConstructParams;

	// CgsJuice.h:153
	Juice::INetwork * mpJuiceNetwork;

	// CgsJuice.h:154
	CgsDev::JuiceExtension * mpExtension;

	// CgsJuice.h:155
	CgsDev::JuiceScripting * mpScripting;

	// CgsJuice.h:156
	bool mbIsInitialised;

	// CgsJuice.h:157
	bool mbHasRunInitScript;

public:
	// CgsJuice.h:107
	void Construct(const JuiceConstructParams *);

	// CgsJuice.h:111
	bool Update();

	// CgsJuice.h:118
	void RegisterScriptInterface(CgsDev::JuiceScriptInterface *);

	// CgsJuice.h:122
	void RunJuiceInitialisationScript();

	// CgsJuice.h:126
	void EnableScriptInput();

	// CgsJuice.h:130
	void DisableScriptInput();

	// CgsJuice.h:134
	void RegisterEvent(char *, char *);

	// CgsJuice.h:138
	void TriggerEvent(char *, char *);

	// CgsJuice.h:141
	bool IsReadyToReset() const;

	// CgsJuice.h:145
	const JuiceConstructParams & GetConstructParams() const;

private:
	// CgsJuice.h:161
	bool InitialiseJuice();

	// CgsJuice.h:165
	CgsDev::JuiceExtension * InstantiateExtention();

}

