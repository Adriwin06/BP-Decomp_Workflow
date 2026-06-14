// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsCachedTriangleList.h:35
	const int32_t AABB_MAX_KDTREE_RESULTS = 5000;

}

// CgsCachedTriangleList.h:65
struct CgsSceneManager::CachedTriangleList {
private:
	// CgsCachedTriangleList.h:129
	extern KdTreeBatchBBoxQueryResult[5000] saKdTreeResults;

	// CgsCachedTriangleList.h:132
	Triangle4 * mpaTriangleCache;

public:
	// CgsCachedTriangleList.h:69
	void Construct();

	// CgsCachedTriangleList.h:74
	bool Prepare(rw::IResourceAllocator *, int32_t);

	// CgsCachedTriangleList.h:77
	bool Release();

	// CgsCachedTriangleList.h:80
	void Destruct();

	// CgsCachedTriangleList.h:91
	uint32_t AddCachedTriangles(uint32_t, uint32_t, Vector3, float32_t, const ClusteredMesh *, Matrix44Affine);

	// CgsCachedTriangleList.h:101
	void Swizzle3x4(Vector3, Vector3, Vector3, Vector3, Vector4 &, Vector4 &, Vector4 &);

	// CgsCachedTriangleList.h:109
	void GetOverlappingTrianglesNew(const ClusteredMesh *, AABBox &, Triangle4 *, uint32_t, uint32_t &);

	// CgsCachedTriangleList.h:117
	const Triangle4 * GetCachedTriangle(int32_t) const;

	// CgsCachedTriangleList.h:121
	Triangle4 * GetCachedTriangle(int32_t);

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCachedTriangleList.h:35
	const int32_t AABB_MAX_KDTREE_RESULTS = 5000;

}

// CgsCachedTriangleList.h:65
struct CgsSceneManager::CachedTriangleList {
private:
	// CgsCachedTriangleList.h:129
	extern KdTreeBatchBBoxQueryResult[5000] saKdTreeResults;

	// CgsCachedTriangleList.h:132
	Triangle4 * mpaTriangleCache;

public:
	// CgsCachedTriangleList.h:69
	void Construct();

	// CgsCachedTriangleList.h:74
	// Declaration
	bool Prepare(rw::IResourceAllocator *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCachedTriangleList.cpp:91
		using namespace CgsDev::Message;

	}

	// CgsCachedTriangleList.h:77
	bool Release();

	// CgsCachedTriangleList.h:80
	void Destruct();

	// CgsCachedTriangleList.h:91
	uint32_t AddCachedTriangles(uint32_t, uint32_t, Vector3, float32_t, const ClusteredMesh *, Matrix44Affine);

	// CgsCachedTriangleList.h:101
	void Swizzle3x4(Vector3, Vector3, Vector3, Vector3, Vector4 &, Vector4 &, Vector4 &);

	// CgsCachedTriangleList.h:109
	void GetOverlappingTrianglesNew(const ClusteredMesh *, AABBox &, Triangle4 *, uint32_t, uint32_t &);

	// CgsCachedTriangleList.h:117
	const Triangle4 * GetCachedTriangle(int32_t) const;

	// CgsCachedTriangleList.h:121
	Triangle4 * GetCachedTriangle(int32_t);

}

