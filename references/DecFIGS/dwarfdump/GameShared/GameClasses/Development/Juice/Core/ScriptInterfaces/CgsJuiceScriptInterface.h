// CgsJuiceScriptInterface.h:51
void CgsDev::JuiceScriptInterface::~JuiceScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuiceScriptInterface.h:51
void CgsDev::JuiceScriptInterface::JuiceScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuiceScriptInterface.h:51
struct CgsDev::JuiceScriptInterface : public Juice::Scripting::ICommands {
private:
	// CgsJuiceScriptInterface.h:63
	CgsJuice * mpOwner;

public:
	// CgsJuiceScriptInterface.cpp:46
	virtual void RegisterRPCs();

	// CgsJuiceScriptInterface.h:75
	CgsJuice * GetOwner();

	virtual void ~JuiceScriptInterface();

}

