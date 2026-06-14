// CgsSceneSweeper.cpp:54
void CgsSceneManager::SceneSweeper::IntervalObjectData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeper.cpp:163
void CgsSceneManager::SceneSweeper::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:184
		uint32_t luLoop;

	}
	CgsContainers::BitArray<5051u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<5051u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<5051u>::UnSetAll(/* parameters */);
	rw::BitTable::ClearTable(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::Clear(/* parameters */);
}

// CgsSceneSweeper.cpp:144
void CgsSceneManager::SceneSweeper::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeper.cpp:113
void CgsSceneManager::SceneSweeper::Prepare(uint8_t *  lpaVolumeInstanceCullingGroup, BitTable *  lpCullingTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeper.cpp:94
void CgsSceneManager::SceneSweeper::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeper.cpp:71
void CgsSceneManager::SceneSweeper::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsSceneManager::OverlappingIntervalPair,131072>::Construct(/* parameters */);
}

// CgsSceneSweeper.cpp:451
void CgsSceneManager::SceneSweeper::SortLists() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeper.cpp:486
void CgsSceneManager::SceneSweeper::SweepLists() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:490
		IntervalStack lDynamicStack;

		// CgsSceneSweeper.cpp:491
		IntervalStack lStaticStack;

		IntervalStack::Init(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::Clear(/* parameters */);
	IntervalStack::Init(/* parameters */);
}

// CgsSceneSweeper.cpp:338
void CgsSceneManager::SceneSweeper::RemoveObject(uint32_t  luObjectIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:341
		CgsSceneManager::SceneSweeper::eObjectBodyState leBodyState;

	}
	CgsContainers::BitArray<5051u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<5051u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<5051u>::IsBitSet(/* parameters */);
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

// CgsSceneSweeper.cpp:272
void CgsSceneManager::SceneSweeper::AddObject(uint32_t  luObjectIndex, const AABBox *  lpBox, rw::physics::BodyState  leBodyState, VolumeInstanceId  lVolumeInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<5051u>::IsBitSet(/* parameters */);
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Max(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisY, VectorAxisY>(/* parameters */);
	CgsContainers::BitArray<5051u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneSweeper.cpp:275
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
		// CgsSceneSweeper.cpp:280
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneSweeper.cpp:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneSweeper.cpp:278
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSceneSweeper.cpp:386
void CgsSceneManager::SceneSweeper::UpdateObject(uint32_t  luObjectIndex, const AABBox *  lpBox, const rw::math::vpu::Vector3  lPadding, VolumeInstanceId  lVolumeInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:388
		Vector3 lPaddedMin;

		// CgsSceneSweeper.cpp:389
		Vector3 lPaddedMax;

		// CgsSceneSweeper.cpp:390
		CgsSceneManager::SceneSweeper::eObjectBodyState leBodyState;

	}
	{
		// CgsSceneSweeper.cpp:392
		CgsDev::StrStream lStrStream;

	}
	CgsContainers::BitArray<5051u>::IsBitSet(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Max(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Min(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ, VectorAxisZ>(/* parameters */);
	{
		// CgsSceneSweeper.cpp:398
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		{
		}
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsSceneSweeper.cpp:519
void CgsSceneManager::SceneSweeper::BuildCollidingPairs(const EntityManager *  lpEntityManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:522
		int32_t liXIndex;

		// CgsSceneSweeper.cpp:523
		int32_t liNumPairs;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::GetLength(/* parameters */);
	{
		// CgsSceneSweeper.cpp:532
		const const OverlappingIntervalPair & lCurrentXPair;

		CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::GetEvent(/* parameters */);
		{
			// CgsSceneSweeper.cpp:534
			uintptr_t luAddress;

		}
		{
			// CgsSceneSweeper.cpp:538
			float_t lfPadding;

			// CgsSceneSweeper.cpp:552
			Vector3 lPadA;

			// CgsSceneSweeper.cpp:552
			Vector3 lPadB;

			// CgsSceneSweeper.cpp:552
			Vector3 lRelativePad;

			// CgsSceneSweeper.cpp:555
			int32_t liVolumeInstIndexA;

			// CgsSceneSweeper.cpp:556
			int32_t liVolumeInstIndexB;

			// CgsSceneSweeper.cpp:558
			const VolumeInstance * lpVolumeInstanceA;

			// CgsSceneSweeper.cpp:559
			const VolumeInstance * lpVolumeInstanceB;

			EntityManager::GetVolumeInstance(/* parameters */);
			EntityManager::GetVolumeInstance(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::IsObjectAllocated(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::Min<std::uint16_t>(/* parameters */);
			rw::math::vpu::Max<std::uint16_t>(/* parameters */);
			ShouldBeCulled(/* parameters */);
			CollidingPair::Set(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneSweeper.cpp:561
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneSweeper.cpp:562
		CgsDev::StrStream lStrStream;

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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsSceneSweeper.cpp:214
void CgsSceneManager::SceneSweeper::Update(const EntityManager *  lpEntityManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneSweeper.cpp:233
		Interval lObjectMin;

		// CgsSceneSweeper.cpp:234
		Interval lObjectMax;

		// CgsSceneSweeper.cpp:236
		uint32_t luObjectIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsContainers::BitArray<5051u>::UnSetAll(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSceneSweeper.cpp:605
void CgsSceneManager::SceneSweeper::RemoveCollidingPair(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<5051u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<5051u>::SetBit(/* parameters */);
	CgsContainers::BitArray<5051u>::UnSetBit(/* parameters */);
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

// CgsSceneSweeper.cpp:28
// CgsSceneSweeper.cpp:29
// CgsSceneSweeper.cpp:30
