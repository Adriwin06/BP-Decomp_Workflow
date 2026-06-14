// ActiveRaceCarData.cpp:40
void BrnEffects::ActiveRaceCarData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.cpp:47
		uint32_t luWheel;

	}
	BurstAccumulator::Construct(/* parameters */);
}

// ActiveRaceCarData.cpp:70
void BrnEffects::ActiveRaceCarData::Tick(const BrnEffects::CarState &  lCarState, const const RaceCarState &  lRaceCarState, const RaceCarParticleEffectHelper &  lEffectHelper, bool  lbGameInEventIntroMode, bool  lbIsThePlayerRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.cpp:95
		float32_t lfMinY;

	}
	{
		// ActiveRaceCarData.cpp:96
		uint32_t luWheel;

		{
			// ActiveRaceCarData.cpp:98
			const const WheelLite & lWheel;

			{
				// ActiveRaceCarData.cpp:104
				float32_t lfPositionY;

			}
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
		}
	}
	JustStartedCrashing(/* parameters */);
}

// ActiveRaceCarData.cpp:152
void BrnEffects::ActiveRaceCarData::Reset(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.cpp:160
		uint32_t luWheel;

	}
	BurstAccumulator::Reset(/* parameters */);
}

// ActiveRaceCarData.cpp:169
void BrnEffects::ActiveRaceCarData::CameraChanged(const ParticleEffectHelper &  lEffectHelper, const const CameraState &  lCameraState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.cpp:172
		uint32_t luWorldIndex;

	}
}

// ActiveRaceCarData.cpp:178
void BrnEffects::ActiveRaceCarData::ExtractTags(const ParticleEffectHelper &  lEffectHelper, const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lModelDataPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator!=(/* parameters */);
	{
		// ActiveRaceCarData.cpp:182
		const const LocatorPointSpecList & lTags;

		// ActiveRaceCarData.cpp:184
		uint32_t luNumTagPoints;

		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetGenericLocators(/* parameters */);
		BrnPhysics::Deformation::LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
		{
			// ActiveRaceCarData.cpp:186
			uint32_t luTagIndex;

		}
	}
	{
		// ActiveRaceCarData.cpp:189
		LocatorPointSpec lTagPoint;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ActiveRaceCarData.cpp:130
void BrnEffects::ActiveRaceCarData::Initialise(CgsID  lID, const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lModelDataPtr, const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.cpp:142
		uint32_t luWheel;

		BrnParticle::Native::TrailEmitterData::Prepare(/* parameters */);
	}
	BurstAccumulator::Reset(/* parameters */);
}

