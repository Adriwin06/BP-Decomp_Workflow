// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// rwgpfxrendertarget.cpp:70
			renderengine::Texture * AllocateAndInitializeTexture(const rw::graphics::postfx::Target::Parameters &, const renderengine::Texture::Parameters &);

		}

	}

}

// rwgpfxrendertarget.cpp:26
using namespace rw::graphics::core;

// rwgpfxrendertarget.cpp:919
void rw::graphics::postfx::RenderTarget::Resolve(bool  lbResolveDepthStencil, bool  lbResolveColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:908
void rw::graphics::postfx::RenderTarget::End(bool  bResolve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:965
void rw::graphics::postfx::RenderTarget::SetDebugger(rw::graphics::postfx::RenderTargetDebugger *  debugger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:37
void rw::graphics::postfx::Target::Target() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:43
		uint32_t i;

	}
}

// rwgpfxrendertarget.cpp:473
void rw::graphics::postfx::Target::Resolve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:494
void rw::graphics::postfx::Target::Resolve(uint32_t  destSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:949
void rw::graphics::postfx::RenderTarget::GetHalfPixelOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	math::vpu::Vector4::Vector4(/* parameters */);
}

// rwgpfxrendertarget.cpp:959
void rw::graphics::postfx::RenderTarget::GetInvSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	math::vpu::Vector4::Vector4(/* parameters */);
}

// rwgpfxrendertarget.cpp:873
void rw::graphics::postfx::RenderTarget::DestroyStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:875
		uint32_t i;

	}
	SafeRelease<renderengine::RenderTargetState>(/* parameters */);
}

// rwgpfxrendertarget.cpp:567
void rw::graphics::postfx::RenderTarget::GetResourceDescriptor(const const rw::graphics::postfx::RenderTarget::Parameters &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxrendertarget.cpp:885
void rw::graphics::postfx::RenderTarget::Begin(uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:897
		ViewportParameters viewportParams;

		// rwgpfxrendertarget.cpp:901
		ScissorRectParameters scissorParams;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	renderengine::ViewportParameters::ViewportParameters(/* parameters */);
	renderengine::ViewportParameters::SetRectangle(/* parameters */);
	renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	renderengine::Device::GetDefaultRenderTargetState(/* parameters */);
}

// rwgpfxrendertarget.cpp:50
void rw::graphics::postfx::Target::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:52
		PfxHelper * helper;

		PfxHelper::GetInstance(/* parameters */);
	}
	{
		// rwgpfxrendertarget.cpp:56
		uint32_t i;

	}
}

// rwgpfxrendertarget.cpp:859
void rw::graphics::postfx::RenderTarget::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SafeRelease<rw::graphics::postfx::RenderTargetDebugger>(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:865
		uint32_t i;

	}
}

// rwgpfxrendertarget.cpp:109
void rw::graphics::postfx::Target::CreateColor(const const rw::graphics::postfx::Target::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:120
		renderengine::Texture::Parameters texParams;

		// rwgpfxrendertarget.cpp:169
		renderengine::PixelBuffer::Parameters pixelBufferParams;

		// rwgpfxrendertarget.cpp:193
		int32_t liCompressionBase;

		// rwgpfxrendertarget.cpp:207
		ResourceDescriptor bufferResDesc;

		// rwgpfxrendertarget.cpp:208
		Resource bufferResource;

		renderengine::Texture::Parameters::Parameters(/* parameters */);
	}
	renderengine::Texture::Parameters::SetDepth(/* parameters */);
	renderengine::Texture::Parameters::SetFlags(/* parameters */);
	renderengine::Texture::Parameters::PS3SetTileIndex(/* parameters */);
	renderengine::Texture::Parameters::SetWidth(/* parameters */);
	renderengine::Texture::Parameters::SetHeight(/* parameters */);
	renderengine::Texture::Parameters::SetPitch(/* parameters */);
	renderengine::Texture::Parameters::PS3SetMultiSampleType(/* parameters */);
	renderengine::Texture::Parameters::SetType(/* parameters */);
	renderengine::Texture::Parameters::SetFormat(/* parameters */);
	renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
	renderengine::Texture::Parameters::SetFlags(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:148
		Parameters tsParams;

		// rwgpfxrendertarget.cpp:164
		ResourceDescriptor resDesc;

		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		Parameters::GetAllocator(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	Parameters::GetPS3CompressionBase(/* parameters */);
	renderengine::PixelBuffer::Parameters::Parameters(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetPitch(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetWidth(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetHeight(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetTileIndex(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetMultiSampleType(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetMultiSampleType(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetFlags(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetFormat(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetType(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetCompressionEnable(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetCompressionBase(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetCompressionBank(/* parameters */);
	Parameters::GetAllocator(/* parameters */);
	IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::PixelBuffer::Parameters::SetFlags(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:227
		uint32_t luOffset;

		// rwgpfxrendertarget.cpp:230
		uint32_t luWidthHeightDepth;

		renderengine::PixelFormatGetDepth(/* parameters */);
		{
			// rwgpfxrendertarget.cpp:236
			uint32_t i;

			{
				// rwgpfxrendertarget.cpp:248
				void * lpFaceAddress;

				IResourceAllocator::Allocate(/* parameters */);
				renderengine::PixelBuffer::Parameters::PS3SetCompressionBase(/* parameters */);
				Parameters::GetAllocator(/* parameters */);
				MemAddOffset<void>(/* parameters */);
			}
		}
	}
}

// rwgpfxrendertarget.cpp:272
void rw::graphics::postfx::Target::CreateDepth(const const rw::graphics::postfx::Target::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:281
		ResourceDescriptor resDesc;

		// rwgpfxrendertarget.cpp:282
		renderengine::Texture::Parameters depthTexParams;

		// rwgpfxrendertarget.cpp:323
		renderengine::PixelBuffer::Parameters pixelBufferParams;

		// rwgpfxrendertarget.cpp:349
		int32_t liCompressionBase;

		// rwgpfxrendertarget.cpp:350
		bool lb16BitZBuffer;

		// rwgpfxrendertarget.cpp:390
		ResourceDescriptor bufferResDesc;

		ResourceDescriptor::ResourceDescriptor(/* parameters */);
		renderengine::Texture::Parameters::SetHeight(/* parameters */);
		renderengine::Texture::Parameters::SetType(/* parameters */);
		renderengine::Texture::Parameters::SetFlags(/* parameters */);
		renderengine::Texture::Parameters::PS3SetTileIndex(/* parameters */);
		renderengine::Texture::Parameters::SetWidth(/* parameters */);
		renderengine::Texture::Parameters::PS3SetMultiSampleType(/* parameters */);
		renderengine::Texture::Parameters::Parameters(/* parameters */);
		renderengine::Texture::Parameters::SetPitch(/* parameters */);
		renderengine::Texture::Parameters::SetFormat(/* parameters */);
		renderengine::Texture::Parameters::SetDepth(/* parameters */);
		renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetPitch(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetWidth(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetHeight(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetFormat(/* parameters */);
		Parameters::GetPS3CompressionBase(/* parameters */);
		renderengine::PixelBuffer::Parameters::PS3SetTileIndex(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetMultiSampleType(/* parameters */);
		renderengine::PixelBuffer::Parameters::Parameters(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetFlags(/* parameters */);
		renderengine::PixelBuffer::Parameters::SetType(/* parameters */);
		renderengine::PixelBuffer::Parameters::PS3SetCompressionBank(/* parameters */);
		renderengine::PixelBuffer::Parameters::PS3SetCompressionEnable(/* parameters */);
		renderengine::PixelBuffer::Parameters::PS3SetCompressionBase(/* parameters */);
		{
			// rwgpfxrendertarget.cpp:391
			Resource bufferResource;

			Parameters::GetAllocator(/* parameters */);
			IResourceAllocator::Allocate(/* parameters */);
			{
				// rwgpfxrendertarget.cpp:410
				uint32_t luOffset;

				// rwgpfxrendertarget.cpp:413
				uint32_t luWidthHeightDepth;

				{
					// rwgpfxrendertarget.cpp:418
					uint32_t i;

				}
			}
			Parameters::GetNumSections(/* parameters */);
			{
				// rwgpfxrendertarget.cpp:448
				int32_t liPitch;

				// rwgpfxrendertarget.cpp:449
				int32_t liSize;

			}
			~ResourceDescriptor(/* parameters */);
		}
		~ResourceDescriptor(/* parameters */);
	}
	renderengine::PixelBuffer::Parameters::PS3SetCompressionEnable(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullAddress(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullDirection(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullIndex(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullFormat(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:432
		void * lpFaceAddress;

	}
	IResourceAllocator::Allocate(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetCompressionBase(/* parameters */);
	Parameters::GetAllocator(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullIndex(/* parameters */);
	MemAddOffset<void>(/* parameters */);
	renderengine::PixelBuffer::Parameters::PS3SetZCullFormat(/* parameters */);
}

// rwgpfxrendertarget.cpp:727
void rw::graphics::postfx::RenderTarget::CreateStates(const const rw::graphics::postfx::RenderTarget::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:729
		ResourceDescriptor resDesc;

		ResourceDescriptor::ResourceDescriptor(/* parameters */);
		{
			// rwgpfxrendertarget.cpp:802
			Parameters dtsParams;

			renderengine::TextureState::Parameters::Parameters(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::TextureState::Parameters::SetTexture(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
			renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			IResourceAllocator::Allocate(/* parameters */);
		}
		~ResourceDescriptor(/* parameters */);
		Target::SetTextureState(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	Target::SetTextureState(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:767
		Parameters rtParams;

		renderengine::RenderTargetState::Parameters::Parameters(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		{
			// rwgpfxrendertarget.cpp:788
			uint32_t i;

			renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			IResourceAllocator::Allocate(/* parameters */);
		}
	}
	{
		// rwgpfxrendertarget.cpp:735
		Parameters rtParams;

		renderengine::RenderTargetState::Parameters::Parameters(/* parameters */);
		renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		{
			// rwgpfxrendertarget.cpp:755
			uint32_t i;

			renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			IResourceAllocator::Allocate(/* parameters */);
		}
	}
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMaxAnisotropy(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
	renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
	renderengine::RenderTargetState::Parameters::SetTarget(/* parameters */);
}

// rwgpfxrendertarget.cpp:625
void rw::graphics::postfx::RenderTarget::RenderTarget(const const rw::graphics::postfx::RenderTarget::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:634
		ResourceDescriptor resDesc;

		{
			// rwgpfxrendertarget.cpp:647
			rw::graphics::postfx::Target::Parameters tParams;

		}
		{
			// rwgpfxrendertarget.cpp:669
			rw::graphics::postfx::Target::Parameters tParams;

		}
		{
			// rwgpfxrendertarget.cpp:703
			uint32_t i;

		}
	}
}

// rwgpfxrendertarget.cpp:590
void rw::graphics::postfx::RenderTarget::Initialize(const const Resource &  resource, const const rw::graphics::postfx::RenderTarget::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:592
		RenderTarget * renderTarget;

	}
}

// rwgpfxrendertarget.cpp:598
void rw::graphics::postfx::RenderTarget::Initialize(const const rw::graphics::postfx::RenderTarget::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:600
		ResourceDescriptor resDesc;

		// rwgpfxrendertarget.cpp:602
		rw::IResourceAllocator * allocator;

		// rwgpfxrendertarget.cpp:613
		RenderTarget * renderTarget;

	}
	Parameters::GetAllocator(/* parameters */);
	IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	GetDefaultAllocator(/* parameters */);
}

// rwgpfxrendertarget.cpp:938
void rw::graphics::postfx::RenderTarget::RenderDebug(uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.cpp:35
