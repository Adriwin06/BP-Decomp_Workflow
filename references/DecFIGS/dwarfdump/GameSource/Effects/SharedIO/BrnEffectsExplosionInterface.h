// BrnEffectsExplosionInterface.h:45
extern const uint32_t KU_MAX_TENDRILS = 8;

// BrnEffectsData.h:75
namespace BrnEffects {
	// Declaration
	struct EffectsExplosionInterface {
		// BrnEffectsExplosionInterface.h:48
		struct Tendril {
			// BrnEffectsExplosionInterface.h:49
			Vector3 mPosition;

			// BrnEffectsExplosionInterface.h:50
			Vector3 mVelocity;

			// BrnEffectsExplosionInterface.h:51
			float32_t mfMass;

		public:
			// BrnEffectsExplosionInterface.h:53
			Tendril();

			// BrnEffectsExplosionInterface.h:58
			Tendril(Vector3, Vector3, float32_t);

		}

	}

}

// BrnEffectsExplosionInterface.h:43
struct BrnEffects::EffectsExplosionInterface {
	// BrnEffectsExplosionInterface.h:45
	extern const uint32_t KU_MAX_TENDRILS = 8;

private:
	// BrnEffectsExplosionInterface.h:83
	BrnEffects::EffectsExplosionInterface::Tendril[8] maTenrils;

	// BrnEffectsExplosionInterface.h:84
	uint16_t mu16NumOfTendrils;

public:
	// BrnEffectsExplosionInterface.h:65
	void EffectsExplosionInterface();

	// BrnEffectsExplosionInterface.h:70
	void Clear();

	// BrnEffectsExplosionInterface.h:74
	void AddTentril(const BrnEffects::EffectsExplosionInterface::Tendril &);

	// BrnEffectsExplosionInterface.h:77
	uint16_t GetNumOfTentrils() const;

	// BrnEffectsExplosionInterface.h:80
	const BrnEffects::EffectsExplosionInterface::Tendril & GetTentril(uint16_t) const;

}

