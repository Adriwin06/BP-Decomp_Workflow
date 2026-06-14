// BrnOnlineRaceMode.h:46
struct BrnGameState::OnlineRaceMode : public BrnGameState::OnlineGameMode {
private:
	// BrnOnlineRaceMode.h:72
	Random mRandom;

public:
	// BrnOnlineRaceMode.h:84
	virtual const char * GetName() const;

	// BrnOnlineRaceMode.cpp:53
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineRaceMode.h:91
	virtual bool HasLoadingScreen() const;

private:
	// BrnOnlineRaceMode.cpp:132
	LightTriggerId GetBestStartGridID(LightTriggerId, const StartGameModeParams *, Vector3);

}

// BrnOnlineRaceMode.h:46
void BrnGameState::OnlineRaceMode::OnlineRaceMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

