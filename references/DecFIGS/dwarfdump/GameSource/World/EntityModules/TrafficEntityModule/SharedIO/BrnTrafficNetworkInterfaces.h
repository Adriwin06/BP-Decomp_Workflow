// BrnTrafficNetworkInterfaces.h:54
struct BrnTraffic::BrnTrafficIO::ActivateHullEvent {
	// BrnTrafficNetworkInterfaces.h:56
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnTrafficNetworkInterfaces.h:57
	uint16_t muNewActiveHull;

	// BrnTrafficNetworkInterfaces.h:58
	uint32_t muUpdateFrame;

}

// BrnTrafficNetworkInterfaces.h:71
struct BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface {
	// BrnTrafficNetworkInterfaces.h:60
	typedef EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> ActivateHullQueue;

private:
	// BrnTrafficNetworkInterfaces.h:100
	TrafficNetworkInputInterface::ActivateHullQueue mActivateHullQueue;

	// BrnTrafficNetworkInterfaces.h:103
	bool mbDiverged;

public:
	// BrnTrafficNetworkInterfaces.h:76
	void Construct();

	// BrnTrafficNetworkInterfaces.h:83
	void ActivateHull(EActiveRaceCarIndex, uint32_t, uint32_t);

	// BrnTrafficNetworkInterfaces.h:88
	const TrafficNetworkInputInterface::ActivateHullQueue & GetActivateHullQueue() const;

	// BrnTrafficNetworkInterfaces.h:92
	void SetDiverged(bool);

	// BrnTrafficNetworkInterfaces.h:95
	bool HasDiverged() const;

}

// BrnTrafficNetworkInterfaces.h:117
struct BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface {
private:
	// BrnTrafficNetworkInterfaces.h:175
	TrafficNetworkInputInterface::ActivateHullQueue mActivateHullQueue;

	// BrnTrafficNetworkInterfaces.h:176
	uint16_t[8] mau16ActiveHulls;

	// BrnTrafficNetworkInterfaces.h:178
	bool mbHashValid;

	// BrnTrafficNetworkInterfaces.h:179
	bool mbActiveHullsValid;

	// BrnTrafficNetworkInterfaces.h:180
	bool mbHullSyncDivergence;

	// BrnTrafficNetworkInterfaces.h:181
	uint16_t muHash;

	// BrnTrafficNetworkInterfaces.h:182
	uint32_t muHashUpdateFrame;

public:
	// BrnTrafficNetworkInterfaces.h:122
	void Construct();

	// BrnTrafficNetworkInterfaces.h:129
	void ActivateHull(EActiveRaceCarIndex, uint32_t, uint32_t);

	// BrnTrafficNetworkInterfaces.h:135
	void SetDataHash(uint32_t, uint16_t);

	// BrnTrafficNetworkInterfaces.h:141
	void SetActiveHull(EActiveRaceCarIndex, uint16_t);

	// BrnTrafficNetworkInterfaces.h:146
	void SetDetectedHullSyncDivergence(bool);

	// BrnTrafficNetworkInterfaces.h:151
	const TrafficNetworkInputInterface::ActivateHullQueue & GetActivateHullQueue() const;

	// BrnTrafficNetworkInterfaces.h:155
	bool HasHashBeenSet() const;

	// BrnTrafficNetworkInterfaces.h:159
	uint16_t GetDataHash() const;

	// BrnTrafficNetworkInterfaces.h:163
	uint32_t GetUpdateFrameForHash() const;

	// BrnTrafficNetworkInterfaces.h:167
	const uint16_t * GetActiveHulls() const;

	// BrnTrafficNetworkInterfaces.h:171
	bool GetDetectedHullSyncDivergence() const;

}

