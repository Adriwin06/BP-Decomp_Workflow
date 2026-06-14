// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// CgsCore.h:151
		namespace core {
			// CgsCore.h:152
			using namespace renderengine;

		}

	}

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

}

// CgsCore.h:160
using renderengine;

// CgsCore.h:161
using rw::math;

// CgsCore.h:162
using rw::math::vpu;

// CgsCore.h:163
using rw::math::fpu;

// CgsCore.h:164
using rw::math::vpl;

// CgsCore.h:165
using rw::core::stdc;

// CgsCore.h:98
namespace CgsCore {
	// CgsCore.h:99
	const int32_t KI_PS2EECACHELINESIZE = 64;

	// CgsCore.h:100
	const int32_t KI_X86CACHELINESIZE = 32;

	// CgsCore.h:101
	const int32_t KI_PPCCACHELINESIZE = 128;

	// CgsCore.h:102
	const int32_t KI_SPUCACHELINESIZE = 128;

	// CgsCore.h:105
	const int32_t KI_DEBUGMAXVARGSSTRINGLENGTH = 8192;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// CgsCore.h:249
		extern CgsDev::StrStreamBase * gpDebugPrint;

	}

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

}

// CgsCore.h:98
namespace CgsCore {
	struct Hash64;

	// CgsCore.h:99
	const int32_t KI_PS2EECACHELINESIZE = 64;

	// CgsCore.h:100
	const int32_t KI_X86CACHELINESIZE = 32;

	// CgsCore.h:101
	const int32_t KI_PPCCACHELINESIZE = 128;

	// CgsCore.h:102
	const int32_t KI_SPUCACHELINESIZE = 128;

	// CgsCore.h:105
	const int32_t KI_DEBUGMAXVARGSSTRINGLENGTH = 8192;

}

// CgsCore.h:249
extern CgsDev::StrStreamBase * gpDebugPrint;

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		struct SamplerState;

		struct TextureState;

	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexIterator<renderengine::VertexTypeFloat3>;

	struct VertexIterator<renderengine::VertexTypeFloat4>;

	struct VertexIterator<renderengine::VertexTypePS3Color>;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

	struct CoronaRenderer;

	struct VertexIterator3<renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color,renderengine::VertexTypeFloat4>;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexIterator<renderengine::VertexTypeFloat2>;

	struct VertexIterator<renderengine::VertexTypePS3Color>;

	struct Texture2D;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		struct SamplerState;

		struct TextureState;

	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexIterator<renderengine::VertexTypeFloat2>;

	struct VertexIterator<renderengine::VertexTypeFloat3>;

	struct VertexIterator<renderengine::VertexTypeFloat4>;

	struct VertexIterator<renderengine::VertexTypePS3Color>;

	struct Texture2D;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

	struct VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color>;

	struct VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4>;

	struct VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4>;

	struct VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2>;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct Texture2D;

	struct ProgramVariableHandle;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct Texture2D;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct Texture2D;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		struct SamplerState;

		struct TextureState;

	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexIterator<renderengine::VertexTypeFloat2>;

	struct VertexIterator<renderengine::VertexTypeFloat3>;

	struct VertexIterator<renderengine::VertexTypePS3Color>;

	struct Texture2D;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

	struct Corona;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		struct SamplerState;

		struct TextureState;

		struct BlendState;

		struct DepthStencilState;

		struct RasterizerState;

	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct TextureState;

	struct VertexProgramState;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexIterator<renderengine::VertexTypeFloat2>;

	struct VertexIterator<renderengine::VertexTypeFloat3>;

	struct VertexIterator<renderengine::VertexTypePS3Color>;

	struct StrideVertexIterator;

	struct Texture2D;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct BoolShaderStateIterator;

	struct StateBuffer;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		struct SamplerState;

		struct TextureState;

		struct DepthStencilState;

		struct RasterizerState;

	}

	// CgsCore.h:180
	using ps3;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct TextureState;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct BoolShaderStateIterator;

}

// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
	}

	// CgsCore.h:180
	using ps3;

	struct TextureState;

	struct RGBA8;

	struct RGBA32;

	struct ProgramVariableHandle;

	struct VertexIteratorBaseClass;

	struct VertexProgramState;

	struct DrawParameters;

	struct DrawIndexedParameters;

	struct DrawInstancedParameters;

	struct DrawIndexedInstancedParameters;

	struct ClearColorParameters;

	struct ViewportParameters;

	struct ScissorRectParameters;

	struct ClearDepthStencilParameters;

	struct FloatShaderStateIterator;

	struct BoolShaderStateIterator;

}

