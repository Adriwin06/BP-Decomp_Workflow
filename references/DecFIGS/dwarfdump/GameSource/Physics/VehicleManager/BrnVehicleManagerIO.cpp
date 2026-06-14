// BrnVehicleManagerIO.cpp:44
void BrnPhysics::Vehicle::VehicleManagerOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleOutputRequestInterface::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
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
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::SetEventPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerIO.cpp:63
void BrnPhysics::Vehicle::VehicleManagerOutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleOutputRequestInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<13440,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

