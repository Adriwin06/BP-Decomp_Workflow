// BrnStaticSoundMap.cpp:56
void BrnSound::World::StaticSoundEntity::Construct(const rw::math::vpu::Vector3  lPos, float32_t  lfRadius, uint16_t  lu16Type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStaticSoundMap.cpp:60
		uint16_t lu16Radius;

		// BrnStaticSoundMap.cpp:62
		BrnSound::World::StaticSoundEntity::UFloatHelper lHelper;

	}
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// BrnStaticSoundMap.cpp:160
void BrnSound::World::StaticSoundMap::Construct(const rw::math::vpu::Vector2  lMin, const rw::math::vpu::Vector2  lMax, const StaticSoundEntity *  lpEntities, int32_t  liNumEntities, BrnSound::World::StaticSoundMap::eRootType  leRootType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticSoundMap.cpp:220
void BrnSound::World::StaticSoundMap::GetEntity(int32_t  liEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticSoundMap.cpp:188
void BrnSound::World::StaticSoundMap::SetSubRegionDescriptors(SubRegionDescriptor *  lpSubRegions, int32_t  liNumSubRegionsX, int32_t  liNumSubRegionsZ, float32_t  lfSubRegionSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStaticSoundMap.cpp:195
		Vector2 lDiff;

		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	SetSubRegionSize(/* parameters */);
}

// BrnStaticSoundMap.cpp:284
void BrnSound::World::StaticSoundMap::IsInRange(const const Vector3Template<float> &  lPos, float32_t  lfRadius, const const Vector4Template<float> &  lPackedMinAndMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticSoundMap.cpp:241
void BrnSound::World::StaticSoundMap::GetSubRegionDescriptor(const const Vector3Template<float> &  lPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStaticSoundMap.cpp:243
		AISection::Vector2 lMin;

		// BrnStaticSoundMap.cpp:244
		AISection::Vector2 lMax;

	}
	{
		// BrnStaticSoundMap.cpp:251
		int32_t liSubRegionX;

		// BrnStaticSoundMap.cpp:252
		int32_t liSubRegionZ;

	}
}

// BrnStaticSoundMap.cpp:81
void BrnSound::World::StaticSoundEntity::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticSoundMap.cpp:117
void BrnSound::World::SubRegionDescriptor::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

