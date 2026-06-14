// BrnNetworkConnectionManager.h:47
struct BrnNetwork::ConnectionManager {
private:
	// BrnNetworkConnectionManager.h:68
	extern const float32_t KF_UN_NAT_KICK_TIMEOUT;

	// BrnNetworkConnectionManager.h:70
	Time mLastKickTime;

	// BrnNetworkConnectionManager.h:72
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

public:
	// BrnNetworkConnectionManager.h:52
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkConnectionManager.h:55
	bool Prepare();

	// BrnNetworkConnectionManager.h:58
	bool Release();

	// BrnNetworkConnectionManager.h:61
	void Destruct();

	// BrnNetworkConnectionManager.h:64
	void Update();

private:
	// BrnNetworkConnectionManager.h:77
	void UpdateNATData();

	// BrnNetworkConnectionManager.h:81
	void KickUnNATablePlayer(RoadRulesRecvData::NetworkPlayerID);

}

// BrnNetworkConnectionManager.h:68
extern const float32_t KF_UN_NAT_KICK_TIMEOUT;

// BrnNetworkConnectionManager.h:47
struct BrnNetwork::ConnectionManager {
private:
	// BrnNetworkConnectionManager.h:68
	extern const float32_t KF_UN_NAT_KICK_TIMEOUT;

	// BrnNetworkConnectionManager.h:70
	Time mLastKickTime;

	// BrnNetworkConnectionManager.h:72
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

public:
	// BrnNetworkConnectionManager.h:52
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkConnectionManager.h:55
	bool Prepare();

	// BrnNetworkConnectionManager.h:58
	bool Release();

	// BrnNetworkConnectionManager.h:61
	void Destruct();

	// BrnNetworkConnectionManager.h:64
	void Update();

private:
	// BrnNetworkConnectionManager.h:77
	void UpdateNATData();

	// BrnNetworkConnectionManager.h:81
	void KickUnNATablePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

}

// BrnNetworkConnectionManager.h:47
struct BrnNetwork::ConnectionManager {
private:
	// BrnNetworkConnectionManager.h:68
	extern const float32_t KF_UN_NAT_KICK_TIMEOUT;

	// BrnNetworkConnectionManager.h:70
	Time mLastKickTime;

	// BrnNetworkConnectionManager.h:72
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

public:
	// BrnNetworkConnectionManager.h:52
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkConnectionManager.h:55
	bool Prepare();

	// BrnNetworkConnectionManager.h:58
	bool Release();

	// BrnNetworkConnectionManager.h:61
	void Destruct();

	// BrnNetworkConnectionManager.h:64
	void Update();

private:
	// BrnNetworkConnectionManager.h:77
	void UpdateNATData();

	// BrnNetworkConnectionManager.h:81
	// Declaration
	void KickUnNATablePlayer(AggressiveMoveData::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkConnectionManager.cpp:242
		using namespace CgsDev::Message;

		// BrnNetworkConnectionManager.cpp:255
		using namespace CgsDev::Message;

	}

}

