struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct cParticleEmitter;

// Declaration
struct LoadingScriptedState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnPhysics::PhysicsModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::UpdateCachedPositions(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeDeformationManagerToSimulation(InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeDeformationManagerToSimulation_PostScene(InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeDeformationManagerToSimulation_PostPhysics(InputBuffer *  lpSimModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::CheckState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::ApplyPlayerStats(const SendCarStatsAction *  lpSendCarStatsAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.h:1643
		float32_t lfCarStrength;

	}
}

void BrnPhysics::Vehicle::VehiclePhysics::SetBoostBarType(BrnResource::ECarType  leCarType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::HandlePlayerStatsUpdate(const SendCarStatsAction *  lpSendCarStatsAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vehicle::VehicleManager::ApplyPlayerStats(/* parameters */);
	Vehicle::VehiclePhysics::SetBoostBarType(/* parameters */);
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Construct(InEventSetEntityPosition *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::SetEventPointer(InEventSetEntityPosition *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Construct(InEventSetVolumeInstanceTransform *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::SetEventPointer(InEventSetVolumeInstanceTransform *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Construct(InEventAddEntity *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::SetEventPointer(InEventAddEntity *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Construct(InEventAddDynamicVolume *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::SetEventPointer(InEventAddDynamicVolume *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Construct(InEventAddForCollision *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::SetEventPointer(InEventAddForCollision *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Construct(InEventAddVolumeInstance *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::SetEventPointer(InEventAddVolumeInstance *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Construct(InEventForceNoPadding *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::SetEventPointer(InEventForceNoPadding *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Construct(InEventRemoveEntity *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::SetEventPointer(InEventRemoveEntity *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Construct(InEventRemoveForCollision *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::SetEventPointer(InEventRemoveForCollision *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Construct(InEventRemoveVolume *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::SetEventPointer(InEventRemoveVolume *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Construct(InEventRemoveVolumeInstance *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::SetEventPointer(InEventRemoveVolumeInstance *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Construct(InEventReplaceDynamicVolume *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::SetEventPointer(InEventReplaceDynamicVolume *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Construct(InEventSetCullingGroupPair *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::SetEventPointer(InEventSetCullingGroupPair *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Construct(InEventClearCullingTable *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::SetEventPointer(InEventClearCullingTable *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Construct(InEventSetEntityRadius *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::SetEventPointer(InEventSetEntityRadius *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Construct(InEventSetPadding *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::SetEventPointer(InEventSetPadding *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Construct(InEventClearEntityPadding *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::SetEventPointer(InEventClearEntityPadding *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Construct(InEventSetVolumeInstanceCullingGroup *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::SetEventPointer(InEventSetVolumeInstanceCullingGroup *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Construct(InEventAddVolumeInstanceForCaching *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::SetEventPointer(InEventAddVolumeInstanceForCaching *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Construct(InEventAddToCache *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::SetEventPointer(InEventAddToCache *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Construct(InEventUpdateCachedPosition *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::SetEventPointer(InEventUpdateCachedPosition *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Construct(InEventRemoveFromCache *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::SetEventPointer(InEventRemoveFromCache *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Construct(InEventAddPolySoupList *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::SetEventPointer(InEventAddPolySoupList *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Construct(InEventClearPolySoupLists *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::SetEventPointer(InEventClearPolySoupLists *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Construct(InEventRemoveAllEntities *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::SetEventPointer(InEventRemoveAllEntities *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>::Construct(/* parameters */);
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::OrthoNormalize3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44affine_operation_platform_inline.h:487
	Matrix44Affine & result;

	{
		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpU;

		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpV;

		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpW;

		// matrix44affine_operation_platform_inline.h:417
		Vector3 right;

		// matrix44affine_operation_platform_inline.h:418
		Vector3 up;

		// matrix44affine_operation_platform_inline.h:419
		Vector3 at;

		// matrix44affine_operation_platform_inline.h:420
		const const rw::math::vpu::Vector3 & pos;

		// matrix44affine_operation_platform_inline.h:422
		Vector3 vInner;

		// matrix44affine_operation_platform_inline.h:487
		Matrix44Affine result;

		Vector3::Vector3(/* parameters */);
		Normalize(/* parameters */);
	}
	Normalize(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	{
		{
		}
	}
	Normalize(/* parameters */);
	{
		{
		}
	}
	Magnitude(/* parameters */);
	Magnitude(/* parameters */);
	{
		{
		}
	}
	Magnitude(/* parameters */);
	operator><VectorAxisX>(/* parameters */);
	{
		// matrix44affine_operation_platform_inline.h:432
		Vector3 vOuter;

	}
	Cross(/* parameters */);
	Normalize(/* parameters */);
	{
	}
	Cross(/* parameters */);
	Normalize(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	operator><VectorAxisY>(/* parameters */);
	operator><VectorAxisZ>(/* parameters */);
	Dot(/* parameters */);
	Dot(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Dot(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Vector3::Vector3(/* parameters */);
	operator< <VectorAxisX, VectorAxisY>(/* parameters */);
	operator< <VectorAxisX, VectorAxisZ>(/* parameters */);
	operator< <VectorAxisY, VectorAxisZ>(/* parameters */);
}

void rw::math::vpu::Reciprocal(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:172
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:173
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// scalar_operation_inline.h:173
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			{
				// scalar_operation_inline.h:173
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// scalar_operation_inline.h:173
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:25
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnPhysics::ExternalPhysicsBody::ZeroForces() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(const rw::math::vpu::Matrix44Affine &  in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:204
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// matrix44affine_operation_platform_inline.h:206
		VectorIntrinsicUnion::VectorIntrinsic negatePos;

		// matrix44affine_operation_platform_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic[4] tempT;

		// matrix44affine_operation_platform_inline.h:214
		VectorIntrinsicUnion::VectorIntrinsic[4] transposedTransform;

		// matrix44affine_operation_platform_inline.h:219
		VectorIntrinsicUnion::VectorIntrinsic Z;

		// matrix44affine_operation_platform_inline.h:220
		VectorIntrinsicUnion::VectorIntrinsic Y;

		// matrix44affine_operation_platform_inline.h:221
		VectorIntrinsicUnion::VectorIntrinsic X;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic bX;

		// matrix33_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic bY;

		// matrix33_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic bZ;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row2;

		{
			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix33 &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:407
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:408
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::QuaternionFromMatrix44Affine(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QuaternionFromMatrix33(const rw::math::vpu::Matrix33 &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quaternion_operation_inline.h:303
		VectorIntrinsicUnion::VectorIntrinsic half;

		// quaternion_operation_inline.h:304
		VectorIntrinsicUnion::VectorIntrinsic one;

		// quaternion_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// quaternion_operation_inline.h:306
		VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatX;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatY;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatZ;

		// quaternion_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic signedX;

		// quaternion_operation_inline.h:314
		VectorIntrinsicUnion::VectorIntrinsic signedY;

		// quaternion_operation_inline.h:315
		VectorIntrinsicUnion::VectorIntrinsic signedZ;

		// quaternion_operation_inline.h:316
		VectorIntrinsicUnion::VectorIntrinsic sumXY;

		// quaternion_operation_inline.h:317
		VectorIntrinsicUnion::VectorIntrinsic sumZOne;

		// quaternion_operation_inline.h:318
		VectorIntrinsicUnion::VectorIntrinsic valuesToSqrt;

		// quaternion_operation_inline.h:320
		VectorIntrinsicUnion::VectorIntrinsic trace;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s2;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp1;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp2;

		// quaternion_operation_inline.h:332
		VectorIntrinsicUnion::VectorIntrinsic N;

		// quaternion_operation_inline.h:333
		VectorIntrinsicUnion::VectorIntrinsic S;

		// quaternion_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic permuteScales0;

		// quaternion_operation_inline.h:337
		VectorIntrinsicUnion::VectorIntrinsic scale0;

		// quaternion_operation_inline.h:338
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ0;

		// quaternion_operation_inline.h:339
		VectorIntrinsicUnion::VectorIntrinsic scaledQ0;

		// quaternion_operation_inline.h:343
		VectorIntrinsicUnion::VectorIntrinsic permuteScales1;

		// quaternion_operation_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic scale1;

		// quaternion_operation_inline.h:345
		VectorIntrinsicUnion::VectorIntrinsic permute1;

		// quaternion_operation_inline.h:346
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ1;

		// quaternion_operation_inline.h:347
		VectorIntrinsicUnion::VectorIntrinsic scaledQ1;

		// quaternion_operation_inline.h:351
		VectorIntrinsicUnion::VectorIntrinsic permuteScales2;

		// quaternion_operation_inline.h:352
		VectorIntrinsicUnion::VectorIntrinsic scale2;

		// quaternion_operation_inline.h:353
		VectorIntrinsicUnion::VectorIntrinsic permute2;

		// quaternion_operation_inline.h:354
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ2;

		// quaternion_operation_inline.h:355
		VectorIntrinsicUnion::VectorIntrinsic scaledQ2;

		// quaternion_operation_inline.h:359
		VectorIntrinsicUnion::VectorIntrinsic permuteScales3;

		// quaternion_operation_inline.h:360
		VectorIntrinsicUnion::VectorIntrinsic scale3;

		// quaternion_operation_inline.h:361
		VectorIntrinsicUnion::VectorIntrinsic permute3;

		// quaternion_operation_inline.h:362
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ3;

		// quaternion_operation_inline.h:363
		VectorIntrinsicUnion::VectorIntrinsic scaledQ3;

		// quaternion_operation_inline.h:389
		VectorIntrinsicUnion::VectorIntrinsic condition1Mask;

		// quaternion_operation_inline.h:390
		VectorIntrinsicUnion::VectorIntrinsic condition2Mask;

		// quaternion_operation_inline.h:394
		VectorIntrinsicUnion::VectorIntrinsic condition3Mask;

		// quaternion_operation_inline.h:395
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vHalf;

			{
				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

			}
		}
		{
			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
		{
			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::physics::Inertia::GetInverseInertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:104
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::physics::Inertia::GetInverseMass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetInverseInertia(const const rw::math::vpu::Vector3 &  it) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetInverseMass(const float32_t  invm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Construct(RaceCarContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::SetEventPointer(RaceCarContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::Construct(BrnWorld::EEntityTypeID  lEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::SetEventPointer(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Construct(TrafficContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::SetEventPointer(TrafficContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::Construct(BrnWorld::EEntityTypeID  lEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Clear(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Construct(PhysicalCarPartContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::SetEventPointer(PhysicalCarPartContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::Construct(BrnWorld::EEntityTypeID  lEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::SetEventPointer(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Construct(HingedPartContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::SetEventPointer(HingedPartContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::Construct(BrnWorld::EEntityTypeID  lEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::SetEventPointer(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::PropContact,100>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Construct(PropContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::SetEventPointer(PropContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::Construct(BrnWorld::EEntityTypeID  lEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::PropContact,100>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::SetEventPointer(/* parameters */);
}

void BrnPhysics::ExternalPhysicsBody::GetMass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ExternalPhysicsBody::GetWorldInverseInertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void BrnPhysics::ExternalPhysicsBody::GetLocalVelocity(Vector3  lPosition, rw::physics::InputSpace  lePositionSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ExternalPhysicsBody.h:333
	Vector3 lResult;

	{
		// ExternalPhysicsBody.h:333
		Vector3 lResult;

	}
}

void BrnPhysics::ExternallySimulatedBody::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=<VectorAxisX>(const Vector3 &  v, VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic vZero;

	}
}

void rw::math::vpu::operator*=<VectorAxisY>(const Vector3 &  v, VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic vZero;

	}
}

void rw::math::vpu::operator*=<VectorAxisZ>(const Vector3 &  v, VecFloatRef<VectorAxisZ> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic vZero;

	}
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void rw::physics::Inertia::Inertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void NonConstructedClassContainer<rw::physics::Inertia>::operator rw::physics::Inertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNonConstructedClassContainer.h:70
		Inertia * lpData;

	}
}

void rw::physics::Inertia::~Inertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Construct(OutEventLineTestNearestResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::SetEventPointer(OutEventLineTestNearestResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Construct(CreateRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::SetEventPointer(CreateRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Construct(RemoveRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::SetEventPointer(RemoveRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Construct(ResetVehicleEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::SetEventPointer(ResetVehicleEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Construct(CreatePhysicalTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::SetEventPointer(CreatePhysicalTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Construct(SetTrafficCrashingEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::SetEventPointer(SetTrafficCrashingEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Construct(RemoveTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::SetEventPointer(RemoveTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Construct(UpdateNetworkTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::SetEventPointer(UpdateNetworkTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(ImpactEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(ImpactEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Construct(ValidateRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::SetEventPointer(ValidateRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Construct(SetRaceCarCollisionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::SetEventPointer(SetRaceCarCollisionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Construct(SetRaceCarCullingGroupEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::SetEventPointer(SetRaceCarCullingGroupEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Construct(CreateArticulatedTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::SetEventPointer(CreateArticulatedTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Construct(VehicleAddedForCollisionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::SetEventPointer(VehicleAddedForCollisionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::SetEventPointer(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::SetEventPointer(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Construct(CreateVehicleResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::SetEventPointer(CreateVehicleResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Construct(TrafficCrashedEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::SetEventPointer(TrafficCrashedEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Construct(TrafficSlammedEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::SetEventPointer(TrafficSlammedEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Construct(RaceCarCrashEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::SetEventPointer(RaceCarCrashEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Construct(RaceCarResetEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::SetEventPointer(RaceCarResetEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<std::uint16_t,32>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::Construct(uint16_t *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::SetEventPointer(uint16_t *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Construct(TrafficRemovedEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::SetEventPointer(TrafficRemovedEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::Device::WheelFFSpring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<std::uint16_t,32>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	CgsInput::Device::WheelFFSpring::Construct(/* parameters */);
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void JointHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp0;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp1;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp2;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp3;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma0;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma1;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma2;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma3;

		// matrix44affine_operation_platform_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic bx;

		// matrix44affine_operation_platform_inline.h:87
		VectorIntrinsicUnion::VectorIntrinsic by;

		// matrix44affine_operation_platform_inline.h:88
		VectorIntrinsicUnion::VectorIntrinsic bz;

		// matrix44affine_operation_platform_inline.h:90
		VectorIntrinsicUnion::VectorIntrinsic zero;

	}
}

void rw::math::vpu::Matrix44AffineFromEulerXYZ(const rw::math::vpu::Vector3  euler) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:549
		VecFloat ci;

		// matrix44affine_operation_inline.h:549
		VecFloat cj;

		// matrix44affine_operation_inline.h:549
		VecFloat ch;

		// matrix44affine_operation_inline.h:549
		VecFloat si;

		// matrix44affine_operation_inline.h:549
		VecFloat sj;

		// matrix44affine_operation_inline.h:549
		VecFloat sh;

		// matrix44affine_operation_inline.h:555
		VecFloat cc;

		// matrix44affine_operation_inline.h:556
		VecFloat cs;

		// matrix44affine_operation_inline.h:557
		VecFloat sc;

		// matrix44affine_operation_inline.h:558
		VecFloat ss;

		// matrix44affine_operation_inline.h:560
		const VecFloat zero;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointHelper::ConvertTo3x3(const const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::SetChildAngularFrame(const const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::SetParentAngularFrame(const const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::SetParentLinearFrame(const const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::SetChildPosition(const const rw::math::vpu::Vector3 &  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::SetParentPosition(const const rw::math::vpu::Vector3 &  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator<(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:638
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:640
		bool ret;

		{
			// vec_float_operation_inline.h:639
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetSwingType(const rw::physics::SwingType  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetTwistType(const rw::physics::TwistType  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetSwingAngle(const float32_t  sa) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::physics::JointLimits::SetTwistAngle(const float32_t  ta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetSwingVelocityLimit(const float32_t  sl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetTwistVelocityLimit(const float32_t  tl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetPositionLimit(const const rw::math::vpu::Vector3 &  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::SetLinearVelocityLimit(const const rw::math::vpu::Vector3 &  d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Unguarded_partition<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		TrafficContact * _Mid;

		// algorithm:1901
		TrafficContact * _Pfirst;

		// algorithm:1902
		TrafficContact * _Plast;

		// algorithm:1913
		TrafficContact * _Gfirst;

		// algorithm:1914
		TrafficContact * _Glast;

	}
}

void std::_Median<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Mid, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Mid, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::operator<(const const BaseContact &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnPhysics::ContactSpy::TrafficContact*, BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _Left, TrafficContact *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnPhysics::ContactSpy::TrafficContact>(const TrafficContact &  _Left, const TrafficContact &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		TrafficContact _Tmp;

	}
}

void std::pair<BrnPhysics::ContactSpy::TrafficContact*,BrnPhysics::ContactSpy::TrafficContact*>::pair(const TrafficContact *const&  _Val1, const TrafficContact *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnPhysics::ContactSpy::TrafficContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, TrafficContact *  _Last, ptrdiff_t *, TrafficContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1281
		ptrdiff_t _Bottom;

		{
			// algorithm:1283
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<BrnPhysics::ContactSpy::TrafficContact*, int, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, int  _Hole, int  _Bottom, TrafficContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<BrnPhysics::ContactSpy::TrafficContact*, int, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, int  _Hole, int  _Top, TrafficContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnPhysics::ContactSpy::TrafficContact*, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, TrafficContact *  _Last, TrafficContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnPhysics::ContactSpy::TrafficContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, TrafficContact *  _Last, TrafficContact *  _Dest, TrafficContact  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		TrafficContact * _Next;

		{
			// algorithm:1854
			TrafficContact * _Next1;

		}
		{
			// algorithm:1859
			TrafficContact * _Dest;

			{
				// algorithm:1860
				TrafficContact * _Dest0;

			}
			{
				// algorithm:1864
				TrafficContact * _Next1;

			}
		}
	}
}

void std::rotate<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Mid, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnPhysics::ContactSpy::TrafficContact*>(const TrafficContact *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Mid, TrafficContact *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnPhysics::ContactSpy::TrafficContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::TrafficContact>(TrafficContact *  _First, TrafficContact *  _Mid, TrafficContact *  _Last, ptrdiff_t *, TrafficContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:845
		ptrdiff_t _Shift;

		// algorithm:846
		ptrdiff_t _Count;

		{
			// algorithm:848
			ptrdiff_t _Factor;

			{
				// algorithm:850
				ptrdiff_t _Tmp;

			}
		}
		{
			// algorithm:857
			TrafficContact * _Hole;

			// algorithm:858
			TrafficContact * _Next;

			// algorithm:859
			TrafficContact _Holeval;

			// algorithm:860
			TrafficContact * _Next1;

		}
	}
}

void std::_Sort<BrnPhysics::ContactSpy::TrafficContact*, int>(TrafficContact *  _First, TrafficContact *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<BrnPhysics::ContactSpy::TrafficContact*,BrnPhysics::ContactSpy::TrafficContact*> _Mid;

			_Unguarded_partition<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
		}
		_Insertion_sort<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
	}
	_Med3<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
	make_heap<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
	sort_heap<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void std::_Unguarded_partition<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		RaceCarContact * _Mid;

		// algorithm:1901
		RaceCarContact * _Pfirst;

		// algorithm:1902
		RaceCarContact * _Plast;

		// algorithm:1913
		RaceCarContact * _Gfirst;

		// algorithm:1914
		RaceCarContact * _Glast;

	}
}

void std::_Median<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Mid, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Mid, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnPhysics::ContactSpy::RaceCarContact*, BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _Left, RaceCarContact *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnPhysics::ContactSpy::RaceCarContact>(const RaceCarContact &  _Left, const RaceCarContact &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		RaceCarContact _Tmp;

	}
}

void std::pair<BrnPhysics::ContactSpy::RaceCarContact*,BrnPhysics::ContactSpy::RaceCarContact*>::pair(const RaceCarContact *const&  _Val1, const RaceCarContact *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnPhysics::ContactSpy::RaceCarContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, RaceCarContact *  _Last, ptrdiff_t *, RaceCarContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1281
		ptrdiff_t _Bottom;

		{
			// algorithm:1283
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<BrnPhysics::ContactSpy::RaceCarContact*, int, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, int  _Hole, int  _Bottom, RaceCarContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<BrnPhysics::ContactSpy::RaceCarContact*, int, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, int  _Hole, int  _Top, RaceCarContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnPhysics::ContactSpy::RaceCarContact*, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, RaceCarContact *  _Last, RaceCarContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnPhysics::ContactSpy::RaceCarContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, RaceCarContact *  _Last, RaceCarContact *  _Dest, RaceCarContact  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		RaceCarContact * _Next;

		{
			// algorithm:1854
			RaceCarContact * _Next1;

		}
		{
			// algorithm:1859
			RaceCarContact * _Dest;

			{
				// algorithm:1860
				RaceCarContact * _Dest0;

			}
			{
				// algorithm:1864
				RaceCarContact * _Next1;

			}
		}
	}
}

void std::rotate<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Mid, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnPhysics::ContactSpy::RaceCarContact*>(const RaceCarContact *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Mid, RaceCarContact *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnPhysics::ContactSpy::RaceCarContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::RaceCarContact>(RaceCarContact *  _First, RaceCarContact *  _Mid, RaceCarContact *  _Last, ptrdiff_t *, RaceCarContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:845
		ptrdiff_t _Shift;

		// algorithm:846
		ptrdiff_t _Count;

		{
			// algorithm:848
			ptrdiff_t _Factor;

			{
				// algorithm:850
				ptrdiff_t _Tmp;

			}
		}
		{
			// algorithm:857
			RaceCarContact * _Hole;

			// algorithm:858
			RaceCarContact * _Next;

			// algorithm:859
			RaceCarContact _Holeval;

			// algorithm:860
			RaceCarContact * _Next1;

		}
	}
}

void std::_Sort<BrnPhysics::ContactSpy::RaceCarContact*, int>(RaceCarContact *  _First, RaceCarContact *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<BrnPhysics::ContactSpy::RaceCarContact*,BrnPhysics::ContactSpy::RaceCarContact*> _Mid;

			_Unguarded_partition<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
		}
		_Insertion_sort<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
	}
	_Med3<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
	make_heap<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
	sort_heap<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Construct(DiscardedContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::SetEventPointer(DiscardedContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::Construct(BrnWorld::EEntityTypeID  leEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Construct(ContactSpyRunData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::SetEventPointer(ContactSpyRunData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::Construct(BrnWorld::EEntityTypeID  leEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::Construct(BrnWorld::EEntityTypeID  leEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::Construct(BrnWorld::EEntityTypeID  leEntityType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::Construct(AddDeformationModelEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::SetEventPointer(AddDeformationModelEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Construct(RemoveDeformationModelEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::SetEventPointer(RemoveDeformationModelEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Construct(DeactivateDeformationModelEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::SetEventPointer(DeactivateDeformationModelEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Construct(SetModelCollisionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::SetEventPointer(SetModelCollisionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Construct(SetModelCullingGroupEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::SetEventPointer(SetModelCullingGroupEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Construct(BrokenJointNotificationEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(BrokenJointNotificationEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Construct(DetachedPartNotificationEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(DetachedPartNotificationEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Construct(JointedPartStateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(JointedPartStateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Construct(GlassSmashOrCrackEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(GlassSmashOrCrackEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Construct(DetachedPartCurrentPositionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(DetachedPartCurrentPositionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Deformation::DeformationInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
	Deformation::DeformationInputInterface::Clear(/* parameters */);
	Deformation::DeformationOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(/* parameters */);
	Deformation::DeformationOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
}

void CgsPhysics::RigidBodyId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRigidBody.h:183
		uint32_t luEntityId;

	}
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::GetEntityId(RigidBodyId  lRigidBodyId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.h:1767
		uint8_t luOwner;

		// BrnVehicleManager.h:1768
		uint16_t luIndex;

	}
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::PhysicalTrafficManager::GetEntityId(RigidBodyId  lRigidBodyId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.h:702
		uint16_t luIndex;

	}
}

void BrnPhysics::PhysicsModule::GetEntityId(RigidBodyId  lRigidBodyId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	Vehicle::VehicleManager::GetEntityId(/* parameters */);
	Vehicle::VehicleManager::GetEntityId(/* parameters */);
}

void std::_Unguarded_partition<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		PhysicalCarPartContact * _Mid;

		// algorithm:1901
		PhysicalCarPartContact * _Pfirst;

		// algorithm:1902
		PhysicalCarPartContact * _Plast;

		// algorithm:1913
		PhysicalCarPartContact * _Gfirst;

		// algorithm:1914
		PhysicalCarPartContact * _Glast;

	}
}

void std::_Median<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Mid, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Mid, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _Left, PhysicalCarPartContact *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnPhysics::ContactSpy::PhysicalCarPartContact>(const PhysicalCarPartContact &  _Left, const PhysicalCarPartContact &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		PhysicalCarPartContact _Tmp;

	}
}

void std::pair<BrnPhysics::ContactSpy::PhysicalCarPartContact*,BrnPhysics::ContactSpy::PhysicalCarPartContact*>::pair(const PhysicalCarPartContact *const&  _Val1, const PhysicalCarPartContact *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last, ptrdiff_t *, PhysicalCarPartContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1281
		ptrdiff_t _Bottom;

		{
			// algorithm:1283
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, int, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, int  _Hole, int  _Bottom, PhysicalCarPartContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, int, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, int  _Hole, int  _Top, PhysicalCarPartContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last, PhysicalCarPartContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last, PhysicalCarPartContact *  _Dest, PhysicalCarPartContact  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		PhysicalCarPartContact * _Next;

		{
			// algorithm:1854
			PhysicalCarPartContact * _Next1;

		}
		{
			// algorithm:1859
			PhysicalCarPartContact * _Dest;

			{
				// algorithm:1860
				PhysicalCarPartContact * _Dest0;

			}
			{
				// algorithm:1864
				PhysicalCarPartContact * _Next1;

			}
		}
	}
}

void std::rotate<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Mid, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(const PhysicalCarPartContact *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Mid, PhysicalCarPartContact *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnPhysics::ContactSpy::PhysicalCarPartContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PhysicalCarPartContact>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Mid, PhysicalCarPartContact *  _Last, ptrdiff_t *, PhysicalCarPartContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:845
		ptrdiff_t _Shift;

		// algorithm:846
		ptrdiff_t _Count;

		{
			// algorithm:848
			ptrdiff_t _Factor;

			{
				// algorithm:850
				ptrdiff_t _Tmp;

			}
		}
		{
			// algorithm:857
			PhysicalCarPartContact * _Hole;

			// algorithm:858
			PhysicalCarPartContact * _Next;

			// algorithm:859
			PhysicalCarPartContact _Holeval;

			// algorithm:860
			PhysicalCarPartContact * _Next1;

		}
	}
}

void std::_Sort<BrnPhysics::ContactSpy::PhysicalCarPartContact*, int>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<BrnPhysics::ContactSpy::PhysicalCarPartContact*,BrnPhysics::ContactSpy::PhysicalCarPartContact*> _Mid;

			_Unguarded_partition<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		}
		_Insertion_sort<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		{
			{
				BrnPhysics::ContactSpy::BaseContact::operator<(/* parameters */);
			}
		}
		{
			rotate<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		}
		{
			rotate<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
		}
	}
	_Med3<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PhysicalCarPartContact*, BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	{
		{
		}
	}
	{
	}
	make_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	sort_heap<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
}

void std::_Unguarded_partition<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		PropContact * _Mid;

		// algorithm:1901
		PropContact * _Pfirst;

		// algorithm:1902
		PropContact * _Plast;

		// algorithm:1913
		PropContact * _Gfirst;

		// algorithm:1914
		PropContact * _Glast;

	}
}

void std::_Median<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Mid, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Mid, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(PropContact *  _Left, PropContact *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnPhysics::ContactSpy::PropContact>(const PropContact &  _Left, const PropContact &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		PropContact _Tmp;

	}
}

void std::pair<BrnPhysics::ContactSpy::PropContact*,BrnPhysics::ContactSpy::PropContact*>::pair(const PropContact *const&  _Val1, const PropContact *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnPhysics::ContactSpy::PropContact*>(PropContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnPhysics::ContactSpy::PropContact*>(PropContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnPhysics::ContactSpy::PropContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, PropContact *  _Last, ptrdiff_t *, PropContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1281
		ptrdiff_t _Bottom;

		{
			// algorithm:1283
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<BrnPhysics::ContactSpy::PropContact*, int, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, int  _Hole, int  _Bottom, PropContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<BrnPhysics::ContactSpy::PropContact*, int, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, int  _Hole, int  _Top, PropContact  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, PropContact *  _Last, PropContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnPhysics::ContactSpy::PropContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, PropContact *  _Last, PropContact *  _Dest, PropContact  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		PropContact * _Next;

		{
			// algorithm:1854
			PropContact * _Next1;

		}
		{
			// algorithm:1859
			PropContact * _Dest;

			{
				// algorithm:1860
				PropContact * _Dest0;

			}
			{
				// algorithm:1864
				PropContact * _Next1;

			}
		}
	}
}

void std::rotate<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Mid, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnPhysics::ContactSpy::PropContact*>(const PropContact *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Mid, PropContact *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnPhysics::ContactSpy::PropContact*, std::ptrdiff_t, BrnPhysics::ContactSpy::PropContact>(PropContact *  _First, PropContact *  _Mid, PropContact *  _Last, ptrdiff_t *, PropContact *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:845
		ptrdiff_t _Shift;

		// algorithm:846
		ptrdiff_t _Count;

		{
			// algorithm:848
			ptrdiff_t _Factor;

			{
				// algorithm:850
				ptrdiff_t _Tmp;

			}
		}
		{
			// algorithm:857
			PropContact * _Hole;

			// algorithm:858
			PropContact * _Next;

			// algorithm:859
			PropContact _Holeval;

			// algorithm:860
			PropContact * _Next1;

		}
	}
}

void std::_Sort<BrnPhysics::ContactSpy::PropContact*, int>(PropContact *  _First, PropContact *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<BrnPhysics::ContactSpy::PropContact*,BrnPhysics::ContactSpy::PropContact*> _Mid;

			_Unguarded_partition<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		}
		_Insertion_sort<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		{
			{
				BrnPhysics::ContactSpy::BaseContact::operator<(/* parameters */);
			}
		}
		{
			rotate<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		}
		{
			rotate<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
		}
	}
	_Med3<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	iter_swap<BrnPhysics::ContactSpy::PropContact*, BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	{
	}
	{
	}
	{
	}
	make_heap<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	sort_heap<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::AddEvent(const const InAddRigidBody &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[137] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::GetEntityIDOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::CheckContactQueueSize(const InputBuffer::InAddContactQueue *  lpContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetLength(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:559
		int32_t[34] laiContactCounts;

		{
			// BrnPhysicsModuleBridgeFunctions.cpp:560
			int32_t liOwnerIndex;

		}
		{
			// BrnPhysicsModuleBridgeFunctions.cpp:566
			int32_t liContactIndex;

		}
		{
			// BrnPhysicsModuleBridgeFunctions.cpp:568
			const InAddPotentialContact * lpContactEvent;

			CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetEvent(/* parameters */);
		}
		{
			// BrnPhysicsModuleBridgeFunctions.cpp:578
			int32_t liOwnerIndex;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnPhysics::PhysicsModule::ValidateSimulationContactTypes(BrnWorld::EEntityTypeID  leEntityA, BrnWorld::EEntityTypeID  leEntityB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:773
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:761
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:655
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:668
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:685
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:702
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:708
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:718
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:728
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:739
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:749
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModule::ValidateSimulationContacts(const InputBuffer::InAddContactQueue *  lpContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:610
		int32_t liEvent;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:614
		BrnWorld::EEntityTypeID leEntityA;

		// BrnPhysicsModuleBridgeFunctions.cpp:615
		BrnWorld::EEntityTypeID leEntityB;

		// BrnPhysicsModuleBridgeFunctions.cpp:618
		const InAddPotentialContact lContact;

		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetEvent(/* parameters */);
	}
}

extern void EventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InUpdateExternalBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Construct(InUpdateExternalBody *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::SetEventPointer(InUpdateExternalBody *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::InputBuffer::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:848
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetSolverMaxIterations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:298
		CgsDev::StrStream lStrStream;

	}
}

void CgsPhysics::PhysicsSimulationIO::InputBuffer::SetMaxIterations(uint32_t  luMaxIterations) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:865
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeUpdatedVehiclesToSimulation(InputBuffer *  lpSimModuleInputBuffer, const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:798
		float32_t lfSimTimerTimeStep;

		// BrnPhysicsModuleBridgeFunctions.cpp:801
		OutUpdatedExternalBodyQueue lUpdatedVehicles;

	}
	EventQueue(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::Construct(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetTimeStep(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetSolverMaxIterations(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::SetMaxIterations(/* parameters */);
	AppendUpdateExternalBodyQueue<60>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerIO.h:60
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetRemovedRigidBodies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetRequiredRigidBodies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetAddJointQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetRemoveJointQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeVehicleManagerToSimulation_PostScene(InputBuffer *  lpSimModuleInputBuffer, const VehicleManagerOutputBuffer *  lpVehManagerOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendRemoveRigidBodyQueue<50>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetRemovedRigidBodies(/* parameters */);
	Append<50>(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendAddRigidBodyQueue<50>(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendAddJointQueue<10>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetAddJointQueue(/* parameters */);
	Append<10>(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendRemoveJointQueue<10>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetRemoveJointQueue(/* parameters */);
	Append<10>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetChangeRigidBodyInertiaQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Append(const const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeVehicleManagerToSimulation_PostPhysics(InputBuffer *  lpSimModuleInputBuffer, const VehicleManagerOutputBuffer *  lpVehManagerOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendRemoveRigidBodyQueue<50>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetRemovedRigidBodies(/* parameters */);
	Append<50>(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendAddRigidBodyQueue<50>(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	AppendChangeRigidBodyInertiaQueue<200>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetChangeRigidBodyInertiaQueue(/* parameters */);
	Append<200>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<13440,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13440,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13440,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13440,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<13440,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:349
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::Append(const VehicleOutputRequestInterface *  lpOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13440,16>::Append<13440, 16>(const const VariableEventQueue<13440,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13440,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13440,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModule::BridgeVehicleManagerToOutput(OutputBuffer *  lpOutputBuffer, const VehicleManagerOutputBuffer *  lpVehManagerOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PhysicsModuleIO::OutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<50>(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Append(/* parameters */);
	CgsModule::VariableEventQueue<13440,16>::Append<13440, 16>(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Append(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:620
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnPhysicsModuleIO.h:637
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityID::PropEntityID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::Construct(const OutContactSpy *  lpInSpy, const PotentialContact *  lpInPotentialContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::IsContactWithWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::PotentialContact::GetMaterialTagB() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::PotentialContact::GetGroupTagB() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionTag::Construct(uint16_t  lu16MaterialId, uint16_t  lu16GroupId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionTag::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::PropEntityID(EntityId  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::AssertIsProp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::IsPart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetPartIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::GetUserIDB() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropPartInstance::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInstance::GetTypeId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInstance::GetMovementState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInstance::SetMovementState(BrnPhysics::Props::EPropMovementState  leMovementState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropPhysicsDataHeader::GetType(uint32_t  liTypeId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropTypeData::IsSmashGate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropTypeData::IsBillboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropManager::CreateContactEvent(PropContact *  lpOutPropContact, const OutContactSpy *  lpInContact, const PotentialContact *  lpInPotentialContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropManager.h:524
		int32_t liPropIndex;

		// BrnPropManager.h:525
		uint16_t luTypeId;

		// BrnPropManager.h:526
		PropEntityID lEntityId;

		// BrnPropManager.h:527
		PropEntityID lPropId;

	}
	ContactSpy::BaseContact::Construct(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	{
		// BrnPropManager.h:546
		int32_t liPartIndex;

	}
	{
		// BrnPropManager.h:584
		const PropTypeData * lpType;

		CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
		PropPhysicsDataHeader::GetType(/* parameters */);
		PropTypeData::IsBillboard(/* parameters */);
	}
	{
		// BrnPropManager.h:561
		PropInstance * lpPropInstance;

	}
	PropInstance::SetMovementState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void RaceCarContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::AddContact(const const RaceCarContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::AddEventSafe(const const RaceCarContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::AddContact(const const TrafficContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::AddEventSafe(const const TrafficContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalCarPartContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::AddContact(const const PhysicalCarPartContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::AddEventSafe(const const PhysicalCarPartContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::AddContact(const const PropContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::AddEventSafe(const const PropContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::StoreContact(const OutContactSpy *  lpRawContact, const PotentialContact *  lpPotentialContact, const PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1216
		RaceCarContact lRaceCarContact;

		ContactSpy::BaseContact::Construct(/* parameters */);
		ContactSpy::ContactSpyData::AddContact(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1226
		TrafficContact lTrafficContact;

		ContactSpy::ContactSpyData::AddContact(/* parameters */);
	}
	ContactSpy::BaseContact::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::AddEventSafe(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1238
		PhysicalCarPartContact lPartContact;

		ContactSpy::BaseContact::Construct(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1254
		PhysicalCarPartContact lPartContact;

		ContactSpy::BaseContact::Construct(/* parameters */);
		ContactSpy::ContactSpyData::AddContact(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1269
		PropContact lPropContact;

		ContactSpy::BaseContact::Construct(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	BrnWorld::CollisionTag::Construct(/* parameters */);
	ContactSpy::ContactSpyData::AddContact(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	CgsSceneManager::SceneManagerIO::PotentialContact::GetMaterialTagB(/* parameters */);
}

extern void PotentialContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::ContactId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetEvent(ContactId  lContactId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:664
		BrnPhysics::PhysicsModuleIO::ECustomQueueTypes leQueueId;

		// BrnPhysicsModuleIO.h:667
		uint16_t lu16EventIndex;

	}
}

void BrnPhysics::ContactId::GetQueueId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactId.h:169
		uint32_t luQueueId;

	}
}

void BrnPhysics::ContactId::GetEventIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactId.h:180
		uint32_t luEventIndex;

	}
}

void BrnPhysics::Deformation::DeformationManager::FixupBodyPartVehicleContact(PotentialContact *  lpPotContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DetachedPartManager::IsPartIndexUsed(int32_t  liPoolIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::PhysicalBodyPartPool::IsPartIndexUsed(int32_t  liPoolIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<50u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<28u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::DetachedPartManager::GetPartFromIndex(uint16_t  li16PartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::PhysicalBodyPartPool::GetPart(int16_t  liPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalBodyPartPool.h:162
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::PhysicalBodyPart::GetRigidBodyId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::BurnoutBodyPartID::GetRawId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::GetRawId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::Set(uint64_t  luRawData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformableObject::GetHandlingBodyID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::FixupWheelVehicleContact(PotentialContact *  lpPotContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DetachedWheelManager::IsSlotUsed(uint16_t  luSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<20u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::DetachedWheelManager::GetWheel(uint16_t  luSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::PhysicalWheel::GetWheelBodyId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::BurnoutWheelBodyID::GetRawId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::OutContactSpy::SwapEntityOrder() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:768
		RigidBodyId lTempId;

		// CgsPhysicsSimulationModuleIO.h:769
		Vector3 lTempVector;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPotentialContact.h:97
		Vector3 lTempContactPoint;

		// CgsPotentialContact.h:98
		VolumeInstanceId lTempVolumeInstanceId;

		// CgsPotentialContact.h:99
		uint32_t luTempPolyTag;

		// CgsPotentialContact.h:100
		uint16_t lu16TempPrimitiveIndex;

	}
}

void BrnPhysics::PhysicsModule::ProcessContactSpy(OutContactSpy  lRawContact, const PotentialContactInterface *  lpPotentialContactsInterface, const PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1098
		PotentialContact lPotentialContact;

		// BrnPhysicsModuleBridgeFunctions.cpp:1099
		ContactId lContactId;

		// BrnPhysicsModuleBridgeFunctions.cpp:1101
		BrnWorld::EEntityTypeID leEntityTypeA;

		// BrnPhysicsModuleBridgeFunctions.cpp:1102
		BrnWorld::EEntityTypeID leEntityTypeB;

	}
	PhysicsModuleIO::PotentialContactInterface::GetEvent(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::OutContactSpy::SwapEntityOrder(/* parameters */);
	CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	Deformation::DeformationManager::FixupBodyPartVehicleContact(/* parameters */);
	Deformation::DetachedPartManager::IsPartIndexUsed(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	Deformation::DetachedPartManager::GetPartFromIndex(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	Deformation::DeformationManager::FixupWheelVehicleContact(/* parameters */);
	Deformation::DetachedWheelManager::IsSlotUsed(/* parameters */);
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<28u>::IsBitSet(/* parameters */);
	Deformation::DetachedWheelManager::GetWheel(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnPhysics::PhysicsModule::BridgeVehicleManagerRequestsToSimulation(InputBuffer *  lpSimModuleInputBuffer, const VehicleOutputRequestInterface *  lpRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AppendRemoveJointQueue<10>(/* parameters */);
	Vehicle::VehicleOutputRequestInterface::GetRemoveJointQueue(/* parameters */);
	Append<10>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4920,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4920,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>::Construct(CreateWorldEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>::SetEventPointer(CreateWorldEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Construct(PotentialContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(PotentialContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleEffectsInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Construct(CreateAirRamEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::SetEventPointer(CreateAirRamEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Construct(CreateSpinEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::SetEventPointer(CreateSpinEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleEffectsInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:714
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnRaceCarEntityModuleOutputInterface.h:715
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
}

void CgsResource::ResourceHandle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFraction(float32_t  lfFraction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:316
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::Construct(AddPhysicalPropEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::SetEventPointer(AddPhysicalPropEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Construct(RemovePhysicalPropEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::SetEventPointer(RemovePhysicalPropEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Construct(RemovePhysicalPartEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::SetEventPointer(RemovePhysicalPartEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Construct(AddPhysicalPartEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(AddPhysicalPartEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13312,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Construct(OutOverlapPair *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::SetEventPointer(OutOverlapPair *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Construct(DetachedPartRenderEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::SetEventPointer(DetachedPartRenderEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Construct(PhysicalTrafficState *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(PhysicalTrafficState *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Construct(InAddRigidBody *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::SetEventPointer(InAddRigidBody *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13440,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13440,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Construct(InRemoveRigidBody *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::SetEventPointer(InRemoveRigidBody *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Construct(InChangeRigidBodyInertia *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::SetEventPointer(InChangeRigidBodyInertia *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Construct(InAddJoint *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::SetEventPointer(InAddJoint *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Construct(InRemoveJoint *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::SetEventPointer(InRemoveJoint *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,200>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Construct(UpdatePropEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::SetEventPointer(UpdatePropEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::PropUpdateNotification,200>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Construct(PropUpdateNotification *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::SetEventPointer(PropUpdateNotification *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:301
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModule::PropPrepareTypes(const InputBuffer *  lpPhysicsModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:355
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerIO.h:61
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void CreateWorldEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::Set(uint32_t  luOwner, uint32_t  luEntityIndex, uint32_t  luPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::Set(EntityId  lEntityId, uint8_t  lu16VolumeInstanceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:168
		uint64_t lu64EntityID;

		// CgsVolumeInstanceId.h:172
		uint64_t lu64VolumeInstanceIndex;

	}
}

void CgsSceneManager::VolumeInstanceId::operator std::uint64_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NewRigidBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetAngularDrag(const float32_t  ad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetLinearDrag(const float32_t  ld) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetMaxLinearVelocity(const float32_t  lvel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::SetMaxAngularVelocity(const float32_t  avel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InAddRigidBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NewRigidBody(const const NewRigidBody &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void NonConstructedClassContainer<CgsPhysics::NewRigidBody>::operator=(NewRigidBody &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNonConstructedClassContainer.h:60
		NewRigidBody * lpData;

	}
}

extern NewRigidBody & operator=(const const NewRigidBody &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~NewRigidBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::PrepareWorldRigidBody(InputBuffer *  lpSimulationModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModule.cpp:476
		CreateWorldEvent lCreateWorldEvent;

		// BrnPhysicsModule.cpp:477
		RigidBodyId lRigidBodyID;

	}
	{
		// BrnPhysicsModule.cpp:494
		NewRigidBody lNewRigidBody;

		// BrnPhysicsModule.cpp:495
		Inertia lInertia;

		NewRigidBody(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::physics::Inertia::Inertia(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnPhysicsModule.cpp:519
		InAddRigidBody lAddWorldRigidBodyEvent;

		// BrnPhysicsModule.cpp:520
		EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> lTempAddRigidBodyQueue;

		CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1>::Construct(/* parameters */);
	}
	NewRigidBody(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::SetEventPointer(/* parameters */);
	NonConstructedClassContainer<CgsPhysics::NewRigidBody>::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::AddEvent(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	AppendAddRigidBodyQueue<1>(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
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

extern void SimulationParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationModule::GetDefaultParams(const CgsPhysics::PhysicsSimulationModule::SimulationParams &  lParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:150
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:151
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:152
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::DeformationManager::SetWorldBodyId(RigidBodyId  lWorldBodyId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::Prepare(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer_Update *  lpSceneInputBuffer_Update, const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModule.cpp:272
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnPhysicsModule.cpp:287
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnPhysicsModule.cpp:305
		InputBuffer * lpSimulationModuleInputBuffer;

		CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
		DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	}
	{
		// BrnPhysicsModule.cpp:231
		CgsPhysics::PhysicsSimulationModule::SimulationParams lSimulationParams;

		// BrnPhysicsModule.cpp:237
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		rw::math::vpu::Vector3::Set(/* parameters */);
		BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(/* parameters */);
		CgsPhysics::PhysicsSimulationModule::GetDefaultParams(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnPhysicsModule.cpp:255
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Deformation::DeformationInputInterface::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::Clear(/* parameters */);
		Deformation::DeformationOutputInterface::Clear(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnPhysicsModuleIO.h:367
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnPhysicsModuleIO.h:275
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputBuffer::GetVehicleOutputRequestInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::EntityId::SetOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(EntityId  lGlobalEntityID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPhysicalTrafficManager.h:1022
	EntityId lPhysicsEntityId;

	{
		// BrnPhysicalTrafficManager.h:1022
		EntityId lPhysicsEntityId;

		// BrnPhysicalTrafficManager.h:1026
		bool lbFoundId;

		{
			// BrnPhysicalTrafficManager.h:1030
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnPhysics::Vehicle::PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(EntityId  lGlobalEntityId, EntityId *  lpOutPhysicsEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.h:945
		uint8_t luIndex;

	}
}

void CgsContainers::BitArray<8u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<8u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsSceneManager::EntityId::SetEntityIndex(uint32_t  luEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::GetNextNonZeroBit(uint32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:642
		uint32_t liEndOfWord;

		// CgsBitArray.h:651
		uint32_t luWordIndex;

	}
	{
		// CgsBitArray.h:663
		uint32_t liEndOfWord;

		// CgsBitArray.h:683
		uint32_t luWordIndex;

	}
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::EntityId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::GetPhysicsEntityIDFromGlobalEntityID(EntityId  lGlobalEntityID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.h:2013
		EntityId lEntityId_Physics;

	}
	CgsSceneManager::EntityId::SetOwner(/* parameters */);
	{
		// BrnVehicleManager.h:2038
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.h:2025
		int32_t r;

		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
	}
	{
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetRaceCarWithTrafficQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::SetEntityId(EntityId  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:201
		uint64_t lu64Id;

	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetRaceCarWithRaceCarQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetSceneManagerContactQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::FixUpVehicleContacts(PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:917
		int32_t liContact;

		// BrnPhysicsModuleUpdateFunctions.cpp:919
		PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarTrafficQueue;

		// BrnPhysicsModuleUpdateFunctions.cpp:920
		PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarRaceCarQueue;

		// BrnPhysicsModuleUpdateFunctions.cpp:921
		PotentialContactInterface::CustomPotentialContactQueue * lpSceneManagerContacts;

	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:934
		const PotentialContact & lPotentialContact;

		// BrnPhysicsModuleUpdateFunctions.cpp:936
		VolumeInstanceId lRaceCarVolInstId;

		// BrnPhysicsModuleUpdateFunctions.cpp:937
		VolumeInstanceId lTrafficVolInstId;

		// BrnPhysicsModuleUpdateFunctions.cpp:938
		EntityId lTrafficGlobalId;

		// BrnPhysicsModuleUpdateFunctions.cpp:939
		EntityId lTrafficPhysicsId;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:972
		const PotentialContact & lPotentialContact;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:992
		const PotentialContact & lPotentialContact;

		// BrnPhysicsModuleUpdateFunctions.cpp:994
		VolumeInstanceId lVolInstIdA;

		// BrnPhysicsModuleUpdateFunctions.cpp:995
		VolumeInstanceId lVolInstIdB;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1004
		EntityId lTrafficAGlobalId;

		// BrnPhysicsModuleUpdateFunctions.cpp:1005
		EntityId lTrafficAPhysicsId;

		// BrnPhysicsModuleUpdateFunctions.cpp:1007
		EntityId lTrafficBGlobalId;

		// BrnPhysicsModuleUpdateFunctions.cpp:1008
		EntityId lTrafficBPhysicsId;

	}
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetSimpleTrafficWithWorldQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::Set(BrnPhysics::PhysicsModuleIO::ECustomQueueTypes  leContactQueue, int32_t  liEventIndex, uint8_t  lu8UserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::SetQueueId(BrnPhysics::PhysicsModuleIO::ECustomQueueTypes  leContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactId.h:137
		uint8_t lu8QueueId;

		// BrnContactId.h:138
		uint32_t luQueueIdShifted;

	}
}

void BrnPhysics::ContactId::SetEventIndex(uint16_t  lu16EventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactId.h:148
		uint32_t luEventIndex;

	}
}

void BrnPhysics::ContactId::SetUserData(uint8_t  lu8UserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactId.h:159
		uint32_t luUserDataShifted;

	}
}

extern void InAddPotentialContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::Set(EntityId  lEntityId, uint16_t  lu16UserIDA, uint16_t  lu16UserIDB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::SetEntityId(EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::SetUserIDA(uint16_t  lu16ID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::SetUserIDB(uint16_t  lu16ID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::operator uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(const const InAddPotentialContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeSimpleTrafficWithWorldContactsToSimulation(InputBuffer::InAddContactQueue *  lpSimContactQueue, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:503
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:504
		ContactId lContactId;

		// BrnPhysicsModuleBridgeFunctions.cpp:505
		PotentialContact lContact;

		// BrnPhysicsModuleBridgeFunctions.cpp:508
		const PotentialContactInterface::CustomPotentialContactQueue * lpSimpleTrafficWorldContacts;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:521
		InAddPotentialContact lAddContactEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:523
		EntityId lTrafficGlobalId;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		ContactId::Set(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::GetTriangleCacheInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::ClearTestedTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetRawID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::Set(uint64_t  lu64ID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::IsPartUsed(int32_t  liPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::GetPhysicalPart(int32_t  liPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::PhysicalBodyPart::IsFrozen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::IsWheelUsed(int32_t  liWheelIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::GetPhysicalWheel(int32_t  liWheelIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::PhysicalWheel::IsFrozen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1073
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetRaceCarWithWorldQueueValidated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetTrafficWithWorldQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Vector3  lVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:720
		float32_t lfX;

		// CgsStrStream.h:721
		float32_t lfY;

		// CgsStrStream.h:722
		float32_t lfZ;

	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::GetTrafficWithTrafficQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::ValidateAndFixUpTrafficTrafficContact(PotentialContact *  lpContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::PhysicalTrafficManager::ValidateAndFixUpTrafficTrafficContact(PotentialContact *  lpContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.h:1050
		EntityId lEntityIDA;

		// BrnPhysicalTrafficManager.h:1051
		EntityId lEntityIDB;

	}
}

void BrnPhysics::PhysicsModule::BridgeContactsToSimulation(InputBuffer *  lpSimModuleInputBuffer, const InputBuffer *  lpInputBuffer, PotentialContactInterface *  lpContactInterface, PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:52
		float32_t lfSimTimerTimeStep;

		// BrnPhysicsModuleBridgeFunctions.cpp:58
		const VehicleInputInterface::InTriangleCacheInterface * lpTriCacheInterface;

		// BrnPhysicsModuleBridgeFunctions.cpp:62
		PotentialContact lContact;

		// BrnPhysicsModuleBridgeFunctions.cpp:63
		VolumeInstanceId lVolumeInstanceIDA;

		// BrnPhysicsModuleBridgeFunctions.cpp:64
		VolumeInstanceId lVolumeInstanceIDB;

		// BrnPhysicsModuleBridgeFunctions.cpp:65
		int32_t liNumEvents;

		// BrnPhysicsModuleBridgeFunctions.cpp:69
		int32_t liI;

	}
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetTimeStep(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(/* parameters */);
	Vehicle::VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	PhysicsModuleIO::PotentialContactInterface::GetLength(/* parameters */);
	Vehicle::VehicleManager::ClearTestedTraffic(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:75
		InAddPotentialContact lAddContactEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:76
		ContactId lContactId;

		PhysicsModuleIO::PotentialContactInterface::GetEvent(/* parameters */);
		ContactId::Set(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:295
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:298
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarWorldContacts;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:322
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:325
		const PotentialContactInterface::CustomPotentialContactQueue * lpTrafficWorldContacts;

	}
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:366
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:369
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarRaceCarContacts;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:397
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:400
		const PotentialContactInterface::CustomPotentialContactQueue * lpTrafficTrafficContacts;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:434
		int32_t liEvent;

		// BrnPhysicsModuleBridgeFunctions.cpp:437
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarTrafficContacts;

	}
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetAddContactQueue(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:196
		bool lbOtherEntityIsFrozen;

		// BrnPhysicsModuleBridgeFunctions.cpp:197
		int32_t liPoolIndex;

		Deformation::DeformationManager::IsWheelUsed(/* parameters */);
		Deformation::DeformationManager::GetPhysicalWheel(/* parameters */);
	}
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	CgsPhysics::RigidBodyId::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Deformation::DeformationManager::IsPartUsed(/* parameters */);
	Deformation::PhysicalBodyPartPool::IsPartIndexUsed(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Deformation::DeformationManager::GetPhysicalPart(/* parameters */);
	Deformation::DeformationManager::IsWheelUsed(/* parameters */);
	Deformation::DeformationManager::GetPhysicalWheel(/* parameters */);
	Deformation::DeformationManager::IsPartUsed(/* parameters */);
	Deformation::PhysicalBodyPartPool::IsPartIndexUsed(/* parameters */);
	CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
	Deformation::DeformationManager::GetPhysicalPart(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:330
		ContactId lContactId;

		ContactId::Set(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:303
		ContactId lContactId;

		ContactId::Set(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:405
		ContactId lContactId;

		// BrnPhysicsModuleBridgeFunctions.cpp:407
		PotentialContact lTrafficTrafficContact;

		Vehicle::VehicleManager::ValidateAndFixUpTrafficTrafficContact(/* parameters */);
		ContactId::Set(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:421
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:374
		ContactId lContactId;

		ContactId::Set(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:381
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
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
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:442
		ContactId lContactId;

		// BrnPhysicsModuleBridgeFunctions.cpp:444
		PotentialContact lRaceCarTrafficContact;

		// BrnPhysicsModuleBridgeFunctions.cpp:451
		EntityId lTrafficGlobalId;

		// BrnPhysicsModuleBridgeFunctions.cpp:452
		EntityId lTrafficPhysicsId;

		ContactId::Set(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		ContactId::SetEventIndex(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:460
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:278
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModule::UpdateNetworkCatchup(const InputBuffer *  lpInputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void BrnPhysics::PhysicsModule::HandleGameActionsPostScene(const InputBuffer::GameActionQueue *  lpGameActionQueue, InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1078
		const CgsModule::Event * lpAction;

		// BrnPhysicsModuleUpdateFunctions.cpp:1079
		int32_t liActionSize;

		// BrnPhysicsModuleUpdateFunctions.cpp:1080
		int32_t liActionType;

		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1132
		const JunkYardDriveThruAction * lpJunkYardAction;

	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1123
		const StartPlayingModeAction * lpStartModeAction;

	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1094
		const BodyShopDriveThruAction * lpBodyShopAction;

	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1114
		const PrepareForModeAction * lpPrepareModeAction;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<uint16_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::AddEvent(const const uint16_t &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[98] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<uint16_t>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<uint16_t>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnPhysicsModuleIO.h:352
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:304
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetRCEntityOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:284
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetPlayerActiveRaceCarIndex(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::SetPlayerRaceCarEntityId(EntityId  lPlayerRaceCarEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationManager::FindModelIndexByEntityID(EntityId  lID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationManager.h:694
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnDeformationManager.h:699
		uint16_t lu16RaceCarIndex;

	}
	{
		// BrnDeformationManager.h:708
		uint16_t lu16TrafficIndex;

	}
}

void BrnPhysics::PhysicsModule::PostSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:73
		bool lbSimPaused;

		// BrnPhysicsModuleUpdateFunctions.cpp:76
		InputBuffer * lpSimModuleInputBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:77
		VehicleManagerOutputBuffer * lpVehManagerOutputBuffer;

	}
	CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	CreateIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetGameActionQueue(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetRCEntityOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetRCEntityOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	Vehicle::VehicleManager::SetPlayerActiveRaceCarIndex(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetRCEntityOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarEntityId(/* parameters */);
	Deformation::DeformationManager::SetPlayerRaceCarEntityId(/* parameters */);
	Deformation::DeformationManager::SetPlayerRaceCarEntityId(/* parameters */);
	DestroyIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(/* parameters */);
	Vehicle::VehicleManager::SetPlayerActiveRaceCarIndex(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsFirstPrepareForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetEasyCrashingEnabled(bool  lbEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetPlayerCarToShowtimeMode(bool  lbShowtimeMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehiclePhysics::SetIsInShowtime(bool  lbInShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetPlayerCrashingNextUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::TurnOffSlamsAndShunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetTrafficCheckingAllowed(bool  lbAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::TurnOnSlamsAndShunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::TurnOnSlamsAndShuntsEffectsForRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetTrafficTypeRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetShowtimeAimDirection(const rw::math::vpu::Vector3  lAimDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetShowtimeBehaviour(BrnGameState::EShowtimeBehaviour  leShowtimeBehaviour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::SetStationaryPlayerWheelAngle(BrnPhysics::Vehicle::VehicleManager::EStationaryPlayerWheelAngle  leWheelAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationInputInterface::ResetPlayerScratches() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::HandleGameActions(const InputBuffer::GameActionQueue *  lpGameActionQueue, OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1169
		const CgsModule::Event * lpAction;

		// BrnPhysicsModuleUpdateFunctions.cpp:1170
		int32_t liActionSize;

		// BrnPhysicsModuleUpdateFunctions.cpp:1171
		int32_t liActionType;

		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1316
		const SetPlayerCarDriverAction * lpPlayerDriverAction;

		Vehicle::VehicleManager::SetStationaryPlayerWheelAngle(/* parameters */);
	}
	Vehicle::VehicleManager::SetStationaryPlayerWheelAngle(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1252
		const StopModeAction * lpStopModeAction;

		Vehicle::VehicleManager::SetEasyCrashingEnabled(/* parameters */);
		Vehicle::VehicleManager::SetPlayerCarToShowtimeMode(/* parameters */);
		Vehicle::VehiclePhysics::SetIsInShowtime(/* parameters */);
		Vehicle::VehicleManager::SetTrafficCheckingAllowed(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1275
		const TrafficTypeRequestAction * lpRequestAction;

		CgsModule::BaseEventQueue<uint16_t>::AddEvent(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1284
		const ShowtimeIntro * lpIntroAction;

		Vehicle::VehicleManager::SetShowtimeAimDirection(/* parameters */);
	}
	Vehicle::VehicleManager::TurnOnSlamsAndShunts(/* parameters */);
	Vehicle::VehicleManager::TurnOnSlamsAndShuntsEffectsForRivals(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1292
		const ToggleShowtimeBehaviourAction * lpToggleAction;

		Vehicle::VehicleManager::SetShowtimeBehaviour(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1301
		const TailgatingAction * lpTailgatingAction;

	}
	Deformation::DeformationInputInterface::ResetPlayerScratches(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1182
		const ImpactTimeStartAction * lpImpactTimeStart;

	}
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:1204
		const PrepareForModeAction * lpPfmAction;

		{
			// BrnPhysicsModuleUpdateFunctions.cpp:1208
			const GameModeParams * lpGameModeParams;

			BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
			Vehicle::VehicleManager::SetEasyCrashingEnabled(/* parameters */);
			Vehicle::VehicleManager::SetPlayerCarToShowtimeMode(/* parameters */);
			Vehicle::VehicleManager::SetPlayerCrashingNextUpdate(/* parameters */);
			Vehicle::VehicleManager::TurnOffSlamsAndShunts(/* parameters */);
			Vehicle::VehicleManager::SetTrafficCheckingAllowed(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<uint16_t>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::SuspensionSpring::SetPosition(const VecFloat  lfPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Spring1D.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<1, 0>(VectorIntrinsicInParam  original, VectorIntrinsicInParam  vecToInsert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:526
		VectorIntrinsicUnion::VectorIntrinsic permConstant;

	}
}

void rw::math::vpl::VecGetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::SuspensionSpring::SetStiffness(const VecFloat  lfStiffness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Spring1D.h:91
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<8, 0>(VectorIntrinsicInParam  original, VectorIntrinsicInParam  vecToInsert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:526
		VectorIntrinsicUnion::VectorIntrinsic permConstant;

	}
}

void BrnPhysics::SuspensionSpring::SetDamping(const VecFloat  lfDamping) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Spring1D.h:99
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<4, 0>(VectorIntrinsicInParam  original, VectorIntrinsicInParam  vecToInsert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:526
		VectorIntrinsicUnion::VectorIntrinsic permConstant;

	}
}

void BrnPhysics::SuspensionSpring::SetMass(const VecFloat  lfMass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Spring1D.h:107
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<2, 0>(VectorIntrinsicInParam  original, VectorIntrinsicInParam  vecToInsert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:526
		VectorIntrinsicUnion::VectorIntrinsic permConstant;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnPhysics::ContactSpy::PropContact*>(PropContact *  _First, PropContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::GetBaseContact(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::DebugGetEntityTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:467
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:468
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector3_operation_inline.h:470
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:470
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:470
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::AddEvent(EntityId  lEntityId, Vector3  lTotalFrictionStress, Vector3  lAverageStress, Vector3  lAverageContactPoint, int32_t  liStartIndex, int32_t  liRunLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:367
		ContactSpyRunData lNewRunData;

	}
}

extern void ContactSpyRunData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::Construct(EntityId  lEntityId, Vector3  lTotalFrictionStress, Vector3  lAverageStress, Vector3  lAverageContactPoint, int32_t  liStartIndex, int32_t  liRunLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(const const ContactSpyRunData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::GetNumUniqueEntities() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.h:183
		int32_t liI;

		// BrnContactSpyQueue.h:184
		int32_t liNumEntities;

		// BrnContactSpyQueue.h:186
		const BaseContact * lpContact;

		// BrnContactSpyQueue.h:187
		EntityId lEntityId;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::SortAndCreateRunList<100>(ContactSpyRunList<100> *  lpOutRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std::sort<BrnPhysics::ContactSpy::PropContact*>(/* parameters */);
	{
		// BrnContactSpyQueue.cpp:123
		Vector3 lTotalFrictionStress;

		// BrnContactSpyQueue.cpp:124
		Vector3 lAverageStress;

		// BrnContactSpyQueue.cpp:125
		Vector3 lAverageContactPoint;

		// BrnContactSpyQueue.cpp:127
		EntityId lCurrentEntityId;

		// BrnContactSpyQueue.cpp:128
		int32_t liStartIndex;

		// BrnContactSpyQueue.cpp:129
		int32_t liRunLength;

		// BrnContactSpyQueue.cpp:130
		const BaseContact * lpContact;

		// BrnContactSpyQueue.cpp:132
		int32_t liI;

		// BrnContactSpyQueue.cpp:238
		int32_t liNumUniqueEntities;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		GetBaseContact(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:214
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<100>::AddEvent(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		GetNumUniqueEntities(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:175
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<100>::AddEvent(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		GetBaseContact(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(PhysicalCarPartContact *  _First, PhysicalCarPartContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetBaseContact(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::DebugGetEntityTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::AddEvent(EntityId  lEntityId, Vector3  lTotalFrictionStress, Vector3  lAverageStress, Vector3  lAverageContactPoint, int32_t  liStartIndex, int32_t  liRunLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:367
		ContactSpyRunData lNewRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetNumUniqueEntities() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.h:183
		int32_t liI;

		// BrnContactSpyQueue.h:184
		int32_t liNumEntities;

		// BrnContactSpyQueue.h:186
		const BaseContact * lpContact;

		// BrnContactSpyQueue.h:187
		EntityId lEntityId;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::SortAndCreateRunList<50>(ContactSpyRunList<50> *  lpOutRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std::sort<BrnPhysics::ContactSpy::PhysicalCarPartContact*>(/* parameters */);
	{
		// BrnContactSpyQueue.cpp:123
		Vector3 lTotalFrictionStress;

		// BrnContactSpyQueue.cpp:124
		Vector3 lAverageStress;

		// BrnContactSpyQueue.cpp:125
		Vector3 lAverageContactPoint;

		// BrnContactSpyQueue.cpp:127
		EntityId lCurrentEntityId;

		// BrnContactSpyQueue.cpp:128
		int32_t liStartIndex;

		// BrnContactSpyQueue.cpp:129
		int32_t liRunLength;

		// BrnContactSpyQueue.cpp:130
		const BaseContact * lpContact;

		// BrnContactSpyQueue.cpp:132
		int32_t liI;

		// BrnContactSpyQueue.cpp:238
		int32_t liNumUniqueEntities;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		GetBaseContact(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:214
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<50>::AddEvent(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		GetNumUniqueEntities(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:175
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<50>::AddEvent(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		GetBaseContact(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnPhysics::ContactSpy::TrafficContact*>(TrafficContact *  _First, TrafficContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetBaseContact(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::DebugGetEntityTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::AddEvent(EntityId  lEntityId, Vector3  lTotalFrictionStress, Vector3  lAverageStress, Vector3  lAverageContactPoint, int32_t  liStartIndex, int32_t  liRunLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:367
		ContactSpyRunData lNewRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetNumUniqueEntities() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.h:183
		int32_t liI;

		// BrnContactSpyQueue.h:184
		int32_t liNumEntities;

		// BrnContactSpyQueue.h:186
		const BaseContact * lpContact;

		// BrnContactSpyQueue.h:187
		EntityId lEntityId;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::SortAndCreateRunList<64>(ContactSpyRunList<64> *  lpOutRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std::sort<BrnPhysics::ContactSpy::TrafficContact*>(/* parameters */);
	{
		// BrnContactSpyQueue.cpp:123
		Vector3 lTotalFrictionStress;

		// BrnContactSpyQueue.cpp:124
		Vector3 lAverageStress;

		// BrnContactSpyQueue.cpp:125
		Vector3 lAverageContactPoint;

		// BrnContactSpyQueue.cpp:127
		EntityId lCurrentEntityId;

		// BrnContactSpyQueue.cpp:128
		int32_t liStartIndex;

		// BrnContactSpyQueue.cpp:129
		int32_t liRunLength;

		// BrnContactSpyQueue.cpp:130
		const BaseContact * lpContact;

		// BrnContactSpyQueue.cpp:132
		int32_t liI;

		// BrnContactSpyQueue.cpp:238
		int32_t liNumUniqueEntities;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		GetBaseContact(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:214
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<64>::AddEvent(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		GetNumUniqueEntities(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:175
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<64>::AddEvent(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		GetBaseContact(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnPhysics::ContactSpy::RaceCarContact*>(RaceCarContact *  _First, RaceCarContact *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetBaseContact(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::DebugGetEntityTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::AddEvent(EntityId  lEntityId, Vector3  lTotalFrictionStress, Vector3  lAverageStress, Vector3  lAverageContactPoint, int32_t  liStartIndex, int32_t  liRunLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:367
		ContactSpyRunData lNewRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetNumUniqueEntities() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.h:183
		int32_t liI;

		// BrnContactSpyQueue.h:184
		int32_t liNumEntities;

		// BrnContactSpyQueue.h:186
		const BaseContact * lpContact;

		// BrnContactSpyQueue.h:187
		EntityId lEntityId;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::SortAndCreateRunList<8>(ContactSpyRunList<8> *  lpOutRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std::sort<BrnPhysics::ContactSpy::RaceCarContact*>(/* parameters */);
	{
		// BrnContactSpyQueue.cpp:123
		Vector3 lTotalFrictionStress;

		// BrnContactSpyQueue.cpp:124
		Vector3 lAverageStress;

		// BrnContactSpyQueue.cpp:125
		Vector3 lAverageContactPoint;

		// BrnContactSpyQueue.cpp:127
		EntityId lCurrentEntityId;

		// BrnContactSpyQueue.cpp:128
		int32_t liStartIndex;

		// BrnContactSpyQueue.cpp:129
		int32_t liRunLength;

		// BrnContactSpyQueue.cpp:130
		const BaseContact * lpContact;

		// BrnContactSpyQueue.cpp:132
		int32_t liI;

		// BrnContactSpyQueue.cpp:238
		int32_t liNumUniqueEntities;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		GetBaseContact(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:214
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<8>::AddEvent(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		GetNumUniqueEntities(/* parameters */);
		{
			// BrnContactSpyQueue.cpp:175
			const char * lpacEntityTypeName;

			DebugGetEntityTypeName(/* parameters */);
		}
		rw::math::vpu::operator/(/* parameters */);
		ContactSpyRunList<8>::AddEvent(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::AddEvent(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		GetBaseContact(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

extern void OutContactSpy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::ProcessContactSpies(const OutputBuffer::OutContactSpyQueue *  lpRawContactSpies, const PotentialContactInterface *  lpPotentialContactsInterface, const PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1054
		int32_t liI;

	}
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:1062
		OutContactSpy lRawContact;

		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::GetEvent(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:370
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::ContactSpy::ContactSpyInterface::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyData.h:239
		bool lbIsEmpty;

	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetContactSpyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1366
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleManager::GetDiscardedContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::AddContact(const const DiscardedContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::AddEventSafe(const const DiscardedContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::SetData(ContactSpyData *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::BridgeSimulationToOutput(OutputBuffer *  lpOutputBuffer, const PotentialContactInterface *  lpPotentialContactsInterface, const PropRaceCarContactBuffer *  lpPropRaceCarContactBuffer, const OutputBuffer *  lpSimModuleOutputBuffer, VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleBridgeFunctions.cpp:847
		int32_t liEvent;

	}
	PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	ContactSpy::ContactSpyInterface::IsEmpty(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetContactSpyQueue(/* parameters */);
	ContactSpy::ContactSpyData::AddContact(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	ContactSpy::ContactSpyInterface::SetData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnPhysics::ContactSpy::ContactSpyData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:543
		int32_t i;

	}
}

void BrnPhysics::Props::PropRaceCarContactBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::PropRaceCarContact,30>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropRaceCarContact>::Construct(PropRaceCarContact *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropRaceCarContact>::SetEventPointer(PropRaceCarContact *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropRaceCarContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetPotentialContactQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:289
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::PotentialContactInterface::SetConstQueue(const PotentialContactInterface::InPotentialContactQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetTimerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:295
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetCameraInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:272
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::UpdateCameraMatrix(const rw::math::vpu::Matrix44Affine *  lpCameraMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::IOStackLinearMalloc<1048576>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::IOStackLinearMalloc<1048576>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::IOStackLinearMalloc<1048576>::GetMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetOverlapPairsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:292
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleManager::GetRigidBodyId(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::GetRaceCarPhysics(RigidBodyId  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.h:1816
		uint32_t luIndex;

	}
}

void BrnPhysics::Vehicle::SimpleVehiclePhysics::HasCrashedThisFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::GetForceNoSlowMo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManager::ResetForceNoSlowMo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleEffectsInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::IOStackLinearMalloc<1048576>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::InputBuffer::SetTimeStep(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:818
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModule::IsSimulationUpdateRequired() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetContactSpyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1394
		CgsDev::StrStream lStrStream;

	}
}

void CgsPhysics::RigidBodyId::operator std::uint64_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::Append64IntDecimal(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:822
		char[22] lacNumber;

	}
}

void CgsDev::StrStreamBase::Append64IntHex(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:847
		uint32_t lA;

		// CgsStrStream.h:848
		uint32_t lB;

	}
}

void CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetDriveSpyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1408
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::operator std::uint64_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetJointSpyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1401
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::operator std::uint64_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetUpdateRigidBodyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1359
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:364
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:361
		CgsDev::StrStream lStrStream;

	}
}

void CgsPhysics::PhysicsSimulationIO::InputBuffer::GetChangeRigidBodyInertiaQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:914
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropRaceCarContactBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropRaceCarContact>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpPhysicsModuleInputBuffer, OutputBuffer *  lpPhysicsModuleOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:242
		bool lbSimPaused;

		// BrnPhysicsModuleUpdateFunctions.cpp:255
		InputBuffer * lpSimModuleInputBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:256
		OutputBuffer * lpSimModuleOutputBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:257
		VehicleManagerOutputBuffer * lpVehManagerOutputBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:258
		PotentialContactInterface * lpPotentialContactsInterface;

		// BrnPhysicsModuleUpdateFunctions.cpp:259
		PropRaceCarContactBuffer * lpPropRaceCarContactBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:260
		IOStackLinearMalloc<1048576> * lpPropPrimitiveMalloc;

		// BrnPhysicsModuleUpdateFunctions.cpp:261
		IOStackLinearMalloc<1048576> * lpVehiclePrimitiveMalloc;

		// BrnPhysicsModuleUpdateFunctions.cpp:272
		const OutputBuffer * const_lpSimModuleOutputBuffer;

		// BrnPhysicsModuleUpdateFunctions.cpp:274
		Matrix44Affine lCameraMatrix;

		// BrnPhysicsModuleUpdateFunctions.cpp:285
		const const TimerStatus & lTimerStatus;

		// BrnPhysicsModuleUpdateFunctions.cpp:287
		float32_t lfSimTimerTimeStep;

		// BrnPhysicsModuleUpdateFunctions.cpp:288
		float32_t lfGameTimerTimeStep;

	}
	ContactSpy::ContactSpyData::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::OutputBuffer>(/* parameters */);
	CreateIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(/* parameters */);
	CreateIOBuffer<BrnPhysics::PhysicsModuleIO::PotentialContactInterface>(/* parameters */);
	CreateIOBuffer<BrnPhysics::Props::PropRaceCarContactBuffer>(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetPotentialContactQueue(/* parameters */);
	PhysicsModuleIO::PotentialContactInterface::SetConstQueue(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetTimerInterface(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetTimerInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetGameActionQueue(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetCameraInput(/* parameters */);
	BrnDirector::Camera::Camera::GetTransform(/* parameters */);
	Vehicle::VehicleManager::UpdateCameraMatrix(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:379
		CollisionGenerator * lpPropContactGenerator;

		// BrnPhysicsModuleUpdateFunctions.cpp:447
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCarPhysics;

		CreateIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(/* parameters */);
		CgsMemory::IOStackLinearMalloc<1048576>::Prepare(/* parameters */);
		PhysicsModuleIO::InputBuffer::GetOverlapPairsQueue(/* parameters */);
		Vehicle::VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
		CreateIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(/* parameters */);
		CreateIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(/* parameters */);
		CgsMemory::IOStackLinearMalloc<1048576>::Prepare(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		PhysicsModuleIO::InputBuffer::GetOverlapPairsQueue(/* parameters */);
		Vehicle::VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
		Vehicle::VehicleManager::GetRaceCarPhysics(/* parameters */);
		Vehicle::VehicleManager::ResetForceNoSlowMo(/* parameters */);
		PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(/* parameters */);
		CgsSystem::TimerStatus::GetTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		PhysicsModuleIO::InputBuffer::GetVehicleEffectsInputInterface(/* parameters */);
		DestroyIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(/* parameters */);
		DestroyIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(/* parameters */);
		DestroyIOBuffer<CgsMemory::IOStackLinearMalloc<1048576> >(/* parameters */);
		{
			// BrnPhysicsModuleUpdateFunctions.cpp:542
			const VehicleManagerOutputBuffer * lpConstVehManagerOutputBuffer;

			CgsModule::LockBuffersForIO(/* parameters */);
			CgsModule::LockBuffersForIO(/* parameters */);
			CgsPhysics::PhysicsSimulationIO::InputBuffer::SetTimeStep(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			CgsModule::UnlockBuffersForIO(/* parameters */);
			CgsModule::UnlockBuffersForIO(/* parameters */);
		}
		{
			// BrnPhysicsModuleUpdateFunctions.cpp:625
			int32_t i;

			// BrnPhysicsModuleUpdateFunctions.cpp:626
			OutputBuffer::OutContactSpyQueue * lpContactSpyQueue;

			// BrnPhysicsModuleUpdateFunctions.cpp:638
			OutputBuffer::OutDriveSpyQueue * lpDriveSpyQueue;

			// BrnPhysicsModuleUpdateFunctions.cpp:651
			OutputBuffer::OutJointSpyQueue * lpJointSpyQueue;

		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetContactSpyQueue(/* parameters */);
		{
			// BrnPhysicsModuleUpdateFunctions.cpp:630
			OutContactSpy lEvent;

			{
				// BrnPhysicsModuleUpdateFunctions.cpp:632
				CgsDev::StrStream lStrStream;

				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
			}
			rw::math::vpu::IsValid(/* parameters */);
			{
				// BrnPhysicsModuleUpdateFunctions.cpp:633
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
			}
			rw::math::vpu::IsValid(/* parameters */);
			{
				// BrnPhysicsModuleUpdateFunctions.cpp:634
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
			}
			rw::math::vpu::IsValid(/* parameters */);
			{
				// BrnPhysicsModuleUpdateFunctions.cpp:635
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
			}
		}
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy>::GetEvent(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::InputBuffer::GetChangeRigidBodyInertiaQueue(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	DestroyIOBuffer<BrnPhysics::Props::PropRaceCarContactBuffer>(/* parameters */);
	DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::PotentialContactInterface>(/* parameters */);
	DestroyIOBuffer<BrnPhysics::Vehicle::VehicleManagerOutputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::OutputBuffer>(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetDriveSpyQueue(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:642
		OutDriveSpy lEvent;

		{
			// BrnPhysicsModuleUpdateFunctions.cpp:645
			CgsDev::StrStream lStrStream;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicsModuleUpdateFunctions.cpp:646
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsPhysics::DriveId::operator std::uint64_t(/* parameters */);
			CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy>::GetEvent(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:644
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsPhysics::DriveId::operator std::uint64_t(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
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
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:647
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsPhysics::DriveId::operator std::uint64_t(/* parameters */);
	}
	CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetJointSpyQueue(/* parameters */);
	{
		// BrnPhysicsModuleUpdateFunctions.cpp:655
		OutJointSpy lEvent;

		{
			// BrnPhysicsModuleUpdateFunctions.cpp:657
			CgsDev::StrStream lStrStream;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicsModuleUpdateFunctions.cpp:658
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		}
	}
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::GetEvent(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsPhysics::DriveId::operator std::uint64_t(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	DestroyIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	CreateIOBuffer<CgsPhysics::PhysicsSimulationIO::InputBuffer>(/* parameters */);
	CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetUpdateRigidBodyQueue(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::PropContact,100>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::AppendSafe(const const BaseEventQueue<BrnPhysics::ContactSpy::PropContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseEventQueue.h:442
		int32_t liIndex;

		// CgsBaseEventQueue.h:443
		int32_t liLength;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::AppendSafe<100>(const const ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.cpp:80
		bool lbResult;

		AppendSafe<100>(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	DebugGetEntityTypeName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::AppendSafe(const const BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseEventQueue.h:442
		int32_t liIndex;

		// CgsBaseEventQueue.h:443
		int32_t liLength;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::AddEventSafe(const const HingedPartContact &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::DebugGetEntityTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::AppendSafe<50>(const const ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.cpp:80
		bool lbResult;

		AppendSafe<50>(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	DebugGetEntityTypeName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::AppendSafe(const const BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseEventQueue.h:442
		int32_t liIndex;

		// CgsBaseEventQueue.h:443
		int32_t liLength;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::AppendSafe<150>(const const ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.cpp:80
		bool lbResult;

		AppendSafe<150>(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	DebugGetEntityTypeName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::AppendSafe(const const BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseEventQueue.h:442
		int32_t liIndex;

		// CgsBaseEventQueue.h:443
		int32_t liLength;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::AppendSafe<400>(const const ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.cpp:80
		bool lbResult;

		AppendSafe<400>(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	DebugGetEntityTypeName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::AppendSafe(const const BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseEventQueue.h:442
		int32_t liIndex;

		// CgsBaseEventQueue.h:443
		int32_t liLength;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::AppendSafe<300>(const const ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyQueue.cpp:80
		bool lbResult;

		AppendSafe<300>(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	DebugGetEntityTypeName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyData::GetRaceCarContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetTrafficContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPhysicalCarPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetHingedPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPropContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetRaceCarContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::AppendSafe<8>(const const ContactSpyRunList<8> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.cpp:93
		int32_t liI;

		// BrnContactSpyRunList.cpp:94
		int32_t liLengthBeforeAppend;

		// BrnContactSpyRunList.cpp:95
		int32_t liMaxIndexBeforeAppend;

		// BrnContactSpyRunList.cpp:98
		bool lbResult;

		{
			// BrnContactSpyRunList.cpp:109
			ContactSpyRunData * lpRunData;

		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetMaxIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:454
		const ContactSpyRunData * lpLastRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetRunData(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::GetStartIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::GetRunLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Append(const const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::SetStartIndex(int32_t  liStartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetTrafficContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::AppendSafe<64>(const const ContactSpyRunList<64> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.cpp:93
		int32_t liI;

		// BrnContactSpyRunList.cpp:94
		int32_t liLengthBeforeAppend;

		// BrnContactSpyRunList.cpp:95
		int32_t liMaxIndexBeforeAppend;

		// BrnContactSpyRunList.cpp:98
		bool lbResult;

		{
			// BrnContactSpyRunList.cpp:109
			ContactSpyRunData * lpRunData;

		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::GetMaxIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:454
		const ContactSpyRunData * lpLastRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<64>::GetRunData(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPhysicalCarPartContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::AppendSafe<50>(const const ContactSpyRunList<50> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.cpp:93
		int32_t liI;

		// BrnContactSpyRunList.cpp:94
		int32_t liLengthBeforeAppend;

		// BrnContactSpyRunList.cpp:95
		int32_t liMaxIndexBeforeAppend;

		// BrnContactSpyRunList.cpp:98
		bool lbResult;

		{
			// BrnContactSpyRunList.cpp:109
			ContactSpyRunData * lpRunData;

		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::GetMaxIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:454
		const ContactSpyRunData * lpLastRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<50>::GetRunData(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPropContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::AppendSafe<100>(const const ContactSpyRunList<100> &  lInRunList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.cpp:93
		int32_t liI;

		// BrnContactSpyRunList.cpp:94
		int32_t liLengthBeforeAppend;

		// BrnContactSpyRunList.cpp:95
		int32_t liMaxIndexBeforeAppend;

		// BrnContactSpyRunList.cpp:98
		bool lbResult;

		{
			// BrnContactSpyRunList.cpp:109
			ContactSpyRunData * lpRunData;

		}
	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::GetMaxIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:454
		const ContactSpyRunData * lpLastRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<100>::GetRunData(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModule::GenerateSceneQueries(OutputBuffer *  lpPhysicsModuleOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KE_WORLD_PERFMON_PAGE = 4;

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::boostparamsasset::AirEarning = -1891887715510008784;

Attrib::Hash::boostparamsasset::AirSpinEarning = -4352757040966857742;

Attrib::Hash::boostparamsasset::BarrelRollEarning = -1035108252361594191;

Attrib::Hash::boostparamsasset::BoostChainMin = -2343420446165730523;

Attrib::Hash::boostparamsasset::BoostSlamStrength = -7766274748171065765;

Attrib::Hash::boostparamsasset::BoostSpinIncrease = -6502808958254691887;

Attrib::Hash::boostparamsasset::BurnRateBoost = -3648956812362844215;

Attrib::Hash::boostparamsasset::CleanLanding = -6630060647361528260;

Attrib::Hash::boostparamsasset::ComboModifier = -4173559742227163691;

Attrib::Hash::boostparamsasset::GrindingEarning = -4363492811123288973;

Attrib::Hash::boostparamsasset::Handbrake180Earning = -103186127672983849;

Attrib::Hash::boostparamsasset::MaxSpeedBoostModifier = -9097027527144457540;

Attrib::Hash::boostparamsasset::NearMissBoostEarning = -8500197340308483883;

Attrib::Hash::boostparamsasset::OnComing = -8123106555570631457;

Attrib::Hash::boostparamsasset::RubbingEarning = -5657847537147772142;

Attrib::Hash::boostparamsasset::SlamEarning = -1643247501148292748;

Attrib::Hash::boostparamsasset::SpeedForMaxEarning = -1574127377284081412;

Attrib::Hash::boostparamsasset::StuntSmashEarning = -7010097363749819817;

Attrib::Hash::boostparamsasset::TailgatingEarning = -1992470372002763846;

Attrib::Hash::boostparamsasset::TradingPaintEarning = -6557756835454833620;

Attrib::Hash::boostparamsasset::TrafficCheck = -4306685691871961585;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

Attrib::ClassName::boostparamsasset = -2728788314741784660;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_HALF_DURATION = [63, 0, 0, 0];

BrnWorld::KF_BLUESTWOS_ONE_OVER_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_TIMEOUT = [61, 204, 204, 205];

BrnWorld::KF_EVENT_START_RESET_DEFER_TIME = [62, 25, 153, 154];

BrnWorld::KF_BOOST_EFFECT_LOSS_MAX = [64, 0, 0, 0];

BrnWorld::KF_BOOST_EFFECT_LOSS_MIN = [63, 128, 0, 0];

BrnWorld::KF_MIN_BOOST_BEFORE_USE = [62, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_BEFORE_BOUNCE = [60, 35, 215, 10];

BrnWorld::KF_MIN_SPIN_ANGLE = [66, 52, 0, 0];

BrnWorld::KF_BOUNCE_BOOST_FLASH_BAR_TIME = [63, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_TIME = [63, 160, 0, 0];

BrnWorld::KF_MIN_AIR_TIME_FOR_BOOST = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

BrnWorld::KF_MAX_BOOST = [66, 200, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

