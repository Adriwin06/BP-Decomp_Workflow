// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnAbsorptionTable.h:31
		const uint32_t KU_NUM_ABSORPTION_VALUES = 10;

	}

}

// BrnAbsorptionTable.h:88
extern VecFloat[5] savfCompressionLimitFactor;

// BrnAbsorptionTable.h:89
extern Vector4[5][10] saaAbsorptionSets;

// BrnAbsorptionTable.h:90
extern VecFloat[6] saDirectionSpeedModifier;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnAbsorptionTable.h:31
		const uint32_t KU_NUM_ABSORPTION_VALUES = 10;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnAbsorptionTable.h:37
		enum EAbsorptionSets {
			E_ABSORPTIONSET_NORMAL = 0,
			E_ABSORPTIONSET_AI_CRASHING = 1,
			E_ABSORPTIONSET_PLAYER_EXTREME_CRASH = 2,
			E_ABSORPTIONSET_SHUTDOWN = 3,
			E_ABSORPTIONSET_INVINCIBLE = 4,
			E_ABSORPTIONSETS_NUM = 5,
		}

		// BrnAbsorptionTable.h:31
		const uint32_t KU_NUM_ABSORPTION_VALUES = 10;

	}

}

// BrnAbsorptionTable.h:49
struct BrnPhysics::Deformation::AbsorptionTable {
private:
	// BrnAbsorptionTable.h:88
	extern VecFloat[5] savfCompressionLimitFactor;

	// BrnAbsorptionTable.h:89
	extern Vector4[5][10] saaAbsorptionSets;

	// BrnAbsorptionTable.h:90
	extern VecFloat[6] saDirectionSpeedModifier;

public:
	// BrnAbsorptionTable.h:54
	VecFloat GetAbsorption(BrnPhysics::Deformation::EAbsorptionSets, uint8_t);

	// BrnAbsorptionTable.h:65
	VecFloat GetSpeedForMaxAbsorbtion(BrnPhysics::Deformation::EAbsorptionSets, uint8_t, BrnPhysics::Deformation::ENextSensorDirection);

	// BrnAbsorptionTable.h:75
	VecFloat GetProportionToSpeed(BrnPhysics::Deformation::EAbsorptionSets, uint8_t);

	// BrnAbsorptionTable.h:83
	VecFloat GetCompressionLimitFactor(BrnPhysics::Deformation::EAbsorptionSets);

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnAbsorptionTable.h:37
		enum EAbsorptionSets {
			E_ABSORPTIONSET_NORMAL = 0,
			E_ABSORPTIONSET_AI_CRASHING = 1,
			E_ABSORPTIONSET_PLAYER_EXTREME_CRASH = 2,
			E_ABSORPTIONSET_SHUTDOWN = 3,
			E_ABSORPTIONSET_INVINCIBLE = 4,
			E_ABSORPTIONSETS_NUM = 5,
		}

		// BrnAbsorptionTable.h:31
		const uint32_t KU_NUM_ABSORPTION_VALUES = 10;

	}

}

