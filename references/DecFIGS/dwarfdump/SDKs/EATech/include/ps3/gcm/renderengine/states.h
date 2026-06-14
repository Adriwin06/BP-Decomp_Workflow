// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct SamplerState {
		// states.h:47
		enum AddressingMode {
			ADDRESSINGMODE_NA = 0,
			ADDRESSINGMODE_WRAP = 1,
			ADDRESSINGMODE_MIRROR = 2,
			ADDRESSINGMODE_CLAMP = 3,
			ADDRESSINGMODE_CLAMP_TO_EDGE = 3,
			ADDRESSINGMODE_BORDER = 4,
			ADDRESSINGMODE_PS3CLAMP = 5,
			ADDRESSINGMODE_MIRROR_ONCE_CLAMP_TO_EDGE = 6,
			ADDRESSINGMODE_MIRROR_ONCE_BORDER = 7,
			ADDRESSINGMODE_MIRROR_ONCE_CLAMP = 8,
			ADDRESSINGMODE_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:64
		enum FilterMode {
			FILTERMODE_NA = 0,
			FILTERMODE_NONE = 16,
			FILTERMODE_NEAREST = 32,
			FILTERMODE_LINEAR = 64,
			FILTERMODE_CONVOLUTION = 128,
			PS3FILTERMODE_NEAREST = 1,
			PS3FILTERMODE_LINEAR = 2,
			PS3FILTERMODE_NEAREST_NEAREST = 3,
			PS3FILTERMODE_LINEAR_NEAREST = 4,
			PS3FILTERMODE_NEAREST_LINEAR = 5,
			PS3FILTERMODE_LINEAR_LINEAR = 6,
			PS3FILTERMODE_CONVOLUTION_MIN = 7,
			PS3FILTERMODE_CONVOLUTION_MAG = 4,
			FILTERMODE_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:87
		enum PS3Convolution {
			PS3CONVOLUTION_QUINCUNX = 1,
			PS3CONVOLUTION_GAUSSIAN = 2,
			PS3CONVOLUTION_QUINCUNX_ALT = 3,
		}

		// states.h:97
		enum PS3UnsignedRemap {
			PS3UNSIGNEDREMAP_NORMAL = 0,
			PS3UNSIGNEDREMAP_BIASED = 1,
			PS3UNSIGNEDREMAP_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:110
		enum PS3DepthTextureFunction {
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_NEVER = 0,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_LESS = 1,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_EQUAL = 2,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_LEQUAL = 3,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_GREATER = 4,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_NOTEQUAL = 5,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_GEQUAL = 6,
			PS3DEPTHTEXTUREFUNCTION_ZFUNC_ALWAYS = 7,
			PS3DEPTHTEXTUREFUNCTION_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:127
		enum PS3TextureGamma {
			PS3TEXTURE_GAMMA_NONE = 0,
			PS3TEXTURE_GAMMA_R = 1,
			PS3TEXTURE_GAMMA_G = 2,
			PS3TEXTURE_GAMMA_B = 4,
			PS3TEXTURE_GAMMA_A = 8,
			PS3TEXTUREGAMMA_FORCEENUMSIZEINT = 2147483647,
		}

	}

	// Declaration
	struct RenderTargetState {
		// states.h:216
		enum TargetID {
			TARGETID_COLOR0 = 0,
			TARGETID_COLOR1 = 1,
			TARGETID_COLOR2 = 2,
			TARGETID_COLOR3 = 3,
			TARGETID_DEPTHSTENCIL = 4,
			TARGETID_COLOR_ALL = 5,
			TARGETID_NUMTARGETS = 5,
			TARGETID_FORCEENUMSIZEINT = 2147483647,
		}

	}

	// Declaration
	struct BlendState {
		// states.h:270
		enum Input {
			INPUT_ZERO = 0,
			INPUT_ONE = 1,
			INPUT_SRCCOLOR = 768,
			INPUT_INVSRCCOLOR = 769,
			INPUT_SRCALPHA = 770,
			INPUT_INVSRCALPHA = 771,
			INPUT_DESTCOLOR = 774,
			INPUT_INVDESTCOLOR = 775,
			INPUT_DESTALPHA = 772,
			INPUT_INVDESTALPHA = 773,
			INPUT_SRCALPHASATURATE = 776,
			INPUT_CONSTANTCOLOR = 32769,
			INPUT_INVCONSTANTCOLOR = 32770,
			INPUT_CONSTANTALPHA = 32771,
			INPUT_INVCONSTANTALPHA = 32772,
		}

		// states.h:290
		enum Operation {
			OPERATION_ADD = 32774,
			OPERATION_SUBTRACT = 32778,
			OPERATION_REVSUBTRACT = 32779,
			OPERATION_MIN = 32775,
			OPERATION_MAX = 32776,
		}

		// states.h:299
		enum Function {
			FUNCTION_NEVER = 512,
			FUNCTION_LESS = 513,
			FUNCTION_EQUAL = 514,
			FUNCTION_LESSEQUAL = 515,
			FUNCTION_GREATER = 516,
			FUNCTION_NOTEQUAL = 517,
			FUNCTION_GREATEREQUAL = 518,
			FUNCTION_ALWAYS = 519,
			FUNCTION_FORCEENUMSIZEINT = 2147483647,
		}

	}

	// Declaration
	struct DepthStencilState {
		// states.h:366
		enum Function {
			FUNCTION_NEVER = 512,
			FUNCTION_LESS = 513,
			FUNCTION_EQUAL = 514,
			FUNCTION_LESSEQUAL = 515,
			FUNCTION_GREATER = 516,
			FUNCTION_NOTEQUAL = 517,
			FUNCTION_GREATEREQUAL = 518,
			FUNCTION_ALWAYS = 519,
			FUNCTION_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:380
		enum StencilOperation {
			STENCILOPERATION_NA = 0,
			STENCILOPERATION_KEEP = 7680,
			STENCILOPERATION_ZERO = 0,
			STENCILOPERATION_INVERT = 5386,
			STENCILOPERATION_REPLACE = 7681,
			STENCILOPERATION_INCR = 7682,
			STENCILOPERATION_INCRWRAP = 34055,
			STENCILOPERATION_DECR = 7683,
			STENCILOPERATION_DECRWRAP = 34056,
			STENCILOPERATION_FORCEENUMSIZEINT = 2147483647,
		}

	}

	// Declaration
	struct RasterizerState {
		// states.h:428
		enum FillMode {
			FILLMODE_POINT = 6912,
			FILLMODE_WIREFRAME = 6913,
			FILLMODE_SOLID = 6914,
			FILLMODE_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:437
		enum CullMode {
			CULLMODE_NONE = 0,
			CULLMODE_FRONT = 1028,
			CULLMODE_BACK = 1029,
			CULLMODE_FRONT_AND_BACK = 1032,
			CULLMODE_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:447
		enum FrontFace {
			FRONTFACE_CW = 2304,
			FRONTFACE_CCW = 2305,
			PS3FRONTFACE_CW = 2304,
			PS3FRONTFACE_CCW = 2305,
			FRONTFACE_FORCEENUMSIZEINT = 2147483647,
		}

		// states.h:460
		enum PS3ShadeMode {
			PS3SHADEMODE_FLAT = 7424,
			PS3SHADEMODE_SMOOTH = 7425,
			PS3SHADEMODE_FORCEENUMSIZEINT = 2147483647,
		}

	}

}

// states.h:44
struct renderengine::SamplerState {
	struct Parameters;

public:
	// states.h:140
	ResourceDescriptor GetResourceDescriptor(const SamplerState::Parameters &);

	// states.h:141
	SamplerState * Initialize(const Resource &, const SamplerState::Parameters &);

	// states.h:142
	void Destruct(SamplerState *);

	// states.h:143
	void Release();

	// states.h:144
	void GetParameters(SamplerState::Parameters &) const;

	// states.h:146
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:146
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:146
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:146
	void RegisterArenaReadCallbacks();

	// states.h:146
	void RegisterArenaWriteCallbacks();

	// states.h:146
	void EndianSwapUnfix();

	// states.h:146
	void EndianSwapFixup();

	// states.h:147
	int32_t AddRef();

	// states.h:147
	int32_t RemoveRef();

protected:
	// states.h:156
	void SamplerState();

	// states.h:157
	void SamplerState(const SamplerState &);

	// states.h:158
	void ~SamplerState();

}

// states.h:171
struct renderengine::TextureState : public SamplerState {
	struct Parameters;

public:
	// states.h:175
	ResourceDescriptor GetResourceDescriptor(const TextureState::Parameters &);

	// states.h:176
	TextureState * Initialize(const Resource &, const TextureState::Parameters &);

	// states.h:177
	void Destruct(SamplerState *);

	// states.h:178
	void Release();

	// states.h:179
	void GetParameters(TextureState::Parameters &) const;

	// states.h:185
	void NativeSetTexture(renderengine::Texture *);

	// states.h:186
	renderengine::Texture * NativeGetTexture() const;

protected:
	// states.h:190
	void TextureState();

	// states.h:191
	void TextureState(const TextureState &);

	// states.h:192
	void ~TextureState();

}

// states.h:210
struct renderengine::RenderTargetState {
	// states.h:214
	extern const uint32_t MaxNumColorTargets = 4;

	struct Parameters;

public:
	// states.h:239
	ResourceDescriptor GetResourceDescriptor(const RenderTargetState::Parameters &);

	// states.h:240
	RenderTargetState * Initialize(const Resource &, const RenderTargetState::Parameters &);

	// states.h:241
	void Destruct(RenderTargetState *);

	// states.h:242
	void Release();

	// states.h:243
	void GetParameters(RenderTargetState::Parameters &) const;

	// states.h:245
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:245
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:245
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:245
	void RegisterArenaReadCallbacks();

	// states.h:245
	void RegisterArenaWriteCallbacks();

	// states.h:245
	void EndianSwapUnfix();

	// states.h:245
	void EndianSwapFixup();

	// states.h:246
	int32_t AddRef();

	// states.h:246
	int32_t RemoveRef();

protected:
	// states.h:250
	void RenderTargetState();

	// states.h:251
	void RenderTargetState(const RenderTargetState &);

	// states.h:252
	void ~RenderTargetState();

	// states.h:255
	void PS3PrintCellGcmSurface(const CellGcmSurface *);

}

// states.h:267
struct renderengine::BlendState {
protected:
	// states.h:332
	extern const uint32_t COLOR_MASK_B = 1;

	// states.h:333
	extern const uint32_t COLOR_MASK_G = 256;

	// states.h:334
	extern const uint32_t COLOR_MASK_R = 65536;

	// states.h:335
	extern const uint32_t COLOR_MASK_A = 16777216;

	// states.h:337
	extern const uint32_t COLOR_MASK_MRT1_A = 16;

	// states.h:338
	extern const uint32_t COLOR_MASK_MRT1_R = 32;

	// states.h:339
	extern const uint32_t COLOR_MASK_MRT1_G = 64;

	// states.h:340
	extern const uint32_t COLOR_MASK_MRT1_B = 128;

	// states.h:342
	extern const uint32_t COLOR_MASK_MRT2_A = 256;

	// states.h:343
	extern const uint32_t COLOR_MASK_MRT2_R = 512;

	// states.h:344
	extern const uint32_t COLOR_MASK_MRT2_G = 1024;

	// states.h:345
	extern const uint32_t COLOR_MASK_MRT2_B = 2048;

	// states.h:347
	extern const uint32_t COLOR_MASK_MRT3_A = 4096;

	// states.h:348
	extern const uint32_t COLOR_MASK_MRT3_R = 8192;

	// states.h:349
	extern const uint32_t COLOR_MASK_MRT3_G = 16384;

	// states.h:350
	extern const uint32_t COLOR_MASK_MRT3_B = 32768;

	// Unknown accessibility
	struct Parameters;

public:
	// states.h:315
	ResourceDescriptor GetResourceDescriptor(const BlendState::Parameters &);

	// states.h:316
	BlendState * Initialize(const Resource &, const BlendState::Parameters &);

	// states.h:317
	void Destruct(BlendState *);

	// states.h:318
	void Release();

	// states.h:319
	void GetParameters(BlendState::Parameters &) const;

	// states.h:321
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:321
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:321
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:321
	void RegisterArenaReadCallbacks();

	// states.h:321
	void RegisterArenaWriteCallbacks();

	// states.h:321
	void EndianSwapUnfix();

	// states.h:321
	void EndianSwapFixup();

	// states.h:322
	int32_t AddRef();

	// states.h:322
	int32_t RemoveRef();

	// states.h:326
	void BlendState();

	// states.h:327
	void BlendState(const BlendState &);

	// states.h:328
	void ~BlendState();

}

// states.h:363
struct renderengine::DepthStencilState {
	struct Parameters;

public:
	// states.h:398
	ResourceDescriptor GetResourceDescriptor(const DepthStencilState::Parameters &);

	// states.h:399
	DepthStencilState * Initialize(const Resource &, const DepthStencilState::Parameters &);

	// states.h:400
	void Destruct(DepthStencilState *);

	// states.h:401
	void Release();

	// states.h:402
	void GetParameters(DepthStencilState::Parameters &) const;

	// states.h:404
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:404
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:404
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:404
	void RegisterArenaReadCallbacks();

	// states.h:404
	void RegisterArenaWriteCallbacks();

	// states.h:404
	void EndianSwapUnfix();

	// states.h:404
	void EndianSwapFixup();

	// states.h:405
	int32_t AddRef();

	// states.h:405
	int32_t RemoveRef();

protected:
	// states.h:411
	void DepthStencilState();

	// states.h:412
	void DepthStencilState(const DepthStencilState &);

	// states.h:413
	void ~DepthStencilState();

}

// states.h:424
struct renderengine::RasterizerState {
	struct Parameters;

public:
	// states.h:470
	ResourceDescriptor GetResourceDescriptor(const RasterizerState::Parameters &);

	// states.h:471
	RasterizerState * Initialize(const Resource &, const RasterizerState::Parameters &);

	// states.h:472
	void Destruct(RasterizerState *);

	// states.h:473
	void Release();

	// states.h:474
	void GetParameters(RasterizerState::Parameters &) const;

	// states.h:476
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:476
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:476
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:476
	void RegisterArenaReadCallbacks();

	// states.h:476
	void RegisterArenaWriteCallbacks();

	// states.h:476
	void EndianSwapUnfix();

	// states.h:476
	void EndianSwapFixup();

	// states.h:477
	int32_t AddRef();

	// states.h:477
	int32_t RemoveRef();

protected:
	// states.h:482
	void RasterizerState();

	// states.h:483
	void RasterizerState(const RasterizerState &);

	// states.h:484
	void ~RasterizerState();

}

// states.h:494
struct renderengine::VertexProgramState {
	struct Parameters;

public:
	// states.h:499
	ResourceDescriptor GetResourceDescriptor(const VertexProgramState::Parameters &);

	// states.h:500
	VertexProgramState * Initialize(const Resource &, const VertexProgramState::Parameters &);

	// states.h:501
	void Destruct(VertexProgramState *);

	// states.h:502
	void Release();

	// states.h:503
	void GetParameters(VertexProgramState::Parameters &) const;

	// states.h:505
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// states.h:505
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// states.h:505
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// states.h:505
	void RegisterArenaReadCallbacks();

	// states.h:505
	void RegisterArenaWriteCallbacks();

	// states.h:505
	void EndianSwapUnfix();

	// states.h:505
	void EndianSwapFixup();

	// states.h:506
	int32_t AddRef();

	// states.h:506
	int32_t RemoveRef();

protected:
	// states.h:511
	void VertexProgramState();

	// states.h:512
	void VertexProgramState(const VertexProgramState &);

	// states.h:513
	void ~VertexProgramState();

}

// states.h:214
extern const uint32_t MaxNumColorTargets = 4;

// states.h:171
struct renderengine::TextureState : public SamplerState {
	struct Parameters;

public:
	// states.h:175
	ResourceDescriptor GetResourceDescriptor(const TextureState::Parameters &);

	// states.h:176
	renderengine::TextureState * Initialize(const Resource &, const TextureState::Parameters &);

	// states.h:177
	void Destruct(SamplerState *);

	// states.h:178
	void Release();

	// states.h:179
	void GetParameters(TextureState::Parameters &) const;

	// states.h:185
	void NativeSetTexture(renderengine::Texture *);

	// states.h:186
	renderengine::Texture * NativeGetTexture() const;

protected:
	// states.h:190
	void TextureState();

	// states.h:191
	void TextureState(const TextureState &);

	// states.h:192
	void ~TextureState();

}

