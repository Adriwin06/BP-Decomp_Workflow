// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsEntityManager.cpp:27
	const float32_t KF_CAPSULE_RENDER_SPHERE_DISTANCE;

}

// CgsEntityManager.cpp:110
void CgsSceneManager::EntityManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEntityManager.cpp:375
void CgsSceneManager::EntityManager::DebugRenderVolume(const VolRef::Volume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lWorldSpaceTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:379
		RGBA lColour;

		// CgsEntityManager.cpp:380
		DebugInterface lDebugInterface;

		// CgsEntityManager.cpp:381
		const DebugRender & lDebugRender;

		// CgsEntityManager.cpp:382
		rw::collision::VolumeType lVolumeType;

		// CgsEntityManager.cpp:383
		Matrix44Affine lTransform;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeAquire(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::collision::Volume::GetType(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		// CgsEntityManager.cpp:394
		const CapsuleVolume * lpCapsuleVolume;

		// CgsEntityManager.cpp:395
		float32_t lfHalfHeight;

		{
			// CgsEntityManager.cpp:399
			int32_t liNumSteps;

			// CgsEntityManager.cpp:400
			Vector3 lStart;

			// CgsEntityManager.cpp:401
			Vector3 lInc;

			// CgsEntityManager.cpp:402
			Vector3 lPos;

			// CgsEntityManager.cpp:403
			int32_t liI;

			rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
		}
	}
	{
		// CgsEntityManager.cpp:414
		const BoxVolume * lpBoxVolume;

		// CgsEntityManager.cpp:415
		Vector3 lDimensions;

		rw::collision::BoxVolume::GetDimensions(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// CgsEntityManager.cpp:388
		const SphereVolume * lpSphereVolume;

	}
}

// CgsEntityManager.cpp:70
void CgsSceneManager::EntityManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::Destruct(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::Destruct(/* parameters */);
}

// CgsEntityManager.cpp:51
void CgsSceneManager::EntityManager::Construct(CgsSceneManager::VolumeManager *  lpVolumeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::Construct(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::Construct(/* parameters */);
}

// CgsEntityManager.cpp:299
void CgsSceneManager::EntityManager::RemoveVolumeInstanceFromEntity(int32_t  liVolumeInstanceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:301
		VolumeInstance * lpVolumeInstance;

		// CgsEntityManager.cpp:302
		SceneManagerEntity * lpEntity;

		// CgsEntityManager.cpp:307
		int32_t liCurrentVI;

		CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
	}
	CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
	{
		// CgsEntityManager.cpp:319
		VolumeInstance * lpCurrentVolumeInstance;

		CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsEntityManager.cpp:274
void CgsSceneManager::EntityManager::AddVolumeInstanceToEntity(uint16_t  lu16EntityIndex, int32_t  liVolumeInstanceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:276
		SceneManagerEntity * lpEntity;

		// CgsEntityManager.cpp:277
		VolumeInstance * lpVolumeInstance;

		// CgsEntityManager.cpp:280
		int32_t liOldFirstVI;

		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
	}
	CgsContainers::BitArray<10000u>::IsBitSet(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
	CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
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

// CgsEntityManager.cpp:88
void CgsSceneManager::EntityManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::Prepare(/* parameters */);
	{
	}
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::Prepare(/* parameters */);
	{
	}
	CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u>::Init(/* parameters */);
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,std::uint32_t,509u>::Init(/* parameters */);
}

// CgsEntityManager.cpp:130
void CgsSceneManager::EntityManager::AddEntity(EntityId  lUserID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:132
		int32_t liIndex;

		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::AllocateObject(/* parameters */);
	}
	{
		CgsContainers::BitArray<10000u>::SetBit(/* parameters */);
	}
	{
		// CgsEntityManager.cpp:136
		SceneManagerEntity * lpEntity;

		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
		CgsContainers::IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t>::Set(/* parameters */);
	}
	{
		// CgsEntityManager.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::GetNumAllocatedSlots(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsEntityManager.cpp:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

// CgsEntityManager.cpp:164
void CgsSceneManager::EntityManager::RemoveEntity(uint16_t  lu16Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::IsObjectAllocated(/* parameters */);
	CgsContainers::BitArray<10000u>::IsBitSet(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
	CgsContainers::BitArray<10000u>::IsBitSet(/* parameters */);
	CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u>::Remove(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>::RemoveNode(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::FreeObject(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
}

// CgsEntityManager.cpp:189
void CgsSceneManager::EntityManager::AddVolumeInstance(VolumeInstanceId  lVolumeInstanceId, VolumeId  lVolumeId, const const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:191
		int32_t liVolumeInstanceIndex;

	}
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::AllocateObject(/* parameters */);
	{
		CgsContainers::BitArray<5048u>::SetBit(/* parameters */);
	}
	{
		// CgsEntityManager.cpp:194
		VolumeInstance * lpVolumeInstance;

		// CgsEntityManager.cpp:196
		EntityId lEntityId;

		// CgsEntityManager.cpp:197
		uint16_t lu16EntityIndex;

		// CgsEntityManager.cpp:198
		int32_t liVolumeIndex;

		CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
		GetEntityIndexByID(/* parameters */);
		VolumeInstanceId::GetEntityId(/* parameters */);
		CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u>::Get(/* parameters */);
		VolumeManager::GetVolumeIndexByID(/* parameters */);
		CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>::Get(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		VolumeInstance::SetCollidable(/* parameters */);
		VolumeInstance::SetCached(/* parameters */);
		CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t>::Set(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsEntityManager.cpp:253
void CgsSceneManager::EntityManager::RemoveVolumeInstanceByIndex(VolumeInstanceId  lVolumeInstanceId, int32_t  liVolumeInstanceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::FreeObject(/* parameters */);
	CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<5048u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsEntityManager.cpp:234
void CgsSceneManager::EntityManager::RemoveVolumeInstance(VolumeInstanceId  lVolumeInstanceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:236
		int32_t liVolumeInstanceIndex;

		GetVolumeInstanceIndexByID(/* parameters */);
	}
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,std::uint32_t,509u>::Get(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::FreeObject(/* parameters */);
	CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<5048u>::UnSetBit(/* parameters */);
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
	}
}

// CgsEntityManager.cpp:344
void CgsSceneManager::EntityManager::DebugRenderVolumeInstances() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEntityManager.cpp:351
		int32_t liI;

		{
			// CgsEntityManager.cpp:356
			int32_t liVolumeInstanceIndex;

			// CgsEntityManager.cpp:357
			const VolumeInstance * lpVolumeInstance;

		}
		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::IsObjectAllocated(/* parameters */);
		{
			// CgsEntityManager.cpp:364
			const VolRef::Volume * lpVolume;

			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
		GetNextEntityVolumeInstance(/* parameters */);
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
}

