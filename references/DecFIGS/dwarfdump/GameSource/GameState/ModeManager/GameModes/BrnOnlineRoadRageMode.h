// BrnOnlineRoadRageMode.h:46
struct BrnGameState::OnlineRoadRageMode : public BrnGameState::OnlineGameMode {
private:
	// BrnOnlineRoadRageMode.h:66
	Random mRandom;

public:
	// BrnOnlineRoadRageMode.h:79
	virtual const char * GetName() const;

	// BrnOnlineRoadRageMode.cpp:50
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineRoadRageMode.h:86
	virtual bool HasLoadingScreen() const;

}

// BrnOnlineRoadRageMode.h:46
void BrnGameState::OnlineRoadRageMode::OnlineRoadRageMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

