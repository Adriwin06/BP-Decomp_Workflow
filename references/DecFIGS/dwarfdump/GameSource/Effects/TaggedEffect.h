// TaggedEffect.h:37
struct BrnEffects::TaggedEffect {
	// TaggedEffect.h:77
	uint32_t muEffectHandle;

public:
	// TaggedEffect.h:40
	void Construct();

	// TaggedEffect.h:42
	void AddTag(ParticleEffectHelper &, const LocatorPointSpec &);

	// TaggedEffect.h:44
	void Reset(ParticleEffectHelper &);

	// TaggedEffect.h:62
	void SetWorldIndex(ParticleEffectHelper &, uint32_t);

	// TaggedEffect.h:64
	void SetBlendValue(ParticleEffectHelper &, float32_t);

	// TaggedEffect.h:66
	void SetEnabled(ParticleEffectHelper &, bool);

	// TaggedEffect.h:68
	void StartEffect(ParticleEffectHelper &, const char *, uint32_t);

	// TaggedEffect.h:70
	void StopEffect(ParticleEffectHelper &);

	// TaggedEffect.h:75
	void Update(ParticleEffectHelper &, Matrix44Affine);

}

