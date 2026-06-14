// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkToGuiLiveRevengeUpdate {
		// BrnNetworkToGuiEvents.h:45
		enum LiveRevengeStatus {
			E_LIVEREVENGESTATUS_NEWRIVALRY = 0,
			E_LIVEREVENGESTATUS_REIGNITED = 1,
			E_LIVEREVENGESTATUS_SETTLED = 2,
			E_LIVEREVENGESTATUS_AHEAD = 3,
			E_LIVEREVENGESTATUS_BEHIND = 4,
			E_LIVEREVENGESTATUS_COUNT = 5,
		}

	}

}

// BrnNetworkToGuiEvents.h:41
struct BrnNetwork::NetworkToGuiLiveRevengeUpdate {
	// BrnNetworkToGuiEvents.h:56
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnNetworkToGuiEvents.h:57
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnNetworkToGuiEvents.h:58
	BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus meNewStatus;

	// BrnNetworkToGuiEvents.h:59
	int32_t miDifference;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkToGuiLiveRevengeUpdate {
		// BrnNetworkToGuiEvents.h:45
		enum LiveRevengeStatus {
			E_LIVEREVENGESTATUS_NEWRIVALRY = 0,
			E_LIVEREVENGESTATUS_REIGNITED = 1,
			E_LIVEREVENGESTATUS_SETTLED = 2,
			E_LIVEREVENGESTATUS_AHEAD = 3,
			E_LIVEREVENGESTATUS_BEHIND = 4,
			E_LIVEREVENGESTATUS_COUNT = 5,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkToGuiLiveRevengeUpdate {
		// BrnNetworkToGuiEvents.h:45
		enum LiveRevengeStatus {
			E_LIVEREVENGESTATUS_NEWRIVALRY = 0,
			E_LIVEREVENGESTATUS_REIGNITED = 1,
			E_LIVEREVENGESTATUS_SETTLED = 2,
			E_LIVEREVENGESTATUS_AHEAD = 3,
			E_LIVEREVENGESTATUS_BEHIND = 4,
			E_LIVEREVENGESTATUS_COUNT = 5,
		}

	}

}

