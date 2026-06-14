// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct StartTimeManager {
		// CgsStartTimeManager.h:140
		struct MessageData {
			// CgsStartTimeManager.h:142
			CgsNetwork::StartTimeMessage mStartTimeMessageSend;

			// CgsStartTimeManager.h:143
			CgsNetwork::StartTimeMessage mStartTimeMessageRecv;

			// CgsStartTimeManager.h:144
			CgsNetwork::ReadyMessage mReadyMessageSend;

			// CgsStartTimeManager.h:145
			CgsNetwork::ReadyMessage mReadyMessageRecv;

			// CgsStartTimeManager.h:147
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsStartTimeManager.h:148
			bool mbPlayerReady;

			// CgsStartTimeManager.h:149
			bool mbSentStartTime;

		}

		// CgsStartTimeManager.h:152
		enum EPlayerReadiness {
			E_NOT_READY = 0,
			E_READY = 1,
			E_TIMEOUT = 2,
			E_READINESS_COUNT = 3,
		}

		// CgsStartTimeManager.h:160
		enum EPreStartSyncStatus {
			E_CONSTRUCTED = 0,
			E_START_SYNCING = 1,
			E_HOST_WAIT_FOR_CLIENTS_READY = 2,
			E_HOST_SEND_START_TIME = 3,
			E_CLIENT_SYNC_TIME = 4,
			E_CLIENT_SEND_READY = 5,
			E_CLIENT_WAIT_START_TIME_ARRIVE = 6,
			E_WAIT_FOR_START_TIME = 7,
			E_STARTED = 8,
			E_SYNCING_STATUS_COUNT = 9,
		}

	}

}

// CgsStartTimeManager.h:48
struct CgsNetwork::StartTimeManager {
	// CgsStartTimeManager.h:50
	extern const Time K_MIN_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:51
	extern const Time K_MAX_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:52
	extern const Time K_MAX_TIME_TO_WAIT_FOR_START_TIME;

	// CgsStartTimeManager.h:53
	extern const Time K_MAX_TIME_TO_WAIT_FOR_SILENT_CLIENT_READY;

	// CgsStartTimeManager.h:54
	extern const Time K_MAX_TIME_TO_WAIT_FOR_COMMUNICATING_CLIENT_READY;

	// CgsStartTimeManager.h:55
	extern const Time K_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

private:
	// CgsStartTimeManager.h:274
	CgsNetwork::StartTimeManager::MessageData[7] maMsgData;

	// CgsStartTimeManager.h:275
	HostMigrationManager * mpHostMigrationManager;

	// CgsStartTimeManager.h:276
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsStartTimeManager.h:277
	StartTime mStartTime;

	// CgsStartTimeManager.h:278
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsStartTimeManager.h:43
	typedef void () StartMessageArrivedLateCallback;

	// CgsStartTimeManager.h:279
	StartTimeManager::StartMessageArrivedLateCallback * mpfStartMessageArrivedLateCallback;

	// Unknown accessibility
	// CgsStartTimeManager.h:45
	typedef void (RoadRulesRecvData::NetworkPlayerID, void *) ClientReadyCallback;

	// CgsStartTimeManager.h:280
	StartTimeManager::ClientReadyCallback * mpfClientReadyCallback;

	// CgsStartTimeManager.h:281
	void * mpClientReadyData;

	// CgsStartTimeManager.h:282
	bool mbStartTimeIsValid;

	// CgsStartTimeManager.h:284
	CgsNetwork::StartTimeManager::EPreStartSyncStatus meStatus;

	// CgsStartTimeManager.h:285
	Time mStatusEnterTime;

	// CgsStartTimeManager.h:287
	Time mMinTimeToSyncTime;

	// CgsStartTimeManager.h:288
	Time mMaxTimeToSyncTime;

	// CgsStartTimeManager.h:289
	Time mTimeToWaitForStartTime;

	// CgsStartTimeManager.h:290
	Time mTimeToWaitForSilentClientReady;

	// CgsStartTimeManager.h:291
	Time mTimeToWaitForCommunicatingClientReady;

	// CgsStartTimeManager.h:292
	Time mGapToLeaveBeforeStartTime;

	// CgsStartTimeManager.h:294
	bool mbKeepSyncingAfterStart;

public:
	// CgsStartTimeManager.h:64
	void Construct(HostMigrationManager *, CgsNetwork::TimeManager *, CgsNetwork::PlayerManager *, StartTimeManager::StartMessageArrivedLateCallback *, StartTimeManager::ClientReadyCallback *, void *);

	// CgsStartTimeManager.h:67
	bool Prepare();

	// CgsStartTimeManager.h:70
	void PrepareStartTime();

	// CgsStartTimeManager.h:74
	void StartSyncingTime(bool);

	// CgsStartTimeManager.h:77
	void StopSyncingTime();

	// CgsStartTimeManager.h:81
	void Update(const TimerStatus *);

	// CgsStartTimeManager.h:84
	bool Release();

	// CgsStartTimeManager.h:87
	void Destruct();

	// CgsStartTimeManager.h:90
	bool HasStartTimePassed() const;

	// CgsStartTimeManager.h:93
	const Time * GetStartTime() const;

	// CgsStartTimeManager.h:99
	void OnHostMigration(const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// CgsStartTimeManager.h:103
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsStartTimeManager.h:107
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsStartTimeManager.h:110
	void Disconnected();

	// CgsStartTimeManager.h:115
	void SetSyncTimeTimeouts(Time, Time);

	// CgsStartTimeManager.h:119
	void SetWaitForStartTimeTimeout(Time);

	// CgsStartTimeManager.h:124
	void SetWaitForClientReadyTimeouts(Time, Time);

	// CgsStartTimeManager.h:128
	void SetGapTillStartTime(Time);

	// CgsStartTimeManager.h:131
	bool AreWeSyncingTime();

	// CgsStartTimeManager.h:135
	void ForceStartTime(const TimerStatus *);

private:
	// CgsStartTimeManager.h:176
	void RegisterMessages(RoadRulesRecvData::NetworkPlayerID);

	// CgsStartTimeManager.h:179
	void UnregisterMessages();

	// CgsStartTimeManager.h:183
	void UnregisterMessages(RoadRulesRecvData::NetworkPlayerID);

	// CgsStartTimeManager.h:186
	bool IsStartTimeValid() const;

	// CgsStartTimeManager.h:190
	void SetStartTime(const StartTime *);

	// CgsStartTimeManager.h:196
	CgsNetwork::StartTimeManager::EPlayerReadiness AreAllPlayersReadyToStart(const TimerStatus *, Time, Time);

	// CgsStartTimeManager.h:200
	void SendStartTime(const StartTime *);

	// CgsStartTimeManager.h:203
	void PrepareHostWaitForClientsReady();

	// CgsStartTimeManager.h:207
	bool UpdateHostWaitForClientsReady(const TimerStatus *);

	// CgsStartTimeManager.h:210
	void PrepareClientSyncTime();

	// CgsStartTimeManager.h:214
	bool UpdateClientSyncTime(const TimerStatus *);

	// CgsStartTimeManager.h:217
	void PrepareClientWaitStartTimeArrive();

	// CgsStartTimeManager.h:221
	bool UpdateClientWaitStartTimeArrive(const TimerStatus *);

	// CgsStartTimeManager.h:224
	void PrepareWaitForStartTime();

	// CgsStartTimeManager.h:228
	bool UpdateWaitForStartTime(const TimerStatus *);

	// CgsStartTimeManager.h:233
	void SetStatus(Time, CgsNetwork::StartTimeManager::EPreStartSyncStatus);

	// CgsStartTimeManager.h:237
	void UpdateStarted();

	// CgsStartTimeManager.h:243
	void StartTimeMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:251
	void StartTimeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:257
	void ReadyMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:265
	void ReadyMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:272
	void OnHostMigrationCallback(const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, void *);

}

// CgsStartTimeManager.h:50
extern const Time K_MIN_TIME_SPENT_SYNCING_TIME;

// CgsStartTimeManager.h:51
extern const Time K_MAX_TIME_SPENT_SYNCING_TIME;

// CgsStartTimeManager.h:52
extern const Time K_MAX_TIME_TO_WAIT_FOR_START_TIME;

// CgsStartTimeManager.h:53
extern const Time K_MAX_TIME_TO_WAIT_FOR_SILENT_CLIENT_READY;

// CgsStartTimeManager.h:54
extern const Time K_MAX_TIME_TO_WAIT_FOR_COMMUNICATING_CLIENT_READY;

// CgsStartTimeManager.h:55
extern const Time K_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct StartTimeManager {
		// CgsStartTimeManager.h:140
		struct MessageData {
			// CgsStartTimeManager.h:142
			CgsNetwork::StartTimeMessage mStartTimeMessageSend;

			// CgsStartTimeManager.h:143
			CgsNetwork::StartTimeMessage mStartTimeMessageRecv;

			// CgsStartTimeManager.h:144
			CgsNetwork::ReadyMessage mReadyMessageSend;

			// CgsStartTimeManager.h:145
			CgsNetwork::ReadyMessage mReadyMessageRecv;

			// CgsStartTimeManager.h:147
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// CgsStartTimeManager.h:148
			bool mbPlayerReady;

			// CgsStartTimeManager.h:149
			bool mbSentStartTime;

		}

		// CgsStartTimeManager.h:152
		enum EPlayerReadiness {
			E_NOT_READY = 0,
			E_READY = 1,
			E_TIMEOUT = 2,
			E_READINESS_COUNT = 3,
		}

		// CgsStartTimeManager.h:160
		enum EPreStartSyncStatus {
			E_CONSTRUCTED = 0,
			E_START_SYNCING = 1,
			E_HOST_WAIT_FOR_CLIENTS_READY = 2,
			E_HOST_SEND_START_TIME = 3,
			E_CLIENT_SYNC_TIME = 4,
			E_CLIENT_SEND_READY = 5,
			E_CLIENT_WAIT_START_TIME_ARRIVE = 6,
			E_WAIT_FOR_START_TIME = 7,
			E_STARTED = 8,
			E_SYNCING_STATUS_COUNT = 9,
		}

	}

}

// CgsStartTimeManager.h:48
struct CgsNetwork::StartTimeManager {
	// CgsStartTimeManager.h:50
	extern const Time K_MIN_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:51
	extern const Time K_MAX_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:52
	extern const Time K_MAX_TIME_TO_WAIT_FOR_START_TIME;

	// CgsStartTimeManager.h:53
	extern const Time K_MAX_TIME_TO_WAIT_FOR_SILENT_CLIENT_READY;

	// CgsStartTimeManager.h:54
	extern const Time K_MAX_TIME_TO_WAIT_FOR_COMMUNICATING_CLIENT_READY;

	// CgsStartTimeManager.h:55
	extern const Time K_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

private:
	// CgsStartTimeManager.h:274
	CgsNetwork::StartTimeManager::MessageData[7] maMsgData;

	// CgsStartTimeManager.h:275
	HostMigrationManager * mpHostMigrationManager;

	// CgsStartTimeManager.h:276
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsStartTimeManager.h:277
	StartTime mStartTime;

	// CgsStartTimeManager.h:278
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsStartTimeManager.h:43
	typedef void () StartMessageArrivedLateCallback;

	// CgsStartTimeManager.h:279
	StartTimeManager::StartMessageArrivedLateCallback * mpfStartMessageArrivedLateCallback;

	// Unknown accessibility
	// CgsStartTimeManager.h:45
	typedef void (GuiEventNetworkLaunching::NetworkPlayerID, void *) ClientReadyCallback;

	// CgsStartTimeManager.h:280
	StartTimeManager::ClientReadyCallback * mpfClientReadyCallback;

	// CgsStartTimeManager.h:281
	void * mpClientReadyData;

	// CgsStartTimeManager.h:282
	bool mbStartTimeIsValid;

	// CgsStartTimeManager.h:284
	CgsNetwork::StartTimeManager::EPreStartSyncStatus meStatus;

	// CgsStartTimeManager.h:285
	Time mStatusEnterTime;

	// CgsStartTimeManager.h:287
	Time mMinTimeToSyncTime;

	// CgsStartTimeManager.h:288
	Time mMaxTimeToSyncTime;

	// CgsStartTimeManager.h:289
	Time mTimeToWaitForStartTime;

	// CgsStartTimeManager.h:290
	Time mTimeToWaitForSilentClientReady;

	// CgsStartTimeManager.h:291
	Time mTimeToWaitForCommunicatingClientReady;

	// CgsStartTimeManager.h:292
	Time mGapToLeaveBeforeStartTime;

	// CgsStartTimeManager.h:294
	bool mbKeepSyncingAfterStart;

public:
	// CgsStartTimeManager.h:64
	void Construct(HostMigrationManager *, CgsNetwork::TimeManager *, CgsNetwork::PlayerManager *, StartTimeManager::StartMessageArrivedLateCallback *, StartTimeManager::ClientReadyCallback *, void *);

	// CgsStartTimeManager.h:67
	bool Prepare();

	// CgsStartTimeManager.h:70
	void PrepareStartTime();

	// CgsStartTimeManager.h:74
	void StartSyncingTime(bool);

	// CgsStartTimeManager.h:77
	void StopSyncingTime();

	// CgsStartTimeManager.h:81
	void Update(const TimerStatus *);

	// CgsStartTimeManager.h:84
	bool Release();

	// CgsStartTimeManager.h:87
	void Destruct();

	// CgsStartTimeManager.h:90
	bool HasStartTimePassed() const;

	// CgsStartTimeManager.h:93
	const Time * GetStartTime() const;

	// CgsStartTimeManager.h:99
	void OnHostMigration(const TimerStatus *, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsStartTimeManager.h:103
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsStartTimeManager.h:107
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsStartTimeManager.h:110
	void Disconnected();

	// CgsStartTimeManager.h:115
	void SetSyncTimeTimeouts(Time, Time);

	// CgsStartTimeManager.h:119
	void SetWaitForStartTimeTimeout(Time);

	// CgsStartTimeManager.h:124
	void SetWaitForClientReadyTimeouts(Time, Time);

	// CgsStartTimeManager.h:128
	void SetGapTillStartTime(Time);

	// CgsStartTimeManager.h:131
	bool AreWeSyncingTime();

	// CgsStartTimeManager.h:135
	void ForceStartTime(const TimerStatus *);

private:
	// CgsStartTimeManager.h:176
	void RegisterMessages(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsStartTimeManager.h:179
	void UnregisterMessages();

	// CgsStartTimeManager.h:183
	void UnregisterMessages(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsStartTimeManager.h:186
	bool IsStartTimeValid() const;

	// CgsStartTimeManager.h:190
	void SetStartTime(const StartTime *);

	// CgsStartTimeManager.h:196
	CgsNetwork::StartTimeManager::EPlayerReadiness AreAllPlayersReadyToStart(const TimerStatus *, Time, Time);

	// CgsStartTimeManager.h:200
	void SendStartTime(const StartTime *);

	// CgsStartTimeManager.h:203
	void PrepareHostWaitForClientsReady();

	// CgsStartTimeManager.h:207
	bool UpdateHostWaitForClientsReady(const TimerStatus *);

	// CgsStartTimeManager.h:210
	void PrepareClientSyncTime();

	// CgsStartTimeManager.h:214
	bool UpdateClientSyncTime(const TimerStatus *);

	// CgsStartTimeManager.h:217
	void PrepareClientWaitStartTimeArrive();

	// CgsStartTimeManager.h:221
	bool UpdateClientWaitStartTimeArrive(const TimerStatus *);

	// CgsStartTimeManager.h:224
	void PrepareWaitForStartTime();

	// CgsStartTimeManager.h:228
	bool UpdateWaitForStartTime(const TimerStatus *);

	// CgsStartTimeManager.h:233
	void SetStatus(Time, CgsNetwork::StartTimeManager::EPreStartSyncStatus);

	// CgsStartTimeManager.h:237
	void UpdateStarted();

	// CgsStartTimeManager.h:243
	void StartTimeMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:251
	void StartTimeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:257
	void ReadyMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:265
	void ReadyMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:272
	void OnHostMigrationCallback(const TimerStatus *, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct StartTimeManager {
		// CgsStartTimeManager.h:140
		struct MessageData {
			// CgsStartTimeManager.h:142
			CgsNetwork::StartTimeMessage mStartTimeMessageSend;

			// CgsStartTimeManager.h:143
			CgsNetwork::StartTimeMessage mStartTimeMessageRecv;

			// CgsStartTimeManager.h:144
			CgsNetwork::ReadyMessage mReadyMessageSend;

			// CgsStartTimeManager.h:145
			CgsNetwork::ReadyMessage mReadyMessageRecv;

			// CgsStartTimeManager.h:147
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// CgsStartTimeManager.h:148
			bool mbPlayerReady;

			// CgsStartTimeManager.h:149
			bool mbSentStartTime;

		}

		// CgsStartTimeManager.h:152
		enum EPlayerReadiness {
			E_NOT_READY = 0,
			E_READY = 1,
			E_TIMEOUT = 2,
			E_READINESS_COUNT = 3,
		}

		// CgsStartTimeManager.h:160
		enum EPreStartSyncStatus {
			E_CONSTRUCTED = 0,
			E_START_SYNCING = 1,
			E_HOST_WAIT_FOR_CLIENTS_READY = 2,
			E_HOST_SEND_START_TIME = 3,
			E_CLIENT_SYNC_TIME = 4,
			E_CLIENT_SEND_READY = 5,
			E_CLIENT_WAIT_START_TIME_ARRIVE = 6,
			E_WAIT_FOR_START_TIME = 7,
			E_STARTED = 8,
			E_SYNCING_STATUS_COUNT = 9,
		}

	}

}

// CgsStartTimeManager.h:48
struct CgsNetwork::StartTimeManager {
	// CgsStartTimeManager.h:50
	extern const Time K_MIN_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:51
	extern const Time K_MAX_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:52
	extern const Time K_MAX_TIME_TO_WAIT_FOR_START_TIME;

	// CgsStartTimeManager.h:53
	extern const Time K_MAX_TIME_TO_WAIT_FOR_SILENT_CLIENT_READY;

	// CgsStartTimeManager.h:54
	extern const Time K_MAX_TIME_TO_WAIT_FOR_COMMUNICATING_CLIENT_READY;

	// CgsStartTimeManager.h:55
	extern const Time K_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

private:
	// CgsStartTimeManager.h:274
	CgsNetwork::StartTimeManager::MessageData[7] maMsgData;

	// CgsStartTimeManager.h:275
	CgsNetwork::HostMigrationManager * mpHostMigrationManager;

	// CgsStartTimeManager.h:276
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsStartTimeManager.h:277
	StartTime mStartTime;

	// CgsStartTimeManager.h:278
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsStartTimeManager.h:43
	typedef void () StartMessageArrivedLateCallback;

	// CgsStartTimeManager.h:279
	StartTimeManager::StartMessageArrivedLateCallback * mpfStartMessageArrivedLateCallback;

	// Unknown accessibility
	// CgsStartTimeManager.h:45
	typedef void (AggressiveMoveData::NetworkPlayerID, void *) ClientReadyCallback;

	// CgsStartTimeManager.h:280
	StartTimeManager::ClientReadyCallback * mpfClientReadyCallback;

	// CgsStartTimeManager.h:281
	void * mpClientReadyData;

	// CgsStartTimeManager.h:282
	bool mbStartTimeIsValid;

	// CgsStartTimeManager.h:284
	CgsNetwork::StartTimeManager::EPreStartSyncStatus meStatus;

	// CgsStartTimeManager.h:285
	Time mStatusEnterTime;

	// CgsStartTimeManager.h:287
	Time mMinTimeToSyncTime;

	// CgsStartTimeManager.h:288
	Time mMaxTimeToSyncTime;

	// CgsStartTimeManager.h:289
	Time mTimeToWaitForStartTime;

	// CgsStartTimeManager.h:290
	Time mTimeToWaitForSilentClientReady;

	// CgsStartTimeManager.h:291
	Time mTimeToWaitForCommunicatingClientReady;

	// CgsStartTimeManager.h:292
	Time mGapToLeaveBeforeStartTime;

	// CgsStartTimeManager.h:294
	bool mbKeepSyncingAfterStart;

public:
	// CgsStartTimeManager.h:64
	void Construct(CgsNetwork::HostMigrationManager *, CgsNetwork::TimeManager *, CgsNetwork::PlayerManager *, StartTimeManager::StartMessageArrivedLateCallback *, StartTimeManager::ClientReadyCallback *, void *);

	// CgsStartTimeManager.h:67
	bool Prepare();

	// CgsStartTimeManager.h:70
	void PrepareStartTime();

	// CgsStartTimeManager.h:74
	void StartSyncingTime(bool);

	// CgsStartTimeManager.h:77
	void StopSyncingTime();

	// CgsStartTimeManager.h:81
	void Update(const TimerStatus *);

	// CgsStartTimeManager.h:84
	bool Release();

	// CgsStartTimeManager.h:87
	void Destruct();

	// CgsStartTimeManager.h:90
	bool HasStartTimePassed() const;

	// CgsStartTimeManager.h:93
	const Time * GetStartTime() const;

	// CgsStartTimeManager.h:99
	void OnHostMigration(const TimerStatus *, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID);

	// CgsStartTimeManager.h:103
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsStartTimeManager.h:107
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsStartTimeManager.h:110
	void Disconnected();

	// CgsStartTimeManager.h:115
	void SetSyncTimeTimeouts(Time, Time);

	// CgsStartTimeManager.h:119
	void SetWaitForStartTimeTimeout(Time);

	// CgsStartTimeManager.h:124
	void SetWaitForClientReadyTimeouts(Time, Time);

	// CgsStartTimeManager.h:128
	void SetGapTillStartTime(Time);

	// CgsStartTimeManager.h:131
	bool AreWeSyncingTime();

	// CgsStartTimeManager.h:135
	void ForceStartTime(const TimerStatus *);

private:
	// CgsStartTimeManager.h:176
	void RegisterMessages(AggressiveMoveData::NetworkPlayerID);

	// CgsStartTimeManager.h:179
	void UnregisterMessages();

	// CgsStartTimeManager.h:183
	void UnregisterMessages(AggressiveMoveData::NetworkPlayerID);

	// CgsStartTimeManager.h:186
	bool IsStartTimeValid() const;

	// CgsStartTimeManager.h:190
	void SetStartTime(const StartTime *);

	// CgsStartTimeManager.h:196
	CgsNetwork::StartTimeManager::EPlayerReadiness AreAllPlayersReadyToStart(const TimerStatus *, Time, Time);

	// CgsStartTimeManager.h:200
	void SendStartTime(const StartTime *);

	// CgsStartTimeManager.h:203
	void PrepareHostWaitForClientsReady();

	// CgsStartTimeManager.h:207
	bool UpdateHostWaitForClientsReady(const TimerStatus *);

	// CgsStartTimeManager.h:210
	void PrepareClientSyncTime();

	// CgsStartTimeManager.h:214
	bool UpdateClientSyncTime(const TimerStatus *);

	// CgsStartTimeManager.h:217
	void PrepareClientWaitStartTimeArrive();

	// CgsStartTimeManager.h:221
	bool UpdateClientWaitStartTimeArrive(const TimerStatus *);

	// CgsStartTimeManager.h:224
	void PrepareWaitForStartTime();

	// CgsStartTimeManager.h:228
	bool UpdateWaitForStartTime(const TimerStatus *);

	// CgsStartTimeManager.h:233
	void SetStatus(Time, CgsNetwork::StartTimeManager::EPreStartSyncStatus);

	// CgsStartTimeManager.h:237
	void UpdateStarted();

	// CgsStartTimeManager.h:243
	void StartTimeMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:251
	void StartTimeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:257
	void ReadyMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:265
	void ReadyMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:272
	void OnHostMigrationCallback(const TimerStatus *, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, void *);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct StartTimeManager {
		// CgsStartTimeManager.h:140
		struct MessageData {
			// CgsStartTimeManager.h:142
			CgsNetwork::StartTimeMessage mStartTimeMessageSend;

			// CgsStartTimeManager.h:143
			CgsNetwork::StartTimeMessage mStartTimeMessageRecv;

			// CgsStartTimeManager.h:144
			CgsNetwork::ReadyMessage mReadyMessageSend;

			// CgsStartTimeManager.h:145
			CgsNetwork::ReadyMessage mReadyMessageRecv;

			// CgsStartTimeManager.h:147
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsStartTimeManager.h:148
			bool mbPlayerReady;

			// CgsStartTimeManager.h:149
			bool mbSentStartTime;

		}

		// CgsStartTimeManager.h:152
		enum EPlayerReadiness {
			E_NOT_READY = 0,
			E_READY = 1,
			E_TIMEOUT = 2,
			E_READINESS_COUNT = 3,
		}

		// CgsStartTimeManager.h:160
		enum EPreStartSyncStatus {
			E_CONSTRUCTED = 0,
			E_START_SYNCING = 1,
			E_HOST_WAIT_FOR_CLIENTS_READY = 2,
			E_HOST_SEND_START_TIME = 3,
			E_CLIENT_SYNC_TIME = 4,
			E_CLIENT_SEND_READY = 5,
			E_CLIENT_WAIT_START_TIME_ARRIVE = 6,
			E_WAIT_FOR_START_TIME = 7,
			E_STARTED = 8,
			E_SYNCING_STATUS_COUNT = 9,
		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct StartTimeManager {
		// CgsStartTimeManager.h:140
		struct MessageData {
			// CgsStartTimeManager.h:142
			CgsNetwork::StartTimeMessage mStartTimeMessageSend;

			// CgsStartTimeManager.h:143
			CgsNetwork::StartTimeMessage mStartTimeMessageRecv;

			// CgsStartTimeManager.h:144
			CgsNetwork::ReadyMessage mReadyMessageSend;

			// CgsStartTimeManager.h:145
			CgsNetwork::ReadyMessage mReadyMessageRecv;

			// CgsStartTimeManager.h:147
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

			// CgsStartTimeManager.h:148
			bool mbPlayerReady;

			// CgsStartTimeManager.h:149
			bool mbSentStartTime;

		}

		// CgsStartTimeManager.h:152
		enum EPlayerReadiness {
			E_NOT_READY = 0,
			E_READY = 1,
			E_TIMEOUT = 2,
			E_READINESS_COUNT = 3,
		}

		// CgsStartTimeManager.h:160
		enum EPreStartSyncStatus {
			E_CONSTRUCTED = 0,
			E_START_SYNCING = 1,
			E_HOST_WAIT_FOR_CLIENTS_READY = 2,
			E_HOST_SEND_START_TIME = 3,
			E_CLIENT_SYNC_TIME = 4,
			E_CLIENT_SEND_READY = 5,
			E_CLIENT_WAIT_START_TIME_ARRIVE = 6,
			E_WAIT_FOR_START_TIME = 7,
			E_STARTED = 8,
			E_SYNCING_STATUS_COUNT = 9,
		}

	}

}

// CgsStartTimeManager.h:48
struct CgsNetwork::StartTimeManager {
	// CgsStartTimeManager.h:50
	extern const Time K_MIN_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:51
	extern const Time K_MAX_TIME_SPENT_SYNCING_TIME;

	// CgsStartTimeManager.h:52
	extern const Time K_MAX_TIME_TO_WAIT_FOR_START_TIME;

	// CgsStartTimeManager.h:53
	extern const Time K_MAX_TIME_TO_WAIT_FOR_SILENT_CLIENT_READY;

	// CgsStartTimeManager.h:54
	extern const Time K_MAX_TIME_TO_WAIT_FOR_COMMUNICATING_CLIENT_READY;

	// CgsStartTimeManager.h:55
	extern const Time K_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

private:
	// CgsStartTimeManager.h:274
	CgsNetwork::StartTimeManager::MessageData[7] maMsgData;

	// CgsStartTimeManager.h:275
	HostMigrationManager * mpHostMigrationManager;

	// CgsStartTimeManager.h:276
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsStartTimeManager.h:277
	StartTime mStartTime;

	// CgsStartTimeManager.h:278
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsStartTimeManager.h:43
	typedef void () StartMessageArrivedLateCallback;

	// CgsStartTimeManager.h:279
	StartTimeManager::StartMessageArrivedLateCallback * mpfStartMessageArrivedLateCallback;

	// Unknown accessibility
	// CgsStartTimeManager.h:45
	typedef void (CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) ClientReadyCallback;

	// CgsStartTimeManager.h:280
	StartTimeManager::ClientReadyCallback * mpfClientReadyCallback;

	// CgsStartTimeManager.h:281
	void * mpClientReadyData;

	// CgsStartTimeManager.h:282
	bool mbStartTimeIsValid;

	// CgsStartTimeManager.h:284
	CgsNetwork::StartTimeManager::EPreStartSyncStatus meStatus;

	// CgsStartTimeManager.h:285
	Time mStatusEnterTime;

	// CgsStartTimeManager.h:287
	Time mMinTimeToSyncTime;

	// CgsStartTimeManager.h:288
	Time mMaxTimeToSyncTime;

	// CgsStartTimeManager.h:289
	Time mTimeToWaitForStartTime;

	// CgsStartTimeManager.h:290
	Time mTimeToWaitForSilentClientReady;

	// CgsStartTimeManager.h:291
	Time mTimeToWaitForCommunicatingClientReady;

	// CgsStartTimeManager.h:292
	Time mGapToLeaveBeforeStartTime;

	// CgsStartTimeManager.h:294
	bool mbKeepSyncingAfterStart;

public:
	// CgsStartTimeManager.h:64
	void Construct(HostMigrationManager *, CgsNetwork::TimeManager *, CgsNetwork::PlayerManager *, StartTimeManager::StartMessageArrivedLateCallback *, StartTimeManager::ClientReadyCallback *, void *);

	// CgsStartTimeManager.h:67
	bool Prepare();

	// CgsStartTimeManager.h:70
	void PrepareStartTime();

	// CgsStartTimeManager.h:74
	void StartSyncingTime(bool);

	// CgsStartTimeManager.h:77
	void StopSyncingTime();

	// CgsStartTimeManager.h:81
	// Declaration
	void Update(const TimerStatus *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStartTimeManager.cpp:340
		using namespace CgsDev::Message;

		// CgsStartTimeManager.cpp:343
		using namespace CgsDev::Message;

	}

	// CgsStartTimeManager.h:84
	bool Release();

	// CgsStartTimeManager.h:87
	void Destruct();

	// CgsStartTimeManager.h:90
	bool HasStartTimePassed() const;

	// CgsStartTimeManager.h:93
	const Time * GetStartTime() const;

	// CgsStartTimeManager.h:99
	// Declaration
	void OnHostMigration(const TimerStatus *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStartTimeManager.cpp:482
		using namespace CgsDev::Message;

	}

	// CgsStartTimeManager.h:103
	void AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsStartTimeManager.h:107
	void RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsStartTimeManager.h:110
	void Disconnected();

	// CgsStartTimeManager.h:115
	void SetSyncTimeTimeouts(Time, Time);

	// CgsStartTimeManager.h:119
	void SetWaitForStartTimeTimeout(Time);

	// CgsStartTimeManager.h:124
	void SetWaitForClientReadyTimeouts(Time, Time);

	// CgsStartTimeManager.h:128
	void SetGapTillStartTime(Time);

	// CgsStartTimeManager.h:131
	bool AreWeSyncingTime();

	// CgsStartTimeManager.h:135
	void ForceStartTime(const TimerStatus *);

private:
	// CgsStartTimeManager.h:176
	void RegisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsStartTimeManager.h:179
	void UnregisterMessages();

	// CgsStartTimeManager.h:183
	void UnregisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsStartTimeManager.h:186
	bool IsStartTimeValid() const;

	// CgsStartTimeManager.h:190
	void SetStartTime(const StartTime *);

	// CgsStartTimeManager.h:196
	CgsNetwork::StartTimeManager::EPlayerReadiness AreAllPlayersReadyToStart(const TimerStatus *, Time, Time);

	// CgsStartTimeManager.h:200
	void SendStartTime(const StartTime *);

	// CgsStartTimeManager.h:203
	void PrepareHostWaitForClientsReady();

	// CgsStartTimeManager.h:207
	bool UpdateHostWaitForClientsReady(const TimerStatus *);

	// CgsStartTimeManager.h:210
	void PrepareClientSyncTime();

	// CgsStartTimeManager.h:214
	bool UpdateClientSyncTime(const TimerStatus *);

	// CgsStartTimeManager.h:217
	void PrepareClientWaitStartTimeArrive();

	// CgsStartTimeManager.h:221
	bool UpdateClientWaitStartTimeArrive(const TimerStatus *);

	// CgsStartTimeManager.h:224
	void PrepareWaitForStartTime();

	// CgsStartTimeManager.h:228
	bool UpdateWaitForStartTime(const TimerStatus *);

	// CgsStartTimeManager.h:233
	void SetStatus(Time, CgsNetwork::StartTimeManager::EPreStartSyncStatus);

	// CgsStartTimeManager.h:237
	void UpdateStarted();

	// CgsStartTimeManager.h:243
	// Declaration
	void StartTimeMessageArrivedCallback(CgsNetwork::ReliableMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStartTimeManager.cpp:881
		using namespace CgsDev::Message;

	}

	// CgsStartTimeManager.h:251
	void StartTimeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:257
	void ReadyMessageArrivedCallback(CgsNetwork::ReliableMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:265
	void ReadyMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsStartTimeManager.h:272
	void OnHostMigrationCallback(const TimerStatus *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

}

