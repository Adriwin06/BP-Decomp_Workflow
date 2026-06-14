// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// BrnEnclosureControl.cpp:37
			const int32_t KI_NUM_SOUND_ENCLOSURE_TYPES = 13;

			// BrnEnclosureControl.cpp:41
			float32_t KF_WHOOSH_MIN_VELOCITY_THRESHOLD;

			// BrnEnclosureControl.cpp:42
			float32_t KF_MIN_TIME_BETWEEN_TRIGGERS;

			// BrnEnclosureControl.cpp:43
			bool KB_SPEW_WHOOSH_INFO;

		}

	}

}

// BrnEnclosureControl.cpp:78
void BrnSound::Vehicles::Environment::EntityTriggerInfo::Update(const const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnclosureControl.cpp:96
void BrnSound::Vehicles::Environment::EntityTriggerInfo::GetChangeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnclosureControl.cpp:102
		BrnTrigger::GenericRegion::Type leFoundType;

		// BrnEnclosureControl.cpp:105
		int32_t liTypeIndex;

		HasTypeChanged(/* parameters */);
	}
}

