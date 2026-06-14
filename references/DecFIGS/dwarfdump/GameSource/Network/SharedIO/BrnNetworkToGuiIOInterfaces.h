// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkToGuiIOInterfaces.h:32
		const int32_t KI_MAX_NETWORK_TO_GUI_QUEUE_LENGTH = 4;

	}

}

// BrnNetworkToGuiIOInterfaces.h:49
struct BrnNetwork::BrnNetworkModuleIO::NetworkToGuiInterface {
	// BrnNetworkToGuiIOInterfaces.h:38
	typedef EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4> LiveRevengeUpdateQueue;

private:
	// BrnNetworkToGuiIOInterfaces.h:74
	NetworkToGuiInterface::LiveRevengeUpdateQueue mLiveRevengeUpdateQueue;

public:
	// BrnNetworkToGuiIOInterfaces.h:54
	void Construct();

	// BrnNetworkToGuiIOInterfaces.h:58
	void Clear();

	// BrnNetworkToGuiIOInterfaces.h:66
	void AddLiveRevengeUpdate(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus, int32_t);

	// BrnNetworkToGuiIOInterfaces.h:70
	const NetworkToGuiInterface::LiveRevengeUpdateQueue * GetLiveRevengeUpdateQueue() const;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkToGuiIOInterfaces.h:32
		const int32_t KI_MAX_NETWORK_TO_GUI_QUEUE_LENGTH = 4;

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// BrnNetworkToGuiIOInterfaces.h:32
		const int32_t KI_MAX_NETWORK_TO_GUI_QUEUE_LENGTH = 4;

	}

}

