// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// Declaration
			struct CollisionEffect {
				// BrnCollisionEffect.h:115
				struct SizeSpecificSettings {
					// BrnCollisionEffect.h:116
					float mfVolume;

					// BrnCollisionEffect.h:117
					float mfPitch;

				public:
					// BrnCollisionEffect.h:119
					SizeSpecificSettings();

				}

				// BrnCollisionEffect.h:144
				enum ePrepareState {
					E_PREPARE_STATE_CONSTRUCT_VOICE = 0,
					E_PREPARE_STATE_CONNECT_VOICE = 1,
				}

			private:
				// BrnCollisionEffect.h:126
				// Declaration
				void InitWork<Attrib::Gen::crashbin>(BrnSound::Logic::Collision::CollisionState *, const OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionEffect.cpp:536
					using namespace SendIndexes::SplicerVoiceSpec;

				}

				// BrnCollisionEffect.h:126
				// Declaration
				void InitWork<Attrib::Gen::propscrashbin>(BrnSound::Logic::Collision::CollisionState *, const OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionEffect.cpp:536
					using namespace SendIndexes::SplicerVoiceSpec;

				}

			}

			// BrnCollisionEffect.cpp:36
			using namespace CgsSound::Io;

			// BrnCollisionEffect.cpp:37
			using namespace CgsSound::Logic;

			// BrnCollisionEffect.cpp:38
			using namespace CgsSound::Playback;

			// BrnCollisionEffect.cpp:42
			extern int32_t volatile KI_SPEW_COLLISION_INFO;

			// BrnCollisionEffect.cpp:43
			extern int32_t volatile KI_SPEW_COLLISION_BIN_LOGIC;

			// BrnCollisionEffect.cpp:45
			extern float32_t KF_BASE_VALUE;

			// BrnCollisionEffect.cpp:47
			extern float32_t KF_PROP_DUCKING;

			// BrnCollisionEffect.cpp:48
			extern float32_t KF_AGGRESSIVE_DRIVING_DUCKING;

			// BrnCollisionEffect.cpp:49
			extern float32_t KF_CAR_VS_WORLD_DUCKING;

			// BrnCollisionEffect.cpp:50
			extern float32_t KF_TRAFFIC_DUCKING;

			// BrnCollisionEffect.cpp:52
			extern int32_t KI_DEBUG_DUCKING;

		}

	}

}

// BrnCollisionEffect.cpp:584
extern void GetSizeSpecificSettings<Attrib::Gen::crashbin>(const const OutputCollision &  lOutputCollision, const const crashbin &  lCrashBin, const BrnSound::Logic::Collision::CollisionEffect::SizeSpecificSettings &  lSettings) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Gen::crashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	Attrib::Gen::crashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Attrib::Gen::crashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
}

// BrnCollisionEffect.cpp:584
extern void GetSizeSpecificSettings<Attrib::Gen::propscrashbin>(const const OutputCollision &  lOutputCollision, const const propscrashbin &  lCrashBin, const BrnSound::Logic::Collision::CollisionEffect::SizeSpecificSettings &  lSettings) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Gen::propscrashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	Attrib::Gen::propscrashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Attrib::Gen::propscrashbin::Volumes(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
}

