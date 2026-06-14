// BrnPhysicalBodyPartPool.cpp:42
void BrnPhysics::Deformation::PhysicalBodyPartPool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:44
		uint32_t i;

		PhysicalBodyPart::Construct(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
		CgsContainers::BitArray<50u>::UnSetAll(/* parameters */);
	}
}

// BrnPhysicalBodyPartPool.cpp:286
void BrnPhysics::Deformation::PhysicalBodyPartPool::OutputEvents(DeformationOutputInterfaceForEntityModules *  lpOutputForEntityModules, DeformationOutputInterface *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	{
		// BrnPhysicalBodyPartPool.cpp:291
		int32_t liPartIndex;

	}
	CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalBodyPartPool.cpp:294
		DetachedPartRenderEvent lDetachedPartEvent;

		// BrnPhysicalBodyPartPool.cpp:302
		DetachedPartCurrentPositionEvent lCurrentPosition;

		PhysicalBodyPart::GetRenderTransform(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		PhysicalBodyPart::GetMeshIndex(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::AddEvent(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		IKBodyPart::GetPartType(/* parameters */);
		operator=(/* parameters */);
		DeformationOutputInterface::AddDetachedPartPosition(/* parameters */);
		operator=(/* parameters */);
	}
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPartPool.cpp:164
void BrnPhysics::Deformation::PhysicalBodyPartPool::UpdatePart(const OutUpdateRigidBody *  lpUpdateEvent, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:166
		BurnoutBodyPartID lPartId;

		// BrnPhysicalBodyPartPool.cpp:167
		uint16_t lu16PartIndex;

	}
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	PhysicalBodyPart::Update(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPartPool.cpp:135
void BrnPhysics::Deformation::PhysicalBodyPartPool::RemovePart(InputBuffer *  lpSimInput, InSceneUpdateInterface *  lpSceneInput, uint8_t  lu8Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:140
		InRemoveRigidBody lRemoveRigidBodyEvent;

		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetRemoveRigidBodyQueue(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::AddEvent(/* parameters */);
	PhysicalBodyPart::RemoveFromScene(/* parameters */);
	CgsContainers::BitArray<50u>::UnSetBit(/* parameters */);
	PhysicalBodyPart::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPartPool.cpp:181
void BrnPhysics::Deformation::PhysicalBodyPartPool::UpdateABoundingBox(OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnPhysicalBodyPartPool.cpp:217
void BrnPhysics::Deformation::PhysicalBodyPartPool::UpdateJoinedParts(const PotentialContactInterface *  lpPotentialContactsInterface, ContactSpyData *  lpContactSpyData, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:219
		const PotentialContactInterface::CustomPotentialContactQueue * lpWorldContactQueue;

		// BrnPhysicalBodyPartPool.cpp:220
		const PotentialContactInterface::CustomPotentialContactQueue * lpCarContactQueue;

		// BrnPhysicalBodyPartPool.cpp:221
		BurnoutBodyPartID lBodyPartId;

		// BrnPhysicalBodyPartPool.cpp:222
		int32_t liNumWorldContacts;

		// BrnPhysicalBodyPartPool.cpp:223
		int32_t liNumCarContacts;

		// BrnPhysicalBodyPartPool.cpp:224
		int32_t liWorldContactIndex;

		// BrnPhysicalBodyPartPool.cpp:225
		int32_t liCarContactIndex;

		PhysicsModuleIO::PotentialContactInterface::GetHingedBodyPartWithCarQueue(/* parameters */);
	}
	PhysicsModuleIO::PotentialContactInterface::GetHingedBodyPartWithWorldQueue(/* parameters */);
	{
		// BrnPhysicalBodyPartPool.cpp:228
		int32_t liPartIndex;

	}
	CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	{
		// BrnPhysicalBodyPartPool.cpp:242
		const const PotentialContact & lContact;

		// BrnPhysicalBodyPartPool.cpp:243
		int32_t liPartIndex;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	{
		// BrnPhysicalBodyPartPool.cpp:257
		PotentialContact lContact;

		// BrnPhysicalBodyPartPool.cpp:258
		int32_t liPartIndex;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalBodyPartPool.cpp:273
		int32_t liPartIndex;

		CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
}

// BrnPhysicalBodyPartPool.cpp:77
void BrnPhysics::Deformation::PhysicalBodyPartPool::CreatePart(InputBuffer *  lpSimInput, uint16_t  liDeformableObjectIndex, const BrnPhysics::Deformation::DeformableObject *  lpDeformableObject, RigidBodyId  lHandlingBodyId, EntityId  lGlobalCarId, int32_t  liPartIndex, const IKBodyPart *  lpPart, const rw::math::vpu::Matrix44Affine &  lLocalRenderTransform, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const rw::math::vpu::Vector3  lInitialLinearVelocity, const rw::math::vpu::Vector3  lInitialAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:79
		int32_t liFreePart;

	}
	CgsContainers::BitArray<50u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnPhysicalBodyPartPool.cpp:85
		BurnoutBodyPartID lPartRigidBodyId;

		// BrnPhysicalBodyPartPool.cpp:86
		PhysicalBodyPart * lpPhysicalPart;

	}
	{
	}
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	BurnoutBodyPartID::Set(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	PhysicalBodyPart::Prepare(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	CgsNumeric::IsRightHanded(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::CompGreaterEqual(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	ExternallySimulatedBody::SetTransform(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	ExternallySimulatedBody::SetTransform(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	CgsContainers::BitArray<50u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalBodyPartPool.cpp:107
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
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
		// BrnPhysicalBodyPartPool.cpp:106
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
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
	CgsPhysics::RigidBodyId::Set(/* parameters */);
}

// BrnPhysicalBodyPartPool.cpp:200
void BrnPhysics::Deformation::PhysicalBodyPartPool::AddPartsToScene(OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.cpp:203
		int32_t liPartIndex;

	}
	CgsContainers::BitArray<50u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<50u>::GetNextNonZeroBit(/* parameters */);
}

