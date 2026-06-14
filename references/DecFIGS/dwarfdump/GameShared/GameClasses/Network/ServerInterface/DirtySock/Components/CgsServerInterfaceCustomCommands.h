// CgsServerInterfaceCustomCommands.h:48
void CgsNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceCustomCommands.h:48
void CgsNetwork::ServerInterfaceCustomCommands::ServerInterfaceCustomCommands() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceCustomCommands.h:48
struct CgsNetwork::ServerInterfaceCustomCommands : public CgsNetwork::ServerInterfaceComponent {
public:
	// CgsServerInterfaceCustomCommands.cpp:39
	virtual void Construct();

	// CgsServerInterfaceCustomCommands.cpp:54
	bool Prepare();

	// CgsServerInterfaceCustomCommands.cpp:69
	bool Release();

	// CgsServerInterfaceCustomCommands.cpp:84
	void Destruct();

	// CgsServerInterfaceCustomCommands.cpp:101
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	virtual void ~ServerInterfaceCustomCommands();

}

