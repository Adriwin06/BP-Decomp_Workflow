// CgsServerInterfaceHttp.h:73
extern const int32_t KI_SERVER_INTERFACE_HTTP_DOWNLOAD_TIMEOUT = 2100;

// CgsServerInterfaceHttp.h:139
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceHttp.h:140
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceHttp {
	public:
		// CgsServerInterfaceHttp.h:176
		int32_t GetHttpDownloadSize();

		// Unknown accessibility
		// CgsServerInterfaceHttp.h:73
		extern const int32_t KI_SERVER_INTERFACE_HTTP_DOWNLOAD_TIMEOUT = 2100;

	private:
		// CgsServerInterfaceHttp.h:139
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceHttp.h:140
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceHttp {
	public:
		virtual ~ServerInterfaceHttp();

		// Unknown accessibility
		// CgsServerInterfaceHttp.h:73
		extern const int32_t KI_SERVER_INTERFACE_HTTP_DOWNLOAD_TIMEOUT = 2100;

	private:
		// CgsServerInterfaceHttp.h:139
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceHttp.h:140
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceHttp.h:69
void CgsNetwork::ServerInterfaceHttp::~ServerInterfaceHttp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceHttp {
	public:
		virtual ~ServerInterfaceHttp();

		ServerInterfaceHttp();

		// Unknown accessibility
		// CgsServerInterfaceHttp.h:73
		extern const int32_t KI_SERVER_INTERFACE_HTTP_DOWNLOAD_TIMEOUT = 2100;

	private:
		// CgsServerInterfaceHttp.h:139
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceHttp.h:140
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceHttp.h:69
void CgsNetwork::ServerInterfaceHttp::ServerInterfaceHttp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceHttp {
		// CgsServerInterfaceHttp.h:75
		enum EAction {
			E_ACTION_DOWNLOADING = 0,
			E_ACTION_COUNT = 1,
		}

	}

}

// CgsServerInterfaceHttp.h:69
struct CgsNetwork::ServerInterfaceHttp : public CgsNetwork::ServerInterfaceComponent {
	// CgsServerInterfaceHttp.h:73
	extern const int32_t KI_SERVER_INTERFACE_HTTP_DOWNLOAD_TIMEOUT = 2100;

private:
	// CgsServerInterfaceHttp.cpp:47
	extern const int[1] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceHttp.cpp:63
	extern const DSErrorToServerInterfaceErrorTable[1] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceHttp.cpp:68
	extern const char *[1] KAPC_ACTION_NAMES;

	// CgsServerInterfaceHttp.h:143
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceHttp.h:144
	CgsNetwork::ServerInterfaceHttp::EAction meCurrentAction;

	// CgsServerInterfaceHttp.h:146
	CgsNetwork::DirtySock::ProtoHttpRefT * mpHttp;

	// CgsServerInterfaceHttp.h:147
	int32_t miAmountHttpDownloaded;

	// CgsServerInterfaceHttp.h:148
	int32_t miHttpBufferSize;

	// CgsServerInterfaceHttp.h:149
	char * mpcDownloadBuffer;

	// CgsServerInterfaceHttp.h:150
	int16_t mi16Timeout;

public:
	// CgsServerInterfaceHttp.cpp:86
	virtual void Construct();

	// CgsServerInterfaceHttp.cpp:112
	void Destruct();

	// CgsServerInterfaceHttp.cpp:136
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceHttp.cpp:160
	bool Release();

	// CgsServerInterfaceHttp.cpp:185
	void Update();

	// CgsServerInterfaceHttp.cpp:275
	void Suspend();

	// CgsServerInterfaceHttp.cpp:292
	void Resume();

	// CgsServerInterfaceHttp.cpp:308
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceHttp.cpp:435
	void StartHttpsDownload(const char *, int32_t, int16_t);

	// CgsServerInterfaceHttp.cpp:460
	void StopHttpDownload();

	// CgsServerInterfaceHttp.cpp:500
	char * GetHttpsDownloadBuffer();

	// CgsServerInterfaceHttp.h:176
	int32_t GetHttpDownloadSize();

	// CgsServerInterfaceHttp.cpp:479
	void DestroyHttpsDownload();

private:
	// CgsServerInterfaceHttp.cpp:344
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfaceHttp::EAction);

	// CgsServerInterfaceHttp.cpp:389
	void StartAction(CgsNetwork::ServerInterfaceHttp::EAction, LobbyApiCallbackT *);

	// CgsServerInterfaceHttp.cpp:412
	void EndAction(int);

	// CgsServerInterfaceHttp.cpp:367
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceHttp();

}

