// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// PropCollisions.cpp:26
	const uint32_t kuSizeOfEffectsArray = 5;

}

// PropCollisions.cpp:30
struct BrnEffects::VFXRuntimeMaterialLef {
private:
	// PropCollisions.cpp:97
	extern uint32_t mNextEffect;

	// PropCollisions.cpp:98
	extern uint32_t[5] maEffectHandles;

public:
	// PropCollisions.cpp:33
	void Initialise();

	// PropCollisions.cpp:42
	void VFXRuntimeMaterialLef();

	// PropCollisions.cpp:56
	void TriggerLocators(BrnParticle::ParticleModule &, float32_t, float32_t, Matrix44Affine, const VFXLocator *, uint32_t, const RaceCarState *, Random &);

private:
	// PropCollisions.cpp:104
	LionEffect * CreateEffect(BrnParticle::ParticleModule &, uint32_t);

}

// PropCollisions.cpp:272
void BrnEffects::PropCollisions::MapPropTypeToMaterial(const uint32_t  luPropTypeFromSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:279
		const PropToVFXMaterialMapping * lpMaterial;

	}
}

// PropCollisions.cpp:347
void BrnEffects::PropCollisions::ContactVisible(const rw::math::vpu::Vector3  lPoint, const Camera *const  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:349
		Vector3 lViewVec;

		// PropCollisions.cpp:351
		float32_t lViewDistSqr;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// PropCollisions.cpp:285
void BrnEffects::PropCollisions::BuildPropToMaterialTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:290
		ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> lpPhysics;

		// PropCollisions.cpp:292
		uint32_t luReslovedCount;

		// PropCollisions.cpp:294
		const VFXPropCollection *const lpPropCollection;

		// PropCollisions.cpp:295
		const VFXProp *const lpaPropArray;

		// PropCollisions.cpp:296
		const uint32_t lNumProps;

		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnParticle::VFXPropCollection>::GetMemoryResource(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		BrnParticle::VFXPropCollection::GetTableSize(/* parameters */);
		BrnParticle::VFXPropCollection::GetTable(/* parameters */);
		{
			// PropCollisions.cpp:300
			uint32_t j;

		}
		{
			// PropCollisions.cpp:306
			uint32_t i;

			{
				// PropCollisions.cpp:308
				const const VFXProp & lProp;

				// PropCollisions.cpp:309
				const uint32_t luNumPropStates;

				// PropCollisions.cpp:312
				ID lID;

				BrnParticle::VFXProp::GetNumStates(/* parameters */);
				BrnParticle::VFXProp::GetPropID(/* parameters */);
				{
					// PropCollisions.cpp:315
					uint32_t j;

					BrnPhysics::Props::PropPhysicsDataHeader::GetType(/* parameters */);
					CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
					{
						// PropCollisions.cpp:329
						const VFXPropState *const lpSmashedState;

					}
					CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
					{
					}
					{
						// PropCollisions.cpp:321
						const VFXPropState *const lpUnbrokenState;

						BrnParticle::VFXProp::GetState(/* parameters */);
					}
					BrnParticle::VFXProp::GetState(/* parameters */);
				}
			}
		}
		~ResourcePtr(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// PropCollisions.cpp:144
void BrnEffects::PropCollisions::Initialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VFXRuntimeMaterialLef::Initialise(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// PropCollisions.cpp:165
void BrnEffects::PropCollisions::UpdateLocatorVfx(const float32_t  lfCurrentTimeStep, const float32_t  lfCurrentTime, const BrnParticle::ParticleModule &  lParticleModule, const const OutputBuffer_PostPhysics::PropVFXLocatorQueue &  lPropStateQueue, const int32_t  lMaterialOverride, const RaceCarState *const  lpRaceCarState, const Camera *const  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:215
		uint32_t lCount;

		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetLength(/* parameters */);
	}
	{
		// PropCollisions.cpp:216
		uint32_t lu32I;

	}
	{
		// PropCollisions.cpp:218
		const const PropVFXLocatorEvent & lEvent;

		// PropCollisions.cpp:219
		const const rw::math::vpu::Matrix44Affine & lPropTransform;

		// PropCollisions.cpp:220
		const rw::math::vpu::Vector3 lPropPosition;

		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetEvent(/* parameters */);
	}
	{
		// PropCollisions.cpp:224
		const uint32_t luPropType;

		// PropCollisions.cpp:226
		BrnWorld::PropEntityIO::PropVFXLocatorEvent::EEventType leEventType;

		// PropCollisions.cpp:239
		const PropToVFXMaterialMapping *const lpMaterialMapping;

		BrnWorld::PropEntityIO::PropVFXLocatorEvent::GetEventType(/* parameters */);
		BrnWorld::PropEntityIO::PropVFXLocatorEvent::GetPropType(/* parameters */);
		{
			// PropCollisions.cpp:242
			const VFXMaterial *const lpMaterial;

			{
				// PropCollisions.cpp:248
				uint32_t lNumLocators;

				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				VFXRuntimeMaterialLef::TriggerLocators(/* parameters */);
				{
					{
						VFXRuntimeMaterialLef::CreateEffect(/* parameters */);
						{
							rw::math::vpu::Cross(/* parameters */);
							BrnParticle::LionEffect::SetVelocity(/* parameters */);
							rw::math::vpu::Cross(/* parameters */);
						}
						rw::math::vpu::TransformPoint(/* parameters */);
						CgsNumeric::Random::RandomFloat(/* parameters */);
						rw::math::vpu::Normalize(/* parameters */);
						rw::math::vpu::GetVector3_YAxis(/* parameters */);
						rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
						BrnParticle::LionEffect::SetTransform(/* parameters */);
						rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
						rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
						BrnParticle::LionEffect::SetStateBlendFactor(/* parameters */);
						{
							{
							}
						}
						rw::math::vpu::Normalize(/* parameters */);
						rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
					}
					BrnParticle::VFXLocator::GetHash(/* parameters */);
				}
			}
		}
	}
}

