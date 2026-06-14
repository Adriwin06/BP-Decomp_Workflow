// BrnBlobbyShadowManager.cpp:45
void BrnBlobbyShadowManager::BrnBlobbyShadowBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBlobbyShadowManager.cpp:116
void BrnBlobbyShadowManager::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBlobbyShadowManager.cpp:98
void BrnBlobbyShadowManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBlobbyShadowManager.cpp:64
void BrnBlobbyShadowManager::BrnBlobbyShadowBuffer::AddShadow(const rw::math::vpu::Matrix44Affine &  lShadowTransform, const rw::math::vpu::Vector4  lvFwdLength_RearLength_BackAxle_FrontAxle, VecFloat  lfWidth, VecFloat  lfHeightOffGround) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnBlobbyShadowManager.cpp:138
void BrnBlobbyShadowManager::Render(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, CgsGraphics::Im3d *  lpIm3d, renderengine::Texture *  lpBlobbyShadowTexture, const float32_t  lfBlobbyShadowAlpha, const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBlobbyShadowManager.cpp:140
		VecFloat lInvFadeDistance;

		// BrnBlobbyShadowManager.cpp:141
		const VecFloat lfMaxOpacity;

		// BrnBlobbyShadowManager.cpp:142
		Im3dVertex[8] laVertexList;

		// BrnBlobbyShadowManager.cpp:143
		BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * lpBuffer;

		// BrnBlobbyShadowManager.cpp:160
		int32_t liWhiteLevel;

		// BrnBlobbyShadowManager.cpp:185
		int32_t liCount;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	{
		{
		}
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnBlobbyShadowManager.cpp:190
		const const BrnBlobbyShadowManager::BrnBlobbyShadowBuffer::ShadowStruct & lShadowData;

		// BrnBlobbyShadowManager.cpp:193
		Vector3 lRightOffset;

		// BrnBlobbyShadowManager.cpp:194
		VecFloat lfHeightOffGround;

		// BrnBlobbyShadowManager.cpp:197
		VecFloat lfFadeAmount;

		// BrnBlobbyShadowManager.cpp:201
		VecFloat lfShadowScale;

		// BrnBlobbyShadowManager.cpp:206
		int32_t liOpacity;

		// BrnBlobbyShadowManager.cpp:219
		Vector3 lFront;

		// BrnBlobbyShadowManager.cpp:220
		Vector3 lFrontAxel;

		// BrnBlobbyShadowManager.cpp:221
		Vector3 lRearAxel;

		// BrnBlobbyShadowManager.cpp:222
		Vector3 lRear;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		rw::math::vpu::Vector4::X(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Render(/* parameters */);
	BeginBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(/* parameters */);
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
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	{
		CgsGraphics::BasicColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(/* parameters */);
	{
	}
}

// _built-in_
namespace :: {
	// BrnBlobbyShadowManager.cpp:25
	const rw::math::vpu::Vector3 kvShadowOffset;

	// BrnBlobbyShadowManager.cpp:26
	const VecFloat kfAmbientShadowFadeDistance;

	// BrnBlobbyShadowManager.cpp:27
	const VecFloat kfAmbientShadowScaleFactor;

}

