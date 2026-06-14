// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BurningRouteMode {
	private:
		// BrnBurningRoute.h:87
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnBurningRoute.h:87
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnBurningRoute.h:46
struct BrnGameState::BurningRouteMode : public BrnGameState::OfflineGameMode {
private:
	// BrnBurningRoute.cpp:27
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnBurningRoute.h:90
	BrnGameState::EAddingRivalsState meAddingRivalsState;

	// BrnBurningRoute.h:91
	int32_t miNumRivalsInRace;

	// BrnBurningRoute.h:92
	int32_t miNumRivalAdditionCamerasThisRace;

	// BrnBurningRoute.h:93
	float32_t mfCarAdditionStateTime;

	// BrnBurningRoute.h:94
	float32_t mfTimeToNextAddition;

	// BrnBurningRoute.h:96
	EGlobalRaceCarIndex meMainRivalGlobalIndex;

	// BrnBurningRoute.h:97
	EActiveRaceCarIndex mePlayerActiveIndex;

	// BrnBurningRoute.h:98
	EActiveRaceCarIndex meMainRivalActiveIndex;

	// BrnBurningRoute.h:99
	bool mbPlayerBeatMainRival;

public:
	// BrnBurningRoute.h:110
	virtual const char * GetName() const;

	// BrnBurningRoute.cpp:58
	// Declaration
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBurningRoute.cpp:76
		using namespace CgsDev::Message;

		// BrnBurningRoute.cpp:77
		using namespace CgsDev::Message;

		// BrnBurningRoute.cpp:80
		using namespace CgsDev::Message;

	}

	// BrnBurningRoute.cpp:124
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnBurningRoute.cpp:153
	virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

	// BrnBurningRoute.h:117
	virtual bool HasTimedIntro() const;

	// BrnBurningRoute.h:123
	virtual float32_t GetOutroTimeout() const;

	// BrnBurningRoute.h:135
	virtual bool RequiresStreaming() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BurningRouteMode {
	public:
		BurningRouteMode();

	private:
		// BrnBurningRoute.h:87
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnBurningRoute.h:46
void BrnGameState::BurningRouteMode::BurningRouteMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

