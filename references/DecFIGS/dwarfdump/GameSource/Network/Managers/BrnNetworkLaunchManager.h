// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LaunchManager {
		// BrnNetworkLaunchManager.h:49
		enum EStatus {
			E_STATUS_IDLE = 0,
			E_STATUS_BUSY = 1,
			E_STATUS_WAITING_FOR_LAUNCH = 2,
			E_STATUS_LAUNCHING = 3,
			E_STATUS_LAUNCHED = 4,
			E_STATUS_ERROR = 5,
			E_STATUS_COUNT = 6,
		}

		// BrnNetworkLaunchManager.h:97
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_RUNNING = 1,
			E_SUBSTATE_LOCKING = 2,
			E_SUBSTATE_SET_PLAYERS_TO_PLAYING = 3,
			E_SUBSTATE_UNLOCK_FROM_ERROR = 4,
			E_SUBSTATE_DOWNLOADING_STATS = 5,
			E_SUBSTATE_LAUNCHING = 6,
			E_SUBSTATE_SUSPENDING = 7,
			E_SUBSTATE_WAITING = 8,
			E_SUBSTATE_ERROR = 9,
			E_SUBSTATE_COUNT = 10,
		}

	}

}

// BrnNetworkLaunchManager.h:46
struct BrnNetwork::LaunchManager {
private:
	// BrnNetworkLaunchManager.h:113
	BrnNetwork::LaunchManager::EStatus (*)()[10] maUpdateFunctions;

	// BrnNetworkLaunchManager.h:115
	BrnNetwork::LaunchManager::ESubState meSubState;

	// BrnNetworkLaunchManager.h:117
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLaunchManager.h:119
	Time mTimeToStopWaiting;

	// BrnNetworkLaunchManager.h:120
	int32_t miNumPlayersSetPlaying;

public:
	// BrnNetworkLaunchManager.h:63
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkLaunchManager.h:66
	bool Prepare();

	// BrnNetworkLaunchManager.h:69
	bool Release();

	// BrnNetworkLaunchManager.h:72
	void Destruct();

	// BrnNetworkLaunchManager.h:75
	BrnNetwork::LaunchManager::EStatus Update();

	// BrnNetworkLaunchManager.h:78
	void Start();

	// BrnNetworkLaunchManager.h:81
	void Stop();

	// BrnNetworkLaunchManager.h:84
	void Reset();

	// BrnNetworkLaunchManager.h:88
	void Disconnected();

	// BrnNetworkLaunchManager.h:91
	void OnLeaveGame();

private:
	// BrnNetworkLaunchManager.h:125
	BrnNetwork::LaunchManager::EStatus UpdateNone();

	// BrnNetworkLaunchManager.h:128
	BrnNetwork::LaunchManager::EStatus UpdateRunning();

	// BrnNetworkLaunchManager.h:131
	BrnNetwork::LaunchManager::EStatus UpdateLocking();

	// BrnNetworkLaunchManager.h:134
	BrnNetwork::LaunchManager::EStatus UpdateSetPlayersToPlaying();

	// BrnNetworkLaunchManager.h:137
	BrnNetwork::LaunchManager::EStatus UpdateUnlockFromError();

	// BrnNetworkLaunchManager.h:140
	BrnNetwork::LaunchManager::EStatus UpdateDownloadingStats();

	// BrnNetworkLaunchManager.h:143
	BrnNetwork::LaunchManager::EStatus UpdateLaunching();

	// BrnNetworkLaunchManager.h:146
	BrnNetwork::LaunchManager::EStatus UpdateWaiting();

	// BrnNetworkLaunchManager.h:149
	BrnNetwork::LaunchManager::EStatus UpdateSuspending();

	// BrnNetworkLaunchManager.h:152
	BrnNetwork::LaunchManager::EStatus UpdateError();

	// BrnNetworkLaunchManager.h:157
	bool ServerInterfaceIdle();

	// BrnNetworkLaunchManager.h:163
	void SuspensionFinishedCallback(bool, void *);

}

// BrnNetworkLaunchManager.h:95
struct {
	// BrnNetworkLaunchManager.h:95
	BrnNetwork::LaunchManager::EStatus (*)() __pfn;

	// BrnNetworkLaunchManager.h:95
	int __delta;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct LaunchManager {
		// BrnNetworkLaunchManager.h:49
		enum EStatus {
			E_STATUS_IDLE = 0,
			E_STATUS_BUSY = 1,
			E_STATUS_WAITING_FOR_LAUNCH = 2,
			E_STATUS_LAUNCHING = 3,
			E_STATUS_LAUNCHED = 4,
			E_STATUS_ERROR = 5,
			E_STATUS_COUNT = 6,
		}

		// BrnNetworkLaunchManager.h:97
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_RUNNING = 1,
			E_SUBSTATE_LOCKING = 2,
			E_SUBSTATE_SET_PLAYERS_TO_PLAYING = 3,
			E_SUBSTATE_UNLOCK_FROM_ERROR = 4,
			E_SUBSTATE_DOWNLOADING_STATS = 5,
			E_SUBSTATE_LAUNCHING = 6,
			E_SUBSTATE_SUSPENDING = 7,
			E_SUBSTATE_WAITING = 8,
			E_SUBSTATE_ERROR = 9,
			E_SUBSTATE_COUNT = 10,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct LaunchManager {
		// BrnNetworkLaunchManager.h:49
		enum EStatus {
			E_STATUS_IDLE = 0,
			E_STATUS_BUSY = 1,
			E_STATUS_WAITING_FOR_LAUNCH = 2,
			E_STATUS_LAUNCHING = 3,
			E_STATUS_LAUNCHED = 4,
			E_STATUS_ERROR = 5,
			E_STATUS_COUNT = 6,
		}

		// BrnNetworkLaunchManager.h:97
		enum ESubState {
			E_SUBSTATE_NONE = 0,
			E_SUBSTATE_RUNNING = 1,
			E_SUBSTATE_LOCKING = 2,
			E_SUBSTATE_SET_PLAYERS_TO_PLAYING = 3,
			E_SUBSTATE_UNLOCK_FROM_ERROR = 4,
			E_SUBSTATE_DOWNLOADING_STATS = 5,
			E_SUBSTATE_LAUNCHING = 6,
			E_SUBSTATE_SUSPENDING = 7,
			E_SUBSTATE_WAITING = 8,
			E_SUBSTATE_ERROR = 9,
			E_SUBSTATE_COUNT = 10,
		}

	}

}

// BrnNetworkLaunchManager.h:46
struct BrnNetwork::LaunchManager {
private:
	// BrnNetworkLaunchManager.h:113
	BrnNetwork::LaunchManager::EStatus (*)()[10] maUpdateFunctions;

	// BrnNetworkLaunchManager.h:115
	BrnNetwork::LaunchManager::ESubState meSubState;

	// BrnNetworkLaunchManager.h:117
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLaunchManager.h:119
	Time mTimeToStopWaiting;

	// BrnNetworkLaunchManager.h:120
	int32_t miNumPlayersSetPlaying;

public:
	// BrnNetworkLaunchManager.h:63
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkLaunchManager.h:66
	bool Prepare();

	// BrnNetworkLaunchManager.h:69
	bool Release();

	// BrnNetworkLaunchManager.h:72
	void Destruct();

	// BrnNetworkLaunchManager.h:75
	BrnNetwork::LaunchManager::EStatus Update();

	// BrnNetworkLaunchManager.h:78
	// Declaration
	void Start() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:585
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:81
	// Declaration
	void Stop() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:601
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:84
	void Reset();

	// BrnNetworkLaunchManager.h:88
	void Disconnected();

	// BrnNetworkLaunchManager.h:91
	void OnLeaveGame();

private:
	// BrnNetworkLaunchManager.h:125
	BrnNetwork::LaunchManager::EStatus UpdateNone();

	// BrnNetworkLaunchManager.h:128
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateRunning() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:191
		using namespace CgsDev::Message;

		// BrnNetworkLaunchManager.cpp:197
		using namespace CgsDev::Message;

		// BrnNetworkLaunchManager.cpp:203
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:131
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateLocking() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:256
		using namespace CgsDev::Message;

		// BrnNetworkLaunchManager.cpp:266
		using namespace CgsDev::Message;

		// BrnNetworkLaunchManager.cpp:272
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:134
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateSetPlayersToPlaying() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:315
		using namespace CgsDev::Message;

		// BrnNetworkLaunchManager.cpp:325
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:137
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateUnlockFromError() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:366
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:140
	BrnNetwork::LaunchManager::EStatus UpdateDownloadingStats();

	// BrnNetworkLaunchManager.h:143
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateLaunching() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:459
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:146
	BrnNetwork::LaunchManager::EStatus UpdateWaiting();

	// BrnNetworkLaunchManager.h:149
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateSuspending() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:517
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:152
	// Declaration
	BrnNetwork::LaunchManager::EStatus UpdateError() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:563
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:157
	// Declaration
	bool ServerInterfaceIdle() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:655
		using namespace CgsDev::Message;

	}

	// BrnNetworkLaunchManager.h:163
	// Declaration
	void SuspensionFinishedCallback(bool, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLaunchManager.cpp:693
		using namespace CgsDev::Message;

	}

}

