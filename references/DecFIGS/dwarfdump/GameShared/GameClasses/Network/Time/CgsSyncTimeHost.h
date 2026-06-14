// CgsSyncTimeHost.h:40
struct CgsNetwork::SyncTimeHost {
private:
	// CgsSyncTimeHost.h:65
	SyncTimeMessageManager * mpSyncTimeMessageManager;

	// CgsSyncTimeHost.h:66
	CgsNetwork::PlayerManager * mpPlayerManager;

public:
	// CgsSyncTimeHost.h:46
	void Construct(CgsNetwork::PlayerManager *, SyncTimeMessageManager *);

	// CgsSyncTimeHost.h:50
	bool Prepare();

	// CgsSyncTimeHost.h:55
	void Update(uint16_t, Time);

	// CgsSyncTimeHost.h:58
	bool Release();

	// CgsSyncTimeHost.h:61
	void Destruct();

}

