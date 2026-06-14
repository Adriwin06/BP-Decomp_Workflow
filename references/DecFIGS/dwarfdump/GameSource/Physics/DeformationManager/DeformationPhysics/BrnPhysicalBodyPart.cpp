// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicalBodyPart.cpp:28
		extern float32_t KF_PART_LINEAR_DRAG;

		// BrnPhysicalBodyPart.cpp:29
		extern float32_t KF_PART_ANGULAR_DRAG;

		// BrnPhysicalBodyPart.cpp:30
		extern float32_t KF_PART_MAX_LINEAR_VELOCITY;

		// BrnPhysicalBodyPart.cpp:31
		extern float32_t KF_PART_MAX_ANGULAR_VELOCITY;

		// BrnPhysicalBodyPart.cpp:32
		extern float32_t KF_PART_MASS;

		// BrnPhysicalBodyPart.cpp:33
		extern float32_t KF_PART_INERTIA_MULTIPLIER;

		// BrnPhysicalBodyPart.cpp:915
		extern VecFloat K_LIMIT_STRESS_MULTIPLIER;

		// BrnPhysicalBodyPart.cpp:916
		extern VecFloat K_COLLISION_STRESS_MULTIPLIER;

		// BrnPhysicalBodyPart.cpp:43
		const rw::math::vpu::Vector3 K_PART_INERTIA_PADDING;

		// BrnPhysicalBodyPart.cpp:273
		const rw::math::vpu::Vector3 KV_MIN_BBOX_SIZE;

		// BrnPhysicalBodyPart.cpp:327
		const rw::math::vpu::Vector3 KV_BIG_VECTOR;

		// BrnPhysicalBodyPart.cpp:328
		const rw::math::vpu::Vector3 K_MIN_BOX_DIMENSIONS;

		// BrnPhysicalBodyPart.cpp:727
		const VecFloat KVF_HINGED_PART_GRAVITY;

		// BrnPhysicalBodyPart.cpp:728
		const VecFloat KVF_JOINT_RESTITUTION;

		// BrnPhysicalBodyPart.cpp:729
		const VecFloat KVF_JOINT_PENETRATION_RESOLUTION;

		// BrnPhysicalBodyPart.cpp:730
		const VecFloat KVF_COLLISION_DISTANCE_RESOLVE_MODIFIER;

		// BrnPhysicalBodyPart.cpp:731
		const VecFloat KVF_COLLISION_DISTANCE_LOWER_LIMIT;

		// BrnPhysicalBodyPart.cpp:864
		const VecFloat KVF_MIN_COLLISION_MAGNITUDE;

		// BrnPhysicalBodyPart.cpp:921
		const VecFloat KVF_MIN_ROTATION_FOR_DETACHMENT;

	}

}

// BrnPhysicalBodyPart.cpp:580
void BrnPhysics::Deformation::PhysicalBodyPart::LimitVelocities(VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:582
		bool lbRequiresUpdate;

		// BrnPhysicalBodyPart.cpp:591
		const float32_t kfMAX_LIN_VEL_AT_60;

		// BrnPhysicalBodyPart.cpp:592
		const float32_t kfMAX_ANG_VEL_AT_60;

		// BrnPhysicalBodyPart.cpp:593
		const float32_t kfMAX_LIN_VEL_AT_INF;

		// BrnPhysicalBodyPart.cpp:594
		const float32_t kfMAX_ANG_VEL_AT_INF;

		// BrnPhysicalBodyPart.cpp:595
		const float32_t kfONE_OVER_60;

		// BrnPhysicalBodyPart.cpp:596
		const float32_t kfLIN_VEL_GRADIENT;

		// BrnPhysicalBodyPart.cpp:597
		const float32_t kfANG_VEL_GRADIENT;

		// BrnPhysicalBodyPart.cpp:598
		const float32_t kfPROPORTION_OF_MAX_TO_CAP_TO;

		// BrnPhysicalBodyPart.cpp:600
		float32_t lfMaxLinVel;

		// BrnPhysicalBodyPart.cpp:601
		float32_t lfMaxAngVel;

		// BrnPhysicalBodyPart.cpp:602
		float32_t lfMaxLinVelSquared;

		// BrnPhysicalBodyPart.cpp:603
		float32_t lfMaxAngVelSquared;

		// BrnPhysicalBodyPart.cpp:604
		float32_t lfTimeStep;

		// BrnPhysicalBodyPart.cpp:619
		Vector3 lLinVel;

		// BrnPhysicalBodyPart.cpp:626
		Vector3 lAngVel;

	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:670
void BrnPhysics::Deformation::PhysicalBodyPart::AddContact(const const PotentialContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:672
		Matrix44Affine lPartTransform;

		// BrnPhysicalBodyPart.cpp:673
		Matrix44Affine lVehicleDeltaTransform;

		// BrnPhysicalBodyPart.cpp:674
		Vector3 lNewPointOnA;

		// BrnPhysicalBodyPart.cpp:694
		Vector3 lResolve;

		// BrnPhysicalBodyPart.cpp:698
		VecFloat lResolveMagnitudeSquared;

		// BrnPhysicalBodyPart.cpp:699
		VecFloat lOldResolveMagnitudeSquared;

		// BrnPhysicalBodyPart.cpp:700
		MaskScalar lBiggerResolve;

		// BrnPhysicalBodyPart.cpp:701
		Vector3 lNewResolve;

		// BrnPhysicalBodyPart.cpp:705
		VecFloat lNewMagSq;

		// BrnPhysicalBodyPart.cpp:706
		VecFloat lCurrentMagSq;

		// BrnPhysicalBodyPart.cpp:709
		MaskScalar lFurtherPoint;

		// BrnPhysicalBodyPart.cpp:710
		MaskScalar lFirstContact;

		// BrnPhysicalBodyPart.cpp:711
		MaskScalar lStorePoint;

		// BrnPhysicalBodyPart.cpp:712
		Vector3 lPointOnAToStore;

		// BrnPhysicalBodyPart.cpp:713
		VecFloat lNumCollisionsToStore;

	}
	DeformableObject::GetTransformDelta(/* parameters */);
	GetRigidBodyTransform(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:384
void BrnPhysics::Deformation::PhysicalBodyPart::CalculateAABBExtents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPhysicalBodyPart.cpp:404
	Vector3 lAABBDimensions;

	{
		// BrnPhysicalBodyPart.cpp:387
		Matrix44Affine lBoxOrientation;

		// BrnPhysicalBodyPart.cpp:393
		Vector3[8] laCorners;

		// BrnPhysicalBodyPart.cpp:404
		Vector3 lAABBDimensions;

		rw::math::vpu::Vector3::GetX(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:406
			int32_t liCornerIndex;

			rw::math::vpu::Max(/* parameters */);
		}
		rw::math::vpu::Abs(/* parameters */);
	}
}

// BrnPhysicalBodyPart.cpp:646
void BrnPhysics::Deformation::PhysicalBodyPart::PostVehicleUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:648
		Matrix44Affine lTransform;

		DeformableObject::GetTransformDelta(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
	}
	rw::math::vpu::operator*=(/* parameters */);
	Vehicle::VehiclePhysics::GetTransformDelta(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	ExternallySimulatedBody::SetTransform(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:115
void BrnPhysics::Deformation::PhysicalBodyPart::SetJoinedToVehicle(const rw::math::vpu::Vector3  lLocalJointPosition, const rw::math::vpu::Vector3  lInitialPartPosition, const VecFloat  lvfMaxAngle, int32_t  liJointsTagPointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:117
		VecFloat lvfJointPosition;

		IKBodyPart::GetActiveJointSpec(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:184
void BrnPhysics::Deformation::PhysicalBodyPart::CalculateSkinnedPoint(const const BBoxPointSkinData &  lPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPhysicalBodyPart.cpp:187
	Vector3 lResult;

	{
		// BrnPhysicalBodyPart.cpp:187
		Vector3 lResult;

		// BrnPhysicalBodyPart.cpp:209
		VectorIntrinsicUnion::VectorIntrinsic lvResult;

		{
			// BrnPhysicalBodyPart.cpp:192
			int32_t liNumTagPoints;

			IKBodyPart::GetNumberOfTagPoints(/* parameters */);
		}
	}
	{
		// BrnPhysicalBodyPart.cpp:193
		int32_t liBone;

		{
			// BrnPhysicalBodyPart.cpp:195
			Vector3 lOffset;

		}
	}
	IKBodyPart::GetDrivenPoint(/* parameters */);
	IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	IKBodyPart::GetTagPoint(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:215
		int32_t liNumTagPoints;

		// BrnPhysicalBodyPart.cpp:219
		VectorIntrinsicUnion::VectorIntrinsic lvPointWeights;

		// BrnPhysicalBodyPart.cpp:220
		VectorIntrinsicUnion::VectorIntrinsic lvPointWeight0;

		// BrnPhysicalBodyPart.cpp:221
		VectorIntrinsicUnion::VectorIntrinsic lvPointWeight1;

		// BrnPhysicalBodyPart.cpp:222
		VectorIntrinsicUnion::VectorIntrinsic lvPointWeight2;

		// BrnPhysicalBodyPart.cpp:224
		Vector3 lOffset;

		IKBodyPart::GetNumberOfTagPoints(/* parameters */);
		rw::math::vpl::VecLoadLeftAligned(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecSplat_Word<2>(/* parameters */);
		rw::math::vpl::VecSplat_Word<1>(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpl::VecAdd(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:257
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	IKBodyPart::GetTagPoint(/* parameters */);
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	IKBodyPart::GetTagPoint(/* parameters */);
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	IKBodyPart::GetTagPoint(/* parameters */);
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPart.cpp:333
void BrnPhysics::Deformation::PhysicalBodyPart::CalculateBoundingBoxExtents(const Vector3 &  lBoundingBoxMin, const Vector3 &  lBoundingBoxMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:335
		const IKBodyPartSpec * lpSpec;

		// BrnPhysicalBodyPart.cpp:337
		const BodyPartBBoxSpec * lpBoxSpec;

		// BrnPhysicalBodyPart.cpp:344
		Vector3 lPointPos;

		// BrnPhysicalBodyPart.cpp:371
		Vector3 lBoxDimensions;

		rw::math::vpu::operator-(/* parameters */);
	}
	IKBodyPartSpec::GetBBoxSpec(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:345
		int32_t liCorner;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:310
void BrnPhysics::Deformation::PhysicalBodyPart::UpdateBoundingBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:312
		Vector3 lBoundingBoxMin;

		// BrnPhysicalBodyPart.cpp:313
		Vector3 lBoundingBoxMax;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:276
void BrnPhysics::Deformation::PhysicalBodyPart::CalcBoundingBox(const rw::math::vpu::Matrix44Affine &  lVehicleTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:278
		Vector3 lBoundingBoxMin;

		// BrnPhysicalBodyPart.cpp:279
		Vector3 lBoundingBoxMax;

		// BrnPhysicalBodyPart.cpp:292
		Vector3 lBoundingBoxPos;

		// BrnPhysicalBodyPart.cpp:296
		Matrix44Affine lPartGraphicsTransform;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	IKBodyPartSpec::GetPartGraphicsTransform(/* parameters */);
	DeformableObject::GetRigidBodySpecPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:734
void BrnPhysics::Deformation::PhysicalBodyPart::UpdateJoint(VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:736
		Matrix44Affine lVehicleTransform;

		// BrnPhysicalBodyPart.cpp:737
		Matrix44Affine lInverseVehicleTransform;

		// BrnPhysicalBodyPart.cpp:738
		Matrix44Affine lLocalJointTransform;

		// BrnPhysicalBodyPart.cpp:739
		Matrix44Affine lPartTransform;

		// BrnPhysicalBodyPart.cpp:740
		const DeformationJointSpec * lpJointSpec;

		// BrnPhysicalBodyPart.cpp:755
		Vector3 lJointPosition;

		// BrnPhysicalBodyPart.cpp:761
		Vector3 lWorldJointDirection;

		// BrnPhysicalBodyPart.cpp:762
		VecFloat lvfAcceleration;

		// BrnPhysicalBodyPart.cpp:770
		Vector3 lWorldVelocity;

		// BrnPhysicalBodyPart.cpp:771
		VecFloat lvfVelocityInJointDirection;

		// BrnPhysicalBodyPart.cpp:772
		VecFloat lvfAccelFromMomentumChange;

		// BrnPhysicalBodyPart.cpp:774
		Vector3 lWorldPerpVec;

		// BrnPhysicalBodyPart.cpp:787
		VecFloat lvfAccelerationFromAirResistance;

		// BrnPhysicalBodyPart.cpp:792
		VecFloat lvfVelocity;

		// BrnPhysicalBodyPart.cpp:797
		VecFloat lvfRotation;

		// BrnPhysicalBodyPart.cpp:812
		Matrix44Affine lWorldJointRotation;

		// BrnPhysicalBodyPart.cpp:816
		Vector3 lWorldPenetration;

		// BrnPhysicalBodyPart.cpp:817
		VecFloat lvfPenetrationRotation;

		// BrnPhysicalBodyPart.cpp:821
		Vector3 lLocalCollisionPoint;

		// BrnPhysicalBodyPart.cpp:822
		VecFloat lvfCollisionDistanceFromJoint;

		// BrnPhysicalBodyPart.cpp:823
		VecFloat lvfCollisionDistanceFromJointAboveLimit;

		// BrnPhysicalBodyPart.cpp:824
		VecFloat lvfCollisionDistanceModifier;

		// BrnPhysicalBodyPart.cpp:832
		VecFloat lvfMaxJointAngle;

		// BrnPhysicalBodyPart.cpp:833
		VecFloat lvfJointLimitError;

		// BrnPhysicalBodyPart.cpp:851
		Vector3 lComToJointOffset;

		GetRigidBodyTransform(/* parameters */);
	}
	IKBodyPart::GetActiveJointSpec(/* parameters */);
	IKBodyPartSpec::GetJointSpec(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	IKBodyPart::GetTagPoint(/* parameters */);
	DeformableObject::GetLocalVelocityFromLocalPoint(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	operator=<VectorAxisW>(/* parameters */);
	operator=<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator< <VectorAxisW>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	vec_and(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_xor(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:841
		VecFloat lvfCollisionMagnitude;

		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
	}
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	vec_nmsub(/* parameters */);
	{
	}
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
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
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	ExternallySimulatedBody::SetTransform(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:513
void BrnPhysics::Deformation::PhysicalBodyPart::AddToSim(InputBuffer *  lpSimInput, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const rw::math::vpu::Vector3  lInitialLinearVelocity, const rw::math::vpu::Vector3  lInitialAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:515
		InAddRigidBody lAddRigidBodyEvent;

		// BrnPhysicalBodyPart.cpp:518
		NewRigidBody * lpRigidBody;

		// BrnPhysicalBodyPart.cpp:534
		Vector3 lAABBDimensions;

		// BrnPhysicalBodyPart.cpp:536
		Vector3 lInertia;

		// BrnPhysicalBodyPart.cpp:550
		Vector3 lInverseInertia;

		// BrnPhysicalBodyPart.cpp:556
		Matrix33 lMat;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	NonConstructedClassContainer<CgsPhysics::NewRigidBody>::GetObjectPointer(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	GetRigidBodyTransform(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	{
	}
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	ExternalPhysicsBody::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddRigidBodyQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalBodyPart.cpp:548
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPart.cpp:492
void BrnPhysics::Deformation::PhysicalBodyPart::RemoveJointAndAddToSim(InputBuffer *  lpSimInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:494
		Matrix44Affine lVehicleTransform;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	DeformableObject::GetTransform(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:867
void BrnPhysics::Deformation::PhysicalBodyPart::AddContactSpy(ContactSpyData *  lpContactSpyData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator><VectorAxisW>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::GetPlus(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:872
		HingedPartContact lContact;

		CgsSceneManager::EntityId::Set(/* parameters */);
		DeformableObject::GetLocalVelocityFromWorldPoint(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		BrnWorld::CollisionTag::Construct(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
		{
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:887
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:888
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:889
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:890
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:891
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:892
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		}
		rw::math::vpu::operator==(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:893
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::operator==(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:894
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::operator==(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:895
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::operator==(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:896
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:897
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		ContactSpy::ContactSpyData::AddContact(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnPhysicalBodyPart.cpp:898
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
			{
			}
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPart.cpp:925
void BrnPhysics::Deformation::PhysicalBodyPart::TestJointForBreaking(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:927
		Vector3 lWorldPenetration;

		// BrnPhysicalBodyPart.cpp:928
		Vector3 lWorldRotationAxis;

		// BrnPhysicalBodyPart.cpp:929
		Vector3 lPointVelocity;

		// BrnPhysicalBodyPart.cpp:930
		Vector3 lAngularVelocity;

		// BrnPhysicalBodyPart.cpp:931
		Vector3 lCollisionNormal;

		// BrnPhysicalBodyPart.cpp:932
		Vector3 lPartPosition;

		// BrnPhysicalBodyPart.cpp:933
		Matrix44Affine lVehicleTransform;

		// BrnPhysicalBodyPart.cpp:956
		bool lbBreakJoint;

		IKBodyPart::GetActiveJointSpec(/* parameters */);
		GetJointRotationProportion(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		IKBodyPart::CheckSensorForcesForJointDetachment(/* parameters */);
		{
			IKBodyPart::GetNumberOfTagPoints(/* parameters */);
			IKBodyPart::GetTagPoint(/* parameters */);
			DeformationSensor::GetBiggestImpulseThisFrame(/* parameters */);
			DeformationSensor::GetBiggestImpulseThisFrame(/* parameters */);
			rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
			rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		}
		IKBodyPart::IsToughenedPart(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
			// BrnPhysicalBodyPart.cpp:993
			DetachedPartNotificationEvent lEvent;

			DeformationOutputInterface::AddDetachedPartNotification(/* parameters */);
		}
	}
	rw::math::vpu::operator<(/* parameters */);
	DeformableObject::GetLocalVelocityFromWorldPoint(/* parameters */);
	GetPosition(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	DeformableObject::GetTransform(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	DeformableObject::GetAngularVelocity(/* parameters */);
	IKBodyPart::GetActiveJointSpec(/* parameters */);
	IKBodyPart::GetActiveJointSpec(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	{
		// BrnPhysicalBodyPart.cpp:960
		Vector3 lCollisionNormal;

		// BrnPhysicalBodyPart.cpp:961
		VecFloat lvfImpactVelocity;

	}
	IKBodyPart::GetActiveJointSpec(/* parameters */);
	DeformationJointSpec::GetMaxStress(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	IKBodyPart::GetPartType(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	{
	}
	IKBodyPart::GetPartType(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	DeformableObject::GetAngularVelocity(/* parameters */);
	GetPosition(/* parameters */);
	DeformableObject::GetLocalVelocityFromWorldPoint(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	IKBodyPart::GetActiveJointSpec(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	DeformationJointSpec::GetMaxStress(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPhysicalBodyPart.cpp:67
void BrnPhysics::Deformation::PhysicalBodyPart::Prepare(BurnoutBodyPartID  lId, EntityId  lGlobalCarId, const BrnPhysics::Deformation::DeformableObject *  lpDeformableObject, const IKBodyPart *  lpIKPart, const rw::math::vpu::Matrix44Affine &  lLocalRenderTransform, const rw::math::vpu::Matrix44Affine &  lVehicleTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:69
		Matrix44Affine lTransform;

	}
}

// BrnPhysicalBodyPart.cpp:138
void BrnPhysics::Deformation::PhysicalBodyPart::AddToScene(InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPart.cpp:141
		BoxVolume * lpBox;

		// BrnPhysicalBodyPart.cpp:146
		VolumeId lVolumeId;

		// BrnPhysicalBodyPart.cpp:150
		VolumeInstanceId lVolumeInstanceID;

		rw::Resource::Resource(/* parameters */);
		GetVolumeId(/* parameters */);
		rw::collision::Volume::GetRelativeTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(/* parameters */);
		CgsSceneManager::VolumeId::Set(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(/* parameters */);
		GetVolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
		GetRigidBodyTransform(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstance(/* parameters */);
		GetRigidBodyTransform(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::AddEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddForCollision(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetCacheOptions(/* parameters */);
		CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetBodyState(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::AddEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceCullingGroup(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::AddEvent(/* parameters */);
		GetSphereRadius(/* parameters */);
		GetRigidBodyTransform(/* parameters */);
		CgsGeometric::Box::GetDimensions(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		CgsGeometric::Box::GetFatness(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalBodyPart.cpp:47
