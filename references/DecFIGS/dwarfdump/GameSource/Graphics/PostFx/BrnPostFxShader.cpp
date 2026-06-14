// BrnPostFxShader.cpp:112
typedef VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> PostFxVertexIterator;

// BrnPostFxShader.cpp:117
void MotionBlurState::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
}

// BrnPostFxShader.cpp:130
void MotionBlurState::Update(const rw::math::vpu::Matrix44Affine &  lView, const rw::math::vpu::Matrix44 &  lProjection, const float32_t  lfTimeStep, const MotionBlurState::EQuality  leQuality) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxShader.cpp:145
		const rw::math::vpu::Matrix44Affine lOriginalViewCurr;

		// BrnPostFxShader.cpp:146
		const rw::math::vpu::Matrix44Affine lOriginalViewPrev;

		// BrnPostFxShader.cpp:149
		const rw::math::vpu::Matrix44Affine lOriginalCamTransCurr;

		// BrnPostFxShader.cpp:150
		const rw::math::vpu::Matrix44Affine lOriginalCamTransPrev;

		// BrnPostFxShader.cpp:151
		const rw::math::vpu::Matrix44Affine lCamTrans;

		// BrnPostFxShader.cpp:154
		Matrix44Affine lConstructedCamTransPrev;

		// BrnPostFxShader.cpp:157
		const rw::math::vpu::Vector3 lLinearVelocity;

		// BrnPostFxShader.cpp:161
		const rw::math::vpu::Matrix44Affine lConstructedViewPrev;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Inverse(/* parameters */);
		{
		}
		{
		}
		{
		}
		{
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
		}
	}
	{
	}
	{
	}
	{
	}
	{
		{
		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// BrnPostFxShader.cpp:234
void BrnPostFxShader::Shader::Destruct(rw::IResourceAllocator *const  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// BrnPostFxShader.cpp:604
void BrnPostFxShader::Destruct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxShader.cpp:606
		uint32_t luShader;

	}
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

// BrnPostFxShader.cpp:185
void BrnPostFxShader::Shader::Construct(rw::IResourceAllocator *const  lpAllocator, void *const  lpVertexProgram, const uint32_t  luVertexProgramSize, void *const  lpPixelProgram, const uint32_t  luPixelProgramSize, const uint8_t  luPs3RegisterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxShader.cpp:189
		renderengine::ProgramBuffer::Parameters lVsParameters;

		// BrnPostFxShader.cpp:193
		ResourceDescriptor lVsResDesc;

		// BrnPostFxShader.cpp:194
		Resource lVsResource;

	}
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnPostFxShader.cpp:201
		renderengine::ProgramBuffer::Parameters lPsParameters;

		// BrnPostFxShader.cpp:205
		ResourceDescriptor lPsResDesc;

		// BrnPostFxShader.cpp:206
		Resource lPsResource;

		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPostFxShader.cpp:213
		uint32_t luVsConstant;

	}
	{
		// BrnPostFxShader.cpp:217
		uint32_t luPsConstant;

	}
	renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
	renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
}

// BrnPostFxShader.cpp:372
void BrnPostFxShader::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxShader.cpp:486
		const renderengine::SamplerState::AddressingMode K_DEFAULT_ADDRESSING_MODE;

	}
	{
		// BrnPostFxShader.cpp:449
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParams;

		// BrnPostFxShader.cpp:460
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
		// BrnPostFxShader.cpp:467
		Parameters lBlendStateParams;

		// BrnPostFxShader.cpp:469
		ResourceDescriptor lBlendStateResDesc;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPostFxShader.cpp:476
		Parameters lDepthStencilParams;

		// BrnPostFxShader.cpp:480
		ResourceDescriptor lDepthStencilStateResDesc;

		renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
		renderengine::DepthStencilState::Parameters::SetStencilEnable(/* parameters */);
		renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
		renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPostFxShader.cpp:493
		Parameters lSamplerStateParams_Point;

		// BrnPostFxShader.cpp:504
		ResourceDescriptor lSamplerResDesc_Point;

		renderengine::SamplerState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinMipLevel(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetMaxAnisotropy(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetMaxMipLevel(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPostFxShader.cpp:512
		Parameters lSamplerStateParams_Linear;

		// BrnPostFxShader.cpp:523
		ResourceDescriptor lSamplerResDesc_Linear;

		renderengine::SamplerState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinMipLevel(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetMaxAnisotropy(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetMaxMipLevel(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPostFxShader.cpp:530
		uint32_t luCount;

		{
			// BrnPostFxShader.cpp:537
			Parameters lSamplerStateParams_MotionBlur;

			// BrnPostFxShader.cpp:562
			ResourceDescriptor lSamplerResDesc_MotionBlur;

			renderengine::SamplerState::Parameters::Parameters(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinMipLevel(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
			renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
			renderengine::SamplerState::Parameters::SetMaxMipLevel(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
		}
	}
	~ResourceDescriptor(/* parameters */);
}

// BrnPostFxShader.cpp:249
void BrnPostFxShader::Shader::SetProgram(const rw::math::vpu::Vector4 *const  lpaVertexShaderConstants, const rw::math::vpu::Vector4 *const  lpaPixelShaderConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// BrnPostFxShader.cpp:265
		uint32_t luVsConstant;

		{
			// BrnPostFxShader.cpp:269
			FloatShaderStateIterator lVsIterator;

			BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
			EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
			renderengine::FloatShaderStateIterator::Write(/* parameters */);
			cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
			{
				cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
			}
		}
	}
	{
		// BrnPostFxShader.cpp:276
		uint32_t luPsConstant;

		{
			// BrnPostFxShader.cpp:280
			FloatShaderStateIterator lPsIterator;

			EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		}
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::ProgramVariableHandle::GetProgramType(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	}
	{
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
}

// BrnPostFxShader.cpp:652
void BrnPostFxShader::Render(const float32_t  lfWhiteLevel, const const BrnPostFxBloomData &  lBloomData, const const rw::graphics::postfx::Vignette::State &  lVignetteState, const const rw::graphics::postfx::DepthOfField::State &  lDofState, const const MotionBlurState &  lMotionBlurState, const rw::math::vpu::Vector4  lTint2dColour, const float32_t  lfBrightness, const float32_t  lfContrast, const bool8_t  lbEnableDof, const bool8_t  lbEnableBloom, const bool8_t  lbEnableTint3d, const bool8_t  lbEnableVignette, const bool8_t  lbEnableMotionBlur, renderengine::Texture *const  lpSourceTexture, renderengine::Texture *const  lpBloomTexture, renderengine::Texture *const  lpDofTexture, const TextureState *const  lp3dTintTexture, const TextureState *const  lpDepthTexture, const rw::math::vpu::Vector2  lHalfPixelOffset, const float32_t  lfAspectCorrection, const bool8_t  lbBilinearSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFxShader.cpp:654
		Vector4[2] laVertexShaderConstants;

		// BrnPostFxShader.cpp:655
		Vector4[10] laPixelShaderConstants;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		{
			// BrnPostFxShader.cpp:671
			Vector4 lBloomColour;

			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Vector4::SetW(/* parameters */);
		}
		{
		}
		{
			// BrnPostFxShader.cpp:682
			const float32_t zProjScale;

			// BrnPostFxShader.cpp:683
			const float32_t wProjOffset;

			// BrnPostFxShader.cpp:689
			const rw::math::vpu::Vector4 lDofParams1;

			// BrnPostFxShader.cpp:695
			float32_t lfNearDelta;

			// BrnPostFxShader.cpp:696
			float32_t lfFarDelta;

			// BrnPostFxShader.cpp:700
			const rw::math::vpu::Vector4 lDofParams2;

			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisW, VectorAxisZ>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
		}
		{
			// BrnPostFxShader.cpp:708
			const rw::math::vpu::Vector4 lContrastScale;

			rw::math::vpu::Vector4::Vector4(/* parameters */);
		}
		{
			// BrnPostFxShader.cpp:712
			const float32_t VIGNETTE_GRADIENT_POWER;

			// BrnPostFxShader.cpp:713
			const float32_t VIGNETTE_GRADIENT_LIMIT;

			// BrnPostFxShader.cpp:716
			float32_t lfSharpParam;

			// BrnPostFxShader.cpp:717
			float32_t lfGradientSharpness;

			// BrnPostFxShader.cpp:718
			float32_t lfGradientMul;

			// BrnPostFxShader.cpp:719
			float32_t lfGradientAdd;

			// BrnPostFxShader.cpp:727
			const rw::math::vpu::Vector4 lVignetteScaleMult;

			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
			SetX<VectorAxisY>(/* parameters */);
			rw::math::vpu::Vector4::SetW(/* parameters */);
			rw::math::vpu::Vector4::SetW(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		{
			// BrnPostFxShader.cpp:758
			const Camera::Matrix44_64 lProjectionToScreen;

			// BrnPostFxShader.cpp:763
			const Camera::Matrix44_64 lScreenToProjection;

			// BrnPostFxShader.cpp:768
			const Camera::Matrix44_64 lInverseCurrentWVP;

			// BrnPostFxShader.cpp:769
			const Camera::Matrix44_64 lScreenToWorld_Curr;

			// BrnPostFxShader.cpp:770
			const Camera::Matrix44_64 lWorldToScreen_Prev;

			// BrnPostFxShader.cpp:772
			const Camera::Matrix44_64 lScreenCurrentToPrevious;

			// BrnPostFxShader.cpp:774
			const Camera::Matrix44_64 lScreenToVelocity;

			// BrnPostFxShader.cpp:775
			const Camera::Matrix44_64 lScreenToVelocityRefined;

			rw::math::fpu::Matrix44Template<double>::Matrix44Template(/* parameters */);
		}
		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::fpu::Vector4Template<double>::Set(/* parameters */);
		rw::math::fpu::Matrix44Template<double>::Matrix44Template(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::fpu::Matrix44Template<double>::Matrix44Template(/* parameters */);
		rw::math::fpu::Vector4Template<double>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<double>::Set(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<double>::Set(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Matrix44Template<double>::Matrix44Template(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
		rw::math::fpu::GetMatrix44_64_Identity(/* parameters */);
		rw::math::fpu::GetMatrix44_64_Identity(/* parameters */);
		Vector4<double>(/* parameters */);
		Vector4<double>(/* parameters */);
		Vector4<double>(/* parameters */);
		{
			// BrnPostFxShader.cpp:795
			const uint32_t lxDofBit;

			// BrnPostFxShader.cpp:796
			const uint32_t lxTint3dBit;

			// BrnPostFxShader.cpp:799
			const uint32_t lxBlurBit;

			// BrnPostFxShader.cpp:800
			const uint32_t leShader;

		}
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		{
			// BrnPostFxShader.cpp:844
			PostFxVertexIterator lVertexIterator;

			// BrnPostFxShader.cpp:846
			renderengine::Device::DirectDraw::Parameters lDirectDrawParams;

			// BrnPostFxShader.cpp:847
			renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

			shadow::Device::SetVertexDescriptor(/* parameters */);
		}
		cellGcmSetVertexDataArrayInline(/* parameters */);
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
		{
			// BrnPostFxShader.cpp:854
			float32_t lfLetterboxY;

			Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		}
		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
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
		rw::math::vpu::operator+(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
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
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
}

// BrnPostFxShader.cpp:59
// BrnPostFxShader.cpp:65
