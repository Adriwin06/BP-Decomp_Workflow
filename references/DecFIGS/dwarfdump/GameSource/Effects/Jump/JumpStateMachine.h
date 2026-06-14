// JumpStateMachine.h:28
struct BrnEffects::JumpStateMachine : public BrnEffects::EffectsStateMachine {
private:
	// JumpStateMachine.h:46
	float32_t mFadeTime;

	// JumpStateMachine.h:48
	bool[4] mbWheelsOnGround;

protected:
	// JumpStateMachine.cpp:47
	virtual BrnEffects::EffectsState OnDetermineNextState(BrnEffects::CarState &, bool, BrnEffects::EffectsState, RaceCarParticleEffectHelper &);

	// JumpStateMachine.cpp:250
	virtual void OnChangeState(BrnEffects::EffectsState, RaceCarParticleEffectHelper &, BrnEffects::CarState &);

private:
	// JumpStateMachine.cpp:308
	void FireWheelSparks(BrnEffects::CarState &, RaceCarParticleEffectHelper &) const;

	// JumpStateMachine.cpp:354
	void FireWheelDebris(BrnEffects::CarState &, RaceCarParticleEffectHelper &) const;

	// JumpStateMachine.cpp:411
	void SetVapourBlend(float32_t, RaceCarParticleEffectHelper &) const;

	// JumpStateMachine.cpp:465
	virtual void OnTick(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

}

// JumpStateMachine.h:28
void BrnEffects::JumpStateMachine::JumpStateMachine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

