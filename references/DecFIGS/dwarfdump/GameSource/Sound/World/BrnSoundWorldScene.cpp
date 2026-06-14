// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnSoundWorldScene.h:43
		namespace World {
			// BrnSoundWorldScene.cpp:33
			const RGBA K_ENTITY_DRAW_COLOUR;

			// BrnSoundWorldScene.cpp:35
			const int32_t KI_INVALID_ZONE_INDEX = 4294967295;

			// BrnSoundWorldScene.cpp:36
			const int32_t KI_MAX_RESOURCE_NAME_LEN = 32;

			// BrnSoundWorldScene.cpp:38
			bool KB_SPEW_STATIC_MAP_INFO;

		}

	}

}

// BrnSoundWorldScene.cpp:87
void BrnSound::Logic::World::StaticSoundMapZone::Prepare(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::GetVector4_Zero(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
}

// BrnSoundWorldScene.cpp:66
void BrnSound::Logic::World::StaticSoundMapZone::Construct(uint16_t  lu16Zone) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourceHandle::Clear(/* parameters */);
	rw::math::fpu::GetVector4_Zero(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
}

// BrnSoundWorldScene.cpp:107
void BrnSound::Logic::World::StaticSoundMapZone::IsPrepared() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

