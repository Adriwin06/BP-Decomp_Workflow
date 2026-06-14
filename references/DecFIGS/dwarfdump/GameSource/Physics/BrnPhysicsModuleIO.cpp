// BrnPhysicsModuleIO.cpp:125
void BrnPhysics::PhysicsModuleIO::InternalBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	Deformation::DeformationInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
	Deformation::DeformationInputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
}

// BrnPhysicsModuleIO.cpp:145
void BrnPhysics::PhysicsModuleIO::InternalBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPhysicsModuleIO.cpp:107
void BrnPhysics::PhysicsModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPhysicsModuleIO.cpp:66
void BrnPhysics::PhysicsModuleIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPhysicsModuleIO.cpp:36
void BrnPhysics::PhysicsModuleIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	Vehicle::VehicleEffectsInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::SetEventPointer(/* parameters */);
	Vehicle::VehicleEffectsInputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	Props::PropInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	Props::PropInputInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicsModuleIO.cpp:82
void BrnPhysics::PhysicsModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	Deformation::DeformationOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	Deformation::DeformationOutputInterface::Clear(/* parameters */);
	Deformation::DeformationOutputInterfaceForEntityModules::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	Deformation::DeformationOutputInterfaceForEntityModules::Clear(/* parameters */);
	Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<13440,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13440,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear(/* parameters */);
	Props::PropOutputInterface::Construct(/* parameters */);
	Props::PropOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

