// CgsMaterialState.h:40
struct CgsGraphics::MaterialState {
	// CgsMaterialState.h:43
	BlendState * mpBlendState;

	// CgsMaterialState.h:44
	DepthStencilState * mpDepthStencilState;

	// CgsMaterialState.h:45
	RasterizerState * mpRasterizerState;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	struct MaterialState;

	struct Sampler;

	struct ShaderSampler;

	struct TextureScopeTableElement;

	struct TextureScopeTable;

	struct DispatchCommand;

	struct DispatchFrame;

	struct CallbackFn;

	struct DispatchBin;

	struct DrawRenderable;

	struct DrawRenderableMesh;

	struct DispatchObjectContext;

	struct DrawRenderableDispatchThreadInfo;

	struct DrawRenderableMeshZOnly;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct DispatchObjectContext_JobState;

	struct ShaderConstantHashTable;

	struct MaterialAssembly;

	struct ShaderTechnique;

	struct PackedOobb;

	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateDepthStencilStencilRef;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetStateRenderTarget;

	struct ImCommandSetStateTexture;

	struct ImCommandSetStateSampler;

	struct ImCommandSetViewport;

	struct ImCommandSetScissor;

	struct ImCommandSetClear;

	struct ImCommandSetTexture;

	struct ImCommandSetShaderProgram;

	struct BasicColouredTexturedVertex;

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct ImCommandSetTransform;

	struct ImCommandSetTransformBasic;

	struct ImCommandPushBoostBarColours;

	struct ImCommandBatchTransformTextureBlendRender;

	struct ImCommandPushMaskTextureState<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct Instance;

	struct InstanceList;

	struct ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct OcclusionQueryList;

	struct EacChunkDef;

	struct ChunkBuffer;

	struct JpegEncodeInputData;

	struct ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex>;

	struct MovieSoundRenderer;

	struct MovieVideoRenderableOperations;

	struct Im3dBase<CgsGraphics::BasicColouredTexturedVertex>;

	struct ImRenderer<CgsGraphics::BasicColouredTexturedVertex>;

	struct Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct BufferedDispatchFrame;

	struct InstanceListResourceType;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	struct MaterialState;

	struct Sampler;

	struct ShaderSampler;

	struct TextureScopeTableElement;

	struct TextureScopeTable;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct OcclusionCullManager;

	struct DispatchObjectContext;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct DispatchObjectContext_JobState;

	struct ShaderConstantHashTable;

	struct MaterialAssembly;

	struct ShaderTechnique;

	struct PackedOobb;

}

