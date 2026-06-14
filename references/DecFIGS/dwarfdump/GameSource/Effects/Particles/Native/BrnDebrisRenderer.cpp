// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnDebrisRenderer.cpp:40
		const float32_t krDebrisLifetimeMin;

		// BrnDebrisRenderer.cpp:41
		const float32_t krDebrisLifetimeMax;

		// BrnDebrisRenderer.cpp:42
		const float32_t krRunningAt60LifetimeScale;

		// BrnDebrisRenderer.cpp:43
		const float32_t krDebrisFadeOutDuration;

		// BrnDebrisRenderer.cpp:44
		const float32_t kfMinNumberBounces;

		// BrnDebrisRenderer.cpp:45
		const float32_t kfMaxNumberBounces;

		// BrnDebrisRenderer.cpp:47
		const rw::math::vpu::Vector3 kvGravity;

		// BrnDebrisRenderer.cpp:48
		const rw::math::vpu::Vector3 kvDebrisBounciness;

		// BrnDebrisRenderer.cpp:49
		const float32_t KF_DEBRIS_DEFAULT_DRAG_RESISTANCE;

		// BrnDebrisRenderer.cpp:51
		const float32_t[4] KAF_DEBRIS_LIFETIMES;

		// BrnDebrisRenderer.cpp:59
		const rw::math::vpu::Vector4 K_VECTOR4_LIFETIME_60HZ_SCALE;

		// BrnDebrisRenderer.cpp:64
		const rw::math::vpu::Vector4 K_VECTOR4_DEBRIS_LIFETIMES;

		// BrnDebrisRenderer.cpp:69
		const rw::math::vpu::Vector4 K_VECTOR4_INITIALINDICES;

		// BrnDebrisRenderer.cpp:80
		const int32_t knNumDebrisParticlesColoured = 400;

		// BrnDebrisRenderer.cpp:81
		const int32_t knNumDebrisParticlesShiny = 300;

		// BrnDebrisRenderer.cpp:82
		const int32_t knNumDebrisParticlesDark = 400;

		// BrnDebrisRenderer.cpp:83
		const int32_t knNumDebrisParticlesHighDetail = 100;

		// BrnDebrisRenderer.cpp:84
		const int32_t knNumDebrisParticlesGlass = 400;

		// BrnDebrisRenderer.cpp:86
		BrnDebrisArrayParams[5] _gaDebrisArrayParams;

	}

}

// BrnDebrisRenderer.cpp:180
void BrnParticle::Native::BrnDebrisArray::Construct(FXBucketManager *  lpBucketManager, BrnParticle::Native::EDebrisArrayID  leDebrisType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDebrisRenderer.cpp:218
void BrnParticle::Native::BrnDebrisArray::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDebrisRenderer.cpp:234
void BrnParticle::Native::BrnDebrisArray::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDebrisRenderer.cpp:463
void BrnParticle::Native::BrnDebrisRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDebrisRenderer.cpp:203
void BrnParticle::Native::BrnDebrisArray::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDebrisRenderer.cpp:741
void BrnParticle::Native::BrnDebrisRenderer::EndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::EndRendering(/* parameters */);
}

// BrnDebrisRenderer.cpp:383
void BrnParticle::Native::BrnDebrisArray::FreeExpiredBuckets(const float32_t  lfCurrentTime, const bool  lbIsRunningAt30Hz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:386
		float32_t lfDebrisMaxLifetime;

		// BrnDebrisRenderer.cpp:395
		const float32_t lfCutOffTime;

		// BrnDebrisRenderer.cpp:396
		BrnDebrisArray::DebrisBucket * lpBucket;

	}
	{
		// BrnDebrisRenderer.cpp:400
		BrnDebrisArray::DebrisBucket * lpNextBucket;

		// BrnDebrisRenderer.cpp:402
		const float32_t lfMaxBirthTime;

		FXBucket<BrnParticle::Native::BrnDebris,32>::GetNextBucket(/* parameters */);
		FXBucketManager::FreeBucket(/* parameters */);
	}
}

// BrnDebrisRenderer.cpp:433
void BrnParticle::Native::BrnDebrisRenderer::Construct(rw::IResourceAllocator *const  lpAllocator, BrnGraphics::Im3dTexPlusLighting *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:437
		Parameters lBlendStateParams;

		// BrnDebrisRenderer.cpp:446
		ResourceDescriptor lBlendStateResDesc;

		// BrnDebrisRenderer.cpp:447
		Resource lBlendStateResource;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnDebrisRenderer.cpp:250
void BrnParticle::Native::BrnDebrisArray::GetNewDebris(const float32_t  lfBirthTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:253
		BrnDebrisArray::DebrisBucket * lpCurrentBucket;

	}
	FXBucket<BrnParticle::Native::BrnDebris,32>::GetNewParticle(/* parameters */);
	AllocateBucket<BrnParticle::Native::DebrisBucket>(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::InsertBefore(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::GetNewParticle(/* parameters */);
	rw::math::fpu::Min<uint16_t>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::GetNewParticle(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::GetNextBucket(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::Isolate(/* parameters */);
	FXBucket<BrnParticle::Native::BrnDebris,32>::InsertBefore(/* parameters */);
	rw::math::fpu::Min<uint16_t>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnDebrisRenderer.cpp:334
void BrnParticle::Native::BrnDebrisArray::SpawnDebris(const rw::math::vpu::Vector3  lPos, const rw::math::vpu::Vector3  lLinearVelocity, const rw::math::vpu::Vector3  lRotationAxis, const rw::math::vpu::Vector4  lDiffuseColour, const float32_t  lrRotationalVelocity, const float32_t  lrSizeScale, const float32_t  lrSpawnTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:337
		BrnDebris * lpNewDebris;

		// BrnDebrisRenderer.cpp:362
		float32_t lfPseudoRandom;

		// BrnDebrisRenderer.cpp:365
		const float32_t lfBounceCount;

	}
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::fpu::IntFloor<float>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	SetPlus<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	__fsel(/* parameters */);
	__fsel(/* parameters */);
}

// BrnDebrisRenderer.cpp:484
void BrnParticle::Native::BrnDebrisRenderer::BeginRender(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const rw::math::vpu::Vector3  lvSunDirection, const rw::math::vpu::Vector3  lvSunColour, const rw::math::vpu::Vector3  lvAmbientColour, const rw::math::vpu::Vector3  lvCameraPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:499
		Vector3 lvNegSunDir;

	}
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnGraphics::Im3dTexPlusLighting::SetViewProjection(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BrnGraphics::Im3dTexPlusLighting::SetEye(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnGraphics::Im3dTexPlusLighting::SetLightDirection(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	BrnGraphics::Im3dTexPlusLighting::SetLightColour(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnDebrisRenderer.cpp:520
void BrnParticle::Native::BrnDebrisRenderer::RenderDebrisArray(const float32_t  lfTime, const BrnDebrisArray *const  lpArray, const BrnParticle::Native::EDebrisArrayID  leArrayId, const bool  lbIsRunningAt30Hz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.cpp:522
		Matrix44[32] laTransforms;

		// BrnDebrisRenderer.cpp:537
		const BrnDebrisArrayParams *const lpParams;

		// BrnDebrisRenderer.cpp:544
		const Texture *const lpTexture;

		// BrnDebrisRenderer.cpp:548
		const BrnVFXMeshCollection *const lpMeshCollection;

		// BrnDebrisRenderer.cpp:553
		const MeshHelper *const lpMeshHelper;

		// BrnDebrisRenderer.cpp:561
		DrawIndexedParameters lDrawParams;

		// BrnDebrisRenderer.cpp:566
		const VecFloat lCurrentTime;

		// BrnDebrisRenderer.cpp:567
		const VecFloat lRecipFadeInTime;

		// BrnDebrisRenderer.cpp:568
		const VecFloat lRecipFadeOutTime;

		// BrnDebrisRenderer.cpp:569
		const rw::math::vpu::Vector4 lDefaultAxisPlusAngle;

		// BrnDebrisRenderer.cpp:570
		const VecFloat lFour;

		// BrnDebrisRenderer.cpp:573
		Vector4 lDebrisLifetimesMaxCorrected;

		// BrnDebrisRenderer.cpp:583
		const BrnDebrisArray::DebrisBucket * lpCurrentBucket;

		BrnGraphics::Im3dTexPlusLighting::SetShinyParams(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		CgsResource::SafeResourceHandle<renderengine::Texture>::operator const renderengine::Texture*(/* parameters */);
		CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
		{
		}
		shadow::Device::SetResource(/* parameters */);
		CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>::operator const BrnParticle::BrnVFXMeshCollection*(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		BrnVFXMeshCollection::GetMeshHelper(/* parameters */);
		Dispatch<shadow::RwDevice>(/* parameters */);
		renderengine::DrawIndexedParameters::SetPrimitiveType(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		renderengine::DrawIndexedParameters::SetStartIndex(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		renderengine::DrawIndexedParameters::SetIndexCount(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		{
			// BrnDebrisRenderer.cpp:589
			const uint32_t luNumParticles;

			// BrnDebrisRenderer.cpp:590
			const rw::math::vpu::Vector4 *const lpaParticleSpawnTimes;

			// BrnDebrisRenderer.cpp:591
			const rw::math::vpu::Vector4 * lpSpawnTimes;

			// BrnDebrisRenderer.cpp:593
			uint32_t luParticleIndex;

			// BrnDebrisRenderer.cpp:595
			const rw::math::vpu::Vector4 lMaxIndex;

			// BrnDebrisRenderer.cpp:596
			Vector4 lParticleIndices;

			FXBucket<BrnParticle::Native::BrnDebris,32>::NumParticlesInBucket(/* parameters */);
			FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleBirthTimesAsArrayOfVector4(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				// BrnDebrisRenderer.cpp:603
				Mask4 lRenderBatchMask;

				rw::math::vpu::GetMask4_False(/* parameters */);
			}
			{
				// BrnDebrisRenderer.cpp:605
				uint32_t luCount;

				{
					// BrnDebrisRenderer.cpp:608
					const rw::math::vpu::Vector4 lBirthTimes4;

					// BrnDebrisRenderer.cpp:611
					const rw::math::vpu::Vector4 lDebrisAge4;

					// BrnDebrisRenderer.cpp:612
					const Mask4 lAgesGeZero4;

					// BrnDebrisRenderer.cpp:613
					const Mask4 lAgesLtLife4;

					// BrnDebrisRenderer.cpp:614
					const Mask4 lValidAge4;

					// BrnDebrisRenderer.cpp:617
					const Mask4 lValidIndex4;

					// BrnDebrisRenderer.cpp:618
					const Mask4 lRenderMask4;

					// BrnDebrisRenderer.cpp:623
					const rw::math::vpu::Vector4 lFadeIn4;

					// BrnDebrisRenderer.cpp:624
					const rw::math::vpu::Vector4 lFadeOut4;

					// BrnDebrisRenderer.cpp:626
					const const BrnDebris & lDebris0;

					// BrnDebrisRenderer.cpp:627
					const const BrnDebris & lDebris1;

					// BrnDebrisRenderer.cpp:628
					const const BrnDebris & lDebris2;

					// BrnDebrisRenderer.cpp:629
					const const BrnDebris & lDebris3;

					// BrnDebrisRenderer.cpp:632
					const rw::math::vpu::Vector3Plus lAxisPlusAngle0;

					// BrnDebrisRenderer.cpp:633
					const rw::math::vpu::Vector3Plus lAxisPlusAngle1;

					// BrnDebrisRenderer.cpp:634
					const rw::math::vpu::Vector3Plus lAxisPlusAngle2;

					// BrnDebrisRenderer.cpp:635
					const rw::math::vpu::Vector3Plus lAxisPlusAngle3;

					// BrnDebrisRenderer.cpp:638
					const VecFloat lScale0;

					// BrnDebrisRenderer.cpp:639
					const VecFloat lScale1;

					// BrnDebrisRenderer.cpp:640
					const VecFloat lScale2;

					// BrnDebrisRenderer.cpp:641
					const VecFloat lScale3;

					// BrnDebrisRenderer.cpp:644
					const rw::math::vpu::Vector4 lRotationAngles;

					// BrnDebrisRenderer.cpp:645
					const rw::math::vpu::Vector4 lFourSines;

					// BrnDebrisRenderer.cpp:646
					const rw::math::vpu::Vector4 lFourCosines;

					// BrnDebrisRenderer.cpp:647
					const rw::math::vpu::Matrix33 lDebrisTransform0;

					// BrnDebrisRenderer.cpp:648
					const rw::math::vpu::Matrix33 lDebrisTransform1;

					// BrnDebrisRenderer.cpp:649
					const rw::math::vpu::Matrix33 lDebrisTransform2;

					// BrnDebrisRenderer.cpp:650
					const rw::math::vpu::Matrix33 lDebrisTransform3;

					// BrnDebrisRenderer.cpp:653
					const rw::math::vpu::Matrix33 lScaledTransform0;

					// BrnDebrisRenderer.cpp:654
					const rw::math::vpu::Matrix33 lScaledTransform1;

					// BrnDebrisRenderer.cpp:655
					const rw::math::vpu::Matrix33 lScaledTransform2;

					// BrnDebrisRenderer.cpp:656
					const rw::math::vpu::Matrix33 lScaledTransform3;

					// BrnDebrisRenderer.cpp:659
					const rw::math::vpu::Vector4 lXAxis0;

					// BrnDebrisRenderer.cpp:660
					const rw::math::vpu::Vector4 lYAxis0;

					// BrnDebrisRenderer.cpp:661
					const rw::math::vpu::Vector4 lZAxis0;

					// BrnDebrisRenderer.cpp:662
					const rw::math::vpu::Vector4 lWAxis0;

					// BrnDebrisRenderer.cpp:663
					const rw::math::vpu::Vector4 lXAxis1;

					// BrnDebrisRenderer.cpp:664
					const rw::math::vpu::Vector4 lYAxis1;

					// BrnDebrisRenderer.cpp:665
					const rw::math::vpu::Vector4 lZAxis1;

					// BrnDebrisRenderer.cpp:666
					const rw::math::vpu::Vector4 lWAxis1;

					// BrnDebrisRenderer.cpp:667
					const rw::math::vpu::Vector4 lXAxis2;

					// BrnDebrisRenderer.cpp:668
					const rw::math::vpu::Vector4 lYAxis2;

					// BrnDebrisRenderer.cpp:669
					const rw::math::vpu::Vector4 lZAxis2;

					// BrnDebrisRenderer.cpp:670
					const rw::math::vpu::Vector4 lWAxis2;

					// BrnDebrisRenderer.cpp:671
					const rw::math::vpu::Vector4 lXAxis3;

					// BrnDebrisRenderer.cpp:672
					const rw::math::vpu::Vector4 lYAxis3;

					// BrnDebrisRenderer.cpp:673
					const rw::math::vpu::Vector4 lZAxis3;

					// BrnDebrisRenderer.cpp:674
					const rw::math::vpu::Vector4 lWAxis3;

					FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleData(/* parameters */);
					FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleData(/* parameters */);
					FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleData(/* parameters */);
					FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleData(/* parameters */);
					rw::math::vpu::Select(/* parameters */);
					rw::math::vpu::Select(/* parameters */);
					Vector4<VectorAxisW, VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
					rw::math::vpu::Select(/* parameters */);
					rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
					CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::Cos(/* parameters */);
					rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
					VecFloat<VectorAxisW>(/* parameters */);
					CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::Sin(/* parameters */);
					rw::math::vpu::Select(/* parameters */);
					CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
					rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
					rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
					CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
					rw::math::vpu::operator*<VectorAxisW, VectorAxisW>(/* parameters */);
					VecFloat<VectorAxisW>(/* parameters */);
					VecFloat<VectorAxisW>(/* parameters */);
					rw::math::vpu::Vector4::X(/* parameters */);
					rw::math::vpu::Vector4::X(/* parameters */);
					rw::math::vpu::Vector4::X(/* parameters */);
					VecFloat<VectorAxisW>(/* parameters */);
					rw::math::vpu::MultAdd(/* parameters */);
					VecFloat<VectorAxisX>(/* parameters */);
					rw::math::vpu::Select(/* parameters */);
				}
				BrnEffects::Utils::FastMatrix33FromAxisAngle(/* parameters */);
				rw::math::vpl::VecFloor(/* parameters */);
				rw::math::vpl::VecFloor(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				{
				}
				rw::math::vpu::operator*<VectorAxisX, VectorAxisW>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::Vector4::X(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ, VectorAxisW>(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Min(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				rw::math::vpu::Min(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY, VectorAxisW>(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::MultAdd(/* parameters */);
				rw::math::vpu::MultAdd(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				BrnEffects::Utils::FastMatrix33FromAxisAngle(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::operator*=(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				BrnEffects::Utils::FastMatrix33FromAxisAngle(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				VecFloat<VectorAxisY>(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				VecFloat<VectorAxisY>(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				BrnEffects::Utils::FastMatrix33FromAxisAngle(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
				{
				}
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				{
				}
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				{
				}
				rw::math::vpu::Vector3::Vector3(/* parameters */);
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				{
				}
				rw::math::vpu::operator+=(/* parameters */);
				{
				}
				{
				}
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Matrix44::operator=(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::Matrix44::operator=(/* parameters */);
				rw::math::vpu::Matrix44::operator=(/* parameters */);
				rw::math::vpu::Matrix44::operator=(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Min(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::And(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::And(/* parameters */);
				rw::math::vpu::Or(/* parameters */);
				rw::math::vpu::Min(/* parameters */);
			}
			rw::math::vpu::CompAnyTrue(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			BrnGraphics::Im3dTexPlusLighting::SetTransformArray(/* parameters */);
			renderengine::FloatShaderStateIterator::Write(/* parameters */);
			EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
			FXBucket<BrnParticle::Native::BrnDebris,32>::GetNextBucket(/* parameters */);
		}
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

