// JointUtilities.cpp:43
void BrnPhysics::JointUtilities::ConstructHingeFrames(const rw::math::vpu::Matrix44Affine &  lParentTransform, const rw::math::vpu::Matrix44Affine &  lChildTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos, const rw::math::vpu::Vector3  lHingeAxis, const rw::math::vpu::Vector3  lHingeDirection, float32_t  lfMaxAngle, JointFrames *  lpJointFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JointUtilities.cpp:45
		JointHelper lJointHelper;

		// JointUtilities.cpp:48
		Matrix44Affine lJointTransform;

		// JointUtilities.cpp:57
		Matrix44Affine lParentToJointTransform;

		// JointUtilities.cpp:58
		Matrix44Affine lChildToJointTransform;

		// JointUtilities.cpp:61
		Matrix44Affine lRot;

		rw::math::vpu::Cross(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44AffineFromEulerXYZ(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	vec_madd(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
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
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	rw::math::vpu(/* parameters */);
	{
	}
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
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
}

// JointUtilities.cpp:95
void BrnPhysics::JointUtilities::ConstructHinge(const rw::math::vpu::Matrix44Affine &  lParentTransform, const rw::math::vpu::Matrix44Affine &  lChildTransform, const rw::math::vpu::Vector3  lWorldSpaceJointPos, const rw::math::vpu::Vector3  lHingeAxis, const rw::math::vpu::Vector3  lHingeDirection, float32_t  lfMaxAngle, JointLimits *  lpJointLimits, JointFrames *  lpJointFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JointUtilities.cpp:97
		JointHelper lJointHelper;

		// JointUtilities.cpp:100
		const float32_t KF_MAX_JOINT_SIZE;

		// JointUtilities.cpp:108
		Matrix44Affine lJointTransform;

		// JointUtilities.cpp:117
		Matrix44Affine lParentToJointTransform;

		// JointUtilities.cpp:118
		Matrix44Affine lChildToJointTransform;

		// JointUtilities.cpp:121
		Matrix44Affine lRot;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44AffineFromEulerXYZ(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::physics::JointFrames::SetChildAngularFrame(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::physics::JointFrames::SetParentAngularFrame(/* parameters */);
	{
	}
	rw::math::vpu(/* parameters */);
	{
	}
	{
		{
		}
	}
	{
	}
	{
		{
		}
	}
	rw::physics::JointLimits::SetSwingAngle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::physics::JointLimits::SetSwingType(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::physics::JointFrames::SetParentLinearFrame(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::JointLimits::SetTwistType(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	{
		{
		}
	}
	rw::physics::JointLimits::SetSwingVelocityLimit(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	rw::physics::JointLimits::SetTwistAngle(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	rw::physics::JointLimits::SetTwistVelocityLimit(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
}

