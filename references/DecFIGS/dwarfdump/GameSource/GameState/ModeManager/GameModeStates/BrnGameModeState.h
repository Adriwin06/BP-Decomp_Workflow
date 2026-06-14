// BrnGameModeState.h:46
struct BrnGameState::GameModeState {
	int (*)(...) * _vptr.GameModeState;

protected:
	// BrnGameModeState.h:63
	const ModeManager * mpModeManager;

	// BrnGameModeState.h:64
	BrnGameState::GameMode * mpGameMode;

public:
	// BrnGameModeState.cpp:47
	void Construct(const ModeManager *, BrnGameState::GameMode *);

	// BrnGameModeState.h:54
	virtual void OnEnter();

	// BrnGameModeState.h:57
	virtual void OnLeave();

	// BrnGameModeState.h:60
	virtual void Update();

}

// BrnGameModeState.h:46
struct BrnGameState::GameModeState {
	int (*)(...) * _vptr.GameModeState;

protected:
	// BrnGameModeState.h:63
	const ModeManager * mpModeManager;

	// BrnGameModeState.h:64
	BrnGameState::GameMode * mpGameMode;

public:
	void GameModeState(const GameModeState &);

	void GameModeState();

	// BrnGameModeState.h:51
	void Construct(const ModeManager *, BrnGameState::GameMode *);

	// BrnGameModeState.h:54
	virtual void OnEnter();

	// BrnGameModeState.h:57
	virtual void OnLeave();

	// BrnGameModeState.h:60
	virtual void Update();

}

// BrnGameModeState.h:46
void BrnGameState::GameModeState::GameModeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

