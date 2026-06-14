// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// RaceCarPhysics.cpp:35
		float32_t KF_INITIAL_BOOST_AIR_RAM_DECAY;

		// RaceCarPhysics.cpp:36
		float32_t KF_INITIAL_BOOST_AIR_RAM_POWER;

		// RaceCarPhysics.cpp:37
		float32_t KF_INITIAL_BOOST_VELOCITY;

		// RaceCarPhysics.cpp:38
		float32_t KF_INITIAL_BOOST_Y_COMPONENT;

		// RaceCarPhysics.cpp:39
		Vector3 K_V3D_INITIAL_BOOST_ANGULAR_VELOCITY;

		// RaceCarPhysics.cpp:40
		float32_t KF_INITIAL_BOOST_DELAY;

		// RaceCarPhysics.cpp:41
		float32_t KF_INITIAL_BOOST_ANGULAR;

		// RaceCarPhysics.cpp:42
		float32_t KF_INITIAL_ROLL_AIR_RAM_POWER;

		// RaceCarPhysics.cpp:43
		float32_t KF_INITIAL_ROLL_AIR_RAM_DECAY;

		// RaceCarPhysics.cpp:44
		float32_t KF_NORMAL_AFTERTOUCH_FORCE_SCALE;

		// RaceCarPhysics.cpp:45
		float32_t KF_MIN_SHOWTIME_BOUNCE_MODIFIER;

		// RaceCarPhysics.cpp:46
		float32_t KF_MAX_SHOWTIME_BOUNCE_MODIFIER;

		// RaceCarPhysics.cpp:47
		float32_t KF_MIN_SHOWTIME_DEFORMATION_SCALE;

		// RaceCarPhysics.cpp:48
		float32_t KF_MAX_SHOWTIME_DEFORMATION_SCALE;

		// RaceCarPhysics.cpp:49
		float32_t KF_SHOWTIME_DEFORMATION_LIMIT;

		// RaceCarPhysics.cpp:50
		float32_t KF_SHOWTIME_STATIONARY_BOUNCE_ANGULAR;

		// RaceCarPhysics.cpp:51
		VecFloat KF_SHOWTIME_BOUNCE_BOOST_FORCE_SCALE;

		// RaceCarPhysics.cpp:52
		float32_t KF_SHOWTIME_UNBOOSTED_FORCE_SCALE_AIR;

		// RaceCarPhysics.cpp:53
		float32_t KF_SHOWTIME_UNBOOSTED_FORCE_SCALE_GROUND;

		// RaceCarPhysics.cpp:54
		float32_t KF_SHOWTIME_ANGULAR_VELOCITY_MAX_NO_BOOST;

		// RaceCarPhysics.cpp:55
		float32_t KF_SHOWTIME_ANGULAR_VELOCITY_MAX_BOOST;

		// RaceCarPhysics.cpp:56
		float32_t KF_SHOWTIME_LINEAR_VELOCITY_MAX_NO_BOOST;

		// RaceCarPhysics.cpp:57
		float32_t KF_SHOWTIME_LINEAR_VELOCITY_MAX_BOOST;

		// RaceCarPhysics.cpp:58
		float32_t KF_SHOWTIME_UPWARD_VELOCITY_MAX;

		// RaceCarPhysics.cpp:59
		float32_t KF_SHOWTIME_MIN_SPEED;

		// RaceCarPhysics.cpp:60
		float32_t KF_SHOWTIME_BOUNCE_RAM_POWER;

		// RaceCarPhysics.cpp:61
		float32_t KF_SHOWTIME_BOUNCE_RAM_DECAY;

		// RaceCarPhysics.cpp:62
		float32_t KF_SHOWTIME_BOUNCE_BOOST_RAM_POWER_MOVING;

		// RaceCarPhysics.cpp:63
		float32_t KF_SHOWTIME_BOUNCE_BOOST_RAM_POWER_STATIONARY;

		// RaceCarPhysics.cpp:64
		float32_t KF_MIN_TIME_TO_REALLY_BE_IN_AIR;

		// RaceCarPhysics.cpp:67
		float32_t KF_ROTATIONAL_AFTERTOUCH_X_MODIFIER;

		// RaceCarPhysics.cpp:68
		float32_t KF_ROTATIONAL_AFTERTOUCH_Z_MODIFIER;

		// RaceCarPhysics.cpp:69
		float32_t KF_ROTATIONAL_AFTERTOUCH_G_MODIFIER;

		// RaceCarPhysics.cpp:70
		float32_t KF_ADDITIVE_AFTERTOUCH_X_MODIFIER;

		// RaceCarPhysics.cpp:71
		float32_t KF_ADDITIVE_AFTERTOUCH_FORWARD_Z_MODIFIER;

		// RaceCarPhysics.cpp:72
		float32_t KF_ADDITIVE_AFTERTOUCH_BACKWARD_Z_MODIFIER;

		// RaceCarPhysics.cpp:75
		float32_t KF_MANUAL_SPIN_MIN_LEVEL;

		// RaceCarPhysics.cpp:76
		float32_t KF_MANUAL_SPIN_MODIFIER;

		// RaceCarPhysics.cpp:79
		float32_t KF_TARGET_ASSIST_FORCE_BY_DISTANCE;

		// RaceCarPhysics.cpp:80
		float32_t KF_TARGET_ASSIST_MAX_FORCE;

		// RaceCarPhysics.cpp:81
		float32_t KF_TARGET_ASSIST_MIN_DISTANCE;

		// RaceCarPhysics.cpp:82
		float32_t KF_TARGET_ASSIST_ANGLE_TOLERANCE;

		// RaceCarPhysics.cpp:83
		float32_t KF_TARGET_ASSIST_PERSIST_BONUS;

		// RaceCarPhysics.cpp:84
		VecFloat KVF_TARGET_ASSIST_MAX_LERP_FACTOR;

		// RaceCarPhysics.cpp:85
		VecFloat KVF_TARGET_ASSIST_MIN_LERP_FACTOR;

		// RaceCarPhysics.cpp:86
		VecFloat KVF_TARGET_ASSIST_LERP_FALLOFF;

		// RaceCarPhysics.cpp:165
		const uint8_t KU8_MAX_STRENGTH = 11;

		// RaceCarPhysics.cpp:361
		const VecFloat KVF_BEACHED_TIME_TO_FORCE_TRACTION;

		// RaceCarPhysics.cpp:1376
		const VecFloat KVF_GETSHOWTIMEDEFORMATIONSCALE_MASSSCALE;

		// RaceCarPhysics.cpp:1377
		const VecFloat KVF_GETSHOWTIMEDEFORMATIONSCALE_MIN_SCALE;

		// RaceCarPhysics.cpp:1378
		const VecFloat KVF_GETSHOWTIMEDEFORMATIONSCALE_MAX_SCALE;

		// RaceCarPhysics.cpp:1579
		float32_t KF_MIN_IDEAL_SPEED;

		// RaceCarPhysics.cpp:1580
		float32_t KF_MAX_IDEAL_SPEED;

		// RaceCarPhysics.cpp:1620
		const VecFloat KVF_SPEED_MODIFIER_UPPER_LIMIT;

		// RaceCarPhysics.cpp:1621
		const VecFloat KVF_SPEED_MODIFIER_LOWER_LIMIT;

		// RaceCarPhysics.cpp:1622
		const VecFloat KVF_SPEED_MODIFIER_RANGE;

		// RaceCarPhysics.cpp:1623
		const VecFloat KVF_PROP_IMPULSE_MODIFIER;

		// RaceCarPhysics.cpp:1624
		const VecFloat K_MAX_SLOWDOWN;

	}

}

// RaceCarPhysics.cpp:101
void BrnPhysics::Vehicle::PlayerParameters::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
}

