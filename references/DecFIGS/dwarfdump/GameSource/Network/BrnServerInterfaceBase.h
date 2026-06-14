// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnServerInterfaceBase {
	public:
		// BrnServerInterfaceBase.h:263
		BrnNetwork::ServerInterfaceCustomCommands * GetCustomCommandsComponent();

		// BrnServerInterfaceBase.h:251
		BrnNetwork::BrnServerInterfaceDownloadableConfig * GetDownloadableConfigComponent();

		// BrnServerInterfaceBase.h:257
		BrnNetwork::BrnServerInterfaceTelemetry * GetTelemetryComponent();

		// BrnServerInterfaceBase.h:270
		BrnNetwork::ServerInterfaceDebugComponent * GetDebugComponent();

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct BrnServerInterfaceBase {
		// BrnServerInterfaceBase.h:84
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_BASECLASS = 1,
			E_PREPARESTAGE_CONNECTION_COMPONENT = 2,
			E_PREPARESTAGE_PLAYER_INFO_COMPONENT = 3,
			E_PREPARESTAGE_BROADCAST_MESSAGES_COMPONENT = 4,
			E_PREPARESTAGE_HTTP_COMPONENT = 5,
			E_PREPARESTAGE_SERVERINFO_COMPONENT = 6,
			E_PREPARESTAGE_DOWNLOADABLECONFIG_COMPONENT = 7,
			E_PREPARESTAGE_TELEMETRY_COMPONENT = 8,
			E_PREPARESTAGE_RANKINGS_COMPONENT = 9,
			E_PREPARESTAGE_CUSTOM_COMMANDS_COMPONENT = 10,
			E_PREPARESTAGE_USERSETS_COMPONENT = 11,
			E_PREPARESTAGE_PING_REGIONS_COMPONENT = 12,
			E_PREPARESTAGE_DONE = 13,
		}

		// BrnServerInterfaceBase.h:102
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_PING_REGIONS_COMPONENT = 1,
			E_RELEASESTAGE_USERSETS_COMPONENT = 2,
			E_RELEASESTAGE_CUSTOM_COMMANDS_COMPONENT = 3,
			E_RELEASESTAGE_RANKINGS_COMPONENT = 4,
			E_RELEASESTAGE_TELEMETRY_COMPONENT = 5,
			E_RELEASESTAGE_DOWNLOADABLECONFIG_COMPONENT = 6,
			E_RELEASESTAGE_SERVERINFO_COMPONENT = 7,
			E_RELEASESTAGE_HTTP_COMPONENT = 8,
			E_RELEASESTAGE_BROADCAST_MESSAGES_COMPONENT = 9,
			E_RELEASESTAGE_PLAYER_INFO_COMPONENT = 10,
			E_RELEASESTAGE_CONNECTION_COMPONENT = 11,
			E_RELEASESTAGE_BASECLASS = 12,
			E_RELEASESTAGE_DONE = 13,
		}

	}

}

// BrnServerInterfaceBase.h:77
struct BrnNetwork::BrnServerInterfaceBase : public CgsNetwork::ServerInterface {
private:
	// BrnServerInterfaceBase.h:200
	CgsNetwork::ServerInterfaceConnection mConnection;

	// BrnServerInterfaceBase.h:201
	CgsNetwork::ServerInterfacePlayerInfo mPlayerInfo;

	// BrnServerInterfaceBase.h:202
	CgsNetwork::ServerInterfaceBroadcastMessages mBroadcastMessages;

	// BrnServerInterfaceBase.h:203
	CgsNetwork::ServerInterfaceHttp mHttp;

	// BrnServerInterfaceBase.h:204
	CgsNetwork::ServerInterfaceServerInfo mServerInfo;

	// BrnServerInterfaceBase.h:205
	CgsNetwork::ServerInterfaceUsersets mUsersets;

	// BrnServerInterfaceBase.h:206
	CgsNetwork::ServerInterfacePingRegions mPingRegions;

	// BrnServerInterfaceBase.h:207
	BrnServerInterfaceDownloadableConfig mDownloadableConfig;

	// BrnServerInterfaceBase.h:208
	BrnServerInterfaceTelemetry mTelemetry;

	// BrnServerInterfaceBase.h:209
	CgsNetwork::ServerInterfaceRankings mRankings;

	// BrnServerInterfaceBase.h:210
	ServerInterfaceCustomCommands mCustomCommands;

	// BrnServerInterfaceBase.h:213
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnServerInterfaceBase.h:215
	BrnNetwork::BrnServerInterfaceBase::EPrepareStage mePrepareStage;

	// BrnServerInterfaceBase.h:216
	BrnNetwork::BrnServerInterfaceBase::EReleaseStage meReleaseStage;

	// BrnServerInterfaceBase.h:219
	ServerInterfaceDebugComponent mServerInterfaceDebugComponent;

	// BrnServerInterfaceBase.h:223
	int32_t miNetworkServerInterfaceBasePM1;

	// BrnServerInterfaceBase.h:224
	int32_t miNetworkServerInterfaceBasePM2;

	// BrnServerInterfaceBase.h:225
	int32_t miNetworkServerInterfaceBasePM3;

	// BrnServerInterfaceBase.h:226
	int32_t miNetworkServerInterfaceBasePM4;

	// BrnServerInterfaceBase.h:227
	int32_t miNetworkServerInterfaceBasePM5;

	// BrnServerInterfaceBase.h:228
	int32_t miNetworkServerInterfaceBasePM6;

	// BrnServerInterfaceBase.h:229
	int32_t miNetworkServerInterfaceBasePM7;

	// BrnServerInterfaceBase.h:230
	int32_t miNetworkServerInterfaceBasePM8;

	// BrnServerInterfaceBase.h:231
	int32_t miNetworkServerInterfaceBasePM9;

	// BrnServerInterfaceBase.h:232
	int32_t miNetworkServerInterfaceBasePM10;

	// BrnServerInterfaceBase.h:233
	int32_t miNetworkServerInterfaceBasePM11;

public:
	// BrnServerInterfaceBase.cpp:51
	virtual void Construct();

	// BrnServerInterfaceBase.cpp:117
	virtual bool Prepare(ServerInterfacePrepareParams *);

	// BrnServerInterfaceBase.cpp:308
	virtual bool Release();

	// BrnServerInterfaceBase.cpp:483
	virtual void Destruct();

	// BrnServerInterfaceBase.cpp:517
	virtual void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnServerInterfaceBase.cpp:578
	virtual void Suspend(int32_t);

	// BrnServerInterfaceBase.cpp:604
	virtual void Resume();

	// BrnServerInterfaceBase.cpp:632
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnServerInterfaceBase.h:245
	void SetNetworkManager(BrnNetwork::BrnNetworkManager *);

	// BrnServerInterfaceBase.h:251
	BrnServerInterfaceDownloadableConfig * GetDownloadableConfigComponent();

	// BrnServerInterfaceBase.h:257
	BrnServerInterfaceTelemetry * GetTelemetryComponent();

	// BrnServerInterfaceBase.h:263
	BrnNetwork::ServerInterfaceCustomCommands * GetCustomCommandsComponent();

	// BrnServerInterfaceBase.h:270
	ServerInterfaceDebugComponent * GetDebugComponent();

	virtual void ~BrnServerInterfaceBase();

}

// BrnServerInterfaceBase.h:77
void BrnNetwork::BrnServerInterfaceBase::~BrnServerInterfaceBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterfaceBase.h:77
void BrnNetwork::BrnServerInterfaceBase::BrnServerInterfaceBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

