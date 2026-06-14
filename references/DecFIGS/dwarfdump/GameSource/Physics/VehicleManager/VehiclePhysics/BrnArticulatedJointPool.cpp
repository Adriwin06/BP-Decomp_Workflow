// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnArticulatedJointPool.cpp:32
		const bool KB_USE_JOINT_SPY;

	}

}

// BrnArticulatedJointPool.cpp:105
void BrnPhysics::Vehicle::ArticulatedJointPool::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArticulatedJointPool.cpp:123
void BrnPhysics::Vehicle::ArticulatedJointPool::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArticulatedJointPool.cpp:88
void BrnPhysics::Vehicle::ArticulatedJointPool::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArticulatedJointPool.cpp:53
void BrnPhysics::Vehicle::ArticulatedJointPool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnArticulatedJointPool.cpp:61
		uint16_t luJoint;

	}
	CgsContainers::BitArray<10u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<10u>::UnSetAll(/* parameters */);
}

// BrnArticulatedJointPool.cpp:221
void BrnPhysics::Vehicle::ArticulatedJointPool::ConstructArticulatedJoint(InAddJoint *  lpOutAddJointEvent, ArticulatedJointId  lJointId, RigidBodyId  lCabRigidBodyId, RigidBodyId  lTrailerRigidBodyId, const rw::math::vpu::Matrix44Affine &  lCabTransform, const rw::math::vpu::Matrix44Affine &  lTrailerTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnArticulatedJointPool.cpp:226
		Vector3 lHingeAxis;

		// BrnArticulatedJointPool.cpp:227
		Vector3 lHingeCenter;

		// BrnArticulatedJointPool.cpp:228
		Matrix44Affine lParentToJointTransform;

		// BrnArticulatedJointPool.cpp:229
		Matrix44Affine lChildToJointTransform;

		// BrnArticulatedJointPool.cpp:230
		Matrix44Affine lJointTransform;

		// BrnArticulatedJointPool.cpp:231
		JointFrames * lpJointFrames;

		// BrnArticulatedJointPool.cpp:232
		JointLimits * lpJointLimits;

		// BrnArticulatedJointPool.cpp:233
		JointHelper lJointHelper;

	}
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointLimits>::GetObjectPointer(/* parameters */);
	rw::math::vpu::Matrix44Affine::ZAxis(/* parameters */);
	rw::physics::JointLimits::SetSwingAngle(/* parameters */);
	rw::math::vpu::Matrix44Affine::YAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::physics::JointLimits::SetSwingType(/* parameters */);
	rw::math::fpu::DegToRad<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointFrames>::GetObjectPointer(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetSwingVelocityLimit(/* parameters */);
	rw::physics::JointLimits::SetTwistType(/* parameters */);
	rw::math::fpu::DegToRad<float>(/* parameters */);
	rw::physics::JointLimits::SetTwistAngle(/* parameters */);
	{
		// BrnArticulatedJointPool.cpp:274
		Matrix44Affine lPreRotate;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetTwistVelocityLimit(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		// BrnArticulatedJointPool.cpp:298
		uint16_t lu16JointIndex;

	}
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::JointFrames::SetParentLinearFrame(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		{
		}
	}
	rw::physics::JointLimits::SetTwistType(/* parameters */);
}

// BrnArticulatedJointPool.cpp:429
void BrnPhysics::Vehicle::ArticulatedJointPool::SendCreateRemoveJointEvents(VehicleOutputRequestInterface *  lpRequestInterface, const ArticulatedJointCreateBuffer *  lpJointWorkingBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnArticulatedJointPool.cpp:434
		const ArticulatedJointCreateBuffer::CreatedJointBitArray * lpCreatedJointBitArray;

		// BrnArticulatedJointPool.cpp:435
		const ArticulatedJointCreateBuffer::RemovedJointBitArray * lpRemovedJointBitArray;

		// BrnArticulatedJointPool.cpp:437
		int32_t liCreatedJoint;

		// BrnArticulatedJointPool.cpp:438
		int32_t liRemovedJoint;

	}
	ArticulatedJointCreateBuffer::GetCreatedJointBitArray(/* parameters */);
	ArticulatedJointCreateBuffer::GetRemovedJointBitArray(/* parameters */);
	CgsContainers::BitArray<10u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<10u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnArticulatedJointPool.cpp:452
		const const InAddJoint & lAddJointEvent;

		ArticulatedJointCreateBuffer::GetCreateJointEvent(/* parameters */);
		VehicleOutputRequestInterface::AddJoint(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::AddEvent(/* parameters */);
	}
	CgsContainers::BitArray<10u>::GetNextNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnArticulatedJointPool.cpp:464
		const const InRemoveJoint & lRemoveJointEvent;

		ArticulatedJointCreateBuffer::GetRemoveJointEvent(/* parameters */);
		VehicleOutputRequestInterface::RemoveJoint(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::AddEvent(/* parameters */);
	}
	CgsContainers::BitArray<10u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
}

// BrnArticulatedJointPool.cpp:357
void BrnPhysics::Vehicle::ArticulatedJointPool::GetIndexOfOtherHalf(int32_t  liJointIndex, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType  leArticulatedType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsJointInUse(/* parameters */);
	CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
	GetJointId(/* parameters */);
	ArticulatedJointId::GetCabEntityId(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetJointId(/* parameters */);
	GetJointId(/* parameters */);
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
}

// BrnArticulatedJointPool.cpp:147
void BrnPhysics::Vehicle::ArticulatedJointPool::CreateJoint(ArticulatedJointCreateBuffer *  lpJointWorkingBuffer, const RigidBodyId  lCabRigidBodyId, const RigidBodyId  lTrailerRigidBodyId, const rw::math::vpu::Matrix44Affine &  lCabWorldTransform, const rw::math::vpu::Matrix44Affine &  lTrailerWorldTransform, const rw::math::vpu::Vector3  lArticulationPointWorldSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnArticulatedJointPool.cpp:154
		int32_t liNewJointIndex;

		// BrnArticulatedJointPool.cpp:155
		ArticulatedJointId lJointId;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::BitArray<10u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnArticulatedJointPool.cpp:162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	ArticulatedJointId::Set(/* parameters */);
	CgsContainers::BitArray<10u>::SetBit(/* parameters */);
	CgsPhysics::JointId::SetUserIDB(/* parameters */);
	{
		// BrnArticulatedJointPool.cpp:178
		InAddJoint lAddJointEvent;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	ArticulatedJointCreateBuffer::FlagJointToBeCreated(/* parameters */);
	CgsContainers::BitArray<10u>::SetBit(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnArticulatedJointPool.cpp:320
void BrnPhysics::Vehicle::ArticulatedJointPool::RemoveJoint(ArticulatedJointCreateBuffer *  lpJointWorkingBuffer, int32_t  liJointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
	{
		// BrnArticulatedJointPool.cpp:330
		InRemoveJoint lRemoveJointEvent;

		GetJointId(/* parameters */);
		ArticulatedJointCreateBuffer::FlagJointToBeRemoved(/* parameters */);
		CgsContainers::BitArray<10u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<10u>::SetBit(/* parameters */);
	}
	CgsContainers::BitArray<10u>::UnSetBit(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnArticulatedJointPool.cpp:324
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
}

// BrnArticulatedJointPool.cpp:391
void BrnPhysics::Vehicle::ArticulatedJointPool::RemoveBrokenJointsFromSimulation(ArticulatedJointCreateBuffer *  lpJointWorkingBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnArticulatedJointPool.cpp:395
		int32_t liUsedJoint;

	}
	CgsContainers::BitArray<10u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<10u>::UnSetAll(/* parameters */);
	{
	}
	IsJointInUse(/* parameters */);
	CgsContainers::BitArray<10u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnArticulatedJointPool.cpp:402
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
}

