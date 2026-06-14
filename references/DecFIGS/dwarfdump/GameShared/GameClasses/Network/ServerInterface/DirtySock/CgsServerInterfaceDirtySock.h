// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// Declaration
	struct ServerInterfaceDirtySock {
	public:
		// CgsServerInterfaceDirtySock.h:752
		CgsNetwork::ServerInterfaceConnection * GetConnectionComponent();

	private:
		// CgsServerInterfaceDirtySock.h:736
		CgsNetwork::ServerInterfaceComponent * GetComponent(CgsNetwork::EComponents);

	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// Declaration
	struct ServerInterfaceDirtySock {
		// CgsServerInterfaceDirtySock.h:219
		enum EStatus {
			E_STATUS_BUSY = 0,
			E_STATUS_ERROR = 1,
			E_STATUS_IDLE = 2,
			E_STATUS_COUNT = 3,
		}

	public:
		// CgsServerInterfaceDirtySock.h:759
		CgsNetwork::ServerInterfaceGames * GetGameComponent();

	private:
		// CgsServerInterfaceDirtySock.h:736
		CgsNetwork::ServerInterfaceComponent * GetComponent(CgsNetwork::EComponents);

	public:
		// CgsServerInterfaceDirtySock.h:752
		CgsNetwork::ServerInterfaceConnection * GetConnectionComponent();

		// CgsServerInterfaceDirtySock.h:766
		CgsNetwork::ServerInterfacePlayerInfo * GetPlayerInfoComponent();

		// CgsServerInterfaceDirtySock.h:815
		CgsNetwork::ServerInterfaceUsersets * GetUsersetsComponent();

		// CgsServerInterfaceDirtySock.h:785
		CgsNetwork::ServerInterfaceServerInfo * GetServerInfoComponent();

		// CgsServerInterfaceDirtySock.h:779
		CgsNetwork::ServerInterfaceHttp * GetHttpComponent();

		// CgsServerInterfaceDirtySock.h:809
		CgsNetwork::ServerInterfaceCustomCommands * GetCustomCommandsComponent();

		// CgsServerInterfaceDirtySock.h:791
		CgsNetwork::ServerInterfaceDownloadableConfig * GetDownloadableConfigComponent();

		// CgsServerInterfaceDirtySock.h:797
		CgsNetwork::ServerInterfaceTelemetry * GetTelemetryComponent();

		// CgsServerInterfaceDirtySock.h:821
		CgsNetwork::ServerInterfacePingRegions * GetPingRegionsComponent();

		// CgsServerInterfaceDirtySock.h:803
		CgsNetwork::ServerInterfaceRankings * GetRankingsComponent();

		// Unknown accessibility
		// CgsServerInterfaceDirtySock.h:213
		extern const int32_t KI_SUSPENSION_UPDATE_MASK_MESSAGES = 16;

	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsServerInterfaceDirtySock.h:213
extern const int32_t KI_SUSPENSION_UPDATE_MASK_MESSAGES = 16;

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// Declaration
	struct ServerInterfaceDirtySock {
		// CgsServerInterfaceDirtySock.h:219
		enum EStatus {
			E_STATUS_BUSY = 0,
			E_STATUS_ERROR = 1,
			E_STATUS_IDLE = 2,
			E_STATUS_COUNT = 3,
		}

	private:
		// CgsServerInterfaceDirtySock.h:736
		CgsNetwork::ServerInterfaceComponent * GetComponent(CgsNetwork::EComponents);

	public:
		// CgsServerInterfaceDirtySock.h:682
		LobbyApiRefT * GetLobbyAPIRef() const;

		// CgsServerInterfaceDirtySock.h:229
		virtual ~ServerInterfaceDirtySock();

		// CgsServerInterfaceDirtySock.h:759
		CgsNetwork::ServerInterfaceGames * GetGameComponent();

		// CgsServerInterfaceDirtySock.h:809
		CgsNetwork::ServerInterfaceCustomCommands * GetCustomCommandsComponent();

		// CgsServerInterfaceDirtySock.h:797
		CgsNetwork::ServerInterfaceTelemetry * GetTelemetryComponent();

		// CgsServerInterfaceDirtySock.h:766
		CgsNetwork::ServerInterfacePlayerInfo * GetPlayerInfoComponent();

		// CgsServerInterfaceDirtySock.h:752
		CgsNetwork::ServerInterfaceConnection * GetConnectionComponent();

		// CgsServerInterfaceDirtySock.h:717
		char * GetMessageBuffer() const;

		// CgsServerInterfaceDirtySock.h:724
		int32_t GetMessageBufferLength() const;

	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsServerInterfaceDirtySock.h:131
struct CgsNetwork::LobbyPrepareParams {
	// CgsServerInterfaceDirtySock.h:136
	int32_t miLanguage;

	// CgsServerInterfaceDirtySock.h:139
	const char * mpcVersion;

	// CgsServerInterfaceDirtySock.h:140
	const char * mpcSKU;

	// CgsServerInterfaceDirtySock.h:141
	const char * mpcSLUS;

public:
	// CgsServerInterfaceDirtySock.h:134
	void Construct();

}

// CgsServerInterfaceDirtySock.h:153
struct CgsNetwork::ConnAPIPrepareParams {
	// CgsServerInterfaceDirtySock.h:158
	int32_t miPort;

	// CgsServerInterfaceDirtySock.h:159
	int32_t miMaxPlayers;

	// CgsServerInterfaceDirtySock.h:160
	bool mbPeerToPeer;

public:
	// CgsServerInterfaceDirtySock.h:156
	void Construct();

}

// CgsServerInterfaceDirtySock.h:172
struct CgsNetwork::ServerInterfacePrepareParams {
	// CgsServerInterfaceDirtySock.h:177
	CgsNetwork::ServerInterfaceComponent *[12] mapComponents;

	// CgsServerInterfaceDirtySock.h:178
	LobbyPrepareParams mLobbyParams;

	// CgsServerInterfaceDirtySock.h:179
	ConnAPIPrepareParams mConnAPIParams;

public:
	// CgsServerInterfaceDirtySock.h:175
	void Construct();

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// Declaration
	struct ServerInterfaceDirtySock {
	public:
		// CgsServerInterfaceDirtySock.h:229
		virtual ~ServerInterfaceDirtySock();

		ServerInterfaceDirtySock();

	}

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsServerInterfaceDirtySock.h:206
void CgsNetwork::ServerInterfaceDirtySock::ServerInterfaceDirtySock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.h:80
	enum EComponents {
		E_COMPONENTS_START = 0,
		E_COMPONENTS_CONNECTION = 0,
		E_COMPONENTS_GAMES = 1,
		E_COMPONENTS_PLAYER_INFO = 2,
		E_COMPONENTS_BROADCAST_MESSAGES = 3,
		E_COMPONENTS_HTTP = 4,
		E_COMPONENTS_SERVERINFO = 5,
		E_COMPONENTS_DOWNLOADABLE_CONFIG = 6,
		E_COMPONENTS_TELEMETRY = 7,
		E_COMPONENTS_RANKINGS = 8,
		E_COMPONENTS_CUSTOM_COMMANDS = 9,
		E_COMPONENTS_USERSETS = 10,
		E_COMPONENTS_PING_REGIONS = 11,
		E_COMPONENTS_COUNT = 12,
	}

	// CgsServerInterfaceDirtySock.h:101
	enum EKickReason {
		E_KICKREASON_HOSTKICK = 0,
		E_KICKREASON_NOGAME = 1,
		E_KICKREASON_BANNED_BUDDY = 2,
		E_KICKREASON_UNNATABLE = 3,
		E_KICKREASON_LOST_CONNECTION = 4,
		E_KICKREASON_COUNT = 5,
	}

	// Declaration
	struct ServerInterfaceDirtySock {
		// CgsServerInterfaceDirtySock.h:219
		enum EStatus {
			E_STATUS_BUSY = 0,
			E_STATUS_ERROR = 1,
			E_STATUS_IDLE = 2,
			E_STATUS_COUNT = 3,
		}

	}

	// CgsServerInterfaceDirtySock.h:99
	extern CgsNetwork::EComponents operator++(CgsNetwork::EComponents &, int);

	// CgsServerInterfaceDirtySock.h:47
	const int32_t KI_MESSAGE_BUFFER_SIZE = 2048;

}

// CgsServerInterfaceDirtySock.h:191
struct CgsNetwork::ServerInterfaceComponentData {
	// CgsServerInterfaceDirtySock.h:193
	CgsNetwork::ServerInterfaceComponent * mpComponent;

	// CgsServerInterfaceDirtySock.h:115
	typedef void (*)(CgsNetwork::DirtySock::ConnApiCbInfoT *, CgsNetwork::ServerInterfaceComponent *) ServerInterfaceConnApiCallback;

	// CgsServerInterfaceDirtySock.h:194
	ServerInterfaceComponentData::ServerInterfaceConnApiCallback mConnApiCallback;

}

// CgsServerInterfaceDirtySock.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

}

// CgsServerInterfaceDirtySock.h:206
struct CgsNetwork::ServerInterfaceDirtySock {
	int (*)(...) * _vptr.ServerInterfaceDirtySock;

	// CgsServerInterfaceDirtySock.h:209
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_USERS = 1;

	// CgsServerInterfaceDirtySock.h:210
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_GAMES = 2;

	// CgsServerInterfaceDirtySock.h:211
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_MYGAME = 4;

	// CgsServerInterfaceDirtySock.h:212
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_ROOMS = 8;

	// CgsServerInterfaceDirtySock.h:213
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_MESSAGES = 16;

	// CgsServerInterfaceDirtySock.h:214
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_ASYNC = 32;

	// CgsServerInterfaceDirtySock.h:215
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_USERSETS = 64;

	// CgsServerInterfaceDirtySock.h:216
	extern const int32_t KI_SUSPENSION_UPDATE_MASK_STATS = 128;

private:
	// CgsServerInterfaceDirtySock.h:473
	ServerInterfaceComponentData[12] maComponents;

	// CgsServerInterfaceDirtySock.h:474
	ConnAPIPrepareParams mConnApiPrepareParams;

	// Unknown accessibility
	// CgsServerInterfaceDirtySock.h:120
	typedef void (*)(CgsNetwork::DirtySock::ConnApiRefT *, CgsNetwork::DirtySock::ConnApiCbInfoT *, void *) ConnectionStatusChangeCallback;

	// CgsServerInterfaceDirtySock.h:477
	ServerInterfaceDirtySock::ConnectionStatusChangeCallback mpfConnectionStatusChangeCallback;

	// CgsServerInterfaceDirtySock.h:478
	void * mpConnectionStatusChangeUserData;

	// CgsServerInterfaceDirtySock.h:481
	LobbyApiRefT * mpLobbyAPIRef;

	// CgsServerInterfaceDirtySock.h:482
	CgsNetwork::DirtySock::LobbyLoginRefT * mpLobbyLoginRef;

	// CgsServerInterfaceDirtySock.h:483
	CgsNetwork::DirtySock::ConnApiRefT * mpConnApiRef;

	// CgsServerInterfaceDirtySock.h:484
	CgsNetwork::DirtySock::GameManagerRefT * mpGameManagerRef;

	// CgsServerInterfaceDirtySock.h:485
	CgsNetwork::DirtySock::LobbySettingRefT * mpSettingRef;

	// CgsServerInterfaceDirtySock.h:487
	bool mbWaitingToSuspend;

	// CgsServerInterfaceDirtySock.h:488
	int32_t miSuspendUpdateFlags;

	// CgsServerInterfaceDirtySock.h:490
	char * mpacMessageBuffer;

	// CgsServerInterfaceDirtySock.cpp:107
	extern CgsMemory::HeapMalloc * mpMemoryBlock;

	// CgsServerInterfaceDirtySock.h:496
	const char * mpcCurrentAction;

	// CgsServerInterfaceDirtySock.h:497
	CgsNetwork::ServerInterfaceDirtySock::EStatus meStatus;

	// CgsServerInterfaceDirtySock.h:498
	int32_t miLastError;

	// CgsServerInterfaceDirtySock.h:500
	const char * mpcStandardSelectOptions;

	// CgsServerInterfaceDirtySock.h:504
	const char * mpcVersion;

	// CgsServerInterfaceDirtySock.h:505
	const char * mpcSKU;

	// CgsServerInterfaceDirtySock.h:506
	const char * mpcSLUS;

	// CgsServerInterfaceDirtySock.h:507
	int32_t miLanguage;

	// CgsServerInterfaceDirtySock.h:509
	bool mbRecreateDirtySock;

	// CgsServerInterfaceDirtySock.cpp:113
	extern CgsDev::Log::LogChannelOutput mNetStreamLogChannelOutput;

	// CgsServerInterfaceDirtySock.h:517
	int32_t miCgsNetworkServerInterfacePM1;

public:
	// CgsServerInterfaceDirtySock.h:229
	virtual void ~ServerInterfaceDirtySock();

	// CgsServerInterfaceDirtySock.cpp:270
	virtual void Construct();

	// CgsServerInterfaceDirtySock.cpp:328
	virtual bool Prepare(ServerInterfacePrepareParams *);

	// CgsServerInterfaceDirtySock.cpp:374
	virtual bool Release();

	// CgsServerInterfaceDirtySock.cpp:407
	virtual void Destruct();

	// CgsServerInterfaceDirtySock.cpp:452
	virtual void Update();

	// CgsServerInterfaceDirtySock.cpp:930
	void SetMemoryBuffer(CgsMemory::HeapMalloc *);

	// CgsServerInterfaceDirtySock.cpp:948
	void ReleaseMemoryBuffer();

	// CgsServerInterfaceDirtySock.cpp:967
	bool HasMemoryBuffer() const;

	// CgsServerInterfaceDirtySock.cpp:223
	void * MemAlloc(int32_t, int32_t, int32_t);

	// CgsServerInterfaceDirtySock.cpp:254
	void MemFree(void *, int32_t, int32_t);

	// CgsServerInterfaceDirtySock.cpp:687
	virtual void Suspend(int32_t);

	// CgsServerInterfaceDirtySock.cpp:771
	virtual void Resume();

	// CgsServerInterfaceDirtySock.cpp:806
	bool IsSuspended() const;

	// CgsServerInterfaceDirtySock.h:682
	LobbyApiRefT * GetLobbyAPIRef() const;

	// CgsServerInterfaceDirtySock.h:688
	CgsNetwork::DirtySock::LobbyLoginRefT * GetLobbyLoginRef() const;

	// CgsServerInterfaceDirtySock.h:694
	CgsNetwork::DirtySock::ConnApiRefT * GetConnAPIRef() const;

	// CgsServerInterfaceDirtySock.h:700
	CgsNetwork::DirtySock::GameManagerRefT * GetGameManagerRef() const;

	// CgsServerInterfaceDirtySock.h:707
	CgsNetwork::DirtySock::LobbySettingRefT * GetSettingRef() const;

	// CgsServerInterfaceDirtySock.h:672
	const char * GetStandardSelectOptions() const;

	// CgsServerInterfaceDirtySock.h:717
	char * GetMessageBuffer() const;

	// CgsServerInterfaceDirtySock.h:724
	int32_t GetMessageBufferLength() const;

	// CgsServerInterfaceDirtySock.cpp:1036
	CgsNetwork::ServerInterfaceDirtySock::EStatus GetStatus(CgsNetwork::EComponents) const;

	// CgsServerInterfaceDirtySock.cpp:1059
	int32_t GetLastError(CgsNetwork::EComponents) const;

	// CgsServerInterfaceDirtySock.cpp:1082
	void ClearLastError(CgsNetwork::EComponents);

	// CgsServerInterfaceDirtySock.cpp:1107
	int32_t GetAndClearLastError(CgsNetwork::EComponents);

	// CgsServerInterfaceDirtySock.h:843
	const char * GetVersion() const;

	// CgsServerInterfaceDirtySock.h:849
	const char * GetSKU() const;

	// CgsServerInterfaceDirtySock.h:855
	const char * GetSLUS() const;

	// CgsServerInterfaceDirtySock.h:752
	CgsNetwork::ServerInterfaceConnection * GetConnectionComponent();

	// CgsServerInterfaceDirtySock.h:759
	CgsNetwork::ServerInterfaceGames * GetGameComponent();

	// CgsServerInterfaceDirtySock.h:766
	CgsNetwork::ServerInterfacePlayerInfo * GetPlayerInfoComponent();

	// CgsServerInterfaceDirtySock.h:773
	CgsNetwork::ServerInterfaceBroadcastMessages * GetBroadcastMessageComponent();

	// CgsServerInterfaceDirtySock.h:779
	ServerInterfaceHttp * GetHttpComponent();

	// CgsServerInterfaceDirtySock.h:785
	ServerInterfaceServerInfo * GetServerInfoComponent();

	// CgsServerInterfaceDirtySock.h:791
	ServerInterfaceDownloadableConfig * GetDownloadableConfigComponent();

	// CgsServerInterfaceDirtySock.h:797
	ServerInterfaceTelemetry * GetTelemetryComponent();

	// CgsServerInterfaceDirtySock.h:803
	ServerInterfaceRankings * GetRankingsComponent();

	// CgsServerInterfaceDirtySock.h:809
	ServerInterfaceCustomCommands * GetCustomCommandsComponent();

	// CgsServerInterfaceDirtySock.h:815
	ServerInterfaceUsersets * GetUsersetsComponent();

	// CgsServerInterfaceDirtySock.h:821
	ServerInterfacePingRegions * GetPingRegionsComponent();

	// CgsServerInterfaceDirtySock.h:828
	void SetConnApiComponentCallback(CgsNetwork::EComponents, ServerInterfaceComponentData::ServerInterfaceConnApiCallback);

	// CgsServerInterfaceDirtySock.h:836
	ServerInterfaceComponentData::ServerInterfaceConnApiCallback GetConnApiComponentCallback(CgsNetwork::EComponents);

	// CgsServerInterfaceDirtySock.cpp:1257
	bool AddConnectionStatusChangeCallback(ServerInterfaceDirtySock::ConnectionStatusChangeCallback, void *);

	// CgsServerInterfaceDirtySock.cpp:1136
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

protected:
	// CgsServerInterfaceDirtySock.cpp:665
	void SetSuspendFlag(char *, int32_t, const char *, bool);

private:
	// CgsServerInterfaceDirtySock.cpp:982
	// Declaration
	void StartActionCore(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceDirtySock.cpp:984
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceDirtySock.cpp:1003
	// Declaration
	void EndActionCore(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceDirtySock.cpp:1013
		using namespace CgsDev::Message;

		// CgsServerInterfaceDirtySock.cpp:1019
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceDirtySock.cpp:826
	virtual CgsNetwork::EServerInterfaceError ConvertError(int, const DSErrorToServerInterfaceError *, int) const;

	// CgsServerInterfaceDirtySock.cpp:484
	void AllocateDirtySock();

	// CgsServerInterfaceDirtySock.cpp:514
	void CreateLobbyApi();

	// CgsServerInterfaceDirtySock.cpp:555
	void CreateConnApi();

	// CgsServerInterfaceDirtySock.cpp:584
	void CreateGameManager();

	// CgsServerInterfaceDirtySock.cpp:599
	void CreateSettingRef();

	// CgsServerInterfaceDirtySock.cpp:614
	void FreeDirtySock();

	// CgsServerInterfaceDirtySock.h:736
	CgsNetwork::ServerInterfaceComponent * GetComponent(CgsNetwork::EComponents);

	// CgsServerInterfaceDirtySock.h:744
	const ServerInterfaceComponent * GetComponent(CgsNetwork::EComponents) const;

	// CgsServerInterfaceDirtySock.cpp:1214
	void ClearRegisteredComponents();

	// CgsServerInterfaceDirtySock.cpp:1235
	void RegisterComponents(CgsNetwork::ServerInterfaceComponent *const*);

	// CgsServerInterfaceDirtySock.cpp:887
	// Declaration
	void ConnApiCallback(ConnApiRefT *, ConnApiCbInfoT *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// connapi.h:142
		typedef CgsNetwork::DirtySock::ConnApiRefT ConnApiRefT;

	}

	// CgsServerInterfaceDirtySock.cpp:1276
	void ResumeSelectCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceDirtySock.cpp:1297
	void SuspendSelectCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceDirtySock.cpp:183
	void LobbyDebugPrintf(void *, const char *);

	// CgsServerInterfaceDirtySock.cpp:201
	int32_t NetDebugPrintf(void *, const char *);

}

// CgsServerInterfaceDirtySock.h:209
extern const int32_t KI_SUSPENSION_UPDATE_MASK_USERS = 1;

// CgsServerInterfaceDirtySock.h:210
extern const int32_t KI_SUSPENSION_UPDATE_MASK_GAMES = 2;

// CgsServerInterfaceDirtySock.h:211
extern const int32_t KI_SUSPENSION_UPDATE_MASK_MYGAME = 4;

// CgsServerInterfaceDirtySock.h:212
extern const int32_t KI_SUSPENSION_UPDATE_MASK_ROOMS = 8;

// CgsServerInterfaceDirtySock.h:214
extern const int32_t KI_SUSPENSION_UPDATE_MASK_ASYNC = 32;

// CgsServerInterfaceDirtySock.h:215
extern const int32_t KI_SUSPENSION_UPDATE_MASK_USERSETS = 64;

// CgsServerInterfaceDirtySock.h:216
extern const int32_t KI_SUSPENSION_UPDATE_MASK_STATS = 128;

