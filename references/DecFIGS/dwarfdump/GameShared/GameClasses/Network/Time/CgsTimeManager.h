// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct TimeManager {
		// CgsTimeManager.h:102
		enum EStartFrame {
			E_START_FRAME_CURRENT = 0,
			E_START_FRAME_PAST = 1,
			E_START_FRAME_INVALID = 2,
		}

		// CgsTimeManager.h:140
		enum ESyncTimePrepareStatus {
			E_SYNC_TIME_PREPARE_STATUS_NONE = 0,
			E_SYNC_TIME_PREPARE_STATUS_HOST = 1,
			E_SYNC_TIME_PREPARE_STATUS_CLIENT = 2,
		}

	}

	// CgsTimeManager.h:34
	const float_t KF_ONLINE_TIME_DIFFERENCE_TOLERANCE;

	// CgsTimeManager.h:35
	const int32_t KI_ONLINE_TIME_DIFFERENCE_MIN_PACKETS = 8;

}

// CgsTimeManager.h:42
struct CgsNetwork::TimeManager {
private:
	// CgsTimeManager.h:174
	SyncTimeClient mSyncTimeClient;

	// CgsTimeManager.h:175
	SyncTimeHost mSyncTimeHost;

	// CgsTimeManager.h:176
	SyncTimeMessageManager mSyncTimeMessageManager;

	// CgsTimeManager.h:177
	Time mNetworkTime;

	// CgsTimeManager.h:178
	Time mGlobalTime;

	// CgsTimeManager.h:180
	CgsNetwork::TimeManager::ESyncTimePrepareStatus meSyncTimePrepareStatus;

	// CgsTimeManager.h:181
	bool mbWeAreSyncingTime;

	// CgsTimeManager.h:185
	uint32_t muFrameCount;

	// CgsTimeManager.h:186
	uint16_t mu16StartFrame;

	// CgsTimeManager.h:187
	int32_t miStartFrameWrapCount;

	// CgsTimeManager.h:190
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsTimeManager.h:191
	int32_t miPlayersAdded;

public:
	// CgsTimeManager.h:47
	void Construct(CgsNetwork::PlayerManager *);

	// CgsTimeManager.h:50
	bool Prepare();

	// CgsTimeManager.h:53
	void Update();

	// CgsTimeManager.h:56
	bool Release();

	// CgsTimeManager.h:59
	void Destruct();

	// CgsTimeManager.h:65
	void ResetNetworkTime();

	// CgsTimeManager.h:69
	void StartSyncingTime();

	// CgsTimeManager.h:73
	void StopSyncingTime();

	// CgsTimeManager.h:76
	Time GetNetworkTime() const;

	// CgsTimeManager.h:79
	bool IsTimeSynchronised() const;

	// CgsTimeManager.h:86
	void OnHostMigration(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, bool);

	// CgsTimeManager.h:91
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID, bool);

	// CgsTimeManager.h:95
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsTimeManager.h:98
	void Disconnected();

	// CgsTimeManager.h:113
	void SetStartFrame(CgsNetwork::TimeManager::EStartFrame, const Time *, float32_t);

	// CgsTimeManager.h:116
	bool HasStartFrameBeenSetValid();

	// CgsTimeManager.h:120
	void NextFrame(const TimerStatus *);

	// CgsTimeManager.h:123
	uint32_t GetFrameCount() const;

	// CgsTimeManager.h:126
	uint16_t GetU16FrameCount() const;

	// CgsTimeManager.h:129
	uint16_t GetU16FrameCountSinceStart() const;

	// CgsTimeManager.h:132
	int32_t GetFrameWrapCountSinceStart() const;

	// CgsTimeManager.h:136
	int32_t GetFramesSinceStart() const;

private:
	// CgsTimeManager.h:148
	void ReleaseSyncTimeManagers();

	// CgsTimeManager.h:153
	void PrepareSyncTimeManagers(bool, RoadRulesRecvData::NetworkPlayerID);

	// CgsTimeManager.h:158
	uint16_t GetU16StartFrame() const;

	// CgsTimeManager.h:161
	int32_t GetStartFrameWrapCount() const;

	// CgsTimeManager.h:164
	int32_t CalculateFrameWrapCount() const;

	// CgsTimeManager.h:170
	void CalculateFrameCountAndWrapCount(uint32_t, uint16_t *, int32_t *) const;

}

// CgsTimeManager.h:42
struct CgsNetwork::TimeManager {
private:
	// CgsTimeManager.h:174
	SyncTimeClient mSyncTimeClient;

	// CgsTimeManager.h:175
	SyncTimeHost mSyncTimeHost;

	// CgsTimeManager.h:176
	SyncTimeMessageManager mSyncTimeMessageManager;

	// CgsTimeManager.h:177
	Time mNetworkTime;

	// CgsTimeManager.h:178
	Time mGlobalTime;

	// CgsTimeManager.h:180
	CgsNetwork::TimeManager::ESyncTimePrepareStatus meSyncTimePrepareStatus;

	// CgsTimeManager.h:181
	bool mbWeAreSyncingTime;

	// CgsTimeManager.h:185
	uint32_t muFrameCount;

	// CgsTimeManager.h:186
	uint16_t mu16StartFrame;

	// CgsTimeManager.h:187
	int32_t miStartFrameWrapCount;

	// CgsTimeManager.h:190
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsTimeManager.h:191
	int32_t miPlayersAdded;

public:
	// CgsTimeManager.h:47
	void Construct(CgsNetwork::PlayerManager *);

	// CgsTimeManager.h:50
	bool Prepare();

	// CgsTimeManager.h:53
	void Update();

	// CgsTimeManager.h:56
	bool Release();

	// CgsTimeManager.h:59
	void Destruct();

	// CgsTimeManager.h:65
	void ResetNetworkTime();

	// CgsTimeManager.h:69
	void StartSyncingTime();

	// CgsTimeManager.h:73
	void StopSyncingTime();

	// CgsTimeManager.h:76
	Time GetNetworkTime() const;

	// CgsTimeManager.h:79
	bool IsTimeSynchronised() const;

	// CgsTimeManager.h:86
	void OnHostMigration(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, bool);

	// CgsTimeManager.h:91
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID, bool);

	// CgsTimeManager.h:95
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsTimeManager.h:98
	void Disconnected();

	// CgsTimeManager.h:113
	void SetStartFrame(CgsNetwork::TimeManager::EStartFrame, const Time *, float32_t);

	// CgsTimeManager.h:116
	bool HasStartFrameBeenSetValid();

	// CgsTimeManager.h:120
	void NextFrame(const TimerStatus *);

	// CgsTimeManager.h:123
	uint32_t GetFrameCount() const;

	// CgsTimeManager.h:126
	uint16_t GetU16FrameCount() const;

	// CgsTimeManager.h:129
	uint16_t GetU16FrameCountSinceStart() const;

	// CgsTimeManager.h:132
	int32_t GetFrameWrapCountSinceStart() const;

	// CgsTimeManager.h:136
	int32_t GetFramesSinceStart() const;

private:
	// CgsTimeManager.h:148
	void ReleaseSyncTimeManagers();

	// CgsTimeManager.h:153
	void PrepareSyncTimeManagers(bool, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsTimeManager.h:158
	uint16_t GetU16StartFrame() const;

	// CgsTimeManager.h:161
	int32_t GetStartFrameWrapCount() const;

	// CgsTimeManager.h:164
	int32_t CalculateFrameWrapCount() const;

	// CgsTimeManager.h:170
	void CalculateFrameCountAndWrapCount(uint32_t, uint16_t *, int32_t *) const;

}

// CgsTimeManager.h:42
struct CgsNetwork::TimeManager {
private:
	// CgsTimeManager.h:174
	SyncTimeClient mSyncTimeClient;

	// CgsTimeManager.h:175
	SyncTimeHost mSyncTimeHost;

	// CgsTimeManager.h:176
	SyncTimeMessageManager mSyncTimeMessageManager;

	// CgsTimeManager.h:177
	Time mNetworkTime;

	// CgsTimeManager.h:178
	Time mGlobalTime;

	// CgsTimeManager.h:180
	CgsNetwork::TimeManager::ESyncTimePrepareStatus meSyncTimePrepareStatus;

	// CgsTimeManager.h:181
	bool mbWeAreSyncingTime;

	// CgsTimeManager.h:185
	uint32_t muFrameCount;

	// CgsTimeManager.h:186
	uint16_t mu16StartFrame;

	// CgsTimeManager.h:187
	int32_t miStartFrameWrapCount;

	// CgsTimeManager.h:190
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsTimeManager.h:191
	int32_t miPlayersAdded;

public:
	// CgsTimeManager.h:47
	void Construct(CgsNetwork::PlayerManager *);

	// CgsTimeManager.h:50
	bool Prepare();

	// CgsTimeManager.h:53
	void Update();

	// CgsTimeManager.h:56
	bool Release();

	// CgsTimeManager.h:59
	void Destruct();

	// CgsTimeManager.h:65
	void ResetNetworkTime();

	// CgsTimeManager.h:69
	void StartSyncingTime();

	// CgsTimeManager.h:73
	void StopSyncingTime();

	// CgsTimeManager.h:76
	Time GetNetworkTime() const;

	// CgsTimeManager.h:79
	bool IsTimeSynchronised() const;

	// CgsTimeManager.h:86
	void OnHostMigration(AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, bool);

	// CgsTimeManager.h:91
	void AddPlayer(AggressiveMoveData::NetworkPlayerID, bool);

	// CgsTimeManager.h:95
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsTimeManager.h:98
	void Disconnected();

	// CgsTimeManager.h:113
	void SetStartFrame(CgsNetwork::TimeManager::EStartFrame, const Time *, float32_t);

	// CgsTimeManager.h:116
	bool HasStartFrameBeenSetValid();

	// CgsTimeManager.h:120
	void NextFrame(const TimerStatus *);

	// CgsTimeManager.h:123
	uint32_t GetFrameCount() const;

	// CgsTimeManager.h:126
	uint16_t GetU16FrameCount() const;

	// CgsTimeManager.h:129
	uint16_t GetU16FrameCountSinceStart() const;

	// CgsTimeManager.h:132
	int32_t GetFrameWrapCountSinceStart() const;

	// CgsTimeManager.h:136
	int32_t GetFramesSinceStart() const;

private:
	// CgsTimeManager.h:148
	void ReleaseSyncTimeManagers();

	// CgsTimeManager.h:153
	void PrepareSyncTimeManagers(bool, AggressiveMoveData::NetworkPlayerID);

	// CgsTimeManager.h:158
	uint16_t GetU16StartFrame() const;

	// CgsTimeManager.h:161
	int32_t GetStartFrameWrapCount() const;

	// CgsTimeManager.h:164
	int32_t CalculateFrameWrapCount() const;

	// CgsTimeManager.h:170
	void CalculateFrameCountAndWrapCount(uint32_t, uint16_t *, int32_t *) const;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct TimeManager {
		// CgsTimeManager.h:102
		enum EStartFrame {
			E_START_FRAME_CURRENT = 0,
			E_START_FRAME_PAST = 1,
			E_START_FRAME_INVALID = 2,
		}

		// CgsTimeManager.h:140
		enum ESyncTimePrepareStatus {
			E_SYNC_TIME_PREPARE_STATUS_NONE = 0,
			E_SYNC_TIME_PREPARE_STATUS_HOST = 1,
			E_SYNC_TIME_PREPARE_STATUS_CLIENT = 2,
		}

	}

	// CgsTimeManager.h:34
	const float_t KF_ONLINE_TIME_DIFFERENCE_TOLERANCE;

	// CgsTimeManager.h:35
	const int32_t KI_ONLINE_TIME_DIFFERENCE_MIN_PACKETS = 8;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct TimeManager {
		// CgsTimeManager.h:102
		enum EStartFrame {
			E_START_FRAME_CURRENT = 0,
			E_START_FRAME_PAST = 1,
			E_START_FRAME_INVALID = 2,
		}

		// CgsTimeManager.h:140
		enum ESyncTimePrepareStatus {
			E_SYNC_TIME_PREPARE_STATUS_NONE = 0,
			E_SYNC_TIME_PREPARE_STATUS_HOST = 1,
			E_SYNC_TIME_PREPARE_STATUS_CLIENT = 2,
		}

	}

	// CgsTimeManager.h:34
	const float_t KF_ONLINE_TIME_DIFFERENCE_TOLERANCE;

	// CgsTimeManager.h:35
	const int32_t KI_ONLINE_TIME_DIFFERENCE_MIN_PACKETS = 8;

}

// CgsTimeManager.h:42
struct CgsNetwork::TimeManager {
private:
	// CgsTimeManager.h:174
	SyncTimeClient mSyncTimeClient;

	// CgsTimeManager.h:175
	SyncTimeHost mSyncTimeHost;

	// CgsTimeManager.h:176
	SyncTimeMessageManager mSyncTimeMessageManager;

	// CgsTimeManager.h:177
	Time mNetworkTime;

	// CgsTimeManager.h:178
	Time mGlobalTime;

	// CgsTimeManager.h:180
	CgsNetwork::TimeManager::ESyncTimePrepareStatus meSyncTimePrepareStatus;

	// CgsTimeManager.h:181
	bool mbWeAreSyncingTime;

	// CgsTimeManager.h:185
	uint32_t muFrameCount;

	// CgsTimeManager.h:186
	uint16_t mu16StartFrame;

	// CgsTimeManager.h:187
	int32_t miStartFrameWrapCount;

	// CgsTimeManager.h:190
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsTimeManager.h:191
	int32_t miPlayersAdded;

public:
	// CgsTimeManager.h:47
	void Construct(CgsNetwork::PlayerManager *);

	// CgsTimeManager.h:50
	// Declaration
	bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTimeManager.cpp:72
		using namespace CgsDev::Message;

	}

	// CgsTimeManager.h:53
	void Update();

	// CgsTimeManager.h:56
	bool Release();

	// CgsTimeManager.h:59
	void Destruct();

	// CgsTimeManager.h:65
	void ResetNetworkTime();

	// CgsTimeManager.h:69
	void StartSyncingTime();

	// CgsTimeManager.h:73
	void StopSyncingTime();

	// CgsTimeManager.h:76
	Time GetNetworkTime() const;

	// CgsTimeManager.h:79
	bool IsTimeSynchronised() const;

	// CgsTimeManager.h:86
	// Declaration
	void OnHostMigration(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTimeManager.cpp:229
		using namespace CgsDev::Message;

	}

	// CgsTimeManager.h:91
	void AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, bool);

	// CgsTimeManager.h:95
	void RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsTimeManager.h:98
	void Disconnected();

	// CgsTimeManager.h:113
	// Declaration
	void SetStartFrame(CgsNetwork::TimeManager::EStartFrame, const Time *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTimeManager.cpp:354
		using namespace CgsDev::Message;

		// CgsTimeManager.cpp:356
		using namespace CgsDev::Message;

		// CgsTimeManager.cpp:376
		using namespace CgsDev::Message;

		// CgsTimeManager.cpp:377
		using namespace CgsDev::Message;

		// CgsTimeManager.cpp:383
		using namespace CgsDev::Message;

		// CgsTimeManager.cpp:385
		using namespace CgsDev::Message;

	}

	// CgsTimeManager.h:116
	bool HasStartFrameBeenSetValid();

	// CgsTimeManager.h:120
	void NextFrame(const TimerStatus *);

	// CgsTimeManager.h:123
	uint32_t GetFrameCount() const;

	// CgsTimeManager.h:126
	uint16_t GetU16FrameCount() const;

	// CgsTimeManager.h:129
	uint16_t GetU16FrameCountSinceStart() const;

	// CgsTimeManager.h:132
	int32_t GetFrameWrapCountSinceStart() const;

	// CgsTimeManager.h:136
	int32_t GetFramesSinceStart() const;

private:
	// CgsTimeManager.h:148
	void ReleaseSyncTimeManagers();

	// CgsTimeManager.h:153
	void PrepareSyncTimeManagers(bool, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsTimeManager.h:158
	uint16_t GetU16StartFrame() const;

	// CgsTimeManager.h:161
	int32_t GetStartFrameWrapCount() const;

	// CgsTimeManager.h:164
	int32_t CalculateFrameWrapCount() const;

	// CgsTimeManager.h:170
	void CalculateFrameCountAndWrapCount(uint32_t, uint16_t *, int32_t *) const;

}

