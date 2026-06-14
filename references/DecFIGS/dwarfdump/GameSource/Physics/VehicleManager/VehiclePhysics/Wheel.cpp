// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Wheel.cpp:27
		const VecFloat KF_WHEEL_INERTIA;

		// Wheel.cpp:28
		const VecFloat KF_WHEEL_INVERSE_INERTIA;

		// Wheel.cpp:31
		const VecFloat KVF_WHEEL_BURNOUT_INERTIA;

		// Wheel.cpp:32
		const VecFloat KVF_WHEEL_BURNOUT_INVERSE_INERTIA;

		// Wheel.cpp:660
		const VecFloat KF_PI;

		// Wheel.cpp:661
		const VecFloat KF_2_PI;

		// Wheel.cpp:662
		const VecFloat KF_2_PI_RECIP;

		// Wheel.cpp:765
		const VecFloat KF_MAX_WHEEL_VELOCITY;

		// Wheel.cpp:766
		const VecFloat KF_NATURAL_BRAKE_FACTOR;

		// Wheel.cpp:767
		const VecFloat KF_EPSILON;

	}

}

// Wheel.cpp:301
void BrnPhysics::Vehicle::Wheel::TireGripCurve::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::SetZero(/* parameters */);
}

// Wheel.cpp:56
void BrnPhysics::Vehicle::Wheel::TireAttribs::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::SetZero(/* parameters */);
}

// Wheel.cpp:322
void BrnPhysics::Vehicle::Wheel::TireGripCurve::Prepare(float32_t  lfPeakSlipRatio, float32_t  lfFloorSlipRatio, float32_t  lfPeakCoefficient, float32_t  lfFallCoefficient) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:278
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareRearTireForDonutAI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:255
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareFrontTireForDonutAI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:231
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareRearTireForAI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:206
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareFrontTireForAI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:101
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareDefaultRearTire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:77
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareDefaultFrontTire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
}

// Wheel.cpp:1006
void BrnPhysics::Vehicle::Wheel::SetVelocity(const VecFloat  lfInitialSpeedInMps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetTorque(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	GetRadius(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	SetAngularVelocity(/* parameters */);
}

// Wheel.cpp:651
void BrnPhysics::Vehicle::Wheel::MoveUpSuspension(const VecFloat  lfDisplacement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Wheel.cpp:653
		VecFloat lfAttemptedHeight;

		rw::math::vpu::Vector3::SetY(/* parameters */);
		GetMinSuspensionHeight(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	}
}

// Wheel.cpp:344
void BrnPhysics::Vehicle::Wheel::TireGripCurve::GetCoefficient(VecFloat  lvfSlipRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// Wheel.cpp:346
	VecFloat lvfGripFactor;

	{
		// Wheel.cpp:346
		VecFloat lvfGripFactor;

		// Wheel.cpp:347
		VecFloat lvfSlipRatioSign;

		// Wheel.cpp:348
		VecFloat lvfAbsSlipRatio;

		// Wheel.cpp:370
		VecFloat lvfLessThanPeakResult;

		// Wheel.cpp:371
		VecFloat lvfLessThanFallResult;

		// Wheel.cpp:372
		VecFloat lvfGreaterThanFallResult;

		GetPeakCoefficient(/* parameters */);
		GetFloorSlipRatio(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		GetPeakSlipRatio(/* parameters */);
		GetFallCoefficient(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		GetPeakSlipRatio(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
	}
}

// Wheel.cpp:944
void BrnPhysics::Vehicle::Wheel::IntegrateForcesIntoVelocity(const VecFloat  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTorque(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	AddAngularVelocity(/* parameters */);
	GetInverseInertia(/* parameters */);
	SetTorque(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// Wheel.cpp:605
void BrnPhysics::Vehicle::Wheel::SetInertiaType(BrnPhysics::Vehicle::Wheel::EWheelInertiaType  leInertiaType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	SetInertia(/* parameters */);
	SetInertia(/* parameters */);
	SetInertia(/* parameters */);
	rw::math::vpu::Reciprocal(/* parameters */);
	SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	SetInverseInertia(/* parameters */);
}

// Wheel.cpp:406
void BrnPhysics::Vehicle::Wheel::SetRoadContact(bool  lbIsOnGround, bool  lbIsCloseToGround, const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lNormal, uint16_t  luMaterialId, uint16_t  luGroupId, float32_t  lfDistanceToRoad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator==<VectorAxisY, VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
}

// Wheel.cpp:720
void BrnPhysics::Vehicle::Wheel::ApplyFrictionReaction(const VecFloat  lvfFrictionTorque, const VecFloat  lvfRoadSpeed, const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Wheel.cpp:724
		VectorIntrinsicUnion::VectorIntrinsic lvfRoadAngularSpeed;

		// Wheel.cpp:725
		VectorIntrinsicUnion::VectorIntrinsic lvfAcceleration;

		// Wheel.cpp:726
		VectorIntrinsicUnion::VectorIntrinsic lvfAngularVelocity;

		// Wheel.cpp:728
		VectorIntrinsicUnion::VectorIntrinsic lvfDiffAngularVelocities;

		// Wheel.cpp:729
		VectorIntrinsicUnion::VectorIntrinsic lvbBeforeGT0;

		// Wheel.cpp:733
		VectorIntrinsicUnion::VectorIntrinsic lvfNewDiffAngularVelocities;

		// Wheel.cpp:734
		VectorIntrinsicUnion::VectorIntrinsic lvbAfterGT0;

		// Wheel.cpp:736
		VectorIntrinsicUnion::VectorIntrinsic lvbChangedSign;

		// Wheel.cpp:738
		VectorIntrinsicUnion::VectorIntrinsic lvbIsBeingTwisted;

		rw::math::vpl::VecSplat_Word<3>(/* parameters */);
		CgsNumeric::NewtonRaphsonReciprocal(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecSplat_Word<3>(/* parameters */);
		rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
		rw::math::vpl::VecRecipEst(/* parameters */);
		rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<8, 0>(/* parameters */);
		rw::math::vpl::VecNegMultSub(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMultAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecSub(/* parameters */);
		rw::math::vpl::VecSub(/* parameters */);
		rw::math::vpl::VecXor(/* parameters */);
		rw::math::vpl::VecSelect(/* parameters */);
		rw::math::vpl::VecSelect(/* parameters */);
	}
}

// Wheel.cpp:677
void BrnPhysics::Vehicle::Wheel::UpdateRotation(VecFloat  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Wheel.cpp:679
		VecFloat lfNumRotations;

		// Wheel.cpp:680
		VecFloat lfRotation;

		GetRotation(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		SetRotation(/* parameters */);
		GetAngularVelocity(/* parameters */);
		rw::math::vpu::Floor(/* parameters */);
		rw::math::vpu::CompGreaterEqual(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
	}
}

// Wheel.cpp:513
void BrnPhysics::Vehicle::Wheel::SwitchAttribs(const rw::math::vpu::Vector3  lCarSpacePositionDiff, const float32_t  lfRadius, const float32_t  lfMass, const float32_t  lfUpwardSuspensionTravel, const float32_t  lfDownwardSuspensionTravel, const BrnPhysics::Vehicle::Wheel::TireAttribs *  lpTireAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Wheel.cpp:515
		Vector3 lStreamedPosition;

	}
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	SetMaxSuspensionHeight(/* parameters */);
	SetMinSuspensionHeight(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	SetMass(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	SetRadius(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
}

// Wheel.cpp:562
void BrnPhysics::Vehicle::Wheel::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	SetMinSuspensionHeight(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	SetMass(/* parameters */);
	SetMaxSuspensionHeight(/* parameters */);
	SetRadius(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	SetRotation(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	SetStaticLongForce(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	SetAngularVelocity(/* parameters */);
	SetTorque(/* parameters */);
	SetLatSlipRatio(/* parameters */);
	SetLongSlipRatio(/* parameters */);
	SetSkidFactor(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	SetStaticLatForce(/* parameters */);
	SetDynamicLongForce(/* parameters */);
	SetDynamicLatForce(/* parameters */);
}

// Wheel.cpp:545
void BrnPhysics::Vehicle::Wheel::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Wheel.cpp:451
void BrnPhysics::Vehicle::Wheel::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Wheel.cpp:434
void BrnPhysics::Vehicle::Wheel::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Wheel.cpp:167
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareRearTire(const physicsvehiclebaseattribs &  lBaseAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	{
	}
}

// Wheel.cpp:127
void BrnPhysics::Vehicle::Wheel::TireAttribs::PrepareFrontTire(const physicsvehiclebaseattribs &  lBaseAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	{
	}
}

// Wheel.cpp:788
void BrnPhysics::Vehicle::Wheel::UpdateVelocity(const VecFloat  lfTimeStep, const VecFloat  lfMaxAngularVelocity, const VecFloat  lfBrakeFactor, const VecFloat  lfBrakeStaticFriction, const VecFloat  lfBrakeDynamicFriction, bool  lbAllowNaturalBraking, bool  lbReversing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Wheel.cpp:796
		VecFloat lfCurrentAngularVelocity;

		// Wheel.cpp:797
		VecFloat lfCurrentTorque;

		// Wheel.cpp:798
		VecFloat lfCurrentInverseInertia;

		// Wheel.cpp:799
		VecFloat lfCurrentInertia;

		// Wheel.cpp:800
		MaskScalar lvbAllowNatural;

		// Wheel.cpp:801
		MaskScalar lvbReversing;

		// Wheel.cpp:802
		VecFloat lfWheelMomentum;

		// Wheel.cpp:809
		MaskScalar lvbIsVelocityZero;

		// Wheel.cpp:812
		MaskScalar lvbApplyDynamicFriction;

		// Wheel.cpp:816
		VecFloat lfSign;

		// Wheel.cpp:819
		MaskScalar lvbUseDynamic;

		// Wheel.cpp:821
		VecFloat lfInputBrakeFactor;

		// Wheel.cpp:839
		MaskScalar lvbMaxAngularVelocityNegative;

		// Wheel.cpp:840
		VecFloat lfCurrentAngularVelocity0;

		// Wheel.cpp:841
		VecFloat lfCurrentAngularVelocity1;

		GetAngularVelocity(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		GetInverseInertia(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		GetTorque(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		GetInertia(/* parameters */);
		rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
		SetAngularVelocity(/* parameters */);
		rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		SetInertia(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		SetInverseInertia(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		SetTorque(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
	}
}

// Wheel.cpp:474
void BrnPhysics::Vehicle::Wheel::Prepare(const rw::math::vpu::Vector3  lCarSpacePosition, const float32_t  lfRadius, const float32_t  lfMass, const float32_t  lfUpwardSuspensionTravel, const float32_t  lfDownwardSuspensionTravel, const BrnPhysics::Vehicle::Wheel::TireAttribs *  lpTireAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	SetMass(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	SetMinSuspensionHeight(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	SetMaxSuspensionHeight(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	SetRadius(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	SetPosition(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// Wheel.cpp:963
void BrnPhysics::Vehicle::Wheel::Reset(const rw::math::vpu::Vector3  lInitialVelocityInMph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// Wheel.cpp:984
		VecFloat lfInitialSpeedInMps;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	SetAngularVelocity(/* parameters */);
	{
	}
	SetTorque(/* parameters */);
	SetLatSlipRatio(/* parameters */);
	SetRotation(/* parameters */);
	SetMassOnWheel(/* parameters */);
	GetRadius(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	SetLongSlipRatio(/* parameters */);
	SetSkidFactor(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	SetAngularVelocity(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	SetPosition(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

