// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManager.cpp:39
	extern char * spcLogBuffer;

	// CgsTriangleCacheManager.cpp:40
	extern int32_t siLogBufferLength;

}

// CgsTriangleCacheManager.cpp:198
void CgsSceneManager::TriangleCacheManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCacheManager.cpp:218
void CgsSceneManager::TriangleCacheManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCacheManager.cpp:69
void CgsSceneManager::CacheSlot::UpdateCachedObject(const const InEventUpdateCachedPosition &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:71
		VecFloat lvfNewSphereRadius;

		// CgsTriangleCacheManager.cpp:72
		Vector3 lNewSphereCentre;

		// CgsTriangleCacheManager.cpp:80
		Vector3 lDisplVec;

		// CgsTriangleCacheManager.cpp:81
		VecFloat lDisplMag;

		TriangleCacheManagerIO::InEventUpdateCachedPosition::GetSphereRadius(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		CgsGeometric::Sphere::SetPosition(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:105
void CgsSceneManager::TriangleCacheManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<298u>::UnSetAll(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
}

// CgsTriangleCacheManager.cpp:355
void CgsSceneManager::TriangleCacheManager::StartUpdateTriangleCaches(BaseCollisionGenerator *  lpCollisionGenerator, const CgsGeometric::PolygonSoupListSpatialMap *  lpPolySoupListSpacialMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:370
		int32_t liCacheSlot;

		// CgsTriangleCacheManager.cpp:371
		int32_t liIndexIntoTriangleCache;

		// CgsTriangleCacheManager.cpp:372
		CacheSlot * lpCacheSlot;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsContainers::BitArray<298u>::GetFirstNonZeroBit(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetCachedObjectSlot(/* parameters */);
	CacheSlot::SetIsDirty(/* parameters */);
	CgsContainers::BitArray<298u>::GetNextNonZeroBit(/* parameters */);
	{
		// CgsTriangleCacheManager.cpp:396
		void * lpCommandAddress;

		// CgsTriangleCacheManager.cpp:397
		CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::StreamCommand * lpCommand;

		CgsMemory::SimpleDataStreamProducer::AllocateCommand(/* parameters */);
		CachedTriangleList::GetCachedTriangle(/* parameters */);
		CacheSlot::GetIndexIntoTriangleCache(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:138
void CgsSceneManager::TriangleCacheManager::Prepare(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:143
		int32_t liNum4TrisForCachedObjects;

	}
	{
		// CgsTriangleCacheManager.cpp:152
		int32_t liCachedObjSlotsSize;

		// CgsTriangleCacheManager.cpp:155
		ResourceDescriptor lCachedObjSlotsResDesc;

		// CgsTriangleCacheManager.cpp:158
		Resource lCachedObjSlotsRes;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// CgsTriangleCacheManager.cpp:169
		int32_t liSlot;

		GetCachedObjectSlot(/* parameters */);
		CacheSlot::Construct(/* parameters */);
		CgsGeometric::Sphere::Set(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:237
void CgsSceneManager::TriangleCacheManager::ProcessRemoveFromCacheEvents(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface *  lpUpdateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:239
		int32_t liEventIndex;

		// CgsTriangleCacheManager.cpp:240
		const const InSceneUpdateInterface::InRemoveCachedObjectQueue & lRemoveFromCacheQueue;

	}
	{
		// CgsTriangleCacheManager.cpp:244
		const const InEventRemoveFromCache & lEvent;

		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetEvent(/* parameters */);
		CgsContainers::BitArray<298u>::IsBitSet(/* parameters */);
		{
			// CgsTriangleCacheManager.cpp:253
			int32_t liRemoveEventIndex;

		}
		{
			// CgsTriangleCacheManager.cpp:259
			int32_t liAddEventIndex;

			CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetEvent(/* parameters */);
			{
				// CgsTriangleCacheManager.cpp:261
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		{
			// CgsTriangleCacheManager.cpp:263
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetCachedObjectSlot(/* parameters */);
		CacheSlot::Free(/* parameters */);
		CgsContainers::BitArray<298u>::UnSetBit(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetEvent(/* parameters */);
	{
		// CgsTriangleCacheManager.cpp:255
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:288
void CgsSceneManager::TriangleCacheManager::ProcessAddToCacheEvents(const const InAddCachedObjectQueue &  lAddToCacheQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:290
		int32_t liEventIndex;

	}
	{
		// CgsTriangleCacheManager.cpp:294
		const const InEventAddToCache & lEvent;

		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetEvent(/* parameters */);
		CgsContainers::BitArray<298u>::IsBitSet(/* parameters */);
		GetCachedObjectSlot(/* parameters */);
		CacheSlot::Use(/* parameters */);
		CgsGeometric::Sphere::SetRadius(/* parameters */);
		CgsContainers::BitArray<298u>::SetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:320
void CgsSceneManager::TriangleCacheManager::ProcessUpdateCachedPositionEvents(const const InUpdateCachedObjectPositionQueue &  lUpdateCachedPositionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:322
		int32_t liEventIndex;

	}
	{
		// CgsTriangleCacheManager.cpp:326
		const const InEventUpdateCachedPosition & lEvent;

		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetEvent(/* parameters */);
		CgsContainers::BitArray<298u>::IsBitSet(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsTriangleCacheManager.cpp:328
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::GetPlus(/* parameters */);
	rw::math::vpu::operator><VectorAxisW>(/* parameters */);
	operator=<VectorAxisW>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	{
	}
}

// CgsTriangleCacheManager.cpp:433
void CgsSceneManager::TriangleCacheManager::EndUpdateTriangleCaches(BaseCollisionGenerator *  lpCollisionGenerator, const CgsGeometric::PolygonSoupListSpatialMap *  lpPolySoupListSpacialMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.cpp:450
		int32_t liCacheSlot;

		// CgsTriangleCacheManager.cpp:451
		CacheSlot * lpCacheSlot;

		// CgsTriangleCacheManager.cpp:454
		SimpleDataStreamResultIterator lIterator;

	}
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	CgsContainers::BitArray<298u>::GetFirstNonZeroBit(/* parameters */);
	{
		// CgsTriangleCacheManager.cpp:483
		float32_t lfDebugDrawY;

		CgsContainers::BitArray<298u>::GetFirstNonZeroBit(/* parameters */);
	}
	GetCachedObjectSlot(/* parameters */);
	{
		// CgsTriangleCacheManager.cpp:468
		const CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::StreamResult * lpResult;

		CgsMemory::SimpleDataStreamResultIterator::GetCurrent(/* parameters */);
		CacheSlot::SetIsDirty(/* parameters */);
		CacheSlot::SetNumTriangleBatches(/* parameters */);
		CgsMemory::SimpleDataStreamResultIterator::GetNext(/* parameters */);
		CacheSlot::SetOverflow(/* parameters */);
	}
	CgsContainers::BitArray<298u>::GetNextNonZeroBit(/* parameters */);
	GetCachedObjectSlot(/* parameters */);
	{
		// CgsTriangleCacheManager.cpp:494
		DebugInterface lInterface;

		// CgsTriangleCacheManager.cpp:495
		char[256] lacBuffer;

		// CgsTriangleCacheManager.cpp:496
		Sphere lSphere;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
		CgsGeometric::Sphere::GetPosition(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsContainers::BitArray<298u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsTriangleCacheManager.cpp:526
void CgsSceneManager::TriangleCacheManager::UpdateTriangleCaches(BaseCollisionGenerator *  lpCollisionGenerator, const CgsGeometric::PolygonSoupListSpatialMap *  lpPolySoupListSpacialMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCacheManager.cpp:31
// CgsTriangleCacheManager.cpp:32
// CgsTriangleCacheManager.cpp:33
