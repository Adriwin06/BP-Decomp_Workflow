// BrnDetachedPartManager.cpp:53
void BrnPhysics::Deformation::DetachedPartManager::CalculateInterest(const PhysicalBodyPart *  lpPart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDetachedPartManager.cpp:36
void BrnPhysics::Deformation::DetachedPartManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDetachedPartManager.cpp:81
void BrnPhysics::Deformation::DetachedPartManager::MakePartPhysical(InputBuffer *  lpSimInput, uint16_t  liDeformableObjectIndex, const BrnPhysics::Deformation::DeformableObject *  lpDeformableObject, RigidBodyId  lHandlingBodyId, EntityId  lGlobalCarId, int32_t  liPartIndex, const IKBodyPart *  lpPart, const rw::math::vpu::Matrix44Affine &  lLocalRenderTransform, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const rw::math::vpu::Vector3  lInitialLinearVelocity, const rw::math::vpu::Vector3  lInitialAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedPartManager.cpp:88
		PhysicalBodyPart * lpPhysicalPart;

		rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
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
	{
		// BrnDetachedPartManager.cpp:85
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
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		// BrnDetachedPartManager.cpp:84
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
}

// BrnDetachedPartManager.cpp:106
void BrnPhysics::Deformation::DetachedPartManager::Update(InputBuffer *  lpSimInput, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PhysicalBodyPartPool::UpdateRWBodies(/* parameters */);
	CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		ExternalPhysicsBody::AddForce(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnDetachedPartManager.cpp:116
void BrnPhysics::Deformation::DetachedPartManager::UpdatePostPhysics(const OutputBuffer *  lpSimModuleOutputBuffer, OutputBuffer::SceneInputInterface *  lpSceneInterface, ContactSpyData *  lpContactSpyData, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedPartManager.cpp:118
		VecFloat lvfTimeStep;

		// BrnDetachedPartManager.cpp:123
		const OutputBuffer::OutUpdateRigidBodyQueue * lpUpdatedBodyQueue;

		// BrnDetachedPartManager.cpp:124
		int32_t liNumUpdatedBodyEvents;

		CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetTimeStepUsed(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetLength(/* parameters */);
		{
			// BrnDetachedPartManager.cpp:125
			int32_t liUpdatedBodyEventIndex;

			{
				// BrnDetachedPartManager.cpp:128
				const OutUpdateRigidBody * lpUpdatedBodyEvent;

				CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetEvent(/* parameters */);
				{
					// BrnDetachedPartManager.cpp:133
					RigidBodyId lRigidBodyId;

					// BrnDetachedPartManager.cpp:134
					JointId lJointId;

				}
			}
		}
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

// BrnDetachedPartManager.cpp:159
void BrnPhysics::Deformation::DetachedPartManager::UpdateTriangleCache(InSceneUpdateInterface *  lpSceneUpdateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDetachedPartManager.cpp:163
		int32_t liPart;

	}
	{
		// BrnDetachedPartManager.cpp:170
		const PhysicalBodyPart * lpPart;

		PhysicalBodyPartPool::GetPart(/* parameters */);
	}
	{
		// BrnDetachedPartManager.cpp:178
		float32_t lfExtraPartSphereRadius;

		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::UpdateCachedObjectPosition(/* parameters */);
	}
	PhysicalBodyPartPool::IsPartIndexUsed(/* parameters */);
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
	PhysicalBodyPart::GetLinearVelocity(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	PhysicalBodyPart::GetSphereRadius(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PhysicalBodyPart::GetPosition(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsGeometric::Box::GetDimensions(/* parameters */);
	CgsGeometric::Box::GetFatness(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition::SetNewPosition(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition::SetRadius(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDetachedPartManager.cpp:205
void BrnPhysics::Deformation::DetachedPartManager::TestJointForBreaking(int32_t  liPoolIndex, InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsPartIndexUsed(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	PhysicalBodyPartPool::GetPart(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

