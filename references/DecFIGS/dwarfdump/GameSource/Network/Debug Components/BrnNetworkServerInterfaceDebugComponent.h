// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct ServerInterfaceDebugComponent {
	public:
		// BrnNetworkServerInterfaceDebugComponent.h:109
		void SetConnectionType(CgsNetwork::ServerInterfaceGames::EGameServerConnectionType);

		// BrnNetworkServerInterfaceDebugComponent.h:115
		CgsNetwork::ServerInterfaceGames::EGameServerConnectionType GetConnectionType() const;

	}

}

// BrnNetworkServerInterfaceDebugComponent.h:47
struct BrnNetwork::ServerInterfaceDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkServerInterfaceDebugComponent.h:94
	int32_t miConnectionType;

	// BrnNetworkServerInterfaceDebugComponent.h:95
	BrnNetwork::BrnServerInterfaceBase * mpServerInterfaceBase;

	// BrnNetworkServerInterfaceDebugComponent.h:96
	bool mbDisconnectNextUpdate;

public:
	// BrnNetworkServerInterfaceDebugComponent.cpp:52
	void Construct(BrnNetwork::BrnServerInterfaceBase *);

	// BrnNetworkServerInterfaceDebugComponent.cpp:73
	bool Prepare();

	// BrnNetworkServerInterfaceDebugComponent.cpp:91
	bool Release();

	// BrnNetworkServerInterfaceDebugComponent.cpp:107
	void Destruct();

	// BrnNetworkServerInterfaceDebugComponent.cpp:126
	virtual void Update();

	// BrnNetworkServerInterfaceDebugComponent.h:109
	void SetConnectionType(CgsNetwork::ServerInterfaceGames::EGameServerConnectionType);

	// BrnNetworkServerInterfaceDebugComponent.h:115
	CgsNetwork::ServerInterfaceGames::EGameServerConnectionType GetConnectionType() const;

protected:
	// BrnNetworkServerInterfaceDebugComponent.cpp:192
	virtual void OnActivate();

	// BrnNetworkServerInterfaceDebugComponent.cpp:145
	virtual const char * GetName() const;

	// BrnNetworkServerInterfaceDebugComponent.cpp:158
	virtual const char * GetPath() const;

private:
	// BrnNetworkServerInterfaceDebugComponent.cpp:172
	void Disconnect(void *);

}

// BrnNetworkServerInterfaceDebugComponent.h:47
void BrnNetwork::ServerInterfaceDebugComponent::ServerInterfaceDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

