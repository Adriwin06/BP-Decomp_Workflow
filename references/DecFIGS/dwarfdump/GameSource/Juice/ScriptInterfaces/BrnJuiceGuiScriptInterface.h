// BrnJuiceGuiScriptInterface.h:48
struct BrnJuice::JuiceGuiScriptInterface : public CgsDev::JuiceScriptInterface {
private:
	// BrnJuiceGuiScriptInterface.h:72
	BrnGui::GuiModule * mpGuiModule;

public:
	// BrnJuiceGuiScriptInterface.cpp:54
	void Construct(BrnGui::GuiModule *);

	// BrnJuiceGuiScriptInterface.cpp:74
	const char * CurrentlySelectedOnlineGame(Juice::Scripting::VarArgs &);

	// BrnJuiceGuiScriptInterface.cpp:86
	const int RenderHUD(Juice::Scripting::VarArgs &);

	// BrnJuiceGuiScriptInterface.cpp:115
	virtual const char * GetNamespaceName() const;

	// BrnJuiceGuiScriptInterface.cpp:129
	virtual void RegisterRPCs();

	virtual void ~JuiceGuiScriptInterface();

}

// BrnJuiceGuiScriptInterface.h:48
void BrnJuice::JuiceGuiScriptInterface::~JuiceGuiScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJuiceGuiScriptInterface.h:48
void BrnJuice::JuiceGuiScriptInterface::JuiceGuiScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

