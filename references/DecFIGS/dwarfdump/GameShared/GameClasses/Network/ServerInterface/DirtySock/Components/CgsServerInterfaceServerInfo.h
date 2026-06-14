// CgsServerInterfaceServerInfo.h:169
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceServerInfo.h:170
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceServerInfo {
		// CgsServerInterfaceServerInfo.h:75
		extern const int32_t KI_URL_LENGTH = 256;

	private:
		// CgsServerInterfaceServerInfo.h:169
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceServerInfo.h:170
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceServerInfo.h:75
extern const int32_t KI_URL_LENGTH = 256;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceServerInfo {
	public:
		virtual ~ServerInterfaceServerInfo();

	private:
		// CgsServerInterfaceServerInfo.h:169
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceServerInfo.h:170
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceServerInfo.h:72
void CgsNetwork::ServerInterfaceServerInfo::~ServerInterfaceServerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceServerInfo {
	public:
		virtual ~ServerInterfaceServerInfo();

		ServerInterfaceServerInfo();

	private:
		// CgsServerInterfaceServerInfo.h:169
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceServerInfo.h:170
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceServerInfo.h:72
void CgsNetwork::ServerInterfaceServerInfo::ServerInterfaceServerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceServerInfo {
		// CgsServerInterfaceServerInfo.h:77
		enum EAction {
			E_ACTION_GET_GAME_NEWS = 0,
			E_ACTION_COUNT = 1,
		}

	}

}

// CgsServerInterfaceServerInfo.h:72
struct CgsNetwork::ServerInterfaceServerInfo : public CgsNetwork::ServerInterfaceComponent {
	// CgsServerInterfaceServerInfo.h:75
	extern const int32_t KI_URL_LENGTH = 256;

private:
	// CgsServerInterfaceServerInfo.cpp:54
	extern const int[1] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceServerInfo.cpp:68
	extern const DSErrorToServerInterfaceErrorTable[1] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceServerInfo.cpp:73
	extern const char *[1] KAPC_ACTION_NAMES;

	// CgsServerInterfaceServerInfo.h:173
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// Unknown accessibility
	// CgsServerInterfaceServerInfo.h:53
	typedef bool (*)(bool, const char *, void *) CgsLobbyGameNewsCallback;

	// CgsServerInterfaceServerInfo.h:174
	ServerInterfaceServerInfo::CgsLobbyGameNewsCallback mpGameNewsCallback;

	// CgsServerInterfaceServerInfo.h:175
	void * mpGameNewsData;

	// CgsServerInterfaceServerInfo.h:176
	CgsNetwork::ServerInterfaceServerInfo::EAction meCurrentAction;

	// CgsServerInterfaceServerInfo.h:177
	int32_t miRequestedNewsIndex;

public:
	// CgsServerInterfaceServerInfo.cpp:121
	virtual void Construct();

	// CgsServerInterfaceServerInfo.cpp:142
	void Destruct();

	// CgsServerInterfaceServerInfo.cpp:161
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceServerInfo.cpp:184
	bool Release();

	// CgsServerInterfaceServerInfo.cpp:204
	void Update();

	// CgsServerInterfaceServerInfo.cpp:218
	void Suspend();

	// CgsServerInterfaceServerInfo.cpp:232
	void Resume();

	// CgsServerInterfaceServerInfo.cpp:248
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceServerInfo.cpp:390
	void GetTosUrl(char *, int32_t);

	// CgsServerInterfaceServerInfo.cpp:406
	void GetNewsUrl(char *, int32_t);

	// CgsServerInterfaceServerInfo.cpp:423
	void GetBuddyServer(char *, int32_t, int32_t *);

	// CgsServerInterfaceServerInfo.cpp:447
	void GetGameNews(int32_t, ServerInterfaceServerInfo::CgsLobbyGameNewsCallback, void *);

	// CgsServerInterfaceServerInfo.cpp:520
	void GetTelemetryAuthString(char *, int32_t);

	// CgsServerInterfaceServerInfo.cpp:568
	void GetStringFromClientConfig(const char *, char *, int32_t);

	// CgsServerInterfaceServerInfo.cpp:589
	uint32_t GetTimeStampFromClientConfig(const char *);

	// CgsServerInterfaceServerInfo.cpp:541
	bool IsNewsUpdated() const;

private:
	// CgsServerInterfaceServerInfo.cpp:266
	CgsNetwork::EServerInterfaceError ConvertError(int32_t, CgsNetwork::ServerInterfaceServerInfo::EAction);

	// CgsServerInterfaceServerInfo.cpp:311
	void StartAction(CgsNetwork::ServerInterfaceServerInfo::EAction, LobbyApiCallbackT *);

	// CgsServerInterfaceServerInfo.cpp:334
	void EndAction(int);

	// CgsServerInterfaceServerInfo.cpp:353
	void FindUrl(const char *, char *, int32_t);

	// CgsServerInterfaceServerInfo.cpp:289
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceServerInfo.cpp:481
	void GetGameNewsCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceServerInfo();

}

