// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCollisionManager.cpp:29
	const int32_t KI_MAX_NUM_ZONES = 1024;

}

// CgsTriangleCollisionManager.cpp:150
void CgsSceneManager::TriangleCollisionManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCollisionManager.cpp:133
void CgsSceneManager::TriangleCollisionManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCollisionManager.cpp:82
void CgsSceneManager::TriangleCollisionManager::Prepare(LinearMalloc *  lpAllocator, int32_t  liMaxNumPolySoupLists) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCollisionManager.cpp:97
		int32_t liZone;

		// CgsTriangleCollisionManager.cpp:112
		uint32_t luFreeMemory;

	}
	MallocArray<CgsResource::ResourceHandle>(/* parameters */);
}

// CgsTriangleCollisionManager.cpp:219
void CgsSceneManager::TriangleCollisionManager::ProcessClearPolySoupListEvents(const const InSceneUpdateInterface::InClearPolySoupListsQueue &  lAddClearPolySoupListQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCollisionManager.cpp:54
void CgsSceneManager::TriangleCollisionManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCollisionManager.cpp:169
void CgsSceneManager::TriangleCollisionManager::ProcessAddPolySoupListEvents(const const InSceneUpdateInterface::InAddPolySoupListQueue &  lAddPolySoupListQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCollisionManager.cpp:173
		int32_t liEventIndex;

		// CgsTriangleCollisionManager.cpp:175
		bool lbNeedToRebuild;

		{
			// CgsTriangleCollisionManager.cpp:180
			const const InEventAddPolySoupList & lEvent;

			CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetEvent(/* parameters */);
			CgsResource::ResourceHandle::operator==(/* parameters */);
		}
	}
}

