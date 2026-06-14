// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct VehicleRef {
		// BrnVehicleRef.h:49
		enum EType {
			E_PLAYER_CAR = 0,
			E_RACE_CAR = 1,
			E_RACE_CAR_NEAREST_PLAYER = 2,
			E_TRAFFIC_VEHICLE = 3,
			E_NUM_TYPES = 4,
		}

	}

}

// BrnVehicleRef.h:46
struct BrnDirector::VehicleRef {
private:
	// BrnVehicleRef.h:109
	BrnDirector::VehicleRef::EType meType;

	// BrnVehicleRef.h:110
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnVehicleRef.h:111
	uint32_t muOrdinalDistance;

	// BrnVehicleRef.h:112
	bool mbSet;

public:
	// BrnVehicleRef.h:60
	void Construct();

	// BrnVehicleRef.h:63
	const BrnDirector::VehicleRef::EType GetType() const;

	// BrnVehicleRef.h:67
	const VehicleInfo & Get(const AllVehicleData &) const;

	// BrnVehicleRef.h:73
	void Set(BrnDirector::VehicleRef::EType, EActiveRaceCarIndex, uint32_t);

	// BrnVehicleRef.h:76
	void SetToPlayer();

	// BrnVehicleRef.h:80
	void SetToRaceCar(EActiveRaceCarIndex);

	// BrnVehicleRef.h:87
	void SetToRaceCarNearestPlayer(uint32_t);

	// BrnVehicleRef.h:90
	bool HasBeenSet() const;

	// BrnVehicleRef.h:95
	bool IsValid(const AllVehicleData &) const;

	// BrnVehicleRef.h:99
	bool operator==(const VehicleRef &) const;

	// BrnVehicleRef.h:103
	bool operator!=(const VehicleRef &) const;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct VehicleRef {
		// BrnVehicleRef.h:49
		enum EType {
			E_PLAYER_CAR = 0,
			E_RACE_CAR = 1,
			E_RACE_CAR_NEAREST_PLAYER = 2,
			E_TRAFFIC_VEHICLE = 3,
			E_NUM_TYPES = 4,
		}

	}

}

