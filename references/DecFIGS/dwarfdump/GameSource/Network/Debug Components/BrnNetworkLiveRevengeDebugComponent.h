// BrnNetworkLiveRevengeDebugComponent.h:48
struct BrnNetwork::LiveRevengeDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkLiveRevengeDebugComponent.h:119
	LiveRevengeManager * mpLiveRevengeManager;

public:
	// BrnNetworkLiveRevengeDebugComponent.cpp:46
	void Construct(LiveRevengeManager *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:63
	bool Prepare();

	// BrnNetworkLiveRevengeDebugComponent.cpp:94
	bool Release();

	// BrnNetworkLiveRevengeDebugComponent.cpp:109
	void Destruct();

	// BrnNetworkLiveRevengeDebugComponent.cpp:77
	virtual void OnActivate();

	// BrnNetworkLiveRevengeDebugComponent.cpp:178
	void AddPlayer(LiveRevengeRelationship *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:201
	void RemovePlayer(LiveRevengeRelationship *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:218
	virtual const char * GetName() const;

	// BrnNetworkLiveRevengeDebugComponent.cpp:231
	virtual const char * GetPath() const;

private:
	// BrnNetworkLiveRevengeDebugComponent.cpp:124
	void RegisterRelationship(CommonRelationship *, const char *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:153
	void UnregisterRelationship(CommonRelationship *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:244
	void RegisterAll(void *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:271
	void UnregisterAll(void *);

	// BrnNetworkLiveRevengeDebugComponent.cpp:298
	void UploadToServer(void *);

}

// BrnNetworkLiveRevengeDebugComponent.h:48
void BrnNetwork::LiveRevengeDebugComponent::LiveRevengeDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

