// CgsParticleSystem2d.cpp:45
void CgsGui::ParticleSystem2d::Construct(rw::IResourceAllocator *  lpAllocator, const TextureState *  lpTextureState, const BlendState *  lpBlendState, int32_t  liFramesX, int32_t  liFramesY, int32_t  liNumFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
}

// CgsParticleSystem2d.cpp:195
void CgsGui::ParticleSystem2d::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsParticleSystem2d.cpp:158
void CgsGui::ParticleSystem2d::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

// CgsParticleSystem2d.cpp:104
void CgsGui::ParticleSystem2d::Prepare(float32_t  lfEmitterLifetime, float32_t  lfEmitterRate, float32_t  lfParticleLifetime, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsPrepared(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	BillboardRenderer::SetAnimMode(/* parameters */);
}

// CgsParticleSystem2d.cpp:211
void CgsGui::ParticleSystem2d::IsFinished(float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsPrepared(/* parameters */);
}

// CgsParticleSystem2d.cpp:232
void CgsGui::ParticleSystem2d::Render(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsParticleSystem2d.cpp:247
		float32_t lfSystemAgeNow;

		// CgsParticleSystem2d.cpp:248
		float32_t lfEmitterActiveTime;

		// CgsParticleSystem2d.cpp:249
		float32_t lfNumBirthsNow;

		// CgsParticleSystem2d.cpp:250
		float32_t lfNumDeathsNow;

		// CgsParticleSystem2d.cpp:251
		int32_t liNumShouldBeActive;

		// CgsParticleSystem2d.cpp:262
		int32_t liMaxBirths;

		// CgsParticleSystem2d.cpp:374
		bool lbSizeChanges;

		// CgsParticleSystem2d.cpp:375
		float32_t lfSizeDelta;

		// CgsParticleSystem2d.cpp:377
		bool lbColourChanges;

		// CgsParticleSystem2d.cpp:378
		RGBA lcStartDiffuse;

		// CgsParticleSystem2d.cpp:380
		AptRenderHandler::Vector2 lv2HalfGravity;

		// CgsParticleSystem2d.cpp:381
		bool lbHasGravity;

		// CgsParticleSystem2d.cpp:383
		int32_t liNumBillboards;

		IsPrepared(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	{
	}
	rw::math::vpu::Min<float>(/* parameters */);
	GetSystemLifetime(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Max<int>(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:271
		int32_t i;

	}
	GetRGBA(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:385
		int32_t i;

	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:390
		const ParticleInfo & lParticle;

		// CgsParticleSystem2d.cpp:391
		const BillboardInfo & lBillboard;

		// CgsParticleSystem2d.cpp:393
		float32_t lfParticleAge;

		// CgsParticleSystem2d.cpp:407
		float32_t lfAgeProp;

		rw::math::vpu::Vector2::X(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:421
		float32_t lfFadeProp;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetRGBA(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:290
		AptRenderHandler::Vector2 lv2EmitterPosDelta;

		// CgsParticleSystem2d.cpp:291
		bool lbEmitterMoved;

		// CgsParticleSystem2d.cpp:292
		bool lbEmitterHasVol;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
			// CgsParticleSystem2d.cpp:294
			int32_t i;

		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		{
			// CgsParticleSystem2d.cpp:298
			const ParticleInfo & lParticle;

			// CgsParticleSystem2d.cpp:300
			float32_t lfTimestepFraction;

			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
		}
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:369
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// CgsParticleSystem2d.cpp:317
		float32_t lfUnbias;

		// CgsParticleSystem2d.cpp:318
		AptRenderHandler::Vector2 lv2Offset;

		rw::math::vpu::operator+=(/* parameters */);
	}
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
}

// CgsParticleSystem2d.cpp:25
