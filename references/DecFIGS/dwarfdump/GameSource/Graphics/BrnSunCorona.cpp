// BrnSunCorona.cpp:29
typedef renderengine::VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> BrnSunCoronaVertexIterator;

// BrnSunCorona.cpp:191
void BrnSunCorona::ComputeSunPositionOnScreen(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const rw::math::vpu::Vector3  lViewPosition, const rw::math::vpu::Vector3  lSunDir) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSunCorona.cpp:193
		Vector4 lWorldSpacePosition;

		// BrnSunCorona.cpp:194
		Vector4 lProjectedPosition;

		// BrnSunCorona.cpp:195
		Vector3 lSunPos;

		// BrnSunCorona.cpp:196
		Vector3 lLocalSunDir;

		// BrnSunCorona.cpp:197
		float32_t lfX;

		// BrnSunCorona.cpp:198
		float32_t lfY;

		// BrnSunCorona.cpp:199
		float32_t lfZNonProjected;

		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnSunCorona.cpp:168
void BrnSunCorona::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
}

// BrnSunCorona.cpp:49
void BrnSunCorona::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSunCorona.cpp:51
		ResourceDescriptor resDesc;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		{
			// BrnSunCorona.cpp:70
			renderengine::VertexDescriptor::Parameters lVertexDescriptorParams;

			// BrnSunCorona.cpp:81
			ResourceDescriptor lVertexDescriptorResDesc;

			renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
			renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnSunCorona.cpp:90
			renderengine::ProgramBuffer::Parameters lVsParameters;

			// BrnSunCorona.cpp:94
			ResourceDescriptor lVsResDesc;

			// BrnSunCorona.cpp:95
			Resource lVsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnSunCorona.cpp:102
			renderengine::ProgramBuffer::Parameters lPsParameters;

			// BrnSunCorona.cpp:106
			ResourceDescriptor lPsResDesc;

			// BrnSunCorona.cpp:107
			Resource lPsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnSunCorona.cpp:125
			renderengine::ProgramBuffer::Parameters lVsParameters;

			// BrnSunCorona.cpp:129
			ResourceDescriptor lVsResDesc;

			// BrnSunCorona.cpp:130
			Resource lVsResource;

		}
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		{
			// BrnSunCorona.cpp:137
			renderengine::ProgramBuffer::Parameters lPsParameters;

			// BrnSunCorona.cpp:141
			ResourceDescriptor lPsResDesc;

			// BrnSunCorona.cpp:142
			Resource lPsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnSunCorona.cpp:248
void BrnSunCorona::GenerateOcclusionBuffer(CgsRenderTarget *  lpOcclusionRt, CgsRenderTarget *  lpSourceDepthRt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSunCorona.cpp:259
		RenderTarget * lpDepthRenderTarget;

	}
	CgsRenderTarget::GetRenderTarget(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// BrnSunCorona.cpp:276
		FloatShaderStateIterator lIterator;

		// BrnSunCorona.cpp:277
		Vector4 lUVStartAndOffset;

		// BrnSunCorona.cpp:278
		float32_t lfStartU;

		// BrnSunCorona.cpp:279
		float32_t lfStartV;

		// BrnSunCorona.cpp:280
		float32_t lFullInvWidth;

		// BrnSunCorona.cpp:281
		float32_t lFullInvHeight;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	{
		// BrnSunCorona.cpp:324
		BrnSunCoronaVertexIterator lVertexIterator;

		// BrnSunCorona.cpp:326
		TextureState *const lpDepthStencilTexture;

		// BrnSunCorona.cpp:331
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnSunCorona.cpp:332
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		shadow::Device::SetState(/* parameters */);
	}
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	BeginBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	Write<rw::math::vpu::Vector3>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_perm(/* parameters */);
	EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
}

// BrnSunCorona.cpp:367
void BrnSunCorona::RenderOccludedFlare(CgsRenderTarget *  lpOcclusionRt, const rw::math::vpu::Vector3  lSunColour, const float32_t  lfWhiteLevel, const float32_t  lfDebugOverrideBrightness, const bool  lbDebugOverrideBrightness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSunCorona.cpp:377
		RenderTarget * lpOcclusionRenderTarget;

	}
	CgsRenderTarget::GetRenderTarget(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// BrnSunCorona.cpp:390
		FloatShaderStateIterator lIterator;

		// BrnSunCorona.cpp:391
		Vector4 lColourAndPower;

		// BrnSunCorona.cpp:392
		float32_t lfBrightness;

		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	{
		// BrnSunCorona.cpp:414
		BrnSunCoronaVertexIterator lVertexIterator;

		// BrnSunCorona.cpp:417
		TextureState *const lpColourTexture;

		// BrnSunCorona.cpp:422
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnSunCorona.cpp:423
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// BrnSunCorona.cpp:428
		float32_t lfXSize;

		// BrnSunCorona.cpp:429
		float32_t lfYSize;

		// BrnSunCorona.cpp:432
		float32_t lfYPos;

		// BrnSunCorona.cpp:433
		float32_t lfXStart;

		// BrnSunCorona.cpp:434
		float32_t lfYStart;

		// BrnSunCorona.cpp:435
		float32_t lfXEnd;

		// BrnSunCorona.cpp:436
		float32_t lfYEnd;

		shadow::Device::SetVertexDescriptor(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		BeginBatch<BrnSunCoronaVertexIterator>(/* parameters */);
		{
			renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
			cellGcmSetWriteBackEndLabelInline(/* parameters */);
			renderengine::Device::Flush(/* parameters */);
			{
				sys_timer_usleep(/* parameters */);
				renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
			}
		}
		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	{
	}
}

