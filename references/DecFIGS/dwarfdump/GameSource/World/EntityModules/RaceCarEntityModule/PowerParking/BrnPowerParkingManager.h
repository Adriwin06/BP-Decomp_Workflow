// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPowerParkingManager.h:48
	enum EPowerParkOutcome {
		E_PPO_TO_BE_DETERMINED = 0,
		E_PPO_SUCCESS = 1,
		E_PPO_FAILURE = 2,
		E_PPO_COUNT = 3,
	}

	// BrnPowerParkingManager.h:182
	extern bool CheckVehicleForPowerPark(Vector3, Vector3, Vector3, Vector3, float32_t &, float32_t &, float32_t &, float32_t &);

	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnPowerParkingManager.h:71
struct BrnWorld::PowerParkingManager {
private:
	// BrnPowerParkingManager.h:124
	bool mbPowerParkInProgress;

	// BrnPowerParkingManager.h:125
	BrnWorld::EPowerParkOutcome mePowerParkOutcome;

	// BrnPowerParkingManager.h:126
	float32_t mfTimeUntilDisplayOutcome;

	// BrnPowerParkingManager.h:127
	int32_t miOverallRating;

	// BrnPowerParkingManager.h:129
	float32_t mfProximityScore;

	// BrnPowerParkingManager.h:130
	float32_t mfRotationScore;

	// BrnPowerParkingManager.h:131
	float32_t mfDistanceScore;

	// BrnPowerParkingManager.h:132
	float32_t mfSpeedScore;

	// BrnPowerParkingManager.h:133
	float32_t mfPositionAlignmentScore;

	// BrnPowerParkingManager.h:134
	float32_t mfAngleAlignmentScore;

	// BrnPowerParkingManager.h:136
	int32_t miWeightedDistanceScore;

	// BrnPowerParkingManager.h:137
	int32_t miWeightedProximityScore;

	// BrnPowerParkingManager.h:138
	int32_t miWeightedSpeedScore;

	// BrnPowerParkingManager.h:139
	int32_t miWeightedRotationScore;

	// BrnPowerParkingManager.h:140
	int32_t miWeightedPositionAlignmentScore;

	// BrnPowerParkingManager.h:141
	int32_t miWeightedAngleAlignmentScore;

	// BrnPowerParkingManager.h:143
	Vector3 mvPositionLastFrame;

	// BrnPowerParkingManager.h:144
	Vector3 mvFacingLastFrame;

	// BrnPowerParkingManager.h:145
	float32_t mfLowestSpeedThisPark;

	// BrnPowerParkingManager.h:147
	int32_t miContactTrafficCount;

	// BrnPowerParkingManager.h:148
	int32_t miNearTrafficCount;

	// BrnPowerParkingManager.h:149
	uint32_t muNearbyParkedCarCount;

	// BrnPowerParkingManager.h:150
	uint32_t muNearbyParkedPlayerCount;

	// BrnPowerParkingManager.h:151
	float32_t mfClosestDistanceSq;

	// BrnPowerParkingManager.h:152
	float32_t mfSecondClosestDistanceSq;

	// BrnPowerParkingManager.h:153
	float32_t mfClosestAngleDiff;

	// BrnPowerParkingManager.h:154
	float32_t mfClosestPerpendicularDist;

	// BrnPowerParkingManager.h:158
	BrnWorld::PowerParkingDebugComponent mPowerParkingDebugComponent;

	// BrnPowerParkingManager.h:159
	bool mbDebugForcePowerPark;

public:
	// BrnPowerParkingManager.h:75
	void Construct();

	// BrnPowerParkingManager.h:78
	void Destruct();

	// BrnPowerParkingManager.h:81
	bool Prepare();

	// BrnPowerParkingManager.h:89
	void Update(BrnGameState::GameStateModuleIO::EGameModeType, float32_t, BrnWorld::ActiveRaceCar *, BrnWorld::PlayerVehicleControls *, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnPowerParkingManager.h:92
	void ClearData();

	// BrnPowerParkingManager.h:95
	void DetermineOutcome();

	// BrnPowerParkingManager.h:99
	void AddNearTraffic(uint32_t);

	// BrnPowerParkingManager.h:103
	void AddContactTraffic(uint32_t);

	// BrnPowerParkingManager.h:112
	void SetNearbyParkedTrafficData(uint32_t, uint32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnPowerParkingManager.h:115
	bool IsPowerParking() const;

	// BrnPowerParkingManager.h:121
	void UpdateScoring(float32_t, float32_t, float32_t);

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPowerParkingManager.h:48
	enum EPowerParkOutcome {
		E_PPO_TO_BE_DETERMINED = 0,
		E_PPO_SUCCESS = 1,
		E_PPO_FAILURE = 2,
		E_PPO_COUNT = 3,
	}

	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPowerParkingManager.h:48
	enum EPowerParkOutcome {
		E_PPO_TO_BE_DETERMINED = 0,
		E_PPO_SUCCESS = 1,
		E_PPO_FAILURE = 2,
		E_PPO_COUNT = 3,
	}

	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPowerParkingManager.h:48
	enum EPowerParkOutcome {
		E_PPO_TO_BE_DETERMINED = 0,
		E_PPO_SUCCESS = 1,
		E_PPO_FAILURE = 2,
		E_PPO_COUNT = 3,
	}

	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPowerParkingManager.h:48
	enum EPowerParkOutcome {
		E_PPO_TO_BE_DETERMINED = 0,
		E_PPO_SUCCESS = 1,
		E_PPO_FAILURE = 2,
		E_PPO_COUNT = 3,
	}

	// BrnPowerParkingManager.h:182
	extern bool CheckVehicleForPowerPark(Vector3, Vector3, Vector3, Vector3, float32_t &, float32_t &, float32_t &, float32_t &);

	// BrnPowerParkingManager.h:46
	const float32_t KF_POWER_PARK_NEARBY_RADIUS;

}

