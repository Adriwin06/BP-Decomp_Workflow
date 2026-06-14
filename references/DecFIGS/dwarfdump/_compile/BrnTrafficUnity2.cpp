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

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void BrnWorld::InternalBaseStreamer::OnLoadFail(const GameDataAssetEvent *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::OnAttemptUnload(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::AddVehiclesToTargetList(uint32_t  luNumVehicles, const uint8_t *  lpauVehicleAssetIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:166
		uint32_t luVehicle;

		// BrnTrafficCarStreamer.cpp:167
		uint32_t luAsset;

	}
}

void BrnTraffic::TrafficCarStreamer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:190
		uint32_t luAsset;

		// BrnTrafficCarStreamer.cpp:191
		uint32_t luBonusAssetsUsed;

	}
}

void BrnTraffic::TrafficCarStreamer::QueryLoad(const StreamerTargetEntry *  lpPotentialList, int32_t  liPotentialListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::QueryUnload(const StreamerTargetEntry *  lpPotentialList, int32_t  liPotentialListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::RenderSpontaneousTargetCones(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::FireAirRam(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2718
		DebugComponent * lpComponent;

	}
}

void BrnTraffic::TrafficEntityModule::KillAllTrafficNearPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::OnKillNearPlayer(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3469
		DebugComponent * lpThis;

		TrafficEntityModule::KillAllTrafficNearPlayer(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::OnPickVehicle(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3576
		DebugComponent * lpThis;

	}
}

void BrnTraffic::DebugComponent::DumpLoggedData(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Fuzzy::_FindStringInList(const char *  lpcString, const char **  lpacStringList, int32_t  liNumStrings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:438
		int32_t liIndex;

	}
}

void BrnTraffic::JunctionLogicBox::GetNumStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficLightCollection::GetInstanceIndexForInstanceID(uint32_t  luInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightCollection.h:287
		uint32_t luHash;

		// BrnTrafficLightCollection.h:290
		uint32_t luBeginIndex;

		// BrnTrafficLightCollection.h:293
		uint32_t luEndIndex;

		// BrnTrafficLightCollection.h:298
		uint32_t luInstance;

	}
}

void BrnTraffic::TrafficLightManager::GetLightState(uint32_t  luInstance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint64_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficDataResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GraphicsStubResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GraphicsStubResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GraphicsStubResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GraphicsStubResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Hull::GetNeighbours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::UpdateVehiclesJobParams::SetOutputs(PhysicalRequestInfoList *  lpOutNewPhysicalRequests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetCode(EA::Jobs::JobEnvironment  env, const void *  ptrToCode, int  codeSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetName(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::JobManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<400u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<400u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
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

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::math::vpu::Vector3Plus>(Vector3Plus *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::math::vpu::Vector3Plus>(const rw::math::vpu::Vector3Plus *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::math::vpu::Vector3Plus>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::math::vpu::Vector3Plus>(Vector3Plus *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::Hull::GetSection(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
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

void rw::math::vpu::operator>=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:797
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:799
		bool ret;

		{
			// vec_float_operation_inline.h:798
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::CompNotEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:342
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
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

void rw::math::vpu::GetVecFloat_NegativeOne() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Select(const MaskScalar  mask, const VecFloat  trueValue, const VecFloat  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:350
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void BrnTraffic::Section::GetNumSegments() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sqrt(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:186
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:187
			const VectorIntrinsicUnion::VectorIntrinsic zero;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void rw::math::vpu::NormalizeReturnMagnitude(const rw::math::vpu::Vector3  v, const Vector3 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:209
		VectorIntrinsicUnion::VectorIntrinsic magnitude;

		{
			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic temp_dot;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic one_over_rqrt;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic result_mag;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic zero;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic input_is_zero;

			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
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

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

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

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawArrow(const rw::math::vpu::Vector3  lStart, const rw::math::vpu::Vector3  lEnd, RGBA  luColour, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3613
		Vector3 lLine;

		// BrnTrafficDebugComponent.cpp:3615
		Vector3 lAt;

		// BrnTrafficDebugComponent.cpp:3616
		float32_t lfLength;

		// BrnTrafficDebugComponent.cpp:3619
		Vector3 lUp;

		// BrnTrafficDebugComponent.cpp:3620
		Vector3 lRight;

		// BrnTrafficDebugComponent.cpp:3623
		float32_t lfArrowSize;

		// BrnTrafficDebugComponent.cpp:3626
		Vector3 lLeftArrowPt;

		// BrnTrafficDebugComponent.cpp:3627
		Vector3 lRightArrowPt;

		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	}
	{
		{
		}
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void BrnTraffic::DebugComponent::DrawOffsetArrow(const rw::math::vpu::Vector3  lStart, const rw::math::vpu::Vector3  lEnd, float32_t  lfOffset, RGBA  luColour, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3649
		Vector3 lAt;

		// BrnTrafficDebugComponent.cpp:3650
		Vector3 lUp;

		// BrnTrafficDebugComponent.cpp:3651
		Vector3 lRight;

		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
}

void rw::math::vpu::CompGreaterThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic result;

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

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::CompGreaterEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:328
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::CompLessEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:320
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::And(const MaskScalar  a, const MaskScalar  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// maskscalar_operation_inline.h:31
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::_TriangleLineSegIntersect(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const rw::math::vpu::Vector3  v2, const rw::math::vpu::Vector3  lineStart, const rw::math::vpu::Vector3  lineDelta, const Vector3 &  position, const Vector3 &  triNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:88
		VecFloat det;

		// BrnTrafficVehicle.cpp:88
		VecFloat u;

		// BrnTrafficVehicle.cpp:88
		VecFloat v;

		// BrnTrafficVehicle.cpp:91
		Vector3 edge1;

		// BrnTrafficVehicle.cpp:92
		Vector3 edge2;

		// BrnTrafficVehicle.cpp:94
		Vector3 tVec;

		// BrnTrafficVehicle.cpp:94
		Vector3 pVec;

		// BrnTrafficVehicle.cpp:94
		Vector3 qVec;

		// BrnTrafficVehicle.cpp:95
		VecFloat lo;

		// BrnTrafficVehicle.cpp:95
		VecFloat hi;

		// BrnTrafficVehicle.cpp:103
		MaskScalar detValid;

		// BrnTrafficVehicle.cpp:113
		MaskScalar uValid;

		// BrnTrafficVehicle.cpp:120
		MaskScalar vValid;

		// BrnTrafficVehicle.cpp:124
		VecFloat t;

		// BrnTrafficVehicle.cpp:126
		MaskScalar tValid;

		// BrnTrafficVehicle.cpp:130
		MaskScalar intersects;

		// BrnTrafficVehicle.cpp:132
		VecFloat invDet;

		// BrnTrafficVehicle.cpp:135
		VecFloat lineParam;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Reciprocal(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	{
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::RenderPerfmon(CgsDev::Debug2DImmediateRender *  lpRender, const PerfMonCpuMonitorData *  lpData, float32_t  lfLeft, float32_t  lfTop, float32_t  lfFontSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:601
		RGBA lColourNormal;

		// BrnTrafficDebugComponent.cpp:607
		RwChar[32] lacBuffer;

	}
}

void CgsDev::Debug2DImmediateRender::GetVirtualScreenSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug2DImmediateRender.h:241
	Vector2 lVector;

	{
		// CgsDebug2DImmediateRender.h:241
		Vector2 lVector;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::RenderPerformanceTable(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:545
		float32_t lrDrawPositionX;

		// BrnTrafficDebugComponent.cpp:546
		float32_t lrDrawPositionY;

		// BrnTrafficDebugComponent.cpp:547
		float32_t lrFontSize;

		// BrnTrafficDebugComponent.cpp:548
		RGBA lColourNormal;

		CgsDev::Debug2DImmediateRender::GetVirtualScreenSize(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawJunctionFUPDetection(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3444
		RGBA lColour;

	}
}

void rw::RwPtrSubtractOffset<rw::math::vpu::Vector4>(Vector4 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::math::vpu::Vector4>(const rw::math::vpu::Vector4 *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::math::vpu::Vector4>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::math::vpu::Vector4>(Vector4 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::VehicleTraits>(VehicleTraits *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::VehicleTraits>(const BrnTraffic::VehicleTraits *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::VehicleTraits>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::VehicleTraits>(VehicleTraits *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::VehicleAsset>(BrnTraffic::VehicleAsset *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::VehicleAsset>(const VehicleAsset *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::VehicleAsset>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::VehicleAsset>(BrnTraffic::VehicleAsset *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::VehicleTypeUpdateData>(VehicleTypeUpdateData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::VehicleTypeUpdateData>(const VehicleTypeUpdateData *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::VehicleTypeUpdateData>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::VehicleTypeUpdateData>(VehicleTypeUpdateData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::VehicleTypeData>(VehicleTypeData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::VehicleTypeData>(const VehicleTypeData *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::VehicleTypeData>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::VehicleTypeData>(VehicleTypeData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::KillZoneRegion>(KillZoneRegion *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::KillZoneRegion>(const KillZoneRegion *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::KillZoneRegion>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::KillZoneRegion>(KillZoneRegion *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::KillZone>(KillZone *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::KillZone>(const KillZone *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::KillZone>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::KillZone>(KillZone *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::KillZoneId>(TrafficData::KillZoneId *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::KillZoneId>(const TrafficData::KillZoneId *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::KillZoneId>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::KillZoneId>(TrafficData::KillZoneId *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::FlowType*>(BrnTraffic::FlowType **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::FlowType*>(BrnTraffic::FlowType *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::FlowType*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::FlowType*>(BrnTraffic::FlowType **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::Hull*>(BrnTraffic::Hull **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::Hull*>(BrnTraffic::Hull *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::Hull*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::Hull*>(BrnTraffic::Hull **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::Pvs>(BrnTraffic::Pvs *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::Pvs>(const Pvs *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::Pvs>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::Pvs>(BrnTraffic::Pvs *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::FlowType>(BrnTraffic::FlowType *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::FlowType>(const FlowType *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::FlowType>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::FlowType>(BrnTraffic::FlowType *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::Hull>(BrnTraffic::Hull *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::Hull>(const BrnTraffic::Hull *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::Hull>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::Hull>(BrnTraffic::Hull *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::StaticTrafficVehicle>(StaticTrafficVehicle *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::StaticTrafficVehicle>(const StaticTrafficVehicle *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::StaticTrafficVehicle>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::StaticTrafficVehicle>(StaticTrafficVehicle *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::LightTriggerStartData>(LightTriggerStartData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::LightTriggerStartData>(const LightTriggerStartData *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::LightTriggerStartData>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::LightTriggerStartData>(LightTriggerStartData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::LightTrigger>(LightTrigger *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::LightTrigger>(const LightTrigger *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::LightTrigger>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::LightTrigger>(LightTrigger *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::StopLine>(StopLine *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::StopLine>(const StopLine *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::StopLine>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::StopLine>(StopLine *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::JunctionLogicBox>(BrnTraffic::JunctionLogicBox *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::JunctionLogicBox>(const BrnTraffic::JunctionLogicBox *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::JunctionLogicBox>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::JunctionLogicBox>(BrnTraffic::JunctionLogicBox *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::SectionFlow>(SectionFlow *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::SectionFlow>(const SectionFlow *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::SectionFlow>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::SectionFlow>(SectionFlow *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::Neighbour>(Neighbour *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::Neighbour>(const Neighbour *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::Neighbour>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::Neighbour>(Neighbour *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<float32_t>(float32_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<float32_t>(const float32_t *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<float32_t>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<float32_t>(float32_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::LaneRung>(LaneRung *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::LaneRung>(const BrnTraffic::LaneRung *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::LaneRung>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::LaneRung>(LaneRung *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::SectionSpan>(SectionSpan *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::SectionSpan>(const SectionSpan *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::SectionSpan>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::SectionSpan>(SectionSpan *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::Section>(Section *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::Section>(const Section *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::Section>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::Section>(Section *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsContainers::Set<uint16_t, 8u> >(CgsContainers::Set<uint16_t,8u> *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsContainers::Set<uint16_t, 8u> >(const CgsContainers::Set<uint16_t,8u> *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsContainers::Set<uint16_t, 8u> >(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsContainers::Set<uint16_t, 8u> >(CgsContainers::Set<uint16_t,8u> *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::core::atom::AtomID>(const rw::core::atom::StaticAtomTable::Members::AtomID *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::core::atom::AtomID>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<uint32_t>(uint32_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<uint32_t>(const uint32_t *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<uint32_t>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<uint32_t>(uint32_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::math::vpu::Vector3>(Vector3 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::math::vpu::Vector3>(const rw::math::vpu::Vector3 *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::math::vpu::Vector3>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::math::vpu::Vector3>(Vector3 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<uint8_t>(uint8_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<uint8_t>(const uint8_t *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<uint8_t>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<uint8_t>(uint8_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnTraffic::TrafficLightType>(TrafficLightType *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnTraffic::TrafficLightType>(const TrafficLightType *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnTraffic::TrafficLightType>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnTraffic::TrafficLightType>(TrafficLightType *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,8u>::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:432
		uint32_t luElement;

	}
}

void CgsContainers::Set<uint16_t,8u>::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:455
		uint32_t luElement;

	}
}

void rw::EndianSwap(const Matrix44Affine &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Vector3 &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::detail::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsContainers::Set<uint16_t, 8u> >(const CgsContainers::Set<uint16_t,8u> *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Vector3Plus &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<uint16_t>(uint16_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<rw::math::vpu::Vector3>(Vector3 *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<BrnTraffic::KillZoneId>(TrafficData::KillZoneId *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Axle::GetUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Two() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const const VecFloatRef<VectorAxisW> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:700
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_platform_inline.h:701
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::DebugComponent::DrawAxle(const Axle *  lpAxle, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2878
		Vector3 lPos;

	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Axle::GetUp(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2886
		RGBA lCol;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::IsSimilar<VectorAxisW>(/* parameters */);
}

void rw::EndianSwap<uint16_t>(const uint16_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<uint8_t>(const uint8_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<rw::math::vpu::Vector3Plus>(Vector3Plus *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<uint32_t>(uint32_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::math::vpu::Vector3Plus>(const Vector3Plus *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<uint32_t>(const uint32_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::TrafficLightType>(const TrafficLightType *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::math::vpu::Vector3>(const Vector3 *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::SectionSpan::FixDown(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::Section>(const Section *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::SectionSpan>(const SectionSpan *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::LaneRung>(const LaneRung *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<float32_t>(const float32_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::Neighbour>(const Neighbour *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::SectionFlow>(const SectionFlow *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::JunctionLogicBox>(const BrnTraffic::JunctionLogicBox *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::StopLine>(const StopLine *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::LightTrigger>(const LightTrigger *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::LightTriggerStartData>(const LightTriggerStartData *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::StaticTrafficVehicle>(const StaticTrafficVehicle *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::Hull>(const BrnTraffic::Hull *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::FlowType>(const BrnTraffic::FlowType *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Vector4 &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::Pvs>(const BrnTraffic::Pvs *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::Hull*>(const BrnTraffic::Hull **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::FlowType*>(const BrnTraffic::FlowType **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::KillZoneId>(const TrafficData::KillZoneId *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::KillZone>(const KillZone *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::KillZoneRegion>(const KillZoneRegion *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::VehicleTypeData>(const VehicleTypeData *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::VehicleTypeUpdateData>(const VehicleTypeUpdateData *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::VehicleAsset>(const BrnTraffic::VehicleAsset *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnTraffic::VehicleTraits>(const VehicleTraits *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::math::vpu::Vector4>(const Vector4 *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficDataResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDataResourceType.cpp:119
		TrafficData * lpData;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::operator==<3u>(const const BaseResources<3u> &  lhs, const const BaseResources<3u> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:503
		uint32_t i;

	}
}

void BrnTraffic::VehicleTypeRuntime::GetForwardAxleOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:400
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::VehicleTypeRuntime::GetBackAxleOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Axle::SetUp(const rw::math::vpu::Vector3  lUp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetOnlineStartDataIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetOfflineStartDataIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
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

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
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

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void rw::RwPtrAddOffset<BrnTraffic::LightTrigger>(LightTrigger *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::LightTrigger>(LightTrigger *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::LightTriggerStartData>(LightTriggerStartData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::LightTriggerStartData>(LightTriggerStartData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::StaticTrafficVehicle>(StaticTrafficVehicle *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::StaticTrafficVehicle>(StaticTrafficVehicle *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsContainers::Set<uint16_t, 8u> >(CgsContainers::Set<uint16_t,8u> *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsContainers::Set<uint16_t, 8u> >(CgsContainers::Set<uint16_t,8u> *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<rw::math::vpu::Vector3Plus>(Vector3Plus *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<rw::math::vpu::Vector3Plus>(Vector3Plus *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<uint32_t>(uint32_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<uint32_t>(uint32_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::TrafficLightType>(TrafficLightType *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::TrafficLightType>(TrafficLightType *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<rw::math::vpu::Vector3>(Vector3 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<rw::math::vpu::Vector3>(Vector3 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::Pvs>(BrnTraffic::Pvs *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::Pvs>(BrnTraffic::Pvs *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::Hull*>(BrnTraffic::Hull **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::Hull*>(BrnTraffic::Hull **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::FlowType*>(BrnTraffic::FlowType **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::FlowType*>(BrnTraffic::FlowType **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::KillZoneId>(TrafficData::KillZoneId *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::KillZoneId>(TrafficData::KillZoneId *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::KillZone>(KillZone *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::KillZone>(KillZone *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::KillZoneRegion>(KillZoneRegion *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::KillZoneRegion>(KillZoneRegion *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<uint16_t>(uint16_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<uint16_t>(uint16_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::VehicleTypeData>(VehicleTypeData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::VehicleTypeData>(VehicleTypeData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::VehicleTypeUpdateData>(VehicleTypeUpdateData *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::VehicleTypeUpdateData>(VehicleTypeUpdateData *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::VehicleAsset>(BrnTraffic::VehicleAsset *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::VehicleAsset>(BrnTraffic::VehicleAsset *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::VehicleTraits>(VehicleTraits *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::VehicleTraits>(VehicleTraits *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<rw::math::vpu::Vector4>(Vector4 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<rw::math::vpu::Vector4>(Vector4 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::Hull>(BrnTraffic::Hull *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::Hull>(BrnTraffic::Hull *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::FlowType>(BrnTraffic::FlowType *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::FlowType>(BrnTraffic::FlowType *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<uint8_t>(uint8_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<uint8_t>(uint8_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::Section>(Section *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::Section>(Section *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::SectionSpan>(SectionSpan *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::SectionSpan>(SectionSpan *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::LaneRung>(LaneRung *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::LaneRung>(LaneRung *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<float32_t>(float32_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<float32_t>(float32_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::Neighbour>(Neighbour *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::Neighbour>(Neighbour *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::SectionFlow>(SectionFlow *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::SectionFlow>(SectionFlow *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::JunctionLogicBox>(BrnTraffic::JunctionLogicBox *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::JunctionLogicBox>(BrnTraffic::JunctionLogicBox *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnTraffic::StopLine>(StopLine *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnTraffic::StopLine>(StopLine *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Lerp(const const RGBA &  lColourA, const const RGBA &  lColourB, const float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:130
		float32_t lfR1;

		// BrnTrafficDebugComponent.cpp:131
		float32_t lfG1;

		// BrnTrafficDebugComponent.cpp:132
		float32_t lfB1;

		// BrnTrafficDebugComponent.cpp:133
		float32_t lfA1;

		// BrnTrafficDebugComponent.cpp:135
		float32_t lfR2;

		// BrnTrafficDebugComponent.cpp:136
		float32_t lfG2;

		// BrnTrafficDebugComponent.cpp:137
		float32_t lfB2;

		// BrnTrafficDebugComponent.cpp:138
		float32_t lfA2;

		rw::RGBA::GetRed(/* parameters */);
	}
	rw::RGBA::GetRed(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GraphicsStubResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficGraphicsStubResourceType.cpp:56
	ResourceDescriptor & lDescriptor;

	{
		// BrnTrafficGraphicsStubResourceType.cpp:56
		ResourceDescriptor lDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsDev::Debug3DImmediateRender::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:280
		VectorIntrinsicUnion::VectorIntrinsic v;

		// matrix44_operation_inline.h:281
		VectorIntrinsicUnion::VectorIntrinsic mat_x;

		// matrix44_operation_inline.h:282
		VectorIntrinsicUnion::VectorIntrinsic mat_y;

		// matrix44_operation_inline.h:283
		VectorIntrinsicUnion::VectorIntrinsic mat_z;

		// matrix44_operation_inline.h:284
		VectorIntrinsicUnion::VectorIntrinsic mat_w;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

	}
}

void rw::math::vpu::operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:616
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:620
		bool ret;

		{
			// vec_float_operation_inline.h:619
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:274
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44 &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation_platform_inline.h:137
	Matrix44 & r;

	{
		// matrix44_operation_platform_inline.h:137
		Matrix44 r;

	}
}

void rw::math::vpu::_asmInverse(const VectorIntrinsicUnion::VectorIntrinsic &  od, const VectorIntrinsicUnion::VectorIntrinsic &  ox, const VectorIntrinsicUnion::VectorIntrinsic &  oy, const VectorIntrinsicUnion::VectorIntrinsic &  oz, const VectorIntrinsicUnion::VectorIntrinsic &  ow, VectorIntrinsicInParam  ix, VectorIntrinsicInParam  iy, VectorIntrinsicInParam  iz, VectorIntrinsicInParam  iw) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift1X;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift1Y;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift1Z;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift1W;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift2X;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift2Y;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift2Z;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift2W;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift3X;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift3Y;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift3Z;

		// vector_intrinsic_operation_inline.h:553
		VectorIntrinsicUnion::VectorIntrinsic shift3W;

		// vector_intrinsic_operation_inline.h:571
		VectorIntrinsicUnion::VectorIntrinsic productYZW;

		// vector_intrinsic_operation_inline.h:571
		VectorIntrinsicUnion::VectorIntrinsic productZWX;

		// vector_intrinsic_operation_inline.h:571
		VectorIntrinsicUnion::VectorIntrinsic productWXY;

		// vector_intrinsic_operation_inline.h:571
		VectorIntrinsicUnion::VectorIntrinsic productXYZ;

		// vector_intrinsic_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic x;

		// vector_intrinsic_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic y;

		// vector_intrinsic_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic z;

		// vector_intrinsic_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic w;

		{
			// vector_intrinsic_operation_inline.h:574
			VectorIntrinsicUnion::VectorIntrinsic tmp0;

			// vector_intrinsic_operation_inline.h:574
			VectorIntrinsicUnion::VectorIntrinsic tmp1;

			// vector_intrinsic_operation_inline.h:574
			VectorIntrinsicUnion::VectorIntrinsic tmp2;

			{
				// vector_intrinsic_operation_inline.h:580
				VectorIntrinsicUnion::VectorIntrinsic _asmNegateYW_mask;

				{
					// vector_intrinsic_operation_inline.h:580
					VectorIntrinsicUnion::VectorIntrinsic _asmGetSignMaskYW_zero;

					{
						// vector_intrinsic_operation_inline.h:580
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
					{
						// vector_intrinsic_operation_inline.h:580
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:585
			VectorIntrinsicUnion::VectorIntrinsic tmp0;

			// vector_intrinsic_operation_inline.h:585
			VectorIntrinsicUnion::VectorIntrinsic tmp1;

			// vector_intrinsic_operation_inline.h:585
			VectorIntrinsicUnion::VectorIntrinsic tmp2;

			{
				// vector_intrinsic_operation_inline.h:591
				VectorIntrinsicUnion::VectorIntrinsic _asmNegateXZ_mask;

				{
					// vector_intrinsic_operation_inline.h:591
					VectorIntrinsicUnion::VectorIntrinsic _asmGetSignMaskXZ_zero;

					{
						// vector_intrinsic_operation_inline.h:591
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
					{
						// vector_intrinsic_operation_inline.h:591
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:595
			VectorIntrinsicUnion::VectorIntrinsic tmp0;

			// vector_intrinsic_operation_inline.h:595
			VectorIntrinsicUnion::VectorIntrinsic tmp1;

			// vector_intrinsic_operation_inline.h:595
			VectorIntrinsicUnion::VectorIntrinsic tmp2;

			{
				// vector_intrinsic_operation_inline.h:601
				VectorIntrinsicUnion::VectorIntrinsic _asmNegateYW_mask;

				{
					// vector_intrinsic_operation_inline.h:601
					VectorIntrinsicUnion::VectorIntrinsic _asmGetSignMaskYW_zero;

					{
						// vector_intrinsic_operation_inline.h:601
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
					{
						// vector_intrinsic_operation_inline.h:601
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:605
			VectorIntrinsicUnion::VectorIntrinsic tmp0;

			// vector_intrinsic_operation_inline.h:605
			VectorIntrinsicUnion::VectorIntrinsic tmp1;

			// vector_intrinsic_operation_inline.h:605
			VectorIntrinsicUnion::VectorIntrinsic tmp2;

			{
				// vector_intrinsic_operation_inline.h:611
				VectorIntrinsicUnion::VectorIntrinsic _asmNegateXZ_mask;

				{
					// vector_intrinsic_operation_inline.h:611
					VectorIntrinsicUnion::VectorIntrinsic _asmGetSignMaskXZ_zero;

					{
						// vector_intrinsic_operation_inline.h:611
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
					{
						// vector_intrinsic_operation_inline.h:611
						VectorIntrinsicUnion::VectorIntrinsic permuteControl;

					}
				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:615
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

			// vector_intrinsic_operation_inline.h:615
			VectorIntrinsicUnion::VectorIntrinsic zz_ww;

			// vector_intrinsic_operation_inline.h:615
			VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

			// vector_intrinsic_operation_inline.h:615
			VectorIntrinsicUnion::VectorIntrinsic yyplusww;

		}
		{
			// vector_intrinsic_operation_inline.h:620
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:620
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// vector_intrinsic_operation_inline.h:620
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// vector_intrinsic_operation_inline.h:620
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
		{
			// vector_intrinsic_operation_inline.h:622
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector_intrinsic_operation_inline.h:622
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector_intrinsic_operation_inline.h:622
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector_intrinsic_operation_inline.h:622
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector_intrinsic_operation_inline.h:622
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:623
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector_intrinsic_operation_inline.h:623
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector_intrinsic_operation_inline.h:623
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector_intrinsic_operation_inline.h:623
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector_intrinsic_operation_inline.h:623
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:624
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector_intrinsic_operation_inline.h:624
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector_intrinsic_operation_inline.h:624
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector_intrinsic_operation_inline.h:624
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector_intrinsic_operation_inline.h:624
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
		{
			// vector_intrinsic_operation_inline.h:625
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector_intrinsic_operation_inline.h:625
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector_intrinsic_operation_inline.h:625
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector_intrinsic_operation_inline.h:625
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector_intrinsic_operation_inline.h:625
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void CgsDev::Debug3DImmediateRender::GetVirtualScreenSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug3DImmediateRender.h:260
	Vector2 lVector;

	{
		// CgsDebug3DImmediateRender.h:260
		Vector2 lVector;

	}
}

void rw::math::vpu::operator/<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:539
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:540
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:540
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:539
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:540
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:540
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void BrnTraffic::DebugComponent::RenderVerticalMeter(CgsDev::Debug3DImmediateRender *  lpDisplay, const rw::math::vpu::Vector3  lBasePosition, const rw::math::vpu::Vector2  lBaseOffset, float32_t  lfBarWidth, float32_t  lfBarHeight, RGBA  lBarScaleColour, RGBA  lBarMarkerColour, float32_t  lfReadingMax, float32_t  lfReading) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3929
		Vector3 lScreenBase;

		// BrnTrafficDebugComponent.cpp:3936
		Matrix44 lInvVP;

		// BrnTrafficDebugComponent.cpp:3937
		Vector3 lScreenUp;

		// BrnTrafficDebugComponent.cpp:3938
		Vector3 lScreenRight;

		// BrnTrafficDebugComponent.cpp:3943
		Vector3 lRenderBase;

		// BrnTrafficDebugComponent.cpp:3945
		Vector3 lHDelta;

		// BrnTrafficDebugComponent.cpp:3946
		Vector3 lTopOfBar;

		// BrnTrafficDebugComponent.cpp:3947
		Vector3 lMiddleOfBar;

		// BrnTrafficDebugComponent.cpp:3958
		float32_t lfScaledReading;

		// BrnTrafficDebugComponent.cpp:3961
		Vector3 lVDelta;

		// BrnTrafficDebugComponent.cpp:3962
		Vector3 lBarBL;

		// BrnTrafficDebugComponent.cpp:3963
		Vector3 lBarBR;

		// BrnTrafficDebugComponent.cpp:3964
		Vector3 lBarTR;

		// BrnTrafficDebugComponent.cpp:3965
		Vector3 lBarTL;

	}
	CgsDev::Debug3DImmediateRender::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	CgsDev::Debug3DImmediateRender::GetVirtualScreenSize(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	{
	}
	CgsDev::Debug3DImmediateRender::GetVirtualScreenSize(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector2::SetX(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator/<VectorAxisY, VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void BrnTraffic::DebugComponent::DrawFuzzyLogic(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3122
		float32_t KF_BAR_WIDTH;

		// BrnTrafficDebugComponent.cpp:3123
		float32_t KF_BAR_HEIGHT;

		// BrnTrafficDebugComponent.cpp:3125
		const RGBA lScaleColour;

		// BrnTrafficDebugComponent.cpp:3127
		uint32_t luIndex;

	}
	rw::RGBA::RGBA(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3130
		DEBUG_VehicleFuzzyLogic * lpData;

		// BrnTrafficDebugComponent.cpp:3131
		Vector2 lOffset;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	}
}

void BrnWorld::BaseStreamer<64>::Construct(int32_t  liPoolId, bool  lbSlotSystem, BrnResource::EAssetSet  leAssetSet, bool  lbAllowFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:67
		uint32_t luAsset;

		// BrnTrafficCarStreamer.cpp:69
		bool lbSlotSystem;

		// BrnTrafficCarStreamer.cpp:70
		bool lbAllowFailure;

		BrnWorld::BaseStreamer<64>::Construct(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator=(/* parameters */);
}

void BrnTraffic::TrafficDataResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficDataResourceType.cpp:60
	ResourceDescriptor & lDescriptor;

	{
		// BrnTrafficDataResourceType.cpp:56
		const TrafficData * lpTrafficData;

		// BrnTrafficDataResourceType.cpp:60
		ResourceDescriptor lDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
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

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::GetDebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::Activate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:282
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::GetDebugManager(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
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

void rw::math::vpu::Tan(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::tanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// tanf4.h:15
		float[4] xl;

		// tanf4.h:15
		float[4] xl2;

		// tanf4.h:15
		float[4] xl3;

		// tanf4.h:15
		float[4] res;

		// tanf4.h:16
		int[4] q;

		// tanf4.h:31
		float[4] qf;

		// tanf4.h:32
		float[4] p1;

		// tanf4.h:45
		float[4] ct2;

		// tanf4.h:47
		float[4] cx;

		// tanf4.h:48
		float[4] sx;

		// tanf4.h:53
		float[4] cxosx;

		// tanf4.h:54
		float[4] sxocx;

		// tanf4.h:56
		float[4] ncxosx;

		// tanf4.h:61
		unsigned int[4] mask;

	}
}

void std::divf4(float[4]  numer, float[4]  denom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// divf4.h:15
		float[4] y0;

		// divf4.h:15
		float[4] y0numer;

	}
}

void rw::math::vpu::operator*(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1657
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1658
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1658
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
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

void BrnTraffic::DebugComponent::RenderSingleDebugCone(CgsDev::Debug3DImmediateRender *  lpDisplay, const rw::math::vpu::Matrix44Affine &  lCone, const VecFloat  lfHalfAngle, RGBA  lColour, int32_t  liNumSegments) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3729
		const VecFloat lfBaseRadius;

		// BrnTrafficDebugComponent.cpp:3730
		const VecFloat lfSegmentAngle;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Tan(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3732
		int32_t i;

	}
	{
		// BrnTrafficDebugComponent.cpp:3734
		VecFloat lCurrentAngle;

		// BrnTrafficDebugComponent.cpp:3735
		VecFloat lNextAngle;

		// BrnTrafficDebugComponent.cpp:3737
		VecFloat lSinAngle;

		// BrnTrafficDebugComponent.cpp:3738
		VecFloat lCosAngle;

		// BrnTrafficDebugComponent.cpp:3739
		VecFloat lSinAngle2;

		// BrnTrafficDebugComponent.cpp:3740
		VecFloat lCosAngle2;

		// BrnTrafficDebugComponent.cpp:3742
		Vector3 lSpherePointOffsetA;

		// BrnTrafficDebugComponent.cpp:3743
		Vector3 lSpherePointOffsetB;

		rw::math::vpu::Sin(/* parameters */);
		vec_and(/* parameters */);
		vec_sel(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Matrix44Affine::Right(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Cos(/* parameters */);
		rw::math::vpu::Matrix44Affine::Up(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Sin(/* parameters */);
		vec_add(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		rw::math::vpu::Cos(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_cts(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::Construct(BrnTraffic::TrafficEntityModule *  lpModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsPhysical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsSympatheticallyCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetFlashingHeadlights(bool  lbOn, Random *  lpRand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsFlashingHeadlights() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void BrnTraffic::Vehicle::SetHeadlightsFlashed(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsAlarmOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsLeftIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetCurrentManoeuvre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::AreHeadlightsFlashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsIndicatingLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsIndicatingRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::ToggleLeftIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::ToggleRightIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnMath::IntMax(int32_t  liA, int32_t  liB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:241
		int32_t liSign;

		// BrnMathUtils.h:242
		int32_t liMask;

	}
}

void BrnMath::IntMin(int32_t  liA, int32_t  liB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:220
		int32_t liSign;

		// BrnMathUtils.h:221
		int32_t liMask;

	}
}

void BrnTraffic::Vehicle::IsRightIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Frustum::GetPlane(CgsGeometric::Frustum::PlaneId  lePlaneId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Frustum::PlaneIdToIndex(CgsGeometric::Frustum::PlaneId  lePlaneId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Frustum::GetPlaneByIndex(uint32_t  luPlaneIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.h:243
		Plane lPlaneOut;

		// CgsFrustum.h:244
		uint32_t luComponent;

	}
}

void rw::collision::Plane::Plane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
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

void rw::collision::Plane::GetNormal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
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

void BrnTraffic::GetIntersection(const Frustum &  lpFrustum, CgsGeometric::Frustum::PlaneId  lPlane1, CgsGeometric::Frustum::PlaneId  lPlane2, CgsGeometric::Frustum::PlaneId  lPlane3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3879
		Vector3 P1;

		// BrnTrafficDebugComponent.cpp:3880
		Vector3 P2;

		// BrnTrafficDebugComponent.cpp:3881
		Vector3 P3;

		// BrnTrafficDebugComponent.cpp:3887
		Vector3 N1;

		// BrnTrafficDebugComponent.cpp:3888
		Vector3 N2;

		// BrnTrafficDebugComponent.cpp:3889
		Vector3 N3;

		// BrnTrafficDebugComponent.cpp:3895
		Vector3 lOutput;

		// BrnTrafficDebugComponent.cpp:3901
		float32_t lfDividedBy;

		CgsGeometric::Frustum::GetPlane(/* parameters */);
	}
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::collision::Plane::GetDistance(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::collision::Plane::GetDistance(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::collision::Plane::GetDistance(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	CgsGeometric::Frustum::GetPlane(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::collision::Plane::GetNormal(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnTraffic::DrawFrustum(const Frustum &  lFrustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3819
		const int32_t KI_FRUSTUM_CORNERS;

		// BrnTrafficDebugComponent.cpp:3821
		Vector3[8] laCorner;

		// BrnTrafficDebugComponent.cpp:3825
		CgsGeometric::Frustum::PlaneId[8][3] laIntersectPlanes;

		// BrnTrafficDebugComponent.cpp:3835
		int32_t liCorners;

		// BrnTrafficDebugComponent.cpp:3844
		const int32_t KI_FRUSTUM_EDGES;

		// BrnTrafficDebugComponent.cpp:3846
		const int32_t[12][2] laJoinUp;

		// BrnTrafficDebugComponent.cpp:3850
		DebugInterface lDebugInterface;

		// BrnTrafficDebugComponent.cpp:3852
		int32_t liEdges;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:3858
			Vector3 lTo;

			// BrnTrafficDebugComponent.cpp:3859
			Vector3 lFrom;

		}
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

void BrnTraffic::TrafficLightCollection::CalcInstanceTransform(uint32_t  luInstance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightCollection.h:251
		Vector3Plus lPosAndYRot;

	}
}

void BrnTraffic::ExpandPosPlusYRotToTransform(const rw::math::vpu::Vector3Plus  lPosPlusYRot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficSharedMaths.h:87
	Matrix44Affine & lTransform;

	{
		// BrnTrafficSharedMaths.h:87
		Matrix44Affine lTransform;

	}
}

void rw::math::vpu::Matrix44AffineFromYRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:248
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:248
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:250
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:251
		const VecFloat one;

		// matrix44affine_operation_platform_inline.h:253
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:254
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:255
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:256
		Vector3 lRow3;

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

void rw::math::vpu::operator<=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:832
		bool result;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1420
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1422
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1421
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Lerp(const VecFloat  a, const VecFloat  b, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// scalar_operation_inline.h:166
	VecFloat r;

	{
		// scalar_operation_inline.h:166
		VecFloat r;

	}
}

void rw::math::vpu::Subtract(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:664
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Mult(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:809
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Add(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:519
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::TrafficLightCollection::GetInstanceType(uint32_t  luInstance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficLightCollection::GetTrafficLightType(uint32_t  luType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficLightCollection::GetCoronaState(uint32_t  luCorona) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficLightCollection::GetCoronaPosition(uint32_t  luCorona) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:50
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(char  lcChar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawTextWithOffsets(const DebugRender &  lDebugRender, CgsDev::StrStream *  lpStream, float32_t  lfX, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3774
		char[4096] lacBuffer;

		// BrnTrafficDebugComponent.cpp:3775
		CgsDev::StrStream lStream;

		// BrnTrafficDebugComponent.cpp:3776
		int32_t liCharIndex;

		// BrnTrafficDebugComponent.cpp:3777
		float32_t lfYOffset;

		// BrnTrafficDebugComponent.cpp:3778
		int32_t liCharCount;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:3782
		char lcChar;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Param::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetChangedSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetParamAlong(float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::FuzzyEnvelopeSet4::CalcScores(const VecFloat  lfX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficFuzzyEnvelopeSet.h:126
	Vector4 lClampedVal;

	{
		// BrnTrafficFuzzyEnvelopeSet.h:113
		Vector4 lfX4;

		// BrnTrafficFuzzyEnvelopeSet.h:117
		Vector4 lAttackVal;

		// BrnTrafficFuzzyEnvelopeSet.h:120
		Vector4 lDecayVal;

		// BrnTrafficFuzzyEnvelopeSet.h:123
		Vector4 lGradVal;

		// BrnTrafficFuzzyEnvelopeSet.h:126
		Vector4 lClampedVal;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Vector4  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:131
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Min(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1, const rw::math::vpu::Vector4  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:100
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void BrnTraffic::FuzzyAND(const VecFloat  lfA, const VecFloat  lfB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::FuzzyNOT(const VecFloat  lfA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::FuzzyOR(const VecFloat  lfA, const VecFloat  lfB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const VecFloat  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1265
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1266
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1267
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void CgsDev::Debug3DImmediateRender::GetCameraPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicleTransform(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawNearestVehicleId(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2371
		Vector3 lPlayerPos;

		// BrnTrafficDebugComponent.cpp:2374
		uint32_t luNearestVehicleId;

		// BrnTrafficDebugComponent.cpp:2375
		float32_t lfNearestVehicleDistSq;

		// BrnTrafficDebugComponent.cpp:2376
		Vector3 lNearestVehiclePos;

		// BrnTrafficDebugComponent.cpp:2377
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2378
		uint32_t luVehicle;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2381
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2385
			Vector3 lVehiclePos;

			// BrnTrafficDebugComponent.cpp:2386
			float32_t lfDistSq;

		}
		TrafficEntityModule::GetVehicleTransform(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:2400
		char[128] lacBuffer;

		// BrnTrafficDebugComponent.cpp:2403
		Vector3 lTextPos;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
}

void rw::math::vpu::operator<=(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:924
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:926
		bool ret;

		{
			// vec_float_operation_inline.h:925
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::DebugComponent::DrawVehicleIds(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2422
		Vector3 lPlayerPos;

		// BrnTrafficDebugComponent.cpp:2424
		VecFloat lfRadiusSq;

		// BrnTrafficDebugComponent.cpp:2426
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2427
		uint32_t luVehicle;

		// BrnTrafficDebugComponent.cpp:2428
		char[128] lacBuffer;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2431
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2435
			Vector3 lVehiclePos;

			// BrnTrafficDebugComponent.cpp:2436
			float32_t lfDistSq;

			TrafficEntityModule::GetVehicleTransform(/* parameters */);
		}
		{
			// BrnTrafficDebugComponent.cpp:2440
			Vector3 lTextPos;

		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void BrnTraffic::Vehicle::GetTargetPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetSympatheticCrashTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawShowtime(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3360
		uint32_t luIndex;

		// BrnTrafficDebugComponent.cpp:3401
		VecFloat lfBoxSize;

		// BrnTrafficDebugComponent.cpp:3402
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:3403
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:3404
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:3406
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:3363
		ShowtimeVehicleInfo * lpShowtimeInfo;

		// BrnTrafficDebugComponent.cpp:3366
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:3367
		Vector3 lVehiclePos;

		// BrnTrafficDebugComponent.cpp:3369
		Vehicle * lpVehicle;

		TrafficEntityModule::GetVehicleTransform(/* parameters */);
		TrafficEntityModule::GetVehicle(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:3387
		Vector3 lDebugRenderPos;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
		// BrnTrafficDebugComponent.cpp:3409
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:3419
			EntityId lTargetEntity;

			{
				// BrnTrafficDebugComponent.cpp:3422
				Matrix44Affine lTargetMatrix;

			}
		}
	}
	Vehicle::IsAlive(/* parameters */);
	Vehicle::IsSympatheticallyCrashing(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Vehicle::GetSympatheticCrashTarget(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Sphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::ShouldObjectBeCulled(const rw::math::vpu::Vector3  lPos, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::VehicleTypeRuntime::GetBBoxHalfSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Sphere::Set(const rw::math::vpu::Vector3  lPosition, const VecFloat  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::TestLineSphere(const SphereArg  lSphere, const rw::math::vpu::Vector3  lLineStart, const rw::math::vpu::Vector3  lLineDirection, const VecFloat  lfLineLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLineTests.cpp:96
		Vector3 lP0ToSphere;

		// CgsLineTests.cpp:97
		Vector3 lP1ToSphere;

		// CgsLineTests.cpp:100
		VecFloat lfLineParam;

		// CgsLineTests.cpp:103
		MaskScalar lParamGT0;

		// CgsLineTests.cpp:104
		MaskScalar lParamLT1;

		// CgsLineTests.cpp:107
		Vector3 lParallel;

		// CgsLineTests.cpp:108
		Vector3 lOrth;

		// CgsLineTests.cpp:109
		VecFloat lfDistSq;

		// CgsLineTests.cpp:112
		VecFloat lfRadSq;

		// CgsLineTests.cpp:115
		MaskScalar lDistLT;

		// CgsLineTests.cpp:118
		MaskScalar lLineInSphere;

		// CgsLineTests.cpp:121
		MaskScalar lP0InSphere;

		// CgsLineTests.cpp:122
		MaskScalar lP1InSphere;

	}
}

void CgsGeometric::Sphere::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Sphere::GetRadius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Or(const MaskScalar  a, const MaskScalar  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// maskscalar_operation_inline.h:38
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::VehicleTypeRuntime::GetBBoxOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawPickedVehicle(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3485
		Matrix44Affine lCameraTransform;

		// BrnTrafficDebugComponent.cpp:3486
		RGBA lCamBoxColour;

		// BrnTrafficDebugComponent.cpp:3490
		VecFloat lfClosestDistSq;

		// BrnTrafficDebugComponent.cpp:3491
		Sphere lClosestSphere;

		// BrnTrafficDebugComponent.cpp:3494
		uint32_t luVehicle;

		// BrnTrafficDebugComponent.cpp:3557
		const float32_t KF_CAM_BOX_SIZE;

		// BrnTrafficDebugComponent.cpp:3558
		Vector3 lCamInf;

		// BrnTrafficDebugComponent.cpp:3559
		Vector3 lCamSup;

		// BrnTrafficDebugComponent.cpp:3560
		Matrix44Affine lCamBoxMatrix;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3497
		const Vehicle * lpVehicle;

		// BrnTrafficDebugComponent.cpp:3498
		Matrix44Affine lVehicleMatrix;

		// BrnTrafficDebugComponent.cpp:3505
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficDebugComponent.cpp:3506
		Vector3 lVehicleHalfSize;

		// BrnTrafficDebugComponent.cpp:3509
		Sphere lVehicleSphere;

		// BrnTrafficDebugComponent.cpp:3511
		bool lbIntersect;

	}
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	CgsGeometric::Sphere::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	CgsGeometric::TestLineSphere(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3519
		Vector3 lDiff;

		// BrnTrafficDebugComponent.cpp:3520
		VecFloat lfDiffSq;

		rw::math::vpu::operator<(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:3545
		const Vehicle * lpVehicle;

		// BrnTrafficDebugComponent.cpp:3546
		Matrix44Affine lVehicleMatrix;

		// BrnTrafficDebugComponent.cpp:3547
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficDebugComponent.cpp:3548
		Vector3 lVehicleHalfSize;

		// BrnTrafficDebugComponent.cpp:3550
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:3551
		Vector3 lSup;

		TrafficEntityModule::GetVehicle(/* parameters */);
		TrafficEntityModule::GetVehicleTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
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

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Construct(CreateRivalInTrafficSystemEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::SetEventPointer(CreateRivalInTrafficSystemEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Construct(RemoveRivalFromTrafficSystemEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::SetEventPointer(RemoveRivalFromTrafficSystemEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Construct(CleanupTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::SetEventPointer(CleanupTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Construct(NetworkTrafficCrashingEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::SetEventPointer(NetworkTrafficCrashingEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Clear() {
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

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetParam(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetDeterministicParamPos(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetParamTransform(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamTransform::GetDeterministicPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamTransform::GetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawParams(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1600
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:1601
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:1603
		uint32_t luParam;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1606
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:1609
			Vector3 lPos;

			// BrnTrafficDebugComponent.cpp:1618
			Vector3 lStart;

			// BrnTrafficDebugComponent.cpp:1619
			Vector3 lEnd;

		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::ParamTransform::GetLerpedPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawLerpedParams(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1637
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:1638
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:1640
		uint32_t luParam;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1643
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:1646
			Vector3 lPos;

		}
	}
	ParamTransform::GetLerpedPos(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::DebugComponent::DrawParamBehaviours(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1671
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:1672
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:1674
		uint32_t luParam;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1677
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:1680
			Vector3 lPos;

			// BrnTrafficDebugComponent.cpp:1688
			RGBA lColour;

			{
				// BrnTrafficDebugComponent.cpp:1755
				Vector3 lStart;

				// BrnTrafficDebugComponent.cpp:1756
				Vector3 lEnd;

			}
		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1747
		Vector3 lVehicleAheadPos;

		TrafficEntityModule::GetParamTransform(/* parameters */);
		ParamTransform::GetDeterministicPos(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
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
}

void BrnTraffic::DebugComponent::DrawParamSlowData(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1777
		uint32_t luParam;

	}
	{
		// BrnTrafficDebugComponent.cpp:1780
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:1783
			Vector3 lPos;

			{
				// BrnTrafficDebugComponent.cpp:1801
				Vector3 lStart;

				// BrnTrafficDebugComponent.cpp:1802
				Vector3 lEnd;

			}
		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1793
		Vector3 lVehicleAheadPos;

		TrafficEntityModule::GetParamTransform(/* parameters */);
		ParamTransform::GetDeterministicPos(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	ParamTransform::GetDirection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::GetVehicleAxles(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawParamVehicleLinks(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2286
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2288
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:2291
		const BrnTraffic::Param * lpParam;

		// BrnTrafficDebugComponent.cpp:2292
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2295
			const VehicleAxles * lpAxles;

			// BrnTrafficDebugComponent.cpp:2296
			Vector3 lParamPos;

		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	ParamTransform::GetDeterministicPos(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::DebugComponent::DrawParamParamLinks(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2323
		Vector3 lVerticalOffset;

		// BrnTrafficDebugComponent.cpp:2325
		uint32_t luParam;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2328
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:2337
			const ParamListNode * lpNode;

			// BrnTrafficDebugComponent.cpp:2338
			uint32_t luNextParam;

			// BrnTrafficDebugComponent.cpp:2339
			uint32_t luPrevParam;

			{
				// BrnTrafficDebugComponent.cpp:2349
				Vector3 lStart;

				// BrnTrafficDebugComponent.cpp:2350
				Vector3 lEnd;

			}
		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2343
		Vector3 lStart;

		// BrnTrafficDebugComponent.cpp:2344
		Vector3 lEnd;

		TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
		TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		ParamTransform::GetDeterministicPos(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	ParamTransform::GetDeterministicPos(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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

void BrnTraffic::Vehicle::IsArticulated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetCabPivotDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawRearArticPoints(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2735
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:2736
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2737
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:2743
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2758
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:2760
			Vector3 lPos;

		}
		TrafficEntityModule::GetVehicleTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		ShouldObjectBeCulled(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		VehicleTypeRuntime::GetCabPivotDistance(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	}
}

void BrnTraffic::Vehicle::IsOfStandardSpecies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsOfTrailerSpecies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::WasPartiallyUpdated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawAxles(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2826
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:2827
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2828
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:2834
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2837
			const VehicleAxles * lpAxles;

		}
	}
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

void BrnTraffic::Vehicle::IsHornOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawHorns(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2919
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:2920
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:2926
		const Vehicle * lpVehicle;

	}
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
}

void BrnTraffic::Vehicle::GetSwerveAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsExtremeSwerving() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawVehicleSwervingDebugging(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3177
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:3179
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:3180
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:3181
		Vector3 lYOffset;

		// BrnTrafficDebugComponent.cpp:3183
		const RGBA K_VEHICLE_TARGETPOS_COLOUR_NOSWERVE;

		// BrnTrafficDebugComponent.cpp:3184
		const RGBA K_VEHICLE_TARGETPOS_COLOUR_NEUTRAL;

		// BrnTrafficDebugComponent.cpp:3185
		const RGBA K_VEHICLE_TARGETPOS_COLOUR_SWERVING;

		// BrnTrafficDebugComponent.cpp:3186
		const RGBA K_VEHICLE_TARGETPOS_COLOUR_WAITING;

		// BrnTrafficDebugComponent.cpp:3187
		const RGBA K_VEHICLE_PREDICTEDPOS_COLOUR;

		// BrnTrafficDebugComponent.cpp:3189
		uint32_t luVehicle;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3192
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:3202
			Vector3 lPos;

			// BrnTrafficDebugComponent.cpp:3204
			RGBA lTargetCol;

			rw::math::fpu::IsZero(/* parameters */);
		}
	}
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	Vehicle::GetSwerveAmount(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3213
		RGBA lSwerveCol;

		Vehicle::IsExtremeSwerving(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::FireKillZone(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2697
		uint64_t luKillZoneId;

		// BrnTrafficDebugComponent.cpp:2699
		DebugComponent * lpComponent;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Set<uint16_t,72u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawActiveHulls(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2460
		uint32_t luNumCellsX;

		// BrnTrafficDebugComponent.cpp:2461
		uint32_t luNumCellsZ;

		// BrnTrafficDebugComponent.cpp:2463
		float32_t lfCellSizeX;

		// BrnTrafficDebugComponent.cpp:2464
		float32_t lfCellSizeZ;

		// BrnTrafficDebugComponent.cpp:2467
		uint32_t luActiveHull;

		// BrnTrafficDebugComponent.cpp:2468
		Vector2 lCellSize;

		// BrnTrafficDebugComponent.cpp:2482
		uint32_t luLine;

		// BrnTrafficDebugComponent.cpp:2483
		Vector2 lLineStart;

		// BrnTrafficDebugComponent.cpp:2484
		Vector2 lLineEnd;

		// BrnTrafficDebugComponent.cpp:2485
		Vector2 lIncX;

		// BrnTrafficDebugComponent.cpp:2495
		Vector2 lIncZ;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2471
		uint32_t luHull;

		// BrnTrafficDebugComponent.cpp:2474
		uint32_t luIndexX;

		// BrnTrafficDebugComponent.cpp:2475
		uint32_t luIndexZ;

		// BrnTrafficDebugComponent.cpp:2477
		Vector2 lTopLeft;

		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::IsCollidable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawCollidableVehicles(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1969
		RGBA[4] lauColours;

		// BrnTrafficDebugComponent.cpp:1974
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:1976
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:1979
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:1989
			const VehicleTypeData * lpVehicleType;

			// BrnTrafficDebugComponent.cpp:1990
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:1992
			Vector3 lInf;

			// BrnTrafficDebugComponent.cpp:1993
			Vector3 lSup;

			// BrnTrafficDebugComponent.cpp:1994
			RGBA luCol;

			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	Vehicle::IsAlive(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::DrawNonCollidableVehicles(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1924
		RGBA[4] lauColours;

		// BrnTrafficDebugComponent.cpp:1929
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:1931
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:1934
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:1944
			const VehicleTypeData * lpVehicleType;

			// BrnTrafficDebugComponent.cpp:1945
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:1947
			Vector3 lInf;

			// BrnTrafficDebugComponent.cpp:1948
			Vector3 lSup;

			// BrnTrafficDebugComponent.cpp:1949
			RGBA luCol;

			ShouldObjectBeCulled(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	Vehicle::IsAlive(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::DrawVehicles(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1870
		RGBA[4] lauColours;

		// BrnTrafficDebugComponent.cpp:1875
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:1877
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:1880
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:1890
			const VehicleTypeData * lpVehicleType;

			// BrnTrafficDebugComponent.cpp:1891
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:1893
			Vector3 lInf;

			// BrnTrafficDebugComponent.cpp:1894
			Vector3 lSup;

			// BrnTrafficDebugComponent.cpp:1895
			RGBA luCol;

			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleAsset::GetVehicleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::UpdateStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength(/* parameters */);
	CgsContainers::Stack<uint16_t,400>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:897
		uint32_t luAssetId;

		// BrnTrafficDebugComponent.cpp:898
		CgsID lVehicleId;

		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
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

void BrnTraffic::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
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

void BrnTraffic::KillZone::GetOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZoneRegion::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetHull(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::KillZoneRegion::GetSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::ShouldSectionBeCulled(const Section *  lpSection, const BrnTraffic::Hull *  lpHull, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:942
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficDebugComponent.cpp:948
		const BrnTraffic::LaneRung * lpRung1;

	}
}

void BrnTraffic::KillZoneRegion::GetStartRung() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZoneRegion::GetEndRung() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZone::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::DebugComponent::DrawKillZone(const KillZone *  lpKillZone, TrafficData::KillZoneId  lId, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2570
		uint32_t luKillZoneRegion;

		// BrnTrafficDebugComponent.cpp:2571
		const KillZoneRegion * lpRegion;

		// BrnTrafficDebugComponent.cpp:2572
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:2573
		const Section * lpSection;

		// BrnTrafficDebugComponent.cpp:2574
		uint32_t luRung;

		// BrnTrafficDebugComponent.cpp:2575
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficDebugComponent.cpp:2576
		const BrnTraffic::LaneRung * lpRung1;

		// BrnTrafficDebugComponent.cpp:2577
		Vector3 lYOffset;

		// BrnTrafficDebugComponent.cpp:2578
		Vector3 lBase0;

		// BrnTrafficDebugComponent.cpp:2579
		Vector3 lBase1;

		// BrnTrafficDebugComponent.cpp:2580
		Vector3 lTop0;

		// BrnTrafficDebugComponent.cpp:2581
		Vector3 lTop1;

		// BrnTrafficDebugComponent.cpp:2582
		Vector3 lCentroid;

		// BrnTrafficDebugComponent.cpp:2583
		bool lbAnySectionsOnScreen;

		// BrnTrafficDebugComponent.cpp:2584
		float32_t lfCentroidDivisor;

		// BrnTrafficDebugComponent.cpp:2585
		char[128] lacBuf;

		// BrnTrafficDebugComponent.cpp:2587
		const RGBA K_KILLZONE_COLOUR;

		// BrnTrafficDebugComponent.cpp:2588
		const RGBA K_KILLZONE_EXTENSION_COLOUR;

		// BrnTrafficDebugComponent.cpp:2589
		const float32_t KF_APPROX_MAX_VEHICLE_LENGTH;

		// BrnTrafficDebugComponent.cpp:2590
		const float32_t KF_EXTENSION_DISTANCE;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	KillZone::GetOffset(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2635
		Vector3 lEdge0;

		// BrnTrafficDebugComponent.cpp:2636
		Vector3 lEdge1;

		// BrnTrafficDebugComponent.cpp:2639
		Vector3 lExt0;

		// BrnTrafficDebugComponent.cpp:2640
		Vector3 lExt1;

		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		TrafficEntityModule::GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		Hull::GetSection(/* parameters */);
		ShouldSectionBeCulled(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		{
			{
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	rw::math::vpu::operator*=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::DrawAllKillZones(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2515
		uint32_t luKillZone;

		// BrnTrafficDebugComponent.cpp:2516
		TrafficData::KillZoneId lId;

		// BrnTrafficDebugComponent.cpp:2517
		const KillZone * lpKillZone;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
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

void BrnTraffic::Param::GetHistoryEntry(uint32_t  luHistoryIndex, uint32_t *  lpOutSegmentIndex, uint32_t *  lpOutHullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.h:766
		uint32_t luIndexToRead;

	}
}

void BrnTraffic::DebugComponent::DrawParamTrails(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1823
		uint32_t luParam;

	}
	{
		// BrnTrafficDebugComponent.cpp:1826
		const BrnTraffic::Param * lpParam;

		{
			// BrnTrafficDebugComponent.cpp:1829
			Vector3 lPos;

			// BrnTrafficDebugComponent.cpp:1836
			uint32_t luEntry;

		}
	}
	TrafficEntityModule::GetDeterministicParamPos(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1839
		uint32_t luHull;

		// BrnTrafficDebugComponent.cpp:1840
		uint32_t luSegment;

		// BrnTrafficDebugComponent.cpp:1844
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1845
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficDebugComponent.cpp:1846
		const BrnTraffic::LaneRung * lpRung1;

		Param::GetHistoryEntry(/* parameters */);
		TrafficEntityModule::GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	}
	{
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
}

void BrnTraffic::LaneRung::GetCentrePos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Lerp(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:244
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:245
			VectorIntrinsicUnion::VectorIntrinsic temp_lerp_v;

		}
	}
}

void BrnTraffic::DebugComponent::DrawSplitters(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1516
		Vector3 lBias;

		// BrnTrafficDebugComponent.cpp:1517
		const BrnTraffic::LaneRung * lpEndRung;

		// BrnTrafficDebugComponent.cpp:1518
		const BrnTraffic::LaneRung * lpPreEndRung;

		// BrnTrafficDebugComponent.cpp:1519
		Vector3 lLastSegmentPos;

		// BrnTrafficDebugComponent.cpp:1520
		const BrnTraffic::Hull * lpNextHull;

		// BrnTrafficDebugComponent.cpp:1521
		const Section * lpNextSection;

		// BrnTrafficDebugComponent.cpp:1522
		Vector3 lNextSegmentPos;

		// BrnTrafficDebugComponent.cpp:1525
		uint32_t luHull;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:1528
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficDebugComponent.cpp:1530
			uint32_t luSection;

		}
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		TrafficEntityModule::GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:1533
			const Section * lpSection;

			ShouldSectionBeCulled(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			TrafficEntityModule::GetHull(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			Hull::GetSection(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			TrafficEntityModule::GetHull(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			Hull::GetSection(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			TrafficEntityModule::GetHull(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			Hull::GetSection(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Hull::GetStopLine(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StopLine::GetParameterAlongSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StopLine::ConvertToFloat(uint16_t  luFixed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Floor(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:24
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::GetStopLinePosition(uint16_t  luHullId, uint8_t  luSectionId, uint8_t  luStopLineId, const Vector3 &  lSide1, const Vector3 &  lSide2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1477
		const StopLine * lpStopLine;

		// BrnTrafficDebugComponent.cpp:1478
		const Section * lpSection;

		// BrnTrafficDebugComponent.cpp:1479
		const BrnTraffic::LaneRung * lpStartRung;

		// BrnTrafficDebugComponent.cpp:1480
		const BrnTraffic::LaneRung * lpEndRung;

		// BrnTrafficDebugComponent.cpp:1481
		float32_t lfParameter;

		// BrnTrafficDebugComponent.cpp:1482
		uint32_t luSegment;

		// BrnTrafficDebugComponent.cpp:1483
		float32_t lfSegmentParameter;

		// BrnTrafficDebugComponent.cpp:1484
		const BrnTraffic::Hull * lpHull;

		TrafficEntityModule::GetHull(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	Hull::GetStopLine(/* parameters */);
	StopLine::ConvertToFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::LightTriggerStartData::GetNumStartPositions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerStartData::GetStartPosition(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerStartData::GetStartDirection(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawStartLines(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1373
		Vector3 lBias;

		// BrnTrafficDebugComponent.cpp:1376
		uint32_t luHull;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1379
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1381
		uint32_t luTrigger;

	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	TrafficEntityModule::GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1384
		const LightTriggerStartData * lpTrigger;

		// BrnTrafficDebugComponent.cpp:1396
		uint32_t luStartPos;

		LightTriggerStartData::GetNumStartPositions(/* parameters */);
		LightTriggerStartData::GetStartPosition(/* parameters */);
		ShouldObjectBeCulled(/* parameters */);
		LightTriggerStartData::GetNumStartPositions(/* parameters */);
		LightTriggerStartData::GetStartPosition(/* parameters */);
		LightTriggerStartData::GetStartPosition(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		LightTriggerStartData::GetStartDirection(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
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

void BrnTraffic::JunctionLogicBox::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::JunctionLogicBox::GetEventJunctionID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawJunctionsInHull(int32_t  luHull, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1269
		uint32_t luJunction;

		// BrnTrafficDebugComponent.cpp:1270
		const BrnTraffic::JunctionLogicBox * lpJunction;

		// BrnTrafficDebugComponent.cpp:1271
		Matrix44Affine lTransform;

		// BrnTrafficDebugComponent.cpp:1272
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1273
		char[1024] lacBuffer;

		// BrnTrafficDebugComponent.cpp:1275
		Vector3 lJunctionHalfSize;

		// BrnTrafficDebugComponent.cpp:1276
		Vector3 lJunctionOffset;

		// BrnTrafficDebugComponent.cpp:1277
		Vector3 lTextOffset;

		// BrnTrafficDebugComponent.cpp:1278
		RGBA KU_LOGIC_BOX_COLOUR;

	}
	TrafficEntityModule::GetHull(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::DrawJunctions(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1245
		uint32_t luHull;

		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
}

void BrnTraffic::LaneRung::GetRightVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:327
		Vector3 lDiff;

	}
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector3  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV3(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:310
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:311
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void rw::math::vpu::Negate(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:20
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:21
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void BrnTraffic::DebugComponent::DrawNeighbours(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1177
		uint32_t luHull;

	}
	{
		// BrnTrafficDebugComponent.cpp:1180
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1182
		uint32_t luSection;

	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	TrafficEntityModule::GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1185
		const Section * lpSection;

		// BrnTrafficDebugComponent.cpp:1193
		uint32_t luSide;

		// BrnTrafficDebugComponent.cpp:1194
		uint32_t luNeighbourCount;

		// BrnTrafficDebugComponent.cpp:1195
		const Neighbour * lpNeighbour;

		// BrnTrafficDebugComponent.cpp:1196
		VecFloat lArrowDir;

		// BrnTrafficDebugComponent.cpp:1197
		Vector3 lBias;

		// BrnTrafficDebugComponent.cpp:1198
		RGBA lColour;

		ShouldSectionBeCulled(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:1202
			uint32_t luNeighbour;

			rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		}
		rw::math::vpu::Negate(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:1205
		const BrnTraffic::LaneRung * lpRung0;

		{
			// BrnTrafficDebugComponent.cpp:1209
			const Section * lpThem;

			// BrnTrafficDebugComponent.cpp:1210
			const BrnTraffic::LaneRung * lpTheirRung0;

			// BrnTrafficDebugComponent.cpp:1212
			Vector3 lOurPoint;

			// BrnTrafficDebugComponent.cpp:1213
			Vector3 lTheirPoint;

			LaneRung::GetRightVector(/* parameters */);
			LaneRung::GetRightVector(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			LaneRung::GetCentrePos(/* parameters */);
			{
			}
			{
				{
				}
			}
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Normalize(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	{
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

void BrnTraffic::DebugComponent::DrawSectionsInHull(int32_t  luHull, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1070
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1071
		Vector3 lStart;

		// BrnTrafficDebugComponent.cpp:1072
		Vector3 lEnd;

		// BrnTrafficDebugComponent.cpp:1073
		Vector3 lBias;

		// BrnTrafficDebugComponent.cpp:1075
		uint32_t luSection;

	}
	TrafficEntityModule::GetHull(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1078
		const Section * lpSection;

		// BrnTrafficDebugComponent.cpp:1086
		uint32_t luRung;

		// BrnTrafficDebugComponent.cpp:1102
		const BrnTraffic::LaneRung * lpStartRung;

		// BrnTrafficDebugComponent.cpp:1103
		const BrnTraffic::LaneRung * lpEndRung;

		ShouldSectionBeCulled(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		// BrnTrafficDebugComponent.cpp:1089
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficDebugComponent.cpp:1090
		const BrnTraffic::LaneRung * lpRung1;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
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

void BrnTraffic::DebugComponent::DrawSections(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1017
		uint32_t luHull;

		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::DrawSegments(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:971
		uint32_t luHull;

		{
			// BrnTrafficDebugComponent.cpp:974
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficDebugComponent.cpp:976
			uint32_t luSection;

		}
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		TrafficEntityModule::GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:979
			const Section * lpSection;

			// BrnTrafficDebugComponent.cpp:986
			uint32_t luRung;

			ShouldSectionBeCulled(/* parameters */);
		}
	}
	{
		// BrnTrafficDebugComponent.cpp:989
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficDebugComponent.cpp:990
		const BrnTraffic::LaneRung * lpRung1;

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

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::IsBitSet(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:395
		int32_t liMaskIndex;

		// CgsFastBitArray.h:396
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:393
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
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

void BrnTraffic::Param::IsDying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTraits::GetAccelerationModifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Clear() {
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityPlayerResetInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::PropToTrafficInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Construct(TrafficLightKnockDownEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::SetEventPointer(TrafficLightKnockDownEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Construct(TrafficLightRestoreEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::SetEventPointer(TrafficLightRestoreEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
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

void BrnResource::GameDataIO::RequestInterface<4096>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetHullRuntime(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2321
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::HullRuntime::IsStoplineRed(uint32_t  luStopline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHullRuntime.h:162
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawStopLinesInHull(int32_t  luHull, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1420
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1421
		const HullRuntime * lpHullRuntime;

		// BrnTrafficDebugComponent.cpp:1422
		uint32_t luStopLine;

		// BrnTrafficDebugComponent.cpp:1423
		Vector3 lLeftPos;

		// BrnTrafficDebugComponent.cpp:1424
		Vector3 lRightPos;

		// BrnTrafficDebugComponent.cpp:1425
		RGBA lColour;

		// BrnTrafficDebugComponent.cpp:1426
		uint32_t luSection;

	}
	TrafficEntityModule::GetHull(/* parameters */);
	TrafficEntityModule::GetHullRuntime(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1433
		const Section * lpSection;

		ShouldObjectBeCulled(/* parameters */);
		HullRuntime::IsStoplineRed(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
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

void BrnTraffic::DebugComponent::DrawStopLines(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1349
		uint32_t luHull;

		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeTrafficVehicleId(const char *  lpcVehicleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAssetIds.h:293
		char[13] lacFullName;

		{
			// BrnAssetIds.h:292
			CgsDev::StrStream lStrStream;

		}
	}
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

void BrnTraffic::TrafficCarStreamer::SetAssetList(uint32_t  luNumAssets, const VehicleAsset *  lpaAssets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:111
		uint32_t luAsset;

		// BrnTrafficCarStreamer.cpp:112
		char[13] lacBuffer;

		// BrnTrafficCarStreamer.cpp:113
		char * lpcLastChar;

	}
	BrnResource::MakeTrafficVehicleId(/* parameters */);
	std(/* parameters */);
	{
		// BrnTrafficCarStreamer.cpp:131
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:132
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:139
		uint32_t luTestAsset;

		{
			// BrnTrafficCarStreamer.cpp:147
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
}

void BrnWorld::InternalBaseStreamer::GetUserId(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator==(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::IsEqual(const ResourceHandle::Resource *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::OnLoadBegin(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:280
		uint64_t luAsset;

		BrnWorld::InternalBaseStreamer::GetUserId(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator==(/* parameters */);
	{
		// BrnTrafficCarStreamer.cpp:284
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:283
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::OnUnloadBegin(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:302
		uint64_t luAsset;

		BrnWorld::InternalBaseStreamer::GetUserId(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator=(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		// BrnTrafficCarStreamer.cpp:307
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:306
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

void BrnResource::GameDataIO::GetTrafficVehicleGraphicsResponse::GetTrafficVehicleGraphicsObjectHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::OnLoadComplete(const GameDataAssetEvent *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:329
		uint64_t luAsset;

		// BrnTrafficCarStreamer.cpp:330
		const GetTrafficVehicleGraphicsResponse * lpResponse;

	}
	BrnWorld::InternalBaseStreamer::GetUserId(/* parameters */);
	{
		// BrnTrafficCarStreamer.cpp:337
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator==(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		// BrnTrafficCarStreamer.cpp:345
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:338
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

void BrnTraffic::TrafficCarStreamer::OnUnloadComplete(const UnloadGameDataResponse *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.cpp:362
		uint64_t luAsset;

		BrnWorld::InternalBaseStreamer::GetUserId(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.cpp:365
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
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

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV3(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:401
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:402
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:402
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void BrnTraffic::Section::CalcDirectionAtParameter(const BrnTraffic::LaneRung *  lpaGlobalRungs, const VecFloat  lfParamAlong, uint32_t  luSegment, const Vector3 &  lOutDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:627
		uint32_t luRungId;

		// BrnTrafficSection.h:629
		Vector3 lRung0Pt;

		// BrnTrafficSection.h:630
		Vector3 lRung1Pt;

	}
	GetNumSegments(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnTrafficSection.h:625
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnTrafficSection.h:632
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

void BrnTraffic::Section::CalcPositionAtParameter(const BrnTraffic::LaneRung *  lpaGlobalRungs, const VecFloat  lfParamAlong, uint32_t  luSegment, const Vector3 &  lOutPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:599
		uint32_t luRungId;

		// BrnTrafficSection.h:601
		Vector3 lRung0Pt;

		// BrnTrafficSection.h:602
		Vector3 lRung1Pt;

		// BrnTrafficSection.h:603
		VecFloat lfSegmentParam;

		{
			// BrnTrafficSection.h:597
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::DebugComponent::DrawSectionCurvesInHull(int32_t  luHull, CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1127
		Vector3 lStart;

		// BrnTrafficDebugComponent.cpp:1128
		Vector3 lEnd;

		// BrnTrafficDebugComponent.cpp:1129
		Vector3 lDir;

		// BrnTrafficDebugComponent.cpp:1131
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1134
		uint32_t luSection;

	}
	TrafficEntityModule::GetHull(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1137
		const Section * lpSection;

		// BrnTrafficDebugComponent.cpp:1144
		float32_t lfParam;

		ShouldSectionBeCulled(/* parameters */);
		Section::GetNumSegments(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Section::CalcPositionAtParameter(/* parameters */);
	Section::GetNumSegments(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	Section::CalcPositionAtParameter(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	Section::GetNumSegments(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
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

void BrnTraffic::DebugComponent::DrawSectionCurves(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1046
		uint32_t luHull;

		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::GetSectionIdWithStopLine(uint8_t  luStopLineId, uint16_t  luHullId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:1312
		uint8_t luSection;

		// BrnTrafficDebugComponent.cpp:1313
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficDebugComponent.cpp:1314
		const Section * lpSection;

		TrafficEntityModule::GetHull(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:1329
		CgsDev::StrStream lStrStream;

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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::GetPhysicalPartsIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<25u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetTrafficPhysicsInfoForVehicle(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2580
		int32_t liPartsIndex;

		// BrnTrafficEntityModule.h:2585
		TrafficPhysicsInfo * lpPhysicsInfo;

	}
	GetVehicle(/* parameters */);
	GetVehicle(/* parameters */);
	Vehicle::GetPhysicalPartsIndex(/* parameters */);
	CgsContainers::BitArray<25u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::GetVehicleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicleTypeRuntime(uint32_t  luVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2642
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:975
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:976
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:978
			VectorIntrinsicUnion::VectorIntrinsic signMask;

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

void rw::math::vpu::operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:975
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:976
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:978
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void BrnTraffic::DebugComponent::DrawStuckDetection(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2131
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2133
		VecFloat lfBoxSize;

		// BrnTrafficDebugComponent.cpp:2135
		uint32_t luVehicle;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2138
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2145
			const TrafficPhysicsInfo * lpPhysicsInfo;

			// BrnTrafficDebugComponent.cpp:2148
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:2154
			Vector3 lVehiclePos;

			// BrnTrafficDebugComponent.cpp:2156
			Vector3 lBoxHalfSize;

			// BrnTrafficDebugComponent.cpp:2157
			Vector3 lContactInf;

			// BrnTrafficDebugComponent.cpp:2158
			Vector3 lContactSup;

			// BrnTrafficDebugComponent.cpp:2159
			Vector3 lOrigPos;

			// BrnTrafficDebugComponent.cpp:2186
			Vector3 lBase;

			// BrnTrafficDebugComponent.cpp:2187
			const rw::math::vpu::Vector2 K_FRONT_OFFSET_POS;

			// BrnTrafficDebugComponent.cpp:2188
			const rw::math::vpu::Vector2 K_BACK_OFFSET_POS;

			// BrnTrafficDebugComponent.cpp:2189
			const float32_t KF_BAR_WIDTH;

			// BrnTrafficDebugComponent.cpp:2190
			const float32_t KF_BAR_HEIGHT;

			// BrnTrafficDebugComponent.cpp:2191
			const RGBA K_BAR_SCALE_COL;

			// BrnTrafficDebugComponent.cpp:2192
			const RGBA K_MARKER_COL;

		}
	}
	Vehicle::IsAlive(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	TrafficEntityModule::GetVehicleTypeRuntime(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::WantsToExtremeSwerve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsRecoveringFromSlam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsBeingChecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsNormalPhysical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawPhysicalVehicleState(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2022
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2024
		VecFloat lfBoxSize;

		// BrnTrafficDebugComponent.cpp:2025
		Vector3 lYStep;

		// BrnTrafficDebugComponent.cpp:2026
		Vector3 lInf;

		// BrnTrafficDebugComponent.cpp:2027
		Vector3 lSup;

		// BrnTrafficDebugComponent.cpp:2029
		uint32_t luVehicle;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2032
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2044
			const TrafficPhysicsInfo * lpPhysicsInfo;

			rw::math::vpu::operator+=(/* parameters */);
		}
	}
	Vehicle::IsAlive(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2047
		char[128] lacBuf;

		rw::math::vpu::operator+=(/* parameters */);
	}
	Vehicle::IsCrashing(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Vehicle::IsSympatheticallyCrashing(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Vehicle::IsExtremeSwerving(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Vehicle::WantsToExtremeSwerve(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Vehicle::IsBeingChecked(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Vehicle::IsNormalPhysical(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

void BrnTraffic::Vehicle::GetCurrentManoeuvrePhase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetManoeuvreTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawVehicleManoeuvres(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2222
		Vector3 lPos;

		// BrnTrafficDebugComponent.cpp:2224
		char[4096] lacBuf;

		// BrnTrafficDebugComponent.cpp:2225
		CgsDev::StrStream lStream;

		// BrnTrafficDebugComponent.cpp:2227
		uint32_t luVehicle;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2230
		const Vehicle * lpVehicle;

	}
	Vehicle::IsAlive(/* parameters */);
	TrafficEntityModule::GetVehicleTransform(/* parameters */);
	ShouldObjectBeCulled(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	Vehicle::GetCurrentManoeuvre(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetTrailerVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2528
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::VehicleTypeRuntime::GetTrailerPivotDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawFrontArticPoints(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2783
		Matrix44Affine lVehicleTransform;

		// BrnTrafficDebugComponent.cpp:2784
		Matrix44Affine lMatrix;

		// BrnTrafficDebugComponent.cpp:2785
		uint32_t luVehicle;

	}
	{
		// BrnTrafficDebugComponent.cpp:2791
		const Vehicle * lpVehicle;

		{
			// BrnTrafficDebugComponent.cpp:2801
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficDebugComponent.cpp:2803
			Vector3 lPos;

			TrafficEntityModule::GetVehicleTransform(/* parameters */);
			ShouldObjectBeCulled(/* parameters */);
		}
	}
	VehicleTypeRuntime::GetTrailerPivotDistance(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator>(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:448
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:450
		bool ret;

		{
			// vec_float_operation_inline.h:449
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::DebugComponent::DrawAvoidance(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2953
		DebugInterface lDebugInterface;

		// BrnTrafficDebugComponent.cpp:2954
		const DebugRender & lDebugRender;

		// BrnTrafficDebugComponent.cpp:2955
		char[5120] laBuffer;

		// BrnTrafficDebugComponent.cpp:2956
		CgsDev::StrStream lString;

		// BrnTrafficDebugComponent.cpp:2959
		uint32_t luCachedIndex;

		// BrnTrafficDebugComponent.cpp:2960
		uint32_t luCachedStructIndex;

		// BrnTrafficDebugComponent.cpp:2961
		uint32_t luCachedCount;

		// BrnTrafficDebugComponent.cpp:2997
		uint32_t luAvoidanceCount;

		// BrnTrafficDebugComponent.cpp:3002
		const VecFloat KF_AVOID_MAX_OVERALL_RISK;

		// BrnTrafficDebugComponent.cpp:3009
		uint32_t luAvoidIndex;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2964
		CollidableVehicleInfo4 * lpInfo;

	}
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::operator[](/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:2967
		Vector3 lPosition;

		// BrnTrafficDebugComponent.cpp:2968
		Vector3 lVelocity;

		// BrnTrafficDebugComponent.cpp:2974
		Vector3 lMaxFloatVec;

		// BrnTrafficDebugComponent.cpp:2983
		Vector3 lHalfWidths;

		// BrnTrafficDebugComponent.cpp:2984
		Matrix44Affine lTransform;

		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
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
		rw::math::vpu::IsSimilar(/* parameters */);
		{
			{
			}
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3012
		DEBUG_VehicleAvoidance * lpAvoidData;

		// BrnTrafficDebugComponent.cpp:3014
		Vector3 lDrawPos;

		// BrnTrafficDebugComponent.cpp:3018
		Vector3 lHalfWidths;

		// BrnTrafficDebugComponent.cpp:3019
		Matrix44Affine lTransform;

		// BrnTrafficDebugComponent.cpp:3033
		Vector3 lTextPos;

		// BrnTrafficDebugComponent.cpp:3034
		char[256] lacBuffer;

		// BrnTrafficDebugComponent.cpp:3041
		int32_t liFeelerIndex;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		{
			// BrnTrafficDebugComponent.cpp:3058
			RGBA lColour;

			// BrnTrafficDebugComponent.cpp:3082
			VecFloat lfFeelerLength;

			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::GetFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void CgsContainers::Array<uint16_t,9u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntimeSafe(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2363
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::Hull::GetSectionSpan(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::GetSectionSpanVehicleCount(uint32_t  luSpanIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::SectionSpan::GetMaxVehicleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawPressure(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3246
		DebugInterface lDebugInterface;

		// BrnTrafficDebugComponent.cpp:3247
		const DebugRender & lDebugRender;

		// BrnTrafficDebugComponent.cpp:3248
		char[5120] laBuffer;

		// BrnTrafficDebugComponent.cpp:3249
		CgsDev::StrStream lString;

		// BrnTrafficDebugComponent.cpp:3257
		uint16_t luPlayerHull;

		// BrnTrafficDebugComponent.cpp:3258
		const BrnTraffic::Hull * lpPlayerHull;

		// BrnTrafficDebugComponent.cpp:3259
		const HullRuntime * lpPlayerHullRuntime;

		// BrnTrafficDebugComponent.cpp:3272
		const int32_t KI_ITEMS_PER_PAGE;

		// BrnTrafficDebugComponent.cpp:3273
		uint32_t luSpanIndex;

		// BrnTrafficDebugComponent.cpp:3274
		float32_t lfXOffset;

		// BrnTrafficDebugComponent.cpp:3275
		float32_t lfYOffset;

		// BrnTrafficDebugComponent.cpp:3276
		int32_t liItems;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,9u>::operator[](/* parameters */);
	TrafficEntityModule::GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	TrafficEntityModule::GetHullRuntimeSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnTrafficDebugComponent.cpp:3291
		const SectionSpan * lpSpan;

		// BrnTrafficDebugComponent.cpp:3292
		uint16_t luSectionCount;

		// BrnTrafficDebugComponent.cpp:3293
		float32_t lfPercentage;

		// BrnTrafficDebugComponent.cpp:3304
		char[512] lchBuffer;

		Hull::GetSectionSpan(/* parameters */);
		HullRuntime::GetSectionSpanVehicleCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::IsPlayingOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawPlayerCarHullId(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3329
		char[256] lacBuffer;

	}
	CgsContainers::Array<uint16_t,9u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Construct(ActivateHullEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(ActivateHullEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear() {
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:1321
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
}

void CgsContainers::BitArray<35u>::UnSetAll() {
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

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<131072,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<131072,16>::Clear() {
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

void CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Construct(InRemoveTriggerEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::SetEventPointer(InRemoveTriggerEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear() {
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

void BrnTraffic::BrnTrafficIO::TrafficAIInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Construct(RivalInTrafficUpdateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::SetEventPointer(RivalInTrafficUpdateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PostScene::Construct() {
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

void BrnWorld::CrashIO::TrafficInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::Construct(AddCrashingTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::SetEventPointer(AddCrashingTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Construct(RemoveSlammedTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::SetEventPointer(RemoveSlammedTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Construct(RemoveCrashedTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::SetEventPointer(RemoveCrashedTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficNetworkInterfaces.h:282
		EActiveRaceCarIndex leRaceCarIndex;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Construct(TrafficTypeResponse *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::SetEventPointer(TrafficTypeResponse *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetHull(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void HashBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ParamData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::DEBUG_GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::DEBUG_GetEffectHistory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::GetParamAlong() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntime(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2342
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::HullRuntime::GetJunctionCurrentStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Select(const MaskScalar  mask, const rw::math::vpu::Vector3  trueValue, const rw::math::vpu::Vector3  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:772
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnMath::IsNormal(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const VecFloat  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:690
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_platform_inline.h:692
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:691
			VectorIntrinsicUnion u;

		}
	}
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

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:458
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:462
		bool ret;

		{
			// vec_float_operation_inline.h:461
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::ReciprocalFast(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:179
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:180
			VectorIntrinsicUnion::VectorIntrinsic estimate;

			// scalar_operation_inline.h:180
			VectorIntrinsicUnion::VectorIntrinsic vOne;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Matrix44Affine &  lMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:761
		float32_t lf00;

		// CgsStrStream.h:762
		float32_t lf01;

		// CgsStrStream.h:763
		float32_t lf02;

		// CgsStrStream.h:764
		float32_t lf03;

		// CgsStrStream.h:765
		float32_t lf10;

		// CgsStrStream.h:766
		float32_t lf11;

		// CgsStrStream.h:767
		float32_t lf12;

		// CgsStrStream.h:768
		float32_t lf13;

		// CgsStrStream.h:769
		float32_t lf20;

		// CgsStrStream.h:770
		float32_t lf21;

		// CgsStrStream.h:771
		float32_t lf22;

		// CgsStrStream.h:772
		float32_t lf23;

		// CgsStrStream.h:773
		float32_t lf30;

		// CgsStrStream.h:774
		float32_t lf31;

		// CgsStrStream.h:775
		float32_t lf32;

		// CgsStrStream.h:776
		float32_t lf33;

	}
}

void BrnTraffic::Vehicle::GetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::UpdateMatrix(const VehicleAxles *  lpAxles, const Matrix44Affine &  lOutMatrix, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const rw::math::vpu::Vector3  lOldUp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.h:1442
		Vector3 lAt;

		// BrnTrafficVehicle.h:1443
		Vector3 lUp;

		// BrnTrafficVehicle.h:1444
		Vector3 lRight;

		// BrnTrafficVehicle.h:1445
		Vector3 lPos;

		// BrnTrafficVehicle.h:1450
		const const rw::math::vpu::Vector3 & lFrontAxlePos;

		// BrnTrafficVehicle.h:1451
		const const rw::math::vpu::Vector3 & lBackAxlePos;

		// BrnTrafficVehicle.h:1457
		Vector3 lFrontAxleDiff;

	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Axle::GetUp(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	Axle::GetUp(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleTypeRuntime::GetForwardAxleOffset(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficVehicle.h:1461
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Matrix44Affine::Set(/* parameters */);
	{
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetSpeed(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
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
		// BrnTrafficVehicle.h:1470
		CgsDev::StrStream lStrStream;

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
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficVehicle.h:1454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::Vehicle::CalcTowBarPos(const rw::math::vpu::Matrix44Affine &  lTransform, const VehicleTypeRuntime *  lpVehicleTypeRuntime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficVehicle.h:1378
	Vector3 lWorldPos;

	{
		// BrnTrafficVehicle.h:1377
		Vector3 lLocalPos;

		// BrnTrafficVehicle.h:1378
		Vector3 lWorldPos;

	}
}

void BrnTraffic::Vehicle::CalcFrontAxlePos(const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lArticulationPoint, const VehicleTypeRuntime *  lpVehicleTypeRuntime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficVehicle.h:1396
	Vector3 lNewFrontAxlePosition;

	{
		// BrnTrafficVehicle.h:1395
		float32_t lfPivotToFrontAxleDist;

		// BrnTrafficVehicle.h:1396
		Vector3 lNewFrontAxlePosition;

	}
}

void BrnTraffic::Vehicle::SetSpeed(const VecFloat  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleBaseAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InterpedParam3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DriftAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EngineAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SuspensionAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BodyRollAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CollisionAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BoostAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TireAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TireGripCurve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::burnoutcarasset(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::SetDefaultLayout(unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::PhysicsVehicleHandlingAsset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetLayoutPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(const const physicsvehiclehandling &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetNumWheels() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(int32_t  liWheel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::IsSimilar(const VecFloat  a, const VecFloat  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetCollisionOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetHalfExtents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleAttribs::VehicleBaseAttribs::GetMass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform() {
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

void BrnPhysics::Deformation::StreamedDeformationSpec::GetGenericLocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorType(uint32_t  luTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(uint32_t  luTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetNumLocatorPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::GraphicsAsset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcargraphicsasset::burnoutcargraphicsasset(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcargraphicsasset::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcargraphicsasset::Num_RandomTrafficColours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcargraphicsasset::RandomTrafficColours(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// burnoutcargraphicsasset.h:159
		const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 * resultptr;

	}
}

void Attrib::Gen::burnoutcargraphicsasset::~burnoutcargraphicsasset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::~burnoutcarasset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::DrawRecentKillZones(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:2541
		uint32_t luRecentKillZone;

		// BrnTrafficDebugComponent.cpp:2542
		TrafficData::KillZoneId lId;

		// BrnTrafficDebugComponent.cpp:2543
		const KillZone * lpKillZone;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,400u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Pvs::GetCellSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,400u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Pvs::GetHullIndexForPoint(const rw::math::vpu::Vector3  lPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficPvs.h:128
		Vector3 lGridSpace;

		// BrnTrafficPvs.h:129
		Vector3 lScaled;

		// BrnTrafficPvs.h:131
		int32_t liIndexX;

		// BrnTrafficPvs.h:132
		int32_t liIndexZ;

		// BrnTrafficPvs.h:140
		uint32_t luIndex;

	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:104
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,400u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint16_t,400u>::Contains(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,400u>::FindFirstInstanceOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<uint16_t,400u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,400u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint16_t,400u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetExtremeSwerveStickiness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::DebugComponent::ReloadBehaviourData(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDebugComponent.cpp:3592
		DebugComponent * lpComponent;

	}
}

void BrnTraffic::GraphicsStubResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficGraphicsStubResourceType.cpp:155
		const GraphicsStub * lpStub;

	}
	{
		// BrnTrafficGraphicsStubResourceType.cpp:175
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::SectionSpan::FixUp(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficDataResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficDataResourceType.cpp:135
		TrafficData * lpData;

	}
}

void BrnTraffic::StopLine::ConvertToFixed(float32_t  lfFloat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetMatrix44Affine_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

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

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

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

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

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

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::burnoutcargraphicsasset::Liveries = -619886396057111195;

Attrib::Hash::burnoutcargraphicsasset::PlayerColourIndex = -6433504252631697867;

Attrib::Hash::burnoutcargraphicsasset::RandomTrafficColours = -6065725164615729054;

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

Attrib::ClassName::burnoutcargraphicsasset = -1081059634811282860;

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

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

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

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

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

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

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

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

BrnTraffic::KF_PARAM_LINK_OFFSET = [63, 0, 0, 0];

BrnTraffic::KF_SECTION_CURVE_PARAM_TESS = [62, 0, 0, 0];

BrnTraffic::KF_DBG_RENDER_CULL_DISTANCE = [67, 200, 0, 0];

BrnTraffic::KF_KILLZONE_RENDER_HEIGHT = [64, 96, 0, 0];

BrnTraffic::KF_ARROWHEAD_PROPORTION = [61, 76, 204, 205];

BrnTraffic::KF_HULLMAP_TOP = [66, 160, 0, 0];

BrnTraffic::KF_HULLMAP_BOTTOM = [67, 122, 0, 0];

BrnTraffic::KF_HULLMAP_LEFT = [66, 160, 0, 0];

BrnTraffic::KF_HULLMAP_RIGHT = [67, 122, 0, 0];

BrnTraffic::KF_DEBUG_TEXT_SIZE = [65, 64, 0, 0];

BrnTraffic::KF_AMBER_TIME = [64, 0, 0, 0];

BrnTraffic::KF_COUNTDOWN_RED_TIME = [64, 64, 0, 0];

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

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

