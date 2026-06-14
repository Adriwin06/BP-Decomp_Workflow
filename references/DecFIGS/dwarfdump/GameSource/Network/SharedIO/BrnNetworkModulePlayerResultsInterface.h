// BrnNetworkModulePlayerResultsInterface.h:46
struct BrnNetwork::BrnNetworkModuleIO::PlayerResultsData {
	// BrnNetworkModulePlayerResultsInterface.h:49
	bool mbTimedOut;

	// BrnNetworkModulePlayerResultsInterface.h:50
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkModulePlayerResultsInterface.h:51
	EActiveRaceCarIndex meEliminatorIndex;

	// BrnNetworkModulePlayerResultsInterface.h:52
	float_t mfDistanceToFinish;

	// BrnNetworkModulePlayerResultsInterface.h:53
	Time mFinishTime;

	// BrnNetworkModulePlayerResultsInterface.h:54
	int32_t miEliminations;

public:
	// BrnNetworkModulePlayerResultsInterface.h:57
	void Clear();

}

// BrnNetworkModulePlayerResultsInterface.h:86
struct BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface {
private:
	// BrnNetworkModulePlayerResultsInterface.h:104
	PlayerResultsData[8] maPlayerResultsData;

public:
	// BrnNetworkModulePlayerResultsInterface.h:91
	void Clear();

	// BrnNetworkModulePlayerResultsInterface.h:96
	const PlayerResultsData * GetPlayerResultsData(int32_t) const;

	// BrnNetworkModulePlayerResultsInterface.h:101
	PlayerResultsData * GetPlayerResultsDataForWriting(int32_t);

}

