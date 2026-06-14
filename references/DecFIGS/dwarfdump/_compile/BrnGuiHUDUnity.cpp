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

struct PB_INSTANCE;

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

void CgsFsm::State::Render() {
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

void BrnGui::GuiEventTickerCustomMessage::AddString(const char *  lpString, BrnGui::GuiEventTickerCustomMessage::EStringType  leStringType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::AddString(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootAttract::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootAttract::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootAttract::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLegal::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
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

void BrnGui::BootPreload::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootVideos::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PostTitleScreenLoad::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLoading::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnGui::RaceMainHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PausedHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedStuntHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::IdleHudState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnGui::BootPreload::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootPreload::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PostTitleScreenLoad::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PostTitleScreenLoad::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::Construct(StateInterface *  lpStateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::GetNumOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::ResendMessageToApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::HideMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::Construct(CgsID  lId, CgsFsm::ScriptedFsm *  lpFsm, const BrnGui::ProfileManager &  lProfileManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileManager::SetSilentMode(bool  lbSilentMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::SetSilentMode(bool  lbSilentMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProfileManager::SetSilentMode(/* parameters */);
	CgsGui::SaveLoadSystem::SetSilentMode(/* parameters */);
}

void BrnGui::BootVideos::Construct(CgsID  lId, CgsFsm::ScriptedFsm *  lpFsm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLoading::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::RunReplayState(BrnGui::GuiEventChangeReplayState::ReplayState  leReplayState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::AddFakeEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::ForceReenter(const bool  lbUseDebugCptSettings, const bool *  lbComponentEnabledStates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::RunReplayState(BrnGui::GuiEventChangeReplayState::ReplayState  leReplayState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::ClearExpectedComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.h:433
		uint32_t luIter;

	}
}

void BrnGui::FBurnMainHudState::SetExpectedAptComponentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearExpectedComponent(/* parameters */);
}

void BrnGui::PausedHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PausedHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::UpdateWFInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:436
		bool lbReturnValue;

	}
}

void BrnGui::CrashedStuntHudState::UpdateWFInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:268
		bool lbReturnValue;

	}
}

void BrnGui::IdleHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedStuntHudState::SetExpectedAptComponentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::SetupEventInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3831
		GuiEventStopMode::EGameModeType leGameMode;

	}
	GuiCache::GetGameMode(/* parameters */);
}

void BrnGui::GuiCache::GetOnlinePlayerInfo(const EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3430
		int32_t liIndex;

	}
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::DoRoadRuleShot(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3989
		const InGamePlayerStatusData * lpOpponentStatusData;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:4012
		const InGamePlayerStatusData * lpOpponentStatusData;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
}

void BrnGui::CrashedHudState::DoRoadRuleShot(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:1115
		const InGamePlayerStatusData * lpOpponentStatusData;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:1138
		const InGamePlayerStatusData * lpOpponentStatusData;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
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

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
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

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void BrnGui::GuiCache::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::ConcludeEventCountdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
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

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiAccessPointers::GetFlaptManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptManager::GetFile(BrnFlapt::FlaptFiles  leFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnFlaptManager.h:187
	FileRef lRef;

	{
		// BrnFlaptManager.h:187
		FileRef lRef;

	}
}

void BrnFlapt::FlaptFileInstance::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FileRef::Construct(BrnFlapt::FlaptFileInstance *  lpFileInst) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::ResetTimeline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiAccessPointers::GetGuiCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetHudMessagesQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SetInGameMessagesQueue(InGameMessagesQueue *  lInGameInMessagesQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SwitchCurrentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::TextFieldRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:197
		FileRef lFlaptFile;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
	InGameMessagesComponent::SetInGameMessagesQueue(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

void BrnGui::TextField::SetAutoSize(bool  lbAutosize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedStuntHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:104
		FileRef lFile;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
	InGameMessagesComponent::SetInGameMessagesQueue(/* parameters */);
	TextField::SetAutoSize(/* parameters */);
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileMessageComponent::ShowMessage(const char *  lpMessage, const uint32_t  luOptionCount, const char **  lpaOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	{
		// BrnBootProfile.cpp:223
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
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
}

void BrnGui::ProfileMessageComponent::ShowNoSpaceMessage(const char *  lpMessage, uint32_t  luSaveDataSizeKb, uint32_t  luGameDataSizeKb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::ProcessBoostInfo(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:2939
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::ProcessAptEvents(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:2969
		const GuiEventAptTrigger * lpAptTrigger;

	}
	{
		// BrnRaceMainHudState.cpp:2967
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::UpdateSatNav(const CgsModule::Event *  lpEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3263
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::ClearExpectedComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.h:659
		uint32_t luIter;

	}
}

void BrnGui::RaceMainHudState::SetExpectedComponent(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.h:642
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::SetExpectedAptComponentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearExpectedComponent(/* parameters */);
	CgsGui::GuiComponent::GetName(/* parameters */);
	SetExpectedComponent(/* parameters */);
}

void BrnGui::GuiCache::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::TriggerStatic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavStatic::TriggerStatic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::HandleImpactEvent(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3807
		const GuiImpactEvent * lpImpactEvent;

	}
	SatNavComponent::TriggerStatic(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:3793
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::DoMugshot(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3918
		const char * lpcFrameLabel;

	}
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::RaceMainHudState::HandleMugshotEvent(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::AddCrashCombo(BrnWorld::EComboEntryType  leItem, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:4063
		char[128] lacNewString;

	}
	{
		// BrnRaceMainHudState.cpp:4060
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:4061
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FBurnMainHudState::ProcessBoostInfo(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1630
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FBurnMainHudState::ProcessAptEvents(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1660
		const GuiEventAptTrigger * lpAptTrigger;

	}
	{
		// BrnFBurnMainHudState.cpp:1658
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FBurnMainHudState::UpdateSatNav(const CgsModule::Event *  lpEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1827
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedHudState::ClearExpectedComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.h:293
		uint32_t luIter;

	}
}

void BrnGui::CrashedHudState::SetExpectedComponent(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.h:285
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::CrashedHudState::SetExpectedAptComponentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearExpectedComponent(/* parameters */);
	CgsGui::GuiComponent::GetName(/* parameters */);
	SetExpectedComponent(/* parameters */);
	CgsGui::GuiComponent::GetName(/* parameters */);
	SetExpectedComponent(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsGui::GuiComponent::GetName(/* parameters */);
	SetExpectedComponent(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsGui::GuiComponent::GetName(/* parameters */);
	SetExpectedComponent(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
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

void BrnGui::CrashedHudState::DoMugshot(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:1055
		const char * lpcFrameLabel;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
}

void BrnGui::CrashedHudState::HandleMugshotEvent(const GuiMugshotControlEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGui::BootAttract::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootAttract.cpp:73
		const CgsModule::Event * lpEvent;

		// BrnBootAttract.cpp:74
		int32_t liEventSize;

		// BrnBootAttract.cpp:75
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedHudState::UpdateGetCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:351
		const CgsModule::Event * lpEvent;

		// BrnCrashedHudState.cpp:352
		int32_t liEventSize;

		// BrnCrashedHudState.cpp:353
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnCrashedHudState.cpp:364
		const GuiEventCache * lpCacheEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:365
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedHudState::EnterSteerWreckScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AnimationComponent::Run(const char *  lpcAnimation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::EnterImpactTimeScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:593
		const CgsModule::Event * lpEvent;

		// BrnCrashedHudState.cpp:594
		int32_t liEventSize;

		// BrnCrashedHudState.cpp:595
		int32_t liEventId;

		// BrnCrashedHudState.cpp:596
		bool lbReturnValue;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnCrashedHudState.cpp:723
		const GuiEventTriggerCrashMud * lpMudEvent;

		AnimationComponent::Run(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:712
		const GuiEventControllerInputReleased * lpReleasedEvent;

		EnterImpactTimeScreen(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
	{
		// BrnCrashedHudState.cpp:624
		const GuiEventAptTrigger * lpAptTrigger;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:699
		const GuiEventControllerInputPressed * lpPressedEvent;

		EnterSteerWreckScreen(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedStuntHudState::UpdatePermenant() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:544
		const CgsModule::Event * lpEvent;

		// BrnCrashedStuntHudState.cpp:545
		int32_t liEventSize;

		// BrnCrashedStuntHudState.cpp:546
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnCrashedStuntHudState.cpp:565
		const GuiPlayerCrashingStateChangeEvent * lpPlayerCrashingStateChangeEvent;

	}
	{
		// BrnCrashedStuntHudState.cpp:577
		const GuiEventShowHideHud * lpHideHudMsg;

	}
	{
		// BrnCrashedStuntHudState.cpp:557
		const GuiEventCache * lpCacheEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashedStuntHudState.cpp:558
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<65536,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<65536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<65536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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

void CgsGui::StateInterface::PlayAptMovie(const char *  lpacMovieName, int32_t  liLevelNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:542
		GuiEventPlayAptMovie lPlayMovieEvent;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(const GuiEventPlayAptMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<18>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<41>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::IdleHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
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

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntRound<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntFloor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Floor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:45
		const double maxMantissa;

		// scalar.h:46
		const double doubleInput;

		// scalar.h:47
		double c;

		// scalar.h:48
		double result;

	}
}

void BrnGui::GuiAudioEventResults::Construct(int32_t  liStuntDisplayedResultScore, float32_t  lfShowtimeDisplayedScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioEventResults,40>::SetRawEvent(const GuiAudioEventResults &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<460>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedStuntHudState::UpdateCrashRunningState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:702
		GuiAudioEventResults lAudioEventResults;

	}
	{
		// BrnCrashedStuntHudState.cpp:697
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	OutputGuiEvent<BrnGui::GuiAudioEventResults>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEventResults> >(/* parameters */);
	{
		// BrnCrashedStuntHudState.cpp:634
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnCrashedStuntHudState.cpp:635
		char[32] lacTempString;

		// BrnCrashedStuntHudState.cpp:638
		float32_t lfProgression;

		// BrnCrashedStuntHudState.cpp:642
		float32_t lfNewScore;

		// BrnCrashedStuntHudState.cpp:646
		int32_t liNewScore;

		// BrnCrashedStuntHudState.cpp:649
		float32_t lfNewMultiplier;

		// BrnCrashedStuntHudState.cpp:653
		int32_t liNewMultiplier;

		GuiCache::GetTime(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::IntRound<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		rw::math::fpu::IntRound<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		AnimationComponent::Run(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::operator++(const BrnGui::CrashedStuntHudState::CrashRunningState &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.h:199
		BrnGui::CrashedStuntHudState::CrashRunningState leOldEnumIndex;

	}
}

void BrnGui::CrashedStuntHudState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:376
		const CgsModule::Event * lpEvent;

		// BrnCrashedStuntHudState.cpp:377
		int32_t liEventSize;

		// BrnCrashedStuntHudState.cpp:378
		int32_t liEventId;

		// BrnCrashedStuntHudState.cpp:379
		bool lbReturnValue;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnCrashedStuntHudState.cpp:392
		const GuiHudMessage * lpHudMessage;

	}
	{
		// BrnCrashedStuntHudState.cpp:413
		const GuiEventAptTrigger * lpAptTrigger;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	operator++(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	GuiCache::GetTime(/* parameters */);
}

void BrnGui::GuiAudioEvent::Construct(int32_t  liComponentType, int32_t  liAction, int32_t  liAdditionalInformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(const GuiAudioEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<451>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PausedHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPausedHudState.cpp:72
		const CgsModule::Event * lpEvent;

		// BrnPausedHudState.cpp:73
		int32_t liEventSize;

		// BrnPausedHudState.cpp:74
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnPausedHudState.cpp:90
		const GuiEventShowHideHud * lpHudEvent;

		{
			// BrnPausedHudState.cpp:96
			GuiAudioEvent lAudioTrigger;

			OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
			CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(/* parameters */);
		}
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		// BrnPausedHudState.cpp:105
		const GuiPlayerCrashingStateChangeEvent * lpPlayerCrashingStateChangeEvent;

		{
			// BrnPausedHudState.cpp:125
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
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

void CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,41>::SetRawEvent(const GuiEventEnableSatNavIcons &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<202>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::DisableSatNavEventsFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:2261
		GuiEventEnableSatNavIcons lDrawEventIcons;

		OutputViewState<BrnGui::GuiEventEnableSatNavIcons>(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventEnableSatNavIcons> >(/* parameters */);
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventUpdateLocalisedCpt,41>::SetRawEvent(const GuiEventUpdateLocalisedCpt &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<10>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::SendLocaliseEvent(const char *  lacComponentName, const char *  lacVariable, const float32_t  lfTimeInSecs, const CgsGui::LocaliseFormat  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1857
		GuiEventUpdateLocalisedCpt lpLocaliseEvent;

		OutputViewState<CgsGui::GuiEventUpdateLocalisedCpt>(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> >(/* parameters */);
}

void CgsGui::StateInterface::StopLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:600
		GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie lStopMovieEvent;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<20>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<20>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLoading::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::StopLoadingScreen(/* parameters */);
}

void CgsGui::StateInterface::PlayLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:583
		GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie lPlayMovieEvent;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<19>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<19>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLoading::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootLoading.cpp:79
		const CgsModule::Event * lpEvent;

		// BrnBootLoading.cpp:80
		int32_t liEventSize;

		// BrnBootLoading.cpp:81
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	CgsGui::StateInterface::PlayLoadingScreen(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEvent<19>,40>::SetRawEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioTriggerEvent,40>::SetRawEvent(const GuiAudioTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<452>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileManager::HandleMessageChoice(uint32_t  liChoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::HandleControllerInput(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootProfile.cpp:536
		const GuiEventControllerInputPressed * lpControllerEvent;

	}
	{
		// BrnBootProfile.cpp:545
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
	ProfileManager::HandleMessageChoice(/* parameters */);
	ProfileManager::HandleMessageChoice(/* parameters */);
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,40>::SetRawEvent(const GuiEventEnableSatNavIcons &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGui::FBurnMainHudState::EnableSatNavEventsFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:2237
		GuiEventEnableSatNavIcons lDrawEventIcons;

		OutputViewState<BrnGui::GuiEventEnableSatNavIcons>(/* parameters */);
	}
	CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,41>::SetRawEvent(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventEnableSatNavIcons>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,40>::SetRawEvent(/* parameters */);
}

void BrnGui::FBurnMainHudState::RefreshSatNavEventsFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetControllerDisconected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsLoadingScreenVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::SetCachePointer(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetSatNavEventFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetSatNavEventFilterEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventEventStateRequest,40>::SetRawEvent(const GuiEventEventStateRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<540>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetHudMessageController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SetController(const HudMessageController *  lpController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetHudMessageDirector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SetDirector(const HudMessageDirector *  lpDirector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SetGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::SetCachePointer(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::UpdateSetupState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1302
		const CgsModule::Event * lpEvent;

		// BrnFBurnMainHudState.cpp:1303
		int32_t liEventSize;

		// BrnFBurnMainHudState.cpp:1304
		int32_t liEventId;

		// BrnFBurnMainHudState.cpp:1389
		GuiEventEventStateRequest lRequestEventStates;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:1314
		const GuiEventCache * lpCacheEvent;

	}
	SatNavComponent::SetCachePointer(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventEventStateRequest>(/* parameters */);
	GuiCache::GetHudMessageController(/* parameters */);
	InGameMessagesComponent::SetController(/* parameters */);
	GuiCache::GetHudMessageDirector(/* parameters */);
	InGameMessagesComponent::SetDirector(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	InGameMessagesComponent::SetGameMode(/* parameters */);
	RoadRuleComponent::SetCachePointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:1315
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::SendLocaliseEvent(const char *  lacComponentName, const char *  lacVariable, const float32_t  lfTimeInSecs, const CgsGui::LocaliseFormat  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3493
		GuiEventUpdateLocalisedCpt lpLocaliseEvent;

		OutputViewState<CgsGui::GuiEventUpdateLocalisedCpt>(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> >(/* parameters */);
}

void BrnGui::ProfileManager::DetachMessageDisplay(const ProfileMessageDisplay &  lMessageDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiProfile.h:606
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::IsPerformInviteReceived() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTriggerGetPlayerName,40>::SetRawEvent(const GuiEventTriggerGetPlayerName &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<497>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProfileManager::DetachMessageDisplay(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	{
		// BrnBootProfile.cpp:517
		GuiEventTriggerGetPlayerName lTriggerGetPlayerNameEvent;

		OutputGuiEvent<BrnGui::GuiEventTriggerGetPlayerName>(/* parameters */);
	}
}

void BrnGui::BootVideos::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::RaceMainHudState::UpdateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:2702
		bool lbReturnValue;

	}
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::FBurnMainHudState::UpdateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1467
		bool lbReturnValue;

	}
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::CrashedHudState::UpdateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:388
		bool lbReturnValue;

	}
	GuiCache::GetHudMessageController(/* parameters */);
	InGameMessagesComponent::SetController(/* parameters */);
	GuiCache::GetHudMessageDirector(/* parameters */);
	InGameMessagesComponent::SetDirector(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	InGameMessagesComponent::SetGameMode(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::InGameMessagesQueue::ClearPending() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	InGameMessagesQueue::ClearPending(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
}

void BrnGui::CrashedStuntHudState::UpdateLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:223
		bool lbReturnValue;

	}
	GuiCache::GetHudMessageController(/* parameters */);
	InGameMessagesComponent::SetController(/* parameters */);
	GuiCache::GetHudMessageDirector(/* parameters */);
	InGameMessagesComponent::SetDirector(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	InGameMessagesComponent::SetGameMode(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::CrashedStuntHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	InGameMessagesQueue::ClearPending(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
}

void BrnGui::IdleHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIdleHudState.cpp:81
		const CgsModule::Event * lpEvent;

		// BrnIdleHudState.cpp:82
		int32_t liEventSize;

		// BrnIdleHudState.cpp:83
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		// BrnIdleHudState.cpp:95
		const GuiEventCache * lpCacheEvent;

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
		// BrnIdleHudState.cpp:109
		uint32_t luIter;

		CgsGui::StateInterface::PlayAptMovie(/* parameters */);
		CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
		CgsContainers::CgsHash::CalculateHash(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventFriendListShowing,40>::SetRawEvent(const GuiEventFriendListShowing &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<95>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<565>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<565>,40>::GuiEventFreeburnChallengeRequestEveryPlayerStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<565>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiSetEasyDriveNotAllowedEvent,40>::SetRawEvent(const GuiSetEasyDriveNotAllowedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<97>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:396
		FileRef lFlaptFile;

		// BrnRaceMainHudState.cpp:542
		GuiEventFriendListShowing lFriendListShowingEvent;

		// BrnRaceMainHudState.cpp:672
		GuiEventWrapper<CgsGui::GuiEvent<565>,40>::GuiEventFreeburnChallengeRequestEveryPlayerStatus lRequestCompletionStatus;

		// BrnRaceMainHudState.cpp:679
		GuiSetEasyDriveNotAllowedEvent lAllow;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
	InGameMessagesComponent::SetInGameMessagesQueue(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFreeburnChallengeRequestEveryPlayerStatus>(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEvent<565>,40>::SetRawEvent(/* parameters */);
	OutputGuiEvent<BrnGui::GuiSetEasyDriveNotAllowedEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiSetEasyDriveNotAllowedEvent> >(/* parameters */);
}

void CgsGui::GuiEventClearScreenSet::GuiEventClearScreenSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiOutViewState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41>::SetRawEvent(const GuiEventClearScreenSet &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<25>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideAboveCar,41>::SetRawEvent(const GuiEventShowHideAboveCar &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<213>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<306>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<306>,40>::GuiEventGameCompleteRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<306>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:303
		GuiEventClearScreenSet lClearScreen;

		// BrnFBurnMainHudState.cpp:309
		FileRef lFlaptFile;

		// BrnFBurnMainHudState.cpp:407
		GuiEventFriendListShowing lFriendListShowingEvent;

		// BrnFBurnMainHudState.cpp:458
		GuiEventShowHideAboveCar lShowHideAboveCar;

		// BrnFBurnMainHudState.cpp:473
		GuiSetEasyDriveNotAllowedEvent lAllow;

		// BrnFBurnMainHudState.cpp:479
		GuiEventWrapper<CgsGui::GuiEvent<306>,40>::GuiEventGameCompleteRequest lIsGameComplete;

	}
	OutputViewState<CgsGui::GuiEventClearScreenSet>(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41>::SetRawEvent(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventClearScreenSet> >(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetHudMessagesQueue(/* parameters */);
	InGameMessagesComponent::SetInGameMessagesQueue(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideAboveCar>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideAboveCar,41>::SetRawEvent(/* parameters */);
	OutputGuiEvent<BrnGui::GuiSetEasyDriveNotAllowedEvent>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventGameCompleteRequest>(/* parameters */);
}

void BrnGui::BootLegal::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootLegal.cpp:543
		GuiEventClearScreenSet lClearScreen;

		OutputViewState<CgsGui::GuiEventClearScreenSet>(/* parameters */);
		CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41>::SetRawEvent(/* parameters */);
	}
	GuiOutViewState(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::ProfileManager::AttachMessageDisplay(ProfileMessageDisplay *  lpMessageDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiProfile.h:595
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::BootProfile::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootProfile.cpp:319
		GuiEventClearScreenSet lClearScreen;

	}
	ProfileManager::AttachMessageDisplay(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	OutputViewState<CgsGui::GuiEventClearScreenSet>(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41>::SetRawEvent(/* parameters */);
}

void BrnGui::BootVideos::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootVideos.cpp:100
		GuiEventClearScreenSet lClearScreen;

	}
	CgsGui::StateInterface::StopLoadingScreen(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventStopAptLoadingMovie> >(/* parameters */);
	OutputViewState<CgsGui::GuiEventClearScreenSet>(/* parameters */);
}

extern void GuiEventStopVideo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VideoDefinition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Name::Name() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventStopVideo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MovieManager::VideoDefinition::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MovieManager::VideoDefinition::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Name::operator=(const const Name &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventStopVideo,40>::SetRawEvent(const GuiEventStopVideo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

extern GuiEventStopVideo & operator=(const const BrnGui::GuiEventStopVideo &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BrnGui::MovieManager::VideoDefinition & operator=(const const BrnGui::MovieManager::VideoDefinition &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<499>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PostTitleScreenLoad::HandleIncomingEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostTitleScreenLoad.cpp:203
		const CgsModule::Event * lpEvent;

		// BrnPostTitleScreenLoad.cpp:204
		int32_t liEventSize;

		// BrnPostTitleScreenLoad.cpp:205
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	{
		// BrnPostTitleScreenLoad.cpp:246
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnPostTitleScreenLoad.cpp:217
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnPostTitleScreenLoad.cpp:236
		GuiEventStopVideo lStopVideoEvent;

		GuiEventStopVideo::Construct(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventStopVideo>(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventStopVideo,40>::SetRawEvent(/* parameters */);
		operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetLanguage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<70>,40>::SetRawEvent(const GuiEvent<70> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<70>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,42>::SetRawEvent(const GuiEventPreloadedResourcesLoaded &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<72>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<42>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,40>::SetRawEvent(const GuiEventPreloadedResourcesLoaded &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGui::BootPreload::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootPreload.cpp:221
		const CgsModule::Event * lpEvent;

		// BrnBootPreload.cpp:222
		int32_t liEventSize;

		// BrnBootPreload.cpp:223
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootPreload.cpp:235
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnBootPreload.cpp:262
		sResourceTuple * lpFontResources;

		// BrnBootPreload.cpp:263
		uint32_t lNumFontResources;

		CgsGui::StateInterface::PlayAptMovie(/* parameters */);
		CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBootPreload.cpp:334
		GuiEvent<70> lEvent;

		// BrnBootPreload.cpp:337
		GuiEventPreloadedResourcesLoaded lPreloadedEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventPreloadedResourcesLoaded>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPreloadedResourcesLoaded> >(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPreloadedResourcesLoaded>(/* parameters */);
	}
	CgsGui::StateInterface::PlayLoadingScreen(/* parameters */);
	{
		// BrnBootPreload.cpp:236
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProfileMessageComponent::HasMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<136>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<136>,40>::GuiEventShowLoadingScreenAsBackground &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<136>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootProfile::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBootProfile.cpp:457
		GuiEvent<70> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
	}
	{
		// BrnBootProfile.cpp:433
		const CgsModule::Event * lpEvent;

		// BrnBootProfile.cpp:434
		int32_t liEventSize;

		// BrnBootProfile.cpp:435
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
		CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	}
	{
		// BrnBootProfile.cpp:395
		GuiEventWrapper<CgsGui::GuiEvent<136>,40>::GuiEventShowLoadingScreenAsBackground lShowLoadingScreenAsBackground;

		OutputGuiEvent<BrnGui::GuiEventShowLoadingScreenAsBackground>(/* parameters */);
		CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	}
	{
		// BrnBootProfile.cpp:342
		const CgsModule::Event * lpEvent;

		// BrnBootProfile.cpp:343
		int32_t liEventSize;

		// BrnBootProfile.cpp:344
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
		CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
		{
			// BrnBootProfile.cpp:350
			const GuiEventCache * lpCacheEvent;

		}
	}
	CgsGui::StateInterface::PlayLoadingScreen(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBootProfile.cpp:351
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetPlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListComponent::SetCanSendInvites(bool  lbCanSendInvites) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::UpdatePermenant() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1945
		const CgsModule::Event * lpEvent;

		// BrnFBurnMainHudState.cpp:1946
		int32_t liEventSize;

		// BrnFBurnMainHudState.cpp:1947
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:1982
		const GuiPlayerCrashingStateChangeEvent * lpPlayerCrashingStateChangeEvent;

	}
	FriendsListComponent::SetCanSendInvites(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:1963
		const GuiEventShowHideHud * lpHideHudMsg;

		{
			// BrnFBurnMainHudState.cpp:1967
			GuiAudioEvent lAudioTrigger;

			OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEvent> >(/* parameters */);
		}
	}
	{
		// BrnFBurnMainHudState.cpp:1998
		const GuiEventGameCompleted * lpCompleteEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<71>,40>::SetRawEvent(const GuiEvent<71> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<71>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiOverlayShowingNotification::GetOverlayID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeIn,40>::SetRawEvent(const GuiEventBlackOverlayFadeIn &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<574>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventPlayMusicOnMenuStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Name::Name(const char *  lkpacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayMusicOnMenuStream,40>::SetRawEvent(const GuiEventPlayMusicOnMenuStream &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

extern GuiEventPlayMusicOnMenuStream & operator=(const const GuiEventPlayMusicOnMenuStream &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<23>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsInHighDef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetSku() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<91>,40>::SetRawEvent(const GuiEvent<91> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<91>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetPlayerSignInReported() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetPlayerSignOutReported() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventPlayVideo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventPlayVideo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventPlayVideo,40>::SetRawEvent(const GuiEventPlayVideo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

extern GuiEventPlayVideo & operator=(const const BrnGui::GuiEventPlayVideo &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<498>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeOut,40>::SetRawEvent(const GuiEventBlackOverlayFadeOut &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<575>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLegal::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootLegal.cpp:159
		const CgsModule::Event * lpEvent;

		// BrnBootLegal.cpp:160
		int32_t liEventSize;

		// BrnBootLegal.cpp:161
		int32_t liEventId;

		// BrnBootLegal.cpp:162
		bool lbKeyPressed;

		// BrnBootLegal.cpp:163
		bool lbVideoFinished;

		// BrnBootLegal.cpp:164
		bool lbStartPressed;

		// BrnBootLegal.cpp:165
		bool lbDoneLoading;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootLegal.cpp:223
		const GuiOverlayCompleteEvent * lpCompleteEvent;

	}
	{
		// BrnBootLegal.cpp:239
		const GuiEventControllerInputPressed * lpControllerPressedEvent;

	}
	AnimationComponent::Run(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		// BrnBootLegal.cpp:211
		const GuiOverlayShowingNotification * lpOverlayEvent;

	}
	{
		// BrnBootLegal.cpp:178
		const GuiEventCache * lpCacheEvent;

		{
			// BrnBootLegal.cpp:185
			sResourceTuple lSaveLoadResourceTuple;

			// BrnBootLegal.cpp:193
			GuiEvent<71> lResumePreparingWorldEvent;

			OutputGuiEvent<CgsGui::GuiEvent<71> >(/* parameters */);
			CgsGui::GuiEventWrapper<CgsGui::GuiEvent<71>,40>::SetRawEvent(/* parameters */);
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
	GuiCache::GetTime(/* parameters */);
	{
		// BrnBootLegal.cpp:419
		GuiEventPlayMusicOnMenuStream lPlayStartScreenMusicEvent;

		// BrnBootLegal.cpp:428
		GuiEventPlayVideo lPlayMovieEvent;

		CgsSound::Playback::Name::operator=(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> >(/* parameters */);
		operator=(/* parameters */);
		GuiEventPlayVideo::Construct(/* parameters */);
		CgsResource::ID::Construct(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPlayVideo>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> >(/* parameters */);
		operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	{
		// BrnBootLegal.cpp:511
		GuiEvent<70> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	{
		// BrnBootLegal.cpp:301
		GuiEventBlackOverlayFadeIn lFadeInRequest;

		// BrnBootLegal.cpp:310
		GuiEventPlayMusicOnMenuStream lPlayStartScreenMusicEvent;

		OutputGuiEvent<BrnGui::GuiEventBlackOverlayFadeIn>(/* parameters */);
		CgsGui::StateInterface::PlayAptMovie(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventBlackOverlayFadeIn> >(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	{
		// BrnBootLegal.cpp:376
		GuiEvent<91> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<91> >(/* parameters */);
	}
	{
		// BrnBootLegal.cpp:456
		GuiEventStopVideo lStopVideoEvent;

		GuiEventStopVideo::Construct(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventStopVideo>(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventStopVideo,40>::SetRawEvent(/* parameters */);
		operator=(/* parameters */);
	}
	{
		// BrnBootLegal.cpp:467
		GuiEventBlackOverlayFadeOut lFadeInRequest;

		// BrnBootLegal.cpp:471
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiEventBlackOverlayFadeOut>(/* parameters */);
		GuiCache::GetTime(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	}
	{
		// BrnBootLegal.cpp:179
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::GuiCache::SetAllowingSignInOutEvents(bool  lbAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetIsNewProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PostTitleScreenLoad::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::SetAllowingSignInOutEvents(/* parameters */);
	{
		// BrnPostTitleScreenLoad.cpp:125
		GuiEvent<70> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
	}
	{
		// BrnPostTitleScreenLoad.cpp:142
		GuiEventPlayMusicOnMenuStream lPlayStartScreenMusicEvent;

		// BrnPostTitleScreenLoad.cpp:149
		GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie lPlayAptLoadingMovieEvent;

		// BrnPostTitleScreenLoad.cpp:153
		GuiEvent<70> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		// BrnPostTitleScreenLoad.cpp:167
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
	CgsSound::Playback::Name::Name(/* parameters */);
	OutputGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(/* parameters */);
	operator=(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> >(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	OutputGuiEvent<CgsGui::GuiEventPlayAptLoadingMovie>(/* parameters */);
	{
		// BrnPostTitleScreenLoad.cpp:99
		GuiEventPlayVideo lPlayMovieEvent;

		// BrnPostTitleScreenLoad.cpp:107
		GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie lStopAptLoadingMovieEvent;

		// BrnPostTitleScreenLoad.cpp:111
		GuiEventPlayMusicOnMenuStream lPlayStartScreenMusicEvent;

		GuiEventPlayVideo::Construct(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventStopAptLoadingMovie>(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsResource::ID::Construct(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventStopAptLoadingMovie> >(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPlayVideo>(/* parameters */);
	}
}

void BrnGui::BootVideos::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootVideos.cpp:122
		const CgsModule::Event * lpEvent;

		// BrnBootVideos.cpp:123
		int32_t liEventSize;

		// BrnBootVideos.cpp:124
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootVideos.cpp:136
		const GuiEventControllerInputPressed * lpControllerPressedEvent;

		{
			// BrnBootVideos.cpp:141
			GuiEventStopVideo lStopVideoEvent;

			GuiEventStopVideo::Construct(/* parameters */);
			OutputGuiEvent<BrnGui::GuiEventStopVideo>(/* parameters */);
			rw::math::vpu::Vector4::Set(/* parameters */);
			CgsSound::Playback::Name::operator=(/* parameters */);
			CgsGui::GuiEventWrapper<BrnGui::GuiEventStopVideo,40>::SetRawEvent(/* parameters */);
		}
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootVideos.cpp:316
		GuiEventPlayVideo lPlayMovieEvent;

		GuiEventPlayVideo::Construct(/* parameters */);
		CgsResource::ID::Construct(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPlayVideo>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> >(/* parameters */);
		operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootVideos.cpp:265
		GuiEventPlayVideo lPlayMovieEvent;

		GuiEventPlayVideo::Construct(/* parameters */);
		CgsResource::ID::Construct(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPlayVideo>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> >(/* parameters */);
		operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		GuiCache::GetTime(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootVideos.cpp:196
		const GuiEventCache * lpCacheEvent;

		{
			// BrnBootVideos.cpp:219
			GuiEventPlayVideo lPlayMovieEvent;

			GuiEventPlayVideo::Construct(/* parameters */);
		}
		rw::math::vpu::Vector4::Set(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsResource::ID::Construct(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventPlayVideo>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> >(/* parameters */);
		operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		GuiCache::GetTime(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBootVideos.cpp:395
		GuiEvent<70> lEvent;

		OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
	}
	{
		// BrnBootVideos.cpp:406
		const GuiEventAptTrigger * lpLoadNotification;

		{
			// BrnBootVideos.cpp:411
			GuiEvent<70> lEvent;

			OutputGuiEvent<CgsGui::GuiEvent<70> >(/* parameters */);
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
		// BrnBootVideos.cpp:197
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(const GuiEventShowHideBoostBar &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<212>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BootLegal::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBootLegal.cpp:103
		GuiEventShowHideBoostBar lHideBoostBarEvent;

		// BrnBootLegal.cpp:112
		GuiEventClearScreenSet lClearScreen;

	}
	OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
	CgsGui::StateInterface::StopLoadingScreen(/* parameters */);
	OutputViewState<CgsGui::GuiEventClearScreenSet>(/* parameters */);
}

void BrnGui::GuiCache::GetCurrentCrashState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::EnterImpactInvisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRoadRuleShotActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetRoadRuleShotOpponentARCI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRoadRuleShotLocalNewRuler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetRoadRuleShotRoadId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRoadRuleShotTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::HasRoadRuleShotBeenTaken() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::SetHudMessagingActive(const bool  lbSetActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedHudState::UpdateSetupState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:470
		BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState leCrashState;

	}
	GuiCache::GetCurrentCrashState(/* parameters */);
	{
		// BrnCrashedHudState.cpp:508
		GuiEventShowHideBoostBar lShowHideBoostBar;

		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
	}
	EnterImpactInvisible(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	{
		// BrnCrashedHudState.cpp:502
		GuiEventShowHideBoostBar lShowHideBoostBar;

		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	}
	EnterSteerWreckScreen(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	{
		// BrnCrashedHudState.cpp:546
		const InGamePlayerStatusData * lpOpponentStatusData;

		GuiCache::GetRoadRuleShotOpponentARCI(/* parameters */);
		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	GuiCache::SetHudMessagingActive(/* parameters */);
	EnterImpactTimeScreen(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCrashedHudState.cpp:459
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetLastStuntScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetLastStuntMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashedStuntHudState::UpdateSetupState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:294
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnCrashedStuntHudState.cpp:295
		char[16] lacTempString;

	}
	{
		// BrnCrashedStuntHudState.cpp:310
		GuiEventShowHideBoostBar lShowHideBoostBar;

	}
	OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
	GuiCache::GetLastStuntScore(/* parameters */);
	GuiCache::GetLastStuntMultiplier(/* parameters */);
	GuiCache::GetLastStuntScore(/* parameters */);
	GuiCache::GetLastStuntMultiplier(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	GuiCache::SetHudMessagingActive(/* parameters */);
	{
		// BrnCrashedStuntHudState.cpp:292
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedStuntHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedStuntHudState.cpp:199
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(const GuiEventTickerClearMessages &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<521>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetFreeburnChallengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentChallenge() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetAction(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetNumTargets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetTargetValue(int32_t  liTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetNumActions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::GetLanguageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetDescriptionStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetFreeburnChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:1990
		const ChallengeList * lpChallengeList;

	}
}

void BrnResource::ChallengeListEntry::GetChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeList::GetChallengeIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:202
		int32_t liIndex;

	}
}

void BrnResource::ChallengeList::GetChallengeData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:159
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::Construct(bool  lbLoopMessage, bool  lbTrainingMessage, bool  lbAllowDuplicates, bool  lbIsChallengeMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCompletedChallengesData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::GetLocalPlayerCompletionStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::IsBitSet(const int32_t  liIndex) {
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

void CgsLanguage::LanguageManager::GetLanguage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetTitleStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerCustomMessage,40>::SetRawEvent(const GuiEventTickerCustomMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<522>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::StartFreeburnChallengeTicker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:4089
		GuiEventTickerClearMessages lClearTicker;

		// BrnRaceMainHudState.cpp:4094
		const FreeburnChallengeManager * lpChallengeManager;

		// BrnRaceMainHudState.cpp:4095
		const ChallengeListEntry * lpChallenge;

		// BrnRaceMainHudState.cpp:4097
		char * lpcStringID;

		// BrnRaceMainHudState.cpp:4098
		int32_t liActionIndex;

		// BrnRaceMainHudState.cpp:4099
		int32_t liParamCount;

		// BrnRaceMainHudState.cpp:4100
		const ChallengeListEntryAction * lpAction;

		// BrnRaceMainHudState.cpp:4102
		char[4][64] lacParamBuffers;

		// BrnRaceMainHudState.cpp:4103
		CgsLanguage::LanguageManager::ParameterFormatType[4] laeParamTypes;

		// BrnRaceMainHudState.cpp:4137
		int32_t CurrentChallengeBitIndex;

		// BrnRaceMainHudState.cpp:4141
		GuiEventTickerCustomMessage lTickerMessage;

	}
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	FreeburnChallengeManager::GetCurrentChallenge(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiEventTickerCustomMessage::Construct(/* parameters */);
	CgsContainers::FastBitArray<2000>::IsBitSet(/* parameters */);
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::GetLocalPlayerCompletionStatus(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FreeburnChallengeManager::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiOverlayWaitFinishRequest::Construct(const char *  lpcOverlayId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:7266
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiOverlayWaitFinishRequest::Construct(CgsID  lOverlayIdHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiOverlayWaitFinishRequest,40>::SetRawEvent(const GuiOverlayWaitFinishRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<186>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::UpdatePermenant() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3577
		const CgsModule::Event * lpEvent;

		// BrnRaceMainHudState.cpp:3578
		int32_t liEventSize;

		// BrnRaceMainHudState.cpp:3579
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	FriendsListComponent::SetCanSendInvites(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:3693
		const GuiChallengeSelectedEvent * lpSelectEvent;

	}
	{
		// BrnRaceMainHudState.cpp:3726
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3626
		const GuiEventShowHideHud * lpHideHudMsg;

		{
			// BrnRaceMainHudState.cpp:3630
			GuiAudioEvent lAudioTrigger;

			OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEvent> >(/* parameters */);
		}
	}
	{
		// BrnRaceMainHudState.cpp:3737
		GuiEventTickerClearMessages lClearTicker;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3596
		const GuiPlayerCrashingStateChangeEvent * lpPlayerCrashingStateChangeEvent;

	}
	{
		// BrnRaceMainHudState.cpp:3682
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:3762
		GuiOverlayWaitFinishRequest lWaitFinishRequest;

		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		OutputGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> >(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3641
		const GuiChallengeStartEvent * lpChallengeEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::StartFreeburnChallengeNotActiveTicker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:4189
		GuiEventTickerClearMessages lClearTicker;

		// BrnRaceMainHudState.cpp:4198
		GuiEventTickerCustomMessage lTickerMessage;

	}
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	GuiEventTickerCustomMessage::Construct(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
}

void BrnGui::FBurnMainHudState::ToggleSatNavEventFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:2202
		GuiEventTickerClearMessages lClearTicker;

	}
	{
		// BrnFBurnMainHudState.cpp:2191
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:2209
		GuiEventTickerCustomMessage lTickerMessage;

		GuiEventTickerCustomMessage::Construct(/* parameters */);
		GuiEventTickerCustomMessage::AddString(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:2216
		GuiEventTickerCustomMessage lTickerMessage;

		OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
		GuiEventTickerCustomMessage::AddString(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerCustomMessage,40>::SetRawEvent(/* parameters */);
	}
	GuiEventTickerCustomMessage::Construct(/* parameters */);
}

void BrnGui::CrashedHudState::StartFreeburnChallengeTicker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:1182
		GuiEventTickerClearMessages lClearTicker;

		// BrnCrashedHudState.cpp:1187
		const FreeburnChallengeManager * lpChallengeManager;

		// BrnCrashedHudState.cpp:1188
		const ChallengeListEntry * lpChallenge;

		// BrnCrashedHudState.cpp:1190
		char * lpcStringID;

		// BrnCrashedHudState.cpp:1191
		int32_t liActionIndex;

		// BrnCrashedHudState.cpp:1192
		int32_t liParamCount;

		// BrnCrashedHudState.cpp:1193
		const ChallengeListEntryAction * lpAction;

		// BrnCrashedHudState.cpp:1195
		char[4][64] lacParamBuffers;

		// BrnCrashedHudState.cpp:1196
		CgsLanguage::LanguageManager::ParameterFormatType[4] laeParamTypes;

		// BrnCrashedHudState.cpp:1230
		int32_t CurrentChallengeBitIndex;

		// BrnCrashedHudState.cpp:1234
		GuiEventTickerCustomMessage lTickerMessage;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> >(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	FreeburnChallengeManager::GetCurrentChallenge(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiEventTickerCustomMessage::Construct(/* parameters */);
	CgsContainers::FastBitArray<2000>::IsBitSet(/* parameters */);
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::GetLocalPlayerCompletionStatus(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	BrnResource::ChallengeListEntry::GetTitleStringID(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashedHudState::UpdatePermenant() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:771
		const CgsModule::Event * lpEvent;

		// BrnCrashedHudState.cpp:772
		int32_t liEventSize;

		// BrnCrashedHudState.cpp:773
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnCrashedHudState.cpp:839
		const GuiChallengeStartEvent * lpChallengeEvent;

	}
	{
		// BrnCrashedHudState.cpp:880
		const GuiChallengeSelectedEvent * lpSelectEvent;

	}
	{
		// BrnCrashedHudState.cpp:822
		const GuiEventShowHideHud * lpHideHudMsg;

	}
	{
		// BrnCrashedHudState.cpp:784
		const GuiEventGameCompleted * lpCompleteEvent;

		// BrnCrashedHudState.cpp:786
		const BrnGui::GuiCache * lpCache;

		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:919
		GuiEventTickerClearMessages lClearTicker;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:799
		const GuiEventControllerInputDown * lpControllerEvent;

	}
	{
		// BrnCrashedHudState.cpp:910
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:810
		const GuiPlayerCrashingStateChangeEvent * lpPlayerCrashingStateChangeEvent;

	}
	{
		// BrnCrashedHudState.cpp:861
		GuiEventTickerClearMessages lClearTicker;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	}
	{
		// BrnCrashedHudState.cpp:870
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
}

void BrnGui::CrashedHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashedHudState.cpp:328
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::IsFriendsListShowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DistrictMarkerComponent::TransOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventInfoComponent::ResetTimeline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventShowHideSatNav::Construct(BrnGui::GuiEventShowHideSatNav::MapType  leMapType, bool  lbShow, float32_t  lfFadeTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,41>::SetRawEvent(const GuiEventShowHideSatNav &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<211>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:1695
		GuiEventShowHideSatNav lShowHideSatNav;

		// BrnRaceMainHudState.cpp:1727
		GuiEventShowHideBoostBar lShowHideBoostBar;

		// BrnRaceMainHudState.cpp:1732
		GuiEventFriendListShowing lFriendListShowing;

		// BrnRaceMainHudState.cpp:1736
		GuiEventTickerClearMessages lClearTicker;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	DistrictMarkerComponent::TransOut(/* parameters */);
	EventInfoComponent::ResetTimeline(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(/* parameters */);
	GuiEventShowHideSatNav::Construct(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> >(/* parameters */);
	ClearExpectedComponent(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:1651
		GuiOverlayWaitFinishRequest lWaitFinishRequest;

		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		OutputGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> >(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetMapIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetIconFilter(BrnGui::MapIconManager::IconFilterMode  leIconFilter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PlayerPositionTableComponent::SetCache(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.h:295
		int32_t liIndex;

	}
}

void BrnGui::PlayerPositionSingleComponent::SetCache(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::HasJustEnteredEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetEventDestinationDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiOverlayRequest::Construct(const char *  lpcOverlayId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:7062
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiOverlayRequest::Construct(CgsID  lOverlayIdHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiOverlayRequest::AddMessageParam(CgsGui::PopupParamTypes  leParamType, const char *  lpcParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:7096
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiOverlayRequest,40>::SetRawEvent(const GuiOverlayRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<182>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::UpdateSetupState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:1864
		const CgsModule::Event * lpEvent;

		// BrnRaceMainHudState.cpp:1865
		int32_t liEventSize;

		// BrnRaceMainHudState.cpp:1866
		int32_t liEventId;

		// BrnRaceMainHudState.cpp:1901
		BrnGameState::GameStateModuleIO::EGameModeType leGameModeType;

		// BrnRaceMainHudState.cpp:2564
		GuiEventShowHideBoostBar lShowHideBoostBar;

		// BrnRaceMainHudState.cpp:2610
		GuiEventShowHideAboveCar lShowHideAboveCar;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
		CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
		{
			// BrnRaceMainHudState.cpp:1878
			const GuiEventCache * lpCacheEvent;

		}
		GuiCache::GetGameMode(/* parameters */);
		{
			// BrnRaceMainHudState.cpp:1907
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnRaceMainHudState.cpp:2517
			GuiEventShowHideSatNav lShowHideSatNav;

			SatNavComponent::SetCachePointer(/* parameters */);
			OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
			GuiEventShowHideSatNav::Construct(/* parameters */);
			AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
			MapIconManager::SetIconFilter(/* parameters */);
		}
		GuiCache::GetHudMessageController(/* parameters */);
		InGameMessagesComponent::SetController(/* parameters */);
		GuiCache::GetHudMessageDirector(/* parameters */);
		InGameMessagesComponent::SetDirector(/* parameters */);
		InGameMessagesComponent::SetGameMode(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		PlayerPositionTableComponent::SetCache(/* parameters */);
		PlayerPositionSingleComponent::SetCache(/* parameters */);
		GuiCache::GetFreeburnChallengeManager(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideAboveCar>(/* parameters */);
		RoadRuleComponent::SetCachePointer(/* parameters */);
		{
			// BrnRaceMainHudState.cpp:2641
			BrnWorld::EDistrict leDistrict;

			// BrnRaceMainHudState.cpp:2649
			GuiOverlayRequest lOverlayRequest;

			GuiCache::GetEventDestinationDistrict(/* parameters */);
			GuiOverlayRequest::Construct(/* parameters */);
			GuiOverlayRequest::Construct(/* parameters */);
			GuiOverlayRequest::AddMessageParam(/* parameters */);
			GuiOverlayRequest::AddMessageParam(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			OutputGuiEvent<BrnGui::GuiOverlayRequest>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayRequest> >(/* parameters */);
			GuiCache::GetTime(/* parameters */);
		}
		{
			// BrnRaceMainHudState.cpp:2667
			const InGamePlayerStatusData * lpOpponentStatusData;

			GuiCache::GetRoadRuleShotOpponentARCI(/* parameters */);
			GuiCache::GetOnlinePlayerInfo(/* parameters */);
		}
	}
	{
		// BrnRaceMainHudState.cpp:2530
		GuiEventShowHideSatNav lShowHideSatNav;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1879
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetPlayerEngineState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,42>::SetRawEvent(const GuiEventShowHideSatNav &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGui::RaceMainHudState::RevealHud(bool  lbImmediate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3242
		GuiEventShowHideAboveCar lShowHideAboveCar;

		OutputViewState<BrnGui::GuiEventShowHideAboveCar>(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:3230
		GuiEventShowHideSatNav lShowHideSatNav;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3223
		GuiEventShowHideBoostBar lShowHideBoostBar;

		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<233>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<233>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::UpdateEventCountdown(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:3297
		const GuiEventUpdateEventCountdown * lpEventCountdown;

	}
	{
		// BrnRaceMainHudState.cpp:3410
		GuiAudioEvent lAudioTrigger;

		// BrnRaceMainHudState.cpp:3418
		GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted lEventStarted;

		GuiCache::GetTime(/* parameters */);
		GuiCache::GetTime(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventStarted>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3377
		GuiAudioEvent lAudioTrigger;

		GuiCache::GetTime(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3328
		GuiAudioEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3351
		GuiAudioEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:3289
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SatNavComponent::ClearIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::ClearIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOnlinePlayerCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<528>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<528>,40>::GuiNewBurnoutSkillzSelectNextCategory &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<528>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleModeRequest,40>::SetRawEvent(const GuiEventRoadRuleModeRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<324>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsStarted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<529>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<529>,40>::GuiFreeburnChallengeTargetSelectNextCategory &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<529>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<60>,41>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<60>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<61>,41>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<61>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::UpdateCurrentCrash(float32_t  lfCurrentCrash, int32_t  liMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsLocalPlayerHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.h:204
		GuiChallengeSelectedEvent lChallengeSelected;

		// BrnChallengeSelector.h:205
		const ChallengeListEntry * lpChallenge;

	}
}

void BrnResource::ChallengeListEntry::GetChallengeStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetActionType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(const GuiChallengeSelectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<558>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetDistrictEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldRegion::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldRegion::GetCounty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PositionIndicator::IsFirstFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::GetCurrentCrashScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::HasTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:697
		const CgsModule::Event * lpEvent;

		// BrnRaceMainHudState.cpp:698
		int32_t liEventSize;

		// BrnRaceMainHudState.cpp:699
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	SatNavComponent::ClearIconInfo(/* parameters */);
	MapIconManager::ClearIconInfo(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:953
		const GuiEventControllerInputReleased * lpReleasedEvent;

	}
	{
		// BrnRaceMainHudState.cpp:1003
		const GuiEventRoadRuleUpdateTargetScores * lpRRTargetUpdate;

	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:1579
		GuiAudioEventResults lAudioEventResults;

		GuiCache::GetTime(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioEventResults>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEventResults> >(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:1596
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
		FreeburnChallengeManager::IsStarted(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:967
		GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault lEvent;

		OutputViewState<CgsGui::GuiViewEventFontRotateDefault>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:886
		const GuiEventShowFreeburnChallenge * lpShowChallengeSelectorEvent;

		ChallengeSelector::Show(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1142
		const GuiPlayerEngineEvent * lpEngineChange;

		// BrnRaceMainHudState.cpp:1143
		GuiEventShowHideSatNav lShowHideSatNav;

	}
	{
		// BrnRaceMainHudState.cpp:816
		const GuiEventRaceDistanceRemaining * lpDistanceLeft;

	}
	{
		// BrnRaceMainHudState.cpp:1330
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1073
		const GuiEventRoadRuleChangeMode * lpRRChangeMode;

	}
	{
		// BrnRaceMainHudState.cpp:1488
		GuiEventChangeDistrict lDistrictChange;

		GuiCache::GetDistrictEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1425
		const GuiChallengeSelectedEvent * lpSelectEvent;

		{
			// BrnRaceMainHudState.cpp:1466
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnRaceMainHudState.cpp:777
		const GuiEventMiniMapSwitch * lpMiniMapSwitch;

		// BrnRaceMainHudState.cpp:780
		GuiEventShowHideSatNav lShowHideSatNav;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,41>::SetRawEvent(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1157
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1177
		GuiEventShowHideBoostBar lShowHideBoostBar;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1227
		const GuiEventSetBlackBars * lpGuiEventSetBlackBarsEvent;

		{
			// BrnRaceMainHudState.cpp:1230
			GuiEventShowHideSatNav lShowHideSatNav;

			{
				// BrnRaceMainHudState.cpp:1242
				GuiEventShowHideBoostBar lShowHideBoostBar;

				AnimationComponent::Run(/* parameters */);
				OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
				OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
				CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
				GuiEventShowHideSatNav::Construct(/* parameters */);
				AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
				OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
			}
		}
	}
	ChallengeSelector::Hide(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:993
		const GuiEventRoadRuleEnter * lpRREvent;

	}
	{
		// BrnRaceMainHudState.cpp:1052
		const GuiEventRoadRuleLeave * lpRREvent;

	}
	AnimationComponent::Run(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
	GuiEventShowHideSatNav::Construct(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:806
		const GuiEventOnlineTimeout * lpTimeoutEvent;

	}
	{
		// BrnRaceMainHudState.cpp:1599
		const ChallengeListEntryAction * lpAction;

		FreeburnChallengeManager::GetCurrentAction(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1287
		const GuiEventTogglePictureParadise * lpPPToggle;

	}
	{
		// BrnRaceMainHudState.cpp:1407
		const GuiChallengeEndEvent * lpChallengeEndEvent;

		ChallengeSelector::Hide(/* parameters */);
	}
	ChallengeSelector::Hide(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:1017
		const GuiEventRoadRuleBegin * lpRRBeginEvent;

	}
	{
		// BrnRaceMainHudState.cpp:743
		const GuiDirtyTrickNewEvent * lpDirtyTrickNewEvent;

	}
	{
		// BrnRaceMainHudState.cpp:974
		GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault lEvent;

		OutputViewState<CgsGui::GuiViewEventFontEffectRotateDefault>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1041
		const GuiEventRoadRuleUpdate * lpRREvent;

		RoadRuleComponent::UpdateCurrentCrash(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1338
		const GuiShowtimeBouncePrompt * lpPromptEvent;

	}
	{
		// BrnRaceMainHudState.cpp:1305
		const GuiPaybackReceivedEvent * lpPayback;

		AnimationComponent::Run(/* parameters */);
		{
			// BrnRaceMainHudState.cpp:1315
			GuiEventShowHideBoostBar lShowHideBoostBar;

			OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
			CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
		}
	}
	{
		// BrnRaceMainHudState.cpp:1346
		const GuiChallengeStartEvent * lpChallengeEvent;

	}
	{
		// BrnRaceMainHudState.cpp:859
		GuiEventTickerClearMessages lClearTicker;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:911
		const GuiEventControllerInputPressed * lpPressedEvent;

		// BrnRaceMainHudState.cpp:938
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:1083
		const GuiEventOnlineNumFriendsCount * lpFriendCount;

	}
	{
		// BrnRaceMainHudState.cpp:1260
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41>::SetRawEvent(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:923
		GuiEventWrapper<CgsGui::GuiEvent<528>,40>::GuiNewBurnoutSkillzSelectNextCategory lNextCategory;

		// BrnRaceMainHudState.cpp:926
		GuiEventRoadRuleModeRequest lRoadRuleOffRequest;

		OutputGuiEvent<BrnGui::GuiNewBurnoutSkillzSelectNextCategory>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventRoadRuleModeRequest>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleModeRequest,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:943
		GuiEventWrapper<CgsGui::GuiEvent<529>,40>::GuiFreeburnChallengeTargetSelectNextCategory lSelectNextEvent;

		OutputGuiEvent<BrnGui::GuiFreeburnChallengeTargetSelectNextCategory>(/* parameters */);
	}
}

void BrnGui::GuiCache::IsOnlineTimeoutActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineTimeoutComponent::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsLocalHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::SetChallengeList(const ChallengeList *  lpChallengeList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsNotActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetReplayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleDataRequest,40>::SetRawEvent(const GuiEventRoadRuleDataRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<325>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::SetIfInShowTime(bool  lbInShowTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRoadRuleActive(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:4051
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:4052
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<428>,40>::SetRawEvent(const GuiEventStartPursuitEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<428>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListComponent::SetGuiCachePointer(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsFriendsListChangeIconShowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DistrictMarkerComponent::SetOnline(bool  lbOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetAvailablePayback(const EActiveRaceCarIndex &  leOutVictimIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CompassComponent::SetGuiCachePointer(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::SetGuiCachePointer(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RaceMainHudState::UpdateWFInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMainHudState.cpp:2736
		bool lbReturnValue;

	}
	AnimationComponent::Run(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:2772
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
		FreeburnChallengeManager::IsActive(/* parameters */);
	}
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	ChallengeSelector::SetChallengeList(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:2788
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
		FreeburnChallengeManager::IsActive(/* parameters */);
	}
	GuiCache::SetHudMessagingActive(/* parameters */);
	FriendsListComponent::SetGuiCachePointer(/* parameters */);
	DistrictMarkerComponent::SetOnline(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:2888
		EActiveRaceCarIndex leVictimIndex;

		// BrnRaceMainHudState.cpp:2889
		BrnNetwork::EPaybackType lePaybackType;

		GuiCache::GetAvailablePayback(/* parameters */);
	}
	CompassComponent::SetGuiCachePointer(/* parameters */);
	ChallengeSelector::SetGuiCachePointer(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:2840
		GuiEventRoadRuleDataRequest lRRRequest;

		// BrnRaceMainHudState.cpp:2845
		BrnStreetData::ScoreType leScoreType;

		OutputGuiEvent<BrnGui::GuiEventRoadRuleDataRequest>(/* parameters */);
		GuiCache::GetGameMode(/* parameters */);
		BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		RoadRuleComponent::SetIfInShowTime(/* parameters */);
		BrnStreetData::operator++(/* parameters */);
		GuiCache::IsRoadRuleActive(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRaceMainHudState.cpp:2823
		GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted lEventStarted;

		OutputGuiEvent<BrnGui::GuiEventStarted>(/* parameters */);
	}
	OnlineTimeoutComponent::Show(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:2863
		GuiEventStartPursuitEvent lPursuitIntroMessage;

		OutputGuiEvent<BrnGui::GuiEventStartPursuitEvent>(/* parameters */);
	}
}

void BrnGui::RaceMainHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnRaceMainHudState.cpp:1837
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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

void BrnGui::GuiCache::IsInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::JunctionInfoComponent::IsShowingStartHint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DistrictMarkerComponent::SetHideCountyIcon(bool  lbHideCountyIcon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCurrentProgressionRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetProgressionRankCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::JunctionInfoComponent::SetGameComplete(bool  lbComplete) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetTrophyUnlockCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetTrophyUnlock(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::TrophyUnlockData::GetCarUnlockID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::TrophyUnlockData::GetUnlockType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType  leUnlockType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::CarData::WasUnlockSequenceAlreadyShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTrophyCarUnlock,40>::SetRawEvent(const GuiEventTrophyCarUnlock &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<370>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentLandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FBurnMainHudState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:499
		const CgsModule::Event * lpEvent;

		// BrnFBurnMainHudState.cpp:500
		int32_t liEventSize;

		// BrnFBurnMainHudState.cpp:501
		int32_t liEventId;

		// BrnFBurnMainHudState.cpp:1071
		bool lbInEventArea;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	SatNavComponent::ClearIconInfo(/* parameters */);
	MapIconManager::ClearIconInfo(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:848
		const GuiEventSetBlackBars * lpBlackBarEvent;

		{
			// BrnFBurnMainHudState.cpp:851
			GuiEventShowHideSatNav lShowHideSatNav;

		}
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	GuiCache::GetTimeStep(/* parameters */);
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:1119
		float32_t lfNextIntervalDuration;

		GuiCache::GetTime(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:1059
		GuiEventChangeDistrict lDistrictChange;

		GuiCache::GetDistrictEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:766
		const GuiPlayerEngineEvent * lpEngineChange;

		// BrnFBurnMainHudState.cpp:767
		GuiEventShowHideSatNav lShowHideSatNav;

	}
	{
		// BrnFBurnMainHudState.cpp:979
		const GuiEventProgressionProfileData * lpProfileEvent;

		// BrnFBurnMainHudState.cpp:980
		Profile * lpProfile;

		// BrnFBurnMainHudState.cpp:981
		const BrnProgression::ProgressionData * lpProgressionData;

		{
			// BrnFBurnMainHudState.cpp:995
			uint32_t luTrophyUnlockCount;

			// BrnFBurnMainHudState.cpp:996
			uint32_t luTrophyIndex;

			BrnProgression::ProgressionData::GetTrophyUnlockCount(/* parameters */);
			{
				// BrnFBurnMainHudState.cpp:1001
				const TrophyUnlockData * lpCurrentTrophyUnlockData;

				// BrnFBurnMainHudState.cpp:1004
				CgsID lUnlockCarID;

				BrnProgression::ProgressionData::GetTrophyUnlock(/* parameters */);
				BrnProgression::TrophyUnlockData::GetCarUnlockID(/* parameters */);
			}
		}
	}
	{
		// BrnFBurnMainHudState.cpp:719
		const GuiEventRoadRuleChangeMode * lpRRChangeMode;

	}
	{
		// BrnFBurnMainHudState.cpp:906
		const GuiEventTogglePictureParadise * lpPPToggle;

	}
	{
		// BrnFBurnMainHudState.cpp:551
		const GuiEventMiniMapSwitch * lpMiniMapSwitch;

		// BrnFBurnMainHudState.cpp:554
		GuiEventShowHideSatNav lShowHideSatNav;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:729
		const GuiEventOnlineNumFriendsCount * lpFriendCount;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:602
		GuiEventControllerInputPressed lInputEvent;

	}
	{
		// BrnFBurnMainHudState.cpp:689
		const GuiEventRoadRuleUpdate * lpRREvent;

		RoadRuleComponent::UpdateCurrentCrash(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:655
		const GuiEventRoadRuleBegin * lpRRBeginEvent;

	}
	{
		// BrnFBurnMainHudState.cpp:645
		const GuiEventRoadRuleEnter * lpRREvent;

	}
	{
		// BrnFBurnMainHudState.cpp:970
		const GuiEventDriveThruDiscovered * lpDriveThruDiscovered;

	}
	{
		// BrnFBurnMainHudState.cpp:949
		const GuiEventJunctionInfo * lpJunctionInfo;

	}
	{
		// BrnFBurnMainHudState.cpp:626
		GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault lEvent;

		OutputViewState<CgsGui::GuiViewEventFontEffectRotateDefault>(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:619
		GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault lEvent;

		OutputViewState<CgsGui::GuiViewEventFontRotateDefault>(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:700
		const GuiEventRoadRuleLeave * lpRREvent;

	}
	{
		// BrnFBurnMainHudState.cpp:665
		const GuiEventRoadRuleUpdateTargetScores * lpRRTargetUpdate;

	}
	{
		// BrnFBurnMainHudState.cpp:1009
		BrnProgression::TrophyUnlockData::UnlockType leUnlockType;

		// BrnFBurnMainHudState.cpp:1011
		CarData * lpCarData;

		BrnProgression::TrophyUnlockData::GetUnlockType(/* parameters */);
		BrnProgression::Profile::GetSeenTrophyUnlockSequence(/* parameters */);
		CgsContainers::BitArray<35u>::IsBitSet(/* parameters */);
		{
			// BrnFBurnMainHudState.cpp:1019
			GuiEventTrophyCarUnlock lTrophyCarUnlockEvent;

			OutputGuiEvent<BrnGui::GuiEventTrophyCarUnlock>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTrophyCarUnlock> >(/* parameters */);
		}
	}
	{
		// BrnFBurnMainHudState.cpp:880
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	DistrictMarkerComponent::SetHideCountyIcon(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:781
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
	JunctionInfoComponent::SetGameComplete(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:800
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:863
		GuiEventShowHideBoostBar lShowHideBoostBar;

		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	}
}

void BrnGui::FBurnMainHudState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1167
		GuiEventShowHideSatNav lShowHideSatNav;

		// BrnFBurnMainHudState.cpp:1186
		GuiEventShowHideBoostBar lShowHideBoostBar;

		// BrnFBurnMainHudState.cpp:1190
		GuiEventShowHideAboveCar lShowHideAboveCar;

		// BrnFBurnMainHudState.cpp:1195
		GuiEventFriendListShowing lFriendListShowing;

		// BrnFBurnMainHudState.cpp:1200
		GuiEventTickerClearMessages lClearTicker;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(/* parameters */);
	GuiEventShowHideSatNav::Construct(/* parameters */);
	DistrictMarkerComponent::TransOut(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	OutputViewState<BrnGui::GuiEventShowHideAboveCar>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideAboveCar,41>::SetRawEvent(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventFriendListShowing,40>::SetRawEvent(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> >(/* parameters */);
}

void BrnGui::FBurnMainHudState::UpdateWFInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFBurnMainHudState.cpp:1501
		bool lbReturnValue;

	}
	{
		// BrnFBurnMainHudState.cpp:1531
		GuiEventShowHideSatNav lShowHideSatNav;

		{
			// BrnFBurnMainHudState.cpp:1544
			GuiEventShowHideBoostBar lShowHideBoostBar;

			AnimationComponent::Run(/* parameters */);
			OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
			AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(/* parameters */);
			OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
			GuiEventShowHideSatNav::Construct(/* parameters */);
			AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
			OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
			AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		}
		GuiCache::SetHudMessagingActive(/* parameters */);
		FriendsListComponent::SetGuiCachePointer(/* parameters */);
		DistrictMarkerComponent::SetOnline(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:1516
		GuiEventRoadRuleDataRequest lRRRequest;

		// BrnFBurnMainHudState.cpp:1520
		BrnStreetData::ScoreType leScoreType;

		OutputGuiEvent<BrnGui::GuiEventRoadRuleDataRequest>(/* parameters */);
		BrnStreetData::operator++(/* parameters */);
		GuiCache::IsRoadRuleActive(/* parameters */);
	}
	{
		// BrnFBurnMainHudState.cpp:1571
		GuiEventShowHideBoostBar lShowHideBoostBar;

		OutputViewState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		GuiEventShowHideSatNav::Construct(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		OutputInternalState<BrnGui::GuiEventShowHideSatNav>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> >(/* parameters */);
		AnimationComponent::Run(/* parameters */);
		OutputViewState<BrnGui::GuiEventShowHideBoostBar>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FBurnMainHudState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnFBurnMainHudState.cpp:1275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

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

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

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

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

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

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

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

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

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

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

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

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

BrnGui::COPYRIGHT_DELAY_TIME = [64, 64, 0, 0];

BrnGui::ATTRACT_DELAY_TIME = [65, 200, 0, 0];

BrnGui::KF_HD_VIDEO_TIME_LENGTH = [64, 64, 0, 0];

BrnGui::KF_LOGO_VIDEO_TIME_LENGTH = [64, 198, 102, 102];

BrnGui::KF_SKIP_TIME_LENGTH = [64, 144, 0, 0];

BrnGui::KF_MAX_OVERLAY_TIME = [64, 0, 0, 0];

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

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

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

BrnGui::BootAttract::miNumEventsObserved;

BrnGui::BootLegal::miNumEventsObserved;

BrnGui::BootPreload::miNumEventsObserved;

BrnGui::BootVideos::miNumEventsObserved;

BrnGui::PostTitleScreenLoad::miNumEventsObserved;

BrnGui::BootProfile::miNumEventsObserved;

BrnGui::BootLoading::miNumEventsObserved;

BrnGui::RaceMainHudState::miNumEventsObserved;

BrnGui::FBurnMainHudState::miNumEventsObserved;

BrnGui::PausedHudState::miNumEventsObserved;

BrnGui::CrashedHudState::miNumEventsObserved;

BrnGui::CrashedStuntHudState::miNumEventsObserved;

BrnGui::IdleHudState::miNumEventsObserved;

