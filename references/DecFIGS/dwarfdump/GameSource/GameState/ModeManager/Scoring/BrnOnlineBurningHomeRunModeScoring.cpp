// BrnOnlineBurningHomeRunModeScoring.cpp:37
struct BrnGameState::ComparisonData {
	// BrnOnlineBurningHomeRunModeScoring.cpp:39
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnOnlineBurningHomeRunModeScoring.cpp:40
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnOnlineBurningHomeRunModeScoring.cpp:41
	Time mFinishTime;

	// BrnOnlineBurningHomeRunModeScoring.cpp:42
	Time mTimeAsRunner;

	// BrnOnlineBurningHomeRunModeScoring.cpp:43
	int32_t miTakedowns;

	// BrnOnlineBurningHomeRunModeScoring.cpp:44
	int32_t miNumberOfCumlativeCheckpoints;

	// BrnOnlineBurningHomeRunModeScoring.cpp:45
	bool mbCompletedBurningHomeRun;

	// BrnOnlineBurningHomeRunModeScoring.cpp:46
	bool mbTimedOut;

	// BrnOnlineBurningHomeRunModeScoring.cpp:47
	bool mbDisconnected;

}

