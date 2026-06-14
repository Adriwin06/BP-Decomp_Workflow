// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:222
	extern float32_t KF_VEHICLE_MAX_TIME_FOR_RECENT_CHECK;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

// BrnTrafficTweakConstants.h:222
extern float32_t KF_VEHICLE_MAX_TIME_FOR_RECENT_CHECK;

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:35
	namespace Fuzzy {
	}

	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:222
	extern float32_t KF_VEHICLE_MAX_TIME_FOR_RECENT_CHECK;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:35
	namespace Fuzzy {
	}

	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:198
	extern float32_t KF_MAX_MASS_FOR_TRAFFIC_CHECKING;

	// BrnTrafficTweakConstants.h:222
	extern float32_t KF_VEHICLE_MAX_TIME_FOR_RECENT_CHECK;

	// BrnTrafficTweakConstants.h:223
	extern float32_t KF_VEHICLE_POST_CHECK_ANGULAR_DAMPING;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

// BrnTrafficTweakConstants.h:198
extern float32_t KF_MAX_MASS_FOR_TRAFFIC_CHECKING;

// BrnTrafficTweakConstants.h:223
extern float32_t KF_VEHICLE_POST_CHECK_ANGULAR_DAMPING;

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:35
	namespace Fuzzy {
		struct FuzzyBehaviourLogic;

	}

	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

// BrnTrafficTweakConstants.h:328
struct BrnTraffic::TweakValues {
private:
	// BrnTrafficTweakConstants.h:333
	float32_t mfStoplineVariation;

	// BrnTrafficTweakConstants.h:334
	float32_t mfRaceCarStopDist;

	// BrnTrafficTweakConstants.h:335
	float32_t mfGapClosingFactor;

	// BrnTrafficTweakConstants.h:336
	float32_t mfMinNormalAcceleration;

	// BrnTrafficTweakConstants.h:337
	float32_t mfMaxNormalAcceleration;

	// BrnTrafficTweakConstants.h:338
	float32_t mfMinAcceleration;

	// BrnTrafficTweakConstants.h:339
	float32_t mfMaxAcceleration;

	// BrnTrafficTweakConstants.h:340
	float32_t mfMinSpeedForCutoff;

	// BrnTrafficTweakConstants.h:341
	float32_t mfMinStopDist;

	// BrnTrafficTweakConstants.h:343
	float32_t mfSwerveScoreScale;

	// BrnTrafficTweakConstants.h:344
	float32_t mfExtremeSwerveScoreScale;

	// BrnTrafficTweakConstants.h:345
	float32_t mfExtremeSwerveStickiness;

	// BrnTrafficTweakConstants.h:346
	float32_t mfExtremeSwerveMinTime;

	// BrnTrafficTweakConstants.h:348
	float32_t mfSpinAirRamMagMin;

	// BrnTrafficTweakConstants.h:349
	float32_t mfSpinAirRamMagMax;

	// BrnTrafficTweakConstants.h:350
	float32_t mfSpinAirRamDecay;

	// BrnTrafficTweakConstants.h:351
	float32_t mfSpinAirRamZDist;

	// BrnTrafficTweakConstants.h:353
	float32_t mfRollAirRamMagMin;

	// BrnTrafficTweakConstants.h:354
	float32_t mfRollAirRamMagMax;

	// BrnTrafficTweakConstants.h:355
	float32_t mfRollAirRamDecay;

	// BrnTrafficTweakConstants.h:356
	float32_t mfRollAirRamSideDist;

public:
	// BrnTrafficTweakConstants.h:333
	float32_t GetStoplineVariation() const;

	// BrnTrafficTweakConstants.h:334
	float32_t GetRaceCarStopDist() const;

	// BrnTrafficTweakConstants.h:335
	float32_t GetGapClosingFactor() const;

	// BrnTrafficTweakConstants.h:336
	float32_t GetMinNormalAcceleration() const;

	// BrnTrafficTweakConstants.h:337
	float32_t GetMaxNormalAcceleration() const;

	// BrnTrafficTweakConstants.h:338
	float32_t GetMinAcceleration() const;

	// BrnTrafficTweakConstants.h:339
	float32_t GetMaxAcceleration() const;

	// BrnTrafficTweakConstants.h:340
	float32_t GetMinSpeedForCutoff() const;

	// BrnTrafficTweakConstants.h:341
	float32_t GetMinStopDist() const;

	// BrnTrafficTweakConstants.h:343
	float32_t GetSwerveScoreScale() const;

	// BrnTrafficTweakConstants.h:344
	float32_t GetExtremeSwerveScoreScale() const;

	// BrnTrafficTweakConstants.h:345
	float32_t GetExtremeSwerveStickiness() const;

	// BrnTrafficTweakConstants.h:346
	float32_t GetExtremeSwerveMinTime() const;

	// BrnTrafficTweakConstants.h:348
	float32_t GetSpinAirRamMagMin() const;

	// BrnTrafficTweakConstants.h:349
	float32_t GetSpinAirRamMagMax() const;

	// BrnTrafficTweakConstants.h:350
	float32_t GetSpinAirRamDecay() const;

	// BrnTrafficTweakConstants.h:351
	float32_t GetSpinAirRamZDist() const;

	// BrnTrafficTweakConstants.h:353
	float32_t GetRollAirRamMagMin() const;

	// BrnTrafficTweakConstants.h:354
	float32_t GetRollAirRamMagMax() const;

	// BrnTrafficTweakConstants.h:355
	float32_t GetRollAirRamDecay() const;

	// BrnTrafficTweakConstants.h:356
	float32_t GetRollAirRamSideDist() const;

}

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:35
	namespace Fuzzy {
		struct FuzzyBehaviourLogic;

	}

	// BrnTrafficTweakConstants.h:46
	const uint32_t KU_HACK_BASE_VOLUME_ID = 36;

	// BrnTrafficTweakConstants.h:48
	const uint32_t KU_MAX_JOBS = 4;

	// BrnTrafficTweakConstants.h:50
	const float32_t KF_DENSITY_BASE_SCALE;

	// BrnTrafficTweakConstants.h:51
	const int32_t KI_BIG_VEHICLE_BASE_AMOUNT = 100;

	// BrnTrafficTweakConstants.h:53
	const float32_t KF_VEHICLE_BBOX_FATNESS;

	// BrnTrafficTweakConstants.h:55
	const float32_t KF_VEHICLE_COLLIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:57
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE;

	// BrnTrafficTweakConstants.h:59
	const float32_t KF_GENERATOR_PHASE_SHIFT;

	// BrnTrafficTweakConstants.h:60
	const float32_t KF_MIN_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:61
	const float32_t KF_MAX_GENERATION_FACTOR;

	// BrnTrafficTweakConstants.h:63
	const VecFloat KF_MIN_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:64
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE;

	// BrnTrafficTweakConstants.h:66
	const float32_t KF_MAX_DIST_ACROSS_LANE_lhs;

	// BrnTrafficTweakConstants.h:68
	const float32_t KF_PARAM_END_OF_SECTION_APPROACH_DIST;

	// BrnTrafficTweakConstants.h:70
	const float32_t KF_PARAM_AVOIDANCE_BIAS;

	// BrnTrafficTweakConstants.h:71
	const float32_t KF_PARAM_SPACE_FACTOR;

	// BrnTrafficTweakConstants.h:72
	const float32_t KF_PARAM_NEXT_PARAM_TIME_THRESHOLD;

	// BrnTrafficTweakConstants.h:73
	const float32_t KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD;

	// BrnTrafficTweakConstants.h:74
	const float32_t KF_PARAM_MAX_ACCEL_FORCE;

	// BrnTrafficTweakConstants.h:75
	const float32_t KF_PARAM_MIN_MERGE_DISTANCE;

	// BrnTrafficTweakConstants.h:76
	const float32_t KF_PARAM_MIN_SPAWN_DISTANCE;

	// BrnTrafficTweakConstants.h:77
	const float32_t KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS;

	// BrnTrafficTweakConstants.h:78
	const float32_t KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:79
	const float32_t KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE;

	// BrnTrafficTweakConstants.h:80
	const float32_t KF_PARAM_IMPATIENCE_PROB;

	// BrnTrafficTweakConstants.h:81
	const float32_t KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE;

	// BrnTrafficTweakConstants.h:82
	const float32_t KF_PARAM_FLASH_LIGHTS_PROB;

	// BrnTrafficTweakConstants.h:83
	const float32_t KF_PARAM_BEEP_HORN_PROB;

	// BrnTrafficTweakConstants.h:84
	const float32_t KF_PARAM_BEEP_HORN_PROB_PANICKING;

	// BrnTrafficTweakConstants.h:86
	const float32_t KF_SPONTANEOUS_CONE_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:87
	const float32_t KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:88
	const float32_t KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:90
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:91
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:92
	const float32_t KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:94
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs;

	// BrnTrafficTweakConstants.h:95
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:96
	const float32_t KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs;

	// BrnTrafficTweakConstants.h:98
	const float32_t KF_VEHICLE_BRAKING_FACTOR;

	// BrnTrafficTweakConstants.h:99
	const float32_t KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs;

	// BrnTrafficTweakConstants.h:100
	const float32_t KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:101
	const float32_t KF_VEHICLE_START_DISTANCE_FROM_TARGET;

	// BrnTrafficTweakConstants.h:102
	const float32_t KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:103
	const float32_t KF_VEHICLE_MAX_STEERING_DELTA_lhs;

	// BrnTrafficTweakConstants.h:104
	const float32_t KF_VEHICLE_MAX_STEERING_ANGLE_lhs;

	// BrnTrafficTweakConstants.h:105
	const float32_t KF_VEHICLE_MIN_SWERVE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:106
	const float32_t KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:107
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:108
	const float32_t KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED;

	// BrnTrafficTweakConstants.h:109
	const float32_t KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE;

	// BrnTrafficTweakConstants.h:110
	const float32_t KF_VEHICLE_MIN_SWERVE_SPEED;

	// BrnTrafficTweakConstants.h:111
	const float32_t KF_VEHICLE_SAME_WAY_SWERVE_FACTOR;

	// BrnTrafficTweakConstants.h:112
	const float32_t KF_VEHICLE_MIN_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:113
	const float32_t KF_VEHICLE_MAX_INDICATOR_FLASH_TIME;

	// BrnTrafficTweakConstants.h:114
	const float32_t KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:115
	const float32_t KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME;

	// BrnTrafficTweakConstants.h:116
	const int32_t KI_VEHICLE_MAX_BRAKELIGHT_DEBOUNCE = 6;

	// BrnTrafficTweakConstants.h:117
	const int32_t KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = 4294967290;

	// BrnTrafficTweakConstants.h:118
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS;

	// BrnTrafficTweakConstants.h:119
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH;

	// BrnTrafficTweakConstants.h:120
	const float32_t KF_VEHICLE_REACT_TO_PLAYER_CONE_COS_ANGLE;

	// BrnTrafficTweakConstants.h:121
	const float32_t KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED;

	// BrnTrafficTweakConstants.h:123
	const VecFloat KVF_VEHICLE_MIN_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:124
	const VecFloat KVF_VEHICLE_MAX_ROAD_NOISE_SPEED;

	// BrnTrafficTweakConstants.h:125
	const VecFloat KVF_VEHICLE_ROAD_NOISE_RANGE_RECIP;

	// BrnTrafficTweakConstants.h:126
	const VecFloat KVF_VEHICLE_ROAD_NOISE_AMPLITUDE_SCALE;

	// BrnTrafficTweakConstants.h:128
	const float32_t KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs;

	// BrnTrafficTweakConstants.h:129
	const float32_t KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs;

	// BrnTrafficTweakConstants.h:130
	const float32_t KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs;

	// BrnTrafficTweakConstants.h:131
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT;

	// BrnTrafficTweakConstants.h:132
	const float32_t KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME;

	// BrnTrafficTweakConstants.h:133
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE;

	// BrnTrafficTweakConstants.h:134
	const float32_t KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY;

	// BrnTrafficTweakConstants.h:136
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_SCALE;

	// BrnTrafficTweakConstants.h:138
	const float32_t KF_VEHICLE_PHYSICAL_STEERING_IF_RISK;

	// BrnTrafficTweakConstants.h:140
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:141
	const float32_t KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY;

	// BrnTrafficTweakConstants.h:142
	const float32_t KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:143
	const float32_t KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE;

	// BrnTrafficTweakConstants.h:144
	const float32_t KF_VEHICLE_TIME_TO_STEER_FROM_SLAM;

	// BrnTrafficTweakConstants.h:145
	const float32_t KF_VEHICLE_MIN_TIME_FOR_RECOVERY;

	// BrnTrafficTweakConstants.h:146
	const float32_t KF_VEHICLE_MIN_DIST_FOR_CLEANUP;

	// BrnTrafficTweakConstants.h:147
	const float32_t KF_VEHICLE_MIN_TIME_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:148
	const float32_t KF_VEHICLE_MIN_DIST_FOR_REINSERTION;

	// BrnTrafficTweakConstants.h:150
	const float32_t KF_VEHICLE_ROLL_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:151
	const float32_t KF_VEHICLE_RECIP_ROLL_SPEED_MIN_lhs;

	// BrnTrafficTweakConstants.h:152
	const float32_t KF_VEHICLE_ROLL_FILTER_lhs;

	// BrnTrafficTweakConstants.h:154
	const float32_t KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs;

	// BrnTrafficTweakConstants.h:155
	const float32_t KF_VEHICLE_PITCH_SCALE_lhs;

	// BrnTrafficTweakConstants.h:156
	const float32_t KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs;

	// BrnTrafficTweakConstants.h:158
	const float32_t KF_APPROX_LANE_WIDTH_lhs;

	// BrnTrafficTweakConstants.h:159
	const float32_t KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs;

	// BrnTrafficTweakConstants.h:161
	const float32_t KF_RIVAL_MAX_DIST_TO_LANE;

	// BrnTrafficTweakConstants.h:162
	const float32_t KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR;

	// BrnTrafficTweakConstants.h:165
	const float32_t KF_VEHICLE_TIME_FOR_NEW_SWERVE;

	// BrnTrafficTweakConstants.h:166
	const float32_t KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:167
	const float32_t KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME;

	// BrnTrafficTweakConstants.h:169
	const float32_t KF_BULB_WARMTH_DELTA_PER_SECOND;

	// BrnTrafficTweakConstants.h:171
	const float32_t KF_STOP_LINE_REACTION_DISTANCE;

	// BrnTrafficTweakConstants.h:173
	const float32_t KF_LANE_CHANGE_DICE_ROLL_SCALE;

	// BrnTrafficTweakConstants.h:176
	const float32_t KF_RENDER_CULL_DISTANCE;

	// BrnTrafficTweakConstants.h:177
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE;

	// BrnTrafficTweakConstants.h:178
	const uint32_t KU_MAX_VEHICLES_TO_RENDER = 64;

	// BrnTrafficTweakConstants.h:179
	const uint32_t KU_MAX_VEHICLES_TO_RENDER_NORMAL_PLAY = 32;

	// BrnTrafficTweakConstants.h:187
	const float32_t KF_CORONA_SCALE_DIST_AT_ONE;

	// BrnTrafficTweakConstants.h:188
	const float32_t KF_CORONA_SCALE_DIST_AT_TWO;

	// BrnTrafficTweakConstants.h:222
	extern float32_t KF_VEHICLE_MAX_TIME_FOR_RECENT_CHECK;

	// BrnTrafficTweakConstants.h:230
	const float32_t KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:231
	const float32_t KF_RENDER_CULL_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:232
	const float32_t KF_RENDER_CULL_CORONA_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:233
	const float32_t KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:234
	const VecFloat KF_MIN_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:235
	const VecFloat KF_MIN_STATIC_SPAWNING_DISTANCE_SQ;

	// BrnTrafficTweakConstants.h:236
	const VecFloat KF_VEHICLE_MIN_DIST_FOR_CLEANUP_SQ;

	// BrnTrafficTweakConstants.h:238
	const float32_t KF_VEHICLE_AVOIDABILITY_RADIUS;

	// BrnTrafficTweakConstants.h:240
	const rw::math::vpu::Vector4 kfVehicle_AvoidRadiusSq_CollideRadiusSq_MaxFloat_W;

	// BrnTrafficTweakConstants.h:245
	const rw::math::vpu::Vector4 kfParam_MinLaneChangeDist_MinCosOncomingAngle_Z_W;

	// BrnTrafficTweakConstants.h:252
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT;

	// BrnTrafficTweakConstants.h:253
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD;

	// BrnTrafficTweakConstants.h:255
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT;

	// BrnTrafficTweakConstants.h:257
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS;

	// BrnTrafficTweakConstants.h:258
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS;

	// BrnTrafficTweakConstants.h:260
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC;

	// BrnTrafficTweakConstants.h:261
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR;

	// BrnTrafficTweakConstants.h:262
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER;

	// BrnTrafficTweakConstants.h:264
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN;

	// BrnTrafficTweakConstants.h:265
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX;

	// BrnTrafficTweakConstants.h:267
	const float32_t KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD;

	// BrnTrafficTweakConstants.h:270
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME;

	// BrnTrafficTweakConstants.h:271
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME;

	// BrnTrafficTweakConstants.h:273
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:274
	const float32_t KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE;

	// BrnTrafficTweakConstants.h:275
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN;

	// BrnTrafficTweakConstants.h:276
	const float32_t KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX;

	// BrnTrafficTweakConstants.h:277
	const float32_t KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL;

	// BrnTrafficTweakConstants.h:278
	const float32_t KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME;

	// BrnTrafficTweakConstants.h:281
	const rw::math::vpu::Vector3 K_SIDE_STUCK_BOUNDING_BOX_ADD;

	// BrnTrafficTweakConstants.h:284
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_WIDTH_PERC;

	// BrnTrafficTweakConstants.h:285
	const VecFloat KF_MAX_DEFORMATION_FOR_FATAL_LENGTH_PERC;

	// BrnTrafficTweakConstants.h:286
	const float32_t KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME;

	// BrnTrafficTweakConstants.h:289
	const VecFloat KF_PLAYER_IDLE_MIN_SPEED;

	// BrnTrafficTweakConstants.h:290
	const float32_t KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK;

	// BrnTrafficTweakConstants.h:291
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_CHANCE;

	// BrnTrafficTweakConstants.h:292
	const float32_t KF_PLAYER_IDLE_WHACK_HIM_TIMER;

	// BrnTrafficTweakConstants.h:293
	const float32_t KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME;

	// BrnTrafficTweakConstants.h:295
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS;

	// BrnTrafficTweakConstants.h:296
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT;

	// BrnTrafficTweakConstants.h:298
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU;

	// BrnTrafficTweakConstants.h:299
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP;

	// BrnTrafficTweakConstants.h:300
	const float32_t KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ;

	// BrnTrafficTweakConstants.h:303
	const CgsDev::PerfMonCpuPage KE_TRAFFIC_PERFMON_PAGE;

}

