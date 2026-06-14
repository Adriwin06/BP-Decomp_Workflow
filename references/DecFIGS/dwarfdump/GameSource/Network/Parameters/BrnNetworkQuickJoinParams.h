// BrnNetworkQuickJoinParams.h:56
void BrnNetwork::QuickJoinParams::QuickJoinParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkQuickJoinParams.h:56
void BrnNetwork::QuickJoinParams::~QuickJoinParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkQuickJoinParams.h:37
	enum EBrnQuickJoinParameters {
		E_QUICKJOIN_SKILL_LEVEL = 0,
		E_QUICKJOIN_RANKED = 1,
		E_QUICKJOIN_FIREWALL_SETTING = 2,
		E_QUICKJOIN_FREEBURN = 3,
		E_QUICKJOIN_COUNT = 4,
	}

}

// BrnNetworkQuickJoinParams.h:56
struct BrnNetwork::QuickJoinParams : public CgsNetwork::ServerInterfaceQuickJoinParams {
public:
	// BrnNetworkQuickJoinParams.cpp:42
	virtual bool Prepare();

	// BrnNetworkQuickJoinParams.cpp:72
	void SetMatchmakingParameter(BrnNetwork::EBrnQuickJoinParameters, int32_t);

	// BrnNetworkQuickJoinParams.cpp:97
	void SetMatchmakingParameter(BrnNetwork::EBrnQuickJoinParameters, bool);

	virtual void ~QuickJoinParams();

}

