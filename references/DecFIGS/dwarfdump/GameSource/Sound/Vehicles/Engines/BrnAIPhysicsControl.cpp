// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// BrnAIPhysicsControl.cpp:34
			extern float32_t KF_MIN_THROTTLE_THRESHOLD;

			// BrnAIPhysicsControl.cpp:35
			extern float32_t KF_MAX_THROTTLE_THRESHOLD;

			// BrnAIPhysicsControl.cpp:37
			extern float32_t KF_DECELERATION_COEFFICIENT;

			// BrnAIPhysicsControl.cpp:38
			extern float32_t KF_ACCCELERATION_COEFFICIENT;

			// BrnAIPhysicsControl.cpp:41
			extern float32_t KF_TIME_BETWEEN_AI_PASSBYS;

			// BrnAIPhysicsControl.cpp:43
			extern float32_t KF_VOLUME_MODIFIER;

			// BrnAIPhysicsControl.cpp:45
			VecFloat KF_PASSBY_MIN_VELOCITY_THRESHOLD;

			// BrnAIPhysicsControl.cpp:46
			VecFloat KF_NEARMISS_MIN_VELOCITY_THRESHOLD;

			// BrnAIPhysicsControl.cpp:48
			VecFloat KF_RAFFIC_PASSBY_TIME_TO_APEX;

			// BrnAIPhysicsControl.cpp:49
			VecFloat KF_DISTANCE_TO_TRIGGER;

			// BrnAIPhysicsControl.cpp:50
			VecFloat KF_NEARMISS_DISTANCE_TO_TRIGGER;

			// BrnAIPhysicsControl.cpp:52
			extern bool KB_DEBUG_AI_PASSYS;

		}

	}

}

