// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

	struct Sampler;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dTransform;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct MaterialState;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct ShaderConstantHashTable;

	struct Im3dRenderBufferUntex;

	struct ShaderTechnique;

	struct OcclusionQueryList;

	struct Instance;

	struct InstanceList;

}

// CgsTextureScopeTable.h:69
struct CgsGraphics::Sampler {
	// CgsTextureScopeTable.h:70
	const char * purpose;

	// CgsTextureScopeTable.h:71
	uint32_t id;

	// CgsTextureScopeTable.h:72
	int16_t channel;

	// CgsTextureScopeTable.h:73
	int16_t scope;

	// CgsTextureScopeTable.h:74
	CgsGraphics::TexturePurpose ePurpose;

	// CgsTextureScopeTable.h:75
	TextureState * state;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// CgsTextureScopeTable.h:29
	enum TextureScope {
		E_TEXTURE_SCOPE_INVALID = -1,
		E_TEXTURE_SCOPE_MATERIAL = 0,
		E_TEXTURE_SCOPE_OBJECT = 1,
		E_TEXTURE_SCOPE_GLOBAL = 2,
		E_TEXTURE_SCOPE_PERSISTENT = 3,
		E_MAX_TEXTURE_SCOPES = 4,
	}

	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

// CgsTextureScopeTable.h:118
struct CgsGraphics::TextureScopeTableElement {
private:
	// CgsTextureScopeTable.h:207
	const char * mpName;

	// CgsTextureScopeTable.h:208
	CgsGraphics::TexturePurpose mePurpose;

	// CgsTextureScopeTable.h:209
	CgsGraphics::TextureScope meScope;

	// CgsTextureScopeTable.h:210
	const Texture * mpTexture;

	// CgsTextureScopeTable.h:211
	const TextureState * mpTextureState;

	// CgsTextureScopeTable.h:212
	const TextureState *[2] mpMostRecentCopyInDispatchBin;

public:
	// CgsTextureScopeTable.h:123
	void SetPurposeName(const char *);

	// CgsTextureScopeTable.h:130
	void SetPurpose(CgsGraphics::TexturePurpose);

	// CgsTextureScopeTable.h:137
	void SetScope(CgsGraphics::TextureScope);

	// CgsTextureScopeTable.h:143
	void SetTexture(const Texture *);

	// CgsTextureScopeTable.h:153
	const char * GetPurposeName() const;

	// CgsTextureScopeTable.h:159
	CgsGraphics::TexturePurpose GetPurpose() const;

	// CgsTextureScopeTable.h:165
	CgsGraphics::TextureScope GetScope() const;

	// CgsTextureScopeTable.h:171
	const Texture * GetTexture() const;

	// CgsTextureScopeTable.h:177
	void SetTextureState(const TextureState *);

	// CgsTextureScopeTable.h:187
	const TextureState * GetTextureState() const;

	// CgsTextureScopeTable.h:195
	void SetDispatchBinPointer(const TextureState *, bool);

	// CgsTextureScopeTable.h:201
	const TextureState * GetDispatchBinPointer(bool);

}

// CgsTextureScopeTable.h:216
struct CgsGraphics::TextureScopeTable {
private:
	// CgsTextureScopeTable.h:343
	TextureScopeTableElement[7] mTextureScopeElements;

	// Unknown accessibility
	// CgsTextureScopeTable.h:346
	extern TextureScopeTable sTextureScopeTable;

public:
	// CgsTextureScopeTable.h:219
	void BeginFrame();

	// CgsTextureScopeTable.h:228
	void ClearDispatchThreadPointers();

	// CgsTextureScopeTable.h:240
	void AddTexturePurpose(CgsGraphics::TexturePurpose, const char *, CgsGraphics::TextureScope);

	// CgsTextureScopeTable.h:258
	void SetTexturePurposeData(CgsGraphics::TexturePurpose, const Texture *);

	// CgsTextureScopeTable.h:266
	TextureScopeTableElement & GetTextureScopeTableElement(CgsGraphics::TexturePurpose);

	// CgsTextureScopeTable.h:275
	CgsGraphics::TexturePurpose GetTexturePurpose(const char *) const;

	// CgsTextureScopeTable.h:292
	const char * GetTexturePurposeName(CgsGraphics::TexturePurpose) const;

	// CgsTextureScopeTable.h:301
	const Texture * GetTexture(CgsGraphics::TexturePurpose) const;

	// CgsTextureScopeTable.h:311
	void SetTexturePurposeTextureState(CgsGraphics::TexturePurpose, const TextureState *);

	// CgsTextureScopeTable.h:323
	const TextureState * GetTextureState(CgsGraphics::TexturePurpose) const;

private:
	// CgsTextureScopeTable.h:331
	void TextureScopeTable();

}

// CgsTextureScopeTable.h:346
extern TextureScopeTable sTextureScopeTable;

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsTextureScopeTable.h:29
	enum TextureScope {
		E_TEXTURE_SCOPE_INVALID = -1,
		E_TEXTURE_SCOPE_MATERIAL = 0,
		E_TEXTURE_SCOPE_OBJECT = 1,
		E_TEXTURE_SCOPE_GLOBAL = 2,
		E_TEXTURE_SCOPE_PERSISTENT = 3,
		E_MAX_TEXTURE_SCOPES = 4,
	}

	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

	struct Sampler;

	struct TextureScopeTableElement;

	struct TextureScopeTable;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct PositionOnlyVertex;

	struct Im3d;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dTransform;

	struct Im2d;

	struct Im2dUntex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct MaterialState;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DrawRenderable;

	struct DrawRenderableMesh;

	struct DispatchObjectContext;

	struct DrawRenderableDispatchThreadInfo;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct DispatchObjectContext_JobState;

	struct ShaderConstantHashTable;

	struct Im3dRenderBufferUntex;

	struct ShaderTechnique;

	struct OcclusionQueryList;

	struct Im3dBase<CgsGraphics::BasicColouredVertex>;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dTransform;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dTransform;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsTextureScopeTable.h:29
	enum TextureScope {
		E_TEXTURE_SCOPE_INVALID = -1,
		E_TEXTURE_SCOPE_MATERIAL = 0,
		E_TEXTURE_SCOPE_OBJECT = 1,
		E_TEXTURE_SCOPE_GLOBAL = 2,
		E_TEXTURE_SCOPE_PERSISTENT = 3,
		E_MAX_TEXTURE_SCOPES = 4,
	}

	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

// CgsTextureScopeTable.h:110
struct CgsGraphics::ShaderSampler {
	// CgsTextureScopeTable.h:111
	char * mpacName;

	// CgsTextureScopeTable.h:112
	int16_t miChannel;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// CgsTextureScopeTable.h:40
	enum TexturePurpose {
		E_TEXTURE_PURPOSE_INVALID = -1,
		E_TEXTURE_PURPOSE_NONE = 0,
		E_TEXTURE_PURPOSE_AMBIENT_OCCLUSION_MAP = 1,
		E_TEXTURE_PURPOSE_SHADOW_MAP_0 = 2,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE_PERSISTENT = 3,
		E_TEXTURE_PURPOSE_ENVIRONMENT_MAP = 4,
		E_TEXTURE_PURPOSE_GLASS_FRACTURE = 5,
		E_TEXTURE_PURPOSE_SHADOW_MAP_ANISO = 6,
		E_MAX_TEXTURE_PURPOSES = 7,
	}

}

