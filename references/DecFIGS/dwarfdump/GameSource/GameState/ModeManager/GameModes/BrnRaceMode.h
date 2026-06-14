// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RaceMode {
	private:
		// BrnRaceMode.h:71
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnRaceMode.h:71
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnRaceMode.h:48
struct BrnGameState::RaceMode : public BrnGameState::OfflineGameMode {
private:
	// BrnRaceMode.cpp:27
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnRaceMode.h:73
	int32_t miNumRivalsInRace;

	// BrnRaceMode.h:74
	float32_t mfNearestPlayerDistToFinish;

public:
	// BrnRaceMode.h:85
	virtual const char * GetName() const;

	// BrnRaceMode.cpp:80
	// Declaration
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceMode.cpp:109
		using namespace CgsDev::Message;

		// BrnRaceMode.cpp:110
		using namespace CgsDev::Message;

		// BrnRaceMode.cpp:111
		using namespace CgsDev::Message;

		// BrnRaceMode.cpp:112
		using namespace CgsDev::Message;

		// BrnRaceMode.cpp:113
		using namespace CgsDev::Message;

		// BrnRaceMode.cpp:114
		using namespace CgsDev::Message;

	}

	// BrnRaceMode.h:98
	virtual float32_t GetOutroTimeout() const;

	// BrnRaceMode.h:92
	virtual bool HasTimedIntro() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RaceMode {
	public:
		RaceMode();

	private:
		// BrnRaceMode.h:71
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnRaceMode.h:48
void BrnGameState::RaceMode::RaceMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

