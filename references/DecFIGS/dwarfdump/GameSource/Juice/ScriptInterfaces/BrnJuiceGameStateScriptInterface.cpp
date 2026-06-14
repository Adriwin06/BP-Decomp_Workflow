// BrnJuiceNetworkScriptInterface.h:32
namespace BrnJuice {
	// BrnJuiceGameStateScriptInterface.cpp:33
	const char[13] KAC_GAMESTATE_SCRIPT_INTERFACE_NAMESPACE;

	// BrnJuiceGameStateScriptInterface.cpp:42
	bool mbSetupCar;

	// BrnJuiceGameStateScriptInterface.cpp:43
	int gLandmarkIndex;

	// BrnJuiceGameStateScriptInterface.cpp:44
	int gGridPositionIndex;

	// BrnJuiceGameStateScriptInterface.cpp:45
	CgsID gCarID;

	// BrnJuiceGameStateScriptInterface.cpp:46
	CgsID gWheelID;

}

// BrnJuiceGameStateScriptInterface.cpp:228
struct {
	// BrnJuiceGameStateScriptInterface.cpp:228
	const int (*)(Juice::Scripting::VarArgs &) __pfn;

	// BrnJuiceGameStateScriptInterface.cpp:228
	int __delta;

}

// BrnJuiceGameStateScriptInterface.cpp:228
struct {
	// BrnJuiceGameStateScriptInterface.cpp:228
	const char *(*)(Juice::Scripting::VarArgs &) __pfn;

	// BrnJuiceGameStateScriptInterface.cpp:228
	int __delta;

}

