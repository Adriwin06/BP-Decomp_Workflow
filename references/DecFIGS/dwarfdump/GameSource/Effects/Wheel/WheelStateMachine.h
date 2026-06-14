// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// WheelStateMachine.h:28
	const float32_t SKID_FACTOR_THRESHOLD;

}

// WheelStateMachine.h:33
struct BrnEffects::WheelStateMachine {
private:
	// WheelStateMachine.h:65
	extern const rw::math::vpu::Vector3 K_VELOCITY_SPREAD;

	// WheelStateMachine.h:66
	extern const rw::math::vpu::Vector3 K_VELOCITY_INHERITANCE;

	// WheelStateMachine.h:68
	BrnPhysics::Vehicle::EVehicleDrivenWheel mWheelIndex;

	// WheelStateMachine.h:69
	float32_t mfSurfaceParticleAccumulator;

	// WheelStateMachine.h:72
	float32_t[2] mfSkidSmokeAccumulators;

	// WheelStateMachine.h:74
	Vector3 mvPreviousPosition;

public:
	// WheelStateMachine.h:36
	void WheelStateMachine();

	// WheelStateMachine.h:40
	void Construct(BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// WheelStateMachine.h:43
	void Reset();

	// WheelStateMachine.h:48
	void Update(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

	// WheelStateMachine.h:51
	Vector3 & GetPreviousPosition();

	// WheelStateMachine.h:58
	void SetPreviousPosition(Vector3);

private:
	// WheelStateMachine.h:87
	void FireNativeParticle(Vector3, Vector3, SimpleParticleBatch::ENativeParticleType, Vector3, RaceCarParticleEffectHelper &, BrnEffects::CarState &, float32_t, float32_t, Vector3, float32_t);

	// WheelStateMachine.h:102
	void HandleSmokeLayer(uint32_t, BrnEffects::CarState &, RaceCarParticleEffectHelper &, Vector3, Vector3, Vector3, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, SimpleParticleBatch::ENativeParticleType);

}

// Curves.h:24
namespace BrnEffects {
	// WheelStateMachine.h:28
	const float32_t SKID_FACTOR_THRESHOLD;

}

// WheelStateMachine.h:65
extern const rw::math::vpu::Vector3 K_VELOCITY_SPREAD;

// WheelStateMachine.h:66
extern const rw::math::vpu::Vector3 K_VELOCITY_INHERITANCE;

// BrnEffectsData.h:75
namespace BrnEffects {
	// WheelStateMachine.h:28
	const float32_t SKID_FACTOR_THRESHOLD;

}

