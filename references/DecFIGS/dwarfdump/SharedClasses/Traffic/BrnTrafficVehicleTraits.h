// BrnTrafficVehicleTraits.h:45
struct BrnTraffic::VehicleTraits {
private:
	// BrnTrafficVehicleTraits.h:74
	float32_t mfSwervingAmountModifier;

	// BrnTrafficVehicleTraits.h:75
	float32_t mfAcceleration;

	// BrnTrafficVehicleTraits.h:77
	uint8_t muCuttingUpChance;

	// BrnTrafficVehicleTraits.h:78
	uint8_t muTailgatingChance;

	// BrnTrafficVehicleTraits.h:80
	uint8_t muPatience;

	// BrnTrafficVehicleTraits.h:81
	uint8_t muTantrumAttackCumProb;

	// BrnTrafficVehicleTraits.h:82
	uint8_t muTantrumStopCumProb;

	// BrnTrafficVehicleTraits.h:86
	extern const int32_t KI_MAX_ALTERCATIONS_BEFORE_TANTRUM = 5;

public:
	// BrnTrafficVehicleTraits.h:49
	float32_t GetSwervingModifier() const;

	// BrnTrafficVehicleTraits.h:50
	float32_t GetAccelerationModifier() const;

	// BrnTrafficVehicleTraits.h:55
	void EndianSwap();

}

