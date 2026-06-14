// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkModuleStatsIOInterface.h:33
		const int KI_STATS_EVENT_QUEUE_SIZE = 16;

		// BrnNetworkModuleStatsIOInterface.h:34
		const int KI_STATS_OUTPUT_BUFFER_SIZE = 16;

	}

}

// BrnNetworkModuleStatsIOInterface.h:53
struct BrnNetwork::BrnNetworkModuleIO::StatsInputInterface {
	// BrnNetworkModuleStatsIOInterface.h:42
	typedef EventQueue<BrnNetwork::StatsRequestEvent,16> StatsInputQueue;

private:
	// BrnNetworkModuleStatsIOInterface.h:71
	StatsInputInterface::StatsInputQueue mStatsEventQueue;

public:
	// BrnNetworkModuleStatsIOInterface.h:58
	void AppendStatsEvent(StatsRequestEvent *);

	// BrnNetworkModuleStatsIOInterface.h:61
	const StatsInputInterface::StatsInputQueue * GetStatsInputQueue() const;

	// BrnNetworkModuleStatsIOInterface.h:64
	void Construct();

	// BrnNetworkModuleStatsIOInterface.h:67
	void Clear();

}

// BrnNetworkModuleStatsIOInterface.h:84
struct BrnNetwork::BrnNetworkModuleIO::StatsOutputInterface {
	// BrnNetworkModuleStatsIOInterface.h:36
	typedef EventQueue<BrnNetwork::NetworkPlayerStats,16> StatsOutputQueue;

private:
	// BrnNetworkModuleStatsIOInterface.h:102
	StatsOutputInterface::StatsOutputQueue mStatsEventQueue;

public:
	// BrnNetworkModuleStatsIOInterface.h:89
	void AppendStatsEvent(NetworkPlayerStats *);

	// BrnNetworkModuleStatsIOInterface.h:92
	const StatsOutputInterface::StatsOutputQueue * GetStatsOutputQueue() const;

	// BrnNetworkModuleStatsIOInterface.h:95
	void Construct();

	// BrnNetworkModuleStatsIOInterface.h:98
	void Clear();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkModuleStatsIOInterface.h:33
		const int KI_STATS_EVENT_QUEUE_SIZE = 16;

		// BrnNetworkModuleStatsIOInterface.h:34
		const int KI_STATS_OUTPUT_BUFFER_SIZE = 16;

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// BrnNetworkModuleStatsIOInterface.h:33
		const int KI_STATS_EVENT_QUEUE_SIZE = 16;

		// BrnNetworkModuleStatsIOInterface.h:34
		const int KI_STATS_OUTPUT_BUFFER_SIZE = 16;

	}

}

