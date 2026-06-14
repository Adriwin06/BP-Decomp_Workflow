// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct Tint {
				// rwgpfxtint.h:20
				struct Parameters {
					// rwgpfxtint.h:21
					uint32_t size;

					// rwgpfxtint.h:22
					rw::IResourceAllocator * allocator;

				}

			}

		}

	}

}

// rwgpfxtint.h:17
struct rw::graphics::postfx::Tint {
private:
	// rwgpfxtint.h:59
	TintBlendParameters m_blendParameters;

	// rwgpfxtint.h:60
	bool m_blendLock;

	// rwgpfxtint.h:61
	Vector4 m_colourLookupOffset;

	// rwgpfxtint.h:62
	ProgramVariableHandle m_colourLookupOffsetHandle;

	// rwgpfxtint.h:63
	renderengine::Texture::Locked m_textureLock;

	// rwgpfxtint.h:64
	renderengine::Texture * m_textureTintMap;

	// rwgpfxtint.h:65
	TextureState * m_textureStateTintMap;

	// rwgpfxtint.h:66
	Resource m_textureTintMapResource;

	// rwgpfxtint.h:67
	Resource m_textureStateTintMapResource;

	// rwgpfxtint.h:68
	rw::IResourceAllocator * m_allocator;

	// rwgpfxtint.h:70
	extern const BlendState * s_blendState;

	// rwgpfxtint.h:71
	extern ProgramBuffer * s_pixelProgram;

	// rwgpfxtint.h:72
	extern Resource s_pixelProgramResource;

public:
	// rwgpfxtint.h:25
	ResourceDescriptor GetResourceDescriptor(rw::graphics::postfx::Tint::Parameters &);

	// rwgpfxtint.h:26
	rw::graphics::postfx::Tint * Initialize(const Resource &, rw::graphics::postfx::Tint::Parameters &);

	// rwgpfxtint.h:27
	void Release();

	// rwgpfxtint.h:29
	RenderTarget * Apply(RenderTarget *, bool);

	// rwgpfxtint.h:30
	RenderTarget * Apply(RenderTarget *, RenderTarget *, bool);

	// rwgpfxtint.h:32
	void SetColourLookupOffset(Vector4 &);

	// rwgpfxtint.h:34
	renderengine::Texture * GetTexture();

	// rwgpfxtint.h:36
	void Fill(uint8_t *);

	// rwgpfxtint.h:38
	TintBlendParameters & BeginBlendJob();

	// rwgpfxtint.h:39
	void EndBlendJob();

	// rwgpfxtint.h:41
	void SetBlendState(const BlendState *);

	// rwgpfxtint.h:42
	void InitializePixelProgram(rw::IResourceAllocator *);

	// rwgpfxtint.h:43
	void ReleasePixelProgram(rw::IResourceAllocator *);

	// rwgpfxtint.h:48
	TextureState * GetTextureState();

private:
	// rwgpfxtint.h:54
	void Tint();

	// rwgpfxtint.h:55
	void Tint(const Tint &);

	// rwgpfxtint.h:56
	void ~Tint();

}

