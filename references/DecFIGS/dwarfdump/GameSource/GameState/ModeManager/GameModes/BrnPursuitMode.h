// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPursuitMode.h:31
	const float32_t KF_PURSUIT_INTRO_TIME;

}

// BrnPursuitMode.h:46
struct BrnGameState::PursuitMode : public BrnGameState::OfflineGameMode {
public:
	// BrnPursuitMode.h:93
	virtual const char * GetName() const;

	// BrnPursuitMode.cpp:49
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnPursuitMode.h:80
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnPursuitMode.cpp:97
	virtual bool ShouldExit(const ScoringSystem *) const;

}

// BrnPursuitMode.h:46
void BrnGameState::PursuitMode::PursuitMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

