// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficVehicleType.h:59
	enum VehicleClass {
		E_VEHICLECLASS_CAR = 0,
		E_VEHICLECLASS_VAN = 1,
		E_VEHICLECLASS_BUS = 2,
		E_VEHICLECLASS_BIGRIG = 3,
		E_VEHICLECLASS_COUNT = 4,
	}

	// BrnTrafficVehicleType.h:78
	enum VehicleScoreCategory {
		E_VEHICLESCORE_CAR = 0,
		E_VEHICLESCORE_VAN = 1,
		E_VEHICLESCORE_TRUCK = 2,
		E_VEHICLESCORE_BUS = 3,
		E_VEHICLESCORE_BIGRIG = 4,
		E_VEHICLESCORE_LIMO = 5,
		E_VEHICLESCORE_TAXI = 6,
		E_VEHICLESCORE_TARGETVEHICLE = 7,
		E_VEHICLESCORE_COUNT = 8,
	}

}

// BrnTrafficVehicleType.h:107
struct BrnTraffic::VehicleTypeUpdateData {
	// BrnTrafficVehicleType.h:109
	float32_t mfWheelRadius;

	// BrnTrafficVehicleType.h:112
	float32_t mfSuspensionRoll;

	// BrnTrafficVehicleType.h:113
	float32_t mfSuspensionPitch;

	// BrnTrafficVehicleType.h:114
	float32_t mfSuspensionTravel;

	// BrnTrafficVehicleType.h:115
	float32_t mfMass;

public:
	// BrnTrafficVehicleType.h:120
	void EndianSwap();

}

// BrnTrafficVehicleType.h:135
struct BrnTraffic::VehicleTypeData {
	// BrnTrafficVehicleType.h:137
	uint16_t muTrailerFlowTypeId;

	// BrnTrafficVehicleType.h:138
	uint8_t mxVehicleFlags;

	// BrnTrafficVehicleType.h:139
	uint8_t muVehicleClass;

	// BrnTrafficVehicleType.h:141
	uint8_t muInitialDirt;

	// BrnTrafficVehicleType.h:143
	uint8_t muAssetId;

	// BrnTrafficVehicleType.h:145
	uint8_t muTraitsId;

public:
	// BrnTrafficVehicleType.h:151
	void EndianSwap();

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficVehicleType.h:59
	enum VehicleClass {
		E_VEHICLECLASS_CAR = 0,
		E_VEHICLECLASS_VAN = 1,
		E_VEHICLECLASS_BUS = 2,
		E_VEHICLECLASS_BIGRIG = 3,
		E_VEHICLECLASS_COUNT = 4,
	}

}

