// CgsServerInterfaceDownloadableConfig.h:148
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceDownloadableConfig.h:150
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceDownloadableConfig {
	private:
		// CgsServerInterfaceDownloadableConfig.h:148
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceDownloadableConfig.h:150
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDownloadableConfig.h:51
	enum EDataTypes {
		E_TYPE_INTEGER = 0,
		E_TYPE_STRING = 1,
		E_TYPE_FLOAT = 2,
		E_TYPE_BOOL = 3,
		E_TYPE_COUNT = 4,
	}

	// Declaration
	struct ServerInterfaceDownloadableConfig {
	protected:
		// CgsServerInterfaceDownloadableConfig.h:195
		CgsNetwork::ServerInterfaceDirtySock * GetServerInterface();

	public:
		virtual ~ServerInterfaceDownloadableConfig();

	private:
		// CgsServerInterfaceDownloadableConfig.h:148
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceDownloadableConfig.h:150
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceDownloadableConfig.h:63
struct CgsNetwork::DataIDToMemoryAddr {
	// CgsServerInterfaceDownloadableConfig.h:73
	char * mpacName;

	// CgsServerInterfaceDownloadableConfig.h:74
	CgsNetwork::EDataTypes meDataType;

	// CgsServerInterfaceDownloadableConfig.h:75
	int32_t miOffset;

public:
	// CgsServerInterfaceDownloadableConfig.h:66
	void DataIDToMemoryAddr();

	// CgsServerInterfaceDownloadableConfig.h:68
	void DataIDToMemoryAddr(char *, CgsNetwork::EDataTypes, int32_t);

}

// CgsServerInterfaceDownloadableConfig.h:89
void CgsNetwork::ServerInterfaceDownloadableConfig::~ServerInterfaceDownloadableConfig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDownloadableConfig.h:51
	enum EDataTypes {
		E_TYPE_INTEGER = 0,
		E_TYPE_STRING = 1,
		E_TYPE_FLOAT = 2,
		E_TYPE_BOOL = 3,
		E_TYPE_COUNT = 4,
	}

	// Declaration
	struct ServerInterfaceDownloadableConfig {
	public:
		virtual ~ServerInterfaceDownloadableConfig();

		ServerInterfaceDownloadableConfig();

	private:
		// CgsServerInterfaceDownloadableConfig.h:148
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceDownloadableConfig.h:150
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceDownloadableConfig.h:89
void CgsNetwork::ServerInterfaceDownloadableConfig::ServerInterfaceDownloadableConfig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceDownloadableConfig.h:51
	enum EDataTypes {
		E_TYPE_INTEGER = 0,
		E_TYPE_STRING = 1,
		E_TYPE_FLOAT = 2,
		E_TYPE_BOOL = 3,
		E_TYPE_COUNT = 4,
	}

	// Declaration
	struct ServerInterfaceDownloadableConfig {
		// CgsServerInterfaceDownloadableConfig.h:93
		enum EAction {
			E_ACTION_DOWNLOADING_GAME_NEWS = 0,
			E_ACTION_COUNT = 1,
		}

	}

}

// CgsServerInterfaceDownloadableConfig.h:89
struct CgsNetwork::ServerInterfaceDownloadableConfig : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceDownloadableConfig.cpp:40
	extern const int[1] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceDownloadableConfig.cpp:58
	extern const char *[1] KAPC_ACTION_NAMES;

	// CgsServerInterfaceDownloadableConfig.cpp:53
	extern const DSErrorToServerInterfaceErrorTable[1] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceDownloadableConfig.h:152
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceDownloadableConfig.h:153
	DataIDToMemoryAddr * mpaDataIDToMemAddrs;

	// CgsServerInterfaceDownloadableConfig.h:154
	CgsNetwork::ServerInterfaceDownloadableConfig::EAction meCurrentAction;

	// CgsServerInterfaceDownloadableConfig.h:155
	int32_t miMemAddrTableSize;

	// CgsServerInterfaceDownloadableConfig.h:156
	int32_t miRequestedNewsIndex;

public:
	// CgsServerInterfaceDownloadableConfig.cpp:80
	virtual void Construct();

	// CgsServerInterfaceDownloadableConfig.cpp:98
	virtual void Destruct();

	// CgsServerInterfaceDownloadableConfig.cpp:122
	virtual bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceDownloadableConfig.cpp:144
	virtual bool Release();

	// CgsServerInterfaceDownloadableConfig.cpp:162
	void Suspend();

	// CgsServerInterfaceDownloadableConfig.cpp:178
	void Resume();

	// CgsServerInterfaceDownloadableConfig.cpp:194
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceDownloadableConfig.cpp:228
	void GetConfigurationDataFromNews(int32_t, DataIDToMemoryAddr *, int32_t);

	// CgsServerInterfaceDownloadableConfig.cpp:262
	void GetConfigurationDataFromConf(DataIDToMemoryAddr *, int32_t);

protected:
	// CgsServerInterfaceDownloadableConfig.h:195
	CgsNetwork::ServerInterfaceDirtySock * GetServerInterface();

private:
	// CgsServerInterfaceDownloadableConfig.cpp:294
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfaceDownloadableConfig::EAction);

	// CgsServerInterfaceDownloadableConfig.cpp:316
	void StartAction(CgsNetwork::ServerInterfaceDownloadableConfig::EAction, LobbyApiCallbackT *);

	// CgsServerInterfaceDownloadableConfig.cpp:339
	void EndAction(int);

	// CgsServerInterfaceDownloadableConfig.cpp:359
	void GetGameNewsCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceDownloadableConfig.cpp:393
	void ParseConfigFile(const char *);

public:
	virtual void ~ServerInterfaceDownloadableConfig();

}

