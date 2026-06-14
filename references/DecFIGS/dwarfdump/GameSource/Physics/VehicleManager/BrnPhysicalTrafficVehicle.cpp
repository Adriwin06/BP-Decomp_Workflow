// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnPhysicalTrafficVehicle.cpp:29
		const float32_t KF_ARTICULATED_SOLVE_PENETRATION_WEIGHT_FACTOR;

	}

}

// BrnPhysicalTrafficVehicle.cpp:395
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::GetArticulatedJointIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:106
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:235
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::MakeFullyPhysical(BrnPhysics::Vehicle::TrafficPhysics *  lpFullTrafficPhysics, int32_t  liTrafficPhysicsPoolIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:88
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:126
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:561
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::ReadPropertiesFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:60
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearArticulatedState(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:525
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::ReadFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficVehicle.cpp:541
		bool lbFrozenBody;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	IsFullyPhysical(/* parameters */);
	GetFullTrafficPhysics(/* parameters */);
	VehiclePhysics::ReadFromRenderware(/* parameters */);
	ExternallySimulatedBody::SetFrozen(/* parameters */);
	rw::math::vpu::operator/<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
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
}

// BrnPhysicalTrafficVehicle.cpp:496
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::OnChecked(EActiveRaceCarIndex  leOwner, const BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, const rw::math::vpu::Vector3  lContactPointOnTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsFullyPhysical(/* parameters */);
	GetFullTrafficPhysics(/* parameters */);
	VehiclePhysics::GetLinearVelocityDirection(/* parameters */);
	VehiclePhysics::GetLinearVelocityMagnitude(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:368
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsFullyPhysical(/* parameters */);
	GetFullTrafficPhysics(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:259
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::MakeSimple(BrnPhysics::Vehicle::SimpleVehiclePhysics *  lpSimpleVehiclePhysics, int32_t  liTrafficPhysicsPoolIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficVehicle.cpp:262
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:429
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::SetArticulated(const const CreatePhysicalTrafficEvent &  lCreateTrafficEvent, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType  leVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficVehicle.cpp:43
		typedef ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> DeformationSpecResPtr;

		// BrnPhysicalTrafficVehicle.cpp:441
		DeformationSpecResPtr lpDeformationSpec;

		// BrnPhysicalTrafficVehicle.cpp:443
		Matrix44Affine lTagPointSpaceToModelSpace;

		// BrnPhysicalTrafficVehicle.cpp:447
		const const LocatorPointSpecList & lTagPoints;

		// BrnPhysicalTrafficVehicle.cpp:450
		uint32_t luTagPointIndex;

	}
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
	Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
	Deformation::StreamedDeformationSpec::GetGenericLocators(/* parameters */);
	Deformation::LocatorPointSpecList::GetLocatorXform(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	~ResourcePtr(/* parameters */);
	IsFullyPhysical(/* parameters */);
	GetFullTrafficPhysics(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehiclePhysics::SetSolvePenetrationWeightFactor(/* parameters */);
	{
		// BrnPhysicalTrafficVehicle.cpp:463
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficVehicle.cpp:319
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::Update(float32_t  lfSimTimerTimeStep, float32_t  lfGameTimerTimeStep, const rw::math::vpu::Matrix44Affine *  lCameraMatrix, const BrnPlayerDriverControls *  lpControls, bool  lbImpactTime, bool  lbDoForceAdditiveAftertouch, bool  lbUseSixaxis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsFullyPhysical(/* parameters */);
	{
		// BrnPhysicalTrafficVehicle.cpp:323
		BrnPhysics::Vehicle::TrafficPhysics * lpPhysics;

		GetFullTrafficPhysics(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	VehiclePhysics::ResetCoolDown(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:148
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::PreparePhysical(const CreatePhysicalTrafficEvent *  lpEvent, VehicleAttribs *  lpAttribs, const StreamedDeformationSpec *  lpModelData, const rw::math::vpu::Vector3 *  lpWheelPositions, const float32_t *  lpafWheelRadii) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsFullyPhysical(/* parameters */);
	ClearArticulatedState(/* parameters */);
	{
		// BrnPhysicalTrafficVehicle.cpp:155
		AxisAlignedBox lAABB;

		GetFullTrafficPhysics(/* parameters */);
	}
	GetPhysics(/* parameters */);
}

// BrnPhysicalTrafficVehicle.cpp:286
void BrnPhysics::Vehicle::PhysicalTrafficVehicle::UpdatePostSimulation(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficVehicle.cpp:35
