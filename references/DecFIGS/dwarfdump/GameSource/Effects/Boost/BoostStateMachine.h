// BoostStateMachine.h:37
struct BrnEffects::BoostStateMachine : public BrnEffects::EffectsStateMachine {
private:
	// BoostStateMachine.h:38
	extern const uint32_t MAX_BOOST_EFFECTS = 4;

	// BoostStateMachine.h:96
	uint32_t muNumBoostTags;

	// BoostStateMachine.h:97
	TaggedEffect[4] mEffects;

	// BoostStateMachine.h:100
	float32_t mfExhaustSmokeBlend;

public:
	// BoostStateMachine.h:42
	bool IsInitialised() const;

	// BoostStateMachine.cpp:47
	void Reset(ParticleEffectHelper &);

	// BoostStateMachine.cpp:60
	void AddTag(ParticleEffectHelper &, const LocatorPointSpec &);

	// BoostStateMachine.cpp:68
	void SetWorldIndex(ParticleEffectHelper &, uint32_t);

	// BoostStateMachine.cpp:467
	void SetBlendValue(ParticleEffectHelper &, float32_t);

	// BoostStateMachine.cpp:476
	void SetEnabled(ParticleEffectHelper &, bool);

protected:
	// BoostStateMachine.cpp:96
	virtual BrnEffects::EffectsState OnDetermineNextState(BrnEffects::CarState &, bool, BrnEffects::EffectsState, RaceCarParticleEffectHelper &);

	// BoostStateMachine.cpp:293
	virtual void OnChangeState(BrnEffects::EffectsState, RaceCarParticleEffectHelper &, BrnEffects::CarState &);

	// BoostStateMachine.cpp:78
	virtual void OnConstruct();

	// BoostStateMachine.cpp:369
	virtual void OnTick(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

private:
	// BoostStateMachine.cpp:485
	void StartEffects(ParticleEffectHelper &, const char *, uint32_t);

	// BoostStateMachine.cpp:495
	void StopEffects(ParticleEffectHelper &);

}

// BoostStateMachine.h:38
extern const uint32_t MAX_BOOST_EFFECTS = 4;

// BrnEffectsData.h:75
namespace BrnEffects {
	// Declaration
	struct BoostStateMachine {
	public:
		BoostStateMachine();

	private:
		// BoostStateMachine.h:38
		extern const uint32_t MAX_BOOST_EFFECTS = 4;

	}

}

// BoostStateMachine.h:37
void BrnEffects::BoostStateMachine::BoostStateMachine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

