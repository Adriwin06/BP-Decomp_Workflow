// CgsPhysicsSimulationModuleIO.cpp:121
void CgsPhysics::PhysicsSimulationIO::InputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>::Clear(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:207
void CgsPhysics::PhysicsSimulationIO::OutputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::Clear(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:359
void CgsPhysics::PhysicsSimulationIO::InAddJoint::ConstructHinge(JointId  lId, RigidBodyId  lParentBodyId, RigidBodyId  lChildBodyId, const rw::math::vpu::Matrix44Affine &  lParentTransform, const rw::math::vpu::Matrix44Affine &  lChildTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos, const rw::math::vpu::Vector3  lHingeAxis, const rw::math::vpu::Vector3  lHingeCenter, float32_t  lfMaxAngle, bool  lbSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.cpp:361
		JointFrames * lpJointFrames;

		// CgsPhysicsSimulationModuleIO.cpp:362
		JointLimits * lpJointLimits;

		// CgsPhysicsSimulationModuleIO.cpp:363
		JointHelper lJointHelper;

		// CgsPhysicsSimulationModuleIO.cpp:366
		const float32_t KF_MAX_JOINT_SIZE;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointLimits>::GetObjectPointer(/* parameters */);
	rw::physics::JointLimits::SetSwingType(/* parameters */);
	rw::physics::JointLimits::SetSwingAngle(/* parameters */);
	rw::physics::JointLimits::SetTwistType(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_sel(/* parameters */);
	{
		// CgsPhysicsSimulationModuleIO.cpp:401
		Matrix44Affine lJointTransform;

		// CgsPhysicsSimulationModuleIO.cpp:410
		Matrix44Affine lParentToJointTransform;

		// CgsPhysicsSimulationModuleIO.cpp:411
		Matrix44Affine lChildToJointTransform;

		// CgsPhysicsSimulationModuleIO.cpp:414
		Matrix44Affine lRot;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointFrames>::GetObjectPointer(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::physics::JointLimits::SetTwistAngle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::physics::JointLimits::SetSwingVelocityLimit(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44AffineFromEulerXYZ(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetTwistVelocityLimit(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	vec_madd(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	std(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
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
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	rw::math::vpu(/* parameters */);
	{
		{
		}
	}
	{
	}
	{
	}
	{
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::JointFrames::SetParentLinearFrame(/* parameters */);
	rw::math::vpu(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:225
void CgsPhysics::PhysicsSimulationIO::InAddJoint::ConstructBallAndSocket(JointId  lId, RigidBodyId  lParentBodyId, RigidBodyId  lChildBodyId, const rw::math::vpu::Matrix44Affine &  lParentTransform, const rw::math::vpu::Matrix44Affine &  lChildTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos, bool  lbSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.cpp:227
		JointFrames * lpJointFrames;

		// CgsPhysicsSimulationModuleIO.cpp:228
		JointLimits * lpJointLimits;

		// CgsPhysicsSimulationModuleIO.cpp:229
		JointHelper lJointHelper;

		rw::physics::JointLimits::SetTwistType(/* parameters */);
	}
	rw::physics::JointLimits::SetSwingAngle(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	vec_add(/* parameters */);
	{
		{
			{
			}
		}
	}
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointLimits>::GetObjectPointer(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::JointLimits::SetSwingType(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointFrames>::GetObjectPointer(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetTwistAngle(/* parameters */);
	rw::physics::JointLimits::SetTwistVelocityLimit(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetSwingVelocityLimit(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::physics::JointHelper::SetReferenceFrame(/* parameters */);
	rw::physics::JointHelper::SetupPosition(/* parameters */);
	rw::physics::JointHelper::SetupLinearConstraintFrame(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::physics::JointHelper::Inverse(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::physics::JointHelper::Inverse(/* parameters */);
	rw::physics::JointFrames::SetParentLinearFrame(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::physics::JointHelper::SetupAngularConstraintFrame(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	rw::physics::JointHelper::Inverse(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::JointHelper::Inverse(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	rw::math::vpu(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:44
void CgsPhysics::PhysicsSimulationIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::SetEventPointer(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:84
void CgsPhysics::PhysicsSimulationIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:156
void CgsPhysics::PhysicsSimulationIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::SetEventPointer(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:182
void CgsPhysics::PhysicsSimulationIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
}

// CgsPhysicsSimulationModuleIO.cpp:268
void CgsPhysics::PhysicsSimulationIO::InAddJoint::ConstructBallAndSocket(JointId  lId, RigidBodyId  lParentBodyId, RigidBodyId  lChildBodyId, const rw::math::vpu::Matrix44Affine &  lParentTransform, const rw::math::vpu::Matrix44Affine &  lChildTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos, const rw::math::vpu::Vector3  lConeDirection, float32_t  lfConeAngle, bool  lbSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.cpp:270
		JointFrames * lpJointFrames;

		// CgsPhysicsSimulationModuleIO.cpp:271
		JointLimits * lpJointLimits;

		// CgsPhysicsSimulationModuleIO.cpp:272
		JointHelper lJointHelper;

		// CgsPhysicsSimulationModuleIO.cpp:275
		const float32_t KF_MAX_JOINT_SIZE;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointLimits>::GetObjectPointer(/* parameters */);
	rw::physics::JointLimits::SetSwingAngle(/* parameters */);
	rw::physics::JointLimits::SetTwistType(/* parameters */);
	rw::physics::JointLimits::SetSwingType(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	{
		// CgsPhysicsSimulationModuleIO.cpp:310
		Matrix44Affine lJointTransform;

		// CgsPhysicsSimulationModuleIO.cpp:321
		Matrix44Affine lParentToJointTransform;

		// CgsPhysicsSimulationModuleIO.cpp:322
		Matrix44Affine lChildToJointTransform;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::physics::JointLimits::SetSwingVelocityLimit(/* parameters */);
	NonConstructedClassContainer<rw::physics::JointFrames>::GetObjectPointer(/* parameters */);
	vec_ctf(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::physics::JointLimits::SetTwistAngle(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	rw::physics::JointLimits::SetTwistVelocityLimit(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::physics::JointFrames::SetParentLinearFrame(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	{
		{
		}
	}
	{
	}
	{
	}
	{
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
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
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

