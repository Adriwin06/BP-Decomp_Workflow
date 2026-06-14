// BrnCountdownState.h:46
struct BrnGameState::CountdownState : public BrnGameState::GameModeState {
private:
	// BrnCountdownState.h:58
	float32_t mfCountdownSeconds;

	// BrnCountdownState.h:59
	int32_t miCountdownDisplay;

public:
	// BrnCountdownState.cpp:38
	virtual void OnEnter();

	// BrnCountdownState.cpp:52
	virtual void Update();

	// BrnCountdownState.cpp:87
	virtual void OnLeave();

}

// BrnCountdownState.h:46
void BrnGameState::CountdownState::CountdownState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

