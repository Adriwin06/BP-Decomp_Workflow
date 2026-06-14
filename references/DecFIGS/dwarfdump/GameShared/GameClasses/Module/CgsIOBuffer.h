// CgsIOBuffer.h:56
struct CgsModule::IOBuffer {
	// CgsFlagSet.h:307
	typedef FlagSet<std::int8_t> FlagSet8;

private:
	// CgsIOBuffer.h:124
	IOBuffer::FlagSet8 mxStatusFlags;

public:
	// CgsIOBuffer.h:61
	void Construct();

	// CgsIOBuffer.h:65
	void Destruct();

	// CgsIOBuffer.h:69
	void LockForWrite();

	// CgsIOBuffer.h:73
	void UnlockForWrite();

	// CgsIOBuffer.h:77
	void LockForRead() const;

	// CgsIOBuffer.h:81
	void UnlockForRead() const;

	// CgsIOBuffer.h:88
	void * operator new(size_t);

	// CgsIOBuffer.h:90
	void operator delete(void *);

	// CgsIOBuffer.h:92
	void * operator new(size_t, void *);

	// CgsIOBuffer.h:94
	void operator delete(void *, void *);

protected:
	// CgsIOBuffer.h:101
	bool IsBufferLockedForReading() const;

	// CgsIOBuffer.h:104
	bool IsBufferLockedForWriting() const;

	// CgsIOBuffer.h:107
	bool IsBufferLocked() const;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct VariableEventQueue<128,16>;

	struct EventReceiverQueue<16384,16>;

	struct EventReceiverQueue<2048,16>;

	struct IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>;

	struct IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct VariableEventQueue<512,16>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>;

	struct BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>;

	struct EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>;

	struct VariableEventQueue<8192,16>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct EventReceiverQueue<2048,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,200>;

	struct BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>;

	struct EventQueue<BrnPhysics::Props::PropUpdateNotification,200>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct EventReceiverQueue<4096,16>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>;

	struct EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>;

	struct BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest>;

	struct EventQueue<BrnWorld::PVSIO::GetZoneRequest,8>;

	struct BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse>;

	struct EventQueue<BrnWorld::PVSIO::GetZoneResponse,8>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct Module;

	struct ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct VariableEventQueue<1536,16>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct VariableEventQueue<1024,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct VariableEventQueue<3072,16>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseVariableEventQueue;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct EventReceiverQueue<256,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct VariableEventQueue<512,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1>;

	struct VariableEventQueue<4032,16>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,200>;

	struct BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>;

	struct EventQueue<BrnPhysics::Props::PropUpdateNotification,200>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>;

	struct EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>;

	struct VariableEventQueue<128,16>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct IOHelper<RendererIO::InputBuffer>;

	struct IOHelper<RendererIO::OutputBuffer>;

	struct IOHelper<CgsInput::InputIO::OutputBuffer>;

	struct IOHelper<BrnNetwork::BrnNetworkModuleIO::OutputBuffer>;

	struct IOHelper<BrnGameState::GameStateModuleIO::OutputBuffer>;

	struct IOHelper<BrnWorldIO::UpdateOutputBuffer>;

	struct IOHelper<BrnDirector::DirectorIO::InputBuffer>;

	struct IOHelper<BrnSound::Module::Io::RootOutputBuffer>;

	struct IOHelper<BrnReplays::ReplayIO::OutputBuffer_PreSim>;

	struct IOHelper<BrnReplays::ReplayIO::OutputBuffer_PostSim>;

	struct IOHelper<BrnEffects::EffectsIO::OutputBuffer>;

	struct IOHelper<BrnSound::Module::Io::RootPreUpdateOutputBuffer>;

	struct IOHelper<BrnWorldIO::DispatchInputBuffer>;

	struct IOHelper<BrnWorldIO::DispatchOutputBuffer>;

	struct IOHelper<BrnEffects::EffectsIO::DispatchInputBuffer>;

	struct IOHelper<CgsInput::InputIO::PreWorldInputBuffer>;

	struct IOHelper<BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer>;

	struct IOHelper<BrnGameState::GameStateModuleIO::PreWorldInputBuffer>;

	struct IOHelper<BrnWorldIO::UpdateInputBuffer>;

	struct IOHelper<CgsInput::InputIO::PostWorldInputBuffer>;

	struct IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>;

	struct IOHelper<BrnDirector::DirectorIO::SceneQueryInputBuffer>;

	struct IOHelper<BrnDirector::DirectorIO::SceneQueryOutputBuffer>;

	struct IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>;

	struct IOHelper<BrnGameState::GameStateModuleIO::PostWorldInputBuffer>;

	struct IOHelper<BrnSound::Module::Io::RootInputBuffer>;

	struct IOHelper<BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer>;

	struct IOHelper<BrnEffects::EffectsIO::InputBuffer>;

	struct IOHelper<BrnReplays::ReplayIO::InputBuffer_PreSim>;

	struct IOHelper<BrnReplays::ReplayIO::InputBuffer_PostSim>;

	struct ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseVariableEventQueue;

	struct DataStructure;

	struct VariableEventQueue<16384,16>;

	struct IOBufferStack;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<256,16>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct EventReceiverQueue<1024,16>;

	struct EventReceiverQueue<256,16>;

	struct VariableEventQueue<256,16>;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct Module;

}

// CgsIOBuffer.h:56
struct CgsModule::IOBuffer {
private:
	// CgsIOBuffer.h:124
	MemoryBlock::FlagSet8 mxStatusFlags;

public:
	// CgsIOBuffer.h:61
	void Construct();

	// CgsIOBuffer.h:65
	void Destruct();

	// CgsIOBuffer.h:69
	void LockForWrite();

	// CgsIOBuffer.h:73
	void UnlockForWrite();

	// CgsIOBuffer.h:77
	void LockForRead() const;

	// CgsIOBuffer.h:81
	void UnlockForRead() const;

	// CgsIOBuffer.h:88
	void * operator new(size_t);

	// CgsIOBuffer.h:90
	void operator delete(void *);

	// CgsIOBuffer.h:92
	void * operator new(size_t, void *);

	// CgsIOBuffer.h:94
	void operator delete(void *, void *);

protected:
	// CgsIOBuffer.h:101
	bool IsBufferLockedForReading() const;

	// CgsIOBuffer.h:104
	bool IsBufferLockedForWriting() const;

	// CgsIOBuffer.h:107
	bool IsBufferLocked() const;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<4096,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct VariableEventQueue<256,16>;

	struct VariableEventQueue<1024,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<256,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<2048,16>;

	struct EventReceiverQueue<1024,16>;

	struct EventReceiverQueue<32768,16>;

	struct IOHelper<CgsResource::ResourceIO::OutputBuffer>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<4096,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct VariableEventQueue<256,16>;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>;

	struct EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>;

	struct EventQueue<BrnTraffic::DetachedPartRenderEvent,20>;

	struct EventReceiverQueue<4096,16>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct DataStructure;

	struct EventReceiverQueue<1024,16>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct VariableEventQueue<1536,16>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>;

	struct IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>;

	struct VariableEventQueue<13440,16>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>;

	struct BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>;

	struct EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>;

	struct VariableEventQueue<8192,16>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,200>;

	struct BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>;

	struct EventQueue<BrnPhysics::Props::PropUpdateNotification,200>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>;

	struct EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>;

	struct EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<256,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>;

	struct VariableEventQueue<13440,16>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>;

	struct BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>;

	struct EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>;

	struct VariableEventQueue<8192,16>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct EventReceiverQueue<2048,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,200>;

	struct BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>;

	struct EventQueue<BrnPhysics::Props::PropUpdateNotification,200>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>;

	struct EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>;

	struct EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>;

	struct IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>;

	struct IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>;

	struct IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>;

	struct IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>;

	struct IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>;

	struct IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>;

	struct IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>;

	struct IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>;

	struct IOHelper<BrnAI::AIModuleIO::OutputBuffer>;

	struct IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>;

	struct IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>;

	struct IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>;

	struct IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>;

	struct IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>;

	struct IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>;

	struct IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>;

	struct IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>;

	struct IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>;

	struct IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>;

	struct IOHelper<BrnAI::AIModuleIO::InputBuffer>;

	struct IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>;

	struct IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>;

	struct IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>;

	struct IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>;

	struct IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>;

	struct IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>;

	struct IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>;

	struct IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataBuffer;

	struct DataStructure;

	// Declaration
	struct ModuleSingleBuffered {
	public:
		~ModuleSingleBuffered();

		ModuleSingleBuffered();

	}

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseVariableEventQueue;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1>;

	struct VariableEventQueue<16384,16>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnDirector::NewVehicleEvent>;

	struct EventQueue<BrnDirector::NewVehicleEvent,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>;

	struct BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct VariableEventQueue<512,16>;

	struct EventReceiverQueue<128,16>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<8192,16>;

	struct EventReceiverQueue<16384,16>;

	struct VariableEventQueue<256,16>;

	struct EventReceiverQueue<8192,16>;

	struct VariableEventQueue<1024,16>;

	struct EventQueue<CgsSceneManager::OverlappingIntervalPair,131072>;

	struct BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>;

	struct VariableEventQueue<13440,16>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>;

	struct EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>;

	struct EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>;

	struct EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28>;

	struct BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>;

	struct EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28>;

	struct BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28>;

	struct BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>;

	struct EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>;

	struct EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>;

	struct BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>;

	struct EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>;

	struct BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>;

	struct EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct EventReceiverQueue<2048,16>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>;

	struct BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>;

	struct EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>;

	struct BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,200>;

	struct BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>;

	struct EventQueue<BrnPhysics::Props::PropUpdateNotification,200>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>;

	struct EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>;

	struct BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>;

	struct EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>;

	struct EventReceiverQueue<4096,16>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>;

	struct EventQueue<BrnTraffic::DetachedPartRenderEvent,20>;

	struct BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>;

	struct EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>;

	struct BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest>;

	struct EventQueue<BrnWorld::PVSIO::GetZoneRequest,8>;

	struct BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse>;

	struct EventQueue<BrnWorld::PVSIO::GetZoneResponse,8>;

	struct BaseEventQueue<int8_t>;

	struct EventQueue<int8_t,50>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>;

	struct BaseEventQueue<BrnPhysics::Props::PropRaceCarContact>;

	struct EventQueue<BrnPhysics::Props::PropRaceCarContact,30>;

	struct EventQueue<BrnPhysics::Props::UpdatePropEvent,15>;

	struct EventReceiverQueue<32768,16>;

	struct VariableEventQueue<128,16>;

	struct EventReceiverQueue<192,16>;

	struct EventReceiverQueue<5120,16>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>;

	struct Module;

	struct ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<2048,16>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct DataStructure;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<1024,16>;

	struct EventReceiverQueue<1024,16>;

	struct ModuleSingleBufferedTemplate<CgsGraphics::FontIO::InputBuffer,CgsGraphics::FontIO::OutputBuffer>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct BaseEventReceiverQueue;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<5120,16>;

	struct VariableEventQueue<16384,16>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct IOBufferStack;

	struct DataStructure;

	struct Event;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64>;

	struct BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>;

	struct EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1>;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
	struct IOBuffer;

	struct Event;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<65536,16>;

	struct VariableEventQueue<13312,16>;

	struct VariableEventQueue<5120,16>;

	struct VariableEventQueue<16384,16>;

	struct VariableEventQueue<2048,16>;

	struct VariableEventQueue<32768,16>;

	struct VariableEventQueue<4096,16>;

	struct IOBufferStack;

	struct DataStructure;

	struct VariableEventQueue<8192,16>;

	struct BaseEventQueue<CgsResource::Events::LoadBundleRequest>;

	struct EventQueue<CgsResource::Events::LoadBundleRequest,256>;

	struct BaseEventQueue<CgsResource::Events::UnloadBundleRequest>;

	struct EventQueue<CgsResource::Events::UnloadBundleRequest,256>;

	struct BaseEventQueue<CgsResource::Events::LoadBundleResponse>;

	struct EventQueue<CgsResource::Events::LoadBundleResponse,256>;

	struct BaseEventQueue<CgsResource::Events::UnloadBundleResponse>;

	struct EventQueue<CgsResource::Events::UnloadBundleResponse,256>;

	struct VariableEventQueue<256,16>;

	struct EventReceiverQueue<128,16>;

	struct EventReceiverQueue<16384,16>;

	struct IOHelper<CgsMemory::MemoryIO::InputBuffer>;

	struct IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>;

	struct IOHelper<CgsResource::PoolIO::InputBuffer>;

	struct IOHelper<CgsMemory::MemoryIO::OutputBuffer>;

	struct IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>;

	struct IOHelper<CgsResource::PoolIO::OutputBuffer>;

	struct IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>;

	struct BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>;

	struct EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>;

	struct BaseEventQueue<CgsInput::InputIO::BaseInputEvent>;

	struct EventQueue<CgsInput::InputIO::BaseInputEvent,8>;

	struct BaseEventQueue<CgsInput::InputIO::PadMapping>;

	struct EventQueue<CgsInput::InputIO::PadMapping,7>;

	struct BaseEventQueue<CgsInput::InputIO::BindResult>;

	struct EventQueue<CgsInput::InputIO::BindResult,8>;

	struct BaseEventQueue<CgsInput::InputIO::UnBindResult>;

	struct EventQueue<CgsInput::InputIO::UnBindResult,8>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>;

	struct BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>;

	struct EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>;

	struct EventReceiverQueue<3072,16>;

	struct EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>;

	struct EventQueue<BrnNetwork::RoadRulesMessageData,40>;

	struct VariableEventQueue<14000,16>;

	struct EventReceiverQueue<1024,16>;

	struct VariableEventQueue<1536,16>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>;

	struct BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>;

	struct EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>;

	struct BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>;

	struct EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>;

	struct BaseEventQueue<CgsSceneManager::ErrorEvent>;

	struct EventQueue<CgsSceneManager::ErrorEvent,128>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>;

	struct EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>;

	struct EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>;

	struct EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::PropContact>;

	struct EventQueue<BrnPhysics::ContactSpy::PropContact,100>;

	struct BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>;

	struct EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>;

	struct EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>;

	struct VariableEventQueue<4920,16>;

	struct BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>;

	struct EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>;

	struct BaseEventQueue<BrnGameState::TakedownEvent>;

	struct EventQueue<BrnGameState::TakedownEvent,8>;

	struct EventReceiverQueue<512,16>;

	struct VariableEventQueue<1024,16>;

	struct BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>;

	struct EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>;

	struct EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>;

	struct EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>;

	struct EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>;

	struct EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>;

	struct EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>;

	struct BaseEventQueue<uint16_t>;

	struct EventQueue<std::uint16_t,32>;

	struct BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>;

	struct EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>;

	struct BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>;

	struct EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>;

	struct BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>;

	struct EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>;

	struct BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>;

	struct EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>;

	struct BaseEventQueue<BrnWorld::DetachedPartRenderEvent>;

	struct EventQueue<BrnWorld::DetachedPartRenderEvent,20>;

	struct EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>;

	struct BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>;

	struct BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>;

	struct EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>;

	struct VariableEventQueue<131072,16>;

	struct BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>;

	struct EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>;

	struct BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>;

	struct EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>;

	struct BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>;

	struct EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>;

	struct BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>;

	struct EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>;

	struct BaseEventQueue<BrnNetwork::RoadRulesRecvData>;

	struct EventQueue<BrnNetwork::RoadRulesRecvData,14>;

	struct BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>;

	struct BaseEventQueue<BrnNetwork::RoadRulesMessageData>;

	struct BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>;

	struct EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>;

	struct EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>;

	struct BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>;

	struct EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>;

	struct VariableEventQueue<3072,16>;

	struct BaseEventQueue<BrnNetwork::StatsRequestEvent>;

	struct EventQueue<BrnNetwork::StatsRequestEvent,16>;

	struct BaseEventQueue<BrnNetwork::NetworkPlayerStats>;

	struct EventQueue<BrnNetwork::NetworkPlayerStats,16>;

	struct BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>;

	struct EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>;

	struct Module;

}

// CgsIOBuffer.h:29
namespace CgsModule {
}

