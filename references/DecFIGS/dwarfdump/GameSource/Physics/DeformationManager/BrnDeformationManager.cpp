// BrnDeformationManager.cpp:1116
void BrnPhysics::Deformation::DeformationManager::ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *  lpUpdatedBodies, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformationManager.cpp:1430
void BrnPhysics::Deformation::DeformationManager::ProjectLineOntoPlane(const rw::math::vpu::Vector3  lPointOnLine, const rw::math::vpu::Vector3  lLineDir, const rw::math::vpu::Vector3  lPointOnPlane, const rw::math::vpu::Vector3  lPlaneNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1432
		VecFloat lvfT;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnDeformationManager.cpp:1958
void BrnPhysics::Deformation::DeformationManager::CreateDetachedWheelContactEvent(PhysicalCarPartContact *  lpOutPhysicalCarPartContact, const OutContactSpy *  lpInContact, const PotentialContact *  lpInPotentialContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnDeformationManager.cpp:199
void BrnPhysics::Deformation::DeformationManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformationManager.cpp:216
void BrnPhysics::Deformation::DeformationManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformationManager.cpp:1867
void BrnPhysics::Deformation::DeformationManager::ReadPotentialContact(const const PotentialContact &  lPotentialContact, ContactId  lContactId, InputBuffer *  lpSimInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1874
		int32_t liModelIndexA;

		// BrnDeformationManager.cpp:1875
		int32_t liModelIndexB;

		// BrnDeformationManager.cpp:1876
		BrnPhysics::Deformation::DeformableObject * lpOtherVehicleBody;

		// BrnDeformationManager.cpp:1877
		BrnPhysics::Deformation::DeformationSensor * lpOtherDeformationSensor;

		// BrnDeformationManager.cpp:1878
		BrnPhysics::Deformation::DeformationSensor * lpSensorA;

		// BrnDeformationManager.cpp:1879
		Matrix44Affine lInverseTransformA;

		// BrnDeformationManager.cpp:1896
		bool lbWillCollide;

	}
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	DeformableObject::GetDeformationSensorFromVolumeInstance(/* parameters */);
	DeformableObject::GetInverseTransform(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	DeformableObject::GetDeformationSensorFromVolumeInstance(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	DeformableObject::ResetCoolDown(/* parameters */);
	DeformableObject::ResetCoolDown(/* parameters */);
	Vehicle::VehiclePhysics::ResetCoolDown(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	{
	}
	{
	}
}

// BrnDeformationManager.cpp:409
void BrnPhysics::Deformation::DeformationManager::ProcessValidateDeformationModelEvents(const DeformationInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:411
		const VehicleInputInterface::ValidateRaceCarEventQueue * lpEventQueue;

		// BrnDeformationManager.cpp:412
		int32_t liIndex;

	}
	{
		// BrnDeformationManager.cpp:418
		const const ValidateRaceCarEvent & lEvent;

		// BrnDeformationManager.cpp:420
		int32_t liModelIndex;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		FindModelIndexByEntityID(/* parameters */);
		DeformableObject::ValidateDeformationModel(/* parameters */);
	}
	DeformableObject::InvalidateDeformationModel(/* parameters */);
	{
	}
}

// BrnDeformationManager.cpp:1979
void BrnPhysics::Deformation::DeformationManager::OutputSensorState(DeformationOutputInterface *  lpDefOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1983
		int32_t liModelIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	DeformationOutputInterface::SetDeformationState(/* parameters */);
	{
	}
	DeformableObject::OutputState(/* parameters */);
	{
	}
	CarState::SetNumSensors(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	DeformableObject::GetVehiclePhysics(/* parameters */);
	{
		{
			Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
		}
	}
	StreamedDeformationSpec::GetWheelSpec(/* parameters */);
	Vehicle::Wheel::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	SetY<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	DeformationSensor::OutputState(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
}

// BrnDeformationManager.cpp:681
void BrnPhysics::Deformation::DeformationManager::VerifyPartIndices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:683
		int32_t liBodyIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
}

// BrnDeformationManager.cpp:656
void BrnPhysics::Deformation::DeformationManager::UpdateSensorDisplacements(VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnDeformationManager.cpp:662
		int32_t liBodyIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
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

// BrnDeformationManager.cpp:2348
void BrnPhysics::Deformation::DeformationManager::BridgeBodyPartCarContactsToSimulation(InputBuffer *  lpSimModuleInputBuffer, const InputBuffer *  lpInputBuffer, PotentialContactInterface *  lpContactInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2350
		const PotentialContactInterface::CustomPotentialContactQueue * lpDetachedPartCarContactQueue;

		// BrnDeformationManager.cpp:2351
		PotentialContact lContact;

		// BrnDeformationManager.cpp:2353
		int32_t liNumEvents;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	{
		// BrnDeformationManager.cpp:2355
		int32_t liI;

	}
	{
		// BrnDeformationManager.cpp:2357
		InAddPotentialContact lAddContactEvent;

		// BrnDeformationManager.cpp:2379
		PhysicalBodyPart * lpPart;

		// BrnDeformationManager.cpp:2398
		float32_t lfSeparation;

		// BrnDeformationManager.cpp:2405
		ContactId lContactId;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		DetachedPartManager::IsPartIndexUsed(/* parameters */);
		DetachedPartManager::GetPartFromIndex(/* parameters */);
		CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		ContactId::Set(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformationManager.cpp:141
void BrnPhysics::Deformation::DeformationManager::Prepare(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:152
		int32_t liModelsSize;

		// BrnDeformationManager.cpp:157
		ResourceDescriptor lModelsResDesc;

		// BrnDeformationManager.cpp:160
		Resource lModelsRes;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		DeformableObject(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnDeformationManager.cpp:170
		uint32_t i;

	}
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnDeformationManager.cpp:1015
void BrnPhysics::Deformation::DeformationManager::AddArticulatedJointContacts(PenetrationSolver *  lpPenetrationSolver, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1017
		int32_t liEvent;

		// BrnDeformationManager.cpp:1020
		const PotentialContactInterface::CustomPotentialContactQueue * lpArticulatedJointContacts;

	}
	{
		// BrnDeformationManager.cpp:1026
		const const PotentialContact & lContact;

		// BrnDeformationManager.cpp:1030
		EntityId lCabEntityId;

		// BrnDeformationManager.cpp:1031
		EntityId lTrailerEntityId;

		// BrnDeformationManager.cpp:1036
		int32_t liCabModelIndex;

		// BrnDeformationManager.cpp:1037
		int32_t liTrailerModelIndex;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		FindModelIndexByEntityID(/* parameters */);
		FindModelIndexByEntityID(/* parameters */);
		PenetrationSolver::AddVehicleContact(/* parameters */);
		{
			// BrnDeformationManager.cpp:1040
			CgsDev::StrStream lStrStream;

		}
		{
		}
	}
	{
	}
	{
		// BrnDeformationManager.cpp:1039
		CgsDev::StrStream lStrStream;

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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

// BrnDeformationManager.cpp:1164
void BrnPhysics::Deformation::DeformationManager::ReadPotentialVehicleWorldContact(const const PotentialContact &  lPotentialContact, ContactId  lContactId, InputBuffer *  lpSimInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1166
		Matrix44Affine lInverseVehicleTransform;

		// BrnDeformationManager.cpp:1167
		int32_t liModelIndexA;

		// BrnDeformationManager.cpp:1193
		const BrnPhysics::Deformation::DeformationSensor & lSensor;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	FindModelIndexByGlobalEntityID(/* parameters */);
	DeformableObject::GetDeformationSensorFromVolumeInstance(/* parameters */);
	DeformableObject::GetInverseTransform(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
		// BrnDeformationManager.cpp:1196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
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

// BrnDeformationManager.cpp:1357
void BrnPhysics::Deformation::DeformationManager::CalculateTangentPoints(Sphere  lSphereAIn, Sphere  lSphereBIn, Vector3  lPointOnSide, Vector3 *  lpResultA, Vector3 *  lpResultB, Vector3 *  lpOutNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1359
		Sphere lSphereA;

		// BrnDeformationManager.cpp:1360
		Sphere lSphereB;

		// BrnDeformationManager.cpp:1365
		VecFloat lvfAveY;

		// BrnDeformationManager.cpp:1366
		Vector3 lTemp;

		// BrnDeformationManager.cpp:1374
		Vector3 lAToB;

		// BrnDeformationManager.cpp:1375
		VecFloat lAToBDist;

		// BrnDeformationManager.cpp:1376
		Vector3 lAToBDir;

		// BrnDeformationManager.cpp:1377
		VecFloat lRadDiff;

		// BrnDeformationManager.cpp:1378
		VecFloat lCosTheta;

		// BrnDeformationManager.cpp:1383
		VecFloat lTheta;

		// BrnDeformationManager.cpp:1385
		Matrix44 lRot;

		// BrnDeformationManager.cpp:1388
		Vector3 lNormal;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44RotateY(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
	CgsGeometric::Sphere::SetPosition(/* parameters */);
	CgsGeometric::Sphere::SetPosition(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sra(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	vec_abs(/* parameters */);
	vec_sub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnDeformationManager.cpp:1406
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44RotateY(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnDeformationManager.cpp:1236
void BrnPhysics::Deformation::DeformationManager::GetInterpolatedContactPointAndNormal(BrnPhysics::Deformation::DeformableObject *  lpModel, int32_t  liSensorIndex, const rw::math::vpu::Vector3  lWorldPosIn, const rw::math::vpu::Vector3  lOtherSensorPos, Vector3 *  lpOutWorldPos, Vector3 *  lpInOutNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1241
		Matrix44Affine lInvTrans;

		// BrnDeformationManager.cpp:1244
		Vector3 lLocalPos;

		// BrnDeformationManager.cpp:1245
		Vector3 lLocalNormal;

		// BrnDeformationManager.cpp:1246
		Vector3 lBaseSpherePos;

		// BrnDeformationManager.cpp:1247
		Vector3 lOtherSensorPosLocal;

		// BrnDeformationManager.cpp:1249
		int32_t liNeighbourIndex;

		// BrnDeformationManager.cpp:1250
		BrnPhysics::Deformation::DeformationSensor * lpNeighbour;

		// BrnDeformationManager.cpp:1272
		Vector3 lNewPos;

		// BrnDeformationManager.cpp:1273
		Vector3 lNormal;

		// BrnDeformationManager.cpp:1274
		bool lbInterpolated;

		// BrnDeformationManager.cpp:1275
		Matrix44Affine lCarTrans;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	Vehicle::SimpleVehiclePhysics::GetInverseTransform(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	DeformableObject::GetDeformationSensor(/* parameters */);
	{
		// BrnDeformationManager.cpp:1254
		Vector3 lVecToNeighbour;

		rw::math::vpu::operator-(/* parameters */);
		DeformableObject::GetDeformationSensor(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	DeformableObject::GetTransform(/* parameters */);
	{
		// BrnDeformationManager.cpp:1281
		Vector3 lOffsetFromSensor;

		// BrnDeformationManager.cpp:1286
		VecFloat lvfBaseRadius;

		// BrnDeformationManager.cpp:1287
		VecFloat lvfNeighbourRadius;

		// BrnDeformationManager.cpp:1288
		Vector3 lVecToBase;

		// BrnDeformationManager.cpp:1289
		Vector3 lVecToNeighbour;

		DeformationSensor::GetRadius(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		DeformationSensor::GetRadius(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
		}
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
	}
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	DeformableObject::GetDeformationSensor(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnDeformationManager.cpp:1327
		Vector3 lOffsetFromSensor;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		DeformationSensor::GetRadius(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
	}
	{
		// BrnDeformationManager.cpp:1302
		Vector3 lSphereAEdge;

		// BrnDeformationManager.cpp:1303
		Vector3 lSphereBEdge;

		// BrnDeformationManager.cpp:1304
		Sphere lLocalSphereA;

		// BrnDeformationManager.cpp:1305
		Sphere lLocalSphereB;

		CgsGeometric::Sphere::Set(/* parameters */);
		CgsGeometric::Sphere::Set(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnDeformationManager.cpp:1452
void BrnPhysics::Deformation::DeformationManager::FixUpVehicleContactWithBoxes(const PotentialContact &  lPotentialContact, VolumeInstanceId  lRaceCarVolInstId, VolumeInstanceId  lTrafficVolInstId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1458
		int32_t liRaceCarModelIndex;

		// BrnDeformationManager.cpp:1459
		int32_t liTrafficModelIndex;

		// BrnDeformationManager.cpp:1460
		BrnPhysics::Deformation::DeformableObject * lpRaceCarModel;

		// BrnDeformationManager.cpp:1461
		BrnPhysics::Deformation::DeformableObject * lpTrafficModel;

		// BrnDeformationManager.cpp:1463
		Matrix44Affine lRaceCarTransform;

		// BrnDeformationManager.cpp:1464
		Matrix44Affine lRaceCarInvTransform;

		// BrnDeformationManager.cpp:1465
		Matrix44Affine lTrafficTransform;

		// BrnDeformationManager.cpp:1466
		Matrix44Affine lTrafficInvTransform;

		// BrnDeformationManager.cpp:1467
		Vector3 lRaceCarNormal;

		// BrnDeformationManager.cpp:1468
		Vector3 lTrafficNormal;

		// BrnDeformationManager.cpp:1469
		Sphere lRaceCarSphere;

		// BrnDeformationManager.cpp:1470
		Sphere lTrafficSphere;

		// BrnDeformationManager.cpp:1471
		Vector3 lNormal;

		// BrnDeformationManager.cpp:1473
		bool lbRaceCarHitSideOfTraffic;

		// BrnDeformationManager.cpp:1474
		Vector3 lPointOnRaceCarLocal;

		// BrnDeformationManager.cpp:1475
		Vector3 lPointOnRaceCarLocalAbs;

		// BrnDeformationManager.cpp:1476
		Vector3 lLocalNormal;

		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	FindModelIndexByEntityID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetInverseTransform(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnDeformationManager.cpp:1534
		Vector3 lVelocityA;

		// BrnDeformationManager.cpp:1535
		Vector3 lVelocityB;

		// BrnDeformationManager.cpp:1536
		Vector3 lRelativeVelocity;

		// BrnDeformationManager.cpp:1537
		VecFloat lvfRelativeVelocityDotA;

		// BrnDeformationManager.cpp:1538
		VecFloat lvfRelativeVelocityDotB;

		{
			// BrnDeformationManager.cpp:1561
			CgsDev::StrStream lStrStream;

		}
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisZ, VectorAxisZ>(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	{
	}
	{
	}
	{
		// BrnDeformationManager.cpp:1571
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetPosition(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetPosition(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
}

// BrnDeformationManager.cpp:1599
void BrnPhysics::Deformation::DeformationManager::FixUpVehicleContactByInterpolation(const PotentialContact &  lPotentialContact, VolumeInstanceId  lRaceCarVolInstId, VolumeInstanceId  lTrafficVolInstId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1608
		int32_t liRaceCarModelIndex;

		// BrnDeformationManager.cpp:1609
		int32_t liTrafficModelIndex;

		// BrnDeformationManager.cpp:1610
		BrnPhysics::Deformation::DeformableObject * lpRaceCarModel;

		// BrnDeformationManager.cpp:1611
		BrnPhysics::Deformation::DeformableObject * lpTrafficModel;

		// BrnDeformationManager.cpp:1613
		Matrix44Affine lRaceCarTransform;

		// BrnDeformationManager.cpp:1614
		Matrix44Affine lRaceCarInvTransform;

		// BrnDeformationManager.cpp:1615
		Matrix44Affine lTrafficTransform;

		// BrnDeformationManager.cpp:1616
		Matrix44Affine lTrafficInvTransform;

		// BrnDeformationManager.cpp:1617
		Sphere lRaceCarSphere;

		// BrnDeformationManager.cpp:1618
		Sphere lTrafficSphere;

		// BrnDeformationManager.cpp:1620
		Vector3 lPointOnRaceCarLocal;

		// BrnDeformationManager.cpp:1621
		Vector3 lPointOnRaceCarLocalAbs;

		// BrnDeformationManager.cpp:1622
		Vector3 lLocalNormal;

		// BrnDeformationManager.cpp:1623
		Vector3 lOriginalNormal;

		// BrnDeformationManager.cpp:1655
		bool lbUsedInterpolatedTrafficNormal;

		// BrnDeformationManager.cpp:1656
		bool lbUsedInterpolatedRaceCarNormal;

		// BrnDeformationManager.cpp:1657
		bool lbFailedInterpolationChecks;

		// BrnDeformationManager.cpp:1659
		Vector3 lPointOnRaceCar;

		// BrnDeformationManager.cpp:1660
		Vector3 lPointOnTrafficCar;

		// BrnDeformationManager.cpp:1661
		Vector3 lRaceCarNormal;

		// BrnDeformationManager.cpp:1662
		Vector3 lTrafficNormal;

		// BrnDeformationManager.cpp:1664
		int32_t liTrafficSensorIndex;

		// BrnDeformationManager.cpp:1689
		int32_t liRaceCarSensorIndex;

		// BrnDeformationManager.cpp:1726
		VecFloat lvfDistUsingTraffic;

		// BrnDeformationManager.cpp:1727
		VecFloat lvfDistUsingRaceCar;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	FindModelIndexByEntityID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	DeformableObject::GetDeformationSensor(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DeformableObject::GetDeformationSensor(/* parameters */);
	CgsGeometric::Sphere::GetPosition(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnDeformationManager.cpp:1766
void BrnPhysics::Deformation::DeformationManager::FixUpVehicleContact(const PotentialContact &  lPotentialContact, VolumeInstanceId  lCarAVolInstId, VolumeInstanceId  lCarBVolInstId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1774
		int32_t liCarAModelIndex;

		// BrnDeformationManager.cpp:1775
		int32_t liCarBModelIndex;

		// BrnDeformationManager.cpp:1776
		BrnPhysics::Deformation::DeformableObject * lpCarAModel;

		// BrnDeformationManager.cpp:1777
		BrnPhysics::Deformation::DeformableObject * lpCarBModel;

		// BrnDeformationManager.cpp:1779
		Matrix44Affine lCarATransform;

		// BrnDeformationManager.cpp:1780
		Matrix44Affine lCarBTransform;

		// BrnDeformationManager.cpp:1781
		Vector3 lCarANormal;

		// BrnDeformationManager.cpp:1782
		Vector3 lCarBNormal;

		// BrnDeformationManager.cpp:1783
		Sphere lCarASphere;

		// BrnDeformationManager.cpp:1784
		Sphere lCarBSphere;

		// BrnDeformationManager.cpp:1785
		Vector3 lNormal;

		// BrnDeformationManager.cpp:1787
		Vector3 lVelocityA;

		// BrnDeformationManager.cpp:1788
		Vector3 lVelocityB;

		// BrnDeformationManager.cpp:1789
		Vector3 lRelativeVelocity;

		// BrnDeformationManager.cpp:1790
		VecFloat lvfRelativeVelocityDotA;

		// BrnDeformationManager.cpp:1791
		VecFloat lvfRelativeVelocityDotB;

		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	FindModelIndexByEntityID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetDeformationSphereFromVolumeInstance(/* parameters */);
	DeformationSensor::GetWorldSpaceSphere(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnDeformationManager.cpp:1842
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
}

// BrnDeformationManager.cpp:1930
void BrnPhysics::Deformation::DeformationManager::CreateDetachedPartContactEvent(PhysicalCarPartContact *  lpOutPhysicalCarPartContact, const OutContactSpy *  lpInContact, const PotentialContact *  lpInPotentialContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1943
		BurnoutBodyPartID lBodyId;

		// BrnDeformationManager.cpp:1945
		uint16_t liPartPoolIndex;

		// BrnDeformationManager.cpp:1946
		const PhysicalBodyPart * lpPart;

	}
	{
		// BrnDeformationManager.cpp:1938
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DetachedPartManager::GetPartFromIndex(/* parameters */);
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

// BrnDeformationManager.cpp:2101
void BrnPhysics::Deformation::DeformationManager::AddBodyPartWorldResultsToContactQueue(const BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2103
		const PotentialContactInterface::CustomPotentialContactQueue * lpContactQueue;

		// BrnDeformationManager.cpp:2104
		const PhysicalBodyPart * lpCurrentPart;

		// BrnDeformationManager.cpp:2105
		uint32_t luPartIndex;

		// BrnDeformationManager.cpp:2106
		int32_t liNumEvents;

		// BrnDeformationManager.cpp:2107
		int32_t liEvent;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	{
		// BrnDeformationManager.cpp:2114
		PotentialContact lCurrentContact;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		DetachedPartManager::GetPartFromIndex(/* parameters */);
		PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::AddEventSafe(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnDeformationManager.cpp:2440
void BrnPhysics::Deformation::DeformationManager::BridgeDetachedWheelCarContactsToSimulation(InputBuffer *  lpSimModuleInputBuffer, const InputBuffer *  lpInputBuffer, PotentialContactInterface *  lpContactInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2442
		const PotentialContactInterface::CustomPotentialContactQueue * lpDetachedWheelCarContactQueue;

		// BrnDeformationManager.cpp:2443
		PotentialContact lContact;

		// BrnDeformationManager.cpp:2445
		int32_t liNumEvents;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	{
		// BrnDeformationManager.cpp:2447
		int32_t liI;

	}
	{
		// BrnDeformationManager.cpp:2449
		InAddPotentialContact lAddContactEvent;

		// BrnDeformationManager.cpp:2471
		const PhysicalWheel * lpWheel;

		// BrnDeformationManager.cpp:2489
		VecFloat lvfSeparation;

		// BrnDeformationManager.cpp:2505
		ContactId lContactId;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		DetachedWheelManager::IsSlotUsed(/* parameters */);
		DetachedWheelManager::GetWheel(/* parameters */);
		CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		ContactId::Set(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(/* parameters */);
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
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDeformationManager.cpp:2494
		Matrix44Affine lVehicleMat;

		// BrnDeformationManager.cpp:2497
		VecFloat lvfDotX;

		DeformableObject::GetTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
}

// BrnDeformationManager.cpp:50
void BrnPhysics::Deformation::DeformationManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:67
		uint32_t i;

		// BrnDeformationManager.cpp:73
		uint8_t lu8RaceCar;

		// BrnDeformationManager.cpp:79
		int32_t lu8Traffic;

		// BrnDeformationManager.cpp:85
		uint32_t luGlobalTraffic;

	}
	CgsNumeric::Random::Construct(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
}

// BrnDeformationManager.cpp:921
void BrnPhysics::Deformation::DeformationManager::SolvePenetration(IOBufferStack *  lpIOStack, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:923
		PenetrationSolver * lpPenetrationSolver;

		// BrnDeformationManager.cpp:924
		Matrix44Affine lTransform;

		CreateIOBuffer<BrnPhysics::Deformation::PenetrationSolver>(/* parameters */);
	}
	PenetrationSolver::Construct(/* parameters */);
	{
		// BrnDeformationManager.cpp:941
		int32_t liObject;

	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	PenetrationSolver::AddObject(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// BrnDeformationManager.cpp:975
		int32_t liObject;

		CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	}
	DestroyIOBuffer<BrnPhysics::Deformation::PenetrationSolver>(/* parameters */);
	{
	}
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	DeformableObject::GetWeightFactor(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	PenetrationSolver::AddObject(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	DeformableObject::AddContactsToPenetrationSolver(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnDeformationManager.cpp:979
		const rw::math::vpu::Matrix44Affine * lpTransform;

		PenetrationSolver::GetUpdatedTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		DeformableObject::SetTransform(/* parameters */);
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDeformationManager.cpp:2287
void BrnPhysics::Deformation::DeformationManager::AddRaceCarWheelPair(EntityId  lRaceCarId, VolumeInstanceId  lWheelId, PrimitivePairListBuilder *  lpPrimPairList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2289
		BurnoutWheelBodyID lWheelBodyId;

		// BrnDeformationManager.cpp:2298
		const PhysicalWheel * lpWheel;

	}
	DetachedWheelManager::IsSlotUsed(/* parameters */);
	DetachedWheelManager::GetWheel(/* parameters */);
	{
		// BrnDeformationManager.cpp:2303
		int32_t liModelIndex;

		// BrnDeformationManager.cpp:2312
		Cylinder lWheelVol;

		// BrnDeformationManager.cpp:2315
		AxisAlignedBox lCarAABB;

		// BrnDeformationManager.cpp:2316
		Box lCarBox;

		// BrnDeformationManager.cpp:2318
		Matrix44Affine lCarBoxTransform;

		// BrnDeformationManager.cpp:2320
		Vector3 lOffset;

		FindModelIndexByEntityID(/* parameters */);
		PhysicalWheel::GetCylinder(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		DeformableObject::GetDeformedBoundingBox(/* parameters */);
		DeformableObject::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGeometric::Cylinder::Set(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		PhysicalWheel::GetPoolIndex(/* parameters */);
		{
			// BrnDeformationManager.cpp:2324
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnDeformationManager.cpp:2146
void BrnPhysics::Deformation::DeformationManager::AddRaceCarBodyPartPair(EntityId  lRaceCarId, VolumeInstanceId  lBodyPartId, PrimitivePairListBuilder *  lpPrimPairList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2148
		BurnoutBodyPartID lPartBodyPartId;

		// BrnDeformationManager.cpp:2157
		PhysicalBodyPart * lpPart;

		DetachedPartManager::IsPartIndexUsed(/* parameters */);
	}
	PhysicalBodyPartPool::IsPartIndexUsed(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	DetachedPartManager::GetPartFromIndex(/* parameters */);
	{
		// BrnDeformationManager.cpp:2170
		int32_t liModelIndex;

		// BrnDeformationManager.cpp:2179
		Box lPartBox;

		// BrnDeformationManager.cpp:2182
		Box lCarBox;

		// BrnDeformationManager.cpp:2185
		uint8_t luPartIndex;

		FindModelIndexByEntityID(/* parameters */);
		PhysicalBodyPart::GetBoundingBox(/* parameters */);
		DeformableObject::GetAlignedDeformedBoundingBox(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		DeformableObject::GetDeformedBoundingBox(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		DeformableObject::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		DetachedPartManager::IsPartIndexUsed(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDeformationManager.cpp:2187
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
	}
}

// BrnDeformationManager.cpp:2209
void BrnPhysics::Deformation::DeformationManager::AddHingedBodyPartPairs(EntityId  lVehicleA, EntityId  lVehicleB, PrimitivePairListBuilder *  lpPrimPairList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2211
		int32_t liModelIndexA;

		// BrnDeformationManager.cpp:2212
		BrnPhysics::Deformation::DeformableObject * lpModelA;

		// BrnDeformationManager.cpp:2213
		Box lCarBoxA;

		// BrnDeformationManager.cpp:2215
		int32_t liModelIndexB;

		// BrnDeformationManager.cpp:2216
		BrnPhysics::Deformation::DeformableObject * lpModelB;

		// BrnDeformationManager.cpp:2217
		Box lCarBoxB;

		FindModelIndexByEntityID(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	FindModelIndexByEntityID(/* parameters */);
	DeformableObject::GetAlignedDeformedBoundingBox(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	DeformableObject::GetAlignedDeformedBoundingBox(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	DeformableObject::GetDeformedBoundingBox(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnDeformationManager.cpp:2240
		int32_t liPartIndex;

		{
			// BrnDeformationManager.cpp:2245
			int32_t liPartPoolIndex;

			// BrnDeformationManager.cpp:2246
			PhysicalBodyPart * lpHingedPart;

			// BrnDeformationManager.cpp:2247
			Box lHingedPartBoundingBox;

		}
	}
	DetachedPartManager::GetPartFromIndex(/* parameters */);
	PhysicalBodyPart::GetBoundingBox(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		// BrnDeformationManager.cpp:2256
		int32_t liPartIndex;

		{
			// BrnDeformationManager.cpp:2261
			int32_t liPartPoolIndex;

			// BrnDeformationManager.cpp:2262
			PhysicalBodyPart * lpHingedPart;

			// BrnDeformationManager.cpp:2263
			Box lHingedPartBoundingBox;

		}
	}
	DetachedPartManager::GetPartFromIndex(/* parameters */);
	PhysicalBodyPart::GetBoundingBox(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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
	{
	}
	{
	}
}

// BrnDeformationManager.cpp:707
void BrnPhysics::Deformation::DeformationManager::Update(InputBuffer *  lpSimInput, OutputBuffer *  lpSimOutput, const InputBuffer *  lpPhysicsModuleInputBuffer, OutputBuffer *  lpPhysicsModuleOutputBuffer, PotentialContactInterface *  lpPotentialContactsInterface, VecFloat  lvfTimeStep, BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:712
		BitArray<28u> lUpdateIKNeeded;

		// BrnDeformationManager.cpp:713
		int32_t liNumModelsRequiringIKUpdate;

		// BrnDeformationManager.cpp:714
		int32_t liBodyIndex;

		// BrnDeformationManager.cpp:753
		bool lbUpdatePlayerIK;

		// BrnDeformationManager.cpp:776
		int32_t liNumBodiesToUpdateIK;

		// BrnDeformationManager.cpp:778
		int32_t liUpdatedBodies;

		// BrnDeformationManager.cpp:808
		int32_t liNumModels;

	}
	DeformableObject::ClearDeformedThisFrameFlag(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<28u>::SetBit(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDeformationManager.cpp:838
void BrnPhysics::Deformation::DeformationManager::UpdatePostPhysics(const OutputBuffer *  lpSimModuleOutputBuffer, OutputBuffer *  lpPhysicsModuleOutputBuffer, ContactSpyData *  lpContactSpyData, IOBufferStack *  lpIOStack, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:844
		DeformationOutputInterface * lpOutputInterface;

		// BrnDeformationManager.cpp:845
		OutputBuffer::SceneInputInterface * lpSceneInterface;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnDeformationManager.cpp:859
		int32_t liBodyIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	DetachedPartManager::AddPartsToScene(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformationManager.cpp:2073
void BrnPhysics::Deformation::DeformationManager::UpdateTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformationManager.cpp:337
void BrnPhysics::Deformation::DeformationManager::ProcessRemoveDeformationModelEvents(InputBuffer *  lpSimInput, const DeformationInputInterface *  lpInputInterface, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:340
		RemoveDeformationModelEvent lEvent;

		// BrnDeformationManager.cpp:341
		const DeformationInputInterface::RemoveDeformationModelEventQueue * lpRemoveEvents;

		// BrnDeformationManager.cpp:342
		int32_t i;

	}
	{
		// BrnDeformationManager.cpp:350
		int32_t liModelIndex;

		// BrnDeformationManager.cpp:352
		EntityId lHandlingBodyEntityId;

		CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::GetEvent(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		FindModelIndexByEntityID(/* parameters */);
		{
			// BrnDeformationManager.cpp:372
			uint16_t lu16VehicleGlobalIndex;

			CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
			CgsSceneManager::EntityId::SetInvalid(/* parameters */);
			{
				// BrnDeformationManager.cpp:387
				uint16_t lu16TrafficPhysicsIndex;

			}
		}
	}
	{
	}
	{
		// BrnDeformationManager.cpp:379
		uint16_t lu16RaceCarIndex;

	}
}

// BrnDeformationManager.cpp:239
void BrnPhysics::Deformation::DeformationManager::ProcessAddDeformationModelEvents(InputBuffer *  lpSimInput, const DeformationInputInterface *  lpInputInterface, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:242
		AddDeformationModelEvent lEvent;

		// BrnDeformationManager.cpp:243
		const DeformationInputInterface::AddDeformationModelEventQueue * lpAddEvents;

		// BrnDeformationManager.cpp:244
		int32_t i;

		// BrnDeformationManager.cpp:245
		int32_t lModelIndex;

		{
			// BrnDeformationManager.cpp:253
			EntityId lHandlingBodyEntityId;

			// BrnDeformationManager.cpp:267
			ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> lResPtr;

			// BrnDeformationManager.cpp:268
			StreamedDeformationSpec * lpSpec;

			CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::GetEvent(/* parameters */);
			operator=(/* parameters */);
			CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
			FindModelIndexByEntityID(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			{
			}
		}
	}
	CgsContainers::BitArray<28u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnDeformationManager.cpp:264
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::GetMemoryResource(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsContainers::BitArray<28u>::SetBit(/* parameters */);
	{
		// BrnDeformationManager.cpp:295
		uint16_t lu16TrafficPhysicsIndex;

		// BrnDeformationManager.cpp:296
		uint16_t lu16TrafficGlobalIndex;

	}
	{
		// BrnDeformationManager.cpp:315
		int32_t liSensor;

	}
	~ResourcePtr(/* parameters */);
	{
	}
	{
		// BrnDeformationManager.cpp:285
		uint16_t lu16RaceCarIndex;

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
	}
}

// BrnDeformationManager.cpp:605
void BrnPhysics::Deformation::DeformationManager::ResetDeformation(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:608
		uint32_t liBodyIndex;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
}

// BrnDeformationManager.cpp:526
void BrnPhysics::Deformation::DeformationManager::ProcessDebugResetDeformationModels(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:528
		int32_t liModelIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	DeformableObject::ResetDeformationNextUpdate(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnDeformationManager.cpp:500
void BrnPhysics::Deformation::DeformationManager::ProcessResetDeformationModelEvent(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface, EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:502
		int32_t liModelIndex;

		FindModelIndexByEntityID(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	{
		// BrnDeformationManager.cpp:505
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformationManager.cpp:452
void BrnPhysics::Deformation::DeformationManager::ProcessDeactivateDeformationModelEvents(InputBuffer *  lpSimInput, const DeformationInputInterface *  lpInputInterface, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:454
		DeactivateDeformationModelEvent lEvent;

		// BrnDeformationManager.cpp:455
		const DeformationInputInterface::DeactivateDeformationModelEventQueue * lpDeactivateEvents;

		// BrnDeformationManager.cpp:457
		int32_t i;

		// BrnDeformationManager.cpp:458
		int32_t liModelIndex;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::GetEvent(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	FindModelIndexByEntityID(/* parameters */);
	{
		// BrnDeformationManager.cpp:470
		bool lbForceFullIKSolve;

		CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	{
	}
}

// BrnDeformationManager.cpp:559
void BrnPhysics::Deformation::DeformationManager::ProcessEvents(InputBuffer *  lpSimInput, DeformationInputInterface *  lpInputInterface, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:585
		BrnPhysics::Deformation::DeformableObject * lpPlayerModel;

		GetPlayerCarModel(/* parameters */);
	}
	DeformationInputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformationManager.cpp:635
void BrnPhysics::Deformation::DeformationManager::PostSceneUpdate(InputBuffer *  lpSimInput, DeformationInputInterface *  lpInputInterface, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
}

// BrnDeformationManager.cpp:1064
void BrnPhysics::Deformation::DeformationManager::OutputData(DeformationOutputInterfaceForEntityModules *  lpOutput, DeformationOutputInterface *  lpDefOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:1067
		uint32_t liBodyIndex;

		DeformationOutputInterfaceForEntityModules::AddSkinData(/* parameters */);
		DeformableObject::GetLocatorData(/* parameters */);
		DeformationOutputInterfaceForEntityModules::AddLocatorData(/* parameters */);
		DeformableObject::GetLocatorData(/* parameters */);
		DeformationOutputInterface::AddLocatorData(/* parameters */);
	}
	DeformableObject::GetOffset_ScratchArray(/* parameters */);
	DetachedPartManager::OutputEvents(/* parameters */);
	{
		// BrnDeformationManager.cpp:1088
		uint32_t liBodyIndex;

	}
	DeformableObject::ResetEntitySphereSize(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
}

// BrnDeformationManager.cpp:2010
void BrnPhysics::Deformation::DeformationManager::DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpStream, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2012
		int32_t liModelIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
}

// BrnDeformationManager.cpp:2042
void BrnPhysics::Deformation::DeformationManager::DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpStream, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.cpp:2044
		int32_t liModelIndex;

	}
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
}

// _built-in_
namespace :: {
	// BrnDeformationManager.cpp:32
	extern int32_t giTrace;

	// BrnDeformationManager.cpp:2435
	const VecFloat KF_MAX_PENETRATION_FIX_PER_FRAME;

}

// BrnDeformationManager.cpp:27
