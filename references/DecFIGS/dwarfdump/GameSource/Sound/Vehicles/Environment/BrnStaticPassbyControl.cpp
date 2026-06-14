// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// BrnStaticPassbyControl.cpp:39
			extern bool KB_STATIC_PASSBY_DRAW;

			// BrnStaticPassbyControl.cpp:34
			float32_t KF_STATIC_PASSBY_VELOCITY_THRESHOLD;

			// BrnStaticPassbyControl.cpp:36
			const int32_t KI_STATIC_PASSBY_QUERY_SIZE = 16;

			// BrnStaticPassbyControl.cpp:37
			float32_t KF_TIME_TO_WAIT_FOR_RETRIGGER;

		}

	}

}

// BrnStaticPassbyControl.cpp:296
void BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::Record(const rw::math::vpu::Vector3  lvPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStaticPassbyControl.cpp:298
		uint32_t luCount;

		// BrnStaticPassbyControl.cpp:317
		BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord lRecord;

		{
			// BrnStaticPassbyControl.cpp:302
			const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord & lRecord;

		}
	}
}

