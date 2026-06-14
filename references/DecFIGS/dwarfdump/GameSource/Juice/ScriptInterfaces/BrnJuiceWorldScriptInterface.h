// BrnJuiceWorldScriptInterface.h:45
struct BrnJuice::JuiceWorldScriptInterface : public CgsDev::JuiceScriptInterface {
private:
	// BrnJuiceWorldScriptInterface.h:68
	WorldModule * mpWorldModule;

public:
	// BrnJuiceWorldScriptInterface.cpp:52
	void Construct(WorldModule *);

	// BrnJuiceWorldScriptInterface.cpp:72
	const int SetPlayerCarToAIDriven(Juice::Scripting::VarArgs &);

	// BrnJuiceWorldScriptInterface.cpp:98
	virtual const char * GetNamespaceName() const;

	// BrnJuiceWorldScriptInterface.cpp:112
	virtual void RegisterRPCs();

	virtual void ~JuiceWorldScriptInterface();

}

// BrnJuiceWorldScriptInterface.h:45
void BrnJuice::JuiceWorldScriptInterface::~JuiceWorldScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJuiceWorldScriptInterface.h:45
void BrnJuice::JuiceWorldScriptInterface::JuiceWorldScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

