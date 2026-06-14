// ParticleEffectHelper.h:37
struct BrnEffects::ParticleEffectHelper {
protected:
	// ParticleEffectHelper.h:136
	const BrnParticle::ParticleModule & mParticleModule;

public:
	// ParticleEffectHelper.h:40
	void ParticleEffectHelper(BrnParticle::ParticleModule &);

	// ParticleEffectHelper.h:46
	const BrnParticle::ParticleModule & ParticleModule() const;

	// ParticleEffectHelper.h:56
	void StartEffect(const char *, uint32_t &, uint32_t);

	// ParticleEffectHelper.h:61
	void StopEffect(uint32_t &);

	// ParticleEffectHelper.h:67
	void SetEffectEnabled(uint32_t, bool);

	// ParticleEffectHelper.h:80
	void SetEffectWorldIndex(uint32_t, uint32_t);

	// ParticleEffectHelper.h:93
	void SetEffectTransform(uint32_t &, Matrix44Affine);

	// ParticleEffectHelper.h:106
	void SetEffectStateBlend(uint32_t, float32_t);

	// ParticleEffectHelper.h:120
	void SetEffectStateBlend(const uint32_t *, uint32_t, float32_t);

}

// ParticleEffectHelper.h:140
struct BrnEffects::RaceCarParticleEffectHelper : public ParticleEffectHelper {
private:
	// ParticleEffectHelper.h:235
	const BrnEffects::ActiveRaceCarData & mActiveRaceCar;

	// ParticleEffectHelper.h:236
	const BrnEffects::EffectsModule & mEffectsModule;

	// ParticleEffectHelper.h:237
	const RaceCarState * mpRaceCarState;

	// ParticleEffectHelper.h:238
	const BrnEffects::EffectsDebugComponent * mpDebugComponent;

	// ParticleEffectHelper.h:239
	uint32_t muWorldIndex;

	// ParticleEffectHelper.h:240
	RwRGBAReal mCarColour;

	// ParticleEffectHelper.h:241
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// ParticleEffectHelper.h:242
	const VehicleLocatorOutput * mpVehicleLocators;

public:
	// ParticleEffectHelper.h:152
	void RaceCarParticleEffectHelper(BrnEffects::EffectsModule &, BrnEffects::ActiveRaceCarData &, const RaceCarState *, BrnParticle::ParticleModule &, const BrnEffects::EffectsDebugComponent *, uint32_t, const RwRGBAReal &, BrnGameState::GameStateModuleIO::EGameModeType, const VehicleLocatorOutput *);

	// ParticleEffectHelper.h:166
	const BrnEffects::EffectsDebugComponent * DebugComponent() const;

	// ParticleEffectHelper.h:171
	BrnEffects::ActiveRaceCarData & RaceCarData() const;

	// ParticleEffectHelper.h:176
	const RaceCarState * RaceCarState() const;

	// ParticleEffectHelper.h:181
	BrnEffects::EffectsModule & EffectsModule() const;

	// ParticleEffectHelper.h:186
	BrnParticle::ParticleModule & ParticleModule() const;

	// ParticleEffectHelper.h:192
	uint32_t WorldIndex() const;

	// ParticleEffectHelper.h:198
	const RwRGBAReal & CarColour() const;

	// ParticleEffectHelper.h:204
	const BrnGameState::GameStateModuleIO::EGameModeType CurrentGameMode() const;

	// ParticleEffectHelper.h:210
	const VehicleLocatorOutput * GetLocatorsInterface();

	// ParticleEffectHelper.h:220
	void SetDevStateBlend(const uint32_t *, uint32_t, float32_t);

}

