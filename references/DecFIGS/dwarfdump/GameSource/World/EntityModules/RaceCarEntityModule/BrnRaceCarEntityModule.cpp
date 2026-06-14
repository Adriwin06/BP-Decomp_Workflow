// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnRaceCarEntityModule.cpp:394
	extern void SetGlassFractureConstants(float32_t, float32_t, const Vector2Template<float> &, Vector4);

	// BrnRaceCarEntityModule.cpp:368
	extern float32_t KF_Z_OFFSET_FROM_CAR_CENTRE_TO_CONE_APEX;

	// BrnRaceCarEntityModule.cpp:369
	extern float32_t KF_TAILGATING_CONE_HALF_ANGLE_RADS;

	// BrnRaceCarEntityModule.cpp:370
	extern float32_t KF_TAILGATING_CONE_DEPTH;

	// BrnRaceCarEntityModule.cpp:371
	extern float32_t KF_MIN_TAILGATE_DURATION;

	// BrnRaceCarEntityModule.cpp:372
	extern float32_t KF_TAILGATING_MAX_RELATIVE_VELOCITY_MAGNITUDE;

	// BrnRaceCarEntityModule.cpp:373
	extern float32_t KF_MIN_TAILGATEE_SPEED;

	// BrnRaceCarEntityModule.cpp:204
	const float32_t KF_DEFAULT_BOOST_MODIFIER;

	// BrnRaceCarEntityModule.cpp:206
	const float32_t KF_FIRST_PLACE_BOOST_MODIFIER;

	// BrnRaceCarEntityModule.cpp:207
	const float32_t KF_LAST_PLACE_BOOST_MODIFIER;

	// BrnRaceCarEntityModule.cpp:209
	const float32_t KF_ONLINE_MAX_POSITION_GAS_MODIFIER;

	// BrnRaceCarEntityModule.cpp:210
	const float32_t KF_BURNING_HOME_RUN_RUNNER_GAS_MODIFIER;

	// BrnRaceCarEntityModule.cpp:213
	const float32_t KF_TWO_PI;

	// BrnRaceCarEntityModule.cpp:220
	const uint8_t KI_ACTIVE_RACE_CAR_LINE_TEST_OWNER = 4;

	// BrnRaceCarEntityModule.cpp:222
	const rw::math::vpu::Vector3 KI_CAR_POS_LINE_TEST_VECTOR_UP;

	// BrnRaceCarEntityModule.cpp:223
	const rw::math::vpu::Vector3 KI_CAR_POS_LINE_TEST_VECTOR_DOWN;

	// BrnRaceCarEntityModule.cpp:224
	const float32_t KF_FALL_OUT_OF_WORLD_RESET_TIME;

	// BrnRaceCarEntityModule.cpp:225
	const float32_t KF_FALL_OUT_OF_WORLD_Y;

	// BrnRaceCarEntityModule.cpp:228
	const float32_t KF_MIN_SPEED_FOR_BOOST_MPS;

	// BrnRaceCarEntityModule.cpp:231
	const float32_t KF_RESET_ON_TRACK_SPEED_FAILURE;

	// BrnRaceCarEntityModule.cpp:232
	const float32_t KF_RESET_ON_TRACK_SPEED;

	// BrnRaceCarEntityModule.cpp:233
	const float32_t KF_RESET_ON_TRACK_SPEED_ONLINE;

	// BrnRaceCarEntityModule.cpp:234
	const float32_t KF_RESET_ON_TRACK_IN_RANGE_SPEED;

	// BrnRaceCarEntityModule.cpp:235
	const float32_t KF_MIN_DISTANCE_FOR_RESET_NEAR_PLAYER;

	// BrnRaceCarEntityModule.cpp:237
	const float32_t KF_MAX_AI_RESET_SPEED;

	// BrnRaceCarEntityModule.cpp:238
	const float32_t KF_FASTER_THAN_PLAYER;

	// BrnRaceCarEntityModule.cpp:239
	const float32_t KF_SLOWER_THAN_PLAYER;

	// BrnRaceCarEntityModule.cpp:240
	const float32_t KF_PLAYER_SLOW_FOR_ROAD_RAGE;

	// BrnRaceCarEntityModule.cpp:242
	const float32_t KF_MIN_STUNT_RESET_SPEED;

	// BrnRaceCarEntityModule.cpp:244
	const float32_t KF_CLOSE_ENOUGH_TO_RE_TRY;

	// BrnRaceCarEntityModule.cpp:246
	const float32_t KF_RESET_AT_MODE_START_TIME;

	// BrnRaceCarEntityModule.cpp:247
	const float32_t KF_RESET_AT_MODE_START_DISTANCE;

	// BrnRaceCarEntityModule.cpp:248
	const float32_t KF_RESET_AT_MODE_START_DISTANCE_ROAD_RAGE;

	// BrnRaceCarEntityModule.cpp:249
	const float32_t KF_RESET_AT_MODE_START_SEPARATION;

	// BrnRaceCarEntityModule.cpp:251
	const float32_t KF_RESET_AT_ROAD_RAGE_START_DIST;

	// BrnRaceCarEntityModule.cpp:252
	const float32_t KF_RESET_AT_RANK_UP_START_BASE_SPEED;

	// BrnRaceCarEntityModule.cpp:253
	const float32_t KF_RESET_AT_RANK_UP_START_DIST;

	// BrnRaceCarEntityModule.cpp:254
	const float32_t KF_SPAWN_INTO_RANK_UP_DIST;

	// BrnRaceCarEntityModule.cpp:255
	const float32_t KF_RESET_AT_RANK_UP_START_SEPARATION;

	// BrnRaceCarEntityModule.cpp:257
	const float32_t KF_DEFORMATION_LIGHTBREAK_THRESHOLD;

	// BrnRaceCarEntityModule.cpp:258
	const float32_t KF_RESET_ON_TRACK_DISTANCE_BEHIND;

	// BrnRaceCarEntityModule.cpp:259
	const float32_t KF_RESET_ON_TRACK_DISTANCE_ROAD_RAGE;

	// BrnRaceCarEntityModule.cpp:260
	const float32_t KF_RESET_ON_TRACK_DISTANCE_MARKED_MAN;

	// BrnRaceCarEntityModule.cpp:263
	const float32_t KF_MIN_DISPERSE_DISTANCE;

	// BrnRaceCarEntityModule.cpp:265
	const int32_t KI_RACE_STREAM_CAR_COUNT = 3;

	// BrnRaceCarEntityModule.cpp:268
	const float32_t krCarSpawnDefaultDistance;

	// BrnRaceCarEntityModule.cpp:269
	const float32_t krCarSpawnInitialSpeed;

	// BrnRaceCarEntityModule.cpp:271
	const VecFloat KVF_SELFILLUMINATION_MULTIPLER;

	// BrnRaceCarEntityModule.cpp:273
	const float32_t KF_NO_RESET_BEHIND;

	// BrnRaceCarEntityModule.cpp:276
	const float32_t KF_SHORT_HIDE;

	// BrnRaceCarEntityModule.cpp:277
	const float32_t KF_LONG_HIDE;

	// BrnRaceCarEntityModule.cpp:278
	const float32_t KF_MAX_SEPERATION_DISTANCE;

	// BrnRaceCarEntityModule.cpp:279
	const float32_t KF_MAX_SEPERATION_DELAY;

	// BrnRaceCarEntityModule.cpp:282
	const float32_t KF_DRIVE_THRU_ENTRY_SPEED;

	// BrnRaceCarEntityModule.cpp:283
	const float32_t KF_DRIVE_THRU_MAX_EXIT_SPEED_SLOW;

	// BrnRaceCarEntityModule.cpp:284
	const float32_t KF_DRIVE_THRU_MAX_EXIT_SPEED_FAST;

	// BrnRaceCarEntityModule.cpp:286
	const int32_t KI_AI_PERSISTENT_DAMAGE_CAR_COUNT = 3;

	// BrnRaceCarEntityModule.cpp:287
	const int32_t KI_DAMAGED_CAR_COUNT = 5;

	// BrnRaceCarEntityModule.cpp:290
	const float32_t KF_SIXAXIS_STEERING_SENSOR_SCALE;

	// BrnRaceCarEntityModule.cpp:291
	const float32_t KF_SIXAXIS_STEERING_EXPONENTIAL_LIMIT;

	// BrnRaceCarEntityModule.cpp:294
	const int32_t[8] KAI_DECENT_AI_CAR_COLOURS;

	// BrnRaceCarEntityModule.cpp:306
	const int32_t KI_BLACK_CAR_COLOUR_INDEX = 6;

	// BrnRaceCarEntityModule.cpp:308
	BrnProgression::ETrainingType[3] KE_TRAINING_MESSAGE;

	// BrnRaceCarEntityModule.cpp:315
	const int32_t KI_NUM_AI_CAR_COLOURS = 8;

	// BrnRaceCarEntityModule.cpp:316
	const float32_t KF_MIN_COLOUR_SPACE_DISTANCE;

	// BrnRaceCarEntityModule.cpp:319
	VecFloat[3] saNearShadowMapThreshSq;

	// BrnRaceCarEntityModule.cpp:323
	const float32_t lfBrakeLightScale;

	// BrnRaceCarEntityModule.cpp:324
	const float32_t lfFrontRunningLightScale;

	// BrnRaceCarEntityModule.cpp:325
	const float32_t lfTailRunningLightScale;

	// BrnRaceCarEntityModule.cpp:326
	const float32_t lfReversingLightScale;

	// BrnRaceCarEntityModule.cpp:327
	const float32_t lfSpotlightsScale;

	// BrnRaceCarEntityModule.cpp:328
	const float32_t lfBluesTwoslightsScale;

	// BrnRaceCarEntityModule.cpp:329
	const float32_t lfIndicatorScale;

	// BrnRaceCarEntityModule.cpp:331
	const float32_t lfBrakeLightOpacity;

	// BrnRaceCarEntityModule.cpp:332
	const float32_t lfFrontRunningLightOpacity;

	// BrnRaceCarEntityModule.cpp:333
	const float32_t lfTailRunningLightOpacity;

	// BrnRaceCarEntityModule.cpp:334
	const float32_t lfReversingLightOpacity;

	// BrnRaceCarEntityModule.cpp:335
	const float32_t lfSpotlightsOpacity;

	// BrnRaceCarEntityModule.cpp:336
	const float32_t lfIndicatorOpacity;

	// BrnRaceCarEntityModule.cpp:375
	Vector4[8] KAV_GLASS_FRACTURE_UV_OFFSETS;

	// BrnRaceCarEntityModule.cpp:4328
	const float32_t KF_MIN_SPEED_TO_BOOST;

	// BrnRaceCarEntityModule.cpp:8790
	const float32_t KF_AI_OUT_OF_RANGE_SIDEWAYS;

	// BrnRaceCarEntityModule.cpp:8791
	const float32_t KF_ROAD_RAGE_ANGULAR_OFFSET_KEEP_ALIVE;

	// BrnRaceCarEntityModule.cpp:8793
	const float32_t KF_AI_OUT_OF_RANGE_DISTANCE_ROAD_RAGE_AHEAD;

	// BrnRaceCarEntityModule.cpp:8794
	const float32_t KF_AI_OUT_OF_RANGE_DISTANCE_ROAD_RAGE_BEHIND;

	// BrnRaceCarEntityModule.cpp:8795
	const float32_t KF_NEAR_ENOUGH_TO_KEEP_ALIVE_ROAD_RAGE_SQUARED;

	// BrnRaceCarEntityModule.cpp:8886
	const float32_t KF_ROAD_RAGE_CLIP_TIME_OUT;

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnRaceCarEntityModule.cpp:125
	extern int32_t KI_HOLD_CAR_SPINING_IN_AIR;

}

// BrnRaceCarEntityModule.cpp:5014
using BrnGameState::GameStateModuleIO;

// BrnRaceCarEntityModule.cpp:6520
using BrnGameState::GameStateModuleIO;

// BrnRaceCarEntityModule.cpp:7920
using BrnGameState::GameStateModuleIO;

// _built-in_
namespace :: {
	// BrnRaceCarEntityModule.cpp:120
	extern int32_t giDebugOnlyRenderThisCarPart;

	// BrnRaceCarEntityModule.cpp:121
	extern bool gboEnableDeformationDebug;

}

// BrnRaceCarEntityModule.cpp:121
extern bool gboEnableDeformationDebug;

// BrnRaceCarEntityModule.cpp:125
extern int32_t KI_HOLD_CAR_SPINING_IN_AIR;

