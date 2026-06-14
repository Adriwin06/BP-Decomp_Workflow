// BrnJuice.h:59
struct BrnJuice::BrnJuice : public CgsJuice {
	// BrnJuice.h:72
	extern char[16] onlineAddress;

private:
	// BrnJuice.h:76
	char[16] serverAddress;

	// BrnJuice.h:78
	JuiceConstructParams mConstructParams;

	// BrnJuice.h:79
	BrnJuice::BrnJuiceScripting mJuiceScripting;

public:
	// BrnJuice.h:62
	bool CheckForJuice();

	// BrnJuice.h:66
	void Construct(BrnGame::BrnGameModule *);

	// BrnJuice.h:69
	void ReadJuiceSettingsFile();

}

// BrnJuice.h:34
struct BrnJuice::BrnJuiceScripting : public CgsDev::JuiceScripting {
	// BrnJuice.h:41
	BrnGame::BrnGameModule * mpGameModule;

private:
	// BrnJuice.h:45
	const JuiceConstructParams * mpConstructParams;

	// BrnJuice.h:47
	JuiceWorldScriptInterface mJuiceWorldScriptingInterface;

	// BrnJuice.h:48
	JuiceGameStateScriptInterface mJuiceGameStateScriptingInterface;

	// BrnJuice.h:49
	JuiceGuiScriptInterface mJuiceGuiScriptingInterface;

	// BrnJuice.h:51
	JuiceNetworkScriptInterface mJuiceNetworkScriptingInterface;

public:
	// BrnJuice.cpp:123
	virtual void Construct();

	virtual void ~BrnJuiceScripting();

}

// BrnJuice.h:34
void BrnJuice::BrnJuiceScripting::~BrnJuiceScripting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJuice.h:72
extern char[16] onlineAddress;

// BrnJuice.h:34
void BrnJuice::BrnJuiceScripting::BrnJuiceScripting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

