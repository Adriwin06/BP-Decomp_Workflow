// BrnJuiceGameStateScriptInterface.h:49
struct BrnJuice::JuiceGameStateScriptInterface : public CgsDev::JuiceScriptInterface {
private:
	// BrnJuiceGameStateScriptInterface.h:80
	BrnGameState::GameStateModule * mpGameStateModule;

public:
	// BrnJuiceGameStateScriptInterface.cpp:59
	void Construct(BrnGameState::GameStateModule *);

	// BrnJuiceGameStateScriptInterface.cpp:77
	void AddJuiceEvents(BrnGameState::GameStateModule *, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnJuiceGameStateScriptInterface.cpp:114
	const int ChangePlayerCar(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:137
	const int UnlockEntireGame(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:145
	const char * GetCurrentCarName(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:157
	const int IsRaceFinished(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:170
	const int IsCrashing(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:183
	const int SetupCar(Juice::Scripting::VarArgs &);

	// BrnJuiceGameStateScriptInterface.cpp:212
	virtual const char * GetNamespaceName() const;

	// BrnJuiceGameStateScriptInterface.cpp:226
	virtual void RegisterRPCs();

	virtual void ~JuiceGameStateScriptInterface();

}

// BrnJuiceGameStateScriptInterface.h:49
void BrnJuice::JuiceGameStateScriptInterface::~JuiceGameStateScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJuiceGameStateScriptInterface.h:49
void BrnJuice::JuiceGameStateScriptInterface::JuiceGameStateScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

