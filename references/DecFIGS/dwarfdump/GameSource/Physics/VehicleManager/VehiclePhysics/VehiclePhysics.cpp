// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// VehiclePhysics.cpp:1387
		extern Vector3 KVF_MAX_ANGULAR_VELOCITY;

		// VehiclePhysics.cpp:65
		const rw::math::vpu::Vector3 kRearAxlePos;

		// VehiclePhysics.cpp:66
		const rw::math::vpu::Vector3 kFrontAxlePos;

		// VehiclePhysics.cpp:68
		const rw::math::vpu::Vector3 K_WORLD_Y_AXIS;

		// VehiclePhysics.cpp:70
		const float32_t KF_TIME_WITHOUT_TRACTION_TO_BE_IN_AIR;

		// VehiclePhysics.cpp:71
		const float32_t KF_TIME_IN_AIR_TO_APPLY_DAMPENING;

		// VehiclePhysics.cpp:73
		const float32_t KF_DOWN_FORCE_FACTOR;

		// VehiclePhysics.cpp:74
		const float32_t KF_UP_FORCE_FACTOR;

		// VehiclePhysics.cpp:75
		const float32_t KF_LAT_FORCE_FACTOR;

		// VehiclePhysics.cpp:77
		const float32_t KF_VERT_FORCE_OFFSET_Z_UP;

		// VehiclePhysics.cpp:78
		const float32_t KF_VERT_FORCE_OFFSET_Z_DOWN;

		// VehiclePhysics.cpp:80
		const float32_t KF_HORIZ_FORCE_OFFSET_Y;

		// VehiclePhysics.cpp:81
		const float32_t KF_HORIZ_FORCE_OFFSET_Z;

		// VehiclePhysics.cpp:83
		const VecFloat KVF_LAST_HANDBRAKE_TIME_MAX;

		// VehiclePhysics.cpp:86
		const float32_t KF_MINIMUM_SLAM_OR_RAM_FORCE;

		// VehiclePhysics.cpp:88
		const float32_t KF_MINIMUM_SLAM_OR_RAM_FORCE_SQ;

		// VehiclePhysics.cpp:91
		const float32_t KF_WALL_CONTACT_TIME_SECONDS;

		// VehiclePhysics.cpp:94
		const float32_t KF_FORCE_APPLICATION_OFFSET;

		// VehiclePhysics.cpp:95
		const float32_t KF_MIN_XZ_SENSOR_VALUE;

		// VehiclePhysics.cpp:96
		const float32_t KF_MAX_XZ_SENSOR_VALUE;

		// VehiclePhysics.cpp:97
		const float32_t KF_MIN_G_SENSOR_VALUE;

		// VehiclePhysics.cpp:99
		const float32_t KF_DEFAULT_PROP_SPEED_MAINTAIN_ALONG_Z;

		// VehiclePhysics.cpp:100
		const float32_t KF_DEFAULT_PROP_SPEED_MAINTAIN_ALONG_VEL;

		// VehiclePhysics.cpp:103
		VecFloat KF_SHOWTIME_GRIP_SCALE;

		// VehiclePhysics.cpp:104
		VecFloat KF_SHOWTIME_PLAYER_ANGULAR_IMPULSE_SCALE;

		// VehiclePhysics.cpp:105
		VecFloat KF_SHOWTIME_LOWEST_INPUT_MASS;

		// VehiclePhysics.cpp:106
		VecFloat KF_SHOWTIME_HIGHEST_INPUT_MASS;

		// VehiclePhysics.cpp:107
		VecFloat KF_SHOWTIME_LOWEST_OUTPUT_MASS;

		// VehiclePhysics.cpp:108
		VecFloat KF_SHOWTIME_HIGHEST_OUTPUT_MASS;

		// VehiclePhysics.cpp:110
		const BrnPhysics::Vehicle::EVehicleDrivenWheel[4] KAE_OPPOSITE_WHEEL;

		// VehiclePhysics.cpp:118
		const BrnPhysics::Vehicle::EVehicleDrivenWheel[4] KAE_WHEEL_SAME_SIDE;

		// VehiclePhysics.cpp:126
		const rw::math::vpu::Vector3 K_UP_VECTOR;

		// VehiclePhysics.cpp:129
		const float32_t KF_RESET_ON_TRACK_Y_OFFSET;

		// VehiclePhysics.cpp:132
		const float32_t kfSuspensionImpulseRestitution;

		// VehiclePhysics.cpp:135
		const float32_t KF_SPEED_TO_ALLOW_LOCKING_WHEELS;

		// VehiclePhysics.cpp:161
		const float32_t KF_DEFAULT_SOLVE_PENETRATION_WEIGHT_FACTOR;

		// VehiclePhysics.cpp:170
		const VecFloat KVF_60_HTZ;

		// VehiclePhysics.cpp:655
		const VecFloat KVF_TIME_TO_LOCK_HANDBRAKE_ON;

		// VehiclePhysics.cpp:704
		const VecFloat KF_MIN_TIME_SINCE_LAST_CONTACT;

		// VehiclePhysics.cpp:838
		const VecFloat KVF_COUNTER_STEER_DAMPENING_WITH_STEERING_WHEEL;

		// VehiclePhysics.cpp:1156
		const float32_t KF_UPDATE_FREEZE_GAS_BRAKE_THRESHOLD;

		// VehiclePhysics.cpp:1157
		const float32_t KF_UPDATE_FREEZE_HANDBRAKE_THRESHOLD;

		// VehiclePhysics.cpp:1168
		const VecFloat KVF_STANDING_STILL_VELOCITY_LIMIT;

		// VehiclePhysics.cpp:1658
		const VecFloat KF_SPEED_TO_APPLY_AUTO_BRAKING;

		// VehiclePhysics.cpp:1659
		const VecFloat KF_AUTO_BRAKING_AMOUNT;

		// VehiclePhysics.cpp:1837
		VecFloat KF_BRAKE_STATIC_FRICTION;

		// VehiclePhysics.cpp:1838
		VecFloat KF_BRAKE_DYNAMIC_FRICTION;

		// VehiclePhysics.cpp:1839
		VecFloat KF_MIN_REAR_BRAKING_SPEED;

		// VehiclePhysics.cpp:1840
		VecFloat KF_MIN_REAR_BRAKING_RANGE;

		// VehiclePhysics.cpp:1841
		VecFloat KF_MIN_REAR_BRAKE_FACTOR;

		// VehiclePhysics.cpp:1842
		VecFloat KF_MAX_REAR_BRAKE_FACTOR;

		// VehiclePhysics.cpp:1855
		const VecFloat KVF_MAX_MASS_FOR_CRASH_FRICTION;

		// VehiclePhysics.cpp:2129
		const VecFloat KVF_BURNOUT_GAS_BRAKE_THRESHOLD;

		// VehiclePhysics.cpp:2130
		const VecFloat KVF_BURNOUT_MAX_SPEED_MPS_SQ;

		// VehiclePhysics.cpp:2131
		const VecFloat KVF_BURNOUT_REAR_FRONT_MIN_ANG_VEL_DIFF;

		// VehiclePhysics.cpp:2132
		const VecFloat KVF_BURNOUT_REAR_WHEEL_ANGULAR_VEL;

		// VehiclePhysics.cpp:2133
		const VecFloat KVF_BURNOUT_REAR_WHEEL_ANGULAR_VEL_MULTIPLIER;

		// VehiclePhysics.cpp:2285
		const VecFloat KVF_IN_AIR_MIN_SPEED_MPS;

		// VehiclePhysics.cpp:2422
		const VecFloat KF_DART_BEHAVIOUR_MAX_DOWN_COMPONENT;

		// VehiclePhysics.cpp:2423
		const VecFloat KF_DART_BEHAVIOUR_TORQUE_FACTOR;

		// VehiclePhysics.cpp:2424
		const VecFloat KF_DART_BEHAVIOUR_TORQUE_DAMP_FACTOR;

		// VehiclePhysics.cpp:2425
		const VecFloat KF_DART_BEHAVIOUR_DAMPING_TIME;

		// VehiclePhysics.cpp:2426
		const VecFloat KF_DART_BEHAVIOUR_ROLL_THRESHOLD;

		// VehiclePhysics.cpp:2428
		const VecFloat KVF_DAMP_ROLL_VELOCITY;

		// VehiclePhysics.cpp:2429
		const VecFloat KVF_DAMP_ROLL_FLAT_VELOCITY;

		// VehiclePhysics.cpp:3391
		const VecFloat KF_CALCWEIGHTTRANSFER_ANGLECLAMP;

		// VehiclePhysics.cpp:3778
		const VecFloat KVF_TIME_FOR_HANDBRAKE_TO_EXIT_DRIFT;

		// VehiclePhysics.cpp:3779
		const VecFloat KVF_MIN_DRIFT_SPEED_MPH;

		// VehiclePhysics.cpp:3875
		const VecFloat KVF_HANDBRAKE_OFF_TIME_TO_ALLOW_DRIFT;

		// VehiclePhysics.cpp:4272
		const VecFloat KVF_MAX_POWER_SLIDE_FACTOR;

		// VehiclePhysics.cpp:4906
		VecFloat kfChangeInMaxSteerAngleRad;

		// VehiclePhysics.cpp:5094
		const VecFloat KVF_MAX_DRIFT_STEER_ANGLE;

		// VehiclePhysics.cpp:5826
		const VecFloat KVF_MAX_SPEED_WHEN_SHUNTED;

		// VehiclePhysics.cpp:5827
		const VecFloat KVF_MAX_SHUNT_LIFE;

		// VehiclePhysics.cpp:5875
		float32_t KF_SPEED_FACTOR_FOR_ONLINE;

		// VehiclePhysics.cpp:5932
		const float32_t KF_MIN_SLAM_LIFE;

		// VehiclePhysics.cpp:6154
		const VecFloat KF_MAX_SPEED_INCREASE_FOR_SPEED_MATCHING;

		// VehiclePhysics.cpp:6835
		const VecFloat KVF_ANGLE_TO_ZERO_WORLD_IMPULSES;

		// VehiclePhysics.cpp:6836
		const VecFloat KVF_SPEED_FOR_NO_ANGULAR;

		// VehiclePhysics.cpp:6837
		const VecFloat KVF_SPEED_FOR_MAX_ANG_RECIP;

		// VehiclePhysics.cpp:6903
		const VecFloat kvfCarImpulseRollDamping;

		// VehiclePhysics.cpp:6904
		const VecFloat kvfCarImpulseYawDamping;

		// VehiclePhysics.cpp:6905
		const VecFloat kvfCarImpulsePitchDamping;

	}

}

