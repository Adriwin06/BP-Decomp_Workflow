// CgsVolumeManager.cpp:111
void CgsSceneManager::VolumeManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVolumeManager.cpp:53
void CgsSceneManager::VolumeManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VolumeStore<4608>::Construct(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::Construct(/* parameters */);
}

// CgsVolumeManager.cpp:71
void CgsSceneManager::VolumeManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VolumeStore<4608>::Destruct(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::Destruct(/* parameters */);
}

// CgsVolumeManager.cpp:254
void CgsSceneManager::VolumeManager::ReplaceDynamicVolume(VolumeId  lVolumeId, const VolRef::Volume *  lpVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeManager.cpp:256
		int32_t liIndex;

		GetVolumeIndexByID(/* parameters */);
	}
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>::Get(/* parameters */);
	{
		// CgsVolumeManager.cpp:259
		VolumeManagerVolume * lpVMVolume;

		CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::operator[](/* parameters */);
		CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsVolumeManager.cpp:89
void CgsSceneManager::VolumeManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VolumeStore<4608>::Prepare(/* parameters */);
	{
	}
	VolumeStore<4608>::Clear(/* parameters */);
	{
	}
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::Prepare(/* parameters */);
	{
	}
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>::Init(/* parameters */);
}

// CgsVolumeManager.cpp:134
void CgsSceneManager::VolumeManager::AddDynamicVolume(VolumeId  lVolumeId, VolumeManagerVolume::VolumeTypeFlags  lVolumeTypeFlags, const VolRef::Volume *  lpVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeManager.cpp:153
		int32_t liIndex;

		// CgsVolumeManager.cpp:156
		int32_t liStoreIndex;

		// CgsVolumeManager.cpp:157
		VolumeManagerVolume * lpVMVolume;

		{
			// CgsVolumeManager.cpp:138
			AABBox lAabb;

			// CgsVolumeManager.cpp:139
			Matrix44Affine lMatrix;

			rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		}
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::collision::Volume::GetBBox(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisY, VectorAxisY>(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::AllocateObject(/* parameters */);
	{
		CgsContainers::BitArray<5048u>::SetBit(/* parameters */);
	}
	VolumeStore<4608>::AddVolume(/* parameters */);
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::operator[](/* parameters */);
	CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t>::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:154
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:149
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:147
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:144
		CgsDev::StrStream lStrStream;

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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

// CgsVolumeManager.cpp:185
void CgsSceneManager::VolumeManager::AddStaticVolume(VolumeId  lVolumeId, VolumeManagerVolume::VolumeTypeFlags  lVolumeTypeFlags, const const ResourceHandle &  lVolumeResourceHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeManager.cpp:187
		int32_t liIndex;

		// CgsVolumeManager.cpp:190
		VolumeManagerVolume * lpVMVolume;

	}
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::AllocateObject(/* parameters */);
	{
		CgsContainers::BitArray<5048u>::SetBit(/* parameters */);
	}
	CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::operator[](/* parameters */);
	CgsContainers::IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t>::Set(/* parameters */);
	CgsContainers::IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>::GetData(/* parameters */);
	{
		// CgsVolumeManager.cpp:188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsVolumeManager.cpp:218
void CgsSceneManager::VolumeManager::RemoveVolume(VolumeId  lVolumeId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeManager.cpp:220
		int32_t liIndex;

		GetVolumeIndexByID(/* parameters */);
	}
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>::Get(/* parameters */);
	{
		// CgsVolumeManager.cpp:223
		VolumeManagerVolume * lpVMVolume;

		CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::operator[](/* parameters */);
		CgsContainers::BitArray<5048u>::IsBitSet(/* parameters */);
		CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>::FreeObject(/* parameters */);
		CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>::Remove(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>::RemoveNode(/* parameters */);
		VolumeStore<4608>::RemoveVolume(/* parameters */);
	}
	{
		// CgsVolumeManager.cpp:236
		CgsDev::StrStream lStrStream;

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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>::InternalRemoveTail(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>::InternalRemoveHead(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>::InternalRemoveLastNode(/* parameters */);
}

