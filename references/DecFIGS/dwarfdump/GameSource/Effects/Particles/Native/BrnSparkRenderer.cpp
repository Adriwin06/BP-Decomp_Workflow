// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnSparkRenderer.cpp:34
		const float32_t krSparkFrameQueueTimestepThreshold;

	}

}

// BrnSparkRenderer.cpp:986
void BrnParticle::Native::SparkRenderer::Construct(HeapMalloc *  lpHeapMalloc, CgsGraphics::Im3d *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:1018
void BrnParticle::Native::SparkRenderer::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:343
void BrnParticle::Native::SparkArray::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:1003
void BrnParticle::Native::SparkRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:87
void BrnParticle::Native::SparkArray::SparkBank::Construct(FXBucketManager *  lpBucketManager, bool  lbCrashRelated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:288
void BrnParticle::Native::SparkArray::Construct(FXBucketManager *  lpBucketManager, BrnParticle::Native::ESparkArrayID  leArrayID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:108
void BrnParticle::Native::SparkArray::SparkBank::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:306
void BrnParticle::Native::SparkArray::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:124
void BrnParticle::Native::SparkArray::SparkBank::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:324
void BrnParticle::Native::SparkArray::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:140
void BrnParticle::Native::SparkArray::SparkBank::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:1034
void BrnParticle::Native::SparkRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSparkRenderer.cpp:1072
void BrnParticle::Native::SparkFrameDataSet::Update(const rw::math::vpu::Matrix44Affine &  lCurrentViewMatrix, const rw::math::vpu::Matrix44 &  lCurrentProjectionMatrix, const float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:1078
		const uint32_t luBaseFrame;

		// BrnSparkRenderer.cpp:1080
		float32_t[7] lafTimeStep;

		// BrnSparkRenderer.cpp:1081
		Vector3[7] lPosStep;

		// BrnSparkRenderer.cpp:1082
		Vector3[7] lVel;

		// BrnSparkRenderer.cpp:1093
		const rw::math::vpu::Matrix44Affine lInverseCurrView;

		// BrnSparkRenderer.cpp:1094
		const rw::math::vpu::Matrix44Affine lBaseView;

		// BrnSparkRenderer.cpp:1095
		const rw::math::vpu::Matrix44Affine lInverseBaseView;

		{
			// BrnSparkRenderer.cpp:1083
			uint32_t luCount;

			{
				// BrnSparkRenderer.cpp:1085
				Matrix44Affine lInvThis;

				// BrnSparkRenderer.cpp:1086
				Matrix44Affine lInvPrev;

			}
		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
		{
		}
		{
		}
		{
		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
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
			{
				{
				}
			}
		}
		{
		}
		{
			{
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Inverse(/* parameters */);
		{
		}
		{
		}
		{
		}
		{
		}
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		{
		}
		{
		}
		{
			{
			}
		}
		{
			{
			}
		}
		{
			// BrnSparkRenderer.cpp:1101
			uint32_t luCount;

			{
				// BrnSparkRenderer.cpp:1103
				const rw::math::vpu::Matrix44Affine lInverseView;

				// BrnSparkRenderer.cpp:1106
				Matrix44Affine lReconstructedInvViewMatrix;

				// BrnSparkRenderer.cpp:1109
				const rw::math::vpu::Vector3 lLinearVelocity;

				rw::math::vpu::Matrix44::operator=(/* parameters */);
			}
		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
		{
		}
		{
			{
				{
				}
			}
		}
		{
		}
		{
		}
		{
		}
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		{
			// BrnSparkRenderer.cpp:1117
			uint32_t luCountB;

		}
	}
	{
		// BrnSparkRenderer.cpp:1134
		uint32_t lnCount;

		operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	SparkFrameData::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnSparkRenderer.cpp:373
void BrnParticle::Native::SparkArray::UpdateParams(const float32_t  lfGravity, const float32_t  lfBounceStrength, const float32_t  lfMotionBlurTime, const float32_t  lfSparkRadius, const float32_t  lfDragDuration, const float32_t  lfDragInitialVelocityScale, const float32_t  lfDragTerminalVelocityScale, const rw::math::vpu::Vector4  lSparkColour1, const rw::math::vpu::Vector4  lSparkColour2, const rw::math::vpu::Vector4  lSparkColour3, const rw::math::vpu::Vector4  lSparkColour4, const rw::math::vpu::Vector4  lSparkLifetimes, const char *const  lpcTextureName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
}

// BrnSparkRenderer.cpp:239
void BrnParticle::Native::SparkArray::SparkBank::FreeUnusedBuckets(const float32_t  lfCurrentTime, const float32_t  lfMaxSparkLifeTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:241
		BrnParticle::Native::SparkArray::SparkBank::SparkBucket * lpCurrentBucket;

		{
			// BrnSparkRenderer.cpp:245
			BrnParticle::Native::SparkArray::SparkBank::SparkBucket *const lpNextBucket;

			FXBucket<BrnParticle::Native::BrnSpark,4>::GetNextBucket(/* parameters */);
			FXBucketManager::FreeBucket(/* parameters */);
		}
	}
}

// BrnSparkRenderer.cpp:544
void BrnParticle::Native::SparkArray::FreeUnusedBuckets(const float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:546
		float32_t lfMaxSparkLifeTime01;

		// BrnSparkRenderer.cpp:547
		float32_t lfMaxSparkLifeTime23;

		// BrnSparkRenderer.cpp:548
		float32_t lfMaxSparkLifeTime;

		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnSparkRenderer.cpp:1057
void BrnParticle::Native::SparkFrameDataSet::Reset(const rw::math::vpu::Matrix44Affine &  lCurrentViewMatrix, const rw::math::vpu::Matrix44 &  lCurrentProjectionMatrix, const float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:1059
		uint32_t lnCount;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		SparkFrameData::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
	}
}

// BrnSparkRenderer.cpp:157
void BrnParticle::Native::SparkArray::SparkBank::GetNewSpark(float32_t  lfBirthTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:160
		BrnParticle::Native::SparkArray::SparkBank::SparkBucket * lpCurrentBucket;

	}
	FXBucket<BrnParticle::Native::BrnSpark,4>::GetNewParticle(/* parameters */);
	AllocateBucket<BrnParticle::Native::SparkBucket>(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::InsertBefore(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::GetNewParticle(/* parameters */);
	rw::math::fpu::Min<uint16_t>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::GetNewParticle(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::GetNextBucket(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::Isolate(/* parameters */);
	FXBucket<BrnParticle::Native::BrnSpark,4>::InsertBefore(/* parameters */);
	rw::math::fpu::Min<uint16_t>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnSparkRenderer.cpp:411
void BrnParticle::Native::SparkArray::SpawnSpark(const rw::math::vpu::Vector3  lSpawnPosition, const rw::math::vpu::Vector3  lSpawnVelocity, float32_t  lfSize, float32_t  lrSpawnTime, float32_t  lrHeightAbovePlane, bool  lbCrashBank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:416
		BrnParticle::Native::SparkArray::SparkBank * lpBank;

		// BrnSparkRenderer.cpp:417
		BrnSpark * lpSpark;

		// BrnSparkRenderer.cpp:427
		Vector4 lSpawnPosition4;

		// BrnSparkRenderer.cpp:428
		Vector4 lSpawnVelocity4;

		// BrnSparkRenderer.cpp:461
		const float32_t lfG;

		// BrnSparkRenderer.cpp:462
		const float32_t lfV0;

		// BrnSparkRenderer.cpp:463
		const float32_t lfV1;

		// BrnSparkRenderer.cpp:464
		const float32_t lfTm;

		// BrnSparkRenderer.cpp:465
		const float32_t lfVy;

		// BrnSparkRenderer.cpp:468
		const float32_t lfA0;

		// BrnSparkRenderer.cpp:469
		const float32_t lfB0;

		// BrnSparkRenderer.cpp:470
		const float32_t lfC0;

		// BrnSparkRenderer.cpp:473
		const float32_t lfA1;

		// BrnSparkRenderer.cpp:474
		const float32_t lfB1;

		// BrnSparkRenderer.cpp:475
		const float32_t lfC1;

		// BrnSparkRenderer.cpp:477
		const float32_t lfBBminus4AC0;

		// BrnSparkRenderer.cpp:478
		float32_t lfBBminus4AC1;

	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::SetComponent(/* parameters */);
	rw::math::vpu::Vector4::SetComponent(/* parameters */);
	{
		// BrnSparkRenderer.cpp:482
		const float32_t lfSqrtBBminus4AC0;

		// BrnSparkRenderer.cpp:483
		const float32_t lfT;

		rw::math::fpu::Sqrt<float>(/* parameters */);
	}
	{
		// BrnSparkRenderer.cpp:504
		const float32_t lfSqrtBBminus4AC1;

		// BrnSparkRenderer.cpp:505
		const float32_t lfT;

		rw::math::fpu::Sqrt<float>(/* parameters */);
	}
	{
		// BrnSparkRenderer.cpp:489
		const float32_t lfR;

		// BrnSparkRenderer.cpp:490
		const float32_t lfNewSpawnV;

		// BrnSparkRenderer.cpp:492
		const float32_t lfNewSpawnY;

		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		{
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		// BrnSparkRenderer.cpp:509
		const float32_t lfR;

		// BrnSparkRenderer.cpp:511
		const float32_t lfNewSpawnV;

		// BrnSparkRenderer.cpp:512
		const float32_t lfNewSpawnY;

		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnSparkRenderer.cpp:1151
void BrnParticle::Native::SparkRenderer::Dispatch(const rw::math::vpu::Matrix44 &  lProjectionMatrix, renderengine::VertexBuffer *const  lpVertexBuffer, const const SparkBatchArray &  lBatchArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.cpp:1166
		const const CgsGraphics::ImRendererBase::StateLibrary & lStateLibrary;

		// BrnSparkRenderer.cpp:1172
		DrawParameters lDrawParams;

		// BrnSparkRenderer.cpp:1182
		VertexDescriptor *const lpVertexDescriptor;

		CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::GetLength(/* parameters */);
	}
	shadow::Device::ResetShadowing(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	{
		// BrnSparkRenderer.cpp:1194
		uint32_t luCount;

		{
			// BrnSparkRenderer.cpp:1196
			const const SparkBatch & lBatch;

			// BrnSparkRenderer.cpp:1201
			renderengine::Texture *const lpTexture;

			CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::operator[](/* parameters */);
			SparkArray::GetTexture(/* parameters */);
			shadow::Device::SetResource(/* parameters */);
			renderengine::DrawParameters::SetStartVertex(/* parameters */);
			shadow::Device::Draw(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
		}
		CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
	}
}

// BrnSparkRenderer.cpp:65
