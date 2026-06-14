// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPS3 {
		// CgsNetworkAdapterPS3.h:86
		enum EPrepareState {
			E_PREPARE_INIT = 0,
			E_PREPARING_NETADAPTER = 1,
			E_FULLY_PREPARED = 2,
			E_PREPARING_COUNT = 3,
		}

	}

}

// CgsNetworkAdapterPS3.h:47
struct CgsNetwork::NetworkAdapterPS3 : public NetworkAdapterBase {
private:
	// CgsNetworkAdapterPS3.h:95
	CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs mProductIDs;

	// CgsNetworkAdapterPS3.h:96
	CgsNetwork::NetworkAdapterPS3::EPrepareState mePrepareState;

	// CgsNetworkAdapterPS3.h:97
	int32_t miTitleContextID;

	// CgsNetworkAdapterPS3.h:98
	bool mbConnected;

	// CgsNetworkAdapterPS3.h:99
	bool mbShutdownAllowed;

	// CgsNetworkAdapterPS3.h:100
	bool mbNeedToShutdown;

	// CgsNetworkAdapterPS3.h:103
	int32_t miIdlePerfMon;

	// CgsNetworkAdapterPS3.h:104
	int32_t miConnectPerfMon;

	// CgsNetworkAdapterPS3.h:105
	int32_t miSceNpLookupPerfMon;

	// CgsNetworkAdapterPS3.h:106
	int32_t miSceNpGetIdPerfMon;

	// CgsNetworkAdapterPS3.h:107
	int32_t miSceNpCreateTitlePerfMon;

	// CgsNetworkAdapterPS3.h:108
	int32_t miSceNpDestroyTitlePerfMon;

	// CgsNetworkAdapterPS3.h:109
	int32_t miSceNpLookupTermPerfMon;

	// CgsNetworkAdapterPS3.h:110
	int32_t miNetConnDisconnectPerfMon;

	// CgsNetworkAdapterPS3.h:111
	int32_t miServerInterfaceDisconnectPerfMon;

	// CgsNetworkAdapterPS3.h:112
	int32_t miNetworkAdapterBaseUpdatePerfMon;

public:
	// CgsNetworkAdapterPS3.h:51
	void Construct();

	// CgsNetworkAdapterPS3.h:57
	CgsNetwork::NetworkAdapterBase::ENetworkStatus Prepare(NetworkAdapterPrepareParams *);

	// CgsNetworkAdapterPS3.h:65
	void Update();

	// CgsNetworkAdapterPS3.h:68
	bool Release();

	// CgsNetworkAdapterPS3.h:71
	void Destruct();

	// CgsNetworkAdapterPS3.h:74
	int32_t GetTitleContextID() const;

	// CgsNetworkAdapterPS3.h:78
	bool GetNpId(SceNpUserInfo::SceNpId *) const;

	// CgsNetworkAdapterPS3.h:82
	void SetShutdownAllowed(bool);

private:
	// CgsNetworkAdapterPS3.h:116
	void ShutdownAdapter();

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPS3 {
		// CgsNetworkAdapterPS3.h:86
		enum EPrepareState {
			E_PREPARE_INIT = 0,
			E_PREPARING_NETADAPTER = 1,
			E_FULLY_PREPARED = 2,
			E_PREPARING_COUNT = 3,
		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPS3 {
		// CgsNetworkAdapterPS3.h:86
		enum EPrepareState {
			E_PREPARE_INIT = 0,
			E_PREPARING_NETADAPTER = 1,
			E_FULLY_PREPARED = 2,
			E_PREPARING_COUNT = 3,
		}

	}

}

