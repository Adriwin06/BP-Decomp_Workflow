// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceConnection.cpp:76
	const DSErrorToServerInterfaceError[1] KA_SELECT_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceConnection.cpp:94
	const LobbyLoginErrorToServerInterfaceError[16] KA_LOBBYLOGIN_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceConnection.cpp:114
	const int32_t KI_NUMBER_LOBBY_LOGIN_ERROR_MAPPINGS = 16;

	// CgsServerInterfaceConnection.cpp:131
	const char[5] KAC_ACCOUNT_NAME;

}

// CgsServerInterfaceConnection.cpp:55
struct CgsNetwork::LobbyLoginErrorToServerInterfaceError {
	// lobbylogin.h:80
	typedef CgsNetwork::DirtySock::LobbyLoginAlertE LobbyLoginAlertE;

	// CgsServerInterfaceConnection.cpp:58
	LobbyLoginErrorToServerInterfaceError::LobbyLoginAlertE meAlert;

	// CgsServerInterfaceConnection.cpp:59
	CgsNetwork::EServerInterfaceError meError;

}

