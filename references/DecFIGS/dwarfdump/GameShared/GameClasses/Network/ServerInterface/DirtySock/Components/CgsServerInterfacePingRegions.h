// CgsServerInterfacePingRegions.h:77
extern const int32_t KI_MAX_PING_REGIONS = 50;

// CgsServerInterfacePingRegions.h:143
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfacePingRegions.h:144
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePingRegions {
		// CgsServerInterfacePingRegions.h:77
		extern const int32_t KI_MAX_PING_REGIONS = 50;

	private:
		// CgsServerInterfacePingRegions.h:143
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePingRegions.h:144
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePingRegions {
	public:
		virtual ~ServerInterfacePingRegions();

		// Unknown accessibility
		// CgsServerInterfacePingRegions.h:77
		extern const int32_t KI_MAX_PING_REGIONS = 50;

	private:
		// CgsServerInterfacePingRegions.h:143
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePingRegions.h:144
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfacePingRegions.h:71
void CgsNetwork::ServerInterfacePingRegions::~ServerInterfacePingRegions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePingRegions {
	public:
		virtual ~ServerInterfacePingRegions();

		ServerInterfacePingRegions();

		// Unknown accessibility
		// CgsServerInterfacePingRegions.h:77
		extern const int32_t KI_MAX_PING_REGIONS = 50;

	private:
		// CgsServerInterfacePingRegions.h:143
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePingRegions.h:144
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfacePingRegions.h:71
void CgsNetwork::ServerInterfacePingRegions::ServerInterfacePingRegions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePingRegions {
		// CgsServerInterfacePingRegions.h:79
		enum EAction {
			E_ACTION_PING_REGIONS = 0,
			E_ACTION_COUNT = 1,
		}

		// CgsServerInterfacePingRegions.h:86
		enum EState {
			E_STATE_RESOLVING = 0,
			E_STATE_PINGING = 1,
			E_STATE_COUNT = 2,
		}

	}

}

// CgsServerInterfacePingRegions.h:71
struct CgsNetwork::ServerInterfacePingRegions : public CgsNetwork::ServerInterfaceComponent {
	// CgsServerInterfacePingRegions.h:75
	extern const int32_t KI_SERVER_INTERFACE_PING_REGIONS_TIMEOUT = 5000;

	// CgsServerInterfacePingRegions.h:76
	extern const int32_t KI_NAME_RESOLVE_TIMEOUT = 5000;

	// CgsServerInterfacePingRegions.h:77
	extern const int32_t KI_MAX_PING_REGIONS = 50;

private:
	// CgsServerInterfacePingRegions.h:140
	extern const int32_t KI_MAX_HOST_NAME_LENGTH = 128;

	// CgsServerInterfacePingRegions.h:141
	extern const uint32_t KU_LOBBYAPI_PINGMANAGERCACHE = 128;

	// CgsServerInterfacePingRegions.cpp:49
	extern const int[1] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfacePingRegions.cpp:62
	extern const DSErrorToServerInterfaceErrorTable[1] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfacePingRegions.cpp:67
	extern const char *[1] KAPC_ACTION_NAMES;

	// CgsServerInterfacePingRegions.h:147
	int32_t[50] maiPingResults;

	// CgsServerInterfacePingRegions.h:148
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfacePingRegions.h:149
	CgsNetwork::DirtySock::PingManagerRefT * mpPingManagerRefT;

	// Unknown accessibility
	// dirtynet.h:191
	typedef HostentT HostentT;

	// CgsServerInterfacePingRegions.h:150
	ServerInterfacePingRegions::HostentT * mpHostAddress;

	// CgsServerInterfacePingRegions.h:152
	int32_t miCurrentRegion;

	// CgsServerInterfacePingRegions.h:153
	int32_t miPingRequest;

	// CgsServerInterfacePingRegions.h:155
	CgsNetwork::ServerInterfacePingRegions::EState meState;

	// CgsServerInterfacePingRegions.h:156
	CgsNetwork::ServerInterfacePingRegions::EAction meCurrentAction;

public:
	// CgsServerInterfacePingRegions.cpp:85
	virtual void Construct();

	// CgsServerInterfacePingRegions.cpp:121
	void Destruct();

	// CgsServerInterfacePingRegions.cpp:155
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfacePingRegions.cpp:192
	bool Release();

	// CgsServerInterfacePingRegions.cpp:230
	void Update();

	// CgsServerInterfacePingRegions.cpp:285
	void Suspend();

	// CgsServerInterfacePingRegions.cpp:302
	void Resume();

	// CgsServerInterfacePingRegions.cpp:318
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfacePingRegions.cpp:438
	void StartPingRegions();

	// CgsServerInterfacePingRegions.cpp:472
	void StopPingRegions();

	// CgsServerInterfacePingRegions.h:199
	int32_t GetPingValue(int32_t) const;

	// CgsServerInterfacePingRegions.h:209
	int32_t GetNumberRegions() const;

private:
	// CgsServerInterfacePingRegions.cpp:352
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfacePingRegions::EAction);

	// CgsServerInterfacePingRegions.cpp:397
	// Declaration
	void StartAction(CgsNetwork::ServerInterfacePingRegions::EAction, LobbyApiCallbackT *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbyapi.h:266
		typedef void (LobbyApiRefT *, LobbyApiMsgT *, void *) LobbyApiCallbackT;

	}

	// CgsServerInterfacePingRegions.cpp:420
	void EndAction(int);

	// CgsServerInterfacePingRegions.cpp:516
	bool ResolveRegion(int32_t);

	// CgsServerInterfacePingRegions.cpp:565
	void HandlePingResults(int32_t);

	// CgsServerInterfacePingRegions.cpp:375
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfacePingRegions.cpp:610
	void PingManagerCallback(LobbyApiUserT::DirtyAddrT *, uint32_t, void *);

public:
	virtual void ~ServerInterfacePingRegions();

}

// CgsServerInterfacePingRegions.h:76
extern const int32_t KI_NAME_RESOLVE_TIMEOUT = 5000;

// CgsServerInterfacePingRegions.h:140
extern const int32_t KI_MAX_HOST_NAME_LENGTH = 128;

// CgsServerInterfacePingRegions.h:141
extern const uint32_t KU_LOBBYAPI_PINGMANAGERCACHE = 128;

