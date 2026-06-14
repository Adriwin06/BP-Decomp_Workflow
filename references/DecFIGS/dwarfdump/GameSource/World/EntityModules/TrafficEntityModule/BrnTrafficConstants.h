// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficConstants.h:48
	const uint32_t KU_MAX_STANDARD_TRAFFIC = 400;

	// BrnTrafficConstants.h:49
	const uint32_t KU_MAX_PARAMS = 400;

	// BrnTrafficConstants.h:50
	const uint32_t KU_MAX_PARAMS_UPDATE_ON_NON_DECISION_FRAME = 100;

	// BrnTrafficConstants.h:51
	const uint32_t KU_MAX_STATIC_TRAFFIC = 200;

	// BrnTrafficConstants.h:52
	const uint32_t KU_MAX_TRAILER_TRAFFIC = 1;

	// BrnTrafficConstants.h:53
	const uint32_t KU_STATIC_TRAFFIC_OFFSET = 400;

	// BrnTrafficConstants.h:54
	const uint32_t KU_TRAILER_TRAFFIC_OFFSET = 600;

	// BrnTrafficConstants.h:55
	const uint32_t KU_MAX_TOTAL_TRAFFIC = 601;

	// BrnTrafficConstants.h:56
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC = 64;

	// BrnTrafficConstants.h:57
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC_ARRAY = 16;

	// BrnTrafficConstants.h:60
	const uint32_t KU_MAX_ACTIVE_HULLS_PER_RACECAR = 9;

	// BrnTrafficConstants.h:65
	const uint32_t KU_MAX_ACTIVE_HULLS = 72;

	// BrnTrafficConstants.h:66
	const uint32_t KU_MAX_GENERATORS = 512;

	// BrnTrafficConstants.h:68
	const uint32_t KI_MAX_NEW_SPONTANEOUS_CRASHING_TRAFFIC = 5;

	// BrnTrafficConstants.h:70
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES_HEADROOM = 5;

	// BrnTrafficConstants.h:71
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES = 25;

	// BrnTrafficConstants.h:73
	const uint32_t KU_MAX_NEW_CRASHED_VEHICLES = 25;

	// BrnTrafficConstants.h:74
	const uint32_t KU_MAX_NEW_REMOVED_VEHICLES = 25;

	// BrnTrafficConstants.h:76
	const uint32_t KU_INVALID_PARAM = 65535;

	// BrnTrafficConstants.h:77
	const uint32_t KU_INVALID_VEHICLE = 65535;

	// BrnTrafficConstants.h:81
	const uint32_t KU_UNKNOWN_NEIGHBOUR = 65534;

	// BrnTrafficConstants.h:82
	const uint32_t KU_UNKNOWN_STOPLINE = 254;

	// BrnTrafficConstants.h:84
	const uint8_t KU_INVALID_HULL_RUNTIME = 255;

	// BrnTrafficConstants.h:87
	const uint32_t KU_INVALID_UPDATE_FRAME = 4294967295;

	// BrnTrafficConstants.h:89
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_50HZ = 5;

	// BrnTrafficConstants.h:90
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_60HZ = 6;

	// BrnTrafficConstants.h:91
	const float32_t KF_UPDATE_TIME_DELTA_NO_SLOWMO;

	// BrnTrafficConstants.h:93
	const float32_t KF_SECONDS_PER_MINUTE;

	// BrnTrafficConstants.h:95
	const uint32_t KU_PARAM_NUM_PLANS = 2;

	// BrnTrafficConstants.h:96
	const uint32_t KU_PARAM_NUM_SEGMENTS_TO_REMEMBER = 6;

	// BrnTrafficConstants.h:99
	const uint32_t KU_UPDATE_FRAMES_PER_HULL_CHANGE = 50;

	// BrnTrafficConstants.h:100
	const float32_t KF_HULL_CHANGE_PREDICTION_TIME;

	// BrnTrafficConstants.h:101
	const uint32_t KU_MAX_HULL_CHANGES_PER_PLAYER = 50;

	// BrnTrafficConstants.h:102
	const uint32_t KU_MAX_HULL_CHANGES = 400;

	// BrnTrafficConstants.h:104
	const uint32_t KU_PURGATORY_TIME_ONLINE = 5;

	// BrnTrafficConstants.h:105
	const uint32_t KU_PURGATORY_TIME_OFFLINE = 5;

	// BrnTrafficConstants.h:108
	const uint32_t KU_MAX_LANE_INSERTIONS_PER_FRAME = 1;

	// BrnTrafficConstants.h:109
	const uint32_t KU_START_PROTECT_UPDATE_FRAME_ONLINE = 100;

	// BrnTrafficConstants.h:111
	const int32_t KI_MAX_NEAR_MISS_TRAFFIC_CARS = 16;

	// BrnTrafficConstants.h:112
	const int32_t KI_MAX_NEAR_MISS_RACE_CARS = 8;

	// BrnTrafficConstants.h:114
	const int32_t KI_MAX_STOMPED_CARS = 8;

	// BrnTrafficConstants.h:116
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS = 5;

	// BrnTrafficConstants.h:117
	const VecFloat KF_TRAFFIC_AVOIDANCE_FEELERS_RECIP;

	// BrnTrafficConstants.h:118
	const float32_t KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE;

	// BrnTrafficConstants.h:119
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS_CALC_COUNT = 2;

	// BrnTrafficConstants.h:121
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX;

	// BrnTrafficConstants.h:122
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR;

	// BrnTrafficConstants.h:123
	const float32_t KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE;

	// BrnTrafficConstants.h:124
	const float32_t KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP;

	// BrnTrafficConstants.h:126
	const uint32_t KU_MAX_SHOWTIME_TRAFFIC_VEHICLES = 32;

	// BrnTrafficConstants.h:128
	const float32_t KF_JUNCTION_FUP_MAX_RADIUS;

	// BrnTrafficConstants.h:129
	const VecFloat KF_JUNCTION_FUP_MAX_RADIUS_SQ;

	// BrnTrafficConstants.h:130
	const float32_t KF_JUNCTION_FUP_SCORE_NEEDS_ACTION;

	// BrnTrafficConstants.h:131
	const float32_t KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficConstants.h:147
	extern EntityId MakeTrafficEntityId(uint32_t);

	// BrnTrafficConstants.h:163
	extern VolumeInstanceId MakeTrafficVolumeInstanceId(uint32_t);

	// BrnTrafficConstants.h:48
	const uint32_t KU_MAX_STANDARD_TRAFFIC = 400;

	// BrnTrafficConstants.h:49
	const uint32_t KU_MAX_PARAMS = 400;

	// BrnTrafficConstants.h:50
	const uint32_t KU_MAX_PARAMS_UPDATE_ON_NON_DECISION_FRAME = 100;

	// BrnTrafficConstants.h:51
	const uint32_t KU_MAX_STATIC_TRAFFIC = 200;

	// BrnTrafficConstants.h:52
	const uint32_t KU_MAX_TRAILER_TRAFFIC = 1;

	// BrnTrafficConstants.h:53
	const uint32_t KU_STATIC_TRAFFIC_OFFSET = 400;

	// BrnTrafficConstants.h:54
	const uint32_t KU_TRAILER_TRAFFIC_OFFSET = 600;

	// BrnTrafficConstants.h:55
	const uint32_t KU_MAX_TOTAL_TRAFFIC = 601;

	// BrnTrafficConstants.h:56
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC = 64;

	// BrnTrafficConstants.h:57
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC_ARRAY = 16;

	// BrnTrafficConstants.h:60
	const uint32_t KU_MAX_ACTIVE_HULLS_PER_RACECAR = 9;

	// BrnTrafficConstants.h:65
	const uint32_t KU_MAX_ACTIVE_HULLS = 72;

	// BrnTrafficConstants.h:66
	const uint32_t KU_MAX_GENERATORS = 512;

	// BrnTrafficConstants.h:68
	const uint32_t KI_MAX_NEW_SPONTANEOUS_CRASHING_TRAFFIC = 5;

	// BrnTrafficConstants.h:70
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES_HEADROOM = 5;

	// BrnTrafficConstants.h:71
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES = 25;

	// BrnTrafficConstants.h:73
	const uint32_t KU_MAX_NEW_CRASHED_VEHICLES = 25;

	// BrnTrafficConstants.h:74
	const uint32_t KU_MAX_NEW_REMOVED_VEHICLES = 25;

	// BrnTrafficConstants.h:76
	const uint32_t KU_INVALID_PARAM = 65535;

	// BrnTrafficConstants.h:77
	const uint32_t KU_INVALID_VEHICLE = 65535;

	// BrnTrafficConstants.h:81
	const uint32_t KU_UNKNOWN_NEIGHBOUR = 65534;

	// BrnTrafficConstants.h:82
	const uint32_t KU_UNKNOWN_STOPLINE = 254;

	// BrnTrafficConstants.h:84
	const uint8_t KU_INVALID_HULL_RUNTIME = 255;

	// BrnTrafficConstants.h:87
	const uint32_t KU_INVALID_UPDATE_FRAME = 4294967295;

	// BrnTrafficConstants.h:89
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_50HZ = 5;

	// BrnTrafficConstants.h:90
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_60HZ = 6;

	// BrnTrafficConstants.h:91
	const float32_t KF_UPDATE_TIME_DELTA_NO_SLOWMO;

	// BrnTrafficConstants.h:93
	const float32_t KF_SECONDS_PER_MINUTE;

	// BrnTrafficConstants.h:95
	const uint32_t KU_PARAM_NUM_PLANS = 2;

	// BrnTrafficConstants.h:96
	const uint32_t KU_PARAM_NUM_SEGMENTS_TO_REMEMBER = 6;

	// BrnTrafficConstants.h:99
	const uint32_t KU_UPDATE_FRAMES_PER_HULL_CHANGE = 50;

	// BrnTrafficConstants.h:100
	const float32_t KF_HULL_CHANGE_PREDICTION_TIME;

	// BrnTrafficConstants.h:101
	const uint32_t KU_MAX_HULL_CHANGES_PER_PLAYER = 50;

	// BrnTrafficConstants.h:102
	const uint32_t KU_MAX_HULL_CHANGES = 400;

	// BrnTrafficConstants.h:104
	const uint32_t KU_PURGATORY_TIME_ONLINE = 5;

	// BrnTrafficConstants.h:105
	const uint32_t KU_PURGATORY_TIME_OFFLINE = 5;

	// BrnTrafficConstants.h:108
	const uint32_t KU_MAX_LANE_INSERTIONS_PER_FRAME = 1;

	// BrnTrafficConstants.h:109
	const uint32_t KU_START_PROTECT_UPDATE_FRAME_ONLINE = 100;

	// BrnTrafficConstants.h:111
	const int32_t KI_MAX_NEAR_MISS_TRAFFIC_CARS = 16;

	// BrnTrafficConstants.h:112
	const int32_t KI_MAX_NEAR_MISS_RACE_CARS = 8;

	// BrnTrafficConstants.h:114
	const int32_t KI_MAX_STOMPED_CARS = 8;

	// BrnTrafficConstants.h:116
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS = 5;

	// BrnTrafficConstants.h:117
	const VecFloat KF_TRAFFIC_AVOIDANCE_FEELERS_RECIP;

	// BrnTrafficConstants.h:118
	const float32_t KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE;

	// BrnTrafficConstants.h:119
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS_CALC_COUNT = 2;

	// BrnTrafficConstants.h:121
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX;

	// BrnTrafficConstants.h:122
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR;

	// BrnTrafficConstants.h:123
	const float32_t KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE;

	// BrnTrafficConstants.h:124
	const float32_t KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP;

	// BrnTrafficConstants.h:126
	const uint32_t KU_MAX_SHOWTIME_TRAFFIC_VEHICLES = 32;

	// BrnTrafficConstants.h:128
	const float32_t KF_JUNCTION_FUP_MAX_RADIUS;

	// BrnTrafficConstants.h:129
	const VecFloat KF_JUNCTION_FUP_MAX_RADIUS_SQ;

	// BrnTrafficConstants.h:130
	const float32_t KF_JUNCTION_FUP_SCORE_NEEDS_ACTION;

	// BrnTrafficConstants.h:131
	const float32_t KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficConstants.h:163
	extern VolumeInstanceId MakeTrafficVolumeInstanceId(uint32_t);

	// BrnTrafficConstants.h:48
	const uint32_t KU_MAX_STANDARD_TRAFFIC = 400;

	// BrnTrafficConstants.h:49
	const uint32_t KU_MAX_PARAMS = 400;

	// BrnTrafficConstants.h:50
	const uint32_t KU_MAX_PARAMS_UPDATE_ON_NON_DECISION_FRAME = 100;

	// BrnTrafficConstants.h:51
	const uint32_t KU_MAX_STATIC_TRAFFIC = 200;

	// BrnTrafficConstants.h:52
	const uint32_t KU_MAX_TRAILER_TRAFFIC = 1;

	// BrnTrafficConstants.h:53
	const uint32_t KU_STATIC_TRAFFIC_OFFSET = 400;

	// BrnTrafficConstants.h:54
	const uint32_t KU_TRAILER_TRAFFIC_OFFSET = 600;

	// BrnTrafficConstants.h:55
	const uint32_t KU_MAX_TOTAL_TRAFFIC = 601;

	// BrnTrafficConstants.h:56
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC = 64;

	// BrnTrafficConstants.h:57
	const uint32_t KU_MAX_COLLIDABLE_CACHED_TRAFFIC_ARRAY = 16;

	// BrnTrafficConstants.h:60
	const uint32_t KU_MAX_ACTIVE_HULLS_PER_RACECAR = 9;

	// BrnTrafficConstants.h:65
	const uint32_t KU_MAX_ACTIVE_HULLS = 72;

	// BrnTrafficConstants.h:66
	const uint32_t KU_MAX_GENERATORS = 512;

	// BrnTrafficConstants.h:68
	const uint32_t KI_MAX_NEW_SPONTANEOUS_CRASHING_TRAFFIC = 5;

	// BrnTrafficConstants.h:70
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES_HEADROOM = 5;

	// BrnTrafficConstants.h:71
	const uint32_t KU_MAX_PHYSICAL_TRAFFIC_VEHICLES = 25;

	// BrnTrafficConstants.h:73
	const uint32_t KU_MAX_NEW_CRASHED_VEHICLES = 25;

	// BrnTrafficConstants.h:74
	const uint32_t KU_MAX_NEW_REMOVED_VEHICLES = 25;

	// BrnTrafficConstants.h:76
	const uint32_t KU_INVALID_PARAM = 65535;

	// BrnTrafficConstants.h:77
	const uint32_t KU_INVALID_VEHICLE = 65535;

	// BrnTrafficConstants.h:81
	const uint32_t KU_UNKNOWN_NEIGHBOUR = 65534;

	// BrnTrafficConstants.h:82
	const uint32_t KU_UNKNOWN_STOPLINE = 254;

	// BrnTrafficConstants.h:84
	const uint8_t KU_INVALID_HULL_RUNTIME = 255;

	// BrnTrafficConstants.h:87
	const uint32_t KU_INVALID_UPDATE_FRAME = 4294967295;

	// BrnTrafficConstants.h:89
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_50HZ = 5;

	// BrnTrafficConstants.h:90
	const uint32_t KU_NUM_FRAMES_BETWEEN_DECISIONS_60HZ = 6;

	// BrnTrafficConstants.h:91
	const float32_t KF_UPDATE_TIME_DELTA_NO_SLOWMO;

	// BrnTrafficConstants.h:93
	const float32_t KF_SECONDS_PER_MINUTE;

	// BrnTrafficConstants.h:95
	const uint32_t KU_PARAM_NUM_PLANS = 2;

	// BrnTrafficConstants.h:96
	const uint32_t KU_PARAM_NUM_SEGMENTS_TO_REMEMBER = 6;

	// BrnTrafficConstants.h:99
	const uint32_t KU_UPDATE_FRAMES_PER_HULL_CHANGE = 50;

	// BrnTrafficConstants.h:100
	const float32_t KF_HULL_CHANGE_PREDICTION_TIME;

	// BrnTrafficConstants.h:101
	const uint32_t KU_MAX_HULL_CHANGES_PER_PLAYER = 50;

	// BrnTrafficConstants.h:102
	const uint32_t KU_MAX_HULL_CHANGES = 400;

	// BrnTrafficConstants.h:104
	const uint32_t KU_PURGATORY_TIME_ONLINE = 5;

	// BrnTrafficConstants.h:105
	const uint32_t KU_PURGATORY_TIME_OFFLINE = 5;

	// BrnTrafficConstants.h:108
	const uint32_t KU_MAX_LANE_INSERTIONS_PER_FRAME = 1;

	// BrnTrafficConstants.h:109
	const uint32_t KU_START_PROTECT_UPDATE_FRAME_ONLINE = 100;

	// BrnTrafficConstants.h:111
	const int32_t KI_MAX_NEAR_MISS_TRAFFIC_CARS = 16;

	// BrnTrafficConstants.h:112
	const int32_t KI_MAX_NEAR_MISS_RACE_CARS = 8;

	// BrnTrafficConstants.h:114
	const int32_t KI_MAX_STOMPED_CARS = 8;

	// BrnTrafficConstants.h:116
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS = 5;

	// BrnTrafficConstants.h:117
	const VecFloat KF_TRAFFIC_AVOIDANCE_FEELERS_RECIP;

	// BrnTrafficConstants.h:118
	const float32_t KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE;

	// BrnTrafficConstants.h:119
	const int32_t KI_TRAFFIC_AVOIDANCE_FEELERS_CALC_COUNT = 2;

	// BrnTrafficConstants.h:121
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX;

	// BrnTrafficConstants.h:122
	const float32_t KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR;

	// BrnTrafficConstants.h:123
	const float32_t KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE;

	// BrnTrafficConstants.h:124
	const float32_t KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP;

	// BrnTrafficConstants.h:126
	const uint32_t KU_MAX_SHOWTIME_TRAFFIC_VEHICLES = 32;

	// BrnTrafficConstants.h:128
	const float32_t KF_JUNCTION_FUP_MAX_RADIUS;

	// BrnTrafficConstants.h:129
	const VecFloat KF_JUNCTION_FUP_MAX_RADIUS_SQ;

	// BrnTrafficConstants.h:130
	const float32_t KF_JUNCTION_FUP_SCORE_NEEDS_ACTION;

	// BrnTrafficConstants.h:131
	const float32_t KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION;

}

