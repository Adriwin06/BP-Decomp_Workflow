// BrnCoronaManager.cpp:370
void BrnCoronaManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCoronaManager.cpp:428
void BrnCoronaManager::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:430
		BrnCoronaManager::BrnSubmissionInterface * lpSubInt;

	}
}

// BrnCoronaManager.cpp:357
void BrnCoronaManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCoronaManager.cpp:412
void BrnCoronaManager::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:415
		BrnCoronaManager::BrnSubmissionInterface * lpSubInt;

		GetSubmissionInterface(/* parameters */);
		renderengine::CoronaBuffer::Lock(/* parameters */);
	}
}

// BrnCoronaManager.cpp:567
void BrnCoronaManager::BrnSubmissionInterface::AddCorona(const rw::math::vpu::Vector3  lvPosition, const rw::math::vpu::Vector3  lvDirection, float32_t  lfScale, float32_t  lfOpacity, const const BrnCoronaTypeParams &  lCoronaTypeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:569
		RGBA lColour;

		// BrnCoronaManager.cpp:571
		Vector3 lvPosToCamera;

	}
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnCoronaManager.cpp:576
		float32_t lfAlphaScale;

		// BrnCoronaManager.cpp:577
		float32_t lfDistSqr;

		// BrnCoronaManager.cpp:580
		VecFloat lvDistScale;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		BrnEffects::Curves::SmoothStep::Evaluate(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::RGBA::SetAlpha(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	renderengine::CoronaBuffer::Iterator::Write(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
}

// BrnCoronaManager.cpp:622
void BrnCoronaManager::BrnSubmissionInterface::AddCorona(const rw::math::vpu::Vector3  lvPosition, const rw::math::vpu::Vector3  lvDirection, float32_t  lfScale, float32_t  lfOpacity, const const BrnCoronaType &  lCoronaType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnCoronaTypeParams::GetCoronaTypeParams(/* parameters */);
}

// BrnCoronaManager.cpp:531
void BrnCoronaManager::BrnSubmissionInterface::AddPropCorona(const rw::math::vpu::Vector3  lvPosition, const rw::math::vpu::Vector3  lvDirection, const const Vector2Template<float> &  lvSize, float32_t  lfAlpha, int32_t  liTextureID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:536
		float32_t lDistSqr;

		// BrnCoronaManager.cpp:537
		SmoothStep lScaleCurve;

		// BrnCoronaManager.cpp:539
		Vector2 lvScaledVPUSize;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::Evaluate(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::CoronaBuffer::Iterator::Write(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
}

// BrnCoronaManager.cpp:385
void BrnCoronaManager::Release(const rw::IResourceAllocator &  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

// BrnCoronaManager.cpp:492
void BrnCoronaManager::SetTextureAtlas(const rw::IResourceAllocator &  lAllocator, renderengine::Texture *  lpTextureAtlas) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:501
		Parameters textureStateParameters;

		// BrnCoronaManager.cpp:509
		ResourceDescriptor descriptor;

	}
	rw::IResourceAllocator::Free(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::CoronaRenderer::SetTextureAtlas(/* parameters */);
}

// BrnCoronaManager.cpp:299
void BrnCoronaManager::Construct(const BrnResource::LinearResourceAllocator &  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:312
		renderengine::CoronaBuffer::Parameters bufferParameters;

		// BrnCoronaManager.cpp:314
		ResourceDescriptor descriptor;

		// BrnCoronaManager.cpp:321
		int i;

		// BrnCoronaManager.cpp:322
		Corona defaultCorona;

		// BrnCoronaManager.cpp:329
		renderengine::CoronaBuffer::Iterator iterator0;

		// BrnCoronaManager.cpp:329
		renderengine::CoronaBuffer::Iterator iterator1;

	}
	renderengine::CoronaRenderer::SetTextureAtlas(/* parameters */);
	renderengine::CoronaRenderer::SetBlendState(/* parameters */);
	renderengine::CoronaRenderer::SetDepthStencilStates(/* parameters */);
	renderengine::CoronaBuffer::Parameters::SetNumCoronas(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::CoronaBuffer::Iterator::Write(/* parameters */);
	renderengine::CoronaBuffer::Iterator::Write(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
}

// BrnCoronaManager.cpp:447
void BrnCoronaManager::Render(const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCoronaManager.cpp:455
		BrnCoronaManager::BrnSubmissionInterface * lpSubInt;

		// BrnCoronaManager.cpp:457
		renderengine::CoronaRenderer::RenderParameters renderParameters;

		// BrnCoronaManager.cpp:460
		Vector4 lCameraPosPlusWhiteLevel;

	}
	Begin<shadow::Device>(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::CoronaRenderer::RenderParameters::SetViewProjectionMatrix(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		// BrnCoronaManager.cpp:470
		renderengine::CoronaRenderer::BatchParameters batchParameters;

		Dispatch<shadow::Device>(/* parameters */);
		BrnSubmissionInterface::DerivedCoronaIterator::GetNumCoronasWritten(/* parameters */);
		GetMaxCoronasBatch<shadow::Device, renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(/* parameters */);
		renderengine::CoronaBuffer::GetCoronas(/* parameters */);
		shadow::Device::SetVertexDescriptor(/* parameters */);
		cellGcmSetVertexDataArrayInline(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		{
			BeginBatch<renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(/* parameters */);
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
			{
			}
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
			EndBatch<renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(/* parameters */);
		}
	}
	End<shadow::Device>(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
		{
		}
		Write<rw::math::vpu::Vector4, rw::math::vpu::Vector3, rw::math::vpu::Vector4, renderengine::RGBA8>(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		vec_lvsr(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector4>(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		Write<renderengine::RGBA8>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		Write<rw::math::vpu::Vector4, rw::math::vpu::Vector3, rw::math::vpu::Vector4, renderengine::RGBA8>(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector4>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		Write<renderengine::RGBA8>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		Write<rw::math::vpu::Vector4, rw::math::vpu::Vector3, rw::math::vpu::Vector4, renderengine::RGBA8>(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector4>(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		Write<renderengine::RGBA8>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		Write<rw::math::vpu::Vector4, rw::math::vpu::Vector3, rw::math::vpu::Vector4, renderengine::RGBA8>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		Write<rw::math::vpu::Vector4>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::fpu::Vector4Template<float>::X(/* parameters */);
		Write<renderengine::RGBA8>(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnCoronaManager.cpp:28
	const float32_t kfOneThird;

	// BrnCoronaManager.cpp:29
	const float32_t kfTwoThirds;

	// BrnCoronaManager.cpp:30
	const float32_t kfTwoThirdsPlusASixth;

	// BrnCoronaManager.cpp:32
	const float32_t kfCoronaFadeDistance;

	// BrnCoronaManager.cpp:33
	const float32_t kfNoFadeDistanceSqrd;

	// BrnCoronaManager.cpp:36
	RGBA gPropCoronaColour;

	// BrnCoronaManager.cpp:60
	const SmoothStep kVehicleCoronaScale;

	// BrnCoronaManager.cpp:64
	const SmoothStep kTrafficLightScale;

	// BrnCoronaManager.cpp:68
	const SmoothStep kPropCoronaScale;

}

// BrnCoronaManager.cpp:71
// BrnCoronaManager.cpp:38
