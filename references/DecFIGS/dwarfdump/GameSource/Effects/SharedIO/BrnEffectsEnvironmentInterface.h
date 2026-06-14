// BrnEffectsEnvironmentInterface.h:40
struct BrnEffects::EffectsEnvironmentInterface {
private:
	// BrnEffectsEnvironmentInterface.h:60
	Vector2 mWindVelocity;

public:
	// BrnEffectsEnvironmentInterface.h:43
	void Clear();

	// BrnEffectsEnvironmentInterface.h:48
	void SetWindVelocity(Vector2);

	// BrnEffectsEnvironmentInterface.h:53
	const rw::math::vpu::Vector2 & GetWindVelocity() const;

}

