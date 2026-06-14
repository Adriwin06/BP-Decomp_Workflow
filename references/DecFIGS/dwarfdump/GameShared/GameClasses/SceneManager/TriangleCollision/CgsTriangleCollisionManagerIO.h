// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCollisionManagerIO.h:28
	namespace TriangleCollisionManagerIO {
		struct InEventAddPolySoupList;

		struct InEventClearPolySoupLists;

	}

}

// CgsTriangleCollisionManagerIO.h:52
struct CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList : public Event {
	// CgsTriangleCollisionManagerIO.h:54
	ResourceHandle mPolySoupListHandle;

	// CgsTriangleCollisionManagerIO.h:55
	int32_t miZoneNumber;

	// CgsTriangleCollisionManagerIO.h:56
	bool mbRebuildSpacialPartitioning;

}

// CgsTriangleCollisionManagerIO.h:68
struct CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists : public Event {
	// CgsTriangleCollisionManagerIO.h:70
	uint32_t miDummy;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCollisionManagerIO.h:28
	namespace TriangleCollisionManagerIO {
		struct InEventAddPolySoupList;

		struct InEventClearPolySoupLists;

	}

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCollisionManagerIO.h:28
	namespace TriangleCollisionManagerIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCollisionManagerIO.h:28
	namespace TriangleCollisionManagerIO {
	}

}

