// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnLoadingScreenRenderer.cpp:26
	extern uint8_t[4096] gpLoadingScreenTextureArrow;

	// BrnLoadingScreenRenderer.cpp:30
	extern uint8_t[2097152] gpLoadingScreenTextureCar;

	// BrnLoadingScreenRenderer.cpp:34
	extern uint8_t[262144] gpLoadingScreenTextureText;

	// BrnLoadingScreenRenderer.cpp:38
	extern uint8_t[4096] gpLoadingScreenTextureBox;

	// BrnLoadingScreenRenderer.cpp:42
	extern uint8_t[262144] gpDiskErrorTexture;

	// BrnLoadingScreenRenderer.cpp:69
	const float32_t[6] gafDiskErrorLanguageOffsets;

	// BrnLoadingScreenRenderer.cpp:80
	float32_t KF_ARROW_TEXTURE_WIDTH;

	// BrnLoadingScreenRenderer.cpp:81
	float32_t KF_ARROW_TEXTURE_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:82
	float32_t KF_CAR_TEXTURE_WIDTH;

	// BrnLoadingScreenRenderer.cpp:83
	float32_t KF_CAR_TEXTURE_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:84
	float32_t KF_TEXT_TEXTURE_WIDTH;

	// BrnLoadingScreenRenderer.cpp:85
	float32_t KF_TEXT_TEXTURE_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:86
	float32_t KF_BOX_TEXTURE_WIDTH;

	// BrnLoadingScreenRenderer.cpp:87
	float32_t KF_BOX_TEXTURE_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:89
	float32_t KF_ARROW_PADDED_WIDTH;

	// BrnLoadingScreenRenderer.cpp:90
	float32_t KF_ARROW_PADDED_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:91
	float32_t KF_CAR_PADDED_WIDTH;

	// BrnLoadingScreenRenderer.cpp:92
	float32_t KF_CAR_PADDED_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:93
	float32_t KF_TEXT_PADDED_WIDTH;

	// BrnLoadingScreenRenderer.cpp:94
	float32_t KF_TEXT_PADDED_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:95
	float32_t KF_BOX_PADDED_WIDTH;

	// BrnLoadingScreenRenderer.cpp:96
	float32_t KF_BOX_PADDED_HEIGHT;

	// BrnLoadingScreenRenderer.cpp:98
	float32_t KF_ARROW_MAX_U;

	// BrnLoadingScreenRenderer.cpp:99
	float32_t KF_ARROW_MAX_V;

	// BrnLoadingScreenRenderer.cpp:100
	float32_t KF_CAR_MAX_U;

	// BrnLoadingScreenRenderer.cpp:101
	float32_t KF_CAR_MAX_V;

	// BrnLoadingScreenRenderer.cpp:102
	float32_t KF_TEXT_MAX_U;

	// BrnLoadingScreenRenderer.cpp:103
	float32_t KF_TEXT_MAX_V;

	// BrnLoadingScreenRenderer.cpp:104
	float32_t KF_BOX_MAX_U;

	// BrnLoadingScreenRenderer.cpp:105
	float32_t KF_BOX_MAX_V;

	// BrnLoadingScreenRenderer.cpp:107
	float32_t[6] KAF_TEXT_MIN_V;

	// BrnLoadingScreenRenderer.cpp:117
	float32_t KF_ROTATE_MIN_SPEED;

	// BrnLoadingScreenRenderer.cpp:118
	float32_t KF_ROTATE_MAX_SPEED;

	// BrnLoadingScreenRenderer.cpp:119
	float32_t KF_ROTATE_ACCELERATION;

	// BrnLoadingScreenRenderer.cpp:120
	float32_t KF_ROTATION_CENTRE_X;

	// BrnLoadingScreenRenderer.cpp:121
	float32_t KF_ROTATION_CENTRE_Y;

	// BrnLoadingScreenRenderer.cpp:122
	float32_t KF_ROTATION_SCALE;

	// BrnLoadingScreenRenderer.cpp:123
	float32_t KF_ROTATION_RED;

	// BrnLoadingScreenRenderer.cpp:124
	float32_t KF_ROTATION_GREEN;

	// BrnLoadingScreenRenderer.cpp:125
	float32_t KF_ROTATION_BLUE;

	// BrnLoadingScreenRenderer.cpp:127
	float32_t KF_BOX_CENTRE_X;

	// BrnLoadingScreenRenderer.cpp:128
	float32_t KF_BOX_CENTRE_Y;

	// BrnLoadingScreenRenderer.cpp:129
	float32_t KF_BOX_SCALE;

	// BrnLoadingScreenRenderer.cpp:131
	float32_t KF_ARROW_BOX_OFFSET_X;

	// BrnLoadingScreenRenderer.cpp:132
	float32_t KF_ARROW_BOX_OFFSET_Y;

	// BrnLoadingScreenRenderer.cpp:133
	float32_t KF_ARROW_SCALE;

	// BrnLoadingScreenRenderer.cpp:134
	float32_t KF_ARROW_MAX_TRANSLATION;

	// BrnLoadingScreenRenderer.cpp:135
	float32_t KF_ARROW_SPEED;

	// BrnLoadingScreenRenderer.cpp:137
	float32_t KF_ARROW_AND_BOX_ROTATION;

	// BrnLoadingScreenRenderer.cpp:140
	float32_t KF_TEXT_OFFSET_FROM_ARROW_X;

	// BrnLoadingScreenRenderer.cpp:141
	float32_t KF_TEXT_OFFSET_FROM_ARROW_Y;

	// BrnLoadingScreenRenderer.cpp:142
	float32_t KF_TEXT_SCALE;

	// BrnLoadingScreenRenderer.cpp:143
	float32_t KF_TEXT_ROTATION;

	// BrnLoadingScreenRenderer.cpp:145
	float32_t KF_FADE_IN_SPEED;

	// BrnLoadingScreenRenderer.cpp:146
	float32_t KF_FADE_OUT_SPEED;

	// BrnLoadingScreenRenderer.cpp:147
	float32_t KF_BLACK_FADE_POINT;

	// BrnLoadingScreenRenderer.cpp:148
	float32_t KF_ALPHA_FADE_POINT;

	// BrnLoadingScreenRenderer.cpp:774
	float32_t KF_BLACK_FADE_IN_SPEED;

	// BrnLoadingScreenRenderer.cpp:775
	float32_t KF_BLACK_FADE_OUT_SPEED;

}

// BrnLoadingScreenRenderer.cpp:269
void BrnGame::LoadingScreenRenderer::AddCommand(BrnGame::ELoadingScreenCommand  leCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLoadingScreenRenderer.cpp:333
void BrnGame::LoadingScreenRenderer::SetupLoadingScreenTexture(float32_t  lfWidth, float32_t  lfHeight, void *  lpcData, int32_t  liDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:336
		BrnResource::LinearResourceAllocator * lpAllocator;

		// BrnLoadingScreenRenderer.cpp:338
		renderengine::Texture::Parameters lTextureParams;

		// BrnLoadingScreenRenderer.cpp:345
		ResourceDescriptor lTextureDesc;

		// BrnLoadingScreenRenderer.cpp:348
		Resource lResource;

		// BrnLoadingScreenRenderer.cpp:351
		Texture2D * lpTexture;

		// BrnLoadingScreenRenderer.cpp:355
		renderengine::Texture::Locked lLockedTexture;

		renderengine::Texture::Parameters::SetHeight(/* parameters */);
	}
	renderengine::Texture::Parameters::SetWidth(/* parameters */);
	renderengine::Texture::Parameters::SetFormat(/* parameters */);
	renderengine::Texture::Parameters::Parameters(/* parameters */);
	renderengine::Texture::Parameters::SetFlags(/* parameters */);
	renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::Texture2D::Lock(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnLoadingScreenRenderer.cpp:880
void BrnGame::LoadingScreenRenderer::RenderDiskErrorMessage(CgsGraphics::Im2d *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:882
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lWVertexList;

		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// BrnLoadingScreenRenderer.cpp:420
void BrnGame::LoadingScreenRenderer::Render(CgsGraphics::Im2d *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:422
		float32_t KF_HALF_ROTATION_WIDTH;

		// BrnLoadingScreenRenderer.cpp:423
		float32_t KF_HALF_ROTATION_HEIGHT;

		// BrnLoadingScreenRenderer.cpp:424
		float32_t KF_HALF_TEXT_WIDTH;

		// BrnLoadingScreenRenderer.cpp:425
		float32_t KF_HALF_TEXT_HEIGHT;

		// BrnLoadingScreenRenderer.cpp:426
		float32_t KF_HALF_BOX_WIDTH;

		// BrnLoadingScreenRenderer.cpp:427
		float32_t KF_HALF_BOX_HEIGHT;

		// BrnLoadingScreenRenderer.cpp:428
		float32_t KF_HALF_ARROW_WIDTH;

		// BrnLoadingScreenRenderer.cpp:429
		float32_t KF_HALF_ARROW_HEIGHT;

	}
	{
		// BrnLoadingScreenRenderer.cpp:440
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lWVertexList;

		// BrnLoadingScreenRenderer.cpp:444
		Im2dTransform lScreenXForm;

		// BrnLoadingScreenRenderer.cpp:465
		float32_t lfFadeMax;

		// BrnLoadingScreenRenderer.cpp:490
		float32_t lfBlackFade;

		// BrnLoadingScreenRenderer.cpp:490
		float32_t lfFGAlphaFade;

		// BrnLoadingScreenRenderer.cpp:509
		int32_t liColour;

		// BrnLoadingScreenRenderer.cpp:510
		int32_t liAlpha;

		// BrnLoadingScreenRenderer.cpp:569
		bool _lbRotationAnimation;

		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::GetVector4_One(/* parameters */);
		rw::math::vpu::GetVector2_YAxis(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::GetVector2_XAxis(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		{
			// BrnLoadingScreenRenderer.cpp:520
			float32_t lfCarTextureHeight;

			// BrnLoadingScreenRenderer.cpp:521
			float32_t lfCarTextureOffset;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
		}
		shadow::Device::SetResource(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		{
			// BrnLoadingScreenRenderer.cpp:585
			float32_t mfSpeed;

			// BrnLoadingScreenRenderer.cpp:593
			float32_t lfSin;

			// BrnLoadingScreenRenderer.cpp:593
			float32_t lfCos;

			// BrnLoadingScreenRenderer.cpp:596
			Basic2dColouredVertex::Vector2 lXMinYMin;

			// BrnLoadingScreenRenderer.cpp:597
			Basic2dColouredVertex::Vector2 lXMaxYMin;

			// BrnLoadingScreenRenderer.cpp:598
			Basic2dColouredVertex::Vector2 lXMinYMax;

			// BrnLoadingScreenRenderer.cpp:599
			Basic2dColouredVertex::Vector2 lXMaxYMax;

			// BrnLoadingScreenRenderer.cpp:600
			Basic2dColouredVertex::Vector2 lOffset;

			// BrnLoadingScreenRenderer.cpp:617
			int32_t liRotationRed;

			// BrnLoadingScreenRenderer.cpp:618
			int32_t liRotationGreen;

			// BrnLoadingScreenRenderer.cpp:619
			int32_t liRotationBlue;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
			shadow::Device::SetResource(/* parameters */);
			rw::math::fpu::Sin(/* parameters */);
			rw::math::fpu::SinCos<float>(/* parameters */);
			rw::math::fpu::Cos(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::operator*<float>(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::RGBA::RGBA(/* parameters */);
			CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
			BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
			renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
			renderengine::Device::SetResource(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
			{
				CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
			}
			EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		}
		{
			// BrnLoadingScreenRenderer.cpp:636
			float32_t lfSin;

			// BrnLoadingScreenRenderer.cpp:636
			float32_t lfCos;

			// BrnLoadingScreenRenderer.cpp:639
			Basic2dColouredVertex::Vector2 lXMinYMin;

			// BrnLoadingScreenRenderer.cpp:640
			Basic2dColouredVertex::Vector2 lXMaxYMin;

			// BrnLoadingScreenRenderer.cpp:641
			Basic2dColouredVertex::Vector2 lXMinYMax;

			// BrnLoadingScreenRenderer.cpp:642
			Basic2dColouredVertex::Vector2 lXMaxYMax;

			// BrnLoadingScreenRenderer.cpp:643
			Basic2dColouredVertex::Vector2 lOffset;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
			shadow::Device::SetResource(/* parameters */);
			rw::math::fpu::SinCos<float>(/* parameters */);
			rw::math::fpu::Cos(/* parameters */);
			rw::RGBA::RGBA(/* parameters */);
			rw::math::fpu::operator*<float>(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
			BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
			renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
			renderengine::Device::SetResource(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
			{
				CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
			}
			EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		}
		{
			// BrnLoadingScreenRenderer.cpp:687
			float32_t lfSin;

			// BrnLoadingScreenRenderer.cpp:687
			float32_t lfCos;

			// BrnLoadingScreenRenderer.cpp:690
			Basic2dColouredVertex::Vector2 lXMinYMin;

			// BrnLoadingScreenRenderer.cpp:691
			Basic2dColouredVertex::Vector2 lXMaxYMin;

			// BrnLoadingScreenRenderer.cpp:692
			Basic2dColouredVertex::Vector2 lXMinYMax;

			// BrnLoadingScreenRenderer.cpp:693
			Basic2dColouredVertex::Vector2 lXMaxYMax;

			// BrnLoadingScreenRenderer.cpp:694
			Basic2dColouredVertex::Vector2 lPreRotateOffset;

			// BrnLoadingScreenRenderer.cpp:695
			Basic2dColouredVertex::Vector2 lOffset;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
			shadow::Device::SetResource(/* parameters */);
			rw::math::fpu::SinCos<float>(/* parameters */);
			rw::math::fpu::Cos(/* parameters */);
			rw::math::fpu::operator+<float>(/* parameters */);
			rw::math::fpu::operator+<float>(/* parameters */);
			rw::math::fpu::operator*<float>(/* parameters */);
			rw::math::fpu::operator+<float>(/* parameters */);
			rw::RGBA::RGBA(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
			renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
			renderengine::Device::SetResource(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
			{
				CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
			}
			EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		}
		{
			// BrnLoadingScreenRenderer.cpp:728
			float32_t lfSin;

			// BrnLoadingScreenRenderer.cpp:728
			float32_t lfCos;

			// BrnLoadingScreenRenderer.cpp:731
			Basic2dColouredVertex::Vector2 lXMinYMin;

			// BrnLoadingScreenRenderer.cpp:732
			Basic2dColouredVertex::Vector2 lXMaxYMin;

			// BrnLoadingScreenRenderer.cpp:733
			Basic2dColouredVertex::Vector2 lXMinYMax;

			// BrnLoadingScreenRenderer.cpp:734
			Basic2dColouredVertex::Vector2 lXMaxYMax;

			// BrnLoadingScreenRenderer.cpp:735
			Basic2dColouredVertex::Vector2 lOffset;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
			shadow::Device::SetResource(/* parameters */);
			rw::math::fpu::SinCos<float>(/* parameters */);
			rw::math::fpu::Cos(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			RotatePointAroundAngle(/* parameters */);
			rw::math::fpu::operator*<float>(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::RGBA::RGBA(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
			renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
			renderengine::Device::SetResource(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
			{
				CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
			}
			EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		}
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	}
}

// BrnLoadingScreenRenderer.cpp:402
void BrnGame::LoadingScreenRenderer::RenderBackground(CgsGraphics::Im2d *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLoadingScreenRenderer.cpp:784
void BrnGame::LoadingScreenRenderer::RenderBlackOverlay(CgsGraphics::Im2d *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:792
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lWVertexList;

		// BrnLoadingScreenRenderer.cpp:796
		Im2dTransform lScreenXForm;

		// BrnLoadingScreenRenderer.cpp:835
		int32_t liAlpha;

		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::GetVector4_One(/* parameters */);
		rw::math::vpu::GetVector2_YAxis(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::GetVector2_XAxis(/* parameters */);
		CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		{
			// BrnLoadingScreenRenderer.cpp:845
			float32_t lfCarTextureHeight;

			// BrnLoadingScreenRenderer.cpp:846
			float32_t lfCarTextureOffset;

			CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
		}
		shadow::Device::SetResource(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
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
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	}
}

// BrnLoadingScreenRenderer.cpp:374
void BrnGame::LoadingScreenRenderer::RenderForeground(CgsGraphics::Im2d *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:377
		uint64_t luNewTime;

		// BrnLoadingScreenRenderer.cpp:378
		uint64_t luTimeStep;

		// BrnLoadingScreenRenderer.cpp:380
		float32_t lfTimeStepSecs;

	}
}

// BrnLoadingScreenRenderer.cpp:166
void BrnGame::LoadingScreenRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLoadingScreenRenderer.cpp:186
		BrnResource::LinearResourceAllocator * lpAllocator;

		// BrnLoadingScreenRenderer.cpp:187
		renderengine::Texture::Parameters lTextureParams;

		// BrnLoadingScreenRenderer.cpp:193
		ResourceDescriptor lTextureDesc;

		// BrnLoadingScreenRenderer.cpp:195
		Resource lResource;

		// BrnLoadingScreenRenderer.cpp:198
		renderengine::Texture::Locked lLockedTexture;

		// BrnLoadingScreenRenderer.cpp:205
		CgsLanguage::ELanguage leSystemLanguage;

	}
	renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
	renderengine::Texture::Parameters::SetFormat(/* parameters */);
	renderengine::Texture::Parameters::Parameters(/* parameters */);
	renderengine::Texture::Parameters::SetFlags(/* parameters */);
	renderengine::Texture::Parameters::SetHeight(/* parameters */);
	renderengine::Texture::Parameters::SetWidth(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::Texture2D::Lock(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnLoadingScreenRenderer.cpp:245
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

