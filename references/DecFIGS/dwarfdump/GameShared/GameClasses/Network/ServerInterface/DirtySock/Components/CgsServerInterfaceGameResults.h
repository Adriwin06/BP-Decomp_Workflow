// CgsServerInterfaceGameResults.h:46
void CgsNetwork::ServerInterfaceGameResultsBase::~ServerInterfaceGameResultsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameResults.h:46
void CgsNetwork::ServerInterfaceGameResultsBase::ServerInterfaceGameResultsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameResults.h:46
struct CgsNetwork::ServerInterfaceGameResultsBase : public CgsNetwork::ServerInterfaceStructureInterface {
public:
	// CgsServerInterfaceGameResults.cpp:47
	virtual bool Prepare();

	// CgsServerInterfaceGameResults.cpp:63
	virtual void SerialiseToString(char *, int32_t) const;

	virtual void ~ServerInterfaceGameResultsBase();

}

