// BrnEffectsGlassManager.h:30
struct BrnEffects::BrnGlassSmashEffect {
	// BrnEffectsGlassManager.h:69
	Matrix44Affine mLocalTransform;

	// BrnEffectsGlassManager.h:70
	EntityId mVehicleID;

	// BrnEffectsGlassManager.h:71
	uint32_t mGlassEffectHandle;

	// BrnEffectsGlassManager.h:72
	float32_t mfEffectEndTime;

	// BrnEffectsGlassManager.h:73
	bool mbEffectActive;

public:
	// BrnEffectsGlassManager.h:35
	void Initialise(uint32_t);

	// BrnEffectsGlassManager.h:48
	void Reset(uint32_t, BrnParticle::ParticleModule *);

}

// BrnEffectsGlassManager.h:77
struct BrnEffects::BrnEffectsGlassManager {
private:
	// BrnEffectsGlassManager.h:101
	BrnParticle::ParticleModule * mpParticleModule;

	// BrnEffectsGlassManager.h:102
	uint32_t muNextGlassEffect;

	// BrnEffectsGlassManager.h:103
	BrnGlassSmashEffect[8] maGlassEffects;

public:
	// BrnEffectsGlassManager.h:82
	void Construct(BrnParticle::ParticleModule *);

	// BrnEffectsGlassManager.h:85
	void Destruct();

	// BrnEffectsGlassManager.h:92
	void FireGlassEffect(Matrix44Affine, Matrix44Affine, EntityId, float32_t);

	// BrnEffectsGlassManager.h:97
	void UpdateVehicleEffectPositions(const InputBuffer *, float32_t);

}

// _built-in_
namespace :: {
	// BrnEffectsGlassManager.h:23
	const uint32_t KU_MAX_GLASS_EFFECTS = 8;

}

