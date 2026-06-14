// CgsNetworkHostMigrationDebugComponent.h:50
void CgsNetwork::HostMigrationDebugComponent::HostMigrationDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkHostMigrationDebugComponent.h:50
struct CgsNetwork::HostMigrationDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsNetworkHostMigrationDebugComponent.h:78
	HostMigrationManager * mpHostMigrationManager;

	// CgsNetworkHostMigrationDebugComponent.h:79
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mLocalPlayerID;

public:
	// CgsNetworkHostMigrationDebugComponent.cpp:41
	void Construct(HostMigrationManager *);

	// CgsNetworkHostMigrationDebugComponent.cpp:62
	void Destruct();

protected:
	// CgsNetworkHostMigrationDebugComponent.cpp:78
	virtual void OnActivate();

	// CgsNetworkHostMigrationDebugComponent.h:106
	virtual const char * GetPath() const;

	// CgsNetworkHostMigrationDebugComponent.h:120
	virtual const char * GetName() const;

private:
	// CgsNetworkHostMigrationDebugComponent.cpp:124
	void UpdateLocalPlayerID(void *);

	// CgsNetworkHostMigrationDebugComponent.cpp:102
	void ForceHostMigration(void *);

}

