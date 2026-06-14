// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct SurvivorMode {
	private:
		// BrnSurvivor.h:105
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnSurvivor.h:106
		extern const float32_t KF_RAMP_CHANGED;

		// BrnSurvivor.h:107
		extern const float32_t KF_CLOSE_TO_FINISH_RAMP_DISTANCE;

	}

}

// BrnSurvivor.h:105
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnSurvivor.h:106
extern const float32_t KF_RAMP_CHANGED;

// BrnSurvivor.h:107
extern const float32_t KF_CLOSE_TO_FINISH_RAMP_DISTANCE;

// BrnSurvivor.h:46
struct BrnGameState::SurvivorMode : public BrnGameState::OfflineGameMode {
private:
	// BrnSurvivor.cpp:28
	extern int32_t KI_MIN_MAX_OPPONENT_COUNT;

	// BrnSurvivor.cpp:29
	extern int32_t KI_MAX_MAX_OPPONENT_COUNT;

	// BrnSurvivor.cpp:30
	extern float32_t KF_MIN_RAMP_TIME;

	// BrnSurvivor.cpp:31
	extern float32_t KF_MAX_RAMP_TIME;

	// BrnSurvivor.cpp:33
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnSurvivor.cpp:34
	extern const float32_t KF_RAMP_CHANGED;

	// BrnSurvivor.cpp:35
	extern const float32_t KF_CLOSE_TO_FINISH_RAMP_DISTANCE;

	// BrnSurvivor.h:110
	bool mbInShortcut;

	// BrnSurvivor.h:111
	float32_t mfRampTimer;

	// BrnSurvivor.h:112
	float32_t mfMaxRampTimer;

	// BrnSurvivor.h:113
	int32_t miBroadcastOpponentCount;

	// BrnSurvivor.h:114
	int32_t miMaxOpponentCount;

	// BrnSurvivor.h:117
	float32_t mfTimeInReverse;

public:
	// BrnSurvivor.h:128
	virtual const char * GetName() const;

	// BrnSurvivor.cpp:59
	// Declaration
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSurvivor.cpp:86
		using namespace CgsDev::Message;

		// BrnSurvivor.cpp:87
		using namespace CgsDev::Message;

		// BrnSurvivor.cpp:90
		using namespace CgsDev::Message;

	}

	// BrnSurvivor.cpp:154
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnSurvivor.cpp:242
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnSurvivor.h:135
	virtual bool HasTimedIntro() const;

	// BrnSurvivor.h:141
	virtual float32_t GetOutroTimeout() const;

	// BrnSurvivor.cpp:310
	virtual void OnPlayerInShortCut();

	// BrnSurvivor.h:148
	virtual void OnPlayerUsesPaintShop();

	// BrnSurvivor.cpp:327
	virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

private:
	// BrnSurvivor.cpp:270
	// Declaration
	void UpdateOpponents(BrnGameState::GameStateModuleIO::OutputBuffer *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSurvivor.cpp:275
		using namespace CgsDev::Message;

		// BrnSurvivor.cpp:286
		using namespace CgsDev::Message;

		// BrnSurvivor.cpp:290
		using namespace CgsDev::Message;

		// BrnSurvivor.cpp:296
		using namespace CgsDev::Message;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct SurvivorMode {
	public:
		SurvivorMode();

	private:
		// BrnSurvivor.h:105
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnSurvivor.h:106
		extern const float32_t KF_RAMP_CHANGED;

		// BrnSurvivor.h:107
		extern const float32_t KF_CLOSE_TO_FINISH_RAMP_DISTANCE;

	}

}

// BrnSurvivor.h:46
void BrnGameState::SurvivorMode::SurvivorMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

