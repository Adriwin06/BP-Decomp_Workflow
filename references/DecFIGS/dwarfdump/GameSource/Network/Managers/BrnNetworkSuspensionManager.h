// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct SuspensionManager {
		// BrnNetworkSuspensionManager.h:51
		enum ESuspensionType {
			E_SUSPENSION_TYPE_OFFLINE = 0,
			E_SUSPENSION_TYPE_IN_GAME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

		// BrnNetworkSuspensionManager.h:95
		enum ESubState {
			E_SUBSTATE_SUSPENDING = 0,
			E_SUBSTATE_WAIT_TO_RESUME = 1,
			E_SUBSTATE_RESUMING = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnNetworkSuspensionManager.h:45
struct BrnNetwork::SuspensionManager {
private:
	// BrnNetworkSuspensionManager.h:104
	void (*)(bool, void *) mCallback;

	// BrnNetworkSuspensionManager.h:105
	void * mpUserData;

	// BrnNetworkSuspensionManager.h:107
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkSuspensionManager.h:109
	BrnNetwork::SuspensionManager::ESuspensionType meSuspensionType;

	// BrnNetworkSuspensionManager.h:110
	BrnNetwork::SuspensionManager::ESubState meSubState;

public:
	// BrnNetworkSuspensionManager.h:61
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkSuspensionManager.h:64
	bool Prepare();

	// BrnNetworkSuspensionManager.h:67
	bool Release();

	// BrnNetworkSuspensionManager.h:70
	void Destruct();

	// BrnNetworkSuspensionManager.h:73
	void Update();

	// BrnNetworkSuspensionManager.h:79
	void Suspend(BrnNetwork::SuspensionManager::ESuspensionType, void (*)(bool, void *), void *);

	// BrnNetworkSuspensionManager.h:84
	void Resume(void (*)(bool, void *), void *);

	// BrnNetworkSuspensionManager.h:88
	void Disconnected();

	// BrnNetworkSuspensionManager.h:91
	bool IsSuspending() const;

private:
	// BrnNetworkSuspensionManager.h:114
	void Finished(bool);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct SuspensionManager {
		// BrnNetworkSuspensionManager.h:51
		enum ESuspensionType {
			E_SUSPENSION_TYPE_OFFLINE = 0,
			E_SUSPENSION_TYPE_IN_GAME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

		// BrnNetworkSuspensionManager.h:95
		enum ESubState {
			E_SUBSTATE_SUSPENDING = 0,
			E_SUBSTATE_WAIT_TO_RESUME = 1,
			E_SUBSTATE_RESUMING = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct SuspensionManager {
		// BrnNetworkSuspensionManager.h:51
		enum ESuspensionType {
			E_SUSPENSION_TYPE_OFFLINE = 0,
			E_SUSPENSION_TYPE_IN_GAME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

		// BrnNetworkSuspensionManager.h:95
		enum ESubState {
			E_SUBSTATE_SUSPENDING = 0,
			E_SUBSTATE_WAIT_TO_RESUME = 1,
			E_SUBSTATE_RESUMING = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

