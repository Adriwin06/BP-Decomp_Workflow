// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldSharedConstants.h:93
	enum CarControl {
		E_CAR_CONTROL_NONE = 0,
		E_CAR_CONTROL_ENTITY_MODULE = 1,
		E_CAR_CONTROL_AI_MODULE = 2,
	}

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldSharedConstants.h:93
	enum CarControl {
		E_CAR_CONTROL_NONE = 0,
		E_CAR_CONTROL_ENTITY_MODULE = 1,
		E_CAR_CONTROL_AI_MODULE = 2,
	}

	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct TriggerQueryId;

	struct RaceCar;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct PropEntityID;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct PlayerVehicleControls;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct RaceCar;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct TriggerQueryId;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct RaceCar;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnWorldSharedConstants.h:93
	enum CarControl {
		E_CAR_CONTROL_NONE = 0,
		E_CAR_CONTROL_ENTITY_MODULE = 1,
		E_CAR_CONTROL_AI_MODULE = 2,
	}

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct PropEntityID;

	struct PropVolumeInstanceID;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct WorldRegion;

	struct CollisionTag;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct RaceCar;

	struct TriggerQueryId;

	struct PropEntityID;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldSharedConstants.h:93
	enum CarControl {
		E_CAR_CONTROL_NONE = 0,
		E_CAR_CONTROL_ENTITY_MODULE = 1,
		E_CAR_CONTROL_AI_MODULE = 2,
	}

	struct TriggerId;

	struct WorldRegion;

	struct CollisionTag;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnWorldSharedConstants.h:93
	enum CarControl {
		E_CAR_CONTROL_NONE = 0,
		E_CAR_CONTROL_ENTITY_MODULE = 1,
		E_CAR_CONTROL_AI_MODULE = 2,
	}

	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldSharedConstants.h:32
	const int32_t KI_MAX_ACTIVE_RACE_CARS = 8;

	// BrnWorldSharedConstants.h:33
	const int32_t KI_MAX_RIVALS_IN_MODE = 7;

	// BrnWorldSharedConstants.h:34
	const int32_t KI_MAX_RIVALS_IN_WORLD = 34;

	// BrnWorldSharedConstants.h:35
	const int32_t KI_MAX_OUT_OF_RANGE_RACE_CARS = 35;

	// BrnWorldSharedConstants.h:37
	const int32_t KI_INVALID_OPPONENT = 4294967295;

	// BrnWorldSharedConstants.h:38
	const int32_t KI_INVALID_RIVAL = 4294967295;

	// BrnWorldSharedConstants.h:40
	const int32_t KI_HACK_NUM_RIVALCARS_THAT_FIT_IN_MEM = 7;

	// BrnWorldSharedConstants.h:42
	const float32_t KF_AI_INACTIVE_DISTANCE_BIAS;

	// BrnWorldSharedConstants.h:44
	const uint32_t KU_MAX_LAPS = 4;

	// BrnWorldSharedConstants.h:46
	const int8_t KI_MAX_DISTRICT_ROAMING_SECTIONS = 8;

	// BrnWorldSharedConstants.h:48
	const float32_t KF_INVALID_DISTANCE;

	// BrnWorldSharedConstants.h:50
	const int32_t KI_MAX_STUNT_ELEMENTS = 512;

	// BrnWorldSharedConstants.h:53
	const float32_t KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME;

	// BrnWorldSharedConstants.h:55
	const int32_t KI_MAX_VISIBLE_WORLD_ENTITIES = 4500;

	// BrnWorldSharedConstants.h:56
	const int32_t KI_MAX_VISIBLE_RACECAR_ENTITIES = 32;

	// BrnWorldSharedConstants.h:57
	const int32_t KI_MAX_VISIBLE_TRAFFIC_ENTITIES = 650;

	// BrnWorldSharedConstants.h:58
	const int32_t KI_MAX_VISIBLE_PROP_ENTITIES = 2048;

	// BrnWorldSharedConstants.h:60
	const int32_t KI_INVALID_CAR_COLOUR = 4294967295;

	// BrnWorldSharedConstants.h:61
	const int32_t KI_INVALID_CAR_COLOUR_PALETTE = 4294967295;

	// BrnWorldSharedConstants.h:64
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_PER_FRAME = 8;

	// BrnWorldSharedConstants.h:65
	const int32_t KI_MAX_ADD_REMOVE_FOR_COLLISION_ALL_CARS = 64;

	// BrnWorldSharedConstants.h:69
	const CgsDev::PerfMonCpuPage KE_RACEECAR_PERFMON_PAGE;

	// BrnWorldSharedConstants.h:73
	const uint32_t KU_MAX_CRASHING_TRAFFIC_VEHICLES = 160;

	// BrnWorldSharedConstants.h:77
	const int32_t KI_DAMAGED_TECHNIQUE;

	// BrnWorldSharedConstants.h:78
	const int32_t KI_BLURRED_TECHNIQUE;

	// BrnWorldSharedConstants.h:79
	const int32_t KI_DEFAULT_TECHNIQUE = 1;

	// BrnWorldSharedConstants.h:80
	const int32_t KI_ZONLY_DEFAULT_TECHNIQUE = 2;

	// BrnWorldSharedConstants.h:81
	const int32_t KI_ZONLY_DAMAGED_TECHNIQUE = 3;

	// BrnWorldSharedConstants.h:83
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY;

	// BrnWorldSharedConstants.h:84
	const VecFloat KVF_BLURRED_WHEEL_VELOCITY_RECIP;

	// BrnWorldSharedConstants.h:87
	const float32_t KF_MIN_SPEED_FOR_AIR_MPH;

}

