// BrnDetachedWheelManager.cpp:48
void BrnPhysics::Deformation::DetachedWheelManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
}

// BrnDetachedWheelManager.cpp:60
void BrnPhysics::Deformation::DetachedWheelManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDetachedWheelManager.cpp:71
void BrnPhysics::Deformation::DetachedWheelManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDetachedWheelManager.cpp:128
void BrnPhysics::Deformation::DetachedWheelManager::Update(InputBuffer *  lpSimInput, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDetachedWheelManager.cpp:37
void BrnPhysics::Deformation::DetachedWheelManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
}

// BrnDetachedWheelManager.cpp:93
void BrnPhysics::Deformation::DetachedWheelManager::DetachWheel(InputBuffer *  lpSimInput, RigidBodyId  lHandlingBodyId, uint16_t  luDeformableIndex, int32_t  liWheelIndex, float32_t  lfHalfHeight, float32_t  lfRadius, const rw::math::vpu::Matrix44Affine &  lRenderTransform, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const rw::math::vpu::Vector3  lInitialLinearVelocity, const rw::math::vpu::Vector3  lInitialAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedWheelManager.cpp:99
		int32_t liSlot;

		rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnDetachedWheelManager.cpp:106
		BurnoutWheelBodyID lBodyId;

		// BrnDetachedWheelManager.cpp:107
		EntityId lEntId;

		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		BurnoutWheelBodyID::Set(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
		PhysicalWheel::Prepare(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnDetachedWheelManager.cpp:96
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	{
		// BrnDetachedWheelManager.cpp:95
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDetachedWheelManager.cpp:135
void BrnPhysics::Deformation::DetachedWheelManager::UpdatePostPhysics(const OutputBuffer *  lpSimModuleOutputBuffer, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedWheelManager.cpp:138
		const OutputBuffer::OutUpdateRigidBodyQueue * lpUpdatedBodyQueue;

		// BrnDetachedWheelManager.cpp:139
		int32_t liNumUpdatedBodyEvents;

		CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetLength(/* parameters */);
		{
			// BrnDetachedWheelManager.cpp:140
			int32_t liUpdatedBodyEventIndex;

			{
				// BrnDetachedWheelManager.cpp:143
				const OutUpdateRigidBody * lpUpdatedBodyEvent;

				CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetEvent(/* parameters */);
			}
			{
				// BrnDetachedWheelManager.cpp:148
				BurnoutWheelBodyID lBodyId;

				CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
				PhysicalWheel::Update(/* parameters */);
			}
		}
	}
	PhysicalWheel::SetRigidBodyTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	PhysicalWheel::GetVolumeInstanceId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::AddEvent(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDetachedWheelManager.cpp:172
void BrnPhysics::Deformation::DetachedWheelManager::UpdateTriangleCache(InSceneUpdateInterface *  lpSceneUpdateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedWheelManager.cpp:176
		int32_t liWheel;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnDetachedWheelManager.cpp:183
		const PhysicalWheel * lpWheel;

		{
			// BrnDetachedWheelManager.cpp:190
			float32_t lfExtraWheelSphereRadius;

			rw::math::vpu::operator/(/* parameters */);
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::UpdateCachedObjectPosition(/* parameters */);
		CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition::SetRadius(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::AddEvent(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

