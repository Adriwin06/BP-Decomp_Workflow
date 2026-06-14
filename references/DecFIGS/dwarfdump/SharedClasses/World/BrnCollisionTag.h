// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnCollisionTag.h:104
struct BrnWorld::CollisionTag {
private:
	// BrnCollisionTag.h:200
	uint16_t mu16GroupTag;

	// BrnCollisionTag.h:201
	uint16_t mu16MaterialTag;

public:
	// BrnCollisionTag.h:110
	void Construct();

	// BrnCollisionTag.h:115
	void Construct(uint16_t, uint16_t);

	// BrnCollisionTag.h:121
	uint32_t GetRawData() const;

	// BrnCollisionTag.h:124
	uint16_t GetMaterialTag() const;

	// BrnCollisionTag.h:127
	uint16_t GetGroupTag() const;

	// BrnCollisionTag.h:134
	BrnWorld::TrafficDirection GetTrafficInfo(float32_t *) const;

	// BrnCollisionTag.h:137
	uint16_t GetAISectionIndex() const;

	// BrnCollisionTag.h:140
	uint8_t GetSurfaceId() const;

	// BrnCollisionTag.h:146
	bool IsDrivable() const;

	// BrnCollisionTag.h:149
	bool IsFatal() const;

	// BrnCollisionTag.h:152
	bool IsSuperFatal() const;

	// BrnCollisionTag.h:155
	bool IsInvisible() const;

}

// BrnCollisionTag.h:68
extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct PropEntityID;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct PropEntityID;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct TriggerQueryId;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct RaceCar;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct WorldRegion;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct PropEntityID;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct TriggerQueryId;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct StreamerTargetEntry;

	struct PropEntityID;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	struct RaceCarCrash;

	struct TrafficCrash;

	struct CollisionZone;

	struct TriggerEntityModule;

	struct GlobalIrradianceManager;

	struct ShaderLodInfo;

	struct CandidateViewVolumePlane;

	struct TsmDebugRenderInfo;

	struct BoundingBoxDebugRenderInfo;

	struct PVSDebugComponent;

	struct WorldDebugComponent;

	struct WorldGraphicsStreamer;

	struct BaseStreamer<32>;

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCollisionTag.h:78
	enum TrafficDirection {
		E_TRAFFIC_DIRECTION_VALID = 0,
		E_TRAFFIC_DIRECTION_UNKNOWN = 1,
		E_TRAFFIC_DIRECTION_NO_LANES = 2,
	}

	struct CollisionTag;

	struct TriggerId;

	struct WorldRegion;

	struct PowerParkingManager;

	// Declaration
	struct PowerParkingDebugComponent {
	public:
		PowerParkingDebugComponent();

	}

	struct PlayerVehicleControls;

	struct RaceCar;

	struct StreamerTargetEntry;

	// Declaration
	struct RaceCarAudioStreamer {
	public:
		RaceCarAudioStreamer();

	}

	// Declaration
	struct RaceCarGraphicsStreamer {
	public:
		RaceCarGraphicsStreamer();

	}

	// Declaration
	struct RaceCarAttributeStreamer {
	public:
		RaceCarAttributeStreamer();

	}

	// Declaration
	struct RaceCarPhysicsStreamer {
	public:
		RaceCarPhysicsStreamer();

	}

	// Declaration
	struct RaceCarWheelGraphicsStreamer {
	public:
		RaceCarWheelGraphicsStreamer();

	}

	struct PropEntityID;

	struct PropVolumeInstanceID;

	struct PropEntityRotationParams;

	struct PropEntityInstance;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct NearMissManager;

	struct CrashPlayManager;

	// Declaration
	struct CrashPlayDebugComponent {
	public:
		CrashPlayDebugComponent();

	}

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	struct StoredStompeeData;

	struct RaceCarCrash;

	struct TrafficCrash;

	// Declaration
	struct CrashModule {
	public:
		CrashModule();

		~CrashModule();

	}

	// Declaration
	struct PVSModule {
	public:
		~PVSModule();

		PVSModule();

	}

	struct CollisionZone;

	// Declaration
	struct CollisionDebugComponent {
	public:
		CollisionDebugComponent();

	}

	struct PropPartEntityInstance;

	struct PropCellRecord;

	struct PropZoneManager;

	struct Trigger;

	// Declaration
	struct TriggerEntityModule {
	public:
		TriggerEntityModule();

		~TriggerEntityModule();

	}

	struct GlobalIrradianceManager;

	struct ShaderLodInfo;

	struct BaseStreamer<32>;

	struct BaseStreamer<64>;

	struct BaseStreamer<8>;

	// Declaration
	struct WorldGraphicsStreamer {
	public:
		~WorldGraphicsStreamer();

		WorldGraphicsStreamer();

	}

	// Declaration
	struct RaceCarBaseComponentStreamer {
	public:
		RaceCarBaseComponentStreamer();

	}

	// Declaration
	struct RaceCarEntityModuleDebugComponent {
	public:
		RaceCarEntityModuleDebugComponent();

	}

	// Declaration
	struct BoostDebugComponent {
	public:
		BoostDebugComponent();

	}

	// Declaration
	struct PropEntityDebugComponent {
	public:
		PropEntityDebugComponent();

	}

	// Declaration
	struct TriggerEntityModuleDebugComponent {
	public:
		TriggerEntityModuleDebugComponent();

	}

	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCollisionTag.h:45
	const uint16_t KI_INVALID_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:47
	const uint8_t KU_TRAFFIC_DIRECTION_MIN_ANGLE = 2;

	// BrnCollisionTag.h:48
	const uint8_t KU_TRAFFIC_DIRECTION_MAX_ANGLE = 15;

	// BrnCollisionTag.h:49
	const uint8_t KU_TRAFFIC_DIRECTION_ANGLE_RANGE = 14;

	// BrnCollisionTag.h:50
	const uint8_t KU_TRAFFIC_DIRECTION_NO_LANES;

	// BrnCollisionTag.h:51
	const uint8_t KU_TRAFFIC_DIRECTION_UNKNOWN = 1;

	// BrnCollisionTag.h:54
	const uint16_t KU_MAX_AI_SECTION_INDEX = 32767;

	// BrnCollisionTag.h:55
	const uint8_t KU_MAX_SURFACE_ID = 63;

	// BrnCollisionTag.h:58
	const uint16_t KU_COLLISION_MASK_TOP_BIT = 32768;

	// BrnCollisionTag.h:59
	const uint16_t KU_COLLISION_MASK_TRAFFIC_DATA = 15;

	// BrnCollisionTag.h:60
	const uint16_t KU_COLLISION_MASK_SURFACE_ID = 1008;

	// BrnCollisionTag.h:64
	const uint16_t KU_COLLISION_FLAG_FATAL = 16384;

	// BrnCollisionTag.h:65
	const uint16_t KU_COLLISION_FLAG_DRIVEABLE = 8192;

	// BrnCollisionTag.h:66
	const uint16_t KU_COLLISION_FLAG_SUPERFATAL = 4096;

	// BrnCollisionTag.h:68
	extern const uint8_t KU8_COLLISION_INVISIBLE_SURFACE_ID;

}

