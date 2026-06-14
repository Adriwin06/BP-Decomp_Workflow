// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnEngineControl.h:29
		namespace Wheels {
			// BrnWheelControl.cpp:28
			extern uint32_t KI_WHEEL_SPEW;

			// BrnWheelControl.cpp:29
			extern uint32_t KI_WHEELSIDE_SPEW;

			// BrnWheelControl.cpp:31
			extern float32_t KF_DRIFT_DRIFT_RPM_SCALE_FACTOR;

			// BrnWheelControl.cpp:32
			extern float32_t KF_DRIFT_RPM_SHIFT_FACTOR;

			// BrnWheelControl.cpp:33
			extern float32_t KF_DRIFT_RPM_UP_SHIFT_FACTOR;

			// BrnWheelControl.cpp:34
			extern float32_t KF_DRIFT_RPM_POST_SHIFT_FACTOR;

			// BrnWheelControl.cpp:36
			extern float32_t KF_DRIFT_TIME_BETWEEN_SHIFTS;

			// BrnWheelControl.cpp:37
			extern float32_t KF_DRIFT_SHIFT_RISE_FROM_RPM;

			// BrnWheelControl.cpp:39
			extern float32_t KF_DRIFT_UP_SHIFT_TARGET_RPM_OFFSET;

			// BrnWheelControl.cpp:46
			extern float32_t KF_PEEL_RPM_SCALE_FACTOR;

			// BrnWheelControl.cpp:47
			extern float32_t KF_PEEL_RPM_MULTIPLIER;

			// BrnWheelControl.cpp:48
			extern Basic2dColouredVertex::Vector2 K_PEEL_OSCILLATION_RPM;

			// BrnWheelControl.cpp:49
			extern Basic2dColouredVertex::Vector2 K_PEEL_OSCILLATION_TIME;

			// BrnWheelControl.cpp:50
			extern float32_t KF_PEEL_SMOOTHING;

			// BrnWheelControl.cpp:52
			extern float32_t KF_IN_AIR_RPM_BOOST;

			// BrnWheelControl.cpp:53
			extern float32_t KF_IN_AIR_MAX_VOLUME;

			// BrnWheelControl.cpp:54
			extern float32_t KF_IN_AIR_ASCENDING_TIME;

			// BrnWheelControl.cpp:55
			extern float32_t KF_IN_AIR_DESCENDING_TIME;

			// BrnWheelControl.cpp:56
			extern float32_t KF_IN_AIR_THROTTLE_TRANSITION;

			// BrnWheelControl.cpp:62
			extern const char *[4] KAPC_WHEEL_NAMES;

			// BrnWheelControl.cpp:69
			extern const char *[2] KAPC_SIDE_NAMES;

			// BrnWheelControl.cpp:78
			const BrnPhysics::Vehicle::EVehicleDrivenWheel[4] KAE_FLIPPED_WHEELS_LOOKUP;

		}

	}

}

