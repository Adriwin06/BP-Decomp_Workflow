// BrnOutroState.h:59
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnOutroState.h:49
struct BrnGameState::OutroState : public BrnGameState::GameModeState {
	// BrnOutroState.h:59
	extern const float32_t KF_OUTRO_TIME_SECONDS;

private:
	// BrnOutroState.h:63
	float32_t mfOutroSeconds;

public:
	// BrnOutroState.cpp:40
	virtual void OnEnter();

	// BrnOutroState.cpp:53
	virtual void Update();

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OutroState {
	public:
		OutroState();

		// Unknown accessibility
		// BrnOutroState.h:59
		extern const float32_t KF_OUTRO_TIME_SECONDS;

	}

}

// BrnOutroState.h:49
void BrnGameState::OutroState::OutroState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

