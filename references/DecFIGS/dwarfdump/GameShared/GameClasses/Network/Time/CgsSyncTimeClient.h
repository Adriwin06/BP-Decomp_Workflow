// CgsSyncTimeClient.h:38
struct CgsNetwork::SyncTimeClient {
	// CgsSyncTimeClient.h:41
	extern const int32_t KI_NUM_DELAYS_STORE = 4;

	// CgsSyncTimeClient.h:42
	extern const int32_t KI_NUM_TIME_DIFFS_STORE = 4;

private:
	// CgsSyncTimeClient.h:73
	SyncTimeMessageManager * mpSyncTimeMessageManager;

	// CgsSyncTimeClient.h:74
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsSyncTimeClient.h:75
	RoadRulesRecvData::NetworkPlayerID mHostPlayerID;

	// CgsSyncTimeClient.h:77
	float_t[4] mafDelays;

	// CgsSyncTimeClient.h:78
	float_t[4] mafTimeDifference;

	// CgsSyncTimeClient.h:79
	int32_t miNumTimePackets;

	// CgsSyncTimeClient.h:80
	uint8_t mu8NumTimePacketsStored;

	// CgsSyncTimeClient.h:81
	uint8_t mu8NumTimeDifferenceStored;

	// CgsSyncTimeClient.h:82
	uint16_t mu16LastSyncSentFrame;

	// CgsSyncTimeClient.h:84
	uint8_t mu8DelayHead;

	// CgsSyncTimeClient.h:85
	uint8_t mu8TimeDifferenceHead;

public:
	// CgsSyncTimeClient.h:47
	void Construct(CgsNetwork::PlayerManager *, SyncTimeMessageManager *);

	// CgsSyncTimeClient.h:52
	bool Prepare(RoadRulesRecvData::NetworkPlayerID);

	// CgsSyncTimeClient.h:58
	void Update(uint16_t, Time *, const Time *);

	// CgsSyncTimeClient.h:61
	bool Release();

	// CgsSyncTimeClient.h:64
	void Destruct();

	// CgsSyncTimeClient.h:69
	bool TimeIsSynchronised(Time, int32_t) const;

}

// CgsSyncTimeClient.h:41
extern const int32_t KI_NUM_DELAYS_STORE = 4;

// CgsSyncTimeClient.h:42
extern const int32_t KI_NUM_TIME_DIFFS_STORE = 4;

// CgsSyncTimeClient.h:38
struct CgsNetwork::SyncTimeClient {
	// CgsSyncTimeClient.h:41
	extern const int32_t KI_NUM_DELAYS_STORE = 4;

	// CgsSyncTimeClient.h:42
	extern const int32_t KI_NUM_TIME_DIFFS_STORE = 4;

private:
	// CgsSyncTimeClient.h:73
	SyncTimeMessageManager * mpSyncTimeMessageManager;

	// CgsSyncTimeClient.h:74
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsSyncTimeClient.h:75
	GuiEventNetworkLaunching::NetworkPlayerID mHostPlayerID;

	// CgsSyncTimeClient.h:77
	float_t[4] mafDelays;

	// CgsSyncTimeClient.h:78
	float_t[4] mafTimeDifference;

	// CgsSyncTimeClient.h:79
	int32_t miNumTimePackets;

	// CgsSyncTimeClient.h:80
	uint8_t mu8NumTimePacketsStored;

	// CgsSyncTimeClient.h:81
	uint8_t mu8NumTimeDifferenceStored;

	// CgsSyncTimeClient.h:82
	uint16_t mu16LastSyncSentFrame;

	// CgsSyncTimeClient.h:84
	uint8_t mu8DelayHead;

	// CgsSyncTimeClient.h:85
	uint8_t mu8TimeDifferenceHead;

public:
	// CgsSyncTimeClient.h:47
	void Construct(CgsNetwork::PlayerManager *, SyncTimeMessageManager *);

	// CgsSyncTimeClient.h:52
	bool Prepare(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsSyncTimeClient.h:58
	void Update(uint16_t, Time *, const Time *);

	// CgsSyncTimeClient.h:61
	bool Release();

	// CgsSyncTimeClient.h:64
	void Destruct();

	// CgsSyncTimeClient.h:69
	bool TimeIsSynchronised(Time, int32_t) const;

}

// CgsSyncTimeClient.h:38
struct CgsNetwork::SyncTimeClient {
	// CgsSyncTimeClient.h:41
	extern const int32_t KI_NUM_DELAYS_STORE = 4;

	// CgsSyncTimeClient.h:42
	extern const int32_t KI_NUM_TIME_DIFFS_STORE = 4;

private:
	// CgsSyncTimeClient.h:73
	SyncTimeMessageManager * mpSyncTimeMessageManager;

	// CgsSyncTimeClient.h:74
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsSyncTimeClient.h:75
	AggressiveMoveData::NetworkPlayerID mHostPlayerID;

	// CgsSyncTimeClient.h:77
	float_t[4] mafDelays;

	// CgsSyncTimeClient.h:78
	float_t[4] mafTimeDifference;

	// CgsSyncTimeClient.h:79
	int32_t miNumTimePackets;

	// CgsSyncTimeClient.h:80
	uint8_t mu8NumTimePacketsStored;

	// CgsSyncTimeClient.h:81
	uint8_t mu8NumTimeDifferenceStored;

	// CgsSyncTimeClient.h:82
	uint16_t mu16LastSyncSentFrame;

	// CgsSyncTimeClient.h:84
	uint8_t mu8DelayHead;

	// CgsSyncTimeClient.h:85
	uint8_t mu8TimeDifferenceHead;

public:
	// CgsSyncTimeClient.h:47
	void Construct(CgsNetwork::PlayerManager *, SyncTimeMessageManager *);

	// CgsSyncTimeClient.h:52
	bool Prepare(AggressiveMoveData::NetworkPlayerID);

	// CgsSyncTimeClient.h:58
	void Update(uint16_t, Time *, const Time *);

	// CgsSyncTimeClient.h:61
	bool Release();

	// CgsSyncTimeClient.h:64
	void Destruct();

	// CgsSyncTimeClient.h:69
	bool TimeIsSynchronised(Time, int32_t) const;

}

// CgsSyncTimeClient.h:38
struct CgsNetwork::SyncTimeClient {
	// CgsSyncTimeClient.h:41
	extern const int32_t KI_NUM_DELAYS_STORE = 4;

	// CgsSyncTimeClient.h:42
	extern const int32_t KI_NUM_TIME_DIFFS_STORE = 4;

private:
	// CgsSyncTimeClient.h:73
	SyncTimeMessageManager * mpSyncTimeMessageManager;

	// CgsSyncTimeClient.h:74
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsSyncTimeClient.h:75
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mHostPlayerID;

	// CgsSyncTimeClient.h:77
	float_t[4] mafDelays;

	// CgsSyncTimeClient.h:78
	float_t[4] mafTimeDifference;

	// CgsSyncTimeClient.h:79
	int32_t miNumTimePackets;

	// CgsSyncTimeClient.h:80
	uint8_t mu8NumTimePacketsStored;

	// CgsSyncTimeClient.h:81
	uint8_t mu8NumTimeDifferenceStored;

	// CgsSyncTimeClient.h:82
	uint16_t mu16LastSyncSentFrame;

	// CgsSyncTimeClient.h:84
	uint8_t mu8DelayHead;

	// CgsSyncTimeClient.h:85
	uint8_t mu8TimeDifferenceHead;

public:
	// CgsSyncTimeClient.h:47
	void Construct(CgsNetwork::PlayerManager *, SyncTimeMessageManager *);

	// CgsSyncTimeClient.h:52
	// Declaration
	bool Prepare(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSyncTimeClient.cpp:124
		using namespace CgsDev::Message;

	}

	// CgsSyncTimeClient.h:58
	void Update(uint16_t, Time *, const Time *);

	// CgsSyncTimeClient.h:61
	bool Release();

	// CgsSyncTimeClient.h:64
	void Destruct();

	// CgsSyncTimeClient.h:69
	bool TimeIsSynchronised(Time, int32_t) const;

}

