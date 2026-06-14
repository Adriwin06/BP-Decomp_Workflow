// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

// CgsOcclusionCullManager.h:47
struct CgsGraphics::OcclusionQueryList {
	// CgsOcclusionCullManager.h:62
	Matrix44 * mpBoxToClipMatrices;

	// CgsOcclusionCullManager.h:63
	uint32_t * mpuTrivialAcceptBits;

	// CgsOcclusionCullManager.h:64
	uint32_t muSize;

	// CgsOcclusionCullManager.h:65
	uint32_t muNumQueries;

public:
	// CgsOcclusionCullManager.h:49
	void UnsetTrivialAcceptBit(uint32_t);

	// CgsOcclusionCullManager.h:53
	void SetTrivialAcceptBit(uint32_t);

	// CgsOcclusionCullManager.h:57
	bool GetTrivialAcceptBit(uint32_t);

}

// CgsOcclusionCullManager.h:72
struct CgsGraphics::OcclusionCullManager {
private:
	// CgsOcclusionCullManager.h:76
	extern const int32_t KI_BASE_QUERY_INDEX = 512;

	// CgsOcclusionCullManager.h:77
	extern const int32_t KI_MAX_QUERY_INDEX = 2047;

	// CgsOcclusionCullManager.h:84
	extern const int32_t KI_TRIVIAL_ACCEPT_INDEX = 4294967295;

	// Unknown accessibility
	// CgsOcclusionCullManager.h:87
	extern const int32_t KI_MAX_NUM_QUERIES = 1536;

	// CgsOcclusionCullManager.h:196
	Matrix44 mViewProjectionMatrix;

	// CgsOcclusionCullManager.h:197
	Matrix44 mAlwaysFailMatrix;

	// CgsOcclusionCullManager.h:198
	Matrix44 mAlwaysPassMatrix;

	// CgsOcclusionCullManager.h:199
	Vector4 mNearClipOffset;

	// CgsOcclusionCullManager.h:201
	Im3dUntexVertex[8] maCubeVertices;

	// Unknown accessibility
	// CgsIm3d.h:44
	typedef PositionOnlyVertex Im3dZOnlyVertex;

	// CgsOcclusionCullManager.h:202
	OcclusionCullManager::Im3dZOnlyVertex[8] maCubeVerticesZOnly;

	// CgsOcclusionCullManager.h:203
	uint16_t[24] mau16CubeIndices;

	// CgsOcclusionCullManager.h:205
	int32_t miOccludeeIndex;

	// CgsOcclusionCullManager.h:206
	int32_t miNextQueryIndex;

	// CgsOcclusionCullManager.h:207
	CgsGraphics::Im3dUntex * mpOccludeeIm3d;

	// CgsOcclusionCullManager.h:208
	CgsGraphics::Im3dZOnly * mpOccludeeIm3dZOnly;

	// CgsOcclusionCullManager.h:209
	CgsGraphics::OcclusionCullManager::OcclusionMode meOcclusionMode;

	// CgsOcclusionCullManager.h:211
	renderengine::VertexBuffer * mpVertexBuffer;

	// CgsOcclusionCullManager.h:212
	VertexDescriptor * mpVertexDescriptor;

	// CgsOcclusionCullManager.h:213
	IndexBuffer * mpIndexBuffer;

	// CgsOcclusionCullManager.h:214
	DrawIndexedParameters mDrawParameters;

	// CgsOcclusionCullManager.h:216
	int16_t[1536] mai16QueryIndex;

	// CgsOcclusionCullManager.h:218
	bool mbRenderingMesh;

	// CgsOcclusionCullManager.h:219
	bool mbOcclusionEnabled;

	// CgsOcclusionCullManager.h:220
	bool mbShowOccludeeBBs;

	// CgsOcclusionCullManager.h:221
	bool mbOccludeesDoubleSided;

	// CgsOcclusionCullManager.h:222
	bool mbOcclusionCheapShader;

	// CgsOcclusionCullManager.h:223
	bool mbDisplayStats;

	// CgsOcclusionCullManager.h:224
	bool mbDetectNearClipIntersections;

	// CgsOcclusionCullManager.h:225
	bool mbImmediateMode;

	// CgsOcclusionCullManager.h:227
	bool mbConditionalRendering;

	// CgsOcclusionCullManager.h:229
	OcclusionQueryList * mpQueryList;

public:
	// CgsOcclusionCullManager.h:104
	void Construct(CgsGraphics::Im3dUntex *, CgsGraphics::Im3dZOnly *, rw::IResourceAllocator *, uint32_t);

	// CgsOcclusionCullManager.h:108
	void BeginQueries();

	// CgsOcclusionCullManager.h:112
	void EndQueries();

	// CgsOcclusionCullManager.h:116
	void BeginConditionalRender();

	// CgsOcclusionCullManager.h:120
	void EndConditionalRender();

	// CgsOcclusionCullManager.h:126
	void RenderOccludeeBoundingBox(const rw::math::vpu::Matrix44 *, Matrix44);

	// CgsOcclusionCullManager.h:130
	void TrivialAcceptOccludeeBoundingBox();

	// CgsOcclusionCullManager.h:134
	void BeginMeshConditionalRender();

	// CgsOcclusionCullManager.h:138
	void EndMeshConditionalRender();

	// CgsOcclusionCullManager.h:142
	int32_t GetOccludeeIndex() const;

	// CgsOcclusionCullManager.h:146
	CgsGraphics::OcclusionCullManager::OcclusionMode GetOcclusionMode() const;

	// CgsOcclusionCullManager.h:150
	bool IsOcclusionEnabled() const;

	// CgsOcclusionCullManager.h:154
	uint32_t GetMaxNumQueries() const;

	// CgsOcclusionCullManager.h:160
	void DebugRenderOccludeeBoundingBox(Matrix44, Matrix44);

	// CgsOcclusionCullManager.h:164
	void SetOccludeeNearClipOffset(float32_t);

	// CgsOcclusionCullManager.h:170
	void StoreOccludeeBoundingBox(const rw::math::vpu::Matrix44 *, Matrix44);

	// CgsOcclusionCullManager.h:173
	void StoreOccludeeBoundingBox_TrivialAccept();

	// CgsOcclusionCullManager.h:178
	void RenderQueryList(uint32_t, uint32_t);

	// CgsOcclusionCullManager.h:181
	void BeginGenerateQueryList();

	// CgsOcclusionCullManager.h:184
	void EndGenerateQueryList();

	// CgsOcclusionCullManager.h:187
	OcclusionQueryList * GetQueryList();

	// CgsOcclusionCullManager.h:190
	const rw::math::vpu::Matrix44 & GetViewProjectionMatrix() const;

	// CgsOcclusionCullManager.h:193
	void SetViewProjectionMatrix(Matrix44);

}

// CgsOcclusionCullManager.h:76
extern const int32_t KI_BASE_QUERY_INDEX = 512;

// CgsOcclusionCullManager.h:77
extern const int32_t KI_MAX_QUERY_INDEX = 2047;

// CgsOcclusionCullManager.h:84
extern const int32_t KI_TRIVIAL_ACCEPT_INDEX = 4294967295;

// CgsOcclusionCullManager.h:87
extern const int32_t KI_MAX_NUM_QUERIES = 1536;

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct OcclusionCullManager {
		// CgsOcclusionCullManager.h:89
		enum OcclusionMode {
			OCCLUSIONMODE_NONE = 0,
			OCCLUSIONMODE_QUERY = 1,
			OCCLUSIONMODE_RENDER = 2,
			OCCLUSIONMODE_GENERATEQUERYLIST = 3,
		}

	}

	// CgsOcclusionCullManager.h:40
	const int32_t KU32_NUM_VERTICES_IN_BBOX = 8;

}

