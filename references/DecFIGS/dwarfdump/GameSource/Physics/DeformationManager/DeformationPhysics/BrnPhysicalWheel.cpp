// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicalWheel.cpp:116
		const VecFloat kvfMass;

		// BrnPhysicalWheel.cpp:117
		const VecFloat kvfOneOverTwelve;

		// BrnPhysicalWheel.cpp:118
		const VecFloat kvfOneOverFour;

		// BrnPhysicalWheel.cpp:119
		const VecFloat kvfInnerRadiusProportion;

	}

}

// BrnPhysicalWheel.cpp:124
void BrnPhysics::Deformation::PhysicalWheel::AddToSim(InputBuffer *  lpSimInput, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const rw::math::vpu::Vector3  lInitialLinearVelocity, const rw::math::vpu::Vector3  lInitialAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalWheel.cpp:126
		InAddRigidBody lAddRigidBodyEvent;

		// BrnPhysicalWheel.cpp:127
		VecFloat lvfHeightSquared;

		// BrnPhysicalWheel.cpp:128
		VecFloat lvfOuterRadiusSquared;

		// BrnPhysicalWheel.cpp:129
		VecFloat lvfInnerRadius;

		// BrnPhysicalWheel.cpp:130
		VecFloat lvfInnerRadiusSquared;

		// BrnPhysicalWheel.cpp:131
		VecFloat lvfRadiusTerm;

		// BrnPhysicalWheel.cpp:135
		NewRigidBody * lpRigidBody;

		// BrnPhysicalWheel.cpp:137
		Vector3 lCylInert;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	NonConstructedClassContainer<CgsPhysics::NewRigidBody>::GetObjectPointer(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
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
}

// BrnPhysicalWheel.cpp:69
void BrnPhysics::Deformation::PhysicalWheel::AddToScene(InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalWheel.cpp:72
		CylinderVolume * lpCylinder;

		// BrnPhysicalWheel.cpp:75
		Matrix44Affine * lpVolTrans;

		// BrnPhysicalWheel.cpp:83
		VolumeId lVolumeId;

		// BrnPhysicalWheel.cpp:87
		VolumeInstanceId lVolumeInstanceID;

		rw::Resource::Resource(/* parameters */);
		GetVolumeId(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(/* parameters */);
		CgsSceneManager::VolumeId::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetX(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(/* parameters */);
		GetVolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstance(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalWheel.cpp:47
void BrnPhysics::Deformation::PhysicalWheel::Release(InputBuffer *  lpSimInput, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalWheel.cpp:49
		InRemoveRigidBody lRemoveRigidBodyEvent;

	}
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetRemoveRigidBodyQueue(/* parameters */);
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
}

// BrnPhysicalWheel.cpp:28
