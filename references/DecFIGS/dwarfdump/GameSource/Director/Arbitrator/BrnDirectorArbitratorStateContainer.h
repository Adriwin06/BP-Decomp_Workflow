// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbitratorStateContainer {
		// BrnDirectorArbitratorStateContainer.h:65
		enum EState {
			E_STATE_DRIVETHRU = 0,
			E_STATE_ROAMING = 1,
			E_STATE_CRASHING = 2,
			E_STATE_TAKEDOWN = 3,
			E_STATE_CRASH_MODE = 4,
			E_STATE_POST_EVENT = 5,
			E_STATE_RACE_INTRO = 6,
			E_STATE_ONLINE_RACE_INTRO = 7,
			E_STATE_CAR_SELECT = 8,
			E_STATE_RANK_UP = 9,
			E_STATE_ONLINE_CAR_SELECT = 10,
			E_NUM_STATES = 11,
		}

	}

}

// BrnDirectorArbitratorStateContainer.h:46
struct BrnDirector::ArbitratorStateContainer {
	// BrnDirectorArbitratorStateContainer.h:50
	SharedPlaylists mSharedPlaylists;

	// BrnDirectorArbitratorStateContainer.h:53
	BrnDirector::ArbStateRoaming mArbStateRoaming;

	// BrnDirectorArbitratorStateContainer.h:54
	BrnDirector::ArbStateCrashing mArbStateCrashing;

	// BrnDirectorArbitratorStateContainer.h:55
	BrnDirector::ArbStateTakedown mArbStateTakedown;

	// BrnDirectorArbitratorStateContainer.h:56
	BrnDirector::ArbStateCrashMode mArbStateCrashMode;

	// BrnDirectorArbitratorStateContainer.h:57
	BrnDirector::ArbStatePostEvent mArbStatePostEvent;

	// BrnDirectorArbitratorStateContainer.h:58
	BrnDirector::ArbStateRaceIntro mArbStateRaceIntro;

	// BrnDirectorArbitratorStateContainer.h:59
	BrnDirector::ArbStateOnlineRaceIntro mArbStateOnlineRaceIntro;

	// BrnDirectorArbitratorStateContainer.h:60
	BrnDirector::ArbStateDriveThru mArbStateDriveThru;

	// BrnDirectorArbitratorStateContainer.h:61
	BrnDirector::ArbStateCarSelect mArbStateCarSelect;

	// BrnDirectorArbitratorStateContainer.h:62
	BrnDirector::ArbStateRankUp mArbStateRankUp;

	// BrnDirectorArbitratorStateContainer.h:63
	BrnDirector::ArbStateOnlineCarSelect mArbStateOnlineCarSelect;

private:
	// BrnDirectorArbitratorStateContainer.h:114
	BrnDirector::ArbitratorState *[11] mArrayOfStatePointers;

	// BrnDirectorArbitratorStateContainer.h:115
	BrnDirector::ArbitratorState * mpCurrentState;

public:
	// BrnDirectorArbitratorStateContainer.h:87
	void ConstructAll();

	// BrnDirectorArbitratorStateContainer.h:91
	void UpdateAll(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorStateContainer.h:95
	void ReleaseAll(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorStateContainer.h:98
	BrnDirector::ArbitratorState * &[11] GetArrayOfStatePointers();

	// BrnDirectorArbitratorStateContainer.h:101
	BrnDirector::ArbitratorState & GetCurrentState();

	// BrnDirectorArbitratorStateContainer.h:104
	const BrnDirector::ArbitratorState & GetCurrentState() const;

	// BrnDirectorArbitratorStateContainer.h:108
	void ChangeToState(BrnDirector::ArbitratorStateContainer::EState);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ArbitratorStateContainer {
		// BrnDirectorArbitratorStateContainer.h:65
		enum EState {
			E_STATE_DRIVETHRU = 0,
			E_STATE_ROAMING = 1,
			E_STATE_CRASHING = 2,
			E_STATE_TAKEDOWN = 3,
			E_STATE_CRASH_MODE = 4,
			E_STATE_POST_EVENT = 5,
			E_STATE_RACE_INTRO = 6,
			E_STATE_ONLINE_RACE_INTRO = 7,
			E_STATE_CAR_SELECT = 8,
			E_STATE_RANK_UP = 9,
			E_STATE_ONLINE_CAR_SELECT = 10,
			E_NUM_STATES = 11,
		}

	}

}

