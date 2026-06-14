// BrnOnlineFugitiveMode.h:46
struct BrnGameState::OnlineFugitiveMode : public BrnGameState::OnlineGameMode {
public:
	// BrnOnlineFugitiveMode.h:74
	virtual const char * GetName() const;

	// BrnOnlineFugitiveMode.cpp:50
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineFugitiveMode.h:81
	virtual bool HasLoadingScreen() const;

}

// BrnOnlineFugitiveMode.h:46
void BrnGameState::OnlineFugitiveMode::OnlineFugitiveMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

