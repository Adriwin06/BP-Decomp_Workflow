// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficEntityModule.cpp:13722
	bool _CompareRenderInfos(const VehicleRenderInfo &, const VehicleRenderInfo &);

	// BrnTrafficEntityModule.cpp:463
	bool UInt16IsLargerOrEqualWrapped(uint16_t, uint16_t);

	// BrnTrafficEntityModule.cpp:429
	extern void SetGlassFractureConstants(float32_t, float32_t, const Vector2Template<float> &, Vector4);

	// BrnTrafficEntityModule.cpp:85
	const int32_t KI_DATA_ACQUIRE_REQUEST = 1;

	// BrnTrafficEntityModule.cpp:86
	const int32_t KI_BASE_VEHICLE_LOAD_REQUEST = 2;

	// BrnTrafficEntityModule.cpp:87
	const int32_t KI_BASE_VEHICLE_ACQUIRE_REQUEST = 98;

	// BrnTrafficEntityModule.cpp:92
	const uint32_t KU_DEFAULT_NUM_UPDATEVEHICLES_JOBS = 4;

	// BrnTrafficEntityModule.cpp:95
	const SceneQueryId K_TRAFFIC_VOLUME_QUERY_ID;

	// BrnTrafficEntityModule.cpp:107
	const char[21] KAC_HULL_SYNC_ERROR_TEXT;

	// BrnTrafficEntityModule.cpp:108
	const RGBA KU_HULL_SYNC_ERROR_TEXT_COLOUR;

	// BrnTrafficEntityModule.cpp:109
	const float32_t KF_HULL_SYNC_ERROR_TEXT_SIZE;

	// BrnTrafficEntityModule.cpp:110
	const float32_t KF_HULL_SYNC_ERROR_TEXT_POS_X;

	// BrnTrafficEntityModule.cpp:111
	const float32_t KF_HULL_SYNC_ERROR_TEXT_POS_Y;

	// BrnTrafficEntityModule.cpp:112
	const rw::math::vpu::Vector2 K_HULL_SYNC_ERROR_TEXT_POS;

	// BrnTrafficEntityModule.cpp:116
	const float32_t K_MIN_TRAFFIC_PROXIMITY_AS_RACE_STARTING_SQUARED;

	// BrnTrafficEntityModule.cpp:119
	const float32_t KF_RESET_ON_TRACK_KILL_RADIUS;

	// BrnTrafficEntityModule.cpp:120
	const float32_t KF_RESET_ON_TRACK_KILL_HALFHEIGHT;

	// BrnTrafficEntityModule.cpp:122
	const float32_t KF_RESET_ON_TRACK_KILL_RADIUS_ONLINE;

	// BrnTrafficEntityModule.cpp:125
	const float32_t KF_START_GAME_MODE_KILL_RADIUS;

	// BrnTrafficEntityModule.cpp:126
	const float32_t KF_START_GAME_MODE_KILL_RADIUS_WHOLESALE;

	// BrnTrafficEntityModule.cpp:127
	const float32_t KF_TRAFFIC_LIGHT_DELAY;

	// BrnTrafficEntityModule.cpp:129
	const SceneQueryId K_MIN_AI_TRAFFIC_VOLUME_QUERY_ID;

	// BrnTrafficEntityModule.cpp:130
	const SceneQueryId K_MAX_AI_TRAFFIC_VOLUME_QUERY_ID;

	// BrnTrafficEntityModule.cpp:132
	const float32_t KF_MIN_VEHICLES_PER_MINUTE;

	// BrnTrafficEntityModule.cpp:135
	const float32_t KF_SHOWTIME_SHOW_SCORE_RADIUS;

	// BrnTrafficEntityModule.cpp:136
	const float32_t KF_TRAFFIC_STOMP_DISTANCE;

	// BrnTrafficEntityModule.cpp:137
	const float32_t[4] KF_SCORE_HEIGHT_TWEAK_BY_VEHICLE_CLASS;

	// BrnTrafficEntityModule.cpp:145
	const CgsID K_ID_CITY_BUS = [0, 0, 0, 0, 167, 112, 0, 0];

	// BrnTrafficEntityModule.cpp:146
	const CgsID K_ID_TOUR_BUS = [0, 0, 0, 0, 155, 148, 0, 0];

	// BrnTrafficEntityModule.cpp:155
	const float32_t KF_NEARY_TRAFFIC_MAX_DISTANCE;

	// BrnTrafficEntityModule.cpp:156
	const float32_t KF_TRAFFIC_DETECTINON_ASPECT_RATIO;

	// BrnTrafficEntityModule.cpp:157
	const float32_t KF_NEARBY_TRAFFIC_FOV;

	// BrnTrafficEntityModule.cpp:158
	const float32_t KF_PULL_FRUSTUM_BACK_FROM_CAR;

	// BrnTrafficEntityModule.cpp:159
	const float32_t KF_TRAFFIC_DETECTION_NEAR_CLIP;

	// BrnTrafficEntityModule.cpp:160
	const float32_t KF_VEHICLE_MIN_DIST_FOR_SHOWTIME_CLEANUP_SQ;

	// BrnTrafficEntityModule.cpp:161
	const float32_t KF_BUS_MIN_DIST_FOR_SHOWTIME_CLEANUP_SQ;

	// BrnTrafficEntityModule.cpp:163
	const VecFloat KVF_SELFILLUMINATION_MULTIPLER;

	// BrnTrafficEntityModule.cpp:166
	const float32_t KF_RACE_END_RAMP_DOWN_DIST;

	// BrnTrafficEntityModule.cpp:167
	const float32_t KF_RACE_END_RAMP_DOWN_SCALE;

	// BrnTrafficEntityModule.cpp:170
	const uint16_t[15] KAU16_WORST_CASE_HULLS;

	// BrnTrafficEntityModule.cpp:196
	const float32_t KF_MIN_PLAYER_SPEED_FOR_NEAR_MISS;

	// BrnTrafficEntityModule.cpp:197
	const float32_t KF_MIN_PLAYER_DISTANCE_FOR_NEAR_MISS;

	// BrnTrafficEntityModule.cpp:198
	const float32_t KF_MIN_PLAYER_DISTANCE_AGAINST_OTHER_PLAYER_FOR_NEAR_MISS;

	// BrnTrafficEntityModule.cpp:201
	const rw::math::vpu::Vector3 K_HACK_NETWORK_CAR_INVALID_SPAWN_POINT;

	// BrnTrafficEntityModule.cpp:202
	const VecFloat KF_HACK_NETWORK_XZ_INVALID_SPAWN_DIST_SQ;

	// BrnTrafficEntityModule.cpp:203
	const VecFloat KF_HACK_NETWORK_XZ_INVALID_SPAWN_DIST_MIN_Y;

	// BrnTrafficEntityModule.cpp:204
	const VecFloat KF_HACK_NETWORK_XZ_INVALID_SPAWN_DIST_Y_DIST_SQ;

	// BrnTrafficEntityModule.cpp:207
	Vector4[8] KAV_GLASS_FRACTURE_UV_OFFSETS;

	// BrnTrafficEntityModule.cpp:220
	const float32_t KF_AVOID_OFFCOURSE_SCORE_FACTOR;

	// BrnTrafficEntityModule.cpp:222
	const float32_t KF_AVOID_MAX_OVERALL_RISK;

	// BrnTrafficEntityModule.cpp:227
	const float32_t KF_AVOID_CONE_DEPTH_lhs;

	// BrnTrafficEntityModule.cpp:228
	const float32_t KF_AVOID_CONE_HALF_ANGLE_lhs;

	// BrnTrafficEntityModule.cpp:229
	const float32_t KF_AVOID_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficEntityModule.cpp:231
	const VecFloat KF_AVOIDANCE_OVERALLRISK_BRAKE;

	// BrnTrafficEntityModule.cpp:234
	const float32_t KF_SHOWTIME_CRASHMAGNET_DISTANCESQ;

	// BrnTrafficEntityModule.cpp:235
	const float32_t KF_SHOWTIME_MISBOUNCE_MIN_HEIGHT;

	// BrnTrafficEntityModule.cpp:238
	const VecFloat KF_CONTACT_FRONT_BACK;

	// BrnTrafficEntityModule.cpp:239
	const VecFloat KF_CONTACT_SIDE;

	// BrnTrafficEntityModule.cpp:240
	const VecFloat KF_CONTACT_DISCARD_SIDE;

	// BrnTrafficEntityModule.cpp:241
	const float32_t KF_CONTACT_SIDE_DEBOUNCE_TIMER;

	// BrnTrafficEntityModule.cpp:244
	const uint32_t KU_COMBAT_JUNCTION_MAYHEM_MAX_PHYS = 5;

	// BrnTrafficEntityModule.cpp:247
	const float32_t KF_VEHICLE_MIN_STUCK_TIME;

	// BrnTrafficEntityModule.cpp:248
	const float32_t KF_MIN_TIME_FOR_STUCK;

	// BrnTrafficEntityModule.cpp:249
	const float32_t KF_VEHICLE_STUCK_TIME_RAMP_UP;

	// BrnTrafficEntityModule.cpp:250
	const float32_t KF_VEHICLE_STUCK_TIME_RAMP_UP_THRES;

	// BrnTrafficEntityModule.cpp:251
	const float32_t KF_VEHICLE_IS_STUCK_TIME;

	// BrnTrafficEntityModule.cpp:252
	const float32_t KF_VEHICLE_STUCK_REVERSE_CHANCE;

	// BrnTrafficEntityModule.cpp:255
	const VecFloat KF_MIN_SPEED_TO_RECOVER;

	// BrnTrafficEntityModule.cpp:256
	const float32_t KF_SYMPATHETIC_TIMEOUT;

	// BrnTrafficEntityModule.cpp:257
	const float32_t KF_VEHICLE_HANDBRAKE_TILL_CRASH_TIME;

	// BrnTrafficEntityModule.cpp:258
	const float32_t KF_VEHICLE_STUCK_TIME_MIN;

	// BrnTrafficEntityModule.cpp:259
	const float32_t KF_VEHICLE_HANDBRAKE_TILL_CRASH_TIME_LOCKUP;

	// BrnTrafficEntityModule.cpp:260
	const float32_t KF_SYMP_RAND_ACCEL_MIN;

	// BrnTrafficEntityModule.cpp:261
	const float32_t KF_SYMP_RAND_ACCEL_MAX;

	// BrnTrafficEntityModule.cpp:264
	const float32_t KF_CRASHSLIDER_SYMPATHETIC_THRESHOLD;

	// BrnTrafficEntityModule.cpp:267
	const float32_t KF_NEARBY_TRAFFIC_SPHERE_VOLUME_RADIUS;

	// BrnTrafficEntityModule.cpp:269
	const float32_t KF_NUKER_MIN_SPEED_FOR_QUEUEING;

	// BrnTrafficEntityModule.cpp:270
	const uint32_t KU_NUKER_QUEUE_KILLING_GAP = 3;

	// BrnTrafficEntityModule.cpp:271
	const uint32_t KU_NUKER_MIN_QUEUE_LENGTH_FOR_JAM = 4;

	// BrnTrafficEntityModule.cpp:272
	const float32_t KF_NUKER_MIN_DIST_FOR_KILLING;

	// BrnTrafficEntityModule.cpp:274
	const float32_t KF_DENSITY_MIN_ACTIVE_HULLS;

	// BrnTrafficEntityModule.cpp:275
	const float32_t KF_DENSITY_MAX_ACTIVE_HULLS;

	// BrnTrafficEntityModule.cpp:276
	float32_t KF_DENSITY_MIN_TRAFFIC_DENSITY;

	// BrnTrafficEntityModule.cpp:277
	float32_t KF_DENSITY_MAX_TRAFFIC_DENSITY;

	// BrnTrafficEntityModule.cpp:279
	const float32_t KF_MIN_SCALED_DENSITY;

	// BrnTrafficEntityModule.cpp:281
	const float32_t KF_PARAM_MIN_SPAWN_TIME;

	// BrnTrafficEntityModule.cpp:283
	const float32_t KF_SHOWTIME_TRAFFIC_DENSITY;

	// BrnTrafficEntityModule.cpp:284
	const VecFloat KF_SHOWTIME_SPAWN_MIN_CAMERA_DISTANCE;

	// BrnTrafficEntityModule.cpp:285
	const VecFloat KF_SHOWTIME_SPAWN_MAX_CAMERA_DISTANCE;

	// BrnTrafficEntityModule.cpp:286
	const VecFloat KF_SHOWTIME_SPAWN_MIN_CAMERA_DIST_AHEAD;

	// BrnTrafficEntityModule.cpp:287
	const VecFloat KF_SHOWTIME_SPAWN_MAX_COS_ANGLE;

	// BrnTrafficEntityModule.cpp:288
	const VecFloat KF_SHOWTIME_SPAWN_MIN_COS_ANGLE;

	// BrnTrafficEntityModule.cpp:289
	const float32_t KF_SHOWTIME_SPAWN_CHECK_FREQUENCY;

	// BrnTrafficEntityModule.cpp:290
	const float32_t KF_SHOWTIME_RANDOM_JITTER_AMOUNT;

	// BrnTrafficEntityModule.cpp:291
	const CgsID K_ID_LARGE_RV = [0, 0, 0, 0, 106, 22, 0, 0];

	// BrnTrafficEntityModule.cpp:293
	const float32_t KF_FILL_RANDOM_JITTER_AMOUNT;

	// BrnTrafficEntityModule.cpp:295
	const uint32_t KU_MIN_FREE_PHYSICS_FOR_SYMP_CRASH = 4;

	// BrnTrafficEntityModule.cpp:296
	const uint32_t KU_MIN_FREE_PHYSICS_FOR_AVOID_CRASH = 4;

	// BrnTrafficEntityModule.cpp:298
	const float32_t KF_CALCACCEL_MIN_MULT_SPEED_DIST;

	// BrnTrafficEntityModule.cpp:299
	const float32_t KF_CALCACCEL_MAX_MULT_SPEED_DIST;

	// BrnTrafficEntityModule.cpp:300
	const float32_t KF_CALCACCEL_MIN_MULT;

	// BrnTrafficEntityModule.cpp:301
	const float32_t KF_CALCACCEL_MAX_MULT;

	// BrnTrafficEntityModule.cpp:302
	const float32_t KF_CALCACCEL_MAX_SCALED_SPEED;

	// BrnTrafficEntityModule.cpp:305
	const VecFloat KF_CALCACCEL_SHOWTIME_MIN_SPEED_SCALE;

	// BrnTrafficEntityModule.cpp:306
	const VecFloat KF_CALCACCEL_SHOWTIME_MAX_SPEED_SCALE;

	// BrnTrafficEntityModule.cpp:307
	const VecFloat KF_CALCACCEL_SHOWTIME_DIST_TO_SLOW_RECIP;

	// BrnTrafficEntityModule.cpp:308
	const VecFloat KF_CALCACCEL_SHOWTIME_MIN_NEAR_SPEED_SCALE;

	// BrnTrafficEntityModule.cpp:310
	const float32_t KF_CALCACCEL_MAX_SYMP_CRASH_SPEED;

	// BrnTrafficEntityModule.cpp:311
	const float32_t KF_CALCACCEL_MAX_SYMP_CRASH_ACCEL;

	// BrnTrafficEntityModule.cpp:313
	const float32_t KF_NEED_TO_SLOW_IMPATIENCE_MODIFIER;

	// BrnTrafficEntityModule.cpp:314
	const float32_t KF_NEED_TO_SLOW_DRIVE_AROUND_STICKINESS;

	// BrnTrafficEntityModule.cpp:316
	const float32_t KF_PRECALC_MIN_DIST_FOR_STOP;

	// BrnTrafficEntityModule.cpp:318
	const float32_t KF_PRECALC_MIN_DRIVE_AROUND_SPEED;

	// BrnTrafficEntityModule.cpp:319
	const float32_t KF_PRECALC_MAX_DRIVE_AROUND_SPEED;

	// BrnTrafficEntityModule.cpp:320
	const float32_t KF_PRECALC_DIST_TO_CHANGE_SPEED;

	// BrnTrafficEntityModule.cpp:322
	const uint32_t KU_FIND_NEAREST_MAX_EXTRA_SECTIONS = 9;

	// BrnTrafficEntityModule.cpp:323
	const uint32_t KU_FIND_NEAREST_MAX_MERGING_SECTIONS = 3;

	// BrnTrafficEntityModule.cpp:325
	const int32_t KI_MAX_DAMAGED_VEHICLES_TO_RENDER = 5;

	// BrnTrafficEntityModule.cpp:327
	const float32_t KF_D2T_GIVE_UP_ON_SLAM_PROB;

	// BrnTrafficEntityModule.cpp:328
	const float32_t KF_D2T_GIVE_UP_MIN_SPEED;

	// BrnTrafficEntityModule.cpp:329
	const float32_t KF_D2T_DIST_BEHIND_TO_INITIATE_TURN;

	// BrnTrafficEntityModule.cpp:331
	const float32_t KF_SHOWTIME_SYMP_CRASH_PROB;

	// BrnTrafficEntityModule.cpp:332
	const VecFloat KF_SHOWTIME_MAX_DIST_FOR_SWERVE_SQ;

	// BrnTrafficEntityModule.cpp:334
	const uint32_t KU_HALF_TOTAL_TRAFFIC = 300;

	// BrnTrafficEntityModule.cpp:335
	const VecFloat KVF_APPROX_WHEEL_RADIUS_RECIP;

	// BrnTrafficEntityModule.cpp:336
	const VecFloat KAF_FRONT_WHEEL_ROTATION_OFFSET;

	// BrnTrafficEntityModule.cpp:339
	VecFloat KF_IS_SIMILAR_TOLLERANCE;

	// BrnTrafficEntityModule.cpp:342
	const float32_t KF_UNGIVEUP_TIME;

	// BrnTrafficEntityModule.cpp:345
	const VecFloat KF_JUNCTION_FUP_PHYSICAL_SCORE;

	// BrnTrafficEntityModule.cpp:346
	const VecFloat KF_JUNCTION_FUP_FATAL_SCORE;

	// BrnTrafficEntityModule.cpp:347
	const VecFloat KF_JUNCTION_FUP_NOT_DRIVING_SCORE;

	// BrnTrafficEntityModule.cpp:349
	const float32_t KF_JUNCTION_FUP_VEHICLE_NOT_DRIVING_TIME;

	// BrnTrafficEntityModule.cpp:351
	const VecFloat KF_JUNCTION_FUP_FAR_FROM_BEHAVIOUR_CENTRE_SQ;

	// BrnTrafficEntityModule.cpp:353
	const float32_t KF_JUNCTION_FUP_TIME_TILL_NEXT_PHYSICAL_KILL;

	// BrnTrafficEntityModule.cpp:354
	const float32_t KF_JUNCTION_FUP_TIME_TILL_NEXT_ONLINE_PHYSICAL_KILL;

	// BrnTrafficEntityModule.cpp:356
	const float32_t KF_AVOID_CRASH_CONE_DEPTH_lhs;

	// BrnTrafficEntityModule.cpp:357
	const float32_t KF_AVOID_CRASH_CONE_HALF_ANGLE_lhs;

	// BrnTrafficEntityModule.cpp:358
	const float32_t KF_AVOID_CRASH_CONE_SQUISHING_SCALE_lhs;

	// BrnTrafficEntityModule.cpp:361
	const VecFloat KF_GASBRAKE_MIN_SPEED;

	// BrnTrafficEntityModule.cpp:362
	const VecFloat KF_GASBRAKE_TIME_FOR_TINY_SPEED;

	// BrnTrafficEntityModule.cpp:363
	const VecFloat KF_GASBRAKE_TIME_TO_SLOW;

	// BrnTrafficEntityModule.cpp:365
	const float32_t KF_CALCACCEL_MIN_DIST_FOR_NO_SCALE;

	// BrnTrafficEntityModule.cpp:367
	const float32_t KF_EXTREME_SWERVE_DONT_USE_AVOIDANCE_TIME;

	// BrnTrafficEntityModule.cpp:369
	const uint32_t KF_SHOWTIME_MAX_HORNS = 10;

	// BrnTrafficEntityModule.cpp:378
	const rw::math::vpu::Vector4 kfManoeuvreStuckReverse_MaxTime_Phase0Dot_Phase1Speed_W;

	// BrnTrafficEntityModule.cpp:384
	const rw::math::vpu::Vector4 kfAvoidanceCalcSteering_MinOverall_MinDist_LerpDirDot_OverallBiggerSteering;

	// BrnTrafficEntityModule.cpp:390
	const rw::math::vpu::Vector4 kfRestartTrafficMisc_SkipIfMinDistSq_SkipStaticIfMinDistSq_ZW;

	// BrnTrafficEntityModule.cpp:396
	const rw::math::vpu::Vector4 kfSympCrash_MaxDistFromCameraSq_MaxDistFromCameraShowTimeSq_ZW;

	// BrnTrafficEntityModule.cpp:402
	const rw::math::vpu::Vector4 kfSimAndDrawDistance_DefaultSim_CarSelectSim_DefaultRenderSq_CarSelectRenderSq;

	// BrnTrafficEntityModule.cpp:408
	const rw::math::vpu::Vector4 kfShowTime_HornMaxDistSq_HornMaxHeight_ZW;

	// BrnTrafficEntityModule.cpp:414
	const rw::math::vpu::Vector4 kfParamInsideFront_DistSqParam_DistSqVehicle_OnlineDistSqParam_W;

}

// BrnTrafficEntityModule.cpp:5733
using BrnGameState::GameStateModuleIO;

// BrnTrafficEntityModule.cpp:518
void BrnTraffic::TrafficPhysicsInfo::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:557
void BrnTraffic::ShowtimeVehicleInfo::Construct(uint32_t  luVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:571
void BrnTraffic::ShowtimeVehicleInfo::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:17844
void _GLOBAL__D__ZN10BrnTraffic18TrafficPhysicsInfo9ConstructEi() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:17843
void _GLOBAL__I__ZN10BrnTraffic18TrafficPhysicsInfo9ConstructEi() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:477
void BrnTraffic::TrafficPhysicsInfo::Construct(int32_t  liVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnTraffic::DetachedPartRenderEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::SetEventPointer(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:499
		uint32_t luPane;

	}
}

// BrnTrafficEntityModule.cpp:532
void BrnTraffic::TrafficPhysicsInfo::IsStuckFront() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEntityModule.cpp:544
void BrnTraffic::TrafficPhysicsInfo::IsStuckBack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

