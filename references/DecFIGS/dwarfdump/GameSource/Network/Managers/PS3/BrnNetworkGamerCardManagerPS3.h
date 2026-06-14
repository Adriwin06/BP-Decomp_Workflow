// BrnNetworkGamerCardManagerPS3.h:51
struct BrnNetwork::NetworkGamerCardManagerPS3 {
public:
	// BrnNetworkGamerCardManagerPS3.h:57
	void Construct(BrnNetwork::BrnServerInterface *);

	// BrnNetworkGamerCardManagerPS3.h:61
	bool Prepare();

	// BrnNetworkGamerCardManagerPS3.h:65
	bool Release();

	// BrnNetworkGamerCardManagerPS3.h:69
	void Destruct();

	// BrnNetworkGamerCardManagerPS3.h:73
	void ProcessBeforeSimulation();

	// BrnNetworkGamerCardManagerPS3.h:79
	void ShowGamerCard(uint32_t, const PlayerName *);

	// BrnNetworkGamerCardManagerPS3.h:83
	void Disconnected();

}

