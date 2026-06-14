// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// rwgpfxrendertargetdebugger.cpp:114
			Vector3[4] debugVertex;

			// rwgpfxrendertargetdebugger.cpp:122
			Vector3[4] shiftVertex;

		}

	}

}

// rwgpfxrendertargetdebugger.cpp:25
using namespace rw;

// rwgpfxrendertargetdebugger.cpp:26
using namespace rw::math;

// rwgpfxrendertargetdebugger.cpp:27
using namespace rw::graphics::core;

// rwgpfxrendertargetdebugger.cpp:84
void rw::graphics::postfx::RenderTargetDebugger::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertargetdebugger.cpp:37
void rw::graphics::postfx::RenderTargetDebugger::GetResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxrendertargetdebugger.cpp:49
void rw::graphics::postfx::RenderTargetDebugger::RenderTargetDebugger() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertargetdebugger.cpp:52
		renderengine::VertexDescriptor::Parameters vertexDescriptorParams;

		// rwgpfxrendertargetdebugger.cpp:62
		ResourceDescriptor vertexDescriptorResDesc;

		// rwgpfxrendertargetdebugger.cpp:63
		Resource vertexDescriptorResource;

	}
}

// rwgpfxrendertargetdebugger.cpp:43
void rw::graphics::postfx::RenderTargetDebugger::Initialize(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertargetdebugger.cpp:45
		rw::graphics::postfx::RenderTargetDebugger * renderTargetDebugger;

	}
}

// rwgpfxrendertargetdebugger.cpp:131
void rw::graphics::postfx::RenderTargetDebugger::Render(TextureState *  textureState, uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertargetdebugger.cpp:133
		typedef VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> QuadVertexIterator;

		// rwgpfxrendertargetdebugger.cpp:134
		PfxHelper * helper;

		// rwgpfxrendertargetdebugger.cpp:146
		renderengine::Device::DirectDraw::Parameters directDrawParams;

		// rwgpfxrendertargetdebugger.cpp:147
		renderengine::Device::DirectDraw::BatchIterator directDrawBatchIterator;

		// rwgpfxrendertargetdebugger.cpp:154
		QuadVertexIterator iterator;

		shadow::Device::SetVertexProgram(/* parameters */);
	}
	PfxHelper::GetInstance(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetOpaqueBlendState(/* parameters */);
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
	math::vpu::operator+(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	Write<rw::math::vpu::Vector3>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	vec_perm(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	vec_stvewx(/* parameters */);
	math::vpu::operator+(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	math::vpu::operator+(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	math::vpu::operator+(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
	Write<rw::math::vpu::Vector2>(/* parameters */);
	vec_stvewx(/* parameters */);
	vec_perm(/* parameters */);
	vec_stvewx(/* parameters */);
}

