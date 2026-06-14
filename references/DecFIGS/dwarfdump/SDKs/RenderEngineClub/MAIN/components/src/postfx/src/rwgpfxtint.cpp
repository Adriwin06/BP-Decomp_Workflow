// rwgpfxtint.cpp:12
using namespace rw;

// rwgpfxtint.cpp:13
using namespace rw::math;

// rwgpfxtint.cpp:14
using namespace rw::graphics::core;

// rwgpfxtint.cpp:175
void rw::graphics::postfx::Tint::Fill(uint8_t *  pixels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxtint.cpp:181
		uint8_t * dstPixels;

		// rwgpfxtint.cpp:182
		uint8_t * src;

	}
	{
		// rwgpfxtint.cpp:184
		uint32_t z;

		{
			// rwgpfxtint.cpp:186
			uint8_t * slice;

			{
				// rwgpfxtint.cpp:187
				uint32_t y;

				{
					// rwgpfxtint.cpp:189
					uint8_t * dst;

					{
						// rwgpfxtint.cpp:190
						uint32_t x;

					}
				}
			}
		}
	}
}

// rwgpfxtint.cpp:28
void rw::graphics::postfx::Tint::GetResourceDescriptor(const rw::graphics::postfx::Tint::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxtint.cpp:98
void rw::graphics::postfx::Tint::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IResourceAllocator::Free(/* parameters */);
	IResourceAllocator::Free(/* parameters */);
}

// rwgpfxtint.cpp:132
void rw::graphics::postfx::Tint::ReleasePixelProgram(rw::IResourceAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IResourceAllocator::Free(/* parameters */);
}

// rwgpfxtint.cpp:36
void rw::graphics::postfx::Tint::Initialize(const const Resource &  resource, const rw::graphics::postfx::Tint::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxtint.cpp:41
		ResourceDescriptor descriptor;

		// rwgpfxtint.cpp:42
		rw::graphics::postfx::Tint * object;

		// rwgpfxtint.cpp:51
		renderengine::Texture::Parameters textureParameters;

		// rwgpfxtint.cpp:66
		Parameters textureStateParameters;

		ResourceDescriptor::ResourceDescriptor(/* parameters */);
		renderengine::Texture::Parameters::SetFormat(/* parameters */);
		renderengine::Texture::Parameters::SetWidth(/* parameters */);
		renderengine::Texture::Parameters::SetType(/* parameters */);
		renderengine::Texture::Parameters::Parameters(/* parameters */);
		renderengine::Texture::Parameters::SetFlags(/* parameters */);
		renderengine::Texture::Parameters::SetDepth(/* parameters */);
		renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
		renderengine::Texture::Parameters::SetHeight(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		math::vpu::Vector4::Vector4(/* parameters */);
	}
}

// rwgpfxtint.cpp:114
void rw::graphics::postfx::Tint::InitializePixelProgram(rw::IResourceAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxtint.cpp:120
		renderengine::ProgramBuffer::Parameters pixelShaderParameters;

		// rwgpfxtint.cpp:124
		ResourceDescriptor descriptor;

	}
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// rwgpfxtint.cpp:146
void rw::graphics::postfx::Tint::Apply(RenderTarget *  dst, RenderTarget *  src, bool  resolve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxtint.cpp:154
		PfxHelper * helper;

		// rwgpfxtint.cpp:161
		FloatShaderStateIterator iterator;

		// rwgpfxtint.cpp:166
		Vector4 uvOffset;

	}
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetInstance(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

// rwgpfxtint.cpp:23
// rwgpfxtint.cpp:24
// rwgpfxtint.cpp:25
