// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// EffectsStateMachine.h:38
	enum EffectsState {
		EffectsStateAllOff = 0,
		EffectsStateBoosting = 1,
		EffectsStateExhaustSmokeOn = 2,
		EffectsStateExhaustSmokeStopping = 3,
		EffectsStateBoostStopping = 4,
		EffectsStateExhaustPopRestart = 5,
		EffectsStateExhaustPop = 6,
		EffectsStateJumping = 7,
		EffectsStateJumpingMovingUp = 8,
		EffectsStateJumpingMovingDown = 9,
		EffectsStateLanded = 10,
		EffectsStateFiringSparks = 11,
		EffectsStateLandedWaiting = 12,
		EffectsStateJumpingFinishing = 13,
		EffectsStateWheelNoEffect = 14,
		EffectsStateWheelSmoking = 15,
		EffectsStateWheelBurnout = 16,
		EffectsState_MAX = 17,
	}

}

// EffectsStateMachine.h:64
struct BrnEffects::EffectsStateMachine {
	int (*)(...) * _vptr.EffectsStateMachine;

private:
	// EffectsStateMachine.h:98
	BrnEffects::EffectsState mState;

	// EffectsStateMachine.h:102
	float32_t mTime;

public:
	// EffectsStateMachine.h:68
	BrnEffects::EffectsState CurrentState() const;

	// EffectsStateMachine.cpp:31
	void Construct();

	// EffectsStateMachine.cpp:37
	void Tick(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

	// EffectsStateMachine.cpp:86
	void SetState(BrnEffects::EffectsState);

	// EffectsStateMachine.cpp:73
	void SetState(BrnEffects::EffectsState, RaceCarParticleEffectHelper &, BrnEffects::CarState &);

protected:
	// EffectsStateMachine.cpp:25
	void SetStateTimer(float32_t);

	// EffectsStateMachine.h:85
	virtual BrnEffects::EffectsState OnDetermineNextState(BrnEffects::CarState &, bool, BrnEffects::EffectsState, RaceCarParticleEffectHelper &);

	// EffectsStateMachine.h:87
	virtual void OnChangeState(BrnEffects::EffectsState, RaceCarParticleEffectHelper &, BrnEffects::CarState &);

	// EffectsStateMachine.cpp:93
	virtual void OnTick(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

	// EffectsStateMachine.cpp:98
	virtual void OnConstruct();

}

// EffectsStateMachine.h:64
void BrnEffects::EffectsStateMachine::EffectsStateMachine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

