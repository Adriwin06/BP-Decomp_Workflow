// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

}

// BrnWorldRegion.h:98
struct BrnWorld::WorldRegion {
private:
	// BrnWorldRegion.h:132
	BrnWorld::ECounty meCounty;

	// BrnWorldRegion.h:133
	BrnWorld::EDistrict meDistrict;

public:
	// BrnWorldRegion.h:103
	void Construct(BrnWorld::EDistrict);

	// BrnWorldRegion.h:106
	BrnWorld::ECounty GetCounty() const;

	// BrnWorldRegion.h:109
	BrnWorld::EDistrict GetDistrict() const;

	// BrnWorldRegion.h:113
	BrnWorld::ECounty StringToCounty(const char *);

	// BrnWorldRegion.h:117
	BrnWorld::EDistrict StringToDistrict(const char *);

	// BrnWorldRegion.h:121
	const char * CountyToString(BrnWorld::ECounty);

	// BrnWorldRegion.h:125
	const char * DistrictToString(BrnWorld::EDistrict);

	// BrnWorldRegion.h:129
	BrnWorld::ECounty DistrictToCounty(BrnWorld::EDistrict);

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct CollisionTag;

	struct TriggerId;

	struct PowerParkingManager;

	struct PowerParkingDebugComponent;

	struct PlayerVehicleControls;

	struct RaceCar;

	struct StreamerTargetEntry;

	struct RaceCarGraphicsStreamer;

	struct RaceCarAttributeStreamer;

	struct RaceCarPhysicsStreamer;

	struct RaceCarWheelGraphicsStreamer;

	struct PropEntityID;

	struct PropVolumeID;

	struct PropVolumeInstanceID;

	struct PropEntityRotationParams;

	struct PropEntityInstance;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct BoostBurnout2;

	struct BoostBurnout3;

	struct BoostStrategy;

	struct NearMissManager;

	struct TrafficCheckManager;

	struct CrashPlayManager;

	struct CrashPlayDebugComponent;

	struct PlaceOnTrackManager;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct TriggerQueryId;

	struct StoredStompeeData;

	struct PropPartEntityInstance;

	struct PropCellRecord;

	struct PropZoneManager;

	struct Trigger;

	struct ShaderLodInfo;

	struct CrashComboItem;

	struct CrashCombo;

	struct PropEntityDebugComponent;

	struct TriggerEntityModuleDebugComponent;

	struct RaceCarEntityModuleDebugComponent;

	struct BoostBurnout4;

	struct BoostBurnout1;

	struct BoostDebugComponent;

	struct RaceCarBaseComponentStreamer;

	struct BaseStreamer<8>;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct TriggerId;

	struct CollisionTag;

	struct ActiveRaceCar;

	struct PlayerVehicleControls;

	struct TriggerQueryId;

	struct RaceCar;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	// BrnWorldRegion.h:44
	extern BrnWorld::ECounty operator++(BrnWorld::ECounty &, int);

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct TriggerId;

	struct CollisionTag;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	// BrnWorldRegion.h:81
	extern const char *[6] KAPC_COUNTY_NAMES;

	// BrnWorldRegion.h:83
	extern const const char *[19] KAPC_DISTRICT_NAMES;

}

// BrnWorldRegion.h:81
extern const char *[6] KAPC_COUNTY_NAMES;

// BrnWorldRegion.h:83
extern const const char *[19] KAPC_DISTRICT_NAMES;

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct TriggerId;

	struct CollisionTag;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct TriggerId;

	struct CollisionTag;

	struct ActiveRaceCar;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct RaceCar;

	struct TriggerQueryId;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

	struct WorldRegion;

	struct TriggerId;

	struct CollisionTag;

	struct PlayerVehicleControls;

	struct PlayerCarColourPalette;

	struct GlobalColourPalette;

	struct RaceCar;

	struct RaceCarCrashData;

	struct DetachedPartRenderEvent;

	struct TriggerQueryId;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnWorldRegion.h:30
	enum ECounty {
		E_COUNTY_PALM_BAY_HEIGHTS = 0,
		E_COUNTY_SILVER_LAKE = 1,
		E_COUNTY_HARBOR_TOWN = 2,
		E_COUNTY_WHITE_MOUNTAIN = 3,
		E_COUNTY_DOWNTOWN_PARADISE = 4,
		E_COUNTY_VALID_COUNT = 5,
		E_COUNTY_INVALID = 5,
		E_COUNTY_COUNT = 6,
	}

	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldRegion.h:46
	enum EDistrict {
		E_DISTRICT_OCEAN_VIEW = 0,
		E_DISTRICT_WEST_ACRES = 1,
		E_DISTRICT_TWIN_BRIDGES = 2,
		E_DISTRICT_BIG_SURF_BEACH = 3,
		E_DISTRICT_EASTERN_SHORE = 4,
		E_DISTRICT_HILLSIDE_PASS = 5,
		E_DISTRICT_HEARTBREAK_HILLS = 6,
		E_DISTRICT_ROCKRIDGE_CLIFFS = 7,
		E_DISTRICT_SOUTH_BAY = 8,
		E_DISTRICT_PARK_VALE = 9,
		E_DISTRICT_PARADISE_WHARF = 10,
		E_DISTRICT_CRISTAL_SUMMIT = 11,
		E_DISTRICT_LONE_PEAKS = 12,
		E_DISTRICT_SUNSET_VALLEY = 13,
		E_DISTRICT_DOWNTOWN = 14,
		E_DISTRICT_RIVER_CITY = 15,
		E_DISTRICT_MOTOR_CITY = 16,
		E_DISTRICT_WATERFRONT = 17,
		E_DISTRICT_VALID_COUNT = 18,
		E_DISTRICT_INVALID = 18,
		E_DISTRICT_COUNT = 19,
	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
}

