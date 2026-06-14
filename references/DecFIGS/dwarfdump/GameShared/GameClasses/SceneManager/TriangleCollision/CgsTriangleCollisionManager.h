// CgsTriangleCollisionManager.h:59
struct CgsSceneManager::TriangleCollisionManager {
private:
	// CgsTriangleCollisionManager.h:101
	PolygonSoupListSpatialMap mPolySoupListSpacialMap;

	// CgsTriangleCollisionManager.h:102
	ResourceHandle * mpaPolySoupListHandles;

	// CgsTriangleCollisionManager.h:103
	int32_t miMaxNumSoupLists;

	// CgsTriangleCollisionManager.h:104
	int32_t miNumSoupListsAdded;

	// CgsTriangleCollisionManager.h:105
	LinearMalloc mSpacialAllocator;

	// CgsTriangleCollisionManager.h:108
	CgsSceneManager::TriangleCollisionDebugComponent mDebugComponent;

public:
	// CgsTriangleCollisionManager.h:63
	void Construct();

	// CgsTriangleCollisionManager.h:69
	bool Prepare(LinearMalloc *, int32_t);

	// CgsTriangleCollisionManager.h:72
	void Destruct();

	// CgsTriangleCollisionManager.h:75
	bool Release();

	// CgsTriangleCollisionManager.h:80
	void ProcessAddPolySoupListEvents(const InSceneUpdateInterface::InAddPolySoupListQueue &);

	// CgsTriangleCollisionManager.h:85
	void ProcessClearPolySoupListEvents(const InSceneUpdateInterface::InClearPolySoupListsQueue &);

	// CgsTriangleCollisionManager.h:90
	const CgsGeometric::PolygonSoupList * GetPolySoupList(int32_t) const;

	// CgsTriangleCollisionManager.h:93
	const CgsGeometric::PolygonSoupListSpatialMap * GetPolySoupListSpacialMap() const;

	// CgsTriangleCollisionManager.h:96
	int32_t GetNumPolySoupLists() const;

}

