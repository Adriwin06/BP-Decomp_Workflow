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

struct ICPUShader;

struct cLionEffectDefinition;

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

struct SpliceSample;

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

void operator++(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnWorld::InternalBaseStreamer::OnLoadFail(const GameDataAssetEvent *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::OnAttemptUnload(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnWorld::CrashModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::ExternalSceneQueriesUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_Query *  lpSceneInputBuffer_Query, OutputBuffer *  lpSceneOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::UpdatePhysicsNetworkCatchup(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer *  lpPhysicsModuleOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::EnvironmentManager::SetTimeOfDay_Seconds(float32_t  lfTimeOfDay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::ClearTargetList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:170
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::ClearCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:190
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::FindInTargetList(CgsID  lId, uint64_t  luUserId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:334
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::RemoveEntry(CgsID  lId, uint64_t  luUserId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:145
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::FindInCurrentList(CgsID  lId, uint64_t  luUserId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:404
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::CalculatePotentialLoadList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:214
		int32_t liIndex;

	}
}

void BrnWorld::StreamerTargetEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::StreamerCurrentEntry::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::IsStreamComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:1005
		int32_t liIndex;

		// BrnBaseStreamer.cpp:1006
		int32_t liIndexInCurrent;

	}
}

void BrnWorld::WorldGraphicsStreamer::QueryLoad(const StreamerTargetEntry *  lpPotentialList, int32_t  liPotentialListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::QueryUnload(const StreamerTargetEntry *  lpPotentialList, int32_t  liPotentialListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::OnLoadBegin(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::OnUnloadBegin(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWorldUnitGraphicsResponse::GetWorldUnitGraphicsHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsGraphics::InstanceList>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::OnLoadComplete(const GameDataAssetEvent *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<CgsGraphics::InstanceList>::operator=(/* parameters */);
}

void BrnWorld::InternalBaseStreamer::GetEntryListLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::GetUserId(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::GetIndexFromId(int32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldGraphicsStreamer.cpp:171
		int32_t liCount;

		// BrnWorldGraphicsStreamer.cpp:172
		int32_t liEntryListLength;

		InternalBaseStreamer::GetEntryListLength(/* parameters */);
		InternalBaseStreamer::GetUserId(/* parameters */);
	}
}

void BrnWorld::InternalBaseStreamer::IsEntryReady(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::IsListLoaded(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InternalBaseStreamer::IsEntryReady(/* parameters */);
}

void BrnWorld::EnvironmentSettings::FindKeyframeInds(const uint32_t &  luKeyframe0, const float32_t &  lfWeight0, const uint32_t &  luKeyframe1, const float32_t &  lfWeight1, const float32_t *  lpfKeyframeTimes, uint32_t  luKeyframeCnt, float32_t  lfTimeOfDay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::UnPrimeGun() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::OnRegister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::ClearStoredFile(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPostLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPreUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContent.h:484
		const CgsSound::Playback::Factory & lFactory;

	}
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HandleGameEvents(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldCountdownEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetGlobalRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetActiveRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionZone::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::Construct(BrnWorld::WorldEntityModule *  lpWorldEntityModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPVSDebugComponent.cpp:90
		int32_t liI;

		CollisionZone::Construct(/* parameters */);
	}
}

void BrnWorld::PVSDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Min(int32_t  li0, int32_t  li1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:57
		int64_t li64_0;

		// CgsBranchlessOperations.h:58
		int64_t li64_1;

		// CgsBranchlessOperations.h:59
		int64_t li64Diff;

		// CgsBranchlessOperations.h:60
		int64_t li64Sign;

		// CgsBranchlessOperations.h:61
		int32_t liResult;

	}
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,160u>::Find(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<uint16_t,160u>::Contains(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
		}
	}
}

void CgsContainers::Set<uint16_t,160u>::Contains(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Set<uint16_t,160u>::Find(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::Construct(WorldModule *  lpWorldModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

void BrnWorld::EnvironmentSettings::DebugComponent::DebugToManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::PrimeGun() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:412
		Matrix44Affine lCameraToWorldTransform;

		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::FireGun() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:448
		Matrix44Affine lVehicleTransform;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

void BrnWorld::WorldDebugComponent::Update(const DebugController *  lpDebugControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:165
		EActiveRaceCarIndex lePlayerARCIndex;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1556
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1557
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1558
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
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

void rw::math::vpu::operator*(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1648
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1649
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1650
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1651
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1651
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

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

void BrnWorld::EnvironmentSettings::LightingData::SetToBlend(const const LightingData &  lValueA0, float32_t  lfWeightA0, const const LightingData &  lValueA1, float32_t  lfWeightA1, const const LightingData &  lValueB0, float32_t  lfWeightB0, const const LightingData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void BrnWorld::EnvironmentSettings::ScatteringData::SetToBlend(const const ScatteringData &  lValueA0, float32_t  lfWeightA0, const const ScatteringData &  lValueA1, float32_t  lfWeightA1, const const ScatteringData &  lValueB0, float32_t  lfWeightB0, const const ScatteringData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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

void rw::math::vpu::operator/(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:448
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector2_operation_inline.h:449
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector2_operation_inline.h:451
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
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

void rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
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

void BrnWorld::PVSDebugComponent::RenderPvsCentrePosition(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPVSDebugComponent.cpp:469
		Vector2 lPlayerBoxHalfDims;

		// BrnPVSDebugComponent.cpp:471
		Vector2 lScreenCentre;

		// BrnPVSDebugComponent.cpp:472
		Vector2 lTopLeft;

		// BrnPVSDebugComponent.cpp:473
		Vector2 lBottomRight;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		CgsDev::Debug2DImmediateRender::GetVirtualScreenSize(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
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

void rw::math::vpu::operator< <VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
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

void std::strtod(const char *  _Str, char **  _Endptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldDebugComponent::DrawVehicleGun(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:290
		uint32_t luCount;

		// BrnWorldDebugComponent.cpp:291
		Vector3 lCirclePosition;

		// BrnWorldDebugComponent.cpp:292
		Vector3 lCirclePositionIncremement;

		// BrnWorldDebugComponent.cpp:293
		float32_t lCircleRadius;

		rw::math::vpu::operator/(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

void BrnWorld::WorldDebugComponent::DrawInactiveMessage(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:349
		uint8_t luCount;

		// BrnWorldDebugComponent.cpp:350
		float32_t lfScreenY;

	}
}

void BrnWorld::WorldDebugComponent::DrawActiveMessage(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:381
		uint8_t luCount;

		// BrnWorldDebugComponent.cpp:382
		float32_t lfScreenY;

	}
}

void BrnWorld::WorldDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
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

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::DebugRenderCamera(const const Camera &  lCgsCamera, bool  lbFlipFrustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2309
		Frustum lFrustum;

		Frustum(/* parameters */);
	}
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnWorld::EnvironmentSettings::EnvironmentManager::GetTimeOfDay_Seconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void BrnWorld::WorldDebugComponent::DrawTarget(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:325
		Matrix44Affine lCameraToWorldTransform;

		rw::math::vpu::operator+(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
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

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
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

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
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

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TsmDebugRenderInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BoundingBoxDebugRenderInfo() {
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
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	TsmDebugRenderInfo(/* parameters */);
	BoundingBoxDebugRenderInfo(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void BrnWorld::InternalBaseStreamer::CalculatePotentialUnloadList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:251
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::AttemptUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:613
		int32_t liIndexToUnload;

		{
			// BrnBaseStreamer.cpp:628
			int32_t liEntryIndex;

		}
	}
}

void BrnEffectsFrame::SetBloomData(const const BloomData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetVignetteData(const const VignetteData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetTintData(const const TintData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VignetteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BloomData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VignetteData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnWorld::CollisionZone::GetSpherePosition() {
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

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector2 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:416
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionZone::GetSphereRadius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
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

void BrnWorld::CollisionZone::GetZoneNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void BrnWorld::PVSDebugComponent::RenderCollisionZones(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPVSDebugComponent.cpp:353
		int32_t liI;

		// BrnPVSDebugComponent.cpp:355
		Vector2 lScreenSize;

		// BrnPVSDebugComponent.cpp:356
		Vector2 lScreenCentre;

		// BrnPVSDebugComponent.cpp:357
		Vector2 lPvsCentrePos;

		// BrnPVSDebugComponent.cpp:359
		float32_t lrScale;

		rw::math::vpu::operator*(/* parameters */);
	}
	CgsDev::Debug2DImmediateRender::GetVirtualScreenSize(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::GetX(/* parameters */);
	SetY<VectorAxisZ>(/* parameters */);
	{
		// BrnPVSDebugComponent.cpp:373
		CollisionZone * lpCollisionZone;

		// BrnPVSDebugComponent.cpp:374
		Vector3 lPlayerToSpherePos;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			// BrnPVSDebugComponent.cpp:388
			Vector2 lSpherePos2D;

			// BrnPVSDebugComponent.cpp:389
			float32_t lrSphereRadius2D;

			// BrnPVSDebugComponent.cpp:390
			RGBA lColour;

			SetX<VectorAxisX>(/* parameters */);
			SetY<VectorAxisZ>(/* parameters */);
			CollisionZone::GetSphereRadius(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			{
				// BrnPVSDebugComponent.cpp:434
				char[8] lacTemp;

				// BrnPVSDebugComponent.cpp:437
				float32_t lrTextWidth;

				rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
				{
				}
				rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
				{
				}
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
			}
		}
	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Append(const const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<1024>(/* parameters */);
	Append<1024>(/* parameters */);
	Append<5120>(/* parameters */);
	Append<1280>(/* parameters */);
	Append<1536>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Append(/* parameters */);
	Append<1280>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Append(/* parameters */);
	Append<10000>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Append(/* parameters */);
	Append<1536>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Append(/* parameters */);
	Append<1344>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Append(/* parameters */);
	Append<1280>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Append(/* parameters */);
	Append<512>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Append(/* parameters */);
	Append<1280>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Append(/* parameters */);
}

void CgsResource::ResourcePtr<CgsGraphics::InstanceList>::operator=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::OnUnloadComplete(const UnloadGameDataResponse *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<CgsGraphics::InstanceList>::operator=(/* parameters */);
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

void rw::math::vpu::ACos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::acosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// acosf4.h:23
		float[4] result;

		// acosf4.h:23
		float[4] xabs;

		// acosf4.h:24
		float[4] t1;

		// acosf4.h:25
		float[4] xabs2;

		// acosf4.h:25
		float[4] xabs4;

		// acosf4.h:26
		float[4] hi;

		// acosf4.h:26
		float[4] lo;

		// acosf4.h:27
		float[4] neg;

		// acosf4.h:27
		float[4] pos;

		// acosf4.h:28
		unsigned int[4] select;

	}
}

void std::sqrtf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sqrtf4.h:16
		float[4] zero;

		// sqrtf4.h:17
		float[4] half;

		// sqrtf4.h:18
		float[4] one;

		// sqrtf4.h:19
		float[4] y0;

		// sqrtf4.h:19
		float[4] y0x;

		// sqrtf4.h:19
		float[4] y0xhalf;

		// sqrtf4.h:20
		unsigned int[4] cmp_zero;

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

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void CgsSound::MemBase::operator delete(void *  lpvMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::FreeMemoryResource(MemoryResource  memoryResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:191
		Resource resource;

	}
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::MemBase::operator delete(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::operator delete(void *  lpVoid, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.h:538
		rw::IResourceAllocator * lpAllocator;

		operator delete(/* parameters */);
	}
}

void CgsSound::Playback::Factory::operator delete(void *  lpVoid, const CgsSound::Playback::Environment &  lEnvironment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::Free(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFactory.h:322
		const CgsSound::Playback::Environment & lEnvironment;

		operator delete(/* parameters */);
	}
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

void CgsContainers::Set<uint16_t,160u>::Erase(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:205
		uint32_t luIndex;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
			}
		}
	}
}

void CgsContainers::Set<uint16_t,160u>::Erase(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsContainers::Set<uint16_t,160u>::Find(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void WorldModule::Release(IOBufferStack *  lpOutputBufferStack, UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Release(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Destruct(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.h:458
		uint32_t luKeyframe;

	}
}

void BrnWorld::EnvironmentSettings::ScatteringData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::LightingData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::CloudsData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Playback::Object::Release(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::operator delete(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void BrnDirector::HookNameStringWrapper::operator=(const const HookNameStringWrapper &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::HookNameStringWrapper::Set(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BackgroundEffectRequest & operator=(const const BackgroundEffectRequest &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CameraEffects & operator=(const const CameraEffects &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	BrnDirector::HookNameStringWrapper::Set(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
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

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void BrnWorld::GlobalIrradianceManager::GetIrradianceMatrix(uint8_t  lu8Colour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::GlobalIrradianceManager::GetAverageIrradianceColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::math::vpu::operator*=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Matrix44 &  m, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44 &  m, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:452
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnWorld::EnvironmentSettings::HH_MM_SS(const uint32_t &  luHH, const uint32_t &  luMM, const uint32_t &  luSS, float32_t  lfSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::fabs(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::ManagerToDebug() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HH_MM_SS(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	HH_MM_SS(/* parameters */);
	HH_MM_SS(/* parameters */);
}

void BrnWorld::EnvironmentSettings::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// BrnSkyDebugComponent.cpp:117
		Vector3 lKeyLightDirection;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator><VectorAxisY>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	}
	{
		// BrnSkyDebugComponent.cpp:135
		Vector3 lKeyLightDirection;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
}

void BrnWorld::EnvironmentSettings::DebugComponent::Construct(BrnEnvironmentManager *  lpEnvironmentManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HH_MM_SS(/* parameters */);
}

void CgsGraphics::Camera::SetAspectRatio(float32_t  lAspectRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetFovHorizontal(float32_t  lFovHorizontal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator/(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1714
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1715
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1715
			float floatRecip;

			{
				// vec_float_operation_inline.h:1715
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::ATan(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// atanf4.h:25
		float[4] bias;

		// atanf4.h:26
		float[4] x2;

		// atanf4.h:26
		float[4] x3;

		// atanf4.h:26
		float[4] x4;

		// atanf4.h:26
		float[4] x8;

		// atanf4.h:26
		float[4] x9;

		// atanf4.h:27
		float[4] hi;

		// atanf4.h:27
		float[4] lo;

		// atanf4.h:28
		float[4] result;

		// atanf4.h:29
		float[4] inv_x;

		// atanf4.h:30
		unsigned int[4] sign;

		// atanf4.h:31
		unsigned int[4] select;

		// atanf4.h:32
		float[4] xabs;

		// atanf4.h:33
		float[4] vzero;

	}
}

void std::recipf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// recipf4.h:15
		float[4] y0;

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

void CgsGraphics::Camera::SetFarClipPlane(float32_t  lFarClipPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetNearClipPlane(float32_t  lNearClipPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,160u>::Insert(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			{
			}
		}
	}
}

void CgsContainers::Set<uint16_t,160u>::Insert(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Set<uint16_t,160u>::Contains(/* parameters */);
}

void std::_Unguarded_partition<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		CandidateViewVolumePlane * _Mid;

		// algorithm:1901
		CandidateViewVolumePlane * _Pfirst;

		// algorithm:1902
		CandidateViewVolumePlane * _Plast;

		// algorithm:1913
		CandidateViewVolumePlane * _Gfirst;

		// algorithm:1914
		CandidateViewVolumePlane * _Glast;

	}
}

void std::_Median<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Mid, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Mid, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CandidateViewVolumePlane::operator<(const CandidateViewVolumePlane &  lPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnWorld::CandidateViewVolumePlane*, BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _Left, CandidateViewVolumePlane *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnWorld::CandidateViewVolumePlane>(const CandidateViewVolumePlane &  _Left, const CandidateViewVolumePlane &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		CandidateViewVolumePlane _Tmp;

	}
}

void std::pair<BrnWorld::CandidateViewVolumePlane*,BrnWorld::CandidateViewVolumePlane*>::pair(const CandidateViewVolumePlane *const&  _Val1, const CandidateViewVolumePlane *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnWorld::CandidateViewVolumePlane*, std::ptrdiff_t, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last, ptrdiff_t *, CandidateViewVolumePlane *) {
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

void std::_Adjust_heap<BrnWorld::CandidateViewVolumePlane*, int, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, int  _Hole, int  _Bottom, CandidateViewVolumePlane  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<BrnWorld::CandidateViewVolumePlane*, int, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, int  _Hole, int  _Top, CandidateViewVolumePlane  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnWorld::CandidateViewVolumePlane*, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last, CandidateViewVolumePlane *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnWorld::CandidateViewVolumePlane*, std::ptrdiff_t, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last, CandidateViewVolumePlane *  _Dest, CandidateViewVolumePlane  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		CandidateViewVolumePlane * _Next;

		{
			// algorithm:1854
			CandidateViewVolumePlane * _Next1;

		}
		{
			// algorithm:1859
			CandidateViewVolumePlane * _Dest;

			{
				// algorithm:1860
				CandidateViewVolumePlane * _Dest0;

			}
			{
				// algorithm:1864
				CandidateViewVolumePlane * _Next1;

			}
		}
	}
}

void std::rotate<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Mid, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnWorld::CandidateViewVolumePlane*>(const CandidateViewVolumePlane *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Mid, CandidateViewVolumePlane *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnWorld::CandidateViewVolumePlane*, std::ptrdiff_t, BrnWorld::CandidateViewVolumePlane>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Mid, CandidateViewVolumePlane *  _Last, ptrdiff_t *, CandidateViewVolumePlane *) {
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
			CandidateViewVolumePlane * _Hole;

			// algorithm:858
			CandidateViewVolumePlane * _Next;

			// algorithm:859
			CandidateViewVolumePlane _Holeval;

			// algorithm:860
			CandidateViewVolumePlane * _Next1;

		}
	}
}

void std::_Sort<BrnWorld::CandidateViewVolumePlane*, int>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<BrnWorld::CandidateViewVolumePlane*,BrnWorld::CandidateViewVolumePlane*> _Mid;

			_Unguarded_partition<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
		}
		_Insertion_sort<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
	}
	_Med3<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
	BrnWorld::CandidateViewVolumePlane::operator<(/* parameters */);
	BrnWorld::CandidateViewVolumePlane::operator<(/* parameters */);
	make_heap<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
	{
		BrnWorld::CandidateViewVolumePlane::operator<(/* parameters */);
	}
	{
		{
		}
	}
	{
	}
	BrnWorld::CandidateViewVolumePlane::operator<(/* parameters */);
	sort_heap<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
}

extern void CandidateViewVolumePlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::TransformVector(const rw::math::vpu::Vector3  vec, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:34
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-<VectorAxisW>(const VecFloat  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1402
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1403
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:737
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:738
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
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

void rw::collision::Plane::GetNormal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Two() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnWorld::CandidateViewVolumePlane*>(CandidateViewVolumePlane *  _First, CandidateViewVolumePlane *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Min(uint32_t  lu0, uint32_t  lu1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:81
		int64_t li64_0;

		// CgsBranchlessOperations.h:82
		int64_t li64_1;

		// CgsBranchlessOperations.h:83
		int64_t li64Diff;

		// CgsBranchlessOperations.h:84
		int64_t li64Sign;

		// CgsBranchlessOperations.h:85
		uint32_t luResult;

	}
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGeometric::Frustum::SetPlaneByIndex(uint32_t  luPlaneIndex, const const Plane &  lPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.h:297
		Vector4 lPlaneVec;

		// CgsFrustum.h:299
		uint32_t luComponent;

	}
}

void CgsSound::Playback::Content::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Content::operator delete(/* parameters */);
}

void CgsSound::Playback::Factory::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<601>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::Set<uint16_t,160u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:671
		EActiveRaceCarIndex leActiveRaceCarIndex;

		CgsContainers::FastBitArray<8>::UnSetAll(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Clear(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Clear(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	CgsContainers::Set<uint16_t,160u>::Clear(/* parameters */);
	operator++(/* parameters */);
}

void BrnWorld::CrashModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::SetEventPointer(/* parameters */);
}

void WorldModule::Construct(const const BrnCpuMonitors &  lCpuMonitors) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:187
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	operator++(/* parameters */);
}

void ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:671
		uint8_t lu8NumDirtyConstants;

		// CgsShaderConstants.h:676
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.h:680
		uint32_t luNumQuadWords;

		// CgsShaderConstants.h:685
		Vector4 * lpConstantsInDispatchBin;

	}
}

void ShaderConstantTableElement::GetSizeOfArrayInQw() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::AllocateMemoryFast(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:446
		void * lpResult;

	}
}

void CgsGraphics::DispatchBin::Reserve(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTableElement::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::SetShaderConstantData(uint32_t  luIndex, const rw::math::vpu::Matrix44 &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:428
		Vector4 * lpDest;

		UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	}
}

void ShaderConstantTable::SetShaderConstantData(uint32_t  luIndex, const rw::math::vpu::Vector3  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:370
		Vector4 * lpDest;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						{
							(None)unknown_arg
							(None)unknown_arg
						}
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void ShaderConstantTable::SetShaderConstantData(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	}
	rw::math::vpu::Vector4::operator=(/* parameters */);
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

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
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
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

void CgsModule::IOBuffer::Construct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
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

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::Destruct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::IsBufferLocked(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
}

void RendererIO::RenderSwitches::Construct() {
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

void BrnWorld::CrashIO::RaceCarOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Construct(RaceCarCrashCompleteEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::SetEventPointer(RaceCarCrashCompleteEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::RaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetNearClipPlane() {
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

void CgsGraphics::Camera::GetFarClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Frustum::Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetFrustum(const Frustum &  frustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:155
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:157
		bool ret;

		{
			// vec_float_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:156
			VectorIntrinsicUnion u;

		}
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

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void BrnWorld::_LineIntersection2d(const rw::math::vpu::Vector3  lLineAStart, const rw::math::vpu::Vector3  lLineAVec, const rw::math::vpu::Vector3  lLineBStart, const rw::math::vpu::Vector3  lLineBVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:358
		Vector3 lAStartMinusBStart;

		// BrnShadowMap.cpp:363
		VecFloat lUa;

	}
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a) {
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

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:278
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:279
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector4_operation_inline.h:279
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic zz_ww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic yyplusww;

				}
				{
					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44 &  a, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44 &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic z;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic w;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1696
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1697
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1699
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1699
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1699
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1699
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1699
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1696
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1697
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1699
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1699
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1699
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1699
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1699
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
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

void rw::math::vpu::operator-<VectorAxisW>(VecFloatRef<VectorAxisW> &  a) {
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

void rw::math::vpu::GetMatrix44_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator/<VectorAxisW>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisW> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:598
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:599
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			{
				// vector4_operation_inline.h:599
				VectorIntrinsicUnion::VectorIntrinsic reciprocal;

				{
					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					{
						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic vOne;

					}
				}
			}
		}
	}
}

void CgsGraphics::Camera::GetViewMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::DegToRad(const VecFloat  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:835
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:836
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_platform_inline.h:836
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::Matrix44AffineFromZRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:263
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:263
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:265
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:266
		const VecFloat one;

		// matrix44affine_operation_platform_inline.h:268
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:269
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:270
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:271
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

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:996
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:243
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:244
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic yyplusww;

			}
			{
				// vector4_operation_inline.h:244
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
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

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:497
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic det;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic xAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic yAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic zAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic wAxisResult;

		{
			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic negatePos;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transX;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transY;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transZ;

			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic signMask;

			}
			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp0;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic reciprocal;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					{
						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						{
							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic estimate;

							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic vOne;

						}
					}
				}
			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const const VecFloatRef<VectorAxisZ> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void ShaderConstantTable::SetShaderConstantData(uint32_t  luIndex, const rw::math::vpu::Vector4  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:398
		Vector4 * lpDest;

	}
}

void rw::math::vpu::operator*=(const Matrix44 &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation_platform_inline.h:129
	Matrix44 & r;

	{
		// matrix44_operation_platform_inline.h:129
		Matrix44 r;

		{
			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
	}
}

void ShaderConstantTable::SetShaderConstantArrayData(uint32_t  luIndex, const rw::math::vpu::Matrix44 *  lpMatrices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:528
		Vector4 * lpDest;

		// CgsShaderConstants.h:529
		Matrix44 * lpDestMatrix;

		// CgsShaderConstants.h:531
		uint32_t luCount;

	}
}

void ShaderConstantTableElement::GetNumEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::SetFOV(float32_t  lfFOV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::SetTransform(const rw::math::vpu::Matrix44Affine &  lrTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Camera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetProjectionMatrix(const rw::math::vpu::Matrix44 &  lProj) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::operator std::uint64_t() {
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

void CgsSceneManager::EntityId::Set(uint32_t  luOwner, uint32_t  luEntityIndex, uint32_t  luPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::FindCrashForTrafficVehicle(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:2002
		uint32_t luTrafficCrash;

	}
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashModule::IsOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:284
		TrafficCrash * lpNew;

		{
			// CgsArray.h:282
			CgsDev::StrStream lStrStream;

		}
	}
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

void BrnWorld::CrashModule::AddCrashingTrafficVehicle(VolumeInstanceId  lVictimVolumeID, EntityId  lCauserEntityID, BrnPhysics::Vehicle::eCrashTrafficType  leCrashTrafficType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1534
		bool lbCauserIsRaceCar;

		// BrnCrashModule.cpp:1535
		bool lbCauserIsTraffic;

		// BrnCrashModule.cpp:1536
		int32_t liOwner;

		// BrnCrashModule.cpp:1537
		uint32_t luVehicleIndex;

		// BrnCrashModule.cpp:1638
		bool lbUnconfirmedNetwork;

		// BrnCrashModule.cpp:1647
		float32_t lfDurationForNewCrash;

		// BrnCrashModule.cpp:1668
		TrafficCrash * lpTrafficCrash;

		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
		// BrnCrashModule.cpp:1563
		CgsDev::StrStream lStrStream;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
		// BrnCrashModule.cpp:1660
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Grow(/* parameters */);
	TrafficCrash::Construct(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsContainers::Set<uint16_t,160u>::Insert(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
		// BrnCrashModule.cpp:1620
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1665
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnCrashModule.cpp:1549
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		// BrnCrashModule.cpp:1627
		uint32_t luCauserCrash;

		FindCrashForTrafficVehicle(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCrashModule.cpp:1585
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1540
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnCrashModule.cpp:1599
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1635
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	TrafficCrash::GetOwner(/* parameters */);
	{
		// BrnCrashModule.cpp:1631
		CgsDev::StrStream lStrStream;

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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(TakedownEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(TakedownEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
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

void BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::Construct() {
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

void BrnWorld::CrashIO::NetworkInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:166
		int32_t liRaceCar;

	}
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Construct(CrashingTrafficUpdateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::SetEventPointer(CrashingTrafficUpdateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:186
		int32_t liRaceCar;

	}
}

void BrnWorld::PlayerVehicleControls::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::RequestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::RequestInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::StatusInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayStatusInterface.h:115
		int32_t liIndex;

	}
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(AudioCarDataLoadedEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::SetEventPointer(AudioCarDataLoadedEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Construct(RaceRouteRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::SetEventPointer(RaceRouteRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineScoringOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:174
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetSlammedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::ProcessSlammedTrafficEvents(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:955
		const VehicleManagerOutputInterface * lpVehicleManagerOutputInterface;

		// BrnCrashModule.cpp:956
		const VehicleManagerOutputInterface::TrafficSlammedEventQueue * lpSlammedTrafficEvents;

		// BrnCrashModule.cpp:957
		int32_t liEvent;

	}
	CrashIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetSlammedTrafficEventQueue(/* parameters */);
	{
		// BrnCrashModule.cpp:969
		EntityId lTrafficId;

		// BrnCrashModule.cpp:970
		EntityId lEntityThatSlammedIt;

		// BrnCrashModule.cpp:975
		uint32_t luVehicle;

		// BrnCrashModule.cpp:985
		int32_t liOwner;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetEvent(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetEvent(/* parameters */);
		{
			// BrnCrashModule.cpp:973
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		{
			// BrnCrashModule.cpp:1009
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:976
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:993
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnCrashModule.cpp:998
		uint32_t luCauserCrash;

		FindCrashForTrafficVehicle(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	TrafficCrash::GetOwner(/* parameters */);
	{
		// BrnCrashModule.cpp:1002
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::RingBuffer<int32_t>::Construct(int32_t *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<int32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<2048,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<2048>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<2048,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<2048,16>::Clear() {
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

void BrnResource::GameDataIO::RequestInterface<2048>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::Construct(StreamerTargetEntry *  lpTargetEntryList, StreamerTargetEntry *  lpTargetBuffer, StreamerCurrentEntry *  lpCurrentEntryList, int32_t *  lpiPendingIndexBuffer, int32_t  liStreamListLength, int32_t  liPoolId, bool  lbSlotSystem, BrnResource::EAssetSet  leAssetSet, bool  lbAllowFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::RingBuffer<int32_t>::Construct(/* parameters */);
	CgsContainers::RingBuffer<int32_t>::Clear(/* parameters */);
	CgsModule::EventReceiverQueue<2048,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<2048>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<2048>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void BrnWorld::BaseStreamer<32>::Construct(int32_t  liPoolId, bool  lbSlotSystem, BrnResource::EAssetSet  leAssetSet, bool  lbAllowFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldGraphicsStreamer::Construct(BrnWorld::WorldEntityModule *  lpWorldEntityModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldGraphicsStreamer.cpp:47
		int32_t liIndex;

		BaseStreamer<32>::Construct(/* parameters */);
	}
	CgsResource::ResourcePtr<CgsGraphics::InstanceList>::operator=(/* parameters */);
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:168
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::TrafficInputInterface::GetRemoveSlammedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::HandleRecoveredSlammedTraffic(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1262
		const TrafficInputInterface::RemoveSlammedTrafficEventQueue * lpRecoveredTrafficQueue;

		// BrnCrashModule.cpp:1265
		int32_t liEvent;

	}
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	{
		// BrnCrashModule.cpp:1268
		uint32_t luVehicle;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::TrafficInputInterface::GetAddCrashingTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::HandleNewCrashingTraffic(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1029
		const TrafficInputInterface::AddCrashingTrafficEventQueue * lpCrashingTrafficQueue;

		// BrnCrashModule.cpp:1032
		int32_t liEvent;

	}
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	{
		// BrnCrashModule.cpp:1036
		const const AddCrashingTrafficEvent & lEvent;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::NetworkOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkOutputInterface::Clear() {
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

void BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::OnContactFromNetworkPlayer(EActiveRaceCarIndex  leActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1465
		uint32_t luRaceCarCrash;

		// BrnCrashModule.cpp:1474
		uint32_t luTrafficCrash;

		CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
	}
	RaceCarCrash::ResetNetworkTimeout(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	RaceCarCrash::GetOwner(/* parameters */);
	TrafficCrash::ResetNetworkTimeout(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
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
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
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
}

void BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameDataAllocatorList.h:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameDataAllocatorList.h:151
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::AddEvent(const const InEventSetCullingGroupPair &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[149] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetCullingGroupPair(SetRaceCarCullingGroupEvent::CullingGroup  lGroupA, SetRaceCarCullingGroupEvent::CullingGroup  lGroupB, bool  lbCull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1129
		InEventSetCullingGroupPair lEvent;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneManagerIO_SceneUpdate.h:1133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::AddEvent(const const InEventClearCullingTable &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[147] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:281
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetPlayerVehicleControls(const PlayerVehicleControls *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:558
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeInputToOutput(const UpdateInputBuffer *  lpInputBuffer, UpdateOutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetPlayerVehicleControls(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
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

void CgsModule::VariableEventQueue<13312,16>::GetLength(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void DestroyIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:544
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Update>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::IOHelper(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::IOHelper(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:269
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Update>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// CgsSceneManagerModuleIO.h:463
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

void CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::IOHelper(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CreateIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CreateIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::Clamp(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const rw::math::vpu::Vector3  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:319
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void BrnShaderConstantsFrame::SetViewProjectionMatrix(const rw::math::vpu::Matrix44 &  lViewProjection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCameraTransform(const rw::math::vpu::Matrix44Affine &  lCameraTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetViewPosition(const rw::math::vpu::Vector3  lViewPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetKeyLightDirection(const rw::math::vpu::Vector3  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetKeyLightColour(const rw::math::vpu::Vector3  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetTopColourDrk(const rw::math::vpu::Vector4  lSky_TopColourDrk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetHorColourPow(const rw::math::vpu::Vector4  lSky_HorColourPow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetSunColourPow(const rw::math::vpu::Vector4  lSky_SunColourPow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetHorBleedSclPow(const rw::math::vpu::Vector3  lSky_HorBleedSclPow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudDarkColour0(const rw::math::vpu::Vector4  lDarkColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudLiteColour0(const rw::math::vpu::Vector4  lLiteColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudTextureScaleAndOffsets0(const rw::math::vpu::Vector4  lTextureScaleAndOffsets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudLayerOpacity(const rw::math::vpu::Vector4  lLayerOpacity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudLayerDensity(const rw::math::vpu::Vector4  lLayerDensity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudLayerInvFeather(const rw::math::vpu::Vector4  lLayerInvFeather) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::EnvironmentManager::GetCloudDistanceCurve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetCloudDistanceCurve(float32_t  lfDistanceCurve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetFogScattering(const rw::math::vpu::Vector4  lFogScattering) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetGameTime(float32_t  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetWhiteLevel(const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetUnbiasedKeyLightDirection(const rw::math::vpu::Vector3  lKeyLightDir) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::DispatchOutputBuffer::SetFogColourPlusWhiteLevel(Vector4  lvFogColourPlusWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:467
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetFogScattering(Vector4  lvFogScattering) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:469
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetKeyLightDirection(Vector3  lvKeyLightDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:471
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetKeyLightColour(Vector3  lvKeyLightColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:473
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetQuadricIrradianceA(Matrix44 &  lmQuadricIrradianceA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:463
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetQuadricIrradianceB(Matrix44 &  lmQuadricIrradianceB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:465
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetAverageIrradianceColour(Vector3  lvAverageIrradianceColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:475
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::SetWhiteLevel(float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:477
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::SetupShaderConstantsBeforeRendering(const rw::math::vpu::Matrix44 &  lCameraViewProjection, const rw::math::vpu::Matrix44Affine &  lCameraTransform, const float32_t  lfGameTime, const float32_t  lfSimTime, BrnShaderConstantsFrame *  lpOutputShaderConstants, DispatchOutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2436
		VecFloat lSimTime;

		// BrnWorldModule.cpp:2437
		VecFloat lGameTime;

		// BrnWorldModule.cpp:2438
		Vector4 lTime;

		// BrnWorldModule.cpp:2439
		Vector3 lCameraPosition;

		// BrnWorldModule.cpp:2453
		Vector4 lSky_TopColourDrk;

		// BrnWorldModule.cpp:2454
		Vector4 lSky_HorColourPow;

		// BrnWorldModule.cpp:2455
		Vector4 lSky_SunColourPow;

		// BrnWorldModule.cpp:2456
		Vector3 lSky_HorBleedSclPow;

		// BrnWorldModule.cpp:2457
		Vector4 lScatt_HorColourPow;

		// BrnWorldModule.cpp:2458
		Vector4 lScatt_TopColourDrk;

		// BrnWorldModule.cpp:2459
		Vector4 lScatt_SunColourPow;

		// BrnWorldModule.cpp:2460
		Vector3 lScatt_HorBleedSclPow;

		// BrnWorldModule.cpp:2461
		Vector4 lScatt_Coeffs;

		// BrnWorldModule.cpp:2462
		Vector3 lKeyLightDirection;

		// BrnWorldModule.cpp:2463
		Vector3 lKeyLightColour;

		// BrnWorldModule.cpp:2464
		Vector3 lKeyLightSpecularColour;

		// BrnWorldModule.cpp:2465
		Vector3[2] laCloudLiteColours;

		// BrnWorldModule.cpp:2466
		Vector3[2] laCloudDarkColours;

		// BrnWorldModule.cpp:2467
		Vector4[2] laCloudScaleAndOffsets;

		// BrnWorldModule.cpp:2468
		Vector2 lCloudOpacity;

		// BrnWorldModule.cpp:2469
		Vector2 lCloudNegativeDensity;

		// BrnWorldModule.cpp:2470
		Vector2 lCloudFeathering;

		// BrnWorldModule.cpp:2471
		Matrix44 lIrradianceMatrixR;

		// BrnWorldModule.cpp:2472
		Matrix44 lIrradianceMatrixG;

		// BrnWorldModule.cpp:2473
		Matrix44 lIrradianceMatrixB;

		// BrnWorldModule.cpp:2474
		Vector3 lAverageIrradianceColour;

		// BrnWorldModule.cpp:2475
		Vector3 lUnbiasedKeyLightDirection;

		// BrnWorldModule.cpp:2476
		float32_t lfWhiteLevel;

		// BrnWorldModule.cpp:2505
		Vector3 lKeyLightClampedColour;

		// BrnWorldModule.cpp:2524
		Matrix44 lQuadricIrradianceA;

		// BrnWorldModule.cpp:2525
		Matrix44 lQuadricIrradianceB;

		// BrnWorldModule.cpp:2535
		Vector4 lFogColourPlusWhiteLevel;

		// BrnWorldModule.cpp:2538
		Vector4 lHDRConstants;

		// BrnWorldModule.cpp:2546
		Vector4 lSkyReflectionColour;

		rw::math::vpu::Vector4::SetX(/* parameters */);
	}
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	BrnShaderConstantsFrame::SetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	BrnShaderConstantsFrame::SetCameraTransform(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BrnShaderConstantsFrame::SetViewPosition(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	BrnShaderConstantsFrame::SetKeyLightDirection(/* parameters */);
	BrnShaderConstantsFrame::SetKeyLightColour(/* parameters */);
	BrnShaderConstantsFrame::SetTopColourDrk(/* parameters */);
	BrnShaderConstantsFrame::SetHorColourPow(/* parameters */);
	BrnShaderConstantsFrame::SetSunColourPow(/* parameters */);
	BrnShaderConstantsFrame::SetHorBleedSclPow(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnShaderConstantsFrame::SetCloudDarkColour0(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnShaderConstantsFrame::SetCloudLiteColour0(/* parameters */);
	BrnShaderConstantsFrame::SetCloudTextureScaleAndOffsets0(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	BrnShaderConstantsFrame::SetCloudLayerOpacity(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnShaderConstantsFrame::SetCloudLayerDensity(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	BrnShaderConstantsFrame::SetCloudLayerInvFeather(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	BrnShaderConstantsFrame::SetCloudDistanceCurve(/* parameters */);
	BrnWorld::EnvironmentSettings::EnvironmentManager::GetCloudDistanceCurve(/* parameters */);
	BrnShaderConstantsFrame::SetFogScattering(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BrnShaderConstantsFrame::SetWhiteLevel(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::SetFogColourPlusWhiteLevel(/* parameters */);
	BrnShaderConstantsFrame::SetGameTime(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::SetFogScattering(/* parameters */);
	{
	}
	BrnWorldIO::DispatchOutputBuffer::SetKeyLightDirection(/* parameters */);
	{
	}
	BrnWorldIO::DispatchOutputBuffer::SetKeyLightColour(/* parameters */);
	{
	}
	{
	}
	BrnWorldIO::DispatchOutputBuffer::SetQuadricIrradianceA(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::SetQuadricIrradianceB(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::SetAverageIrradianceColour(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::SetWhiteLevel(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModule::GetActiveRaceCar(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModule.h:1105
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::ActiveRaceCar::GetRenderParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::RenderParams::GetBodyTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnWorld::ActiveRaceCar::RenderParams::SetLOD(CgsGraphics::Model::State  lLOD) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModule::E3HACK_PlayerCarToLOD_0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModule::GetPlayerActiveRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::CalculateVehicleLODs(const rw::math::vpu::Vector3  lCameraPos, const float32_t  lfZoomFactor, const Array<CgsSceneManager::EntityId,32u> &  laRaceCarEntityIDs, const Array<BrnTraffic::VehicleRenderInfo,64u> &  laTrafficRenderInfos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2598
		int32_t liRaceCarCount;

		// BrnWorldModule.cpp:2599
		int32_t liTrafficCount;

		// BrnWorldModule.cpp:2600
		float32_t[32] lafRaceCarDistances;

		// BrnWorldModule.cpp:2601
		float32_t lfRenderingCostEstimate;

		// BrnWorldModule.cpp:2620
		float32_t[5] lafLODDistances;

		// BrnWorldModule.cpp:2621
		float lfAlpha;

		CgsContainers::Array<CgsSceneManager::EntityId,32u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetLength(/* parameters */);
		{
			// BrnWorldModule.cpp:2604
			int32_t liRaceCarIndex;

		}
		{
			// BrnWorldModule.cpp:2614
			int32_t liTrafficIndex;

			rw::math::fpu::Sqrt<float>(/* parameters */);
			CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		{
			// BrnWorldModule.cpp:2634
			uint32_t luIndex;

			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
		}
		{
			// BrnWorldModule.cpp:2647
			int32_t liRaceCarIndex;

		}
		{
			// BrnWorldModule.cpp:2649
			EntityId lEntityID;

			// BrnWorldModule.cpp:2650
			BrnWorld::ActiveRaceCar * lpRaceCar;

			BrnWorld::RaceCarEntityModule::GetActiveRaceCar(/* parameters */);
		}
		BrnWorld::ActiveRaceCar::RenderParams::SetLOD(/* parameters */);
		CgsContainers::Array<CgsSceneManager::EntityId,32u>::operator[](/* parameters */);
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
		{
			// BrnWorldModule.cpp:2655
			int32_t liTrafficIndex;

			CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	{
		// BrnWorldModule.cpp:2606
		EntityId lEntityID;

		// BrnWorldModule.cpp:2607
		BrnWorld::ActiveRaceCar * lpRaceCar;

		// BrnWorldModule.cpp:2608
		const const rw::math::vpu::Vector3 & lVehiclePosition;

		BrnWorld::RaceCarEntityModule::GetActiveRaceCar(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,32u>::operator[](/* parameters */);
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
	{
		// BrnWorldModule.cpp:2662
		int32_t liRaceCarIndex;

	}
	{
		// BrnWorldModule.cpp:2664
		EntityId lEntityID;

		// BrnWorldModule.cpp:2665
		BrnWorld::ActiveRaceCar * lpRaceCar;

		// BrnWorldModule.cpp:2666
		CgsGraphics::Model::State lLOD;

		CgsContainers::Array<CgsSceneManager::EntityId,32u>::operator[](/* parameters */);
	}
	BrnWorld::RaceCarEntityModule::GetActiveRaceCar(/* parameters */);
	{
		// BrnWorldModule.cpp:2669
		uint32_t lLODIndex;

	}
	BrnWorld::ActiveRaceCar::RenderParams::SetLOD(/* parameters */);
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
	BrnWorld::RaceCarEntityModule::E3HACK_PlayerCarToLOD_0(/* parameters */);
	{
		// BrnWorldModule.cpp:2683
		int32_t liTrafficIndex;

		{
			// BrnWorldModule.cpp:2686
			const VehicleRenderInfo & lTrafficRenderInfo;

			// BrnWorldModule.cpp:2687
			float32_t lCameraToCarDistance;

			// BrnWorldModule.cpp:2688
			CgsGraphics::Model::State lLOD;

			CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](/* parameters */);
		}
		rw::math::fpu::Sqrt<float>(/* parameters */);
		{
			// BrnWorldModule.cpp:2691
			uint32_t lLODIndex;

		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
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
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<16384,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
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
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::~IOHelper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void DestroyIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CreateIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::IOHelper(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:265
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

void BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<32768,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::DispatchInputBuffer::GetRenderSwitches() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:889
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

void BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::OutEventCoarseTestResult::GetEntityIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,4500u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,4500u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Append(const const EntityId &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::Append(const const EntityId &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::Append(const const EntityId &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsSceneManager::EntityId,5400u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,5400u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Append(const const EntityId &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::FilterFrustumTestResults(const OutEventCoarseTestResult *  lpFrustumTestResult, const Array<CgsSceneManager::EntityId,4500u> &  laWorldEntityIdsOut, const Array<CgsSceneManager::EntityId,32u> &  laRaceCarEntityIdsOut, const Array<CgsSceneManager::EntityId,650u> &  laTrafficEntityIdsOut, const Array<CgsSceneManager::EntityId,5400u> &  laPropEntityIdsOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:4455
		EntityId * lpaEntities;

		// BrnWorldModule.cpp:4456
		BrnWorld::EEntityTypeID leEntityTypeID;

		// BrnWorldModule.cpp:4457
		int32_t liNumVisibleEntities;

		// BrnWorldModule.cpp:4458
		int32_t liInstanceCount;

		CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Clear(/* parameters */);
	}
	CgsContainers::Array<CgsSceneManager::EntityId,32u>::Clear(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,650u>::Clear(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutEventCoarseTestResult::GetEntityIds(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Clear(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,5400u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Append(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,650u>::Append(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,4500u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Append(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,32u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,32u>::Append(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::VariableEventQueue<13312,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

	}
	{
		// CgsVariableEventQueue.h:310
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::VariableEventQueue<1024,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

	}
	{
		// CgsVariableEventQueue.h:310
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::FindInTargetList(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:287
		int32_t liIndex;

	}
	{
		// BrnBaseStreamer.cpp:297
		int32_t liTestIndex;

	}
	{
		// BrnBaseStreamer.cpp:305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
}

void BrnWorld::InternalBaseStreamer::RemoveEntry(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:120
		int32_t liIndex;

	}
}

void BrnWorld::InternalBaseStreamer::AddEntry(CgsID  lId, bool  lbIsSafe, uint64_t  luUserId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:88
		int32_t liIndex;

	}
	{
		// BrnBaseStreamer.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:100
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::InternalBaseStreamer::FindInCurrentList(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:357
		int32_t liIndex;

	}
	{
		// BrnBaseStreamer.cpp:367
		int32_t liTestIndex;

	}
	{
		// BrnBaseStreamer.cpp:375
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
}

void BrnWorld::InternalBaseStreamer::DebugGetAssetStatus(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:920
		int32_t liIndexInTarget;

		// BrnBaseStreamer.cpp:920
		int32_t liIndexInCurrent;

	}
}

void BrnWorld::InternalBaseStreamer::AttemptLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:561
		int32_t liIndexToLoad;

		// BrnBaseStreamer.cpp:562
		int32_t liFreeSlot;

	}
}

void CgsContainers::RingBuffer<int32_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<int32_t>::Push(const int32_t *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::InternalBaseStreamer::UpdateIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:498
		int32_t liIndexToUnload;

		CgsContainers::RingBuffer<int32_t>::Push(/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:493
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:535
		int32_t liNewPendingIndex;

		CgsContainers::RingBuffer<int32_t>::Push(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<2048,16>::OutputQueueContents() {
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
}

void CgsModule::VariableEventQueue<2048,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<2048,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
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
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<2048>::LoadGameData(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType, bool  lbAllowFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1370
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::GameDataIO::GameDataAssetEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType, bool  lbFailiureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(BaseEventReceiverQueue *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(BrnResource::EAssetSet  leAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(bool  lbFailureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<int32_t>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void BrnResource::GameDataIO::GameDataAssetEvent::GetFailureFlag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<int32_t>::Pop(int32_t *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::UpdateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:784
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:659
		int32_t liPoolToUse;

		BrnResource::GameDataIO::RequestInterface<2048>::LoadGameData(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		{
			// BrnBaseStreamer.cpp:675
			int32_t liIndex;

			CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
			BrnResource::GameDataIO::RequestInterface<2048>::LoadGameData(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::Construct(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::SetEventId(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		}
	}
	{
		// BrnBaseStreamer.cpp:706
		const CgsModule::Event * lpEvent;

		// BrnBaseStreamer.cpp:707
		const GameDataAssetEvent * lpGameDataEvent;

		// BrnBaseStreamer.cpp:708
		int32_t liEventId;

		// BrnBaseStreamer.cpp:709
		int32_t liEventSize;

		BrnResource::GameDataIO::RequestInterface<2048>::Clear(/* parameters */);
		{
			// BrnBaseStreamer.cpp:704
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsContainers::RingBuffer<int32_t>::Pop(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:712
		CgsDev::StrStream lStrStream;

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
		// BrnBaseStreamer.cpp:754
		int32_t liNewPendingEntry;

		{
			// BrnBaseStreamer.cpp:759
			int32_t liPoolToUse;

			BrnResource::GameDataIO::RequestInterface<2048>::LoadGameData(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
			AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
			CgsContainers::RingBuffer<int32_t>::Push(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<2048>::UnloadGameData(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1538
		UnloadGameDataEvent lRequest;

	}
}

void BrnResource::GameDataIO::GameDataEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:390
		int32_t liPrevEntryPosition;

		// CgsEventReceiverQueue.h:394
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpPrevBufferEntry;

		// CgsEventReceiverQueue.h:397
		int32_t liNextEntryPosition;

		{
			// CgsEventReceiverQueue.h:391
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:400
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:401
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:407
			CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

		}
	}
}

void CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:590
		int32_t liRem;

		// CgsEventReceiverQueue.h:591
		int32_t liPaddingBytes;

	}
}

void BrnWorld::InternalBaseStreamer::UpdateUnloading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:807
		int32_t liIndex;

		// BrnBaseStreamer.cpp:808
		bool lbRequestsRemaining;

	}
	CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
	CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
	{
		// BrnBaseStreamer.cpp:820
		int32_t liPoolToUse;

		CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
		CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
		BrnResource::GameDataIO::RequestInterface<2048>::UnloadGameData(/* parameters */);
		BrnResource::GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
	}
	{
		// BrnBaseStreamer.cpp:901
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnBaseStreamer.cpp:860
		const CgsModule::Event * lpEvent;

		// BrnBaseStreamer.cpp:861
		const UnloadGameDataResponse * lpGameDataEvent;

		// BrnBaseStreamer.cpp:862
		int32_t liEventId;

		// BrnBaseStreamer.cpp:863
		int32_t liEventSize;

		BrnResource::GameDataIO::RequestInterface<2048>::Clear(/* parameters */);
		{
			// BrnBaseStreamer.cpp:858
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsContainers::RingBuffer<int32_t>::GetLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnBaseStreamer.cpp:874
			int32_t liEntryIndex;

			BrnResource::GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsContainers::RingBuffer<int32_t>::Clear(/* parameters */);
	}
	CgsContainers::RingBuffer<int32_t>::operator[](/* parameters */);
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
	}
}

void BrnWorld::InternalBaseStreamer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseStreamer.cpp:427
		bool lbUpdateLoopFinished;

		BrnResource::GameDataIO::RequestInterface<2048>::Clear(/* parameters */);
	}
	CgsModule::VariableEventQueue<2048,16>::Clear(/* parameters */);
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
		// BrnBaseStreamer.cpp:472
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:521
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

void BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
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

void CgsModule::VariableEventQueue<4096,16>::GetLength(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:454
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

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcBundleName, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:904
		LoadBundleRequest lRequest;

	}
}

void CgsResource::Events::LoadBundleRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace, bool  lbAllowFailiure, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetAllowFailiure(bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetUseHDCache(bool  lbUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(const const LoadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:962
		AcquireResourceRequest lRequest;

	}
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, const char *  lpcResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIOEvents.h:1646
		ID lId;

	}
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::SetResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::EnvironmentSettings::Dictionary::BuildResourceName(char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentDictionary.h:115
		const char[15] kacResourceName;

	}
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderMultipleShadowMaps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::SetCurrentShadowMap(uint32_t  luCurrentShadowMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void FilteredEntityData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetCgsShadowMapCamera(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderRaceCarsIntoShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderTrafficIntoShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderPropsIntoShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderRaceCarsNearOnly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderTrafficNearOnly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderPropsNearOnly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:276
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:631
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:478
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::InputBuffer_Dispatch::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::ShadowMap::GetRenderWorldIntoShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::SetRenderingShadowMap(bool  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::GenerateShadowMapDispatchLists(const Camera *  lpBrnCamera, const float32_t  lfMainCameraZoomFactor, const DispatchInputBuffer *  lpInput, OutputBuffer *  lpSceneModuleOutputBuffer, const IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists> &  lpWorldEntityInputBuffer, InputBuffer_GenerateDispatchLists *  lpRaceCarInputBuffer, InputBuffer_Dispatch *  lpTrafficInputBuffer_Dispatch, InputBuffer_Dispatch *  lpPropInputBuffer_Dispatch, FilteredEntityData *  lpFilteredEntityData, uint32_t *  lpxRendererFlagsOut, const OutputBuffer::OutSmSceneQueryResultsQueue *  lpFrustumTestResultsQueueIn, const CgsModule::Event *  lpFrustumTestEventIn, int32_t  liFrustumTestEventSize, OutputBuffer_PreDispatch *  lpTrafficRenderInfoBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:4198
		uint32_t luShadowMapIndex;

		// BrnWorldModule.cpp:4202
		uint32_t luNumShadowMapsToRender;

		// BrnWorldModule.cpp:4210
		const CgsModule::Event * lpEvent;

		// BrnWorldModule.cpp:4211
		int32_t liEventId;

		// BrnWorldModule.cpp:4212
		int32_t liEventSize;

	}
	{
		// BrnWorldModule.cpp:4221
		Matrix44 lCameraViewProjection;

		// BrnWorldModule.cpp:4222
		Vector3 lCameraPosition;

		// BrnWorldModule.cpp:4223
		Vector3 lCameraDirection;

		// BrnWorldModule.cpp:4225
		const Camera & lCgsCamera;

		// BrnWorldModule.cpp:4232
		bool lbRenderRaceCars;

		// BrnWorldModule.cpp:4233
		bool lbRenderTraffic;

		// BrnWorldModule.cpp:4234
		bool lbRenderProps;

		// BrnWorldModule.cpp:4235
		bool lbRenderWorld;

		FilteredEntityData::Construct(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		CgsContainers::Array<CgsSceneManager::EntityId,4500u>::Construct(/* parameters */);
		CgsContainers::Array<CgsSceneManager::EntityId,32u>::Construct(/* parameters */);
		BrnWorld::ShadowMap::SetCurrentShadowMap(/* parameters */);
		BrnDirector::Camera::Camera::GetTransform(/* parameters */);
		CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Construct(/* parameters */);
		BrnWorld::ShadowMap::GetCgsShadowMapCamera(/* parameters */);
		CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		{
			// BrnWorldModule.cpp:4256
			const OutEventCoarseTestResult * lpFrustumTestResult;

		}
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
		BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
		BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		{
			// BrnWorldModule.cpp:4333
			uint32_t luModelBackFaceCullList;

			// BrnWorldModule.cpp:4334
			uint32_t luModelFrontFaceCullList;

			// BrnWorldModule.cpp:4335
			uint32_t luMeshBackFaceCullList;

			// BrnWorldModule.cpp:4336
			uint32_t luMeshFrontFaceCullList;

			// BrnWorldModule.cpp:4358
			bool sbCullHack;

			ShaderConstantTable::SetShaderConstantData(/* parameters */);
		}
		BrnWorld::ShadowMap::SetRenderingShadowMap(/* parameters */);
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
		rw::math::vpu::Vector4::operator=(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	BrnWorld::ShadowMap::SetRenderingShadowMap(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
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
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists*(/* parameters */);
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

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
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
}

void CgsModule::LockBuffersForIO(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
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
	{
		(None)unknown_arg
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
}

void CgsModule::LockBuffersForIO(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
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
	{
		(None)unknown_arg
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
	{
		(None)unknown_arg
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
}

void CgsModule::LockBuffersForIO(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
}

void BrnWorldIO::DispatchInputBuffer::GetCameraInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:385
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraState::IsFlagSet(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetDispatchThreadInputBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:411
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::IsWriteBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::SetRendererFlags(uint32_t  lxRendererFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:95
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::SetOcclusionViewProjectionMatrix(const rw::math::vpu::Matrix44 &  lViewProjection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::DispatchInputBuffer::GetGameTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:405
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetSimTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:407
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetShaderConstantsFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:388
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetFogScattering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:468
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetFogColourPlusWhiteLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:466
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetKeyLightColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:472
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetQuadricIrradianceA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:462
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetQuadricIrradianceB() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:464
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchOutputBuffer::GetWhiteLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:476
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetEffectsFrame(uint8_t  lu8Slot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:865
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetLodZoomFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Camera.h:399
		float32_t lfZoomFactor;

	}
}

void BrnDirector::Camera::Camera::GetZoomFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Utils::GetZoomFromFOVDegs(float32_t  lfFOVDegs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Tan(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:624
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:500
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:500
				VectorIntrinsicUnion u;

			}
		}
	}
}

void BrnShaderConstantsFrame::SetEnvMapViewPosition(const rw::math::vpu::Vector3  lViewPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::SetEnvMapFaceRender(uint32_t  luIndex, bool  lbRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::EnvironmentMap::GetCamera(BrnGraphics::EEnvironmentMapFace  leFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::operator=(const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::operator=(const const rw::math::fpu::Vector4Template<double> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::DispatchInputBuffer::GetDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:857
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:279
		CgsDev::StrStream lStrStream;

	}
}

void BrnGraphics::EnvironmentMap::GetCameraPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::SetEnvMapViewProjectionMatrix(BrnGraphics::EEnvironmentMapFace  leEnvMapFace, const rw::math::vpu::Matrix44 &  lViewProjection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderShadowMapView() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void FilteredEntityData::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::GenerateDispatchLists(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const DispatchInputBuffer *  lpInput, DispatchOutputBuffer *  lpOutput, const const BrnUpdateSet &  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2931
		Matrix44 lCameraViewProjection;

		// BrnWorldModule.cpp:2932
		Vector3 lCameraPosition;

		// BrnWorldModule.cpp:2933
		Vector3 lCameraDirection;

		// BrnWorldModule.cpp:2934
		Camera lCgsCamera;

		// BrnWorldModule.cpp:2936
		DispatchThreadInputBuffer * lpDispatchThreadInputBuffer;

		// BrnWorldModule.cpp:2938
		Vector4 lFogScattering;

		// BrnWorldModule.cpp:2939
		Vector4 lFogColourPlusWhiteLevel;

		// BrnWorldModule.cpp:2940
		Vector3 lKeyLightColour;

		// BrnWorldModule.cpp:2941
		Matrix44 lQuadricIrradianceA;

		// BrnWorldModule.cpp:2942
		Matrix44 lQuadricIrradianceB;

		// BrnWorldModule.cpp:2943
		float32_t lfWhiteLevel;

		// BrnWorldModule.cpp:2947
		const Camera * lpBrnCamera;

		// BrnWorldModule.cpp:2972
		uint32_t lxRendererFlags;

		// BrnWorldModule.cpp:2989
		FilteredEntityData * lpFilteredEntityData;

		// BrnWorldModule.cpp:2990
		InputBuffer_Dispatch * lpTrafficInputBuffer_Dispatch;

		// BrnWorldModule.cpp:2991
		InputBuffer_Dispatch * lpPropInputBuffer_Dispatch;

		// BrnWorldModule.cpp:2992
		InputBuffer_GenerateDispatchLists * lpRaceCarInputBuffer;

		// BrnWorldModule.cpp:2993
		InputBuffer_PreDispatch * lpTrafficVisibleEntityBuffer;

		// BrnWorldModule.cpp:2994
		OutputBuffer_PreDispatch * lpTrafficRenderInfoBuffer;

		// BrnWorldModule.cpp:2996
		CgsSceneManager::SceneManagerIO::InputBuffer_Query * lpSceneInputBuffer_Query;

		// BrnWorldModule.cpp:2997
		OutputBuffer * lpSceneModuleOutputBuffer;

		// BrnWorldModule.cpp:2999
		IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists> lpWorldEntityInputBuffer;

		// BrnWorldModule.cpp:3071
		const OutputBuffer::OutSmSceneQueryResultsQueue * lpFrustumTestResultsQueue;

		// BrnWorldModule.cpp:3072
		const CgsModule::Event * lpFrustumResultEvent;

		// BrnWorldModule.cpp:3073
		int32_t liEventId;

		// BrnWorldModule.cpp:3074
		int32_t liFrustumTestEventSize;

		// BrnWorldModule.cpp:3075
		float32_t lfMainCameraZoomFactor;

	}
	BrnWorldIO::DispatchInputBuffer::GetCameraInput(/* parameters */);
	BrnDirector::Camera::CameraState::IsFlagSet(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetDispatchThreadInputBuffer(/* parameters */);
	operator=(/* parameters */);
	BrnGame::DispatchThreadInputBuffer::SetRendererFlags(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::IOHelper(/* parameters */);
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch>(/* parameters */);
	CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_Dispatch>(/* parameters */);
	CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
	CreateIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
	CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists>(/* parameters */);
	CreateIOBuffer<FilteredEntityData>(/* parameters */);
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch>(/* parameters */);
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch>(/* parameters */);
	BrnGame::DispatchThreadInputBuffer::SetOcclusionViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetGameTime(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetSimTime(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetShaderConstantsFrame(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::GetFogScattering(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::GetFogColourPlusWhiteLevel(/* parameters */);
	{
	}
	BrnWorldIO::DispatchOutputBuffer::GetKeyLightColour(/* parameters */);
	{
	}
	BrnWorldIO::DispatchOutputBuffer::GetQuadricIrradianceA(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::GetQuadricIrradianceB(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnWorldIO::DispatchOutputBuffer::GetWhiteLevel(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetEffectsFrame(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetEffectsFrame(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetEffectsFrame(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetEffectsFrame(/* parameters */);
	BrnDirector::Camera::Camera::GetLodZoomFactor(/* parameters */);
	rw::math::fpu::Tan(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	{
		// BrnWorldModule.cpp:3106
		const OutputBuffer * lpConstSceneOutputBuffer;

		CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
		CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:3126
		const OutEventCoarseTestResult * lpFrustumTestResult;

		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
		BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
		BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
		BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_Dispatch::GetSceneResultQueue(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:3215
		Vector3 lScaledKeyLightColour;

		// BrnWorldModule.cpp:3216
		Vector3 lScaledKeyLightColourClamped;

		// BrnWorldModule.cpp:3217
		Matrix44 lScaledQuadricIrradianceA;

		// BrnWorldModule.cpp:3218
		Matrix44 lScaledQuadricIrradianceB;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	{
		// BrnWorldModule.cpp:3275
		Vector3 lKeyLightColourClamped;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch>(/* parameters */);
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch>(/* parameters */);
	DestroyIOBuffer<FilteredEntityData>(/* parameters */);
	DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists>(/* parameters */);
	DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
	DestroyIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
	DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_Dispatch>(/* parameters */);
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch>(/* parameters */);
	BrnGame::DispatchThreadInputBuffer::SetRendererFlags(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::~IOHelper(/* parameters */);
	{
	}
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
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
		// BrnWorldModule.cpp:3346
		uint32_t luFace;

		// BrnWorldModule.cpp:3347
		BrnShaderConstantsFrame * lpShaderContantsFrame;

		BrnWorldIO::DispatchInputBuffer::GetShaderConstantsFrame(/* parameters */);
		BrnShaderConstantsFrame::SetEnvMapViewPosition(/* parameters */);
		{
			// BrnWorldModule.cpp:3366
			Matrix44Affine lViewMatrix;

			// BrnWorldModule.cpp:3367
			Camera lCgsCameraEnvFace;

			// BrnWorldModule.cpp:3382
			const OutEventCoarseTestResult * lpFrustumTestResult;

			// BrnWorldModule.cpp:3404
			CgsGraphics::DispatchFrame * lpWorldModuleDispatchFrame;

			BrnGame::DispatchThreadInputBuffer::SetEnvMapFaceRender(/* parameters */);
			FilteredEntityData::Construct(/* parameters */);
			CgsContainers::Array<CgsSceneManager::EntityId,650u>::Construct(/* parameters */);
			CgsContainers::Array<CgsSceneManager::EntityId,5400u>::Construct(/* parameters */);
			BrnGraphics::EnvironmentMap::GetCamera(/* parameters */);
			operator=(/* parameters */);
			rw::math::vpu::Matrix44::operator=(/* parameters */);
			rw::math::fpu::Matrix44Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
			BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
			CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
			BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::GetSceneResultQueue(/* parameters */);
			BrnWorldIO::DispatchInputBuffer::GetDispatchFrame(/* parameters */);
			CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator->(/* parameters */);
			BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(/* parameters */);
			rw::math::vpu::Matrix44::Matrix44(/* parameters */);
			rw::math::vpu::Matrix44::Matrix44(/* parameters */);
			CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists*(/* parameters */);
			rw::math::vpu::Matrix44::Matrix44(/* parameters */);
			CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
			BrnShaderConstantsFrame::SetEnvMapViewProjectionMatrix(/* parameters */);
			rw::math::vpu::Matrix44::Matrix44(/* parameters */);
			rw::math::vpu::Matrix44::operator=(/* parameters */);
		}
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists>::operator BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists*(/* parameters */);
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

void BrnWorld::EnvironmentSettings::EnvironmentManager::CalcKeyLightDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.h:497
		Vector3 lOutputKeyLightDirection;

	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:522
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(SceneQueryId  lQueryId, InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const const Frustum &  lFrustum, const const rw::math::vpu::Matrix44 &  lViewProjection, uint32_t  lxQueryFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_CoarseQuery.h:231
		InEventFrustumTestVp lEvent;

	}
}

extern void InEventFrustumTestVp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetFrustum(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::GenerateFrustumQueries(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const DispatchInputBuffer *  lpInput, DispatchOutputBuffer *  lpOutput, const const BrnUpdateSet &  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2727
		CgsSceneManager::SceneManagerIO::InputBuffer_Query * lpSceneInputBuffer_Query;

		// BrnWorldModule.cpp:2728
		OutputBuffer * lpSceneModuleOutputBuffer;

		// BrnWorldModule.cpp:2730
		Camera lCgsCamera;

		// BrnWorldModule.cpp:2759
		const Camera * lpBrnCamera;

		CreateIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
		CreateIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
		BrnWorldIO::DispatchInputBuffer::GetCameraInput(/* parameters */);
		BrnWorld::EnvironmentSettings::EnvironmentManager::CalcKeyLightDirection(/* parameters */);
		{
			// BrnWorldModule.cpp:2781
			Frustum lFrustum;

			// BrnWorldModule.cpp:2782
			Frustum lCgsFrustum;

			rw::collision::Frustum::Frustum(/* parameters */);
			Frustum(/* parameters */);
			{
				// BrnWorldModule.cpp:2798
				uint32_t luFrustumTestFlags;

			}
			CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
			CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(/* parameters */);
			BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
		}
		DestroyIOBuffer<CgsSceneManager::SceneManagerIO::InputBuffer_Query>(/* parameters */);
		DestroyIOBuffer<CgsSceneManager::SceneManagerIO::OutputBuffer>(/* parameters */);
	}
	BrnWorldIO::DispatchInputBuffer::GetRenderSwitches(/* parameters */);
	{
		// BrnWorldModule.cpp:2861
		uint32_t luI;

		{
			// BrnWorldModule.cpp:2863
			const Camera & lCgsCamera;

			CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
			BrnWorld::ShadowMap::GetCgsShadowMapCamera(/* parameters */);
			BrnWorld::ShadowMap::GetFrustum(/* parameters */);
			{
			}
			CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
			CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnWorldModule.cpp:2820
		uint32_t luFace;

		// BrnWorldModule.cpp:2821
		Frustum[6] laFaceFrusta;

		rw::collision::Frustum::Frustum(/* parameters */);
		BrnGraphics::EnvironmentMap::GetCamera(/* parameters */);
		{
			// BrnWorldModule.cpp:2837
			Camera lEnvMapCgsCamera;

			// BrnWorldModule.cpp:2843
			Camera lFixedCamera;

			BrnGraphics::EnvironmentMap::GetCamera(/* parameters */);
			operator=(/* parameters */);
			rw::math::vpu::Matrix44::operator=(/* parameters */);
			rw::math::fpu::Matrix44Template<double>::operator=(/* parameters */);
			rw::math::vpu::Matrix44::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
			CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
			CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(/* parameters */);
		}
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2, const IOBuffer *  lpOutputBuffer3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IOBuffer::LockForRead(/* parameters */);
	IOBuffer::LockForRead(/* parameters */);
	IOBuffer::LockForRead(/* parameters */);
	IOBuffer::LockForRead(/* parameters */);
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:73
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:76
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::operator BrnWorld::WorldEntityIO::OutputBuffer_Prepare*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::operator CgsSceneManager::SceneManagerIO::InputBuffer_Update*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:75
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::operator CgsSceneManager::SceneManagerIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::PrepareWorldCollision(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:893
		IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare> lpWorldModuleOutputBuffer;

		// BrnWorldModule.cpp:894
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update> lpSceneInputBuffer_Update;

		// BrnWorldModule.cpp:895
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneOutputBuffer;

		// BrnWorldModule.cpp:897
		bool lbResult;

		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::IOHelper(/* parameters */);
	}
	CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::~IOHelper(/* parameters */);
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

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTimeOfDay_Seconds(float32_t  lfTimeOfDay_Seconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::EntityModulePreSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer_PreScene *  lpTriggerModuleInputBuffer_PreScene, OutputBuffer_PreScene *  lpTriggerModuleOutputBuffer_PreScene, InputBuffer_PreScene *  lpTrafficInputBuffer_PreScene, OutputBuffer_PreScene *  lpTrafficOutputBuffer_PreScene, InputBuffer_PostScene *  lpTrafficInputBuffer_PostScene, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, InputBuffer_PreScene *  lpRaceCarInputBuffer_PreScene, OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene, InputBuffer_PreScene *  lpPropInputBuffer_PreScene, OutputBuffer_PreScene *  lpPropOutputBuffer_PreScene, InputBuffer_PreScene *  lpWorldInputBuffer_PreScene, OutputBuffer_PreScene *  lpWorldOutputBuffer_PreScene, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTimeOfDay_Seconds(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::EntityModulePrePhysicsUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PrePhysics *  lpTriggerModuleInputBuffer_PrePhysics, OutputBuffer_PrePhysics *  lpTriggerModuleOutputBuffer_PrePhysics, OutputBuffer *  lpSceneContactsFromWorld, InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, OutputBuffer_PrePhysics *  lpTrafficOutputBuffer_PrePhysics, const OutputBuffer_PostScene *  lpTrafficOutputBuffer_PostScene, InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, OutputBuffer_PrePhysics *  lpRaceCarOutputBuffer_PrePhysics, InputBuffer_PrePhysics *  lpPropInputBuffer_PrePhysics, OutputBuffer_PrePhysics *  lpPropOutputBuffer_PrePhysics, InputBuffer_PrePhysics *  lpWorldInputBuffer_PrePhysics, OutputBuffer_PrePhysics *  lpWorldOutputBuffer_PrePhysics, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
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

void CgsModule::VariableEventQueue<13312,16>::OutputQueueContents() {
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

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:356
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Append<13312, 16>(const const VariableEventQueue<13312,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<13312,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetWorldEntityRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:308
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::operator BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::operator BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::operator BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:246
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:249
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetWorldEntityStatusInterface(const StatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:592
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:608
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:412
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Append<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<32768,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::UpdateForBootUpVideo(BrnUpdateSet  lUpdateSet, IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const UpdateInputBuffer *  lpInput, UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:1181
		IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics> lpWorldEntityOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1183
		IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics> lpTrafficInputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1184
		IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics> lpTrafficOutputBuffer_PostPhysics;

	}
	CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::operator->(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Append<13312, 16>(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetWorldEntityRequestInterface(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::operator->(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetResourceRequestInterface(/* parameters */);
	Append<4096>(/* parameters */);
	CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::operator->(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetStatusInterface(/* parameters */);
	{
	}
	BrnWorldIO::UpdateOutputBuffer::SetWorldEntityStatusInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue(/* parameters */);
	CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::operator->(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue(/* parameters */);
	AppendGuiQueue<32768, 16>(/* parameters */);
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
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:171
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRaceCarCrashEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::IsBitSet(const int32_t  liIndex) {
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

void BrnWorld::CrashModule::FindCrashForRaceCar(EActiveRaceCarIndex  leRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1979
		uint32_t luRaceCarCrash;

	}
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:284
		RaceCarCrash * lpNew;

		{
			// CgsArray.h:282
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<8>::SetBit(const int32_t  liIndex) {
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

void BrnWorld::CrashModule::ProcessCrashedRaceCarEvents(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:871
		const VehicleManagerOutputInterface * lpVehicleManagerOutputInterface;

		// BrnCrashModule.cpp:872
		const VehicleOutputInterface * lpVehicleInterface;

		// BrnCrashModule.cpp:873
		const VehicleManagerOutputInterface::RaceCarCrashEventQueue * lpRaceCarCrashEvents;

		// BrnCrashModule.cpp:874
		int32_t liRaceCarCrashEvent;

		// BrnCrashModule.cpp:875
		float32_t lfSecondsBeforeCleanup;

	}
	CrashIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetVehicleOutputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRaceCarCrashEventQueue(/* parameters */);
	{
		// BrnCrashModule.cpp:891
		const const RaceCarCrashEvent & lEvent;

		// BrnCrashModule.cpp:892
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnCrashModule.cpp:937
			RaceCarCrash * lpCrash;

		}
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex(/* parameters */);
		CgsContainers::FastBitArray<8>::IsBitSet(/* parameters */);
	}
	FindCrashForRaceCar(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Grow(/* parameters */);
	CgsContainers::FastBitArray<8>::SetBit(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::AddEvent(const const NetworkTrafficCrashingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[136] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern UpdateNetworkTrafficEvent & operator=(const const UpdateNetworkTrafficEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::AddEvent(const const UpdateNetworkTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[136] __PRETTY_FUNCTION__;

	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::NetworkInputInterface::IsRaceCarMarkedForUpdate(int32_t  liRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CrashingTrafficUpdateEvent & operator=(const const CrashingTrafficUpdateEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::AddEvent(const const CrashingTrafficUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[135] __PRETTY_FUNCTION__;

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
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::SetBit(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Grow(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:75
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:84
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsCarInShowtime(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::InputBuffer_PreScene::GetPlayerPressingBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::TickCrashes(const InputBuffer_PreScene *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1690
		float32_t lfSimTimerTimeStep;

		// BrnCrashModule.cpp:1693
		uint32_t luRaceCarCrash;

		// BrnCrashModule.cpp:1694
		bool lbTimeExtensionsAllowed;

		// BrnCrashModule.cpp:1722
		uint32_t luTrafficCrash;

	}
	CrashIO::InputBuffer_PreScene::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1698
		bool lbIsPlayerCrash;

		// BrnCrashModule.cpp:1702
		uint16_t luCarIndex;

	}
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	RaceCarCrash::GetOwner(/* parameters */);
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsCarInShowtime(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	TrafficCrash::Tick(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
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
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::AddEvent(const const CleanupTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[128] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnCrashModuleIO.h:131
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

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FrozenTrafficTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::WillTrafficVehicleBeRecycledNextFrame(uint16_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.h:469
		int32_t liEvent;

		{
			// BrnCrashModule.h:474
			const const TrafficRemovedEvent & lRecycledEvent;

		}
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetNetworkOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:208
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::NetworkOutputInterface::AddOwnedTrafficUpdate(uint32_t  luVehicleIndex, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:311
		CrashingTrafficUpdateEvent lEvent;

	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
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

extern void CrashingTrafficUpdateEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::GenerateOwnedTrafficUpdates(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1367
		Matrix44Affine[601] laTrafficTransforms;

		// BrnCrashModule.cpp:1368
		FastBitArray<601> lInitialisedTransforms;

		// BrnCrashModule.cpp:1369
		Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u> laNewFrozenTraffic;

		// BrnCrashModule.cpp:1374
		const InputBuffer_PostPhysics::VehicleOutputInterface * lpVehicleOutputInterface;

		// BrnCrashModule.cpp:1375
		int32_t liEvent;

		// BrnCrashModule.cpp:1420
		NetworkOutputInterface * lpNetworkInterface;

		// BrnCrashModule.cpp:1424
		uint32_t luTrafficCrash;

	}
	CgsContainers::Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u>::Array(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetVehicleOutputInterface(/* parameters */);
	{
		// BrnCrashModule.cpp:1403
		uint32_t luVehicle;

		{
			// BrnCrashModule.cpp:1407
			bool lbTrafficWillBeRecycled;

			WillTrafficVehicleBeRecycledNextFrame(/* parameters */);
			{
				// BrnCrashModule.cpp:1409
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	CrashIO::OutputBuffer_PostPhysics::GetNetworkOutputInterface(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1427
		const TrafficCrash * lpTrafficCrash;

		{
			// BrnCrashModule.cpp:1431
			uint32_t luVehicle;

			CrashIO::NetworkOutputInterface::AddOwnedTrafficUpdate(/* parameters */);
		}
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	TrafficCrash::GetVehicleIndex(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1378
		const PhysicalTrafficState * lpEvent;

		// BrnCrashModule.cpp:1382
		uint32_t luVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(/* parameters */);
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
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	{
		// BrnCrashModule.cpp:1433
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::UnSetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:451
		int32_t liMaskIndex;

		// CgsFastBitArray.h:452
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:449
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnWorld::CrashModule::OnTrafficCarRemovedFromCrash(uint32_t  luVehicle, EActiveRaceCarIndex  leOwnerActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	CgsContainers::Set<uint16_t,160u>::Contains(/* parameters */);
	CgsContainers::Set<uint16_t,160u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1954
		EActiveRaceCarIndex leActiveRaceCar;

		CgsContainers::Set<uint16_t,160u>::Contains(/* parameters */);
		CgsContainers::Set<uint16_t,160u>::Erase(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	operator++(/* parameters */);
}

void BrnWorld::CrashIO::TrafficInputInterface::GetRemoveCrashedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::EraseFast(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::GetPhysicalBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::HandleCleanedUpTrafficEvents(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1294
		const TrafficInputInterface::RemoveCrashedTrafficEventQueue * lpCleanedUpTrafficQueue;

		// BrnCrashModule.cpp:1297
		int32_t liEvent;

		// BrnCrashModule.cpp:1326
		const FastBitArray<601> * lpPhysicalBits;

		// BrnCrashModule.cpp:1328
		uint32_t luTrafficCrash;

	}
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	{
		// BrnCrashModule.cpp:1300
		uint32_t luVehicle;

		// BrnCrashModule.cpp:1305
		uint32_t luTrafficCrash;

		// BrnCrashModule.cpp:1319
		EActiveRaceCarIndex leOwner;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetEvent(/* parameters */);
		FindCrashForTrafficVehicle(/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		TrafficCrash::GetOwner(/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::EraseFast(/* parameters */);
	}
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	CrashIO::TrafficInputInterface::GetPhysicalBits(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1331
		uint32_t luVehicle;

		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		TrafficCrash::GetVehicleIndex(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		{
			// BrnCrashModule.cpp:1336
			EActiveRaceCarIndex leOwner;

			CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
			CgsContainers::Array<BrnWorld::TrafficCrash,160u>::EraseFast(/* parameters */);
			TrafficCrash::GetOwner(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::ClearUpRecycledTraffic(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1886
		int32_t liEvent;

	}
	{
		// BrnCrashModule.cpp:1891
		uint32_t luTrafficCrash;

		// BrnCrashModule.cpp:1892
		uint32_t luVehicle;

		// BrnCrashModule.cpp:1893
		EntityId lRemovedVehicleEntityId;

		// BrnCrashModule.cpp:1896
		const const TrafficRemovedEvent & lTrafficRemovedEvent;

		// BrnCrashModule.cpp:1918
		EActiveRaceCarIndex leOwner;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetEvent(/* parameters */);
		FindCrashForTrafficVehicle(/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		TrafficCrash::GetOwner(/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::EraseFast(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashModule::FindCrashForTrafficVehicle(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::GetNetworkInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:78
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::NetworkInputInterface::GetCrashingTrafficUpdateQueue(int32_t  liRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashingTrafficUpdateEvent(const const CrashingTrafficUpdateEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::MakeTrafficVolumeInstanceId(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficConstants.h:165
	VolumeInstanceId lVolumeInstanceId;

	{
		// BrnTrafficConstants.h:165
		VolumeInstanceId lVolumeInstanceId;

	}
}

void CgsSceneManager::VolumeInstanceId::SetEntityIDOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:221
		EntityId lEntityId;

	}
}

void CgsSceneManager::EntityId::SetOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::SetEntityId(EntityId  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:201
		uint64_t lu64Id;

	}
}

void CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(uint32_t  luEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:229
		EntityId lEntityId;

	}
}

void CgsSceneManager::EntityId::SetEntityIndex(uint32_t  luEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:134
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::UpdateNetworkTraffic(VolumeInstanceId  lVolumeInstanceID, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:607
		UpdateNetworkTrafficEvent lEvent;

	}
}

extern void UpdateNetworkTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,160u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,160u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,160u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficOutputInterface::StartNetworkTrafficVehicleCrashing(uint32_t  luVehicleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleTrafficIOInterfaces.h:367
		NetworkTrafficCrashingEvent lEvent;

	}
}

void BrnWorld::CrashModule::HandleNetworkCrashingTraffic(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1060
		int32_t liEvent;

		// BrnCrashModule.cpp:1061
		const NetworkInputInterface::CrashingTrafficUpdateQueue * lpCrashingTrafficQueue;

		// BrnCrashModule.cpp:1063
		Set<uint16_t,160u> lCrashingTrafficForPlayer;

		// BrnCrashModule.cpp:1064
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnCrashModule.cpp:1140
		Set<uint16_t,160u> lNewCrashingTraffic;

		// BrnCrashModule.cpp:1141
		Set<uint16_t,160u> lClearedUpTraffic;

		// BrnCrashModule.cpp:1173
		uint32_t luVehicleIndex;

		CrashIO::InputBuffer_PreScene::GetNetworkInputInterface(/* parameters */);
		CgsContainers::Set<uint16_t,160u>::Clear(/* parameters */);
		CrashIO::InputBuffer_PreScene::GetNetworkInputInterface(/* parameters */);
		CrashIO::NetworkInputInterface::GetCrashingTrafficUpdateQueue(/* parameters */);
		{
			// BrnCrashModule.cpp:1083
			CrashingTrafficUpdateEvent lEvent;

			// BrnCrashModule.cpp:1084
			uint16_t luVehicle;

			// BrnCrashModule.cpp:1085
			bool lbContentious;

			CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetEvent(/* parameters */);
			CrashingTrafficUpdateEvent(/* parameters */);
			{
				// BrnCrashModule.cpp:1096
				uint32_t luTrafficCrash;

				{
					// BrnCrashModule.cpp:1101
					TrafficCrash * lpTrafficCrash;

				}
			}
		}
		SetDifference<160u, 160u>(/* parameters */);
		CgsContainers::Set<uint16_t,160u>::GetLength(/* parameters */);
		{
		}
		CgsContainers::Set<uint16_t,160u>::operator[](/* parameters */);
		SetDifference<160u, 160u>(/* parameters */);
		CgsContainers::Set<uint16_t,160u>::GetLength(/* parameters */);
		{
		}
		CgsContainers::Set<uint16_t,160u>::operator[](/* parameters */);
		{
			// BrnCrashModule.cpp:1176
			uint32_t luVehicle;

			{
				// BrnCrashModule.cpp:1181
				uint32_t luTrafficCrash;

				// BrnCrashModule.cpp:1184
				TrafficCrash * lpTrafficCrash;

				CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
				TrafficCrash::ConfirmNetworkOwner(/* parameters */);
			}
		}
		CgsContainers::Set<uint16_t,160u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,160u>::operator[](/* parameters */);
		{
			// BrnCrashModule.cpp:1202
			TrafficCrash * lpTrafficCrash;

			TrafficCrash::Construct(/* parameters */);
			TrafficCrash::ConfirmNetworkOwner(/* parameters */);
			CrashIO::TrafficOutputInterface::StartNetworkTrafficVehicleCrashing(/* parameters */);
		}
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		{
			// BrnCrashModule.cpp:1130
			VolumeInstanceId lVolumeInstanceId;

			BrnTraffic::MakeTrafficVolumeInstanceId(/* parameters */);
			CrashIO::OutputBuffer_PreScene::GetVehicleInputInterface(/* parameters */);
			BrnPhysics::Vehicle::VehicleInputInterface::UpdateNetworkTraffic(/* parameters */);
			{
			}
		}
	}
	CgsContainers::Set<uint16_t,160u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1223
		uint32_t luVehicle;

		// BrnCrashModule.cpp:1225
		uint32_t luTrafficCrash;

		// BrnCrashModule.cpp:1228
		TrafficCrash * lpTrafficCrash;

		TrafficCrash::SetNetworkVehicleClearedUp(/* parameters */);
	}
	CgsContainers::Set<uint16_t,160u>::operator[](/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1239
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCrashModule.cpp:1238
		CgsDev::StrStream lStrStream;

	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<4920,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnWorld::CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::AddEvent(const const RaceCarCrashCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[134] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::RaceCarOutputInterface::AddRaceCarCompletedCrash(VolumeInstanceId  lRaceCarVolumeId, bool  lbNetworkCarCrashTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleRaceCarIOInterfaces.h:150
		RaceCarCrashCompleteEvent lEvent;

	}
}

extern void RaceCarCrashCompleteEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::UnSetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:451
		int32_t liMaskIndex;

		// CgsFastBitArray.h:452
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:449
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::EraseFast(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::ResetRaceCarFromCrashIndex(OutputBuffer_PreScene *  lpOutput, uint32_t  luCrashIndex, bool  lbNetworkCarCrashTimeOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:2086
		RaceCarCrash * lpCrash;

	}
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	CrashIO::OutputBuffer_PreScene::GetRaceCarOutputInterface(/* parameters */);
	CrashIO::RaceCarOutputInterface::AddRaceCarCompletedCrash(/* parameters */);
	{
	}
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::AddEvent(/* parameters */);
	RaceCarCrash::GetOwner(/* parameters */);
	CgsContainers::FastBitArray<8>::UnSetBit(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::EraseFast(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:81
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnWorld::CrashModule::ResetCrashedNetworkRaceCars(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:2026
		int32_t liId;

		// BrnCrashModule.cpp:2027
		int32_t liSize;

		// BrnCrashModule.cpp:2028
		const CgsModule::Event * lpEvent;

		// BrnCrashModule.cpp:2029
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpDriverQueue;

		// BrnCrashModule.cpp:2030
		const RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

	}
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	CrashIO::InputBuffer_PreScene::GetVehicleDriverInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
	{
		// BrnCrashModule.cpp:2047
		const BrnNetworkDriverControls * lpNetworkDriver;

		CgsContainers::FastBitArray<8>::IsBitSet(/* parameters */);
		{
			// BrnCrashModule.cpp:2058
			EActiveRaceCarIndex leActiveRaceCar;

			// BrnCrashModule.cpp:2059
			uint32_t luRaceCarCrash;

			FindCrashForRaceCar(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(EActiveRaceCarIndex  leActiveRaceCarIndex) {
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarNetwork(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficOutputInterface::AddTrafficToCleanup(VolumeInstanceId  lVolumeInstanceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleTrafficIOInterfaces.h:347
		CleanupTrafficEvent lEvent;

	}
}

extern void CleanupTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::ClearupCrashes(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1838
		uint32_t luTrafficCrash;

	}
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnCrashModule.cpp:1789
		Vector3 lPlayerPosition;

		// BrnCrashModule.cpp:1790
		Vector3 lPlayerDirection;

		// BrnCrashModule.cpp:1796
		uint32_t luRaceCarCrash;

		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
		{
			// BrnCrashModule.cpp:1799
			RaceCarCrash * lpCrash;

			CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
		}
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1841
		TrafficCrash * lpTrafficCrash;

		// BrnCrashModule.cpp:1848
		uint32_t luVehicle;

		// BrnCrashModule.cpp:1863
		EActiveRaceCarIndex leOwner;

		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		TrafficCrash::IsAllowedToBeClearedUp(/* parameters */);
		TrafficCrash::GetVehicleIndex(/* parameters */);
		TrafficCrash::IsAllowedToBeClearedUp(/* parameters */);
		CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface(/* parameters */);
		TrafficCrash::GetOwner(/* parameters */);
		BrnTraffic::MakeTrafficVolumeInstanceId(/* parameters */);
		CrashIO::TrafficOutputInterface::AddTrafficToCleanup(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::EraseFast(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	TrafficCrash::MarkVehicleAsOnscreen(/* parameters */);
	{
		// BrnCrashModule.cpp:1827
		bool lbIsNetworkTimeout;

		RaceCarCrash::GetOwner(/* parameters */);
		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(/* parameters */);
		RaceCarCrash::GetOwner(/* parameters */);
		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarNetwork(/* parameters */);
	}
	{
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:1810
		Vector3 lJoiningVector;

		// BrnCrashModule.cpp:1811
		VecFloat lvfDistanceSq;

		RaceCarCrash::GetOwner(/* parameters */);
		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnWorld::CrashModule::ForceClearupAllCrashes(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1751
		uint32_t luTrafficCrash;

	}
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
	{
		// BrnCrashModule.cpp:1754
		uint32_t luVehicle;

		// BrnCrashModule.cpp:1755
		EActiveRaceCarIndex leOwner;

		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
		TrafficCrash::GetVehicleIndex(/* parameters */);
		CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface(/* parameters */);
		TrafficCrash::GetOwner(/* parameters */);
		BrnTraffic::MakeTrafficVolumeInstanceId(/* parameters */);
		CrashIO::TrafficOutputInterface::AddTrafficToCleanup(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Clear(/* parameters */);
}

void BrnWorld::CrashModule::OnNetworkPlayerDisconnected(EActiveRaceCarIndex  leActiveRaceCar, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:1501
		uint32_t luRaceCarCrash;

		// BrnCrashModule.cpp:1511
		uint32_t luTrafficCrash;

		CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
	RaceCarCrash::GetOwner(/* parameters */);
	TrafficCrash::OnOwnerDisconnected(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::operator[](/* parameters */);
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

void BrnWorld::CrashIO::InputBuffer_PreScene::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:87
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsFirstPrepareForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsMovingBetweenOnlineLobbyModes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::GetActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::HandleGameActions(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:695
		const InputBuffer_PreScene::GameActionQueue * lpGameActionQueue;

		// BrnCrashModule.cpp:696
		int32_t liActionSize;

		// BrnCrashModule.cpp:697
		const CgsModule::Event * lpAction;

		// BrnCrashModule.cpp:700
		int32_t liActionType;

	}
	CrashIO::InputBuffer_PreScene::GetGameActionQueue(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	{
		// BrnCrashModule.cpp:707
		const PrepareForModeAction * lpPFMAction;

		{
			// BrnCrashModule.cpp:711
			const GameModeParams * lpGameModeParams;

			BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
			BrnGameState::GameModeParams::GetGameModeType(/* parameters */);
			BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
			BrnGameState::GameStateModuleIO::PrepareForModeAction::IsMovingBetweenOnlineLobbyModes(/* parameters */);
		}
	}
	{
		// BrnCrashModule.cpp:811
		const RemotePlayerDisconnectedAction * lpPlayerDisconnectedAction;

	}
	{
		// BrnCrashModule.cpp:794
		const ResetRaceCarCrashingAction * lpResetCrashAction;

		// BrnCrashModule.cpp:797
		uint32_t luCrash;

		FindCrashForRaceCar(/* parameters */);
	}
	{
		// BrnCrashModule.cpp:764
		const StopModeAction * lpStopModeAction;

	}
	{
		// BrnCrashModule.cpp:823
		const RoadRagePlayerDamageAction * lpRoadRageDamageAction;

		{
			// BrnCrashModule.cpp:829
			uint32_t luRaceCarCrash;

			RaceCarCrash::SetSecondsBeforeCleanup(/* parameters */);
			CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::GetLength(/* parameters */);
			CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::operator[](/* parameters */);
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
		// BrnCrashModule.cpp:841
		const SetTakedownCameraAction * lpTakedownCameraAction;

	}
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

void CgsModule::VariableEventQueue<1536,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::BrnDirectorVehicleInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Construct(NewVehicleEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::SetEventPointer(NewVehicleEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Clear() {
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

void BrnAI::AIModuleIO::AICarOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICarOutputInterface.h:111
		int32_t liAICarIndex;

	}
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Construct(RouteResponse *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::SetEventPointer(RouteResponse *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnEffects::EffectsEnvironmentInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::StatusInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::StatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Construct(SoundWorldLoadEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::SetEventPointer(SoundWorldLoadEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::RequestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRequestInterface.h:75
		int32_t liIndex;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Construct(PropVFXLocatorEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::SetEventPointer(PropVFXLocatorEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Construct(PropBecamePhysicalEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::SetEventPointer(PropBecamePhysicalEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Clear() {
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

void CgsGui::GuiEventQueueBase<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnWorld::WorldDebugComponent::UnPrimeGunCallback(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:477
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::PrimeGunCallback(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:493
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::FireGunCallback(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:509
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::TriggerCollWorldValidate(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:525
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::TriggerCollWorldInvalidate(void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:541
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldDebugComponent::AIDrivesPlayerChanged(void *  lpValue, void *  lpThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldDebugComponent.cpp:559
		WorldDebugComponent * lpWorldDebugComponent;

		// BrnWorldDebugComponent.cpp:560
		EActiveRaceCarIndex lePlayerARCIndex;

	}
	{
		// BrnWorldDebugComponent.cpp:562
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourcePtr<CgsSceneManager::ZoneList>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::ZoneList::GetTotalZones() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::ZoneList::GetZones() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::Zone::GetNumPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::Zone::GetPoint(int16_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Zone.h:374
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::Min(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:301
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsSceneManager::Zone::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSIO::GetZoneResponse::GetZoneId(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PVSIO::GetZoneResponse::GetZoneCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeTrackUnitId(int32_t  liUnitIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAssetIds.h:364
		CgsID lTrackUnitID;

		// BrnAssetIds.h:367
		CgsID lBaseID;

		// BrnAssetIds.h:368
		CgsID lNewID;

		// BrnAssetIds.h:369
		uint32_t luUnitIndex;

		{
			// BrnAssetIds.h:379
			int32_t liBottom;

		}
		{
			// BrnAssetIds.h:384
			int32_t liBottom;

			// BrnAssetIds.h:385
			int32_t liMid;

		}
		{
			// BrnAssetIds.h:390
			int32_t liBottom;

			// BrnAssetIds.h:391
			int32_t liMid;

			// BrnAssetIds.h:392
			int32_t liTop;

		}
	}
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:934
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:936
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:938
		bool ret;

		{
			// vec_float_operation_inline.h:937
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:934
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:936
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:938
		bool ret;

		{
			// vec_float_operation_inline.h:937
			VectorIntrinsicUnion u;

		}
	}
}

void BrnWorld::PVSDebugComponent::RenderPVS(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPVSDebugComponent.cpp:133
		Vector2 lScreenSize;

		// BrnPVSDebugComponent.cpp:134
		char[256] lacBuffer;

		// BrnPVSDebugComponent.cpp:138
		const BrnWorld::PVSModule * lpPVSModule;

		// BrnPVSDebugComponent.cpp:140
		uint32_t luNumZones;

		// BrnPVSDebugComponent.cpp:141
		const CgsSceneManager::Zone * lpZones;

		// BrnPVSDebugComponent.cpp:143
		uint32_t luIndex;

		// BrnPVSDebugComponent.cpp:144
		int16_t liPointIndex;

		// BrnPVSDebugComponent.cpp:146
		Vector2 lPvsCentrePos;

		// BrnPVSDebugComponent.cpp:151
		Vector2 lScreenCentre;

		// BrnPVSDebugComponent.cpp:155
		Vector2[32] laPointsToRender;

		// BrnPVSDebugComponent.cpp:157
		float32_t lrScale;

		// BrnPVSDebugComponent.cpp:159
		int32_t liPVSZoneIndex;

	}
	CgsDev::Debug2DImmediateRender::GetVirtualScreenSize(/* parameters */);
	CgsResource::ResourcePtr<CgsSceneManager::ZoneList>::operator->(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::GetX(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisZ>(/* parameters */);
	CgsSceneManager::ZoneList::GetZones(/* parameters */);
	CgsSceneManager::ZoneList::GetTotalZones(/* parameters */);
	{
		// BrnPVSDebugComponent.cpp:168
		int32_t liViewingPVSZone;

		// BrnPVSDebugComponent.cpp:170
		Vector2 lMin;

		// BrnPVSDebugComponent.cpp:175
		Vector2 lCentrePos;

		// BrnPVSDebugComponent.cpp:196
		RGBA lColour;

		// BrnPVSDebugComponent.cpp:198
		BrnWorld::InternalBaseStreamer::EAssetStatus leStatus;

		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		CgsSceneManager::Zone::GetNumPoints(/* parameters */);
		BrnResource::MakeTrackUnitId(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator<=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator<=<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		CgsSceneManager::Zone::GetPoint(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		PVSIO::GetZoneResponse::GetZoneId(/* parameters */);
		CgsSceneManager::Zone::GetId(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PVSDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSkyDebugComponent.cpp:180
		const BrnWorld::EnvironmentSettings::Dictionary::SeasonData * lpSeasonData;

		// BrnSkyDebugComponent.cpp:204
		char[1024] lacBuffer;

		// BrnSkyDebugComponent.cpp:205
		char[32] lacTOD;

		{
			// BrnSkyDebugComponent.cpp:183
			const Dictionary * lpDictionary;

			CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
			{
				// BrnSkyDebugComponent.cpp:193
				int liSeasonIdx;

			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Selectable::SetHighlighted(bool  lbHighlighted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	{
		// BrnSelectable.h:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

void CgsSound::Playback::Registry::~Registry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::RwacCommandQueue::~RwacCommandQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2, const IOBuffer *  lpOutputBuffer3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IOBuffer::UnlockForRead(/* parameters */);
	IOBuffer::UnlockForRead(/* parameters */);
	IOBuffer::UnlockForRead(/* parameters */);
	IOBuffer::UnlockForRead(/* parameters */);
	IOBuffer::UnlockForWrite(/* parameters */);
}

void BrnWorldIO::UpdateOutputBuffer::GetAttribSysVaultRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:525
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(BaseEventReceiverQueue *  lpEventReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liUserEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSharedIO.h:301
		RegisterVaultRequest lRegisterVaultRequest;

		{
			// CgsAttribSysSharedIO.h:303
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void RegisterVaultRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsSourceEntryValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(BaseEventReceiverQueue *  lpUserReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::LoadAttribSysVault(UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2134
		const CgsModule::Event * lpEvent;

		// BrnWorldModule.cpp:2135
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		BrnWorldIO::UpdateOutputBuffer::GetAttribSysVaultRequestInterface(/* parameters */);
		CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(/* parameters */);
		CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(/* parameters */);
		AddEvent<CgsAttribSys::AttribSysIO::RegisterVaultRequest>(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
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

void WorldModule::LoadDistrictMap(UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		// BrnWorldModule.cpp:2237
		const CgsModule::Event * lpEvent;

		// BrnWorldModule.cpp:2238
		const AcquireResourceResponse * lpAcquireResourceEvent;

		// BrnWorldModule.cpp:2239
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::UnlockBuffersForIO(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void CgsModule::UnlockBuffersForIO(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void CgsModule::UnlockBuffersForIO(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene::SetTrafficToRaceCarInterface_PreScene(const InputBuffer_PostScene::TrafficToRaceCarInterface_PreScene *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:347
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::operator CgsSceneManager::SceneManagerIO::InputBuffer_Query*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::EntityModulePostSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer_PrePhysics *  lpTriggerInputBuffer_PrePhysics, const InputBuffer_PostScene *  lpTriggerInputBuffer_PostScene, InputBuffer_PostScene *  lpTrafficInputBuffer_PostScene, const TrafficToRaceCarInterface_PreScene *  lpTrafficToRaceCarInterface_PreScene, OutputBuffer_PostScene *  lpTrafficOutputBuffer_PostScene, InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, InputBuffer_PostScene *  lpRaceCarInputBuffer_PostScene, OutputBuffer_PostScene *  lpRaceCarOutputBuffer_PostScene, InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, OutputBuffer_PreScene *  lpCrashOutputBuffer_PreScene, InputBuffer_PostScene *  lpPropInputBuffer_PostScene, OutputBuffer_PostScene *  lpPropOutputBuffer_PostScene, InputBuffer_PostScene *  lpWorldInputBuffer_PostScene, OutputBuffer_PostScene *  lpWorldOutputBuffer_PostScene, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene::SetTrafficToRaceCarInterface_PreScene(/* parameters */);
	{
		// BrnWorldModule.cpp:3682
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query> lpSceneInputBuffer_Query;

		// BrnWorldModule.cpp:3683
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneModuleOutputBuffer;

		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::~IOHelper(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:3731
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query> lpSceneInputBuffer_Query;

		// BrnWorldModule.cpp:3732
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneModuleOutputBuffer;

		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::LockBuffersForIO(/* parameters */);
		CgsModule::UnlockBuffersForIO(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::~IOHelper(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:3799
		IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene> lpTriggerOutputBuffer_PostScene;

		// BrnWorldModule.cpp:3810
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query> lpSceneInputBuffer_Query;

		// BrnWorldModule.cpp:3811
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneModuleOutputBuffer;

		CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::~IOHelper(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<1024,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LooseOctreeConstructParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SpatialPartitionConstructParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetLinearAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:132
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:133
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:134
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::ClearCullingTable(bool  lbCullAll) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1148
		InEventClearCullingTable lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1150
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnPhysics::PhysicsModule::ReadSurfaceProperties(const Attribute::Key  lSurfaceListKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::Prepare(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, UpdateOutputBuffer *  lpOutput, const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:579
		OutputBuffer_Prepare * lpRaceCarOutputBuffer;

		CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare>(/* parameters */);
		DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare>(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:603
		OutputBuffer_Prepare * lpTrafficOutputBuffer_Prepare;

		CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare>(/* parameters */);
		DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare>(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:660
		IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare> lpWorldModuleOutputBuffer;

		// BrnWorldModule.cpp:661
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update> lpSceneInputBuffer_Update;

		// BrnWorldModule.cpp:662
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneOutputBuffer;

		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
		BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare>::~IOHelper(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:699
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		// BrnWorldModule.cpp:703
		OutputBuffer_Prepare * lpPropOutputBuffer_Prepare;

		CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_Prepare>(/* parameters */);
		CgsModule::LockBuffersForIO(/* parameters */);
		CgsModule::UnlockBuffersForIO(/* parameters */);
		{
			// BrnWorldModule.cpp:733
			IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update> lpSceneInputBuffer;

			// BrnWorldModule.cpp:734
			IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneOutputBuffer;

			CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::IOHelper(/* parameters */);
		}
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update>::~IOHelper(/* parameters */);
		{
			// BrnWorldModule.cpp:753
			InputBuffer * lpPhysicsInputBuffer;

			CreateIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(/* parameters */);
			DestroyIOBuffer<BrnPhysics::PhysicsModuleIO::InputBuffer>(/* parameters */);
		}
		DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_Prepare>(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:790
		OutputBuffer * lpAIOutputBuffer;

		CreateIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(/* parameters */);
		DestroyIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:851
		EActiveRaceCarIndex leActiveRaceCarIndex;

		operator++(/* parameters */);
	}
	CgsModule::EventReceiverQueue<1024,16>::Prepare(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnWorldModule.cpp:396
		LooseOctreeConstructParams lParams;

		// BrnWorldModule.cpp:409
		rw::LinearResourceAllocator * lpSceneAllocator;

		// BrnWorldModule.cpp:414
		rw::LinearResourceAllocator * lpPhysicsAllocator;

		// BrnWorldModule.cpp:419
		LinearMalloc * lpTriangleCollisionAllocator;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BrnResource::GameDataIO::AllocatorList::GetLinearAllocator(/* parameters */);
		{
			// BrnWorldModule.cpp:429
			InputBuffer_Update * lpSceneInputBuffer_Update;

			// BrnWorldModule.cpp:430
			OutputBuffer * lpSceneOutputBuffer;

			CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::ClearCullingTable(/* parameters */);
		}
	}
	BrnPhysics::PhysicsModule::ReadSurfaceProperties(/* parameters */);
	{
		// BrnWorldModule.cpp:520
		InputBuffer_Update * lpSceneInputBuffer_Update;

		// BrnWorldModule.cpp:521
		OutputBuffer * lpSceneOutputBuffer;

		// BrnWorldModule.cpp:522
		bool lbPhysicsFinished;

	}
	CgsModule::UnlockBuffersForIO(/* parameters */);
	DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_Prepare>(/* parameters */);
	DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare>(/* parameters */);
	{
	}
	{
		// BrnWorldModule.cpp:610
		InputBuffer_Update * lpSceneInputBuffer_Update;

		// BrnWorldModule.cpp:611
		OutputBuffer * lpSceneOutputBuffer;

	}
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare>(/* parameters */);
	DestroyIOBuffer<BrnAI::AIModuleIO::OutputBuffer>(/* parameters */);
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

void CgsModule::UnlockBuffersForIO(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void WorldModule::HandleGameActions(InputBuffer *  lpPhysicsModuleInputBuffer, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, InputBuffer_PreScene *  lpRaceCarInputBuffer_PreScene, InputBuffer_PostPhysics *  lpWorldEntityInputBuffer_PostPhysics, const UpdateInputBuffer *  lpWorldModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:4072
		const InputBuffer::GameActionQueue * lpInQueue;

		// BrnWorldModule.cpp:4076
		const CgsModule::Event * lpAction;

		// BrnWorldModule.cpp:4077
		int32_t liActionSize;

		// BrnWorldModule.cpp:4078
		int32_t liActionType;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
		{
			// BrnWorldModule.cpp:4103
			const PrepareForModeAction * lpPFMAction;

			{
				// BrnWorldModule.cpp:4107
				EActiveRaceCarIndex leActiveRaceCarIndex;

				// BrnWorldModule.cpp:4108
				BrnWorld::CarControl leCarControl;

			}
		}
		{
			// BrnWorldModule.cpp:4135
			EActiveRaceCarIndex leActiveRaceCarIndex;

			operator++(/* parameters */);
		}
		CgsModule::LockBuffersForIO(/* parameters */);
		CgsModule::UnlockBuffersForIO(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:4088
		const SetPlayerCarDriverAction * lpSPCDAction;

	}
	BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::operator=(const const ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::UnloadBundle(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcBundleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:919
		UnloadBundleRequest lRequest;

	}
}

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::UnloadBundle(const const UnloadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::GetEffectsEnvironmentInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:589
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnEffects::EffectsEnvironmentInterface::SetWindVelocity(Vector2  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashModule::PreSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:542
		bool lbSimPaused;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	CrashIO::InputBuffer_PreScene::GetActiveRaceCarInterface(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRemovedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::operator=(const const EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::GetRenderingBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::GetFarFromCameraBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:211
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashModule::PostPhysicsUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:602
		bool lbSimPaused;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::operator=(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	CrashIO::InputBuffer_PostPhysics::GetTrafficInputInterface(/* parameters */);
	{
		// BrnCrashModule.cpp:640
		PlayerCrashEndingEvent lEndSoonEvent;

		CrashIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
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

void WorldModule::EntityModulePostPhysicsUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const OutputBuffer *  lpPhysicsModuleOutputBuffer, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, OutputBuffer_PostPhysics *  lpTrafficOutputBuffer_PostPhysics, InputBuffer_PostPhysics *  lpRaceCarInputBuffer_PostPhysics, OutputBuffer_PostPhysics *  lpRaceCarOutputBuffer_PostPhysics, InputBuffer_PostPhysics *  lpCrashInputBuffer_PostPhysics, OutputBuffer_PostPhysics *  lpCrashOutputBuffer_PostPhysics, InputBuffer_PostPhysics *  lpPropInputBuffer_PostPhysics, OutputBuffer_PostPhysics *  lpPropOutputBuffer_PostPhysics, InputBuffer_PostPhysics *  lpWorldInputBuffer_PostPhysics, OutputBuffer_PostPhysics *  lpWorldOutputBuffer_PostPhysics, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficToRaceCarInterface_PreScene() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleStompingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetDebugController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldDebugComponent::HaveDebugController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetWorldWantsDebugControllerFocus(bool  lbWorldWantsDebugControllerFocus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>::operator BrnPhysics::PhysicsModuleIO::InputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>::operator BrnWorld::CrashIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::operator BrnTraffic::BrnTrafficIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::operator BrnWorld::WorldEntityIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::operator BrnWorld::PropEntityIO::InputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>::operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>::operator BrnTraffic::BrnTrafficIO::InputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:185
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>::operator BrnWorld::CrashIO::OutputBuffer_PreScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2, const IOBuffer *  lpOutputBuffer3, const IOBuffer *  lpOutputBuffer4) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1, const IOBuffer *  lpOutputBuffer2, const IOBuffer *  lpOutputBuffer3, const IOBuffer *  lpOutputBuffer4) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::CgsCollision::SmallCollisionGenerator::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>::operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>::operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>::operator BrnWorld::PropEntityIO::InputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>::operator BrnWorld::WorldEntityIO::InputBuffer_PostScene*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer>::operator BrnAI::AIModuleIO::InputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::SetAIDrivesPlayer(bool  lbAIDrivesPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::SetCamera(const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::operator BrnAI::AIModuleIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>::operator BrnPhysics::PhysicsModuleIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>::operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>::operator BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>::operator BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>::operator BrnWorld::PropEntityIO::OutputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>::operator BrnWorld::WorldEntityIO::InputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>::operator BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::IsTimeOfDaySet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::GetTimeOfDay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::IsRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::EnvironmentSettings::EnvironmentManager::SetCurrentTimeStep(float32_t  lrTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>::operator BrnAI::AIModuleIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>::operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>::operator BrnWorld::WorldEntityIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>::operator BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>::operator BrnWorld::CrashIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>::operator BrnWorld::CrashIO::OutputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>::operator BrnWorld::PropEntityIO::InputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>::operator BrnWorld::PropEntityIO::OutputBuffer_PostPhysics*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:898
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::Update(BrnUpdateSet  lUpdateSet, IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const UpdateInputBuffer *  lpWorldModuleInputBuffer, UpdateOutputBuffer *  lpWorldModuleOutputBuffer, LinearMalloc *  lpScratchBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:1248
		IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer> lpPhysicsModuleInputBuffer;

		// BrnWorldModule.cpp:1249
		IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer> lpPhysicsModuleOutputBuffer;

		// BrnWorldModule.cpp:1251
		IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> lpSceneModuleOutputBuffer;

		// BrnWorldModule.cpp:1253
		IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene> lpTriggerInputBuffer_PreScene;

		// BrnWorldModule.cpp:1254
		IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene> lpTriggerOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1255
		IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene> lpTriggerInputBuffer_PostScene;

		// BrnWorldModule.cpp:1256
		IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene> lpTriggerOutputBuffer_PostScene;

		// BrnWorldModule.cpp:1257
		IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics> lpTriggerInputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1258
		IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics> lpTriggerOutputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1260
		IOHelper<BrnAI::AIModuleIO::OutputBuffer> lpAIOutputBuffer;

		// BrnWorldModule.cpp:1262
		IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene> lpTrafficInputBuffer_PostScene;

		// BrnWorldModule.cpp:1263
		IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics> lpTrafficInputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1265
		IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene> lpCrashModuleInputBuffer_PreScene;

		// BrnWorldModule.cpp:1266
		IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene> lpCrashModuleOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1267
		IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics> lpCrashModuleInputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1268
		IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics> lpCrashModuleOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1270
		SmallCollisionGenerator * lpCollisionGenerator;

		// BrnWorldModule.cpp:1273
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnWorldModule.cpp:1275
		OutputBuffer_PreScene * lpPropOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1276
		OutputBuffer_PostScene * lpPropOutputBuffer_PostScene;

		// BrnWorldModule.cpp:1278
		OutputBuffer_PreScene * lpWorldEntityOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1279
		OutputBuffer_PostScene * lpWorldEntityOutputBuffer_PostScene;

		// BrnWorldModule.cpp:1281
		OutputBuffer_PreScene * lpRaceCarOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1282
		OutputBuffer_PostScene * lpRaceCarOutputBuffer_PostScene;

		// BrnWorldModule.cpp:1283
		InputBuffer_PrePhysics * lpRaceCarInputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1285
		OutputBuffer_PreScene * lpTrafficOutputBuffer_PreScene;

		// BrnWorldModule.cpp:1286
		OutputBuffer_PostScene * lpTrafficOutputBuffer_PostScene;

		// BrnWorldModule.cpp:1287
		InputBuffer_PrePhysics * lpTrafficInputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1289
		InputBuffer_PrePhysics * lpPropInputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1292
		InputBuffer_Update * lpSceneInputBuffer_Update;

		// BrnWorldModule.cpp:1295
		TrafficToRaceCarInterface_PreScene lTrafficToRaceCarInterface_PreScene;

	}
	CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>::IOHelper(/* parameters */);
	Malloc<CgsSceneManager::CgsCollision::SmallCollisionGenerator>(/* parameters */);
	TrafficToRaceCarInterface_PreScene(/* parameters */);
	CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene>(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Array(/* parameters */);
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PreScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PreScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics>(/* parameters */);
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics>(/* parameters */);
	CreateIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PrePhysics>(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetDebugController(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetWorldWantsDebugControllerFocus(/* parameters */);
	{
		// BrnWorldModule.cpp:1368
		IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene> lpRaceCarInputBuffer_PreScene;

		// BrnWorldModule.cpp:1369
		IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene> lpTrafficInputBuffer_PreScene;

		// BrnWorldModule.cpp:1370
		IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene> lpPropInputBuffer_PreScene;

		// BrnWorldModule.cpp:1371
		IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene> lpWorldEntityInputBuffer_PreScene;

		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::IOHelper(/* parameters */);
		{
			// BrnWorldModule.cpp:1423
			const OutputBuffer_PreScene * lpConstOutputBuffer;

			BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
		}
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
	}
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PreScene>(/* parameters */);
	DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PreScene>(/* parameters */);
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene>(/* parameters */);
	CgsSceneManager::CgsCollision::SmallCollisionGenerator::Prepare(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear(/* parameters */);
	{
		// BrnWorldModule.cpp:1512
		bool lbSimPaused;

	}
	CreateIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostScene>(/* parameters */);
	CreateIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostScene>(/* parameters */);
	{
		// BrnWorldModule.cpp:1553
		IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene> lpRaceCarInputBuffer_PostScene;

		// BrnWorldModule.cpp:1554
		IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene> lpPropInputBuffer_PostScene;

		// BrnWorldModule.cpp:1555
		IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene> lpWorldEntityInputBuffer_PostScene;

		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene>::~IOHelper(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:1584
		IOHelper<BrnAI::AIModuleIO::InputBuffer> lpAIInputBuffer;

		CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer>::IOHelper(/* parameters */);
		BrnAI::AIModule::SetAIDrivesPlayer(/* parameters */);
		BrnAI::AIModule::SetCamera(/* parameters */);
		operator=(/* parameters */);
		CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer>::~IOHelper(/* parameters */);
	}
	DestroyIOBuffer<BrnWorld::WorldEntityIO::OutputBuffer_PostScene>(/* parameters */);
	DestroyIOBuffer<BrnWorld::PropEntityIO::OutputBuffer_PostScene>(/* parameters */);
	DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene>(/* parameters */);
	{
		// BrnWorldModule.cpp:1639
		IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics> lpRaceCarOutputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1640
		IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics> lpTrafficOutputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1641
		IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics> lpPropOutputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1642
		IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics> lpWorldEntityInputBuffer_PrePhysics;

		// BrnWorldModule.cpp:1643
		IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics> lpWorldEntityOutputBuffer_PrePhysics;

		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics>::~IOHelper(/* parameters */);
	}
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene>(/* parameters */);
	DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene>(/* parameters */);
	DestroyIOBuffer<BrnWorld::PropEntityIO::InputBuffer_PrePhysics>(/* parameters */);
	DestroyIOBuffer<BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics>(/* parameters */);
	DestroyIOBuffer<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics>(/* parameters */);
	{
		// BrnWorldModule.cpp:1734
		IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query> lpSceneInputBuffer_PhysicsQueries;

	}
	BrnDirector::Camera::Camera::GetEffects(/* parameters */);
	BrnWorld::EnvironmentSettings::EnvironmentManager::SetTimeOfDay_Seconds(/* parameters */);
	BrnWorld::EnvironmentSettings::EnvironmentManager::SetCurrentTimeStep(/* parameters */);
	{
		// BrnWorldModule.cpp:1836
		IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics> lpAIInputBuffer_PostPhysics;

		CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics>::~IOHelper(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:1856
		IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics> lpRaceCarOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1857
		IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics> lpTrafficOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1858
		IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics> lpPropOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1859
		IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics> lpWorldEntityOutputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1861
		IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics> lpRaceCarInputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1862
		IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics> lpPropInputBuffer_PostPhysics;

		// BrnWorldModule.cpp:1863
		IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics> lpWorldEntityInputBuffer_PostPhysics;

		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>::IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics>::~IOHelper(/* parameters */);
		CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics>::~IOHelper(/* parameters */);
	}
	CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer>::~IOHelper(/* parameters */);
	{
	}
	{
	}
	BrnWorldIO::UpdateOutputBuffer::GetPlayerActiveRaceCarIndex(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	BrnWorld::EnvironmentSettings::EnvironmentManager::SetCurrentTimeStep(/* parameters */);
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
	}
	{
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

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

::::KU_INVALID_LANDMARK_INDEX = -1;

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

::::SPLICE_TYPE_UNKNOWN = -1;

::::kfSteeringPower = [63, 128, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

BrnGraphics::KF_ENVMAP_NEAR_CLIP_PLANE = [61, 204, 204, 205];

BrnGraphics::KF_ENVMAP_FAR_CLIP_PLANE = [66, 150, 0, 0];

BrnGraphics::KF_ENVMAP_FOV_HORIZONTAL = [63, 201, 15, 219];

BrnGraphics::KF_ENVMAP_ASPECT_RATIO = [63, 128, 0, 0];

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

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

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

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

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

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

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

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

Attrib::Hash::burnoutglobaldata::EaTrax = -3928707850451763780;

Attrib::Hash::burnoutglobaldata::FatalFlagEnum = -1998159337474592529;

Attrib::Hash::burnoutglobaldata::MaterialTypeEnum = -2716257156762056581;

Attrib::Hash::burnoutglobaldata::mPassbyBins = -4188795827779376598;

Attrib::Hash::burnoutglobaldata::mPresentationActions = -3695537172128070359;

Attrib::Hash::burnoutglobaldata::NumShiftPatterns = -5246617198867624784;

Attrib::Hash::burnoutglobaldata::OrientationEnum = -6791005438007148636;

Attrib::Hash::burnoutglobaldata::ReverbSettings = -1487269786437321408;

Attrib::Hash::burnoutglobaldata::ReverbTypes = -4882948758934672803;

Attrib::Hash::burnoutglobaldata::SampleTags = -6421355425626342460;

Attrib::Hash::burnoutglobaldata::ShiftPatterns = -8770309864078353478;

Attrib::Hash::burnoutglobaldata::StreamMappings = -8414824317506067834;

Attrib::Hash::burnoutglobaldata::StreamSettings = -4887161515125358683;

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

Attrib::ClassName::sparkeffect = -3821321658093367652;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

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

BrnWorld::KF_VEHICLE_RENDER_BUDGET_MIN = [62, 76, 204, 205];

BrnWorld::KF_VEHICLE_RENDER_BUDGET_MAX = [63, 192, 0, 0];

BrnWorld::KF_CRASH_TIME_ENDING_THRESHOLD = [62, 128, 0, 0];

BrnWorld::KF_STANDARD_CRASH_REMAIN_SECONDS = [64, 96, 0, 0];

BrnWorld::KF_CHECK_CRASH_REMAIN_SECONDS = [65, 0, 0, 0];

BrnWorld::KF_SPONTANEOUS_CRASH_REMAIN_SECONDS = [65, 0, 0, 0];

BrnWorld::KF_SLAMMED_CRASH_REMAIN_SECONDS = [65, 0, 0, 0];

BrnWorld::KF_NETWORK_CRASH_TIMEOUT = [65, 160, 0, 0];

BrnWorld::KF_PLAYER_CAR_RESET_SECONDS_NORMAL = [64, 128, 0, 0];

BrnWorld::KF_PLAYER_CAR_RESET_SECONDS_SHORT = [64, 64, 0, 0];

BrnWorld::KF_AI_CAR_RESET_SECONDS_NORMAL = [64, 144, 0, 0];

BrnWorld::KF_AI_CAR_RESET_SECONDS_FAST = [64, 0, 0, 0];

BrnWorld::KF_MAX_CAR_IDLE_TIME_FOR_CRASH_EXTENSION = [63, 128, 0, 0];

BrnWorld::KF_MIN_SPEED_FOR_CRASH_TIME_EXTENSION = [64, 208, 0, 0];

BrnWorld::KF_MIN_ANGULAR_SPEED_TIME_EXTENSION = [63, 192, 0, 0];

BrnWorld::KF_TIME_EXTENSION_SECONDS = [63, 128, 0, 0];

BrnWorld::KF_PLAYER_TOTALLED_CRASH_TIME = [66, 112, 0, 0];

BrnWorld::KF_MIN_TRAFFIC_OFFSCREEN_TIME_FOR_CLEARUP = [63, 128, 0, 0];

BrnWorld::KF_SHADOWMAP_NEAR_PLANE_OFFSET = [195, 225, 0, 0];

BrnWorld::KF_SHADOWMAP_FAR_PLANE_OFFSET = [68, 34, 128, 0];

BrnWorld::KF_SHADOWMAP_EYE_OFFSET = [67, 225, 0, 0];

BrnWorld::KF_FADE_START_DISTANCE = [65, 240, 0, 0];

BrnWorld::KF_SHADOWMAP_FADE_TO_VALUE = [63, 83, 51, 51];

BrnWorld::KF_DYNAMIC_FAR_CLIP_OFFSET = [65, 32, 0, 0];

BrnWorld::KF_VARIABLE_BIAS_CONSTANT_MULTIPLIER = [56, 209, 183, 23];

BrnWorld::KF_VARIABLE_BIAS_MIN = [63, 2, 143, 92];

BrnWorld::KF_VARIABLE_BIAS_MAX = [62, 66, 143, 92];

BrnWorld::KF_BIAS_FRUSTUM_LENGTH = [67, 250, 0, 0];

BrnWorld::KF_SHADOW_CAM_WORLD_Y_OFFSET = [0, 0, 0, 0];

BrnWorld::KF_NUM_CSMS = [64, 64, 0, 0];

BrnWorld::KF_ENV_MAP_FADE_DISTANCE = [0, 0, 0, 0];

BrnWorld::KF_ENV_MAP_FADE_TO_VALUE = [63, 128, 0, 0];

BrnWorld::EnvironmentSettings::KF_SUN_RIG_ROTATION = [66, 52, 0, 0];

BrnWorld::EnvironmentSettings::KF_SUN_TILT_AT_HORIZON = [65, 160, 0, 0];

BrnWorld::EnvironmentSettings::KF_SUN_TILT_AT_MIDDAY = [66, 72, 0, 0];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsSceneManager::KU_INVALID_NODE = -1;

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

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

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

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

BrnWorld::PVSDebugComponent::KI_BOUNDING_SPHERE_SEGMENTS;

