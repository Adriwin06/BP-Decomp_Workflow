// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

		// BrnVehicleConstants.h:103
		extern bool gbReadSurfaceProperties;

		// BrnVehicleConstants.h:108
		extern bool[32] KAB_SURFACE_IS_WATER;

	}

}

// BrnVehicleConstants.h:103
extern bool gbReadSurfaceProperties;

// BrnVehicleConstants.h:108
extern bool[32] KAB_SURFACE_IS_WATER;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct AboveGroundTestResult;

		struct WheelLite;

		struct RaceCarState;

		struct SetRaceCarCullingGroupEvent;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		struct AboveGroundTestResult;

		struct WheelLite;

		struct RaceCarState;

		struct SetRaceCarCullingGroupEvent;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

	struct ContactId;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		struct AboveGroundTestResult;

		struct WheelLite;

		struct RaceCarState;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		// BrnVehicleConstants.h:138
		enum EImpactSituation {
			E_IMPACT_SITUATION_INVALID = -1,
			E_IMPACT_SITUATION_PLAYER_ON_AI = 0,
			E_IMPACT_SITUATION_AI_ON_PLAYER = 1,
			E_IMPACT_SITUATION_AI_ON_AI = 2,
			E_IMPACT_SITUATION_NETWORK = 3,
			E_IMPACT_SITUATION_COUNT = 4,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateWorldEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleInputInterface;

		struct VehicleDriverInputInterface;

		struct TrafficPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct VehicleOutputRequestInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct VehicleEffectsInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		struct ArticulatedJointId;

		struct ArticulatedJoint;

		struct ArticulatedJointCreateBuffer;

		struct ArticulatedJointPool;

		struct PhysicalTrafficManager;

		struct PhysicalTrafficManagerDebugComponent;

		struct RaceCarCrashData;

		struct DebugComponent;

		struct PotentialContactAverager;

		struct VehicleManagerOutputBuffer;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

	struct ExternallySimulatedBody;

	struct ExternalPhysicsBody;

	struct SuspensionSpring;

	struct Spring1D;

	struct ContactId;

	struct ContactGenList;

	struct HashData;

	struct StuntOffencesManager;

	struct JointUtilities;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		// BrnVehicleConstants.h:138
		enum EImpactSituation {
			E_IMPACT_SITUATION_INVALID = -1,
			E_IMPACT_SITUATION_PLAYER_ON_AI = 0,
			E_IMPACT_SITUATION_AI_ON_PLAYER = 1,
			E_IMPACT_SITUATION_AI_ON_AI = 2,
			E_IMPACT_SITUATION_NETWORK = 3,
			E_IMPACT_SITUATION_COUNT = 4,
		}

		struct SimpleVehicleAttribs;

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct Engine;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateWorldEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleInputInterface;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct VehicleOutputRequestInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct VehicleEffectsInputInterface;

		struct VehicleDriverInputInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		struct ArticulatedJointId;

		struct ArticulatedJoint;

		struct ArticulatedJointCreateBuffer;

		struct ArticulatedJointPool;

		struct PhysicalTrafficManager;

		struct PhysicalTrafficManagerDebugComponent;

		struct GearStats;

		struct GripCurveDebugGraph;

		struct RaceCarCrashData;

		struct VehicleManagerDebugComponent;

		struct DebugComponent;

		struct PotentialContactAverager;

		struct TractionLineBuffer<32>;

		struct VehicleManagerOutputBuffer;

		struct TractionLineBuffer<100>;

		struct GripCurveDebugWindow;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

	struct ExternallySimulatedBody;

	struct ExternalPhysicsBody;

	struct SuspensionSpring;

	struct ContactId;

	struct StuntOffencesManager;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct RaceCarCrashEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct VehicleEffectsInputInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct ContactId;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		struct SetRaceCarCullingGroupEvent;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct Engine;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct TrafficPhysics;

		struct VehicleInputInterface;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct VehicleEffectsInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		struct CrashingRaceCarInterface;

		struct BounceModifierSphere;

		struct PlayerParameters;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

	struct ContactId;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		struct BrnPlayerDriverControls;

		struct BrnNetworkDriverControls;

		struct BrnAIDriverControls;

		struct BrnTrafficDriverControls;

		struct AboveGroundTestResult;

		struct ImpactEvent;

		struct WheelLite;

		struct PhysicalTrafficState;

		struct RaceCarState;

		struct CreateRaceCarEvent;

		struct RemoveRaceCarEvent;

		struct SetRaceCarCollisionEvent;

		struct SetRaceCarCullingGroupEvent;

		struct ValidateRaceCarEvent;

		struct CreatePhysicalTrafficEvent;

		struct CreateArticulatedTrafficEvent;

		struct SetTrafficCrashingEvent;

		struct RemoveTrafficEvent;

		struct UpdateNetworkTrafficEvent;

		struct ResetVehicleEvent;

		struct CreateVehicleResult;

		struct TrafficCrashedEvent;

		struct TrafficSlammedEvent;

		struct TrafficRemovedEvent;

		struct RaceCarCrashEvent;

		struct RaceCarResetEvent;

		struct CreateAirRamEvent;

		struct CreateSpinEvent;

		struct VehicleAddedForCollisionEvent;

		struct VehicleDriverInputInterface;

		struct VehicleInputInterface;

		struct VehicleEffectsInputInterface;

		struct TrafficPhysics;

		struct SimpleVehiclePhysics;

		struct RaceCarPhysics;

		struct VehicleDriver;

		struct VehicleGuiOutputMessages;

		struct VehicleManagerOutputInterface;

		struct AggressiveDrivingFlags;

		struct VehicleOutputInterface;

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

	struct InterpedParam3;

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleConstants.h:121
		enum EImpactType {
			E_IMPACT_NONE = 0,
			E_IMPACT_TRADING_PAINT = 1,
			E_IMPACT_NUDGE = 2,
			E_IMPACT_SLAM = 3,
			E_IMPACT_SHUNT = 4,
			E_IMPACT_BOOST_SLAM = 5,
			E_IMPACT_BOOST_SHUNT = 6,
			E_IMPACT_GRINDING = 7,
			E_IMPACT_RUBBING = 8,
			E_IMPACT_COUNT = 9,
		}

		// BrnVehicleConstants.h:138
		enum EImpactSituation {
			E_IMPACT_SITUATION_INVALID = -1,
			E_IMPACT_SITUATION_PLAYER_ON_AI = 0,
			E_IMPACT_SITUATION_AI_ON_PLAYER = 1,
			E_IMPACT_SITUATION_AI_ON_AI = 2,
			E_IMPACT_SITUATION_NETWORK = 3,
			E_IMPACT_SITUATION_COUNT = 4,
		}

		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleConstants.h:29
		const uint8_t ku8MaxNumRaceCars = 8;

		// BrnVehicleConstants.h:34
		const uint8_t ku8MaxNumFullyPhysicalTraffic = 20;

		// BrnVehicleConstants.h:37
		const uint8_t ku8MaxNumSimplePhysicalTraffic = 1;

		// BrnVehicleConstants.h:40
		const uint8_t ku8TotalMaxNumPhysicalTraffic = 20;

		// BrnVehicleConstants.h:55
		const uint8_t ku8MaxNewSpontaneousCrashers = 5;

		// BrnVehicleConstants.h:56
		const uint16_t ku16MainVehicleBodyIndex;

		// BrnVehicleConstants.h:57
		const uint8_t ku8MaxTrafficRecycledPerFrame = 20;

		// BrnVehicleConstants.h:60
		const int32_t kiMaxArticulatedTrafficVehicles = 10;

		// BrnVehicleConstants.h:64
		const int32_t kiNumLineTestsPerVehicle = 5;

		// BrnVehicleConstants.h:67
		const int32_t kiTotalNumTrafficTractionLines = 100;

		// BrnVehicleConstants.h:72
		const int32_t kiNumCacheLineTestsPerRaceCar = 4;

		// BrnVehicleConstants.h:75
		const int32_t kiTotalNumRaceCarTractionLines = 32;

		// BrnVehicleConstants.h:78
		const int32_t kiNumStuckInCollisionLineTests = 4;

		// BrnVehicleConstants.h:81
		const VecFloat kvfVehicleTriangleCachePadding;

		// BrnVehicleConstants.h:85
		const float32_t kfVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:86
		const float32_t kfVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:87
		const float32_t kfVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:88
		const float32_t kfVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:89
		const float32_t kfVehicleDefaultMaxLinearVelocity;

		// BrnVehicleConstants.h:90
		const float32_t kfVehicleDefaultMaxAngularVelocity;

		// BrnVehicleConstants.h:93
		const float32_t kfTrafficVehicleDefaultAngularDrag;

		// BrnVehicleConstants.h:94
		const float32_t kfTrafficVehicleDefaultLinearDrag;

		// BrnVehicleConstants.h:95
		const float32_t kfTrafficVehicleDefaultMaxLinearDisplacement;

		// BrnVehicleConstants.h:96
		const float32_t kfTrafficVehicleDefaultMaxAngularDisplacement;

		// BrnVehicleConstants.h:100
		const int32_t KI_MAX_NUM_SURFACES = 32;

		// BrnVehicleConstants.h:101
		const VecFloat KVF_MAX_ROUGHNESS;

	}

}

