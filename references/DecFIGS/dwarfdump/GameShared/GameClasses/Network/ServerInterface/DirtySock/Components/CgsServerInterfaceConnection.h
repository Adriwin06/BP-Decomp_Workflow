// CgsServerInterfaceConnection.h:173
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceConnection.h:174
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceConnection {
	private:
		// CgsServerInterfaceConnection.h:173
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceConnection.h:174
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceConnection {
	public:
		virtual ~ServerInterfaceConnection();

	private:
		// CgsServerInterfaceConnection.h:173
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceConnection.h:174
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceConnection.h:64
void CgsNetwork::ServerInterfaceConnection::~ServerInterfaceConnection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceConnection {
	public:
		virtual ~ServerInterfaceConnection();

		ServerInterfaceConnection();

	private:
		// CgsServerInterfaceConnection.h:173
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceConnection.h:174
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceConnection.h:64
void CgsNetwork::ServerInterfaceConnection::ServerInterfaceConnection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceConnection {
		// CgsServerInterfaceConnection.h:68
		enum ELoginStatus {
			E_LOGIN_STATUS_INVALID = -1,
			E_LOGIN_STATUS_OFFLINE = 0,
			E_LOGIN_STATUS_CONNECT = 1,
			E_LOGIN_STATUS_CREATE = 2,
			E_LOGIN_STATUS_LOGIN = 3,
			E_LOGIN_STATUS_DUPLICATE_ACCOUNT = 4,
			E_LOGIN_STATUS_AGREE_TOS = 5,
			E_LOGIN_STATUS_AGREE_SHARE_INFO = 6,
			E_LOGIN_STATUS_ENTER_PARENTAL_EMAIL = 7,
			E_LOGIN_STATUS_INAVLID_REGISTRY_KEY = 8,
			E_LOGIN_STATUS_SELECT_PERSONA = 9,
			E_LOGIN_STATUS_DEACTIVATED = 10,
			E_LOGIN_STATUS_NUCLEUS_WELCOME = 11,
			E_LOGIN_STATUS_LOGIN_DONE = 12,
			E_LOGIN_STATUS_BUSY = 13,
			E_LOGIN_STATUS_NUM = 14,
		}

		// CgsServerInterfaceConnection.h:90
		enum EAction {
			E_ACTION_CONNECTTOSERVER = 0,
			E_ACTION_ISSUESELECT = 1,
			E_ACTION_LOGINTOSERVER = 2,
			E_ACTION_AGREETOS = 3,
			E_ACTION_AGREESHAREINFO = 4,
			E_ACTION_COUNT = 5,
		}

	}

}

// CgsServerInterfaceConnection.h:64
struct CgsNetwork::ServerInterfaceConnection : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceConnection.cpp:66
	extern const int[5] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceConnection.cpp:84
	extern const DSErrorToServerInterfaceErrorTable[5] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceConnection.cpp:116
	extern const char *[5] KAPC_ACTION_NAMES;

	// CgsServerInterfaceConnection.h:177
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceConnection.h:178
	CgsNetwork::ServerInterfaceConnection::EAction meCurrentAction;

	// CgsServerInterfaceConnection.h:180
	int32_t miConnectCallback;

	// CgsServerInterfaceConnection.h:181
	bool mbConnecting;

	// CgsServerInterfaceConnection.h:182
	bool mbConnected;

public:
	// CgsServerInterfaceConnection.cpp:145
	virtual void Construct();

	// CgsServerInterfaceConnection.cpp:168
	void Destruct();

	// CgsServerInterfaceConnection.cpp:190
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceConnection.cpp:219
	bool Release();

	// CgsServerInterfaceConnection.cpp:243
	void Update();

	// CgsServerInterfaceConnection.cpp:292
	void Suspend();

	// CgsServerInterfaceConnection.cpp:305
	void Resume();

	// CgsServerInterfaceConnection.cpp:320
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceConnection.cpp:476
	// Declaration
	void ConnectToServer(const char *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceConnection.cpp:478
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceConnection.cpp:559
	// Declaration
	void LogInToServer(const char *, const char *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceConnection.cpp:561
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceConnection.cpp:670
	void AgreeTOS(bool);

	// CgsServerInterfaceConnection.cpp:703
	void AgreeShareInfo(bool, bool);

	// CgsServerInterfaceConnection.cpp:736
	CgsNetwork::ServerInterfaceConnection::ELoginStatus GetLoginStatus();

	// CgsServerInterfaceConnection.cpp:772
	bool IsLoggedIn() const;

	// CgsServerInterfaceConnection.cpp:790
	bool IsConnectedToNetworkService() const;

	// CgsServerInterfaceConnection.cpp:807
	bool IsCableConnected() const;

	// CgsServerInterfaceConnection.cpp:821
	void DisconnectFromServer();

	// CgsServerInterfaceConnection.cpp:874
	bool IsFirstLogin() const;

private:
	// CgsServerInterfaceConnection.cpp:376
	CgsNetwork::EServerInterfaceError ConvertError(LobbyLoginErrorToServerInterfaceError::LobbyLoginAlertE, CgsNetwork::ServerInterfaceConnection::EAction);

	// CgsServerInterfaceConnection.cpp:413
	CgsNetwork::EServerInterfaceError ConvertError(int32_t, CgsNetwork::ServerInterfaceConnection::EAction);

	// CgsServerInterfaceConnection.cpp:457
	void EndAction(int32_t);

	// CgsServerInterfaceConnection.cpp:438
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceConnection.cpp:516
	// Declaration
	void ServerConnectCallback(LobbyLoginRefT *, LobbyLoginContextE, LobbyLoginStatusE, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbylogin.h:151
		typedef CgsNetwork::DirtySock::LobbyLoginRefT LobbyLoginRefT;

		// lobbylogin.h:103
		typedef CgsNetwork::DirtySock::LobbyLoginContextE LobbyLoginContextE;

		// lobbylogin.h:115
		typedef CgsNetwork::DirtySock::LobbyLoginStatusE LobbyLoginStatusE;

	}

	// CgsServerInterfaceConnection.cpp:609
	void ServerLoginCallback(LobbyLoginRefT *, LobbyLoginContextE, LobbyLoginStatusE, void *);

	// CgsServerInterfaceConnection.cpp:839
	void ConnStatusCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceConnection();

}

