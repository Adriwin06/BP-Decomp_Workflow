// BrnNetworkNotificationManagerPS3.h:45
struct BrnNetwork::NetworkNotificationManagerPS3 : public BrnNetwork::NetworkNotificationManagerBase {
public:
	// BrnNetworkNotificationManagerPS3.cpp:56
	bool Prepare();

	// BrnNetworkNotificationManagerPS3.cpp:78
	bool Release();

	// BrnNetworkNotificationManagerPS3.cpp:97
	virtual void Connect();

	// BrnNetworkNotificationManagerPS3.cpp:111
	virtual void Disconnect();

private:
	// BrnNetworkNotificationManagerPS3.cpp:125
	virtual void ProcessNotifications();

}

// BrnNetworkNotificationManagerPS3.h:45
void BrnNetwork::NetworkNotificationManagerPS3::NetworkNotificationManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

