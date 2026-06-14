// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceEndGameDataBase {
	public:
		// CgsServerInterfaceEndGameData.h:52
		virtual ~ServerInterfaceEndGameDataBase();

		ServerInterfaceEndGameDataBase();

	}

}

// CgsServerInterfaceEndGameData.h:48
void CgsNetwork::ServerInterfaceEndGameDataBase::ServerInterfaceEndGameDataBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceEndGameData.h:48
struct CgsNetwork::ServerInterfaceEndGameDataBase {
	int (*)(...) * _vptr.ServerInterfaceEndGameDataBase;

public:
	// CgsServerInterfaceEndGameData.h:52
	virtual void ~ServerInterfaceEndGameDataBase();

	// CgsServerInterfaceEndGameData.cpp:39
	virtual bool Prepare();

}

