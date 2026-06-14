// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkManager {
		// CgsNetworkManager.h:217
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_NETWORK_ADAPTER = 1,
			E_PREPARESTAGE_PLAYER_MANAGER = 2,
			E_PREPARESTAGE_HOST_MIGRATION_MANGER = 3,
			E_PREPARESTAGE_START_TIME_MANAGER = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// CgsNetworkManager.h:227
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_VOIP_MANAGER = 1,
			E_RELEASESTAGE_START_TIME_MANAGER = 2,
			E_RELEASESTAGE_HOST_MIGRATION_MANGER = 3,
			E_RELEASESTAGE_PLAYER_MANAGER = 4,
			E_RELEASESTAGE_NETWORK_ADAPTER = 5,
			E_RELEASESTAGE_DONE = 6,
		}

	}

	// CgsNetworkManager.h:47
	enum EManagerReturnCode {
		E_MANAGER_STATUS_READY = 0,
		E_MANAGER_STATUS_BUSY = 1,
		E_MANAGER_STATUS_ERROR = 2,
	}

	// Declaration
	struct NetworkManagerPrepareParams {
		// CgsNetworkManager.h:113
		struct VersionDisplayPrepareParams {
		private:
			// CgsNetworkManager.h:127
			const char * mpcVersion;

			// CgsNetworkManager.h:128
			CgsNetwork::EServerType meServerType;

		public:
			// CgsNetworkManager.h:118
			void Construct(const char *, CgsNetwork::EServerType);

			// CgsNetworkManager.h:121
			const char * GetVersion();

			// CgsNetworkManager.h:124
			CgsNetwork::EServerType GetServerType() const;

		}

		// CgsNetworkManager.h:140
		struct PlayerManagerPrepareParams {
		private:
			// CgsNetworkManager.h:166
			CgsNetwork::ServerInterface * mpServerInterface;

			// CgsNetworkManager.h:167
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

			// CgsNetworkManager.h:168
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

			// CgsNetworkManager.h:169
			void * mpConnectionFinalisedUserData;

			// CgsNetworkManager.h:170
			HeapMalloc * mpNetworkHeapAllocator;

		public:
			// CgsNetworkManager.h:148
			void Construct(CgsNetwork::ServerInterface *, PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, HeapMalloc *);

			// CgsNetworkManager.h:151
			CgsNetwork::ServerInterface * GetServerInterface();

			// CgsNetworkManager.h:154
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * GetOnReceivedFromWrongIPCallback();

			// CgsNetworkManager.h:157
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback GetConnMgrConnectionFinalisedCallback();

			// CgsNetworkManager.h:160
			void * GetConnectionFinalisedUserData();

			// CgsNetworkManager.h:163
			HeapMalloc * GetNetworkHeapAllocator();

		}

	}

}

// CgsNetworkManager.h:67
struct CgsNetwork::NetworkManagerConstructParams {
private:
	// CgsNetworkManager.h:87
	PlayerManagerConstructParams * mpPlayerManagerParams;

	// CgsNetworkManager.h:88
	StartTimeManager::ClientReadyCallback * mpClientReadyCallback;

	// CgsNetworkManager.h:89
	void * mpClientReadyCallbackData;

public:
	// CgsNetworkManager.h:74
	void Construct(PlayerManagerConstructParams *, StartTimeManager::ClientReadyCallback *, void *);

	// CgsNetworkManager.h:77
	PlayerManagerConstructParams * GetPlayerManagerConstructParams();

	// CgsNetworkManager.h:80
	StartTimeManager::ClientReadyCallback * GetClientReadyCallback();

	// CgsNetworkManager.h:83
	void * GetClientReadyCallbackData();

}

// CgsNetworkManager.h:101
struct CgsNetwork::NetworkManagerPrepareParams {
private:
	// CgsNetworkManager.h:193
	CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams mVersionDisplay;

	// CgsNetworkManager.h:194
	NetworkAdapterPrepareParams mNetworkAdapter;

	// CgsNetworkManager.h:195
	CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams mPlayerManager;

	// CgsNetworkManager.h:196
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

public:
	// CgsNetworkManager.h:178
	void Construct(const CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams *, const NetworkAdapterPrepareParams *, const CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams *, CgsSystem::EFrameRate);

	// CgsNetworkManager.h:181
	CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams * GetVersionDisplayPrepareParams();

	// CgsNetworkManager.h:184
	NetworkAdapterPrepareParams * GetNetworkAdapterPrepareParams();

	// CgsNetworkManager.h:187
	CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams * GetPlayerManagerPrepareParams();

	// CgsNetworkManager.h:190
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

}

// CgsNetworkManager.h:208
struct CgsNetwork::NetworkManager {
	// CgsNetworkManager.h:211
	extern int32_t _miPlayerManagerUpdatePerfMon;

	// CgsNetworkManager.h:212
	extern int32_t _miNetworkAdapterUpdatePerfMon;

	// CgsNetworkManager.h:213
	extern int32_t _miHostMigrationManagerUpdatePerfMon;

	// CgsNetworkManager.h:214
	extern int32_t _miStartTimeManagerUpdatePerfMon;

	// CgsNetworkManager.h:215
	extern int32_t _miVOIPManagerUpdatePerfMon;

protected:
	// CgsNetworkManager.h:281
	CgsNetwork::VersionDisplay mVersionDisplay;

	// CgsNetworkManager.h:338
	NetworkAdapter mNetworkAdapter;

private:
	// CgsNetworkManager.h:346
	int32_t miActiveControllerPort;

	// CgsNetworkManager.h:347
	bool mbSysMenuOnScreen;

	// CgsNetworkManager.h:349
	CgsNetwork::NetworkManager::EPrepareStage mePrepareStage;

	// CgsNetworkManager.h:350
	CgsNetwork::NetworkManager::EReleaseStage meReleaseStage;

	// CgsNetworkManager.h:351
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsNetworkManager.h:353
	PlayerManager mPlayerManager;

	// CgsNetworkManager.h:354
	HostMigrationManager mHostMigrationManager;

	// CgsNetworkManager.h:355
	StartTimeManager mStartTimeManager;

	// CgsNetworkManager.h:356
	TimeManager mTimeManager;

	// CgsNetworkManager.h:357
	VoIPManager mVoIPManager;

public:
	// CgsNetworkManager.h:239
	CgsNetwork::PlayerManager * GetPlayerManager();

	// CgsNetworkManager.h:242
	CgsNetwork::TimeManager * GetTimeManager();

	// CgsNetworkManager.h:245
	StartTimeManager * GetStartTimeManager();

	// CgsNetworkManager.h:248
	HostMigrationManager * GetHostMigrationManager();

	// CgsNetworkManager.h:251
	VoIPManager * GetVoIPManager();

	// CgsNetworkManager.h:254
	const NetworkAdapter * GetNetworkAdapter() const;

	// CgsNetworkManager.h:258
	int32_t GetActiveControllerPort();

	// CgsNetworkManager.h:263
	void SetActiveControllerPort(int32_t);

	// CgsNetworkManager.h:267
	void SetSysMenuOnScreen(bool);

	// CgsNetworkManager.h:270
	bool IsSysMenuOnScreen() const;

	// CgsNetworkManager.h:274
	CgsNetwork::VersionDisplay * GetVersionDisplay();

protected:
	// CgsNetworkManager.h:286
	void Construct(NetworkManagerConstructParams *);

	// CgsNetworkManager.h:289
	void Destruct();

	// CgsNetworkManager.h:293
	CgsNetwork::EManagerReturnCode Prepare(NetworkManagerPrepareParams *);

	// CgsNetworkManager.h:296
	bool Release();

	// CgsNetworkManager.h:302
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsNetworkManager.h:307
	void PostUpdate(const TimerStatus *, uint16_t);

	// CgsNetworkManager.h:311
	void OnEnterGame();

	// CgsNetworkManager.h:314
	void OnLeaveGame();

	// CgsNetworkManager.h:319
	void OnGameStart(Time, uint16_t);

	// CgsNetworkManager.h:324
	void OnGameFinish(Time, uint16_t);

	// CgsNetworkManager.h:330
	void OnRoundStart(Time, float32_t, uint16_t);

	// CgsNetworkManager.h:335
	void OnRoundFinish(Time, uint16_t);

private:
	// CgsNetworkManager.h:344
	void StartTimeMessageArrivedLate();

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkManager {
		// CgsNetworkManager.h:217
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_NETWORK_ADAPTER = 1,
			E_PREPARESTAGE_PLAYER_MANAGER = 2,
			E_PREPARESTAGE_HOST_MIGRATION_MANGER = 3,
			E_PREPARESTAGE_START_TIME_MANAGER = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// CgsNetworkManager.h:227
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_VOIP_MANAGER = 1,
			E_RELEASESTAGE_START_TIME_MANAGER = 2,
			E_RELEASESTAGE_HOST_MIGRATION_MANGER = 3,
			E_RELEASESTAGE_PLAYER_MANAGER = 4,
			E_RELEASESTAGE_NETWORK_ADAPTER = 5,
			E_RELEASESTAGE_DONE = 6,
		}

	}

	// CgsNetworkManager.h:47
	enum EManagerReturnCode {
		E_MANAGER_STATUS_READY = 0,
		E_MANAGER_STATUS_BUSY = 1,
		E_MANAGER_STATUS_ERROR = 2,
	}

	// Declaration
	struct NetworkManagerPrepareParams {
		// CgsNetworkManager.h:113
		struct VersionDisplayPrepareParams {
		private:
			// CgsNetworkManager.h:127
			const char * mpcVersion;

			// CgsNetworkManager.h:128
			CgsNetwork::EServerType meServerType;

		public:
			// CgsNetworkManager.h:118
			void Construct(const char *, CgsNetwork::EServerType);

			// CgsNetworkManager.h:121
			const char * GetVersion();

			// CgsNetworkManager.h:124
			CgsNetwork::EServerType GetServerType() const;

		}

		// CgsNetworkManager.h:140
		struct PlayerManagerPrepareParams {
		private:
			// CgsNetworkManager.h:166
			CgsNetwork::ServerInterface * mpServerInterface;

			// CgsNetworkManager.h:167
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

			// CgsNetworkManager.h:168
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

			// CgsNetworkManager.h:169
			void * mpConnectionFinalisedUserData;

			// CgsNetworkManager.h:170
			CgsMemory::HeapMalloc * mpNetworkHeapAllocator;

		public:
			// CgsNetworkManager.h:148
			void Construct(CgsNetwork::ServerInterface *, PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, CgsMemory::HeapMalloc *);

			// CgsNetworkManager.h:151
			CgsNetwork::ServerInterface * GetServerInterface();

			// CgsNetworkManager.h:154
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * GetOnReceivedFromWrongIPCallback();

			// CgsNetworkManager.h:157
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback GetConnMgrConnectionFinalisedCallback();

			// CgsNetworkManager.h:160
			void * GetConnectionFinalisedUserData();

			// CgsNetworkManager.h:163
			CgsMemory::HeapMalloc * GetNetworkHeapAllocator();

		}

	}

}

// CgsNetworkManager.h:208
struct CgsNetwork::NetworkManager {
	// CgsNetworkManager.h:211
	extern int32_t _miPlayerManagerUpdatePerfMon;

	// CgsNetworkManager.h:212
	extern int32_t _miNetworkAdapterUpdatePerfMon;

	// CgsNetworkManager.h:213
	extern int32_t _miHostMigrationManagerUpdatePerfMon;

	// CgsNetworkManager.h:214
	extern int32_t _miStartTimeManagerUpdatePerfMon;

	// CgsNetworkManager.h:215
	extern int32_t _miVOIPManagerUpdatePerfMon;

protected:
	// CgsNetworkManager.h:281
	CgsNetwork::VersionDisplay mVersionDisplay;

	// CgsNetworkManager.h:338
	NetworkAdapter mNetworkAdapter;

private:
	// CgsNetworkManager.h:346
	int32_t miActiveControllerPort;

	// CgsNetworkManager.h:347
	bool mbSysMenuOnScreen;

	// CgsNetworkManager.h:349
	CgsNetwork::NetworkManager::EPrepareStage mePrepareStage;

	// CgsNetworkManager.h:350
	CgsNetwork::NetworkManager::EReleaseStage meReleaseStage;

	// CgsNetworkManager.h:351
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsNetworkManager.h:353
	PlayerManager mPlayerManager;

	// CgsNetworkManager.h:354
	HostMigrationManager mHostMigrationManager;

	// CgsNetworkManager.h:355
	StartTimeManager mStartTimeManager;

	// CgsNetworkManager.h:356
	TimeManager mTimeManager;

	// CgsNetworkManager.h:357
	VoIPManager mVoIPManager;

public:
	// CgsNetworkManager.h:239
	CgsNetwork::PlayerManager * GetPlayerManager();

	// CgsNetworkManager.h:242
	CgsNetwork::TimeManager * GetTimeManager();

	// CgsNetworkManager.h:245
	StartTimeManager * GetStartTimeManager();

	// CgsNetworkManager.h:248
	CgsNetwork::HostMigrationManager * GetHostMigrationManager();

	// CgsNetworkManager.h:251
	VoIPManager * GetVoIPManager();

	// CgsNetworkManager.h:254
	const NetworkAdapter * GetNetworkAdapter() const;

	// CgsNetworkManager.h:258
	int32_t GetActiveControllerPort();

	// CgsNetworkManager.h:263
	void SetActiveControllerPort(int32_t);

	// CgsNetworkManager.h:267
	void SetSysMenuOnScreen(bool);

	// CgsNetworkManager.h:270
	bool IsSysMenuOnScreen() const;

	// CgsNetworkManager.h:274
	CgsNetwork::VersionDisplay * GetVersionDisplay();

protected:
	// CgsNetworkManager.h:286
	void Construct(NetworkManagerConstructParams *);

	// CgsNetworkManager.h:289
	void Destruct();

	// CgsNetworkManager.h:293
	CgsNetwork::EManagerReturnCode Prepare(NetworkManagerPrepareParams *);

	// CgsNetworkManager.h:296
	bool Release();

	// CgsNetworkManager.h:302
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsNetworkManager.h:307
	void PostUpdate(const TimerStatus *, uint16_t);

	// CgsNetworkManager.h:311
	void OnEnterGame();

	// CgsNetworkManager.h:314
	void OnLeaveGame();

	// CgsNetworkManager.h:319
	void OnGameStart(Time, uint16_t);

	// CgsNetworkManager.h:324
	void OnGameFinish(Time, uint16_t);

	// CgsNetworkManager.h:330
	void OnRoundStart(Time, float32_t, uint16_t);

	// CgsNetworkManager.h:335
	void OnRoundFinish(Time, uint16_t);

private:
	// CgsNetworkManager.h:344
	void StartTimeMessageArrivedLate();

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkManager {
		// CgsNetworkManager.h:217
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_NETWORK_ADAPTER = 1,
			E_PREPARESTAGE_PLAYER_MANAGER = 2,
			E_PREPARESTAGE_HOST_MIGRATION_MANGER = 3,
			E_PREPARESTAGE_START_TIME_MANAGER = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// CgsNetworkManager.h:227
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_VOIP_MANAGER = 1,
			E_RELEASESTAGE_START_TIME_MANAGER = 2,
			E_RELEASESTAGE_HOST_MIGRATION_MANGER = 3,
			E_RELEASESTAGE_PLAYER_MANAGER = 4,
			E_RELEASESTAGE_NETWORK_ADAPTER = 5,
			E_RELEASESTAGE_DONE = 6,
		}

	}

	// CgsNetworkManager.h:47
	enum EManagerReturnCode {
		E_MANAGER_STATUS_READY = 0,
		E_MANAGER_STATUS_BUSY = 1,
		E_MANAGER_STATUS_ERROR = 2,
	}

	// Declaration
	struct NetworkManagerPrepareParams {
		// CgsNetworkManager.h:113
		struct VersionDisplayPrepareParams {
		private:
			// CgsNetworkManager.h:127
			const char * mpcVersion;

			// CgsNetworkManager.h:128
			CgsNetwork::EServerType meServerType;

		public:
			// CgsNetworkManager.h:118
			void Construct(const char *, CgsNetwork::EServerType);

			// CgsNetworkManager.h:121
			const char * GetVersion();

			// CgsNetworkManager.h:124
			CgsNetwork::EServerType GetServerType() const;

		}

		// CgsNetworkManager.h:140
		struct PlayerManagerPrepareParams {
		private:
			// CgsNetworkManager.h:166
			CgsNetwork::ServerInterface * mpServerInterface;

			// CgsNetworkManager.h:167
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

			// CgsNetworkManager.h:168
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

			// CgsNetworkManager.h:169
			void * mpConnectionFinalisedUserData;

			// CgsNetworkManager.h:170
			HeapMalloc * mpNetworkHeapAllocator;

		public:
			// CgsNetworkManager.h:148
			void Construct(CgsNetwork::ServerInterface *, PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, HeapMalloc *);

			// CgsNetworkManager.h:151
			CgsNetwork::ServerInterface * GetServerInterface();

			// CgsNetworkManager.h:154
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * GetOnReceivedFromWrongIPCallback();

			// CgsNetworkManager.h:157
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback GetConnMgrConnectionFinalisedCallback();

			// CgsNetworkManager.h:160
			void * GetConnectionFinalisedUserData();

			// CgsNetworkManager.h:163
			HeapMalloc * GetNetworkHeapAllocator();

		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct NetworkManager {
		// CgsNetworkManager.h:217
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_NETWORK_ADAPTER = 1,
			E_PREPARESTAGE_PLAYER_MANAGER = 2,
			E_PREPARESTAGE_HOST_MIGRATION_MANGER = 3,
			E_PREPARESTAGE_START_TIME_MANAGER = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// CgsNetworkManager.h:227
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_VOIP_MANAGER = 1,
			E_RELEASESTAGE_START_TIME_MANAGER = 2,
			E_RELEASESTAGE_HOST_MIGRATION_MANGER = 3,
			E_RELEASESTAGE_PLAYER_MANAGER = 4,
			E_RELEASESTAGE_NETWORK_ADAPTER = 5,
			E_RELEASESTAGE_DONE = 6,
		}

	}

	// CgsNetworkManager.h:47
	enum EManagerReturnCode {
		E_MANAGER_STATUS_READY = 0,
		E_MANAGER_STATUS_BUSY = 1,
		E_MANAGER_STATUS_ERROR = 2,
	}

	// Declaration
	struct NetworkManagerPrepareParams {
		// CgsNetworkManager.h:113
		struct VersionDisplayPrepareParams {
		private:
			// CgsNetworkManager.h:127
			const char * mpcVersion;

			// CgsNetworkManager.h:128
			CgsNetwork::EServerType meServerType;

		public:
			// CgsNetworkManager.h:118
			void Construct(const char *, CgsNetwork::EServerType);

			// CgsNetworkManager.h:121
			const char * GetVersion();

			// CgsNetworkManager.h:124
			CgsNetwork::EServerType GetServerType() const;

		}

		// CgsNetworkManager.h:140
		struct PlayerManagerPrepareParams {
		private:
			// CgsNetworkManager.h:166
			CgsNetwork::ServerInterface * mpServerInterface;

			// CgsNetworkManager.h:167
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

			// CgsNetworkManager.h:168
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

			// CgsNetworkManager.h:169
			void * mpConnectionFinalisedUserData;

			// CgsNetworkManager.h:170
			CgsMemory::HeapMalloc * mpNetworkHeapAllocator;

		public:
			// CgsNetworkManager.h:148
			void Construct(CgsNetwork::ServerInterface *, PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, CgsMemory::HeapMalloc *);

			// CgsNetworkManager.h:151
			CgsNetwork::ServerInterface * GetServerInterface();

			// CgsNetworkManager.h:154
			PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * GetOnReceivedFromWrongIPCallback();

			// CgsNetworkManager.h:157
			PlayersConnectionManager::ConnMgrConnectionFinalisedCallback GetConnMgrConnectionFinalisedCallback();

			// CgsNetworkManager.h:160
			void * GetConnectionFinalisedUserData();

			// CgsNetworkManager.h:163
			CgsMemory::HeapMalloc * GetNetworkHeapAllocator();

		}

	}

}

