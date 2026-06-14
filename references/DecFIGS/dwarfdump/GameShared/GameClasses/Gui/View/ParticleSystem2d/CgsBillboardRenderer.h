// CgsBillboardRenderer.h:69
extern const int32_t KI_MAX_ANIMFRAMES = 256;

// CgsBillboardRenderer.h:133
extern float32_t[] maUVDefault;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct BillboardRenderer {
		// CgsBillboardRenderer.h:111
		enum eAnimMode {
			E_BLANK = 0,
			E_REPEAT = 1,
			E_CLAMP = 2,
			E_SHUTTLE = 3,
		}

	}

}

// CgsBillboardRenderer.h:39
struct CgsGui::BillboardInfo {
	// CgsBillboardRenderer.h:41
	Vector2 mv2Pos;

	// CgsBillboardRenderer.h:42
	float32_t mfRotation;

	// CgsBillboardRenderer.h:43
	Vector2 mv2Size;

	// CgsBillboardRenderer.h:44
	RGBA mcDiffuse;

	// CgsBillboardRenderer.h:45
	int32_t miTextureFrame;

public:
	// CgsBillboardRenderer.h:40
	void Construct();

}

// CgsBillboardRenderer.h:67
struct CgsGui::BillboardRenderer {
	// CgsBillboardRenderer.h:69
	extern const int32_t KI_MAX_ANIMFRAMES = 256;

private:
	// CgsBillboardRenderer.h:128
	int32_t miNumFrames;

	// CgsBillboardRenderer.h:129
	CgsGui::BillboardRenderer::eAnimMode meAnimMode;

	// CgsBillboardRenderer.h:131
	const float32_t * mpUVTable;

	// CgsBillboardRenderer.h:132
	float32_t[2048] mafUVTab;

	// CgsBillboardRenderer.h:133
	extern float32_t[] maUVDefault;

	// CgsBillboardRenderer.h:135
	int32_t miMaxBillboards;

	// CgsBillboardRenderer.h:136
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * maVertexList;

	// CgsBillboardRenderer.h:137
	int32_t miVertexCount;

	// CgsBillboardRenderer.h:139
	rw::IResourceAllocator * mpAllocator;

	// CgsBillboardRenderer.h:142
	Resource mTextureStateResource;

	// CgsBillboardRenderer.h:143
	const TextureState * mpTextureState;

	// CgsBillboardRenderer.h:145
	Resource mBlendStateResource;

	// CgsBillboardRenderer.h:146
	const BlendState * mpBlendState;

public:
	// CgsBillboardRenderer.h:87
	void Construct(rw::IResourceAllocator *, int32_t, const TextureState *, const BlendState *, int32_t, int32_t, int32_t);

	// CgsBillboardRenderer.h:90
	void Destruct();

	// CgsBillboardRenderer.h:93
	void Render(CgsGraphics::Im2dRenderBuffer *, const BillboardInfo *, int32_t) const;

	// CgsBillboardRenderer.h:98
	int GetNumFrames() const;

	// CgsBillboardRenderer.h:114
	void SetAnimMode(CgsGui::BillboardRenderer::eAnimMode);

	// CgsBillboardRenderer.h:118
	void SetTextureState(const TextureState *);

	// CgsBillboardRenderer.h:122
	void SetBlendState(const BlendState *);

private:
	// CgsBillboardRenderer.h:126
	void SetUVTable(int32_t, int32_t, int32_t);

}

// CgsBillboardRenderer.h:67
struct CgsGui::BillboardRenderer {
	// CgsBillboardRenderer.h:69
	extern const int32_t KI_MAX_ANIMFRAMES = 256;

private:
	// CgsBillboardRenderer.h:128
	int32_t miNumFrames;

	// CgsBillboardRenderer.h:129
	CgsGui::BillboardRenderer::eAnimMode meAnimMode;

	// CgsBillboardRenderer.h:131
	const float32_t * mpUVTable;

	// CgsBillboardRenderer.h:132
	float32_t[2048] mafUVTab;

	// CgsBillboardRenderer.h:133
	extern float32_t[] maUVDefault;

	// CgsBillboardRenderer.h:135
	int32_t miMaxBillboards;

	// CgsBillboardRenderer.h:136
	GuiGeometryMesh::Im2dVertex * maVertexList;

	// CgsBillboardRenderer.h:137
	int32_t miVertexCount;

	// CgsBillboardRenderer.h:139
	rw::IResourceAllocator * mpAllocator;

	// CgsBillboardRenderer.h:142
	Resource mTextureStateResource;

	// CgsBillboardRenderer.h:143
	const TextureState * mpTextureState;

	// CgsBillboardRenderer.h:145
	Resource mBlendStateResource;

	// CgsBillboardRenderer.h:146
	const BlendState * mpBlendState;

public:
	// CgsBillboardRenderer.h:87
	void Construct(rw::IResourceAllocator *, int32_t, const TextureState *, const BlendState *, int32_t, int32_t, int32_t);

	// CgsBillboardRenderer.h:90
	void Destruct();

	// CgsBillboardRenderer.h:93
	// Declaration
	void Render(CgsGraphics::Im2dRenderBuffer *, const BillboardInfo *, int32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBillboardRenderer.cpp:165
		using namespace rw::math;

	}

	// CgsBillboardRenderer.h:98
	int GetNumFrames() const;

	// CgsBillboardRenderer.h:114
	void SetAnimMode(CgsGui::BillboardRenderer::eAnimMode);

	// CgsBillboardRenderer.h:118
	void SetTextureState(const TextureState *);

	// CgsBillboardRenderer.h:122
	void SetBlendState(const BlendState *);

private:
	// CgsBillboardRenderer.h:126
	void SetUVTable(int32_t, int32_t, int32_t);

}

