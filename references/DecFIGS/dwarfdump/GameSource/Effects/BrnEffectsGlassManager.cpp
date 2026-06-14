// BrnEffectsGlassManager.cpp:66
void BrnEffects::BrnEffectsGlassManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsGlassManager.cpp:39
void BrnEffects::BrnEffectsGlassManager::Construct(BrnParticle::ParticleModule *  lpParticleModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsGlassManager.cpp:41
		uint32_t luLoop;

	}
	BrnGlassSmashEffect::Initialise(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// BrnEffectsGlassManager.cpp:85
void BrnEffects::BrnEffectsGlassManager::FireGlassEffect(const rw::math::vpu::Matrix44Affine &  lEffectTransform, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, EntityId  lVehicleEntity, float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsGlassManager.cpp:88
		BrnGlassSmashEffect * lpNextEffect;

		// BrnEffectsGlassManager.cpp:100
		LionEffect *const lpLionEffect;

	}
	BrnGlassSmashEffect::Reset(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	BrnParticle::LionEffect::SetTransform(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnEffectsGlassManager.cpp:132
void BrnEffects::BrnEffectsGlassManager::UpdateVehicleEffectPositions(const InputBuffer *  lpInput, float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsGlassManager.cpp:134
		uint32_t luEffectLoop;

		{
			// BrnEffectsGlassManager.cpp:145
			LionEffect *const lpLionEffect;

		}
		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		{
			// BrnEffectsGlassManager.cpp:161
			int32_t lnVehicleLoop;

			// BrnEffectsGlassManager.cpp:164
			const VehicleOutputInterface::PhysicalTrafficStateQueue * lpVehicleQueue;

			// BrnEffectsGlassManager.cpp:168
			int32_t lnNumVehicles;

			EffectsIO::InputBuffer::GetVehiclePhysicalStateQueue(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength(/* parameters */);
			{
				// BrnEffectsGlassManager.cpp:178
				const PhysicalTrafficState lpVehicleEvent;

				CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(/* parameters */);
				PhysicalTrafficState(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				{
					// BrnEffectsGlassManager.cpp:188
					LionEffect *const lpLionEffect;

					{
						// BrnEffectsGlassManager.cpp:191
						const rw::math::vpu::Matrix44Affine lUpdatedTransform;

						BrnParticle::LionEffect::SetTransform(/* parameters */);
					}
				}
				BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			}
		}
		{
			// BrnEffectsGlassManager.cpp:200
			int32_t lnRaceCarLoop;

			// BrnEffectsGlassManager.cpp:203
			const RCEntityActiveRaceCarOutputInterface * lpRaceCarQueue;

			EffectsIO::InputBuffer::GetActiveRaceCarInterface(/* parameters */);
			{
				// BrnEffectsGlassManager.cpp:210
				EActiveRaceCarIndex leCurrentRaceCarIndex;

				// BrnEffectsGlassManager.cpp:220
				EntityId lRaceCarEntityId;

				// BrnEffectsGlassManager.cpp:221
				Matrix44Affine lRaceCarMatrix;

				BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
				BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				{
					// BrnEffectsGlassManager.cpp:230
					const uint32_t lGlassEffectHandle;

					// BrnEffectsGlassManager.cpp:231
					LionEffect * lpLionEffect;

					{
						// BrnEffectsGlassManager.cpp:234
						const rw::math::vpu::Matrix44Affine lUpdatedTransform;

						BrnParticle::LionEffect::SetTransform(/* parameters */);
					}
				}
				BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			}
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnEffectsGlassManager.cpp:22
	const float32_t kfLionGlassFillInEffectTime;

}

