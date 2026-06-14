// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct StuntAttackMode {
	private:
		// BrnStuntAttackMode.h:94
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnStuntAttackMode.h:95
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnStuntAttackMode.h:94
extern const float32_t KF_INTRO_TIME_SECONDS;

// BrnStuntAttackMode.h:95
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnStuntAttackMode.h:43
struct BrnGameState::StuntAttackMode : public BrnGameState::OfflineGameMode {
private:
	// BrnStuntAttackMode.cpp:25
	extern const float32_t KF_INTRO_TIME_SECONDS;

	// BrnStuntAttackMode.cpp:26
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnStuntAttackMode.h:97
	Vector3 mStartDir;

	// BrnStuntAttackMode.h:98
	float32_t mfCountdownTimer;

	// BrnStuntAttackMode.h:99
	bool mbPlayerPointingInStartDirection;

	// BrnStuntAttackMode.h:100
	bool mbNeedToFillBoost;

public:
	// BrnStuntAttackMode.h:111
	virtual const char * GetName() const;

	// BrnStuntAttackMode.cpp:58
	// Declaration
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStuntAttackMode.cpp:77
		using namespace CgsDev::Message;

	}

	// BrnStuntAttackMode.cpp:143
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnStuntAttackMode.h:118
	virtual bool HasTimedIntro() const;

	// BrnStuntAttackMode.h:125
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnStuntAttackMode.h:132
	virtual float32_t GetOutroTimeout() const;

	// BrnStuntAttackMode.h:139
	virtual bool ShouldCountdownEnd() const;

	// BrnStuntAttackMode.cpp:230
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnStuntAttackMode.cpp:205
	virtual bool ShouldFinish(BrnGameState::ScoringSystem *);

	// BrnStuntAttackMode.h:151
	virtual bool RequiresStreaming() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct StuntAttackMode {
	public:
		StuntAttackMode();

	private:
		// BrnStuntAttackMode.h:94
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnStuntAttackMode.h:95
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnStuntAttackMode.h:43
void BrnGameState::StuntAttackMode::StuntAttackMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

