// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct BrnServerInterfacePS3 {
		// BrnServerInterfacePS3.h:47
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_BASECLASS = 1,
			E_PREPARESTAGE_GAMES_COMPONENT = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// BrnServerInterfacePS3.h:55
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_GAMES_COMPONENT = 1,
			E_RELEASESTAGE_BASECLASS = 2,
			E_RELEASESTAGE_DONE = 3,
		}

	}

}

// BrnServerInterfacePS3.h:44
struct BrnNetwork::BrnServerInterfacePS3 : public BrnNetwork::BrnServerInterfaceBase {
private:
	// BrnServerInterfacePS3.h:96
	CgsNetwork::ServerInterfaceGamesPS3 mGames;

	// BrnServerInterfacePS3.h:98
	BrnNetwork::BrnServerInterfacePS3::EPrepareStage mePrepareStage;

	// BrnServerInterfacePS3.h:99
	BrnNetwork::BrnServerInterfacePS3::EReleaseStage meReleaseStage;

public:
	// BrnServerInterfacePS3.cpp:44
	virtual void Construct();

	// BrnServerInterfacePS3.cpp:66
	virtual bool Prepare(ServerInterfacePrepareParams *);

	// BrnServerInterfacePS3.cpp:130
	virtual bool Release();

	// BrnServerInterfacePS3.cpp:188
	virtual void Destruct();

	// BrnServerInterfacePS3.cpp:207
	virtual void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnServerInterfacePS3.cpp:224
	virtual void Suspend(int32_t);

	// BrnServerInterfacePS3.cpp:242
	virtual void Resume();

	virtual void ~BrnServerInterfacePS3();

}

// BrnServerInterfacePS3.h:44
void BrnNetwork::BrnServerInterfacePS3::~BrnServerInterfacePS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterfacePS3.h:44
void BrnNetwork::BrnServerInterfacePS3::BrnServerInterfacePS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

