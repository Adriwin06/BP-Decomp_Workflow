// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceGamesPS3.h:34
	const int32_t KI_MAX_SEARCH_PARAMS = 10;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsServerInterfaceGamesPS3.h:34
	const int32_t KI_MAX_SEARCH_PARAMS = 10;

}

// CgsServerInterfaceGamesPS3.h:51
void CgsNetwork::ServerInterfaceGamesPS3::~ServerInterfaceGamesPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGamesPS3.h:51
void CgsNetwork::ServerInterfaceGamesPS3::ServerInterfaceGamesPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceGamesPS3.h:34
	const int32_t KI_MAX_SEARCH_PARAMS = 10;

}

// CgsServerInterfaceGamesPS3.h:51
struct CgsNetwork::ServerInterfaceGamesPS3 : public CgsNetwork::ServerInterfaceGames {
public:
	// CgsServerInterfaceGamesPS3.cpp:53
	virtual void Construct();

	// CgsServerInterfaceGamesPS3.cpp:67
	virtual void Destruct();

	// CgsServerInterfaceGamesPS3.cpp:85
	virtual bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceGamesPS3.cpp:102
	virtual bool Release();

	// CgsServerInterfaceGamesPS3.cpp:116
	virtual void Update();

	// CgsServerInterfaceGamesPS3.cpp:130
	virtual void Suspend();

	// CgsServerInterfaceGamesPS3.cpp:144
	virtual void Resume();

	// CgsServerInterfaceGamesPS3.cpp:176
	virtual void CreateGame(const CgsNetwork::ServerInterfaceGameParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *);

	// CgsServerInterfaceGamesPS3.cpp:201
	virtual void JoinGame(const CgsNetwork::ServerInterfaceGameParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *);

	// CgsServerInterfaceGamesPS3.cpp:226
	virtual void QuickJoinGame(const CgsNetwork::ServerInterfaceQuickJoinParamsBase *, const CgsNetwork::ServerInterfacePlayerParamsBase *);

	// CgsServerInterfaceGamesPS3.cpp:250
	virtual void SearchForGames(const CgsNetwork::ServerInterfaceGameSearchParamsBase *);

	// CgsServerInterfaceGamesPS3.cpp:274
	virtual void UpdateGameParameters(const CgsNetwork::ServerInterfaceGameParamsBase *);

	// CgsServerInterfaceGamesPS3.cpp:160
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	virtual void ~ServerInterfaceGamesPS3();

}

