// CgsStrStream.h:39
namespace CgsDev {
	// CgsJuice.cpp:55
	const char * KPC_EMPTY_STRING;

	// CgsJuice.cpp:131
	extern CustomJuiceAssertHandler gCustomJuiceAssertHandler;

}

// CgsJuice.cpp:101
struct CgsDev::CustomJuiceAssertHandler : public CgsDev::Assert::AssertHandler {
public:
	void CustomJuiceAssertHandler(const CustomJuiceAssertHandler &);

	void CustomJuiceAssertHandler();

	// CgsJuice.cpp:103
	virtual void OnAssert(AssertData &);

}

// CgsJuice.cpp:146
void CgsDev::CgsJuice::Construct(const JuiceConstructParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:215
void CgsDev::CgsJuice::RegisterScriptInterface(CgsDev::JuiceScriptInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:255
void CgsDev::CgsJuice::RegisterEvent(char *  lpName, char *  lpScript) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:275
void CgsDev::CgsJuice::TriggerEvent(char *  lpName, char *  lpArgs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:234
void CgsDev::CgsJuice::RunJuiceInitialisationScript() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:295
void CgsDev::CgsJuice::IsReadyToReset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:435
void CgsDev::CgsJuice::InstantiateExtention() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsJuice.cpp:452
		JuiceExtension _lExtension;

	}
	JuiceExtension::JuiceExtension(/* parameters */);
}

// CgsJuice.cpp:361
void CgsDev::CgsJuice::InitialiseJuice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:181
void CgsDev::CgsJuice::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:101
void CgsDev::CustomJuiceAssertHandler::CustomJuiceAssertHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuice.cpp:340
void CgsDev::CgsJuice::DisableScriptInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	JuiceExtension::DisableScriptInput(/* parameters */);
}

// CgsJuice.cpp:321
void CgsDev::CgsJuice::EnableScriptInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	JuiceExtension::EnableScriptInput(/* parameters */);
}

// CgsJuice.cpp:58
