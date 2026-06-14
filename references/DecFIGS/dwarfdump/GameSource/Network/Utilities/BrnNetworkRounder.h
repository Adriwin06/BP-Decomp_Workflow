// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkRounder.h:30
	const float32_t KF_NETWORK_TIME_ACCURACY;

	// BrnNetworkRounder.h:31
	const float32_t KF_NETWORK_DISTANCE_ACCURACY;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkRounder.h:30
	const float32_t KF_NETWORK_TIME_ACCURACY;

	// BrnNetworkRounder.h:31
	const float32_t KF_NETWORK_DISTANCE_ACCURACY;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkRounder.h:30
	const float32_t KF_NETWORK_TIME_ACCURACY;

	// BrnNetworkRounder.h:31
	const float32_t KF_NETWORK_DISTANCE_ACCURACY;

}

// BrnNetworkRounder.h:46
struct BrnNetwork::NetworkRounder {
public:
	// BrnNetworkRounder.h:53
	void RoundDistanceToNetworkAccuracy(float32_t *);

	// BrnNetworkRounder.h:59
	void RoundTimeToNetworkAccuracy(Time *);

	// BrnNetworkRounder.h:65
	void RoundFloatToAccuracy(float32_t *, float32_t);

}

