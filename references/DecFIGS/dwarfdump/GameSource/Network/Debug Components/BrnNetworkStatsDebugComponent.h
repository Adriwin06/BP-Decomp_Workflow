// BrnNetworkStatsDebugComponent.h:53
struct BrnNetwork::StatsDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkStatsDebugComponent.h:122
	int32_t miRaceElo;

	// BrnNetworkStatsDebugComponent.h:123
	int32_t miBurningHomeRunElo;

	// BrnNetworkStatsDebugComponent.h:124
	int32_t miRoadRageElo;

	// BrnNetworkStatsDebugComponent.h:126
	CgsNetwork::ServerInterface * mpServerInterface;

	// BrnNetworkStatsDebugComponent.h:127
	NetworkPlayerStatsManager * mpStatsManager;

public:
	// BrnNetworkStatsDebugComponent.cpp:65
	void Construct();

	// BrnNetworkStatsDebugComponent.cpp:89
	bool Prepare(CgsNetwork::ServerInterface *, NetworkPlayerStatsManager *);

	// BrnNetworkStatsDebugComponent.cpp:134
	bool Release();

	// BrnNetworkStatsDebugComponent.cpp:163
	void Destruct();

	// BrnNetworkStatsDebugComponent.cpp:185
	virtual const char * GetName() const;

	// BrnNetworkStatsDebugComponent.cpp:200
	virtual const char * GetPath() const;

	// BrnNetworkStatsDebugComponent.cpp:215
	void AddStats(NetworkPlayerStats *);

	// BrnNetworkStatsDebugComponent.cpp:235
	void RemoveStats(NetworkPlayerStats *);

	// BrnNetworkStatsDebugComponent.cpp:114
	virtual void OnActivate();

private:
	// BrnNetworkStatsDebugComponent.cpp:253
	void GetELOFromServer(void *);

	// BrnNetworkStatsDebugComponent.cpp:288
	void SetELOOnServer(void *);

	// BrnNetworkStatsDebugComponent.cpp:326
	// Declaration
	void _GetEloCallbackFunction(void *, void *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStatsDebugComponent.cpp:334
		using namespace CgsDev::Message;

	}

	// BrnNetworkStatsDebugComponent.cpp:368
	// Declaration
	void _SetEloCallbackFunction(void *, void *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStatsDebugComponent.cpp:376
		using namespace CgsDev::Message;

	}

}

// BrnNetworkStatsDebugComponent.h:53
void BrnNetwork::StatsDebugComponent::StatsDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

