// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct PfxHelper {
				// rwgpfxhelper.h:31
				enum Method {
					METHOD_16TAP = 0,
					METHOD_16TAP_WITH_BILINEAR = 1,
				}

				// rwgpfxhelper.h:39
				struct Parameters {
					// rwgpfxhelper.h:41
					rw::IResourceAllocator * allocator;

				public:
					// rwgpfxhelper.h:43
					Parameters();

				}

			}

		}

	}

}

// rwgpfxhelper.h:29
struct rw::graphics::postfx::PfxHelper {
protected:
	// rwgpfxhelper.h:116
	rw::IResourceAllocator * m_allocator;

	// rwgpfxhelper.h:122
	MeshHelper * m_quadMeshState;

	// rwgpfxhelper.h:125
	VertexDescriptor * m_quadVertexDescriptor;

	// rwgpfxhelper.h:126
	renderengine::VertexBuffer * m_quadVertexBuffer;

	// rwgpfxhelper.h:127
	DrawParameters * m_quadDrawParams;

	// rwgpfxhelper.h:128
	DepthStencilState * m_quadDepthStencilState;

	// rwgpfxhelper.h:129
	ProgramBuffer * m_quadVertexProgram;

	// rwgpfxhelper.h:134
	ProgramVariableHandle m_uvOffsetHandle;

	// rwgpfxhelper.h:139
	ProgramBuffer * m_9tapPixelProgram;

	// rwgpfxhelper.h:140
	ProgramVariableHandle[3] m_blur9SamplesHandle;

	// rwgpfxhelper.h:142
	ProgramBuffer * m_16tapPixelProgram;

	// rwgpfxhelper.h:143
	ProgramVariableHandle[4] m_blur16SamplesHandle;

	// rwgpfxhelper.h:145
	ProgramBuffer * m_4tapPixelProgram;

	// rwgpfxhelper.h:146
	ProgramVariableHandle m_blur4SamplesHandle;

	// rwgpfxhelper.h:148
	BlendState * m_opaqueBlendState;

	// rwgpfxhelper.h:150
	extern PfxHelper * m_instance;

public:
	// rwgpfxhelper.h:49
	ResourceDescriptor GetResourceDescriptor(const rw::graphics::postfx::PfxHelper::Parameters &);

	// rwgpfxhelper.h:50
	PfxHelper * Initialize(const Resource &, const rw::graphics::postfx::PfxHelper::Parameters &);

	// rwgpfxhelper.h:51
	void Release();

	// rwgpfxhelper.h:54
	PfxHelper * GetInstance();

	// rwgpfxhelper.h:59
	void Blur9(RenderTarget *, RenderTarget *, float32_t, float32_t, float32_t);

	// rwgpfxhelper.h:60
	void Blur16(RenderTarget *, RenderTarget *, float32_t, float32_t, float32_t);

	// rwgpfxhelper.h:65
	void DownSample(RenderTarget *, RenderTarget *, rw::graphics::postfx::PfxHelper::Method);

	// rwgpfxhelper.h:71
	void RenderQuad(const rw::math::vpu::Vector4 *);

	// rwgpfxhelper.h:76
	const BlendState * GetOpaqueBlendState();

	// rwgpfxhelper.h:81
	rw::IResourceAllocator * GetAllocator();

	// rwgpfxhelper.h:86
	void InitWeights_Blur16(float32_t *, int, int);

	// rwgpfxhelper.h:87
	void InitWeights_Blur16WithBilinear(float *, int, int);

	// rwgpfxhelper.h:91
	void InitWeights_DirBlur9Quadratic(float32_t *, int, int, float32_t, float32_t, float32_t);

	// rwgpfxhelper.h:95
	void InitWeights_DirBlur9(float32_t *, int, int, float32_t, float32_t);

	// rwgpfxhelper.h:99
	void InitWeights_DirBlur16(float32_t *, int, int, float32_t, float32_t, float32_t);

	// rwgpfxhelper.h:104
	ProgramBuffer * CreateProgram(renderengine::ProgramBuffer::Type, void *, uint32_t, rw::IResourceAllocator *);

protected:
	// rwgpfxhelper.h:110
	void PfxHelper(const rw::graphics::postfx::PfxHelper::Parameters &);

	// rwgpfxhelper.h:112
	void CreateStates();

	// rwgpfxhelper.h:113
	void DestroyStates();

}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::BlendState>(const BlendState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::ProgramBuffer>(const ProgramBuffer *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::DepthStencilState>(const DepthStencilState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::MeshHelper>(const MeshHelper *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::VertexBuffer>(const renderengine::VertexBuffer *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::VertexDescriptor>(const VertexDescriptor *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::TextureState>(const TextureState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::Texture>(const renderengine::Texture *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// rwgpfxhelper.h:176
extern void SafeRelease<renderengine::PixelBuffer>(const PixelBuffer *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// rwgpfxrendertarget.h:30
		namespace postfx {
			// Declaration
			struct PfxHelper {
				// rwgpfxhelper.h:31
				enum Method {
					METHOD_16TAP = 0,
					METHOD_16TAP_WITH_BILINEAR = 1,
				}

				// rwgpfxhelper.h:39
				struct Parameters {
					// rwgpfxhelper.h:41
					rw::IResourceAllocator * allocator;

				public:
					// rwgpfxhelper.h:43
					Parameters();

				}

			}

		}

	}

}

// rwgpfxhelper.h:150
extern PfxHelper * m_instance;

