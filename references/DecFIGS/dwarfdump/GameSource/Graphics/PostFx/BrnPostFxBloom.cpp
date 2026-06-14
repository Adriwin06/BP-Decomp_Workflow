// BrnPostFxBloom.cpp:31
typedef VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> PostFxBloomVertexIterator;

// BrnPostFxBloom.cpp:263
void BrnPostFxBloom::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
}

// BrnPostFxBloom.cpp:72
void BrnPostFxBloom::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxBloom.cpp:74
		ResourceDescriptor resDesc;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		{
			// BrnPostFxBloom.cpp:85
			renderengine::VertexDescriptor::Parameters lVertexDescriptorParams;

			// BrnPostFxBloom.cpp:96
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
			// BrnPostFxBloom.cpp:105
			renderengine::ProgramBuffer::Parameters lVsParameters;

			// BrnPostFxBloom.cpp:109
			ResourceDescriptor lVsResDesc;

			// BrnPostFxBloom.cpp:110
			Resource lVsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnPostFxBloom.cpp:117
			renderengine::ProgramBuffer::Parameters lPsParameters;

			// BrnPostFxBloom.cpp:121
			ResourceDescriptor lPsResDesc;

			// BrnPostFxBloom.cpp:122
			Resource lPsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
			renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnPostFxBloom.cpp:160
			renderengine::ProgramBuffer::Parameters lVsParameters;

			// BrnPostFxBloom.cpp:164
			ResourceDescriptor lVsResDesc;

			// BrnPostFxBloom.cpp:165
			Resource lVsResource;

		}
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		{
			// BrnPostFxBloom.cpp:172
			renderengine::ProgramBuffer::Parameters lPsParameters;

			// BrnPostFxBloom.cpp:176
			ResourceDescriptor lPsResDesc;

			// BrnPostFxBloom.cpp:177
			Resource lPsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
			renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnPostFxBloom.cpp:206
			renderengine::ProgramBuffer::Parameters lVsParameters;

			// BrnPostFxBloom.cpp:210
			ResourceDescriptor lVsResDesc;

			// BrnPostFxBloom.cpp:211
			Resource lVsResource;

		}
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		{
			// BrnPostFxBloom.cpp:218
			renderengine::ProgramBuffer::Parameters lPsParameters;

			// BrnPostFxBloom.cpp:222
			ResourceDescriptor lPsResDesc;

			// BrnPostFxBloom.cpp:223
			Resource lPsResource;

			renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
			renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
			renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
			renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnPostFxBloom.cpp:285
void BrnPostFxBloom::PrepareDownSampleBuffer(RenderTarget *  lpDestRt, RenderTarget *  lpSourceRt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetState(/* parameters */);
	renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// BrnPostFxBloom.cpp:303
		FloatShaderStateIterator lIterator;

		// BrnPostFxBloom.cpp:304
		Vector4 lVector;

		// BrnPostFxBloom.cpp:305
		float32_t lFullInvWidth;

		// BrnPostFxBloom.cpp:306
		float32_t lFullInvHeight;

		// BrnPostFxBloom.cpp:311
		float32_t lfNumTaps;

		// BrnPostFxBloom.cpp:371
		Vector4 lOffset_00_01;

		// BrnPostFxBloom.cpp:372
		Vector4 lOffset_02_03;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	}
	{
		// BrnPostFxBloom.cpp:405
		PostFxBloomVertexIterator lVertexIterator;

		// BrnPostFxBloom.cpp:410
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnPostFxBloom.cpp:411
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// BrnPostFxBloom.cpp:415
		Vector4 lHalfPixelOffset4;

		// BrnPostFxBloom.cpp:416
		Vector2 lHalfPixelOffset;

		shadow::Device::SetState(/* parameters */);
	}
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
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
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	Write<rw::math::vpu::Vector3>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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
	rw::math::vpu::operator+(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
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

// BrnPostFxBloom.cpp:447
void BrnPostFxBloom::Generate1PassBlurredBloomBuffer(RenderTarget *  lpBloomRt, RenderTarget *  lpWorkRt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// BrnPostFxBloom.cpp:464
		FloatShaderStateIterator lIterator;

		// BrnPostFxBloom.cpp:465
		Vector4 lVector;

		// BrnPostFxBloom.cpp:466
		float32_t lFullInvWidth;

		// BrnPostFxBloom.cpp:467
		float32_t lFullInvHeight;

		// BrnPostFxBloom.cpp:470
		Vector4 lOffset_00_01;

		// BrnPostFxBloom.cpp:471
		Vector4 lOffset_02_03;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	}
	{
		// BrnPostFxBloom.cpp:490
		PostFxBloomVertexIterator lVertexIterator;

		// BrnPostFxBloom.cpp:511
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnPostFxBloom.cpp:512
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// BrnPostFxBloom.cpp:516
		Vector4 lHalfPixelOffset4;

		// BrnPostFxBloom.cpp:517
		Vector2 lHalfPixelOffset;

		shadow::Device::SetState(/* parameters */);
	}
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
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
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	Write<rw::math::vpu::Vector3>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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
	rw::math::vpu::operator+(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_stvewx(/* parameters */);
	EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
}

// BrnPostFxBloom.cpp:549
void BrnPostFxBloom::Generate2PassBlurredBloomBuffer(RenderTarget *  lpBloomRt, RenderTarget *  lpWorkRt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxBloom.cpp:553
		float32_t lfFullInvWidth;

		// BrnPostFxBloom.cpp:554
		float32_t lfFullInvHeight;

		// BrnPostFxBloom.cpp:570
		float32_t[5] lafFiveWeightsFromNine;

		// BrnPostFxBloom.cpp:571
		float32_t[5] lafFiveOffsetsFromNine;

		// BrnPostFxBloom.cpp:572
		float32_t lfTotalWeight;

	}
	renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	{
		// BrnPostFxBloom.cpp:595
		FloatShaderStateIterator lIterator;

		// BrnPostFxBloom.cpp:596
		Vector4 lVector;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	}
	rw::math::fpu::Lerp<float>(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		// BrnPostFxBloom.cpp:614
		FloatShaderStateIterator lIterator;

		// BrnPostFxBloom.cpp:615
		Vector4 lVector;

		// BrnPostFxBloom.cpp:618
		Vector4 lOffset_00_01;

		// BrnPostFxBloom.cpp:619
		Vector4 lOffset_02_03;

		// BrnPostFxBloom.cpp:620
		Vector4 lOffset_04_05;

		// BrnPostFxBloom.cpp:645
		PostFxBloomVertexIterator lVertexIterator;

		// BrnPostFxBloom.cpp:649
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnPostFxBloom.cpp:650
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// BrnPostFxBloom.cpp:654
		Vector4 lHalfPixelOffset4;

		// BrnPostFxBloom.cpp:655
		Vector2 lHalfPixelOffset;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::TextureState::NativeGetTexture(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
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
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
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
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_stvewx(/* parameters */);
		EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
	}
	{
		// BrnPostFxBloom.cpp:677
		FloatShaderStateIterator lIterator;

		// BrnPostFxBloom.cpp:678
		Vector4 lVector;

		// BrnPostFxBloom.cpp:681
		Vector4 lOffset_00_01;

		// BrnPostFxBloom.cpp:682
		Vector4 lOffset_02_03;

		// BrnPostFxBloom.cpp:683
		Vector4 lOffset_04_05;

		// BrnPostFxBloom.cpp:708
		PostFxBloomVertexIterator lVertexIterator;

		// BrnPostFxBloom.cpp:712
		renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

		// BrnPostFxBloom.cpp:713
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// BrnPostFxBloom.cpp:717
		Vector4 lHalfPixelOffset4;

		// BrnPostFxBloom.cpp:718
		Vector2 lHalfPixelOffset;

		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		renderengine::TextureState::NativeGetTexture(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
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
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_perm(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
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
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnPostFxBloom.cpp:750
void BrnPostFxBloom::Render(RenderTarget *  lpBloomRt, RenderTarget *  lpWorkRt, RenderTarget *  lpSourceRenderTarget, const float32_t  lfThreshold, const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

// _built-in_
namespace :: {
	// BrnPostFxBloom.cpp:34
	const float32_t[9] kafTapWeights;

	// BrnPostFxBloom.cpp:44
	const float32_t[9] kafTapOffsets;

}

