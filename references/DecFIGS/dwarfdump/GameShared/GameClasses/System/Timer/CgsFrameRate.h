// CgsTimeUtils.h:32
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsTime.h:24
namespace CgsSystem {
	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsTime.h:24
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsFrameRate.h:61
struct CgsSystem::FrameRateManager {
protected:
	// CgsFrameRate.h:99
	CgsSystem::EFrameRateManagerType meFramerateType;

	// CgsFrameRate.h:102
	int64_t mi64PrevFrameTime;

	// CgsFrameRate.h:103
	int64_t mi64TotalTime;

	// CgsFrameRate.h:106
	int64_t mi64FramerateToleranceCycles;

	// CgsFrameRate.h:107
	int64_t mi64SimulationTimeStepCycles;

	// CgsFrameRate.h:108
	int32_t miPrevNumSimulationStepsRequired;

	// CgsFrameRate.h:109
	int32_t miNumSimulationSteps;

	// CgsFrameRate.h:110
	int32_t miNumExtraSimulationUpdatesRequested;

	// CgsFrameRate.h:111
	bool mbPaused;

	// CgsFrameRate.h:112
	bool mbIsSimulationRunningInRealTime;

public:
	// CgsFrameRate.h:66
	void Construct(float32_t, float32_t);

	// CgsFrameRate.h:69
	void Destruct();

	// CgsFrameRate.h:72
	bool Prepare();

	// CgsFrameRate.h:75
	bool Release();

	// CgsFrameRate.h:80
	void StartUpdateFrame(CgsSystem::EFrameRateManagerType, bool);

	// CgsFrameRate.h:85
	int32_t UpdatePostRenderWait(int32_t, int32_t);

	// CgsFrameRate.h:89
	void AttemptToInsertExtraSimulationUpdates(int32_t);

	// CgsFrameRate.h:93
	void SetNumSimulationStepsAchieved(int32_t);

	// CgsFrameRate.h:96
	bool IsSimulationRunningInRealTime();

}

// CgsTimeUtils.h:32
namespace CgsSystem {
	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsAssertManager.h:30
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

}

// CgsTime.h:24
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

}

// CgsAssertManager.h:30
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsFrameRate.h:25
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

	struct Time;

	struct DateAndTime;

	struct TimerStatus;

	struct ThreadLayout;

}

// CgsHardwareInit.h:34
namespace CgsSystem {
	// CgsFrameRate.h:29
	enum EFrameRate {
		E_FRAMERATE_UNKNOWN = -1,
		E_FRAMERATE_25HZ = 25,
		E_FRAMERATE_30HZ = 30,
		E_FRAMERATE_50HZ = 50,
		E_FRAMERATE_60HZ = 60,
	}

	// CgsFrameRate.h:38
	enum EFrameRateManagerType {
		E_FRAMERATEMANAGER_SINGLE = 0,
		E_FRAMERATEMANAGER_MULTIPLE_CAPPED = 1,
		E_FRAMERATEMANAGER_MULTIPLE_UNCAPPED = 2,
	}

}

// CgsFrameRate.h:61
struct CgsSystem::FrameRateManager {
protected:
	// CgsFrameRate.h:99
	CgsSystem::EFrameRateManagerType meFramerateType;

	// CgsFrameRate.h:102
	int64_t mi64PrevFrameTime;

	// CgsFrameRate.h:103
	int64_t mi64TotalTime;

	// CgsFrameRate.h:106
	int64_t mi64FramerateToleranceCycles;

	// CgsFrameRate.h:107
	int64_t mi64SimulationTimeStepCycles;

	// CgsFrameRate.h:108
	int32_t miPrevNumSimulationStepsRequired;

	// CgsFrameRate.h:109
	int32_t miNumSimulationSteps;

	// CgsFrameRate.h:110
	int32_t miNumExtraSimulationUpdatesRequested;

	// CgsFrameRate.h:111
	bool mbPaused;

	// CgsFrameRate.h:112
	bool mbIsSimulationRunningInRealTime;

public:
	// CgsFrameRate.h:66
	void Construct(float32_t, float32_t);

	// CgsFrameRate.h:69
	void Destruct();

	// CgsFrameRate.h:72
	bool Prepare();

	// CgsFrameRate.h:75
	bool Release();

	// CgsFrameRate.h:80
	void StartUpdateFrame(CgsSystem::EFrameRateManagerType, bool);

	// CgsFrameRate.h:85
	// Declaration
	int32_t UpdatePostRenderWait(int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFrameRate.cpp:225
		using namespace CgsDev::Message;

	}

	// CgsFrameRate.h:89
	void AttemptToInsertExtraSimulationUpdates(int32_t);

	// CgsFrameRate.h:93
	void SetNumSimulationStepsAchieved(int32_t);

	// CgsFrameRate.h:96
	bool IsSimulationRunningInRealTime();

}

