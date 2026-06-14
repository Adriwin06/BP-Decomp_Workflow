// BrnServerInterfaceTelemetry.h:61
struct BrnNetwork::BrnServerInterfaceTelemetry : public CgsNetwork::ServerInterfaceTelemetry {
private:
	// BrnServerInterfaceTelemetry.cpp:30
	extern EventDataKeys[50] maEventDataKeys;

public:
	// BrnServerInterfaceTelemetry.cpp:124
	virtual bool Prepare(CgsNetwork::ServerInterfaceDirtySock *, bool);

	// BrnServerInterfaceTelemetry.cpp:150
	virtual bool Release();

	// BrnServerInterfaceTelemetry.cpp:171
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	virtual void ~BrnServerInterfaceTelemetry();

}

// BrnServerInterfaceTelemetry.h:61
void BrnNetwork::BrnServerInterfaceTelemetry::~BrnServerInterfaceTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterfaceTelemetry.h:61
void BrnNetwork::BrnServerInterfaceTelemetry::BrnServerInterfaceTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

