// BrnOnlineLoadingState.h:45
struct BrnGameState::OnlineLoadingState : public BrnGameState::GameModeState {
public:
	// BrnOnlineLoadingState.cpp:38
	virtual void OnEnter();

	// BrnOnlineLoadingState.cpp:51
	virtual void Update();

	// BrnOnlineLoadingState.cpp:62
	virtual void OnLeave();

}

// BrnOnlineLoadingState.h:45
void BrnGameState::OnlineLoadingState::OnlineLoadingState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

