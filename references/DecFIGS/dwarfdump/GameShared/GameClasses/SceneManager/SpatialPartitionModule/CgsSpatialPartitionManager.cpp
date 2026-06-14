// CgsSpatialPartitionManager.cpp:560
void CgsSceneManager::SpatialPartitionManager::RemoveEntity(uint16_t  lu16EntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:563
		CgsSceneManager::LooseOctree * lpSpatialPartition;

	}
	SpatialPartition::RemoveEntity(/* parameters */);
}

// CgsSpatialPartitionManager.cpp:644
void CgsSceneManager::SpatialPartitionManager::SetEntityRadius(uint16_t  lu16EntityIndex, float32_t  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:647
		CgsSceneManager::LooseOctree * lpSpatialPartition;

	}
}

// CgsSpatialPartitionManager.cpp:618
void CgsSceneManager::SpatialPartitionManager::SetEntityPosition(uint16_t  lu16EntityIndex, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:621
		CgsSceneManager::LooseOctree * lpSpatialPartition;

	}
}

// CgsSpatialPartitionManager.cpp:448
void CgsSceneManager::SpatialPartitionManager::VolumeTest(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const VolRef::Volume *  lpVolume, const rw::math::vpu::Matrix44Affine *  lpTransform, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:529
void CgsSceneManager::SpatialPartitionManager::FrustumTestEntities(const const Frustum &  lFrustum, uint32_t  lx32EntityTypeFlags, uint16_t *  lpEntitiesIn, uint32_t  luNumEntitiesIn, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:504
void CgsSceneManager::SpatialPartitionManager::FrustumTestVp(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const const Frustum &  lFrustum, const const rw::math::vpu::Matrix44 &  lViewProjection, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:424
void CgsSceneManager::SpatialPartitionManager::FrustumTest(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const const Frustum &  lFrustum, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:381
void CgsSceneManager::SpatialPartitionManager::SphereTest(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:399
void CgsSceneManager::SpatialPartitionManager::LineTest(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const rw::math::vpu::Vector3  lLineStart, const rw::math::vpu::Vector3  lLineEnd, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:65
void CgsSceneManager::SpatialPartitionManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:235
void CgsSceneManager::SpatialPartitionManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:367
void CgsSceneManager::SpatialPartitionManager::DebugRender(bool  lbRenderSpatialPartitionStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSpatialPartitionManager.cpp:481
void CgsSceneManager::SpatialPartitionManager::AddFrustumTestJob(InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const const Frustum &  lFrustum, const const rw::math::vpu::Matrix44 &  lViewProjection, uint32_t  luJobIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:484
		CgsSceneManager::LooseOctree * lpOctree;

	}
}

// CgsSpatialPartitionManager.cpp:469
void CgsSceneManager::SpatialPartitionManager::StartFrustumTestJobs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:472
		CgsSceneManager::LooseOctree * lpOctree;

	}
}

// CgsSpatialPartitionManager.cpp:180
void CgsSceneManager::SpatialPartitionManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
}

// CgsSpatialPartitionManager.cpp:490
void CgsSceneManager::SpatialPartitionManager::CompleteFrustumTestJobs(CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *  lpResultBufferOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:493
		CgsSceneManager::LooseOctree * lpOctree;

	}
}

// CgsSpatialPartitionManager.cpp
void CgsSceneManager::SpatialPartitionManager::Prepare(SpatialPartitionConstructParams *  lpSpatialPartitionConstructParams, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	LooseOctree::operator new(/* parameters */);
	LooseOctree::LooseOctree(/* parameters */);
	{
		// CgsSpatialPartitionManager.cpp:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSpatialPartitionManager.cpp:588
void CgsSceneManager::SpatialPartitionManager::AddEntity(uint16_t  lu16Index, uint32_t  lx32EntityTypeFlags, const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:591
		CgsSceneManager::LooseOctree * lpSpatialPartition;

	}
	SpatialPartition::AddEntity(/* parameters */);
}

// CgsSpatialPartitionManager.cpp:283
void CgsSceneManager::SpatialPartitionManager::ProcessUpdateQueue(const InputBuffer_Update *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSpatialPartitionManager.cpp:291
		int32_t liId;

		// CgsSpatialPartitionManager.cpp:292
		int32_t liSize;

		// CgsSpatialPartitionManager.cpp:293
		const CgsModule::Event * lpEvent;

		// CgsSpatialPartitionManager.cpp:296
		CgsSceneManager::LooseOctree * lpSpatialPartition;

	}
	SpatialPartitionIO::InputBuffer_Update::GetSpatialPartitionUpdateQueue(/* parameters */);
	CgsModule::VariableEventQueue<135168,16>::GetFirstEvent(/* parameters */);
	SpatialPartitionIO::InputBuffer_Update::GetSpatialPartitionUpdateQueue(/* parameters */);
	{
		// CgsSpatialPartitionManager.cpp:328
		const InEventRemoveEntity * lpCommand;

		SpatialPartition::RemoveEntity(/* parameters */);
	}
	{
		// CgsSpatialPartitionManager.cpp:310
		const InEventSetEntityPosition * lpCommand;

	}
	{
		// CgsSpatialPartitionManager.cpp:318
		const InEventAddEntity * lpCommand;

		SpatialPartition::AddEntity(/* parameters */);
	}
	{
		// CgsSpatialPartitionManager.cpp:335
		const InEventSetEntityRadius * lpCommand;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSpatialPartitionManager.cpp:254
void CgsSceneManager::SpatialPartitionManager::UpdateScene(const InputBuffer_Update *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
}

