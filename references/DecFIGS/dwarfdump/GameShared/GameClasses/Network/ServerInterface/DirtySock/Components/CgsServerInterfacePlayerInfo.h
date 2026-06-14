// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfo {
	private:
		// CgsServerInterfacePlayerInfo.h:214
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePlayerInfo.h:215
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

		// CgsServerInterfacePlayerInfo.h:239
		extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

	}

}

// CgsServerInterfacePlayerInfo.h:214
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfacePlayerInfo.h:215
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsServerInterfacePlayerInfo.h:239
extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfo {
	private:
		// CgsServerInterfacePlayerInfo.h:214
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePlayerInfo.h:215
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

		// CgsServerInterfacePlayerInfo.h:239
		extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfo {
	public:
		virtual ~ServerInterfacePlayerInfo();

	private:
		// CgsServerInterfacePlayerInfo.h:214
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePlayerInfo.h:215
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

		// CgsServerInterfacePlayerInfo.h:239
		extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

	}

}

// CgsServerInterfacePlayerInfo.h:72
void CgsNetwork::ServerInterfacePlayerInfo::~ServerInterfacePlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfo {
	public:
		virtual ~ServerInterfacePlayerInfo();

		ServerInterfacePlayerInfo();

	private:
		// CgsServerInterfacePlayerInfo.h:214
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfacePlayerInfo.h:215
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

		// CgsServerInterfacePlayerInfo.h:239
		extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

	}

}

// CgsServerInterfacePlayerInfo.h:72
void CgsNetwork::ServerInterfacePlayerInfo::ServerInterfacePlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfo {
		// CgsServerInterfacePlayerInfo.h:75
		enum EAction {
			E_ACTION_FIND_USER = 0,
			E_ACTION_UPDATE_AUXI = 1,
			E_ACTION_SELECT_VIEW = 2,
			E_ACTION_DOWNLOADING_STATS = 3,
			E_ACTION_DOWNLOADING_VIEW_INFO = 4,
			E_ACTION_SENDING_FEEDBACK = 5,
			E_ACTION_UPDATE_ACCOUNT = 6,
			E_ACTION_UPDATE_SETTINGS = 7,
			E_ACTION_LOAD_SETTINGS = 8,
			E_ACTION_COUNT = 9,
		}

	}

}

// CgsServerInterfacePlayerInfo.h:72
struct CgsNetwork::ServerInterfacePlayerInfo : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfacePlayerInfo.cpp:51
	extern const int[9] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfacePlayerInfo.cpp:156
	extern const DSErrorToServerInterfaceErrorTable[9] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfacePlayerInfo.cpp:173
	extern const char *[9] KAPC_ACTION_NAMES;

	// CgsServerInterfacePlayerInfo.h:218
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfacePlayerInfo.h:219
	CgsNetwork::ServerInterfacePlayerInfo::EAction meCurrentAction;

	// CgsServerInterfacePlayerInfo.h:221
	ServerInterfacePlayerInfoDataBase * mpPlayerInfo;

	// CgsServerInterfacePlayerInfo.h:223
	CgsNetwork::DirtySock::LobbyFindUserT * mpFindUser;

	// CgsServerInterfacePlayerInfo.h:224
	CgsNetwork::DirtySock::LobbyStatbookT * mpStatbook;

	// CgsServerInterfacePlayerInfo.h:226
	int32_t miEventCallback;

	// CgsServerInterfacePlayerInfo.h:232
	bool mbUseCachedAccountSettings;

	// CgsServerInterfacePlayerInfo.h:233
	bool mbAgreeToShareInfoEA;

	// CgsServerInterfacePlayerInfo.h:234
	bool mbAgreeToShareInfoPartners;

	// CgsServerInterfacePlayerInfo.h:235
	bool mbTelemetryEnable;

	// CgsServerInterfacePlayerInfo.h:239
	extern const int32_t KI_MS_BETWEEN_PLAYER_INFO_REQUESTS = 1000;

	// CgsServerInterfacePlayerInfo.h:240
	extern const int32_t KI_MS_FOR_LOBBY_CACHE_EXPIRE = 20000;

public:
	// CgsServerInterfacePlayerInfo.cpp:227
	virtual void Construct();

	// CgsServerInterfacePlayerInfo.cpp:255
	void Destruct();

	// CgsServerInterfacePlayerInfo.cpp:287
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfacePlayerInfo.cpp:336
	bool Release();

	// CgsServerInterfacePlayerInfo.cpp:380
	void Update();

	// CgsServerInterfacePlayerInfo.cpp:438
	void Suspend();

	// CgsServerInterfacePlayerInfo.cpp:451
	void Resume();

	// CgsServerInterfacePlayerInfo.cpp:710
	void GetPlayerInfoByName(const PlayerName *, ServerInterfacePlayerInfoDataBase *);

	// CgsServerInterfacePlayerInfo.cpp:689
	void GetLocalPlayerInfo(ServerInterfacePlayerInfoDataBase *);

	// CgsServerInterfacePlayerInfo.cpp:797
	// Declaration
	void UpdateUserAuxiliaryInfo(CgsNetwork::ServerInterfaceStructureInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfacePlayerInfo.cpp:805
		using namespace CgsDev::Message;

	}

	// CgsServerInterfacePlayerInfo.cpp:1037
	void SendFeedbackOnPlayer(const PlayerName *, CgsNetwork::EFeedbackType);

	// CgsServerInterfacePlayerInfo.cpp:993
	bool HasStatViewInfoBeenDownloaded();

	// CgsServerInterfacePlayerInfo.cpp:1008
	void DownloadStatViews();

	// CgsServerInterfacePlayerInfo.cpp:978
	int32_t GetNumberOfStatViews();

	// CgsServerInterfacePlayerInfo.cpp:832
	void SelectStatView(const char *);

	// CgsServerInterfacePlayerInfo.cpp:861
	void DownloadPlayersStats(const char *);

	// CgsServerInterfacePlayerInfo.cpp:895
	bool GetPlayerStats(int32_t, char *, int32_t);

	// CgsServerInterfacePlayerInfo.cpp:916
	bool GetRowDescription(int32_t, char *, int32_t);

	// CgsServerInterfacePlayerInfo.cpp:948
	bool GetRowType(int32_t, int32_t *);

	// CgsServerInterfacePlayerInfo.cpp:466
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfacePlayerInfo.h:314
	float32_t GetMinimumTimeBetweenPlayerInfoRequests();

	// CgsServerInterfacePlayerInfo.cpp:1206
	void EditAccount(bool, bool, bool);

	// CgsServerInterfacePlayerInfo.cpp:1247
	void GetAccountSettings(bool *, bool *, bool *);

	// CgsServerInterfacePlayerInfo.cpp:1287
	void LoadSettings();

private:
	// CgsServerInterfacePlayerInfo.cpp:550
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfacePlayerInfo::EAction);

	// CgsServerInterfacePlayerInfo.cpp:648
	void StartAction(CgsNetwork::ServerInterfacePlayerInfo::EAction, LobbyApiCallbackT *);

	// CgsServerInterfacePlayerInfo.cpp:672
	void EndAction(int);

	// CgsServerInterfacePlayerInfo.cpp:574
	void GetLocalPlayerUserData(LobbyApiUserT *) const;

	// CgsServerInterfacePlayerInfo.cpp:628
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfacePlayerInfo.cpp:771
	void FindUserCallback(void *, const char *, LobbyApiUserT *);

	// CgsServerInterfacePlayerInfo.cpp:591
	void EventStatusCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfacePlayerInfo.cpp:1068
	void UploadFeedbackCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfacePlayerInfo.cpp:1090
	void UpdateAccountCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfacePlayerInfo.cpp:1156
	// Declaration
	void UpdateSettingsCallback(LobbySettingRefT *, int32_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbysetting.h:40
		typedef CgsNetwork::DirtySock::LobbySettingRefT LobbySettingRefT;

	}

	// CgsServerInterfacePlayerInfo.cpp:1183
	void LoadSettingsCallback(LobbySettingRefT *, int32_t, void *);

	// CgsServerInterfacePlayerInfo.h:309
	void _GetPlayerXUIDCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfacePlayerInfo();

}

// CgsServerInterfacePlayerInfo.h:240
extern const int32_t KI_MS_FOR_LOBBY_CACHE_EXPIRE = 20000;

