// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct FaceOffMode {
	private:
		// BrnFaceOffMode.h:85
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnFaceOffMode.h:85
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnFaceOffMode.h:48
struct BrnGameState::FaceOffMode : public BrnGameState::OfflineGameMode {
private:
	// BrnFaceOffMode.cpp:27
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnFaceOffMode.h:88
	int32_t miNumRivalsInRace;

	// BrnFaceOffMode.h:89
	bool mbPlayerBeatMainRival;

public:
	// BrnFaceOffMode.h:106
	virtual const char * GetName() const;

	// BrnFaceOffMode.cpp:81
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnFaceOffMode.cpp:174
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnFaceOffMode.cpp:195
	virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

	// BrnFaceOffMode.h:112
	virtual float32_t GetOutroTimeout() const;

	// BrnFaceOffMode.h:99
	virtual float32_t GetIntroDurationSeconds() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct FaceOffMode {
	public:
		FaceOffMode();

	private:
		// BrnFaceOffMode.h:85
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnFaceOffMode.h:48
void BrnGameState::FaceOffMode::FaceOffMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

