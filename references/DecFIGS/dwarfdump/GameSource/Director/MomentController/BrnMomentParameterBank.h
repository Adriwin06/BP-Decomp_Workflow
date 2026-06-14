// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentParameterBank {
		// BrnMomentParameterBank.h:53
		enum EMomentParamID {
			E_PARAM_NONE = 0,
			E_PARAM_HARD_STOP_DEFAULT = 1,
			E_PARAM_BYSTANDER_CLOSE_TAKEDOWN_ONLY = 2,
			E_PARAM_BYSTANDER_FAR_CRASH_ONLY = 3,
			E_PARAM_TUMBLING_TRUCKING_SIDE_CRASH_ONLY = 4,
			E_PARAM_TUMBLING_TRUCKING_SIDE_TAKEDOWN_ONLY = 5,
			E_PARAM_TUMBLING_TRUCKING_FRONT_CRASH_ONLY = 6,
			E_PARAM_TUMBLING_FOLLOW_CRASH_ONLY = 7,
			E_PARAM_TUMBLING_LEAD_CRASH_ONLY = 8,
			E_PARAM_TUMBLING_LEAD_TAKEDOWN_ONLY = 9,
			E_PARAM_TUMBLING_SIDE_CRASH_ONLY = 10,
		}

	}

}

// BrnMomentParameterBank.h:50
struct BrnDirector::MomentParameterBank {
private:
	// BrnMomentParameterBank.h:90
	BrnDirector::MomentHardStop::Parameters mParamsHardStopDefault;

	// BrnMomentParameterBank.h:92
	BrnDirector::MomentBystanderSeesAction::Parameters mParamsBystanderCloseTakedownOnly;

	// BrnMomentParameterBank.h:93
	BrnDirector::MomentBystanderSeesAction::Parameters mParamsBystanderFarCrashOnly;

	// BrnMomentParameterBank.h:95
	BrnDirector::MomentTumbling::Parameters mParamsTumblingTruckingSideCrashOnly;

	// BrnMomentParameterBank.h:96
	BrnDirector::MomentTumbling::Parameters mParamsTumblingTruckingSideTakedownOnly;

	// BrnMomentParameterBank.h:97
	BrnDirector::MomentTumbling::Parameters mParamsTumblingTruckingFrontCrashOnly;

	// BrnMomentParameterBank.h:98
	BrnDirector::MomentTumbling::Parameters mParamsTumblingFollowCrashOnly;

	// BrnMomentParameterBank.h:99
	BrnDirector::MomentTumbling::Parameters mParamsTumblingLeadCrashOnly;

	// BrnMomentParameterBank.h:100
	BrnDirector::MomentTumbling::Parameters mParamsTumblingLeadTakedownOnly;

	// BrnMomentParameterBank.h:101
	BrnDirector::MomentTumbling::Parameters mParamsTumblingSideCrashOnly;

public:
	// BrnMomentParameterBank.h:69
	void Construct();

	// BrnMomentParameterBank.h:72
	bool Prepare();

	// BrnMomentParameterBank.h:76
	void Update();

	// BrnMomentParameterBank.h:79
	bool Release();

	// BrnMomentParameterBank.h:82
	void Destruct();

	// BrnMomentParameterBank.h:86
	BrnDirector::Moment::Parameters * GetParameters(BrnDirector::MomentParameterBank::EMomentParamID);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct MomentParameterBank {
		// BrnMomentParameterBank.h:53
		enum EMomentParamID {
			E_PARAM_NONE = 0,
			E_PARAM_HARD_STOP_DEFAULT = 1,
			E_PARAM_BYSTANDER_CLOSE_TAKEDOWN_ONLY = 2,
			E_PARAM_BYSTANDER_FAR_CRASH_ONLY = 3,
			E_PARAM_TUMBLING_TRUCKING_SIDE_CRASH_ONLY = 4,
			E_PARAM_TUMBLING_TRUCKING_SIDE_TAKEDOWN_ONLY = 5,
			E_PARAM_TUMBLING_TRUCKING_FRONT_CRASH_ONLY = 6,
			E_PARAM_TUMBLING_FOLLOW_CRASH_ONLY = 7,
			E_PARAM_TUMBLING_LEAD_CRASH_ONLY = 8,
			E_PARAM_TUMBLING_LEAD_TAKEDOWN_ONLY = 9,
			E_PARAM_TUMBLING_SIDE_CRASH_ONLY = 10,
		}

	}

}

