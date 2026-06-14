// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:65
	enum Directions {
		E_DIR_STRAIGHT_ON = 0,
		E_DIR_LEFT = 1,
		E_DIR_RIGHT = 2,
		E_DIRECTIONS_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct JunctionLogicBox;

	struct VehicleTypeRuntime;

	struct VehicleSoaData;

	struct Axle;

	struct LaneRung;

	struct VehicleAxles;

	struct Param;

	struct Hull;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	struct LightTriggerId;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct JunctionLogicBox;

	struct VehicleTypeRuntime;

	struct VehicleSoaData;

	struct Axle;

	struct LaneRung;

	struct VehicleAxles;

	struct Param;

	struct Hull;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	struct ParamSoaData;

	struct ParamPlan;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct JunctionLogicBox;

	struct LaneRung;

	struct Hull;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct JunctionLogicBox;

	struct LaneRung;

	struct Hull;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	struct LightTriggerId;

	struct JunctionLogicBox;

	struct TrafficLightController;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct JunctionLogicBox;

	struct LaneRung;

	struct Neighbour;

	struct Section;

	struct Hull;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct VehicleTraits;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	struct LightTriggerId;

	struct Logger;

	struct TrafficEntityModule;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	struct JunctionLogicBox;

	struct TrafficLightController;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficDataResourceType {
	public:
		TrafficDataResourceType();

	}

	// Declaration
	struct GraphicsStubResourceType {
	public:
		GraphicsStubResourceType();

	}

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:65
	enum Directions {
		E_DIR_STRAIGHT_ON = 0,
		E_DIR_LEFT = 1,
		E_DIR_RIGHT = 2,
		E_DIRECTIONS_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct JunctionLogicBox;

	struct PhysicalRequestInfo;

	struct PhysicalRequestInfoList;

	struct PurgatoryInfo;

	struct HullChangeInfo;

	struct VehicleTypeRuntime;

	struct TweakValues;

	struct VehicleSoaData;

	struct Axle;

	struct LaneRung;

	struct VehicleAxles;

	struct Param;

	struct Hull;

	struct VehicleRenderInfo;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	struct GraphicsStub;

	struct FuzzyEnvelopeSet4;

	struct HullRuntime;

	struct TrafficLightManager;

	struct ParamSoaData;

	struct ParamPlan;

	struct ParamTransform;

	struct ParamListNode;

	struct ParamNeedToSlowData;

	struct RaceCarStateData;

	struct StaticTrafficParam;

	struct BaseTrafficJobParams;

	struct UpdateVehiclesJobParams;

	union JobParams {
	}
	struct TrafficJobStub;

	struct GeneratorAddress;

	struct TrafficCrashInfo;

	struct DetachedPartRenderEvent;

	struct FiredKillZoneInfo;

	struct StoredAITrafficData;

	struct CrashingThingData;

	struct CollidableVehicleInfo4;

	struct DEBUG_VehicleAvoidance;

	struct PhysicalVehicleInfo;

	struct DEBUG_VehicleFuzzyLogic;

	struct ShowtimeVehicleInfo;

	struct Logger;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct JunctionLogicBox;

	struct PhysicalRequestInfo;

	struct PhysicalRequestInfoList;

	struct PurgatoryInfo;

	struct HullChangeInfo;

	struct VehicleTypeRuntime;

	struct PatternGenerator;

	struct TweakValues;

	struct VehicleSoaData;

	struct Axle;

	struct LaneRung;

	struct VehicleAxles;

	struct Param;

	struct Hull;

	struct VehicleRenderInfo;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	struct GraphicsStub;

	struct TrafficCarStreamer;

	struct FuzzyEnvelopeSet4;

	struct HullRuntime;

	struct TrafficLightManager;

	struct ParamSoaData;

	struct ParamPlan;

	struct ParamTransform;

	struct ParamListNode;

	struct ParamNeedToSlowData;

	struct RaceCarStateData;

	struct StaticTrafficParam;

	struct BaseTrafficJobParams;

	struct UpdateVehiclesJobParams;

	union JobParams {
	}
	struct TrafficJobStub;

	struct DetachedPartRenderEvent;

	struct TrafficPhysicsInfo;

	struct FiredKillZoneInfo;

	struct CollidableVehicleInfo4;

	struct DEBUG_VehicleAvoidance;

	struct DEBUG_VehicleFuzzyLogic;

	struct ShowtimeVehicleInfo;

	struct FrameLogData;

	struct Logger;

	struct GraphicsStubResourceType;

	struct TrafficDataResourceType;

	struct DebugComponent;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct JunctionLogicBox;

	struct LaneRung;

	struct Hull;

	struct VehicleRenderInfo;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficSharedConstants.h:76
	enum Side {
		E_LEFT = 0,
		E_RIGHT = 1,
		E_SIDE_COUNT = 2,
	}

	// BrnTrafficSharedConstants.h:86
	enum ETrafficLightState {
		E_TRAFFICLIGHTSTATE_RED = 0,
		E_TRAFFICLIGHTSTATE_AMBER = 1,
		E_TRAFFICLIGHTSTATE_GREEN = 2,
		E_TRAFFICLIGHTSTATE_COUNT = 3,
	}

	// BrnTrafficSharedConstants.h:96
	enum ERaceDesinationType {
		E_RACE_DESTINATION_EASY = 0,
		E_RACE_DESTINATION_MEDIUM = 1,
		E_RACE_DESTINATION_HARD = 2,
		E_RACE_DESTINATION_COUNT = 3,
	}

	struct VehicleTypeUpdateData;

	struct VehicleTypeData;

	struct LightTriggerId;

	struct LightTrigger;

	struct LightTriggerStartData;

	struct JunctionLogicBox;

	struct PhysicalRequestInfo;

	struct PhysicalRequestInfoList;

	struct PurgatoryInfo;

	struct HullChangeInfo;

	struct VehicleTypeRuntime;

	struct TweakValues;

	struct VehicleSoaData;

	struct Axle;

	struct LaneRung;

	struct VehicleAxles;

	struct Param;

	struct Hull;

	struct VehicleTraits;

	struct Neighbour;

	struct Section;

	struct SectionSpan;

	struct SectionFlow;

	struct StopLine;

	struct StaticTrafficVehicle;

	struct KillZoneRegion;

	struct KillZone;

	struct TrafficLightType;

	struct TrafficLightCollection;

	struct TrafficLightController;

	struct TrafficData;

	struct Pvs;

	struct FlowType;

	struct VehicleAsset;

	struct GraphicsStub;

	struct FuzzyEnvelopeSet4;

	struct ParamSoaData;

	struct ParamPlan;

	struct ParamTransform;

	struct RaceCarStateData;

	struct BaseTrafficJobParams;

	struct UpdateVehiclesJobParams;

	union JobParams {
	}
	struct TrafficJobStub;

	struct TrafficCrashInfo;

	struct DetachedPartRenderEvent;

	struct TrafficPhysicsInfo;

	struct FiredKillZoneInfo;

	struct StoredAITrafficData;

	struct CollidableVehicleInfo4;

	// BrnTrafficSharedConstants.h:30
	const uint32_t KU_MAX_HULLS = 400;

	// BrnTrafficSharedConstants.h:31
	const uint32_t KU_MAX_HULLS_IN_PVS = 8;

	// BrnTrafficSharedConstants.h:33
	const uint8_t KU_INVALID_SECTION = 255;

	// BrnTrafficSharedConstants.h:34
	const uint16_t KU_INVALID_HULL = 65535;

	// BrnTrafficSharedConstants.h:35
	const uint16_t KU_INVALID_NEIGHBOUR = 65535;

	// BrnTrafficSharedConstants.h:36
	const uint8_t KU_INVALID_STOPLINE = 255;

	// BrnTrafficSharedConstants.h:37
	const uint16_t KU_INVALID_FLOWTYPE = 65535;

	// BrnTrafficSharedConstants.h:38
	const uint16_t KU_INVALID_KILLZONEREGION = 65535;

	// BrnTrafficSharedConstants.h:39
	const uint8_t KU_INVALID_TRAFFIC_LIGHT_TRIGGER = 255;

	// BrnTrafficSharedConstants.h:41
	const uint32_t KU_MAX_KILLZONEREGIONS = 8192;

	// BrnTrafficSharedConstants.h:42
	const uint32_t KU_MAX_SECTIONS_PER_HULL = 256;

	// BrnTrafficSharedConstants.h:43
	const uint32_t KU_MAX_RUNGS_PER_SECTION = 256;

	// BrnTrafficSharedConstants.h:44
	const uint32_t KU_MAX_RUNGS_PER_HULL = 65536;

	// BrnTrafficSharedConstants.h:46
	const uint32_t KU_MAX_VEHICLE_ASSETS = 64;

	// BrnTrafficSharedConstants.h:47
	const uint32_t KU_MAX_VEHICLE_TYPES = 96;

	// BrnTrafficSharedConstants.h:48
	const uint32_t KU_MAX_VEHICLE_ASSETS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:50
	const uint32_t KU_MAX_TRAFFIC_LIGHT_STATES = 16;

	// BrnTrafficSharedConstants.h:51
	const uint32_t KU_MAX_TRAFFIC_LIGHTS = 8;

	// BrnTrafficSharedConstants.h:53
	const float32_t KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE;

	// BrnTrafficSharedConstants.h:55
	const uint32_t KU_MAX_JUNCTIONS_PER_HULL = 16;

	// BrnTrafficSharedConstants.h:56
	const uint32_t KU_MAX_STOP_LINES_PER_HULL = 64;

	// BrnTrafficSharedConstants.h:57
	const uint32_t KU_MAX_STOP_LINES_PER_CONTROLLER = 6;

	// BrnTrafficSharedConstants.h:58
	const uint32_t KU_MAX_TRAFFIC_LIGHTS_PER_CONTROLLER = 2;

	// BrnTrafficSharedConstants.h:59
	const uint32_t KU_MAX_TRAFFIC_LIGHT_INSTANCES = 2048;

	// BrnTrafficSharedConstants.h:61
	const uint32_t KU_MAX_RACE_DESTINATIONS_PER_TRAFFIC_LIGHT = 16;

}

