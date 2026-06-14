// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

// CgsImRenderer.h:52
struct CgsGraphics::ImRendererBase {
protected:
	// CgsImRenderer.h:173
	extern CgsGraphics::ImRendererBase::StateLibrary mgStateLibrary;

	// CgsImRenderer.h:175
	extern ImRendererBase * mgpActiveRenderer;

	// CgsImRenderer.h:176
	extern bool mgbStateLibraryConstructed;

public:
	// CgsImRenderer.h:88
	const CgsGraphics::ImRendererBase::StateLibrary & GetStateLibrary();

	// CgsImRenderer.h:94
	void SetState(const BlendState *);

	// CgsImRenderer.h:100
	void SetState(const DepthStencilState *);

	// CgsImRenderer.h:107
	void SetState(const DepthStencilState *, uint32_t);

	// CgsImRenderer.h:113
	void SetState(const RasterizerState *);

	// CgsImRenderer.h:119
	void SetState(const RenderTargetState *);

	// CgsImRenderer.h:125
	void SetState(const SamplerState *);

	// CgsImRenderer.h:132
	void SetState(const SamplerState *, uint32_t);

	// CgsImRenderer.h:138
	void SetState(const TextureState *);

	// CgsImRenderer.h:145
	void SetState(const TextureState *, uint32_t);

	// CgsImRenderer.h:151
	void SetState(const ProgramBuffer *, const ProgramBuffer *);

	// CgsImRenderer.h:157
	void SetTexture(renderengine::Texture *);

	// CgsImRenderer.h:163
	void SetTexture(renderengine::Texture *, uint32_t);

protected:
	// CgsImRenderer.h:170
	void ConstructOnceOnly(rw::IResourceAllocator *);

private:
	// CgsImRenderer.h:186
	const BlendState * ConstructBlendState(rw::IResourceAllocator *, renderengine::BlendState::Input, renderengine::BlendState::Input, renderengine::BlendState::Operation);

	// CgsImRenderer.h:189
	const BlendState * ConstructNoAlphaTestBlendState(rw::IResourceAllocator *);

	// CgsImRenderer.h:192
	const BlendState * ConstructNoBlendNoAlphaTestBlendState(rw::IResourceAllocator *);

	// CgsImRenderer.h:198
	const RasterizerState * ConstructRasteriserState(rw::IResourceAllocator *, renderengine::RasterizerState::CullMode);

	// CgsImRenderer.h:206
	const DepthStencilState * ConstructDepthStencilState(rw::IResourceAllocator *, bool, bool, renderengine::DepthStencilState::Function);

	// CgsImRenderer.h:215
	const SamplerState * ConstructSamplerState(rw::IResourceAllocator *, renderengine::SamplerState::FilterMode, renderengine::SamplerState::FilterMode, renderengine::SamplerState::AddressingMode, renderengine::SamplerState::AddressingMode);

	// CgsImRenderer.h:219
	renderengine::Texture * ConstructWhiteTexture(rw::IResourceAllocator *);

	// CgsImRenderer.h:224
	const TextureState * ConstructDefaultTextureState(rw::IResourceAllocator *, renderengine::Texture *);

}

// CgsImRenderer.h:173
extern CgsGraphics::ImRendererBase::StateLibrary mgStateLibrary;

// CgsImRenderer.h:175
extern ImRendererBase * mgpActiveRenderer;

// CgsImRenderer.h:176
extern bool mgbStateLibraryConstructed;

// CgsImRenderer.h:241
extern const int8_t KI8_MAX_PROGRAMS = 8;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

	// Declaration
	struct ImRenderer<BrnGraphics::WorldTexturedVertex> {
	public:
		// CgsImRenderer.h:643
		void EndRendering();

	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:552
		ProgramBuffer * GetPixelProgram(signed char);

		// CgsImRenderer.h:586
		void BeginRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<BrnGraphics::SkidVertex> {
	public:
		// CgsImRenderer.h:643
		void EndRendering();

	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const BrnGraphics::SkidVertex *, unsigned int);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::BasicColouredTexturedVertex> {
	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:552
		ProgramBuffer * GetPixelProgram(signed char);

		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:643
		void EndRendering();

		// CgsImRenderer.h:615
		void BeginRendering(signed char);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<BrnGraphics::LionBlendVertex> {
	public:
		// CgsImRenderer.h:643
		void EndRendering();

	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:552
		ProgramBuffer * GetPixelProgram(signed char);

		// CgsImRenderer.h:615
		void BeginRendering(signed char);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

}

// CgsImRenderer.h:241
extern const int8_t KI8_MAX_PROGRAMS;

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

	// Declaration
	struct ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> {
	public:
		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

	// Declaration
	struct ImRenderer<BrnGraphics::Im3dSkyDomeVertex> {
	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:552
		ProgramBuffer * GetPixelProgram(signed char);

		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::Basic2dColouredVertex> {
	public:
		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:524
		virtual bool SetProgram(signed char);

		// CgsImRenderer.h:665
		// Declaration
		void Render(renderengine::PrimitiveType, const Im2dUntexVertex *, unsigned int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsIm2d.h:45
			typedef Basic2dColouredVertex Im2dUntexVertex;

		}

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> {
	public:
		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<BrnGraphics::LionBlendVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const LionBlendVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<BrnGraphics::SkidVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<BrnGraphics::SkidVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const BrnGraphics::SkidVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<BrnGraphics::WorldTexturedVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const BrnGraphics::WorldTexturedVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<BrnGraphics::Im3dSkyDomeVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const BrnGraphics::Im3dSkyDomeVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<CgsGraphics::Basic2dColouredVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	// Declaration
	void Render(renderengine::PrimitiveType, const Im2dUntexVertex *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm2d.h:45
		typedef Basic2dColouredVertex Im2dUntexVertex;

	}

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<CgsGraphics::PositionOnlyVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const OcclusionCullManager::Im3dZOnlyVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<CgsGraphics::BasicColouredVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	void ImRenderer(const ImRenderer<CgsGraphics::BasicColouredTexturedVertex> &);

	void ImRenderer();

	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.h:237
void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::ImRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

	// Declaration
	struct ImRenderer<CgsGraphics::PositionOnlyVertex> {
	public:
		// CgsImRenderer.h:643
		void EndRendering();

		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:689
		VertexDescriptor * GetVertexDescriptor();

	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const OcclusionCullManager::Im3dZOnlyVertex *, unsigned int);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::BasicColouredVertex> {
	public:
		// CgsImRenderer.h:643
		void EndRendering();

		// CgsImRenderer.h:586
		void BeginRendering();

	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// CgsImRenderer.h:665
		void Render(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct ImRenderer<CgsGraphics::Basic2dColouredVertex> {
	protected:
		// CgsImRenderer.h:416
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	public:
		// CgsImRenderer.h:479
		int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

		// CgsImRenderer.h:568
		ProgramBuffer * GetVertexProgram(signed char);

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

}

// CgsImRenderer.h:52
struct CgsGraphics::ImRendererBase {
protected:
	// CgsImRenderer.h:173
	extern CgsGraphics::ImRendererBase::StateLibrary mgStateLibrary;

	// CgsImRenderer.h:175
	extern ImRendererBase * mgpActiveRenderer;

	// CgsImRenderer.h:176
	extern bool mgbStateLibraryConstructed;

public:
	// CgsImRenderer.h:88
	const CgsGraphics::ImRendererBase::StateLibrary & GetStateLibrary();

	// CgsImRenderer.h:94
	void SetState(const BlendState *);

	// CgsImRenderer.h:100
	void SetState(const DepthStencilState *);

	// CgsImRenderer.h:107
	void SetState(const DepthStencilState *, uint32_t);

	// CgsImRenderer.h:113
	void SetState(const RasterizerState *);

	// CgsImRenderer.h:119
	void SetState(const RenderTargetState *);

	// CgsImRenderer.h:125
	void SetState(const SamplerState *);

	// CgsImRenderer.h:132
	void SetState(const SamplerState *, uint32_t);

	// CgsImRenderer.h:138
	void SetState(const TextureState *);

	// CgsImRenderer.h:145
	void SetState(const TextureState *, uint32_t);

	// CgsImRenderer.h:151
	void SetState(const renderengine::ProgramBuffer *, const renderengine::ProgramBuffer *);

	// CgsImRenderer.h:157
	void SetTexture(renderengine::Texture *);

	// CgsImRenderer.h:163
	void SetTexture(renderengine::Texture *, uint32_t);

protected:
	// CgsImRenderer.h:170
	void ConstructOnceOnly(rw::IResourceAllocator *);

private:
	// CgsImRenderer.h:186
	const BlendState * ConstructBlendState(rw::IResourceAllocator *, renderengine::BlendState::Input, renderengine::BlendState::Input, renderengine::BlendState::Operation);

	// CgsImRenderer.h:189
	const BlendState * ConstructNoAlphaTestBlendState(rw::IResourceAllocator *);

	// CgsImRenderer.h:192
	const BlendState * ConstructNoBlendNoAlphaTestBlendState(rw::IResourceAllocator *);

	// CgsImRenderer.h:198
	const RasterizerState * ConstructRasteriserState(rw::IResourceAllocator *, renderengine::RasterizerState::CullMode);

	// CgsImRenderer.h:206
	const DepthStencilState * ConstructDepthStencilState(rw::IResourceAllocator *, bool, bool, renderengine::DepthStencilState::Function);

	// CgsImRenderer.h:215
	const SamplerState * ConstructSamplerState(rw::IResourceAllocator *, renderengine::SamplerState::FilterMode, renderengine::SamplerState::FilterMode, renderengine::SamplerState::AddressingMode, renderengine::SamplerState::AddressingMode);

	// CgsImRenderer.h:219
	renderengine::Texture * ConstructWhiteTexture(rw::IResourceAllocator *);

	// CgsImRenderer.h:224
	const TextureState * ConstructDefaultTextureState(rw::IResourceAllocator *, renderengine::Texture *);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsImRenderer.h:237
struct CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex> : public ImRendererBase {
	int (*)(...) * _vptr.ImRenderer;

	// CgsImRenderer.h:241
	extern const int8_t KI8_MAX_PROGRAMS = 8;

protected:
	// CgsImRenderer.h:302
	renderengine::Device::DirectDraw::Parameters mDirectDrawParameters;

	// CgsImRenderer.h:303
	renderengine::Device::DirectDraw::BatchIterator mDirectDrawBatchIterator;

	// CgsImRenderer.h:304
	VertexDescriptor * mpVertexDescriptor;

	// CgsImRenderer.h:305
	ProgramBuffer *[8] mapVertexProgramBuffer;

	// CgsImRenderer.h:306
	ProgramBuffer *[8] mapPixelProgramBuffer;

	// CgsImRenderer.h:308
	int8_t mi8CurrentProgram;

public:
	// CgsImRenderer.h:586
	void BeginRendering();

	// CgsImRenderer.h:615
	void BeginRendering(signed char);

	// CgsImRenderer.h:643
	void EndRendering();

	// CgsImRenderer.h:374
	void SetVertexDescriptor();

	// CgsImRenderer.h:391
	void SetVertexDescriptor(VertexDescriptor *);

	// CgsImRenderer.h:479
	int8_t AddProgram(rw::IResourceAllocator *, const void *, unsigned int, const void *, unsigned int);

	// CgsImRenderer.h:524
	virtual bool SetProgram(signed char);

	// CgsImRenderer.h:552
	ProgramBuffer * GetPixelProgram(signed char);

	// CgsImRenderer.h:568
	ProgramBuffer * GetVertexProgram(signed char);

	// CgsImRenderer.h:665
	void Render(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderer.h:689
	VertexDescriptor * GetVertexDescriptor();

protected:
	// CgsImRenderer.h:416
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

// CgsDefaultValues.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRendererBase {
		// CgsImRenderer.h:56
		struct StateLibrary {
			// CgsImRenderer.h:59
			const BlendState * mpBlendState_Standard;

			// CgsImRenderer.h:60
			const BlendState * mpBlendState_Additive;

			// CgsImRenderer.h:61
			const BlendState * mpBlendState_Subtractive;

			// CgsImRenderer.h:62
			const BlendState * mpBlendState_SubtractiveColour;

			// CgsImRenderer.h:63
			const BlendState * mpBlendState_Premultiplied;

			// CgsImRenderer.h:65
			const BlendState * mpBlendState_NoAlphaTest;

			// CgsImRenderer.h:67
			const BlendState * mpBlendState_NoBlendNoAlphaTest;

			// CgsImRenderer.h:69
			const RasterizerState * mpRasterizerState_CullNone;

			// CgsImRenderer.h:70
			const RasterizerState * mpRasterizerState_CullCCW;

			// CgsImRenderer.h:71
			const RasterizerState * mpRasterizerState_CullCW;

			// CgsImRenderer.h:73
			const DepthStencilState * mpDepthStencilState_ZBufferOn;

			// CgsImRenderer.h:74
			const DepthStencilState * mpDepthStencilState_ZBufferOnWriteOff;

			// CgsImRenderer.h:75
			const DepthStencilState * mpDepthStencilState_ZBufferGreaterEqWriteOff;

			// CgsImRenderer.h:76
			const DepthStencilState * mpDepthStencilState_ZBufferOff;

			// CgsImRenderer.h:78
			renderengine::Texture * mpTexture_White;

			// CgsImRenderer.h:79
			const TextureState * mpTextureState_Untextured;

			// CgsImRenderer.h:81
			const SamplerState * mpSamplerState_Linear_MipNearest_ClampUV;

			// CgsImRenderer.h:82
			const SamplerState * mpSamplerState_Linear_MipNearest_TileUV;

			// CgsImRenderer.h:83
			const SamplerState * mpSamplerState_Nearest_MipNearest_ClampUV;

			// CgsImRenderer.h:84
			const SamplerState * mpSamplerState_Nearest_MipNearest_TileUV;

		}

	}

}

