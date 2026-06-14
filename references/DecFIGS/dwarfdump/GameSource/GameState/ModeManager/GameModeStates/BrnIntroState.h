// BrnIntroState.h:45
struct BrnGameState::IntroState : public BrnGameState::GameModeState {
private:
	// BrnIntroState.h:58
	float32_t mfCountdownSeconds;

	// BrnIntroState.h:60
	bool mbUseCountdown;

public:
	// BrnIntroState.cpp:40
	virtual void OnEnter();

	// BrnIntroState.cpp:65
	virtual void Update();

	// BrnIntroState.cpp:88
	virtual void OnLeave();

}

// BrnIntroState.h:45
void BrnGameState::IntroState::IntroState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

