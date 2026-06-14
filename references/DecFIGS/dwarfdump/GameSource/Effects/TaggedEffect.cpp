// TaggedEffect.cpp:27
void BrnEffects::TaggedEffect::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// TaggedEffect.cpp:40
void BrnEffects::TaggedEffect::Reset(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::StopEffect(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
}

// TaggedEffect.cpp:33
void BrnEffects::TaggedEffect::AddTag(const ParticleEffectHelper &  lEffectHelper, const const LocatorPointSpec &  lTagPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::StopEffect(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
}

// TaggedEffect.cpp:87
void BrnEffects::TaggedEffect::SetWorldIndex(const ParticleEffectHelper &  lEffectHelper, uint32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::SetEffectWorldIndex(/* parameters */);
	BrnParticle::LionEffect::SetWorldIndex(/* parameters */);
}

// TaggedEffect.cpp:93
void BrnEffects::TaggedEffect::SetBlendValue(const ParticleEffectHelper &  lEffectHelper, float32_t  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::SetEffectStateBlend(/* parameters */);
	BrnParticle::LionEffect::SetStateBlendFactor(/* parameters */);
}

// TaggedEffect.cpp:99
void BrnEffects::TaggedEffect::SetEnabled(const ParticleEffectHelper &  lEffectHelper, bool  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::SetEffectEnabled(/* parameters */);
	BrnParticle::LionEffect::SetEnabled(/* parameters */);
}

// TaggedEffect.cpp:111
void BrnEffects::TaggedEffect::StopEffect(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::StopEffect(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
}

// TaggedEffect.cpp:120
void BrnEffects::TaggedEffect::Update(const ParticleEffectHelper &  lEffectHelper, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::SetEffectTransform(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BrnParticle::LionEffect::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// TaggedEffect.cpp:105
void BrnEffects::TaggedEffect::StartEffect(const ParticleEffectHelper &  lEffectHelper, const char *  lpEffectName, uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::StartEffect(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
	{
	}
	std(/* parameters */);
}

