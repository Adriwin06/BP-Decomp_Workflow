// rwgpfxdof.cpp:23
using namespace rw::math;

// rwgpfxdof.cpp:24
using namespace rw::graphics::core;

// rwgpfxdof.cpp:86
void rw::graphics::postfx::DepthOfField::SetState(const const rw::graphics::postfx::DepthOfField::State &  state) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxdof.cpp:94
		float32_t zProjScale;

		// rwgpfxdof.cpp:95
		float32_t wProjOffset;

		math::vpu::Clamp(/* parameters */);
		math::vpu::Max<float>(/* parameters */);
		math::vpu::Clamp(/* parameters */);
		math::vpu::Max<float>(/* parameters */);
		math::vpu::Clamp(/* parameters */);
		math::vpu::Max<float>(/* parameters */);
		math::vpu::Clamp(/* parameters */);
		math::vpu::Max<float>(/* parameters */);
	}
}

// rwgpfxdof.cpp:36
void rw::graphics::postfx::DepthOfField::GetResourceDescriptor(const const rw::graphics::postfx::DepthOfField::Parameters &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxdof.cpp:77
void rw::graphics::postfx::DepthOfField::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxdof.cpp:79
		PfxHelper * helper;

	}
}

// rwgpfxdof.cpp:49
void rw::graphics::postfx::DepthOfField::DepthOfField(const const rw::graphics::postfx::DepthOfField::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxdof.cpp:43
void rw::graphics::postfx::DepthOfField::Initialize(const const Resource &  resource, const const rw::graphics::postfx::DepthOfField::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxdof.cpp:45
		DepthOfField * helper;

	}
}

// rwgpfxdof.cpp:115
void rw::graphics::postfx::DepthOfField::DownSampleAndGaussianBlur(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, RenderTarget *  workBufferTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxdof.cpp:117
		PfxHelper * helper;

		PfxHelper::GetInstance(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetOpaqueBlendState(/* parameters */);
}

// rwgpfxdof.cpp:135
void rw::graphics::postfx::DepthOfField::Apply(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, RenderTarget *  depthRenderTarget, RenderTarget *  downSampleRt, bool  bResolveToTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxdof.cpp:137
		PfxHelper * helper;

		// rwgpfxdof.cpp:147
		Vector4 focalConstants1;

		// rwgpfxdof.cpp:152
		float32_t nearDelta;

		// rwgpfxdof.cpp:158
		float32_t farDelta;

		// rwgpfxdof.cpp:164
		Vector4 focalConstants2;

		// rwgpfxdof.cpp:168
		FloatShaderStateIterator it;

		// rwgpfxdof.cpp:184
		Vector4 uvOffset;

		PfxHelper::GetInstance(/* parameters */);
	}
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
	{
	}
}

// rwgpfxdof.cpp:193
void rw::graphics::postfx::DepthOfField::PostProcess(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, RenderTarget *  workBufferTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

