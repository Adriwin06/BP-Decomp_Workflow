// BrnNetworkNotificationManagerBase.h:43
struct BrnNetwork::NetworkNotificationManagerBase {
	int (*)(...) * _vptr.NetworkNotificationManagerBase;

protected:
	// BrnNetworkNotificationManagerBase.h:81
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

public:
	// BrnNetworkNotificationManagerBase.cpp:54
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkNotificationManagerBase.cpp:71
	bool Prepare();

	// BrnNetworkNotificationManagerBase.cpp:88
	bool Release();

	// BrnNetworkNotificationManagerBase.cpp:102
	void Destruct();

	// BrnNetworkNotificationManagerBase.cpp:157
	virtual void Connect();

	// BrnNetworkNotificationManagerBase.cpp:171
	virtual void Disconnect();

	// BrnNetworkNotificationManagerBase.cpp:115
	void Update();

protected:
	// BrnNetworkNotificationManagerBase.cpp:129
	void OnConnectionSignOut();

private:
	// BrnNetworkNotificationManagerBase.cpp:143
	virtual void ProcessNotifications();

}

// BrnNetworkNotificationManagerBase.h:43
void BrnNetwork::NetworkNotificationManagerBase::NetworkNotificationManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

