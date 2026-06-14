// CgsJuiceScripting.h:49
void CgsDev::JuiceScripting::~JuiceScripting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuiceScripting.h:49
void CgsDev::JuiceScripting::JuiceScripting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuiceScripting.h:49
struct CgsDev::JuiceScripting : public Juice::Scripting::ICommands {
public:
	void JuiceScripting(const JuiceScripting &);

	void JuiceScripting();

	// CgsJuiceScripting.cpp:50
	virtual void Construct();

	// CgsJuiceScripting.cpp:66
	virtual const char * GetNamespaceName() const;

	// CgsJuiceScripting.cpp:80
	const int EnableScriptInput(Juice::Scripting::VarArgs &);

	// CgsJuiceScripting.cpp:95
	const int DisableScriptInput(Juice::Scripting::VarArgs &);

	virtual void ~JuiceScripting();

}

