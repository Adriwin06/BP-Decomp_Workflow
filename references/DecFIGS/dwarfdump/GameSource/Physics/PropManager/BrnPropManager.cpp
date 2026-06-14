// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropManager.cpp:45
		float32_t KF_PROP_ANGULAR_DRAG;

		// BrnPropManager.cpp:46
		float32_t KF_PROP_LINEAR_DRAG;

		// BrnPropManager.cpp:47
		float32_t KF_PROP_MAX_ANGULAR_VEL;

		// BrnPropManager.cpp:48
		float32_t KF_PROP_MAX_LINEAR_VEL;

		// BrnPropManager.cpp:49
		float32_t KF_PROP_RESTITUTION;

		// BrnPropManager.cpp:50
		VecFloat KVF_INERTIA_SCALE;

		// BrnPropManager.cpp:51
		VecFloat KVF_GRAVITY_SCALE;

		// BrnPropManager.cpp:53
		const rw::math::vpu::Vector3 K_DEFAULT_GRAVITY;

		// BrnPropManager.cpp:54
		const VecFloat KVF_MAX_PROP_PADDING;

		// BrnPropManager.cpp:56
		const int32_t KI_MAX_PROP_WORLD_COLLISIONS = 64;

		// BrnPropManager.cpp:338
		const VecFloat KVF_LEAN_PROP_LERP_SPEED;

		// BrnPropManager.cpp:339
		const VecFloat KVF_LEAN_PROP_MIN_LERP;

		// BrnPropManager.cpp:340
		const VecFloat KVF_LEAN_PROP_ORTHOGONAL_TOLERANCE;

		// BrnPropManager.cpp:557
		const rw::math::vpu::Vector3 K_PROP_EXTRA_COM_OFFSET;

		// BrnPropManager.cpp:1174
		const VecFloat KVF_MAX_LINEAR_ACCELERATION;

		// BrnPropManager.cpp:1175
		const VecFloat KVF_MAX_ANGULAR_ACCELERATION;

		// BrnPropManager.cpp:1176
		const VecFloat KVF_MAX_LINEAR_ACCELERATION_SQ;

		// BrnPropManager.cpp:1177
		const VecFloat KVF_MAX_ANGULAR_ACCELERATION_SQ;

		// BrnPropManager.cpp:1288
		const VecFloat KVF_MAX_LEAN_PROP_WORLD_PENETRATION;

		// BrnPropManager.cpp:1678
		VecFloat KVF_MAX_PROP_SPEED_MPS;

		// BrnPropManager.cpp:1755
		VecFloat KVF_ROTATION_FACTOR;

		// BrnPropManager.cpp:1756
		VecFloat KVF_MAX_ROTATION;

		// BrnPropManager.cpp:1757
		VecFloat KVF_PENETRATION_RESOLUTION_FACTOR;

		// BrnPropManager.cpp:1758
		VecFloat KVF_MOMENTUM_RESOLUTION_FACTOR;

		// BrnPropManager.cpp:2046
		VecFloat KVF_BREAK_JOINT_LINEAR_VEL;

		// BrnPropManager.cpp:2047
		VecFloat KVF_BREAK_JOINT_ANGULAR_VEL;

		// BrnPropManager.cpp:2098
		VecFloat KVF_ANTI_HERD_UPWARD_SCALE;

		// BrnPropManager.cpp:2099
		VecFloat KVF_ANTI_HERD_SIDE_SCALE;

		// BrnPropManager.cpp:2100
		VecFloat KVF_ANTI_HERD_HIGH_SPEED_SIDE_SCALE;

		// BrnPropManager.cpp:2101
		VecFloat KVF_MAX_SPEED_FOR_SIDE_FORCE;

		// BrnPropManager.cpp:2102
		VecFloat KVF_SPEED_CLAMP;

		// BrnPropManager.cpp:2317
		bool gbUseStreamTests;

		// BrnPropManager.cpp:2675
		const rw::math::vpu::Vector3 K_LAMPOST_INERTIA_BOX;

	}

}

// BrnPropManager.cpp:127
void BrnPhysics::Props::PropManager::ConstructContactGenerationPerfMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropManager.cpp:142
void BrnPhysics::Props::PropManager::ConstructPreScenePerfMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropManager.cpp:243
void BrnPhysics::Props::PropManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:245
		uint32_t luIndex;

		// BrnPropManager.cpp:246
		bool lbSuccess;

	}
}

// BrnPropManager.cpp:273
void BrnPhysics::Props::PropManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:275
		uint32_t luIndex;

	}
}

// BrnPropManager.cpp:453
void BrnPhysics::Props::PropManager::ProcessInputs_Prepare(const PropInputInterface *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator=(/* parameters */);
}

// BrnPropManager.cpp:2740
void BrnPhysics::Props::PropManager::GetPartInertia(const PropPartTypeData *  lpType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPropManager.cpp:2780
	Vector3 lInertia;

	{
		// BrnPropManager.cpp:2743
		AABBox lAccumulatedAABBox;

		// BrnPropManager.cpp:2775
		Vector3 lDims;

		// BrnPropManager.cpp:2780
		Vector3 lInertia;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		// BrnPropManager.cpp:2750
		uint8_t lu8Vol;

	}
	rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisZ>(/* parameters */);
	{
	}
	rw::math::vpu::Abs<VectorAxisZ>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::SetY(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	{
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	{
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	{
		// BrnPropManager.cpp:2753
		AABBox lVolumeAABBox;

		// BrnPropManager.cpp:2755
		VolRef::Volume * lpVolume;

		// BrnPropManager.cpp:2757
		Matrix44Affine lIdentity;

		// BrnPropManager.cpp:2762
		Vector3 lMax;

		// BrnPropManager.cpp:2763
		Vector3 lMin;

		rw::collision::Volume::GetBBox(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefX>(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefY>(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefZ>(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefX>(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefY>(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefZ>(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
	}
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
}

// BrnPropManager.cpp:2678
void BrnPhysics::Props::PropManager::GetPropInertia(const PropTypeData *  lpType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPropManager.cpp:2723
	Vector3 lInertia;

	{
		// BrnPropManager.cpp:2681
		AABBox lAccumulatedAABBox;

		// BrnPropManager.cpp:2712
		Vector3 lDims;

		// BrnPropManager.cpp:2723
		Vector3 lInertia;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		// BrnPropManager.cpp:2687
		uint8_t lu8Vol;

	}
	rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
	PropTypeData::HACKShouldMoveComOffset(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisZ>(/* parameters */);
	{
	}
	rw::math::vpu::Abs<VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	{
		// BrnPropManager.cpp:2690
		AABBox lVolumeAABBox;

		// BrnPropManager.cpp:2692
		VolRef::Volume * lpVolume;

		// BrnPropManager.cpp:2694
		Matrix44Affine lIdentity;

		// BrnPropManager.cpp:2699
		Vector3 lMax;

		// BrnPropManager.cpp:2700
		Vector3 lMin;

		rw::collision::Volume::GetBBox(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefX>(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefY>(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloatRefZ>(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefX>(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefY>(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloatRefZ>(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
	}
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
}

// BrnPropManager.cpp:78
void BrnPhysics::Props::PropManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,15>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetAll(/* parameters */);
	BrnResource::GetDebugAllocator(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

// BrnPropManager.cpp:1726
void BrnPhysics::Props::PropManager::RoutePropVsRaceCarContactToDummyCar(bool  lbPropIsEntityA, InAddPotentialContact *  lpOutContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1731
		EntityId lDummyRaceCarEntityId;

	}
	{
		// BrnPropManager.cpp:1738
		EntityId lDummyRaceCarEntityId;

	}
	CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
	CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
}

// BrnPropManager.cpp:1685
void BrnPhysics::Props::PropManager::ApplyPropRaceCarCollisionImpulse(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCar, PropInstance *  lpProp, const PropTypeData *  lpType, const rw::math::vpu::Vector3  lNormal, const rw::math::vpu::Vector3  lPointOnCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1687
		Vector3 lRelativeVelocity;

		// BrnPropManager.cpp:1688
		VecFloat lRelativeSpeedAlongNormal;

		// BrnPropManager.cpp:1689
		Matrix44Affine lCarTransform;

		// BrnPropManager.cpp:1695
		float32_t lfPropMass;

		// BrnPropManager.cpp:1706
		VecFloat lSquaredPropSpeed;

		// BrnPropManager.cpp:1707
		VecFloat lPropSpeedModifier;

		// BrnPropManager.cpp:1709
		VecFloat lImpulseMagnitude;

		// BrnPropManager.cpp:1710
		Vector3 lImpulse;

		ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		Vehicle::RaceCarPhysics::AddPropCollisionImpulse(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
}

// BrnPropManager.cpp:568
void BrnPhysics::Props::PropManager::AddPropToSim(PropEntityID  lEntityId, int32_t  liPropIndex, const rw::math::vpu::Matrix44Affine &  lTransform, const PropTypeData *  lpType, bool  lbStatic, bool  lbAddExtraComOffset, InputBuffer *  lpSimModuleInputBuffer, const rw::math::vpu::Vector3  lLinearVelocity, const rw::math::vpu::Vector3  lAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:570
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:571
		InAddRigidBody lSimulationAddBodyEvent;

		// BrnPropManager.cpp:572
		Vector3 lInverseInertia;

		// BrnPropManager.cpp:587
		NewRigidBody * lpNewRigidBody;

		// BrnPropManager.cpp:628
		Vector3 lInertia;

		BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	}
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	NonConstructedClassContainer<CgsPhysics::NewRigidBody>::GetObjectPointer(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::math::vpu::Vector3::GetX(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnPropManager.cpp:617
		float32_t lrRatio;

		rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
	}
}

// BrnPropManager.cpp:470
void BrnPhysics::Props::PropManager::ProcessAddPropInstanceEvents(const PropInputInterface *  lpInput, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:472
		int32_t luIndex;

		// BrnPropManager.cpp:473
		const PropInputInterface::AddPhysicalPropEventQueue * lpAddPropEventQueue;

		// BrnPropManager.cpp:474
		const AddPhysicalPropEvent * lpAddPropEvent;

		// BrnPropManager.cpp:475
		int32_t liPropInstanceIndex;

		// BrnPropManager.cpp:476
		PropInstance * lpProp;

		// BrnPropManager.cpp:477
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:478
		const PropTypeData * lpType;

	}
	{
		// BrnPropManager.cpp:514
		bool lbStatic;

		// BrnPropManager.cpp:515
		bool lbJointed;

		CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::GetEvent(/* parameters */);
		CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<15u>::SetBit(/* parameters */);
		PropInstance::Construct(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		PropInstance::SetTypeId(/* parameters */);
		PropInstance::SetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		PropInstance::SetLinearVelocity(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		PropInstance::GetTypeId(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
		PropInstance::SetIsStatic(/* parameters */);
		PropInstance::SetExtraComOffsetFlag(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPropManager.cpp:521
		int32_t liLampostJointIndex;

		CgsContainers::BitArray<15u>::GetFirstZeroBit(/* parameters */);
		CgsContainers::BitArray<15u>::UnSetBit(/* parameters */);
		PropInstance::SetJointIndex(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsContainers::BitArray<15u>::SetBit(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:803
void BrnPhysics::Props::PropManager::RemovePart(PropEntityID  lEntityId, uint32_t  luPartIndex, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:815
		InRemoveRigidBody lSimulationRemoveBodyEvent;

		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveCachedObject(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::AddEvent(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetBit(/* parameters */);
	BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetRemoveRigidBodyQueue(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::AddEvent(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:711
void BrnPhysics::Props::PropManager::ProcessRemovePartInstanceEvents(const PropInputInterface *  lpInput, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:713
		uint32_t luEventIndex;

		// BrnPropManager.cpp:714
		uint32_t luQueueSize;

		// BrnPropManager.cpp:715
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:716
		const PropInputInterface::RemovePartEventQueue * lpQueue;

		// BrnPropManager.cpp:717
		const RemovePhysicalPartEvent * lpEvent;

		// BrnPropManager.cpp:718
		PropEntityID lEntityId;

		// BrnPropManager.cpp:719
		int32_t liPartIndex;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::GetEvent(/* parameters */);
}

// BrnPropManager.cpp:174
void BrnPhysics::Props::PropManager::Prepare(rw::LinearResourceAllocator *  lpPhysicsAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<15u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetAll(/* parameters */);
	{
		// BrnPropManager.cpp:191
		int32_t liPropBufferSize;

		// BrnPropManager.cpp:196
		ResourceDescriptor lPropsResDesc;

		// BrnPropManager.cpp:199
		Resource lPropsRes;

		// BrnPropManager.cpp:209
		int32_t liPartBufferSize;

		// BrnPropManager.cpp:214
		ResourceDescriptor lPropPartsResDesc;

		// BrnPropManager.cpp:217
		Resource lPropPartsRes;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPropManager.cpp:760
void BrnPhysics::Props::PropManager::RemoveProp(PropEntityID  lEntityId, uint32_t  luPropIndex, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:771
		InRemoveRigidBody lSimulationRemoveBodyEvent;

		// BrnPropManager.cpp:772
		RigidBodyId lPropRigidBodyId;

		// BrnPropManager.cpp:776
		PropInstance * lpProp;

		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveCachedObject(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::AddEvent(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetBit(/* parameters */);
	BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetBit(/* parameters */);
	PropInstance::SetNotJointed(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetRemoveRigidBodyQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::AddEvent(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPropManager.cpp:778
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnWorld::PropEntityID::GetValue(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPropManager.cpp:664
void BrnPhysics::Props::PropManager::ProcessRemovePropInstanceEvents(const PropInputInterface *  lpInput, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:666
		uint32_t luEventIndex;

		// BrnPropManager.cpp:667
		uint32_t luQueueSize;

		// BrnPropManager.cpp:668
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:669
		const PropInputInterface::RemovePropEventQueue * lpQueue;

		// BrnPropManager.cpp:670
		const RemovePhysicalPropEvent * lpEvent;

		// BrnPropManager.cpp:671
		PropEntityID lEntityId;

		// BrnPropManager.cpp:672
		int32_t liPropIndex;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::GetEvent(/* parameters */);
}

// BrnPropManager.cpp:837
void BrnPhysics::Props::PropManager::CreatePart(PropEntityID  lEntityId, uint32_t  luPropTypeIndex, int16_t  li16PartIndex, const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lLinearVelocity, const rw::math::vpu::Vector3  lAngularVelocity, int32_t  liSlotIndex, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:839
		int32_t liPropPartIndex;

		// BrnPropManager.cpp:841
		PropVolumeInstanceID lPropVolumeInstanceID;

		// BrnPropManager.cpp:842
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:844
		InAddRigidBody lSimulationAddBodyEvent;

		// BrnPropManager.cpp:845
		Vector3 lInverseInertia;

		// BrnPropManager.cpp:847
		const PropTypeData * lpType;

		// BrnPropManager.cpp:848
		PropPartTypeData * lpPartType;

		// BrnPropManager.cpp:849
		PropPartInstance * lpPropPart;

		// BrnPropManager.cpp:914
		Vector3 lInertia;

	}
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<30u>::SetBit(/* parameters */);
	PropPartInstance::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	PropPartInstance::SetPartId(/* parameters */);
	PropPartInstance::SetPosition(/* parameters */);
	PropPartInstance::SetType(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	PropPartInstance::SetLinearVelocity(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
	PropPhysicsDataHeader::GetType(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::AddEvent(/* parameters */);
	NonConstructedClassContainer<CgsPhysics::NewRigidBody>::GetObjectPointer(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::math::vpu::Vector3::GetX(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
		// BrnPropManager.cpp:859
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
}

// BrnPropManager.cpp:1246
void BrnPhysics::Props::PropManager::ProcessAddPartInstanceEvents(const PropInputInterface *  lpInput, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1248
		const PropInputInterface::AddPhysicalPartEventQueue * lpQueue;

		// BrnPropManager.cpp:1249
		const AddPhysicalPartEvent * lpEvent;

		// BrnPropManager.cpp:1250
		uint32_t luQueueSize;

		// BrnPropManager.cpp:1251
		uint32_t luEventIndex;

		// BrnPropManager.cpp:1252
		Vector3 lVelocity;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::GetEvent(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnPropManager.cpp:943
void BrnPhysics::Props::PropManager::OutputUpdatedProps(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:945
		PropOutputInterface * lpOutputQueue;

		PhysicsModuleIO::OutputBuffer::GetPropManagerOutputInterface(/* parameters */);
		PropOutputInterface::AppendUpdatedProps(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:1188
void BrnPhysics::Props::PropManager::ClampAcceleration(const rw::math::vpu::Vector3  lLinearVelocity, const rw::math::vpu::Vector3  lAngularVelocity, RigidBodyId  lRigidBodyId, const OutUpdateRigidBody *  lpUpdateBodyEvent, const Vector3 &  lUpdatedLinearVelocity, const Vector3 &  lUpdatedAngularVelocity, const VecFloat  lvfTimeStep, const VecFloat  lvfOneOverTimeStep, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1191
		bool lbUpdateBody;

		// BrnPropManager.cpp:1193
		Vector3 lAcceleration;

		// BrnPropManager.cpp:1194
		VecFloat lvfAccelerationMagnitudeSquared;

		// BrnPropManager.cpp:1211
		Vector3 lAngularAcceleration;

		// BrnPropManager.cpp:1212
		VecFloat lvfAngularAccelerationMagnitudeSquared;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	{
		// BrnPropManager.cpp:1231
		InUpdateRigidBody lOutUpdateRigidBodyEvent;

	}
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::physics::RigidBody::SetLinearVelocity(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::physics::RigidBody::SetAngularVelocity(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::AddEvent(/* parameters */);
	{
		// BrnPropManager.cpp:1199
		VecFloat lvfAccelerationMagnitude;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnPropManager.cpp:1217
		VecFloat lvfAngularAccelerationMagnitude;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:962
void BrnPhysics::Props::PropManager::ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *  lpUpdatedBodies, InSceneUpdateInterface *  lpSceneInput, InputBuffer *  lpSimModuleInputBuffer, const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:964
		int32_t liIndex;

		// BrnPropManager.cpp:965
		const OutUpdateRigidBody * lpUpdateBodyEvent;

		// BrnPropManager.cpp:966
		RigidBodyId lRigidBodyId;

		// BrnPropManager.cpp:967
		UpdatePropEvent lUpdatePropEvent;

		// BrnPropManager.cpp:968
		bool lbFrozen;

		// BrnPropManager.cpp:969
		bool lbIsPart;

		// BrnPropManager.cpp:970
		InRemoveRigidBody lRemoveBodyEvent;

		// BrnPropManager.cpp:974
		VecFloat lvfOneOverTimeStep;

		rw::math::vpu::operator/(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetEvent(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	{
		// BrnPropManager.cpp:1008
		Matrix44Affine lUpdatedTransform;

		// BrnPropManager.cpp:1009
		Vector3 lUpdatedPosition;

		// BrnPropManager.cpp:1010
		Vector3 lUpdatedLinearVelocity;

		// BrnPropManager.cpp:1011
		Vector3 lUpdatedAngularVelocity;

		// BrnPropManager.cpp:1035
		PropEntityID lEntityId;

		rw::physics::RigidBody::GetTransform(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		rw::physics::RigidBody::GetLinearVelocity(/* parameters */);
		rw::physics::RigidBody::GetAngularVelocity(/* parameters */);
		{
			// BrnPropManager.cpp:1027
			DebugInterface lInt;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
		{
			// BrnPropManager.cpp:1041
			int32_t liPartIndex;

			// BrnPropManager.cpp:1045
			PropPartInstance * lpPart;

			CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
			BrnWorld::PropEntityID::GetValue(/* parameters */);
			PropPartInstance::SetPosition(/* parameters */);
			PropPartInstance::SetLinearVelocity(/* parameters */);
		}
		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::AddEvent(/* parameters */);
	}
	Append<15>(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear(/* parameters */);
	{
		// BrnPropManager.cpp:1078
		int32_t liPropIndex;

		// BrnPropManager.cpp:1082
		PropInstance * lpProp;

		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		PropInstance::GetTypeId(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
		PropTypeData::ShouldAlwaysSmash(/* parameters */);
		{
			// BrnPropManager.cpp:1096
			InUpdateRigidBody * lpEvent;

			CgsPhysics::PhysicsSimulationIO::InputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
			CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>::AllocateEventSafe(/* parameters */);
			operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::physics::RigidBody::SetTransform(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::physics::RigidBody::SetAngularAcceleration(/* parameters */);
			rw::physics::RigidBody::SetPosition(/* parameters */);
			rw::physics::RigidBody::SetLinearAcceleration(/* parameters */);
			rw::physics::RigidBody::SetLinearVelocity(/* parameters */);
			rw::physics::RigidBody::SetAngularVelocity(/* parameters */);
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			{
			}
			{
			}
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::Quaternion::operator=(/* parameters */);
			rw::physics::RigidBody::InertiaUpdate(/* parameters */);
			rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
			{
			}
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
			{
			}
			Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
			{
			}
			Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			{
			}
			{
			}
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		}
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		BrnWorld::PropEntityID::GetValue(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		PropInstance::SetMovementState(/* parameters */);
		PropInstance::SetTransform(/* parameters */);
		PropInstance::SetLinearVelocity(/* parameters */);
		PropInstance::SetAngularVelocity(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnPropManager.cpp:1017
		InApplyForce lApplyForceEvent;

		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetApplyForceQueue(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::AddEvent(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	PropInstance::SetMovementState(/* parameters */);
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
		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::GetMaxLength(/* parameters */);
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
}

// BrnPropManager.cpp:1771
void BrnPhysics::Props::PropManager::HandleContactWithLeanProp(PropInstance *  lpPropInstance, int32_t  liPropIndex, const PropTypeData *  lpType, BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCar, const rw::math::vpu::Vector3  lNormal, const rw::math::vpu::Vector3  lPointOnProp, const rw::math::vpu::Vector3  lPointOnCar, InAddPotentialContact *  lpOutContact, bool  lbPropIsEntityA, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1773
		Matrix44Affine lCarTransform;

		// BrnPropManager.cpp:1774
		Matrix44Affine lTransform;

		// BrnPropManager.cpp:1775
		Matrix44Affine lInverseTransform;

		// BrnPropManager.cpp:1776
		Vector3 lPos;

		// BrnPropManager.cpp:1777
		Vector3 lRaceCarToPropVector;

		// BrnPropManager.cpp:1778
		VecFloat lResolveDistance;

		// BrnPropManager.cpp:1779
		Vector3 lResolveVector;

		// BrnPropManager.cpp:1780
		Vector3 lTargetResolvePoint;

		// BrnPropManager.cpp:1781
		Vector3 lWorldSpaceJointPos;

		// BrnPropManager.cpp:1782
		Vector3 lJointToPointOnProp;

		// BrnPropManager.cpp:1783
		VecFloat lfAngleToRotate;

		// BrnPropManager.cpp:1784
		Vector3 lRotationAxis;

		// BrnPropManager.cpp:1785
		Matrix44Affine lRotationMatrix;

		// BrnPropManager.cpp:1786
		Vector3 lCurrentWorldSpaceJointPos;

		// BrnPropManager.cpp:1787
		Vector3 lSeparation;

		// BrnPropManager.cpp:1795
		VecFloat lMaxAngleCos;

		// BrnPropManager.cpp:1804
		MaskScalar lbRotatedTooFar;

		// BrnPropManager.cpp:1809
		Vector3 lPointVelocity;

		// BrnPropManager.cpp:1812
		VecFloat lVelocityAlongNormal;

		// BrnPropManager.cpp:1815
		VecFloat lMomentumTowardsProp;

		// BrnPropManager.cpp:1837
		float32_t lfInvTimeStep;

		// BrnPropManager.cpp:1841
		const VecFloat K_EPSILON;

		// BrnPropManager.cpp:1842
		const rw::math::vpu::Vector3 K_EPSILON3;

		// BrnPropManager.cpp:1843
		Mask3 lLessThan;

		// BrnPropManager.cpp:1844
		Mask3 lGreaterThan;

		// BrnPropManager.cpp:1845
		MaskScalar lAllLessThan;

		// BrnPropManager.cpp:1846
		MaskScalar lAllGreaterThan;

		// BrnPropManager.cpp:1847
		MaskScalar lIsZero;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	ExternalPhysicsBody::GetLinearMomentum(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	ExternalPhysicsBody::AddImpulse(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	ExternallySimulatedBody::Translate(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPropManager.cpp:1827
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	Vehicle::Wheel::GetRoadLongSpeed(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::NormalizeFast(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	{
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPropManager.cpp:1851
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnPropManager.cpp:1855
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	PropInstance::SetTransform(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::SetBit(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnPropManager.cpp:1903
void BrnPhysics::Props::PropManager::HandleContactWithTiltProp(PropInstance *  lpPropInstance, int32_t  liPropIndex, const PropTypeData *  lpType, BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCar, const rw::math::vpu::Vector3  lNormal, const rw::math::vpu::Vector3  lPointOnProp, const rw::math::vpu::Vector3  lPointOnCar, InAddPotentialContact *  lpOutContact, bool  lbPropIsEntityA, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1905
		Matrix44Affine lCarTransform;

		// BrnPropManager.cpp:1906
		Matrix44Affine lTransform;

		// BrnPropManager.cpp:1907
		Matrix44Affine lInverseTransform;

		// BrnPropManager.cpp:1908
		Vector3 lPos;

		// BrnPropManager.cpp:1909
		Vector3 lRaceCarToPropVector;

		// BrnPropManager.cpp:1910
		VecFloat lResolveDistance;

		// BrnPropManager.cpp:1911
		Vector3 lResolveVector;

		// BrnPropManager.cpp:1912
		Vector3 lTargetResolvePoint;

		// BrnPropManager.cpp:1913
		Vector3 lWorldSpaceJointPos;

		// BrnPropManager.cpp:1914
		Vector3 lJointToResolvePoint;

		// BrnPropManager.cpp:1915
		Vector3 lJointToPointOnProp;

		// BrnPropManager.cpp:1916
		VecFloat lfAngleToRotate;

		// BrnPropManager.cpp:1917
		Matrix44Affine lRotationMatrix;

		// BrnPropManager.cpp:1918
		Vector3 lCurrentWorldSpaceJointPos;

		// BrnPropManager.cpp:1919
		Vector3 lSeparation;

		// BrnPropManager.cpp:1927
		VecFloat lMaxAngleCos;

		// BrnPropManager.cpp:1936
		MaskScalar lbRotatedTooFar;

		// BrnPropManager.cpp:1941
		Vector3 lPointVelocity;

		// BrnPropManager.cpp:1944
		VecFloat lVelocityAlongNormal;

		// BrnPropManager.cpp:1947
		VecFloat lMomentumTowardsProp;

		// BrnPropManager.cpp:1964
		MaskScalar lNormalPointsAlongZ;

		// BrnPropManager.cpp:1965
		Vector3 lRotationAxis;

		// BrnPropManager.cpp:1967
		float32_t lfInvTimeStep;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	ExternalPhysicsBody::GetLinearMomentum(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	ExternalPhysicsBody::AddImpulse(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	ExternallySimulatedBody::Translate(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Vehicle::Wheel::GetRoadLongSpeed(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	{
	}
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
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnPropManager.cpp:1971
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::operator*(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	PropInstance::SetTransform(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::SetBit(/* parameters */);
	{
		// BrnPropManager.cpp:2008
		UpdatePropEvent lUpdateEvent;

		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		BrnWorld::PropEntityID::PropEntityID(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::AddEvent(/* parameters */);
	}
	{
		// BrnPropManager.cpp:2025
		UpdatePropEvent lUpdateEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::AddEvent(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
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
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetMaxLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnPropManager.cpp:2054
void BrnPhysics::Props::PropManager::BreakJoint(PropEntityID  lEntityId, int32_t  liPropIndex, const rw::math::vpu::Matrix44Affine &  lTransform, const PropTypeData *  lpType, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2057
		InRemoveRigidBody lSimulationRemoveBodyEvent;

		// BrnPropManager.cpp:2058
		RigidBodyId lPropRigidBodyId;

		// BrnPropManager.cpp:2064
		PropInstance * lpProp;

		// BrnPropManager.cpp:2065
		int32_t liJointIndex;

		// BrnPropManager.cpp:2072
		Vector3 lAngularVelocity;

		// BrnPropManager.cpp:2073
		Vector3 lLinearVelocity;

		BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	}
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetRemoveRigidBodyQueue(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::AddEvent(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetBit(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PropInstance::SetIsStatic(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	PropInstance::SetNotJointed(/* parameters */);
	PropTypeData::HACKShouldMoveComOffset(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	PropInstance::SetExtraComOffsetFlag(/* parameters */);
	PropTypeData::HACKShouldMoveComOffset(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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
}

// BrnPropManager.cpp:343
void BrnPhysics::Props::PropManager::UpdateJointedProps(InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:345
		int32_t liPropIndex;

		// BrnPropManager.cpp:346
		PropInstance * lpProp;

		// BrnPropManager.cpp:347
		Matrix44Affine lTransform;

		// BrnPropManager.cpp:348
		Matrix44Affine lDesiredTransform;

		// BrnPropManager.cpp:349
		Matrix44Affine lLerpMatrix;

		// BrnPropManager.cpp:350
		UpdatePropEvent lUpdateEvent;

		// BrnPropManager.cpp:351
		bool lbNeedsRotating;

		{
			// BrnPropManager.cpp:354
			int32_t liJointIndex;

		}
	}
	CgsContainers::BitArray<15u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnPropManager.cpp:367
		int32_t liLeaningPropIndex;

		CgsContainers::BitArray<15u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	{
		// BrnPropManager.cpp:358
		int32_t liPropIndex;

		// BrnPropManager.cpp:360
		PropInstance * lpProp;

		// BrnPropManager.cpp:361
		const PropTypeData * lpType;

		CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		PropInstance::GetTypeId(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsContainers::BitArray<15u>::GetNextNonZeroBit(/* parameters */);
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	CgsContainers::BitArray<15u>::GetNextNonZeroBit(/* parameters */);
	rw::math::vpu::NormalizeFast(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::NormalizeFast(/* parameters */);
	rw::math::vpu::NormalizeFast(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	{
		// BrnPropManager.cpp:392
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::AddEvent(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPropManager.cpp:393
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
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnPropManager.cpp:420
void BrnPhysics::Props::PropManager::RemoveAllPropsAndParts(InputBuffer *  lpSimModuleInputBuffer, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:422
		InRemoveAllRigidBodies * lpEvent;

		{
			// BrnPropManager.cpp:426
			int32_t liPropIndex;

		}
		{
			// BrnPropManager.cpp:431
			int32_t liPartIndex;

		}
	}
}

// BrnPropManager.cpp:299
void BrnPhysics::Props::PropManager::ProcessInputsPreScene(const PropInputInterface *  lpInput, InSceneUpdateInterface *  lpSceneInput, bool  lbSimPaused, InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:302
		int32_t liPropIndex;

	}
	CgsContainers::BitArray<15u>::GetFirstNonZeroBit(/* parameters */);
	RemoveAllPropsAndParts(/* parameters */);
	{
	}
	CgsContainers::BitArray<15u>::GetNextNonZeroBit(/* parameters */);
	PropInstance::ClearAddedThisFrameFlag(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	{
	}
	{
	}
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveCachedObject(/* parameters */);
	CgsContainers::BitArray<15u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	{
	}
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveCachedObject(/* parameters */);
	CgsContainers::BitArray<30u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	{
	}
	{
	}
}

// BrnPropManager.cpp:2111
void BrnPhysics::Props::PropManager::ApplyAntiHerdingForce(InputBuffer *  lpSimInputBuffer, BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCar, RigidBodyId  lPropRigidBodyId, const rw::math::vpu::Vector3  lPropWorldPos, const VecFloat  lvfPropMass, const rw::math::vpu::Vector3  lPropLinearVelocity, const rw::math::vpu::Vector3  lCollisionNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2113
		InApplyForce lApplyForceEvent;

		// BrnPropManager.cpp:2114
		Vector3 lForceDirection;

		// BrnPropManager.cpp:2115
		VecFloat lForceMagnitude;

		// BrnPropManager.cpp:2116
		Matrix44Affine lCarTransform;

		// BrnPropManager.cpp:2117
		VecFloat lvfPropsUpwardVelocity;

		// BrnPropManager.cpp:2118
		Vector3 lCarsWorldLinearVelocity;

		// BrnPropManager.cpp:2119
		VecFloat lvfTargetUpwardVel;

		// BrnPropManager.cpp:2120
		VecFloat lvfRaceCarSpeed;

		// BrnPropManager.cpp:2121
		VecFloat lvfPropHeightAboveCar;

		// BrnPropManager.cpp:2122
		MaskScalar lAboveRaceCar;

		// BrnPropManager.cpp:2123
		VecFloat lSidewaysDirection;

		// BrnPropManager.cpp:2124
		Vector3 lPropRelativePosition;

		// BrnPropManager.cpp:2125
		Vector3 lSideForce;

		// BrnPropManager.cpp:2126
		Vector3 lFinalForce;

		// BrnPropManager.cpp:2165
		Matrix44Affine lInverseCarTransform;

		rw::math::vpu::TransformVector(/* parameters */);
	}
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetApplyForceQueue(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>::AddEventSafe(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:2193
void BrnPhysics::Props::PropManager::GetTriangleCacheSlotAndRadius(PropEntityID  lPropEntityId, int32_t  liPhysicalPropIndex, const int32_t &  liOutCacheSlotIndex, const float32_t &  lfOutCacheSphereRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2198
		int32_t liPartIndex;

		// BrnPropManager.cpp:2200
		PropPartInstance * lpPart;

		// BrnPropManager.cpp:2220
		uint32_t luTypeId;

		// BrnPropManager.cpp:2221
		uint32_t luPartId;

		// BrnPropManager.cpp:2222
		const PropPartTypeData * lpPartType;

		HasPartJustBeenRemoved(/* parameters */);
	}
	{
		// BrnPropManager.cpp:2259
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnPropManager.cpp:2231
		int32_t liPropIndex;

		// BrnPropManager.cpp:2233
		PropInstance * lpProp;

		// BrnPropManager.cpp:2251
		const PropTypeData * lpPropType;

		HasPropJustBeenRemoved(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		PropInstance::GetTypeId(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
	PropPartInstance::GetType(/* parameters */);
	PropPhysicsDataHeader::GetType(/* parameters */);
	{
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPropManager.cpp:2279
void BrnPhysics::Props::PropManager::UpdateTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2285
		int32_t liEvent;

	}
	{
		// BrnPropManager.cpp:2290
		const const UpdatePropEvent & lEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetEvent(/* parameters */);
	}
	{
		// BrnPropManager.cpp:2295
		int32_t liCacheSlotIndex;

		// BrnPropManager.cpp:2296
		float32_t lfCacheSphereRadius;

		{
			// BrnPropManager.cpp:2304
			const float32_t kfPropTriCachePadding;

			rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
			CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::UpdateCachedObjectPosition(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::AddEvent(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:2444
void BrnPhysics::Props::PropManager::DoPartWorldContactGeneration(CollisionGenerator *  lpContactGenerator, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, const const UpdatePropEvent &  lUpdatePartEvent, const int32_t &  liNumJobsAdded, LinearMalloc *  lpMalloc, const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2451
		int32_t liPartIndex;

		// BrnPropManager.cpp:2452
		PropPartInstance * lpPart;

		// BrnPropManager.cpp:2453
		int32_t liCacheSlotIndex;

		// BrnPropManager.cpp:2454
		uint32_t luTypeId;

		// BrnPropManager.cpp:2455
		uint32_t luPartId;

		// BrnPropManager.cpp:2456
		const PropTypeData * lpPropType;

		// BrnPropManager.cpp:2457
		const PropPartTypeData * lpPartType;

		// BrnPropManager.cpp:2458
		int32_t liNum4Tris;

		// BrnPropManager.cpp:2459
		const Triangle4 * lp4Tris;

		// BrnPropManager.cpp:2460
		TriangleList lListOfCachedTris;

		// BrnPropManager.cpp:2493
		PrimitivePairListBuilder lPrimPairList;

		// BrnPropManager.cpp:2496
		VecFloat lvfPadding;

	}
	HasPartJustBeenRemoved(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
	PropPartInstance::GetType(/* parameters */);
	PropPhysicsDataHeader::GetType(/* parameters */);
	{
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnPropManager.cpp:2502
		uint8_t lu8Vol;

	}
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	{
		// BrnPropManager.cpp:2478
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnWorld::PropEntityID::GetValue(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
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
		// BrnPropManager.cpp:2504
		VolRef::Volume * lpPartVolume;

		// BrnPropManager.cpp:2505
		Matrix44Affine lPartTransform;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPropManager.cpp:1298
void BrnPhysics::Props::PropManager::SetupAndValidatePropContact(InAddPotentialContact *  lpOutContact, const PotentialContact *  lpInPotentialContact, VehicleManager *  lpVehicleManager, InputBuffer *  lpSimInputBuffer, PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer, RigidBodyId  lWorldRigidBodyId, bool  lbOtherEntityIsFrozen, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:1300
		int32_t liPhysicsIndex;

		// BrnPropManager.cpp:1301
		PropEntityID lPropEntityId;

		// BrnPropManager.cpp:1302
		RigidBodyId lPropRigidBodyId;

		// BrnPropManager.cpp:1303
		RigidBodyId lOtherRigidBodyId;

		// BrnPropManager.cpp:1304
		PropInstance * lpPropInstance;

		// BrnPropManager.cpp:1305
		Vector3 lPointOnOtherRigidBody;

		// BrnPropManager.cpp:1306
		Vector3 lPointOnProp;

		// BrnPropManager.cpp:1355
		bool lbPropIsEntityA;

		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		BrnWorld::PropEntityID::PropEntityID(/* parameters */);
		HasPropJustBeenRemoved(/* parameters */);
		{
			// BrnPropManager.cpp:1651
			int32_t liPartIndex;

			CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		}
	}
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	HasPropJustBeenRemoved(/* parameters */);
	HasPartJustBeenRemoved(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
	{
		// BrnPropManager.cpp:1639
		int32_t liPropIndex;

		BrnWorld::PropEntityID::PropEntityID(/* parameters */);
		FindPropIndex(/* parameters */);
	}
	HasPartJustBeenRemoved(/* parameters */);
	CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
	FindPropIndex(/* parameters */);
	FindPropIndex(/* parameters */);
	{
		// BrnPropManager.cpp:1313
		bool lbTrafficExists;

		// BrnPropManager.cpp:1314
		EntityId lDummyTrafficEntityId;

		Vehicle::VehicleManager::GetTrafficPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
		CgsSceneManager::EntityId::SetOwner(/* parameters */);
		CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
	}
	{
		// BrnPropManager.cpp:1333
		bool lbTrafficExists;

		// BrnPropManager.cpp:1334
		EntityId lDummyTrafficEntityId;

		Vehicle::VehicleManager::GetTrafficPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
		CgsSceneManager::EntityId::SetOwner(/* parameters */);
		CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPropManager.cpp:1538
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

		Vehicle::VehicleManager::GetRaceCarPhysics(/* parameters */);
		{
			// BrnPropManager.cpp:1543
			Matrix44Affine lCarTransform;

			// BrnPropManager.cpp:1544
			PropInstance * lpProp;

			// BrnPropManager.cpp:1545
			const PropTypeData * lpPropType;

			// BrnPropManager.cpp:1556
			Vector3 lNormal;

			// BrnPropManager.cpp:1557
			MaskScalar lNormalTowardsCar;

			CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			PropInstance::GetTypeId(/* parameters */);
			PropPhysicsDataHeader::GetType(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			PropTypeData::IsLamppost(/* parameters */);
			rw::math::vpu::CompLessThan(/* parameters */);
			rw::math::vpu::Select(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				// BrnPropManager.cpp:1575
				const PropTypeData * lpType;

				CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
				PropInstance::GetTypeId(/* parameters */);
				PropPhysicsDataHeader::GetType(/* parameters */);
			}
		}
	}
	{
		// BrnPropManager.cpp:1497
		Vector3 lFlatNormal;

		// BrnPropManager.cpp:1499
		VecFloat lvfPenetration;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	PropInstance::GetJointIndex(/* parameters */);
	CgsContainers::BitArray<15u>::SetBit(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	{
		// BrnPropManager.cpp:1513
		int32_t liOtherPropIndex;

		BrnWorld::PropEntityID::PropEntityID(/* parameters */);
		FindPropIndex(/* parameters */);
	}
	{
		// BrnPropManager.cpp:1613
		RigidBodyId lPartRigidBodyId;

		// BrnPropManager.cpp:1614
		int32_t liPartIndex;

		// BrnPropManager.cpp:1617
		PropPartInstance * lpPart;

		// BrnPropManager.cpp:1618
		float32_t lfMass;

		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		BrnWorld::PropEntityID::PropEntityID(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		PropPartInstance::GetType(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
	{
		// BrnPropManager.cpp:1516
		PropInstance * lpOtherProp;

	}
}

// BrnPropManager.cpp:2569
void BrnPhysics::Props::PropManager::DoPropInstanceWorldContactGeneration(CollisionGenerator *  lpContactGenerator, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, const const UpdatePropEvent &  lUpdatePropEvent, const int32_t &  liNumJobsAdded, LinearMalloc *  lpMalloc, const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2576
		int32_t liPropIndex;

		// BrnPropManager.cpp:2577
		PropInstance * lpProp;

		// BrnPropManager.cpp:2578
		int32_t liCacheSlotIndex;

		// BrnPropManager.cpp:2579
		const PropTypeData * lpPropType;

		// BrnPropManager.cpp:2580
		int32_t liNum4Tris;

		// BrnPropManager.cpp:2581
		const Triangle4 * lp4Tris;

		// BrnPropManager.cpp:2582
		TriangleList lListOfCachedTris;

		// BrnPropManager.cpp:2613
		PrimitivePairListBuilder lPrimPairList;

		// BrnPropManager.cpp:2616
		VecFloat lvfPadding;

	}
	HasPropJustBeenRemoved(/* parameters */);
	CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	BrnWorld::PropEntityID::GetValue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
	PropInstance::GetTypeId(/* parameters */);
	PropPhysicsDataHeader::GetType(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		// BrnPropManager.cpp:2622
		uint8_t lu8Vol;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	{
		// BrnPropManager.cpp:2600
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnWorld::PropEntityID::GetValue(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
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
		// BrnPropManager.cpp:2624
		VolRef::Volume * lpVolume;

		// BrnPropManager.cpp:2625
		Matrix44Affine * lpRelativeTransform;

		// BrnPropManager.cpp:2626
		Matrix44Affine lVolumeMatrix;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:2334
void BrnPhysics::Props::PropManager::BeginPropWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, CollisionGenerator *  lpContactGenerator, LinearMalloc *  lpMalloc, const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2340
		int32_t liEvent;

		CgsSceneManager::CgsCollision::CollisionGenerator::Prepare(/* parameters */);
	}
	{
		// BrnPropManager.cpp:2354
		const const UpdatePropEvent & lEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetEvent(/* parameters */);
	}
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
}

// BrnPropManager.cpp:2805
void BrnPhysics::Props::PropManager::AddContactResultsToQueue(PotentialContactInterface *  lpPotentialContactInterface, CollisionGenerator *  lpContactGenerator, EntityId  lWorldEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.cpp:2810
		int32_t liResultsList;

		// BrnPropManager.cpp:2811
		uint16_t lu16Result;

	}
	{
		// BrnPropManager.cpp:2818
		CollisionResultList lResultList;

		CgsSceneManager::CgsCollision::BaseCollisionGenerator::GetResultList(/* parameters */);
	}
	{
		// BrnPropManager.cpp:2825
		const const PrimitiveTestResult & lResult;

		{
			// BrnPropManager.cpp:2829
			PotentialContact lContact;

			rw::math::vpu::Vector3::operator=(/* parameters */);
		}
		CgsSceneManager::CgsCollision::CollisionResultList::GetPrimitiveTestResult(/* parameters */);
		BrnWorld::PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		rw::math::vpu::Vector3::operator=(/* parameters */);
		PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
		CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::AddEventSafe(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPropManager.cpp:2405
void BrnPhysics::Props::PropManager::EndPropWorldContactGeneration(PotentialContactInterface *  lpPotentialContactInterface, CollisionGenerator *  lpContactGenerator, EntityId  lWorldEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
}

