// BrnNetworkRoadRulesManagerDebugComponent.h:48
struct BrnNetwork::RoadRulesManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkRoadRulesManagerDebugComponent.h:75
	NetworkRoadRulesManager * mpRoadRulesManager;

public:
	// BrnNetworkRoadRulesManagerDebugComponent.cpp:44
	void Construct(NetworkRoadRulesManager *);

	// BrnNetworkRoadRulesManagerDebugComponent.cpp:60
	void Destruct();

protected:
	// BrnNetworkRoadRulesManagerDebugComponent.cpp:74
	virtual const char * GetName() const;

	// BrnNetworkRoadRulesManagerDebugComponent.cpp:86
	virtual const char * GetPath() const;

	// BrnNetworkRoadRulesManagerDebugComponent.cpp:123
	virtual void OnActivate();

private:
	// BrnNetworkRoadRulesManagerDebugComponent.cpp:99
	void TriggerPersonalBest(void *);

	// BrnNetworkRoadRulesManagerDebugComponent.cpp:137
	void RequestRoadRulesHighScores(void *);

}

// BrnNetworkRoadRulesManagerDebugComponent.h:48
void BrnNetwork::RoadRulesManagerDebugComponent::RoadRulesManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

