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

struct cParticleEmitter;

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

void BrnGameState::GameStateModuleIO::GameStats::SetValue(BrnGameState::GameStateModuleIO::GameStats::IntValueType  leIntValueType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::BitArray<35u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
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

void BrnGameState::AchievementManagerBase::OnFreeburnChallengeComplete(uint32_t  luNumberComplete) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnFreeburnChallengeBlockComplete(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetModuleStreamingComplete(bool  lbComplete) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5960
		int32_t liModuleIndex;

	}
}

void BrnGameState::FlybyManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsInShowtimeIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnBarrelRoll(int32_t  liNumBarrelRolls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnFlatSpin(float32_t  lfSpinAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetStartingGameAfterPlayerJoin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnOncoming(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::HandleWorldRegionChangeEvent(const WorldRegionChangeEvent *  lpWorldRegionChangeEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::GameParametersChanged(BrnGameState::GameStateModuleIO::EGameModeType  leGameMode, bool  lbIsRanked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::HandleImageFilesSavedEvent(const ImageFilesSavedEvent *  lpImageFilesSavedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1442
		int32_t liIndex;

	}
	{
		// BrnGameStateImageManagerBase.cpp:1450
		int32_t liLockedForSaveIndex;

		// BrnGameStateImageManagerBase.cpp:1451
		int32_t liSavedFileID;

	}
}

void BrnGameState::AchievementManagerBase::OnRivalAdded(int32_t  liNumberRivals) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnCaughtFever() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnCreatedCustomRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetShowtimeIntroSteering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsEventUnlockedAtCurrentRank(const BrnProgression::RaceEventData *  lpEventData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetLandmarkCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetOnlineMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::DebugMemoryInit(BrnGameState::GameStateModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsStreamingCompleteForAllModules() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5937
		int32_t liModuleIndex;

	}
}

void BrnGameState::AchievementManagerBase::OnFindAllEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GetModeDebugName(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::Construct(BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::Construct(BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::OnRegister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::FindRoadNameIndexFromId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:677
		int32_t liRoadIndex;

	}
}

void BrnGameState::GameStateModule::ToggleShowtimeBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::ToggleShowtimeCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::ToggleShowtimeBehaviour(/* parameters */);
}

void BrnGameState::GameStateDebugComponent::PlayTrainingMessageCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:707
		GameStateDebugComponent * lpDebugComponent;

	}
}

void BrnGameState::ResetPlayerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::OnRegister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::GameStateImageManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:195
		int32_t liIndex;

	}
}

void BrnGameState::GameStateImageManagerBase::IsImageSaveSlotAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::GetImageGalleryTypeFromImageType(BrnGameState::GameStateModuleIO::EImageType  leImageType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1528
		BrnGameState::GameStateModuleIO::EImageGalleryType leImageGalleryType;

	}
}

void BrnGameState::GameStateImageManagerBase::ProcessShowGamerCardRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::GetImageGalleryMugshot(int32_t  liSlotIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::OfflineFlybyManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FlybyManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FlybyManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FlybyManager::GetGameStateModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetLocalPlayerNetworkID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::GetLocalPlayerNetworkID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	FlybyManager::GetGameStateModule(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleInGamePlayerStatusInterface.h:283
		int32_t liIndex;

	}
}

void BrnGameState::OnlineFlybyManager::GetRivalName(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(/* parameters */);
}

void BrnGameState::FlybyManager::GetScoringSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::CalculatePointsLeaderRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:688
		RoadRulesRecvData::NetworkPlayerID lPointsLeaderID;

		FlybyManager::GetScoringSystem(/* parameters */);
	}
}

void BrnGameState::OfflineFlybyManager::CalculateOfflineRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FlybyManager::GetFlybyData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OfflineFlybyManager::CalculateFlybyRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OfflineFlybyManager::CalculateNumberOfCarsInFlyby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<46u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<46u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::AchievementManagerBase::OnFindAllCarParks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerCrashesRemaining() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnBodyShop(BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnCollectAllStunts(BrnGameState::StuntElementType  leStuntType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllJumps(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:113
		StuntManagerDebugComponent * lpStuntManagerDebugComponent;

	}
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllSmashes(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:131
		StuntManagerDebugComponent * lpStuntManagerDebugComponent;

	}
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllStunt(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:148
		StuntManagerDebugComponent * lpStuntManagerDebugComponent;

	}
}

void BrnGameState::StuntManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::Construct(TakedownManager *  lpTakedownManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManager::RaceCarData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.h:263
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
}

void BrnGameState::TakedownManagerDebugComponent::ForceTakedown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManagerDebugComponent.cpp:246
		BrnGameState::TakedownManager::RaceCarData * lpRaceCarData;

	}
	TakedownManager::RaceCarData::Clear(/* parameters */);
}

void BrnGameState::TakedownManagerDebugComponent::ForceTakedownCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::Construct(CgsID  lRivalId, CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::Construct(uint32_t  luEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnLicenseUpgrade(uint8_t  liNewLicenseRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnFindAllDriveThrus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnGameCompletion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnDrivenDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnMugshotAdded(uint32_t  luTotalNumMugshots) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnMugshotSent(int32_t  liNumMugshotsSent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumMugshotsSent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnOnlineRaceComplete(int32_t  liNumPlayers, bool  lbLocalPlayerWon, int32_t  liTotalOnlineRacesWon, int32_t  liTotalOnlineRacesDone) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumOnlineRacesWon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumOnlineRacesDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::SetFlags(uint16_t  luFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnProgression::RivalData::OnEventFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<uint32_t, uint32_t>(const uint32_t &  lDest, const const uint32_t &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<float32_t, float32_t>(const float32_t &  lDest, const const float32_t &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int8_t, int8_t>(const int8_t &  lDest, const const int8_t &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int32_t [17], int32_t [17]>(const int32_t &[17]  lDest, const int32_t &[17]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int32_t, int32_t>(const int32_t &  lDest, const const int32_t &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int32_t [10], int32_t [10]>(const int32_t &[10]  lDest, const int32_t &[10]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<bool, bool>(const bool &  lDest, const const bool &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Set<CgsID, 11u>, CgsContainers::Set<CgsID, 11u> >(const Set<CgsID,11u> &  lDest, const const Set<CgsID,11u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsSystem::DateAndTime, CgsSystem::DateAndTime>(const DateAndTime &  lDest, const const DateAndTime &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetScoringSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnGameState::NetworkRoundManager *  lpNetworkRoundManager, BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGameState::RichPresenceManagerPS3::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnGameState::NetworkRoundManager *  lpNetworkRoundManager, BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::SetRankedParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:338
		bool lbChanged;

	}
}

void BrnGameState::NetworkRoundManager::GetCurrentRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::GetTotalRounds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::SetRoundParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:300
		bool lbChanged;

		// BrnGameStateRichPresenceManagerBase.cpp:301
		const int32_t liCurrentRound;

		// BrnGameStateRichPresenceManagerBase.cpp:302
		const int32_t liTotalRounds;

	}
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	NetworkRoundManager::GetTotalRounds(/* parameters */);
}

void BrnGameState::RichPresenceManagerBase::EGameModeTypeToERichPresenceState(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:457
		BrnGameState::RichPresenceManagerBase::ERichPresenceStates lePresenceStatus;

	}
}

void BrnGameState::RichPresenceManagerBase::SetNumberPlayers(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::Construct(BrnProgression::ProgressionManager *  lpProgressionManager, StreetManager *  lpStreetManager, BrnGameState::ScoringSystem *  lpScoringSystem, BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpPreWorldInputBuffer, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnSetRoadRule(BrnStreetData::ScoreType  leScoreType, CgsID  lStreetID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnSetAllRoadRules(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnShutdown(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnShutdown(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnDrivenDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnStuntRunMultiplier(int32_t  liMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnShowTimeMultiplier(int32_t  liMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnShowTimeMultiplier(int32_t  liMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnPowerParking(int32_t  liScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnPowerParking(int32_t  liScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnBoostChain(int32_t  liChainCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnBoostChain(int32_t  liChainCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnTakedownChain(int32_t  liChainCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnTakedownChain(int32_t  liChainCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetRichPresenceState(BrnGameState::RichPresenceManagerBase::ERichPresenceStates  leRichPresenceState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetCurrentRound(int32_t  liCurrentRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetTotalRounds(int32_t  liTotalRounds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetCurrentPosition(int32_t  liFinishPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetRankedStatus(BrnGameState::RichPresenceManagerBase::EGameRankedType  leRankedType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetLobbyType(BrnGameState::RichPresenceManagerBase::ERichPresenceStates  leNewLobbyState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SendNewRichPresenceStringToNetwork() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::AddParameter(const char *  lpcParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::AddParameter(int32_t  liParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerPS3::SetDistrict(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnStuntRunMultiplier(int32_t  liMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnFreeburnSkillzTotalChange(int32_t  liNumberPlayers, float32_t  lfNewTotal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<92u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<92u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsInput::InputIO::PlayJoltEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseRumbleEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseInputEvent::Construct(int32_t  liPlayer, int32_t  liPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEventSafe(const const PlayJoltEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::AchievementManagerPS3::Construct(BrnProgression::ProgressionManager *  lpProgression, StreetManager *  lpStreetManager, BrnGameState::ScoringSystem *  lpScoringSystem, BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsContainers::BitArray<30u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<6u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void BrnProgression::Profile::AddDistanceDrivenOnline(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddDistanceDrivenOffline(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetDistanceDrivenOffline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::Construct(BrnGameState::StuntManager *  lpStuntManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:54
		int32_t liStuntTypeIndex;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
}

void BrnProgression::ProgressionManager::GetProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetTotalTakedownCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetModeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCurrentGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetRoadRageScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::GetNumTakedownsAchieved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetRoadRagePlayerCrashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnTakedown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateAchievementManagerBase.cpp:184
		const BrnProgression::Profile * lpProfile;

	}
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:94
		int32_t liStuntTypeIndex;

	}
}

void BrnTrigger::GenericRegion::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsInGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetCurrentCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::IsFlagSet(BrnProgression::ProfileEvent::Flags  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::EnableFlags(uint16_t  luFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::DiscoverAllEventsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::SetUnlockType(BrnProgression::CarData::UnlockType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::SetUnlockDeformationAmount(float32_t  lfAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::SetUnlockSequenceAlreadyShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::SetState(BrnProgression::RivalData::EState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::RequestUpdateRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::LockUnlockAllRivals(bool  lbLock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1130
		Profile * lpProfile;

		ProgressionManager::GetProfile(/* parameters */);
	}
	ProgressionManager::RequestUpdateRivals(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::UnlockAllRivalsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::LockAllRivalsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::GetRivalId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::OnLeaveOnline(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnProgression::ProgressionManager::RequestUpdateRivals(/* parameters */);
}

void BrnProgression::ProgressionManager::RequestMedalUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::ClearMedalsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::GetLiveRevengeRelationship(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(/* parameters */);
}

void BrnGameState::OnlineFlybyManager::GetPlayerStats(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(/* parameters */);
}

void BrnGameState::OnlineFlybyManager::GetNoRivalryStat(BrnGameState::FlybyManager::RivalRating *  lpRating, BrnGameState::OnlineFlybyManager::ENoRivalryCompare  leCompare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:1147
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

	}
}

void BrnGameState::OnlineFlybyManager::CalculateMarkedManRivalryRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:653
		const InGamePlayerStatusData * lpPlayerStatusData;

	}
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByPlayerID(/* parameters */);
}

void BrnGameState::ModeManager::IsInPostEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetCurrentState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetOverallStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::GetOngoingStat(BrnGameState::FlybyManager::RivalRating *  lpRating, BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare  leCompare, BrnGameState::OnlineFlybyManager::EMessageStyle  leStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:974
		const LiveRevengeRelationship * lpRelationship;

		// BrnGameStateOnlineFlybyManager.cpp:975
		const CommonRelationshipStats * lpCommonRelationship;

	}
	{
		// BrnGameStateOnlineFlybyManager.cpp:1026
		int32_t liTotalPaybacksDealt;

		// BrnGameStateOnlineFlybyManager.cpp:1027
		int32_t liTotalPaybacksSuccessful;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetLastChangedTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::CalculateNewOrOngoingRivalryRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:537
		const LiveRevengeRelationship * lpRelationship;

		// BrnGameStateOnlineFlybyManager.cpp:551
		DateAndTime lDateAndTime;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetTotalEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::GetNewRivalryStat(BrnGameState::FlybyManager::RivalRating *  lpRating, BrnGameState::OnlineFlybyManager::ENewRivalryCompare  leCompare, BrnGameState::OnlineFlybyManager::EMessageStyle  leStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:1060
		const LiveRevengeRelationship * lpRelationship;

		// BrnGameStateOnlineFlybyManager.cpp:1061
		const CommonRelationshipStats * lpCommonRelationship;

	}
	BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForLocalPlayer(/* parameters */);
	BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForRival(/* parameters */);
	BrnNetwork::LiveRevengeRelationship::GetTotalEvents(/* parameters */);
}

void BrnGameState::TrainingManager::ResetStateTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:75
		int32_t liStuntTypeIndex;

	}
}

void CgsModule::EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Construct(PlayJoltEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::SetEventPointer(PlayJoltEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Construct(PlayRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::SetEventPointer(PlayRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Construct(ChangeVolumeRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::SetEventPointer(ChangeVolumeRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Construct(StopRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::SetEventPointer(StopRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::ClearFlags(uint16_t  luFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetTimeInFreeBurn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetLastActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerEngineState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(LightTriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.h:302
		uint32_t luHull;

		// BrnTrafficData.h:305
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficData.h:308
		uint32_t luLightTrigger;

		// BrnTrafficData.h:312
		const BrnTraffic::JunctionLogicBox * lpJunction;

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

void BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	}
	BrnTraffic::LightTriggerId::GetLightTriggerIndex(/* parameters */);
}

void BrnTraffic::TrafficData::GetStartDataForTrafficLight(LightTriggerId  lTriggerId, bool  lbOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.h:267
		uint32_t luHull;

		// BrnTrafficData.h:270
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficData.h:273
		uint32_t luLightTrigger;

		// BrnTrafficData.h:277
		const BrnTraffic::JunctionLogicBox * lpJunction;

		// BrnTrafficData.h:280
		const LightTriggerStartData * lpStartData;

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

void BrnTraffic::TrafficData::GetStartDataForTrafficLight(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	}
	BrnTraffic::LightTriggerId::GetLightTriggerIndex(/* parameters */);
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
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

void BrnGameState::CombinedStringID::CombinedStringID(char *  A, char *  B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CombinedStringID::CombinedStringID() {
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
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	BrnGameState::CombinedStringID::CombinedStringID(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void BrnProgression::ProgressionManager::GetStreetManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnSetRoadRule(BrnStreetData::ScoreType  leScoreType, CgsID  lStreetID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Race::GetNumLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Race::GetLandmarkIndex(uint8_t  luLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(int32_t  liRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerData.h:613
		const TriggerRegion * lpTriggerRegion;

	}
}

void BrnTrigger::TriggerData::GetRegion(int32_t  liRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerRegion::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerRegion::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::SavedRace::AddLandmarkCgsId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::Construct(GameStateToGuiNewDirtyTrick *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::SetEventPointer(GameStateToGuiNewDirtyTrick *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::Construct(GameStateToGuiTriggeredDirtyTrick *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::SetEventPointer(GameStateToGuiTriggeredDirtyTrick *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::Construct(GameStateToGuiEndingDirtyTrick *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::SetEventPointer(GameStateToGuiEndingDirtyTrick *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::Construct(GameStateToGuiOvertakeEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::SetEventPointer(GameStateToGuiOvertakeEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::Construct(GameStateToGuiFinishedRaceEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::SetEventPointer(GameStateToGuiFinishedRaceEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::Construct(GameStateToGuiTookLeadEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::SetEventPointer(GameStateToGuiTookLeadEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::Construct(GameStateToGuiTookLastEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::SetEventPointer(GameStateToGuiTookLastEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::Construct(GameStateToGuiOnTailEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::SetEventPointer(GameStateToGuiOnTailEvent *  lpEventBuffer) {
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

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::operator=(const const TimerStatusInterface &  lOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::operator=(const const TimerStatus &  lOtherTimer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGameState::OnlineFlybyManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<5>::UnSetAll(/* parameters */);
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

void BrnGameState::FlybyManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

void CgsContainers::FastBitArray<5>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<5>::Construct(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetStuntElementCount(BrnGameState::StuntElementType  leStuntElementType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnCollectStunt(BrnGameState::StuntElementType  leStuntType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateAchievementManagerBase.cpp:486
		int32_t liStuntCount;

		BrnProgression::Profile::GetStuntElementCount(/* parameters */);
	}
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
}

void BrnGameState::AchievementManagerPS3::OnCollectStunt(BrnGameState::StuntElementType  leStuntType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateAchievementManagerPS3.cpp:462
		int32_t liStuntCount;

		BrnProgression::Profile::GetStuntElementCount(/* parameters */);
	}
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
}

void CgsSystem::TimerStatus::GetFrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumAchievementsWritten() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::CountSetBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:824
		uint32_t luSetBits;

		{
			// CgsBitArray.h:826
			uint64_t luIndex;

			{
				// CgsBitArray.h:828
				uint64_t luCount;

			}
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

void BrnProgression::Profile::ClearTrainingFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::ClearTrainingFlagsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<300000u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<300000u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::Set<CgsID,512u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,2000u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,5u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,5u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::SetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EImageGalleryType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:240
		BrnGameState::GameStateModuleIO::EImageGalleryType leOldEnumIndex;

	}
}

void CgsContainers::Array<BrnProgression::Race,64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::ClearRankUpCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<2u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::OfflineFlybyManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::OfflineFlybyManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<3u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::Construct(BrnProgression::ProgressionManager *  lpProgression) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:64
		int32_t liIndex;

	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Clear(/* parameters */);
	CgsContainers::BitArray<3u>::UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<3u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::GameStateImageManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:111
		int32_t liIndex;

		CgsContainers::BitArray<3u>::UnSetAll(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Clear(/* parameters */);
}

void CgsContainers::BitArray<3u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<46u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<46u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<46u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGameState::ModeManager::IsOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehiclePhysics::SlamEffect::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::GetLife() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsObjectPool.h:176
		int32_t liI;

	}
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<512,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void CgsModule::EventReceiverQueue<512,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<512,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<512,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteClear<BrnProgression::Profile>(const Profile &  lDest, uint8_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<char [32], char [32]>(const char &[32]  lDest, const char &[32]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<rw::math::vpu::Vector3, rw::math::vpu::Vector3>(const Vector3 &  lDest, const const rw::math::vpu::Vector3 &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsID, CgsID>(const CgsID &  lDest, const const CgsID &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int32_t [13], int32_t [13]>(const int32_t &[13]  lDest, const int32_t &[13]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteClear<int32_t [10]>(const int32_t &[10]  lDest, uint8_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnProgression::CarData [512], BrnProgression_2007_10_04::CarData [512]>(const CarData &[512]  lDest, const CarData &[512]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnProgression::RivalData [64], BrnProgression_2007_10_04::RivalData [64]>(const RivalData &[64]  lDest, const RivalData &[64]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnProgression::ProfileEvent [175], BrnProgression_2007_10_04::ProfileEvent [175]>(const ProfileEvent &[175]  lDest, const ProfileEvent &[175]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Set<CgsID, 512u> [3], CgsContainers::Set<CgsID, 512u> [3]>(const Set<CgsID,512u> &[3]  lDest, const Set<CgsID,512u> &[3]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Set<CgsID, 5u>, CgsContainers::Set<CgsID, 5u> >(const Set<CgsID,5u> &  lDest, const const Set<CgsID,5u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Set<CgsID, 14u>, CgsContainers::Set<CgsID, 14u> >(const Set<CgsID,14u> &  lDest, const const Set<CgsID,14u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Array<CgsID, 2000u>, CgsContainers::Array<CgsID, 2000u> >(const Array<CgsID,2000u> &  lDest, const const Array<CgsID,2000u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnPhysics::Props::HitPropsBitArray, BrnPhysics::Props::HitPropsBitArray>(const Profile::HitPropsBitArray &  lDest, const const Profile::HitPropsBitArray &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<int16_t [3][5], int16_t [3][5]>(const int16_t &[3][5]  lDest, const int16_t &[3][5]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnStreetData::ChallengeHighScoreEntry [64], BrnStreetData::ChallengeHighScoreEntry [64]>(const ChallengeHighScoreEntry &[64]  lDest, const ChallengeHighScoreEntry &[64]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnStreetData::ChallengePlayerScoreEntry [64], BrnStreetData::ChallengePlayerScoreEntry [64]>(const ChallengePlayerScoreEntry &[64]  lDest, const ChallengePlayerScoreEntry &[64]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsNetwork::NetworkTexture, CgsNetwork::NetworkTexture>(const NetworkTexture &  lDest, const const NetworkTexture &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<char [9600], char [9600]>(const char &[9600]  lDest, const char &[9600]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::Array<BrnProgression::MugshotInfo, 30u> [5], CgsContainers::Array<BrnProgression_2007_10_04::MugshotInfo, 30u> [5]>(const Array<BrnProgression::MugshotInfo,30u> &[5]  lDest, const Array<BrnProgression_2007_10_04::MugshotInfo,30u> &[5]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::BitArray<30u> [5], CgsContainers::BitArray<30u> [5]>(const BitArray<30u> &[5]  lDest, const BitArray<30u> &[5]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<float32_t [3], float32_t [3]>(const float32_t &[3]  lDest, const float32_t &[3]  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<BrnResource::ECarType, BrnResource::ECarType>(const BrnResource::ECarType &  lDest, const const BrnResource::ECarType &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::BitArray<256u>, CgsContainers::BitArray<256u> >(const BitArray<256u> &  lDest, const const BitArray<256u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteCopy<CgsContainers::BitArray<35u>, CgsContainers::BitArray<35u> >(const BitArray<35u> &  lDest, const const BitArray<35u> &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteClear<CgsContainers::BitArray<60u> >(const BitArray<60u> &  lDest, uint8_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ByteClear<bool>(const bool &  lDest, uint8_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,2000u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,2000u>::FindFirstInstanceOf(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsNetwork::NetworkTexture::ClearPixels() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetTextureSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:158
		int32_t liIndex;

		CgsNetwork::NetworkTexture::ClearPixels(/* parameters */);
	}
}

void BrnGameState::ModeManager::IsShowtimeGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::DriveThruManager::DriveThroughsCanNowOpenAgain() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::OnModeEnd(bool  lbResetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsShowtimeGameMode(/* parameters */);
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	DriveThruManager::DriveThroughsCanNowOpenAgain(/* parameters */);
	CgsContainers::Stack<uint16_t,8>::Clear(/* parameters */);
}

void rw::math::vpu::RotateAroundXAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:692
		VecFloat s;

		// matrix44affine_operation_inline.h:692
		VecFloat c;

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

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundYAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:714
		VecFloat s;

		// matrix44affine_operation_inline.h:714
		VecFloat c;

	}
}

void rw::math::vpu::RotateAroundZAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:737
		VecFloat s;

		// matrix44affine_operation_inline.h:737
		VecFloat c;

	}
}

void BrnTrigger::BoxRegion::ComputeTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnRegion.h:374
	Matrix44Affine & lMatrix;

	{
		// BrnRegion.h:374
		Matrix44Affine lMatrix;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	rw::math::vpu::RotateAroundXAxis(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::RotateAroundYAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

void BrnTrigger::BoxRegion::ComputeDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRegion.h:360
		Matrix44Affine lMatrix;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::RotateAroundXAxis(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::RotateAroundYAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

void BrnGameState::StuntManager::GetMaxStuntElementCountByCounty(BrnGameState::StuntElementType  leType, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetStuntElementCountByCounty(BrnGameState::StuntElementType  leStuntElementType, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetStuntElementCountByCounty(BrnGameState::StuntElementType  leStuntElementType, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::DrawStuntBreakdown(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:613
		const float32_t KF_DEFAULT_X;

		// BrnGameStateDebugComponent.cpp:614
		const float32_t KF_DEFAULT_Y;

		// BrnGameStateDebugComponent.cpp:615
		const float32_t KF_SPACING_Y_SMALL;

		// BrnGameStateDebugComponent.cpp:616
		const float32_t KF_SPACING_Y_LARGE;

		// BrnGameStateDebugComponent.cpp:618
		float32_t lfTextX;

		// BrnGameStateDebugComponent.cpp:619
		float32_t lfTextY;

		// BrnGameStateDebugComponent.cpp:621
		int32_t liCountyIndex;

		{
			// BrnGameStateDebugComponent.cpp:625
			char[90] lacBuff;

			// BrnGameStateDebugComponent.cpp:626
			Vector2 lTextPos;

			rw::math::vpu::Vector2::Set(/* parameters */);
			StuntManager::GetMaxStuntElementCountByCounty(/* parameters */);
			BrnProgression::ProgressionManager::GetStuntElementCountByCounty(/* parameters */);
			BrnProgression::Profile::GetStuntElementCountByCounty(/* parameters */);
			rw::math::vpu::Vector2::Set(/* parameters */);
			StuntManager::GetMaxStuntElementCountByCounty(/* parameters */);
			BrnProgression::ProgressionManager::GetStuntElementCountByCounty(/* parameters */);
			BrnProgression::Profile::GetStuntElementCountByCounty(/* parameters */);
			rw::math::vpu::Vector2::Set(/* parameters */);
			StuntManager::GetMaxStuntElementCountByCounty(/* parameters */);
			BrnProgression::ProgressionManager::GetStuntElementCountByCounty(/* parameters */);
			BrnProgression::Profile::GetStuntElementCountByCounty(/* parameters */);
			rw::math::vpu::Vector2::Set(/* parameters */);
		}
	}
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::operator++(const BrnPhysics::Vehicle::EVehicleDrivenWheel &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleVehiclePhysics.h:379
		BrnPhysics::Vehicle::EVehicleDrivenWheel leOldEnumIndex;

	}
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::ScoringSystem::GetCarData(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2917
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

void BrnGameState::CarData::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnGameState::CarData::GetActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6548
		const CarData * lpData;

		ScoringSystem::GetCarData(/* parameters */);
	}
	ModeManager::GetScoringSystem(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	CarData::GetActiveRaceCarIndex(/* parameters */);
}

void BrnGameState::ScoringSystem::GetCarData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2897
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

void BrnGameState::GameStateModule::GetNetworkPlayerID(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6569
		CarData * lpData;

		ScoringSystem::GetCarData(/* parameters */);
	}
	ModeManager::GetScoringSystem(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
}

void BrnGameState::ScoringSystem::GetNumberOfNetworkPlayersStillConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3461
		int32_t liNumberOfPlayers;

		// BrnScoringSystem.h:3462
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::CarData::GetScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::CalculateNumberOfCarsInFlyby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:464
		int32_t liCarsInGame;

		FlybyManager::GetScoringSystem(/* parameters */);
	}
	FlybyManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetNumberOfNetworkPlayersStillConnected(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

void BrnGameState::OnlineFlybyManager::CalculateDisconnectRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	FlybyManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
}

void BrnTrigger::TriggerRegion::GetBoxRegion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsWorld::WorldMap2D::GetValue(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnWorld::WorldRegion::Construct(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::GetTriggerWorldRegion(const GenericRegion *  lpGenericRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnStuntManagerDebugComponent.cpp:288
	WorldRegion lWorldRegion;

	{
		// BrnStuntManagerDebugComponent.cpp:288
		WorldRegion lWorldRegion;

		// BrnStuntManagerDebugComponent.cpp:289
		uint8_t lValue;

		CgsWorld::WorldMap2D::GetValue(/* parameters */);
	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	BrnWorld::WorldRegion::Construct(/* parameters */);
	BrnWorld::WorldRegion::Construct(/* parameters */);
}

void BrnGameState::FlybyManager::GetRandom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomInt(int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:322
		uint32_t luMod;

		// CgsRandom.h:327
		int32_t liResult;

	}
}

void BrnGameState::OnlineFlybyManager::CalculateNoRivalryRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	FlybyManager::GetRandom(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
}

void BrnNetwork::LiveRevengeRelationship::GetTotalTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::CalculateRivalryRating(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:580
		const LiveRevengeRelationship * lpRelationship;

	}
	BrnNetwork::LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
}

void BrnProgression::ProgressionManager::AreRoadRulesAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetMedalCountFromTheStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetNumberOfParCrashRoadRulesRuledByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetNumberOfParTimeRoadRulesRuledByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsStartRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsStopRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsMultiplierRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsAnythingPaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsChallengeActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManager::IsChallengeActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::IsInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsOnlineFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ShouldStartShowtimeMode(float32_t  lfTimeStep, bool  lbPlayerRequestedCrashMode, TimerRequests *  lpRequests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnProgression::ProgressionManager::AreRoadRulesAvailable(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	ModeManager::IsInProgress(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	ModeManager::IsShowtimeGameMode(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerWrecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ShouldAllowTimedTutorialTips() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
}

void CgsDev::StrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(char  lcChar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::DrawTextWithOffsets(CgsDev::Debug2DImmediateRender *  lpDisplay, CgsDev::StrStream *  lpStream, float32_t  lfX, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:707
		char[4096] lacBuffer;

		// BrnProgressionDebugComponent.cpp:708
		CgsDev::StrStream lStream;

		// BrnProgressionDebugComponent.cpp:709
		int32_t liCharIndex;

		// BrnProgressionDebugComponent.cpp:710
		float32_t lfYOffset;

		// BrnProgressionDebugComponent.cpp:711
		int32_t liCharCount;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:715
		char lcChar;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::DrawText(CgsDev::Debug2DImmediateRender *  lpDisplay, CgsDev::StrStream *  lpStream) {
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

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::UpdateTakedownEvents(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, const InputBuffer::TakedownEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:247
		TakedownEvent lTakedownEvent;

		// BrnGameStateImageManagerBase.cpp:248
		int32_t liIndex;

	}
	{
		// BrnGameStateImageManagerBase.cpp:252
		EActiveRaceCarIndex leTakedownAggressorRaceCarIndex;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManager::IsPlayerInTrafficLightRegion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsSimPaused(bool  lbRemoveFlagsForOnline, bool  lbStalled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:1134
		uint32_t luPauseFlags;

	}
}

void BrnGameState::GameStateModule::ShouldStartSnapRaceMode(bool  lbPlayerRequestedRaceStart, float32_t  lfTimeStep, BrnGameState::EGameModeStartMechanism *  lpOutStartMechanism) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4895
		const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpPlayerRaceCarState;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	IsSimPaused(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyInterface::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetRaceCarContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetRaceCarContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetRaceCarContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetRaceCarContactRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetRunDataWithEntityID(EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnContactSpyRunList.h:414
		int32_t liRunIndexLoop;

		// BrnContactSpyRunList.h:415
		const ContactSpyRunData * lpRunData;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetRunData(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyRunData::GetStartIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetBaseContact(int32_t  liEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetLength() {
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

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::CompGreaterThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const VecFloat  trueValue, const VecFloat  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:350
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnPhysics::ContactSpy::ContactSpyRunData::GetRunLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TakedownManagerDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManagerDebugComponent.cpp:159
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTakedownManagerDebugComponent.cpp:161
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveCarInterface;

		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		{
			// BrnTakedownManagerDebugComponent.cpp:168
			const RaceCarState * lpRaceCarState;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::IsActive(/* parameters */);
			rw::math::vpu::operator><VectorAxisW>(/* parameters */);
		}
		operator++(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	{
		// BrnTakedownManagerDebugComponent.cpp:184
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveCarInterface;

		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		{
			// BrnTakedownManagerDebugComponent.cpp:189
			BrnGameState::TakedownManager::RaceCarData * lpPlayerRaceCarData;

			// BrnTakedownManagerDebugComponent.cpp:190
			EActiveRaceCarIndex leActiveRaceCarIndex;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			operator++(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		}
	}
	BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::GetLife(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnGameState::TakedownManagerDebugComponent::RecordTakedown(EActiveRaceCarIndex  leAggressorIndex, EActiveRaceCarIndex  leVictimIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManagerDebugComponent.cpp:218
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveCarInterface;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
	{
		// BrnTakedownManagerDebugComponent.cpp:227
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
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

void CgsModule::VariableEventQueue<1024,16>::Clear() {
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

void BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Clear() {
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICarOutputInterface.h:111
		int32_t liAICarIndex;

	}
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

void BrnGameState::RichPresenceManagerBase::ChangeDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:951
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::GetNumberOfTakedownsAgainst(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2417
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetCarData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2877
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

void BrnGameState::ScoringSystem::GetStuntScorer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::GetCurrentScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerBase::OnEventWin(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetNumberOfTakedownsAgainst(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::ScoringSystem::GetNumberOfActiveCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCarRacePosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2057
		const CarData * lpCarData;

	}
}

void BrnGameState::RichPresenceManagerBase::SetPositionParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:271
		const int32_t liNewPosition;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		ScoringSystem::GetCarRacePosition(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::RichPresenceManagerBase::SetGameTypeParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:217
		bool lbChanged;

	}
}

void BrnProgression::Profile::GetEventCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetEvent(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::FindOfflineEvent(uint32_t  luEventJunctionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.h:427
		uint32_t luIndex;

		{
			// BrnProgressionData.h:429
			EventJunction * lpEventJunction;

		}
	}
}

void BrnProgression::EventJunction::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::EventJunction::GetOfflineEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Construct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::SetCurrentCarId(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetCurrentWheelId(CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:1321
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetCurrentCarId(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	SetCurrentWheelId(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	BrnAI::AIModuleIO::AICarOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsContainers::Stack<uint16_t,8>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Construct(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Construct(BindResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(BindResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Construct(UnBindResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(UnBindResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:146
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::CopyNetworkData(const InGamePlayerStatusInterface *  lpPlayerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern InGamePlayerStatusInterface & operator=(const const InGamePlayerStatusInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern InGamePlayerStatusData & operator=(const const InGamePlayerStatusData &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern NetworkPlayerStats & operator=(const const NetworkPlayerStats &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CopyInputDataToFlybyManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	OnlineFlybyManager::CopyNetworkData(/* parameters */);
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionData::GetProgressionRankData(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpRoadRage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpMarkedMan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumRankWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetProgressionRankCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCurrentProgressionRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetNumRankWinsForGameMode(int32_t  liNumWinsForGameModeToAdd, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::IsSpecialEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetSpecialEventCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::ResetEventMedals(uint32_t  liEventIndex, bool  lbIsSpecialEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetTotalWinCount(const uint32_t &  luRankWin, const uint32_t &  luNonRankWin, const uint32_t &  luSpecialEventsWonBefore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2970
		int32_t liEventIndex;

		{
			// BrnProfile.h:2973
			const ProfileEvent * lpEvent;

		}
	}
}

void BrnProgression::ProgressionRankData::GetMedalThresholdToNextRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetRival(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetIsUsedForRankUpGiftCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetVehicleData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:207
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:230
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:191
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::VehicleListEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetParentId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetOriginalCarId(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5248
		CgsID lParentCarId;

		// BrnGameStateModule.cpp:5256
		CgsID lParentOfParentCarId;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
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

void BrnResource::VehicleListEntry::IsLiveryColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetNumMedalsToUnlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetCarType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::GetColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::GetPaletteIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetColourPaletteIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetVehicleList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::CheckCarID(CgsID  lCurrentCarID, CgsID  lCheckCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateAchievementManagerPS3.cpp:162
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGameStateAchievementManagerPS3.cpp:163
		CgsID lParentID;

		// BrnGameStateAchievementManagerPS3.cpp:164
		CgsID lCarID;

		GameStateModule::GetVehicleList(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GameStateModule::GetVehicleList(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::ScoringSystem::GetNumberOfCrashes(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2391
		const CarData * lpCarData;

	}
}

void BrnProgression::ProgressionManager::GetCurrentCarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::OnEventWin(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetNumberOfCrashes(/* parameters */);
	BrnProgression::CarData::GetId(/* parameters */);
	BrnProgression::CarData::GetId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::IsObjectAllocated(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::FreeObject(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:984
		CgsDev::StrStream lStrStream;

	}
}

extern void StartGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CheckpointData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint32_t,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::Construct(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, const rw::math::vpu::Vector3  lPlayerPosition, BrnGameState::EGameModeStartMechanism  leStartMechanism) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::StartCrashMode(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5277
		StartGameModeParams lStartGameModeParams;

		StartGameModeParams(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		StartGameModeParams::Construct(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	StartGameModeParams::Construct(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::CarData::WasUnlockSequenceAlreadyShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::IsUnlockType(BrnProgression::CarData::UnlockType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetGamePlayData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::GetStat(BrnResource::VehicleListEntryGamePlayData::EPlayerStats  leStat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleListEntry.h:603
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::GetCarData(int32_t  liCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCarCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetSpawnCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetSpawnCar(const BrnProgression::Profile *  lpProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6373
		CgsID lCarId;

		// BrnGameStateModule.cpp:6376
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGameStateModule.cpp:6380
		const VehicleListEntryGamePlayData * lpVehicleListEntryGamePlayData;

	}
	BrnProgression::Profile::GetSpawnCarId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::Profile::GetInCarTimePlayed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsPlayerInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetTimeInMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCurrentCarType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::HasPlayerSeenTrainingType(BrnProgression::ETrainingType  leTrainingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::AddTakedown(TakedownType  leTakedownType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:824
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetPlayerBaseDeformAmount(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:3068
		const CarData * lpCarData;

	}
}

void BrnProgression::CarData::GetUnlockDeformationAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetLiveryType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFloatVal(float32_t  lfFloatVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:329
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,8u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Append(const const BrnResource::VehicleListEntry::ELiveryType &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::VehicleList::GetVehicleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::DerivedCarArray::ConstructPatternLiveryList(const VehicleList *  lpVehicleList, const const CgsID &  lParentOrSiblingCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDerivedCars.h:156
		CgsID lParentCarId;

		// BrnDerivedCars.h:157
		const VehicleListEntry * lpVehicleListEntry;

		// BrnDerivedCars.h:191
		int32_t liCurrentVehicle;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Construct(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Append(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetLiveryType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<CgsID,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetId(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetLiveryType(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnProgression::DerivedCarArray::ConstructColourLiveryList(const VehicleList *  lpVehicleList, const const CgsID &  lParentOrSiblingCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDerivedCars.h:90
		CgsID lParentCarId;

		// BrnDerivedCars.h:91
		const VehicleListEntry * lpVehicleListEntry;

		// BrnDerivedCars.h:125
		int32_t liCurrentVehicle;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Construct(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Append(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetLiveryType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetId(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetLiveryType(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(const const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[120] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::WriteAchievement(int32_t  liAchievementBitToWrite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionDebugComponent::AwardAchievement() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Profile::WriteAchievement(/* parameters */);
	CgsContainers::BitArray<60u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::AwardAchievementCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AwardAllAchievements() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1103
		int32_t liCurrentAchievement;

		Profile::WriteAchievement(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::AwardAllAchievementsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::TriggerData::GetLandmark(int32_t  liLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateInviteManager::AppendFromPreWorldInputData(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetControllerToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:143
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::ControllerToGameStateInterface::GetBindResultsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Append(const const BaseEventQueue<CgsInput::InputIO::BindResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ControllerToGameStateInterface::GetUnBindResultsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Append(const const BaseEventQueue<CgsInput::InputIO::UnBindResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CopyInputDataToInviteManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateInviteManager::AppendFromPreWorldInputData(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerToGameStateInterface(/* parameters */);
	Append<8>(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerToGameStateInterface(/* parameters */);
	Append<8>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, const const JoltEffect &  lJoltEffect, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(const const ChangeVolumeRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[138] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(const const PlayRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[130] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::StopRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumbleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(const const StopRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[130] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::AddEvent(const const GameStateToGuiOnTailEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[129] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsInOfflineRaceMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetUsedCarsBitArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetRaceCarState(int32_t  liRaceCarIndex) {
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

void BrnGameState::ScoringSystem::GetRaceCarDistanceToFinish(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2100
		const CarData * lpCarData;

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

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CheckForTailingRivals(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutput, const float32_t  lfGameTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6172
		int32_t liNumActiveCars;

		// BrnGameStateModule.cpp:6173
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnGameStateModule.cpp:6174
		float_t lfDistanceToFinish;

		// BrnGameStateModule.cpp:6175
		float_t lfLocalDistanceToFinish;

		// BrnGameStateModule.cpp:6176
		BrnGameState::ScoringSystem * lpScoringSystem;

		ModeManager::IsOnlineGameMode(/* parameters */);
	}
	GetPlayerActiveRaceCarIndex(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator>(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
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
	GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::GetRaceCarState(/* parameters */);
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

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::AddEvent(const const GameStateToGuiEndingDirtyTrick &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[134] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::AddEvent(const const GameStateToGuiNewDirtyTrick &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::AddEvent(const const GameStateToGuiTookLeadEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::AddEvent(const const DirtyTrickEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[137] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::AddEvent(const const GameStateToGuiTookLastEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::AddEvent(const const GameStateToGuiTriggeredDirtyTrick &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[137] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::AddEvent(const const GameStateToGuiOvertakeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::AddEvent(const const GameStateToGuiFinishedRaceEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[135] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Append(const const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateImageManagerBase::ProcessNewImageRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:782
		BrnGameState::GameStateImageManagerBase::ImageLoadRequest lImageLoadRequest;

	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::IsFull(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Erase(/* parameters */);
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::SavedRace::GetNumLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::SavedRace::GetLandmarkCgsId(uint32_t  luArrayIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerRegion::GetRegionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Race::AddLandmark(LandmarkIndex  lId, uint16_t  luAiSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRace.h:170
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(DirtyTrickEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(DirtyTrickEvent *  lpEventBuffer) {
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

void CgsModule::EventReceiverQueue<3072,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::Construct(const BrnGameState::TriggerQueryManager *  lpTriggerQueryManager, BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgressionManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgressionManager) {
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

void CgsGui::GuiEventQueueBase<16384,16>::Construct() {
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

void BrnGameState::GameStateModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<3072,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CarSelectManager::Construct(/* parameters */);
	OnlineCarSelectManager::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	SetCurrentCarId(/* parameters */);
	SetCurrentWheelId(/* parameters */);
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

void BrnGameState::GameStateModuleIO::ControllerInput::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Construct(RoadRulesDownloadEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::SetEventPointer(RoadRulesDownloadEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Construct(RoadRulesMessageData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::SetEventPointer(RoadRulesMessageData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(RoadRulesRecvData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(RoadRulesRecvData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Construct(CompletedFburnChallengesData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::SetEventPointer(CompletedFburnChallengesData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ControllerToGameStateInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleInGamePlayerStatusInterface.h:224
		int32_t liIndex;

	}
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationshipStats::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModulePlayerResultsInterface.h:118
		int32_t liIndex;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetRoadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::StreetData::GetRoadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManager::GetMaxJumpCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManager::GetMaxStuntCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManager::GetMaxSmashCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetDriveThrusFound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,5u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetDriveThruCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,5u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsSimilar(float  a, float  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetProgressionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:598
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::GetProgressionData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::TriggerQueryManager::GetTriggerData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:598
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::TriggerData::GetGenericRegionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetGenericRegion(int32_t  liGenericRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::FindNearestJunkyardID(const rw::math::vpu::Vector3  lPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6403
		int32_t liGenericRegionCount;

		// BrnGameStateModule.cpp:6404
		int32_t liGenericRegionIndex;

		// BrnGameStateModule.cpp:6406
		const TriggerData * lpTriggerData;

		// BrnGameStateModule.cpp:6408
		CgsID lJunkyardId;

		// BrnGameStateModule.cpp:6410
		float32_t lfNearestDist;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegionCount(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
		// BrnGameStateModule.cpp:6420
		const GenericRegion * lpCurrentRegion;

		// BrnGameStateModule.cpp:6421
		float32_t lfCurrentDist;

		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::ModeManager::GetPlayerCurrentLandmark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCat(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Landmark::GetDesignIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::RenderCurrentLandmarkInfo(const DebugRender &  lDebugRender, const const Metrics &  lMetrics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:392
		const TriggerData * lpTriggerData;

		// BrnGameStateDebugComponent.cpp:395
		LandmarkIndex lCurrentLandmark;

		// BrnGameStateDebugComponent.cpp:396
		char[128] lacBuffer;

		TriggerQueryManager::GetTriggerData(/* parameters */);
	}
	{
		// BrnGameStateDebugComponent.cpp:410
		int32_t liLandmarkIndex;

		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// BrnGameStateDebugComponent.cpp:432
		CgsID lCgsID;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		BrnTrigger::TriggerData::GetRegion(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::TriggerQueryManagerDebugComponent::Construct(TriggerQueryManager *  lpTriggerQueryManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:59
		int32_t liTriggerTypeIndex;

		// BrnTriggerQueryManagerDebugComponent.cpp:60
		int32_t liGenericRegionTypeIndex;

		TriggerQueryManager::GetTriggerData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::Profile::AreGoldCarsUnlocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DerivedCarArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::DerivedCarArray::GetLiveryType(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::UnlockAllCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:371
		int32_t liCurrentVehicle;

	}
	{
		// BrnProgressionDebugComponent.cpp:374
		const VehicleListEntry * lpVehicleListEntry;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	BrnResource::VehicleListEntry::GetLiveryType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:380
		CarData * lpCarData;

		CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
		{
			// BrnProgressionDebugComponent.cpp:386
			CarData * lpParentCarData;

			CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
		}
	}
}

void BrnProgression::ProgressionDebugComponent::UnlockAllCarsCallBack(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetFreeCarForRankUpID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::UnlockGiftCarsUpToRank(int32_t  liTargetRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:349
		int32_t liCurrentRank;

	}
	{
		// BrnProgressionDebugComponent.cpp:351
		CgsID lCarUnlockID;

		// BrnProgressionDebugComponent.cpp:352
		CarData * lpCarData;

		ProgressionRankData::GetFreeCarForRankUpID(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetProgressionRankData(/* parameters */);
	CarData::SetUnlockDeformationAmount(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnProgression::ProgressionData::GetPlayerCarId(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetPlayerCarIDCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetSpawnCarId(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetSpawnWheelId(CgsID  lWheelId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::IsRaceVehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::Race,64u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::Race,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Race::GetStartLandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateImageManagerBase::GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType  leImageType, int32_t  liImageIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1504
		MugshotInfo * lpMugshotInfo;

	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetPropContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPropContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetTrafficContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetTrafficContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCrashScorer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::PropEntityID(EntityId  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::AssertIsProp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::GetPartIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetPartIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Push(const const uint16_t &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ProcessContacts(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6468
		int32_t liContactIndex;

		// BrnGameStateModule.cpp:6469
		const ContactSpyData::PropContactQueue * lpPropContactQueue;

		// BrnGameStateModule.cpp:6470
		const ContactSpyData::TrafficContactQueue * lpTrafficContactQueue;

		// BrnGameStateModule.cpp:6471
		CrashModeScoring * lpCrashScorer;

		// BrnGameStateModule.cpp:6472
		StuntModeScoring * lpStuntScorer;

		GameStateModuleIO::PostWorldInputBuffer::GetContactSpyInterface(/* parameters */);
		ModeManager::IsShowtimeGameMode(/* parameters */);
	}
	ModeManager::IsInProgress(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetContactSpyInterface(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::GetPropContacts(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetContactSpyInterface(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyData::GetPropContacts(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::GetTrafficContacts(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyData::GetTrafficContacts(/* parameters */);
	ScoringSystem::GetCrashScorer(/* parameters */);
	ScoringSystem::GetStuntScorer(/* parameters */);
	{
		// BrnGameStateModule.cpp:6479
		const PropContact * lpPropContact;

		// BrnGameStateModule.cpp:6480
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnGameStateModule.cpp:6481
		uint16_t luPropIndex;

		// BrnGameStateModule.cpp:6482
		uint16_t luPropPartIndex;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetEvent(/* parameters */);
		CgsSceneManager::EntityId::GetOwner(/* parameters */);
		BrnWorld::PropEntityID::GetPartIndex(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	ModeManager::IsShowtimeGameMode(/* parameters */);
	CgsContainers::Stack<uint16_t,8>::IsFull(/* parameters */);
	{
		// BrnGameStateModule.cpp:6518
		const TrafficContact * lpTrafficContact;

		// BrnGameStateModule.cpp:6519
		uint16_t luVictimTrafficIndex;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
		CgsContainers::Stack<uint16_t,8>::Push(/* parameters */);
		CgsContainers::Stack<uint16_t,8>::IsFull(/* parameters */);
	}
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	BrnWorld::PropEntityID::GetEntityIndex(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	BrnWorld::PropEntityID::GetEntityIndex(/* parameters */);
	BrnWorld::PropEntityID::PropEntityID(/* parameters */);
	BrnWorld::PropEntityID::GetPartIndex(/* parameters */);
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

void CgsContainers::Array<CgsID,92u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::IsInOnlineCarSelect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::GetVehicleClassLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::GetHostChoiceAndNotHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::IsCarUnlocked(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,92u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,92u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void BrnGameState::GameStateModule::GetListOfPlayerSelectableVehicles(const Array<CgsID,92u> &  lCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6960
		int32_t liVehicleClass;

		// BrnGameStateModule.cpp:6961
		int32_t liCarIndex;

		// BrnGameStateModule.cpp:6962
		int32_t liVehicleClassLimit;

		// BrnGameStateModule.cpp:6963
		bool lbFoundVehicleAtClassLimit;

		// BrnGameStateModule.cpp:6964
		bool lbCorrectVehicleClass;

		// BrnGameStateModule.cpp:6965
		bool lbInclude;

		// BrnGameStateModule.cpp:6966
		bool lbIsOnlineCarSelect;

	}
	CgsContainers::Array<CgsID,92u>::Construct(/* parameters */);
	{
		// BrnGameStateModule.cpp:6977
		const VehicleListEntry * lpVehicleData;

		// BrnGameStateModule.cpp:6978
		const VehicleListEntryGamePlayData * lpGameplayData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
	BrnProgression::ProgressionManager::IsCarUnlocked(/* parameters */);
	CgsContainers::Array<CgsID,92u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:7054
		const VehicleListEntry * lpVehicleData;

		// BrnGameStateModule.cpp:7055
		const VehicleListEntryGamePlayData * lpGameplayData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<CgsID,92u>::Contains(/* parameters */);
	BrnResource::VehicleListEntry::GetId(/* parameters */);
	CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(/* parameters */);
	CgsContainers::Array<CgsID,92u>::Append(/* parameters */);
	BrnResource::VehicleListEntry::GetId(/* parameters */);
	OnlineCarSelectManager::GetVehicleClassLimit(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGameStateModule.cpp:7010
		bool lbIsSponsorUnlock;

		// BrnGameStateModule.cpp:7011
		const CarData * lpCarData;

		CgsContainers::Array<CgsID,92u>::Append(/* parameters */);
		BrnResource::VehicleListEntry::GetId(/* parameters */);
	}
	BrnProgression::ProgressionManager::IsCarUnlocked(/* parameters */);
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

void CgsModule::VariableEventQueue<13312,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

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

void BrnGameState::GameStateModuleIO::OnlineScoringOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateDebugComponent::DrawRankNumber(int32_t  liOverrideRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:366
		DebugInterface lDebugInterface;

		// BrnGameStateDebugComponent.cpp:367
		const DebugRender & lDebugRender;

		// BrnGameStateDebugComponent.cpp:369
		char[1024] lacBuffer;

		// BrnGameStateDebugComponent.cpp:370
		CgsDev::StrStream lStrStream;

		// BrnGameStateDebugComponent.cpp:374
		float32_t lfX;

		// BrnGameStateDebugComponent.cpp:375
		float32_t lfY;

		// BrnGameStateDebugComponent.cpp:376
		float32_t lfSize;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

void BrnGameState::GameStateModule::GetPlayerGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:967
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::GetTriggerQueryManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::AngleBetweenVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv0;

		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv1;

		{
			// vector3_operation_inline.h:335
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:335
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
		{
			// vector3_operation_inline.h:336
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:336
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void rw::math::vpu::CosAngleBetweenNormalizedVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic dotProduct;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic temp0;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic one;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic negOne;

		{
			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:235
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

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::Sgn(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:91
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// scalar_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic one;

		// scalar_operation_platform_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic negOne;

		// scalar_operation_platform_inline.h:96
		VectorIntrinsicUnion::VectorIntrinsic greaterThanZeroMask;

		// scalar_operation_platform_inline.h:98
		VectorIntrinsicUnion::VectorIntrinsic result0;

		// scalar_operation_platform_inline.h:100
		VectorIntrinsicUnion::VectorIntrinsic greaterEqualThanZeroMask;

	}
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

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
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

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGameState::GameStateDebugComponent::RenderNextLandmarkInfo(const DebugRender &  lDebugRender, const const Metrics &  lMetrics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:454
		const const ModeManager & lModeManager;

		// BrnGameStateDebugComponent.cpp:455
		const Matrix44Affine & lPlayerCarTransform;

		// BrnGameStateDebugComponent.cpp:456
		char[256] lacBuffer;

		// BrnGameStateDebugComponent.cpp:458
		uint32_t luNextPlayerLandmark;

	}
	GameStateModule::GetPlayerGlobalRaceCarIndex(/* parameters */);
	{
		// BrnGameStateDebugComponent.cpp:464
		const TriggerData * lpTriggerData;

		// BrnGameStateDebugComponent.cpp:465
		int32_t liLandmarkIndex;

		// BrnGameStateDebugComponent.cpp:467
		bool lbNextIsFinish;

		// BrnGameStateDebugComponent.cpp:485
		const Landmark * lpLandmark;

		// BrnGameStateDebugComponent.cpp:486
		Vector3 lLandmarkPos;

		// BrnGameStateDebugComponent.cpp:487
		Vector3 lDisplacement;

		// BrnGameStateDebugComponent.cpp:492
		float32_t lfAngleToLandmark;

		// BrnGameStateDebugComponent.cpp:498
		Vector2 lCentre;

		// BrnGameStateDebugComponent.cpp:499
		const float32_t KF_HALF_ARROW_LENGTH;

		// BrnGameStateDebugComponent.cpp:501
		float32_t lfSin;

		// BrnGameStateDebugComponent.cpp:502
		float32_t lfCos;

		// BrnGameStateDebugComponent.cpp:503
		float32_t lfXSign;

		// BrnGameStateDebugComponent.cpp:506
		Vector2 lArrowHead;

		// BrnGameStateDebugComponent.cpp:508
		Vector2 lArrowStart;

		TriggerQueryManager::GetTriggerData(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
		LandmarkIndex::operator std::int32_t(/* parameters */);
		LandmarkIndex::operator std::int32_t(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::AngleBetweenVectors(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
		rw::math::vpu::ACos(/* parameters */);
		rw::math::fpu::Sin(/* parameters */);
		{
		}
		vec_madd(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		{
			{
				{
				}
			}
		}
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_sra(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		{
		}
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::fpu::Cos(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		{
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::IsWaitingForStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::RenderLandmarkDebug() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	{
		// BrnGameStateDebugComponent.cpp:545
		DebugInterface lDebugInterface;

		// BrnGameStateDebugComponent.cpp:546
		const DebugRender & lDebugRender;

		// BrnGameStateDebugComponent.cpp:547
		Metrics lMetrics;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

void BrnGameState::StreetManager::GetLeftPlayerRoadId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::StreetData::GetRoad(SpanBase::RoadIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::Road::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetRightPlayerRoadId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::DrawUpcomingRoads(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:570
		const RGBA KU_INFO_TEXT_COLOUR;

		// BrnGameStateDebugComponent.cpp:571
		const float32_t KF_TEXT_SIZE;

		// BrnGameStateDebugComponent.cpp:573
		float32_t lfTextXPos;

		// BrnGameStateDebugComponent.cpp:574
		float32_t lfTextYPos;

		// BrnGameStateDebugComponent.cpp:576
		Vector2 lTextPos;

		// BrnGameStateDebugComponent.cpp:578
		int32_t liRoadNameIndex;

	}
	rw::RGBA::RGBA(/* parameters */);
	StreetManager::GetLeftPlayerRoadId(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	BrnStreetData::Road::GetId(/* parameters */);
	StreetManager::GetRightPlayerRoadId(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	BrnStreetData::Road::GetId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HasModeTimeExpired(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1620
		Time lCurrentTimePlusASecond;

	}
}

void CgsSystem::Time::Time() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsTimeLimitActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsTimerActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetModeTimeRemaining(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator-(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTime.h:165
	Time & lNewTime;

	{
		// CgsTime.h:165
		Time lNewTime;

		{
			// CgsTime.h:188
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsSystem::Time::Time(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::operator<=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::GetTargetNumTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateDebugComponent.cpp:316
		const TimerStatus * lpSimTimerStatus;

		ModeManager::GetScoringSystem(/* parameters */);
		CgsSystem::TimerStatus::GetTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		ScoringSystem::HasModeTimeExpired(/* parameters */);
		CgsSystem::Time::SetFloatVal(/* parameters */);
		ScoringSystem::GetModeTimeRemaining(/* parameters */);
		CgsSystem::Time::operator-(/* parameters */);
		CgsSystem::Time::operator<=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::IsTimeLimitActive(/* parameters */);
	{
		// BrnGameStateDebugComponent.cpp:323
		Time lTimeDisplay;

		// BrnGameStateDebugComponent.cpp:324
		Time lCurrentTime;

		CgsSystem::TimerStatus::GetTime(/* parameters */);
		ScoringSystem::GetModeTimeRemaining(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	ScoringSystem::GetRoadRageScoring(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
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

void CgsDev::DebugUI::DebugUI::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetVehicleName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetDefaultWheelName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::WheelList::FindWheelIndexFromName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WheelList.h:204
		int32_t liWheelIndex;

	}
}

void BrnResource::WheelList::GetWheelData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WheelList.h:141
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::WheelListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::WheelListEntry::GetWheelName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::WheelList::GetWheelCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::IsTrailer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:271
		char[256] lacBuffer;

		// BrnResetPlayerDebugComponent.cpp:272
		char[13] lacId;

		// BrnResetPlayerDebugComponent.cpp:273
		CgsDev::StrStream lStrStream;

		// BrnResetPlayerDebugComponent.cpp:274
		const VehicleListEntry * lpVehicleData;

		// BrnResetPlayerDebugComponent.cpp:275
		float32_t KF_BASE_X;

		// BrnResetPlayerDebugComponent.cpp:276
		float32_t KF_BASE_Y;

		// BrnResetPlayerDebugComponent.cpp:277
		float32_t KF_SIZE;

		// BrnResetPlayerDebugComponent.cpp:278
		RGBA K_COLOUR;

		CgsDev::StrStream::StrStream(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnResource::VehicleListEntry::GetVehicleName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnResource::VehicleListEntry::GetDefaultWheelName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnResource::WheelList::FindWheelIndexFromName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
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
		BrnResource::WheelList::GetWheelData(/* parameters */);
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
}

void rw::math::vpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::OnChangeCarSelection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:471
		int32_t liWheelIndex;

		// BrnResetPlayerDebugComponent.cpp:472
		int32_t liCarCount;

		// BrnResetPlayerDebugComponent.cpp:473
		int32_t liCarIndex;

		// BrnResetPlayerDebugComponent.cpp:474
		const VehicleList * lpVehicleList;

		// BrnResetPlayerDebugComponent.cpp:475
		const BrnResource::WheelList * lpWheelList;

	}
	BrnResource::WheelList::GetWheelData(/* parameters */);
	BrnResource::WheelListEntry::GetWheelName(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
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
	{
		// BrnResetPlayerDebugComponent.cpp:493
		const VehicleListEntry * lpVehicleData;

		// BrnResetPlayerDebugComponent.cpp:494
		CgsID lParentCarId;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
		{
			// BrnResetPlayerDebugComponent.cpp:498
			CgsDev::StrStream lStrStream;

			// BrnResetPlayerDebugComponent.cpp:499
			char[13] lacCarIdString;

			CgsDev::StrStream::StrStream(/* parameters */);
			BrnResource::VehicleListEntry::GetVehicleName(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::ResetPlayerDebugComponent::OnChangeCarSelectionCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::OnChangeCarFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:404
		int32_t liCarIndex;

		// BrnResetPlayerDebugComponent.cpp:405
		int32_t liCarCount;

	}
	{
		// BrnResetPlayerDebugComponent.cpp:411
		const VehicleListEntry * lpVehicleData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
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
		// BrnResetPlayerDebugComponent.cpp:416
		char[13] lacCarIdString;

		{
			// BrnResetPlayerDebugComponent.cpp:422
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			BrnResource::VehicleListEntry::GetVehicleName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	rw::math::vpu::Min<int>(/* parameters */);
}

void BrnGameState::ResetPlayerDebugComponent::OnChangeCarFilterCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::WheelListEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetCurrentWheelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetWorldMap2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetTypeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldRegion::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldRegion::GetCounty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetDimensionZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGameState::ResetPlayerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:125
		int32_t liWheelIndex;

		// BrnResetPlayerDebugComponent.cpp:126
		int32_t liFilterIndex;

		// BrnResetPlayerDebugComponent.cpp:127
		int32_t liCarIndex;

		// BrnResetPlayerDebugComponent.cpp:128
		int32_t liLocationCount;

		// BrnResetPlayerDebugComponent.cpp:130
		int32_t liLocationIndex;

		// BrnResetPlayerDebugComponent.cpp:131
		const TriggerData * lpTriggerData;

		TriggerQueryManager::GetTriggerData(/* parameters */);
	}
	{
		// BrnResetPlayerDebugComponent.cpp:159
		const WheelListEntry * lpWheelData;

		BrnResource::WheelList::GetWheelData(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Min<int>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnResetPlayerDebugComponent.cpp:174
		const GenericRegion * lpGenericRegion;

		// BrnResetPlayerDebugComponent.cpp:175
		WorldRegion lWorldRegion;

		// BrnResetPlayerDebugComponent.cpp:176
		CgsDev::StrStream lStrStream;

		// BrnResetPlayerDebugComponent.cpp:177
		const BoxRegion * lpBoxRegion;

		// BrnResetPlayerDebugComponent.cpp:178
		const WorldMap2D * lpWorldMap;

		// BrnResetPlayerDebugComponent.cpp:179
		uint8_t luValue;

		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetWorldMap2D(/* parameters */);
		CgsWorld::WorldMap2D::GetValue(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		BrnTrigger::GenericRegion::GetType(/* parameters */);
		{
			// BrnResetPlayerDebugComponent.cpp:195
			Vector3 lDirection;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			BrnTrigger::GenericRegion::GetTypeName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			BrnTrigger::BoxRegion::GetDimensionZ(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			BrnTrigger::BoxRegion::GetPosition(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
	}
	BrnWorld::WorldRegion::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetScoringOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetOnlineScoringOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetElapsedTime(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCurrentModeTimeTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCurrentMedalTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCurrentMedalAchieved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetDistanceDrivenInCurrentCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CopyScoringDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// GameStateBridges.cpp:85
		ScoringOutputInterface * lpScoringOutputInterface;

		// GameStateBridges.cpp:86
		OnlineScoringOutputInterface * lpOnlineScoringOutputInterface;

		// GameStateBridges.cpp:88
		BrnGameState::ScoringSystem * lpScoringSystem;

		// GameStateBridges.cpp:96
		EActiveRaceCarIndex leActiveRaceCarIndex;

		IsOnlineGameMode(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetScoringOutputInterface(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetOnlineScoringOutputInterface(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		// GameStateBridges.cpp:100
		int32_t liCarInRaceIndex;

		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
	}
	operator++(/* parameters */);
	GetPlayerActiveRaceCarIndex(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	ScoringSystem::IsTimeLimitActive(/* parameters */);
	{
		// GameStateBridges.cpp:124
		Time lCurrentTime;

		CgsSystem::TimerStatus::GetTime(/* parameters */);
		ScoringSystem::GetElapsedTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::operator-(/* parameters */);
		ScoringSystem::GetModeTimeRemaining(/* parameters */);
		CgsSystem::Time::operator-(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		ScoringSystem::GetCurrentModeTimeTarget(/* parameters */);
		CgsSystem::Time::operator-(/* parameters */);
	}
	BrnProgression::ProgressionManager::GetDistanceDrivenInCurrentCar(/* parameters */);
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
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnGameState::GameStateModule::GetOutputGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:935
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<174>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:133
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetControllerInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:377
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::CopyInputDataToPaybackManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerInput(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(const VehicleOutputInterface *  lpVehicleOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleOutputInterface.h:922
		int32_t liRaceCarIndex;

		{
			// BrnVehicleOutputInterface.h:928
			const RaceCarState * lpRaceCarState;

		}
	}
}

void BrnPhysics::Vehicle::CrashingRaceCarInterface::IsCrashing(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<232>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetActivePaybackType(BrnNetwork::EPaybackType  leActivePaybackType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:299
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetActivePaybackAggressor(EActiveRaceCarIndex  leActivePaybackAggressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:302
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::IsRaceCarCrashing(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:1017
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::Release(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:841
		bool lbReturnValue;

	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void CgsModule::EventReceiverQueue<3072,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetCurrentCarId(/* parameters */);
	SetCurrentWheelId(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::EventReceiverQueue<3072,16>::Destruct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

void CgsContainers::BitArray<2u>::FindFirstZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:278
		uint32_t luIndex;

	}
}

void CgsContainers::BitArray<2u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<2u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

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

void CgsModule::VariableEventQueue<1536,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Append<1536, 16>(const const VariableEventQueue<1536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::operator=(const const ContactSpyInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:198
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:201
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::Append(const VehicleOutputInterface *  lpOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetImpactEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::SetUsedCarsBitArray(const const BitArray<8u> &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CacheTakedownManagerPostWorldInputData(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Clear(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetContactSpyInterface(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue(/* parameters */);
	Append<8>(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Append(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<16>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(/* parameters */);
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

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseInputEvent::GetPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BindResult::GetResultCode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::UnBindResult::GetResultCode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::ChangeCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:354
		ChangePlayerCarEvent lEvent;

		BrnResource::WheelList::GetWheelData(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::WheelListResource>::operator->(/* parameters */);
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

void BrnGameState::ResetPlayerDebugComponent::ChangeCarCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TeleportPlayerCarEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResetPlayerDebugComponent::TeleportCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetPlayerDebugComponent.cpp:333
		TeleportPlayerCarEvent lEvent;

	}
}

void BrnGameState::ResetPlayerDebugComponent::TeleportCarCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<5>::SetBit(const int32_t  liIndex) {
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

void BrnGameState::operator++(const BrnGameState::OnlineFlybyManager::ENoRivalryCompare &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.h:284
		BrnGameState::OnlineFlybyManager::ENoRivalryCompare leOldEnumIndex;

	}
}

void CgsContainers::FastBitArray<5>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<5>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::SetAnd(const const FastBitArray<5> &  lA, const const FastBitArray<5> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:547
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<5>::SetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:484
		int32_t liIndex;

		// CgsFastBitArray.h:485
		int32_t liMaskCount;

		// CgsFastBitArray.h:486
		int32_t liBitCount;

		{
			// CgsFastBitArray.h:491
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsFastBitArray.h:498
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<5>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<5>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<5>::UnSetBit(const const FastBitArray<5>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:462
		int32_t liMaskIndex;

		{
			// CgsFastBitArray.h:460
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<5>::Iterator::GetMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:371
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineFlybyManager::AddNoRivalryFlybyMessage(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:727
		FastBitArray<5> lNonZeroMessages;

		// BrnGameStateOnlineFlybyManager.cpp:728
		BrnGameState::OnlineFlybyManager::ENoRivalryCompare leStatIndex;

	}
	CgsContainers::FastBitArray<5>::Construct(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::FastBitArray<5>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<5>::IsZero(/* parameters */);
	{
		// BrnGameStateOnlineFlybyManager.cpp:751
		FastBitArray<5> lNotZeroAndNonShownMessage;

		// BrnGameStateOnlineFlybyManager.cpp:752
		Iterator lStatIt;

		// BrnGameStateOnlineFlybyManager.cpp:753
		int32_t liRandomIndex;

		// BrnGameStateOnlineFlybyManager.cpp:754
		int32_t liAvailableMessages;

		// BrnGameStateOnlineFlybyManager.cpp:755
		int32_t liStatValue;

		CgsContainers::FastBitArray<5>::Iterator::Iterator(/* parameters */);
		CgsContainers::FastBitArray<5>::Construct(/* parameters */);
		CgsContainers::FastBitArray<5>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<5>::SetAll(/* parameters */);
		CgsContainers::FastBitArray<5>::Begin(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		FlybyManager::GetRandom(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsContainers::FastBitArray<5>::Begin(/* parameters */);
		CgsContainers::FastBitArray<5>::Iterator::GetIndex(/* parameters */);
		CgsContainers::FastBitArray<5>::Iterator::GetIndex(/* parameters */);
		FlybyManager::GetFlybyData(/* parameters */);
		CgsContainers::FastBitArray<5>::UnSetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<5>::Iterator::GetIndex(/* parameters */);
	FlybyManager::GetFlybyData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::FastBitArray<5>::Iterator::GetIndex(/* parameters */);
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
	FlybyManager::GetFlybyData(/* parameters */);
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

void BrnGameState::OnlineFlybyManager::CountAvailableOngoingRivalryMessages(BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare  leCompare, BrnGameState::OnlineFlybyManager::EMessageStyle  leStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:1216
		int32_t liIndex;

		{
			// BrnGameStateOnlineFlybyManager.cpp:1225
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::Append(const const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::operator++(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &  leEnumIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineFlybyManager::AddOngoingRivalryMessage(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:909
		BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare leCompareIndex;

		// BrnGameStateOnlineFlybyManager.cpp:910
		int32_t liLocalPlayersStat;

		// BrnGameStateOnlineFlybyManager.cpp:911
		int32_t liRemotePlayersStat;

		// BrnGameStateOnlineFlybyManager.cpp:912
		BrnGameState::OnlineFlybyManager::EMessageStyle leMessageStyle;

		// BrnGameStateOnlineFlybyManager.cpp:913
		int32_t liRandomMessage;

		// BrnGameStateOnlineFlybyManager.cpp:914
		int32_t liBestStat;

		// BrnGameStateOnlineFlybyManager.cpp:915
		Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u> laAvailableMessages;

		CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::Construct(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::Append(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::GetLength(/* parameters */);
	FlybyManager::GetRandom(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>::operator[](/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
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

void BrnGameState::OnlineFlybyManager::CountAvailableNewRivalryMessages(BrnGameState::OnlineFlybyManager::ENewRivalryCompare  leCompare, BrnGameState::OnlineFlybyManager::EMessageStyle  leStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:1242
		int32_t liIndex;

		{
			// BrnGameStateOnlineFlybyManager.cpp:1251
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::Append(const const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::operator++(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &  leEnumIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineFlybyManager::AddNewRivalryMessage(BrnGameState::FlybyManager::RivalRating *  lpRating) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:825
		const LiveRevengeRelationship * lpRelationship;

		// BrnGameStateOnlineFlybyManager.cpp:826
		BrnGameState::OnlineFlybyManager::ENewRivalryCompare leCompareIndex;

		// BrnGameStateOnlineFlybyManager.cpp:827
		int32_t liLocalPlayersStat;

		// BrnGameStateOnlineFlybyManager.cpp:828
		int32_t liRemotePlayersStat;

		// BrnGameStateOnlineFlybyManager.cpp:829
		BrnGameState::OnlineFlybyManager::EMessageStyle leMessageStyle;

		// BrnGameStateOnlineFlybyManager.cpp:830
		int32_t liRandomMessage;

		// BrnGameStateOnlineFlybyManager.cpp:831
		int32_t liBestStat;

	}
	{
		// BrnGameStateOnlineFlybyManager.cpp:845
		Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u> laAvaiableMessageIndex;

		CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::Construct(/* parameters */);
		CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::Append(/* parameters */);
		operator++(/* parameters */);
		CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::GetLength(/* parameters */);
		FlybyManager::GetRandom(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>::operator[](/* parameters */);
	}
	FlybyManager::GetRandom(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
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

void BrnGameState::OnlineFlybyManager::CalculateOnlineRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateOnlineFlybyManager.cpp:329
		const int32_t liNumberOfRivalsToShow;

		// BrnGameStateOnlineFlybyManager.cpp:330
		EActiveRaceCarIndex leLocalPlayerCarIndex;

		// BrnGameStateOnlineFlybyManager.cpp:331
		int32_t liPlayerIndex;

		// BrnGameStateOnlineFlybyManager.cpp:332
		BrnGameState::FlybyManager::RivalRating[8] laRivalRatings;

		FlybyManager::GetFlybyData(/* parameters */);
	}
	FlybyManager::GetGameStateModule(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnGameStateOnlineFlybyManager.cpp:393
		const PlayerName * lpPlayerName;

		// BrnGameStateOnlineFlybyManager.cpp:394
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnGameStateOnlineFlybyManager.cpp:395
		const LiveRevengeRelationship * lpLiveRevengeRelationship;

	}
	FlybyManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	CarData::GetActiveRaceCarIndex(/* parameters */);
	FlybyManager::GetScoringSystem(/* parameters */);
	BrnNetwork::LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	{
		// BrnGameStateOnlineFlybyManager.cpp:353
		const InGamePlayerStatusData * lpPlayerStatusData;

		// BrnGameStateOnlineFlybyManager.cpp:354
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
		FlybyManager::GetGameStateModule(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::OnlineFlybyManager::CalculateFlybyRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator=(const const ResourcePtr<BrnWorld::GlobalColourPalette> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::IsDriveThru() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::ChangeWithDefault(Attribute::Key  collectionkey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::Change(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::Surfaces(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// surfacelist.h:130
		const Attrib::RefSpec * resultptr;

	}
}

void Attrib::Gen::surface::surface(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::SetDefaultLayout(unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::DebugRenderColor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetLayoutPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector4  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV4(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:274
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:275
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void Attrib::Gen::surface::~surface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionTag::GetSurfaceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionTag.h:269
		uint16_t lu16SurfaceIdShifted;

	}
}

void Attrib::Gen::surface::surface(const const Attrib::RefSpec &  refspec, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::RumbleSurface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::rumblesurface(const const Attrib::RefSpec &  refspec, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RumblePriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::~rumblesurface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::MinSpeedForRumble() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::MaxSpeedForRumble() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorAttackTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorDecayTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorSustainTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorReleaseTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorPeakSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::LeftMotorSustainSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorAttackTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorDecayTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorSustainTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorReleaseTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorPeakSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::rumblesurface::RightMotorSustainSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::TimePlayerInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseRumbleEvent::GetRumblePriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayJoltEffectEvent::GetJoltEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::StopRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayRumbleEffectEvent::GetRumbleVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetJoltEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetRumbleVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::SetTimerStatusInterface(const TimerStatusInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:984
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputIO::PreWorldInputBuffer::SetRumblePaused(bool  lbPauseRumble) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::SetRumbleEnabled(bool  lbEnableRumble) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::SetWheelForceFeedbackEnabled(bool  lbEnableFF) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::BridgeRumbleToInput(PreWorldInputBuffer *  lpInputInputBuffer, const TimerStatusInterface *  lpTimerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1024,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<1024,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnGameStateModuleIO.h:210
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

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<131072,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<131072,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<131072,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<131072,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<131072,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[162] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::AddEvent(const const InRemoveTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[143] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength(/* parameters */);
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
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

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

void BrnWorld::TriggerQueryId::SetId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTriggerQueryInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:287
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerQueryId::SetOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
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

void PackedIndex::SetGlobalRaceCarIndex(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.h:433
		CgsDev::StrStream lStrStream;

	}
}

void PackedIndex::SetActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.h:442
		CgsDev::StrStream lStrStream;

	}
}

void PackedIndex::GetPackedRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerQueryId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::LineTest(TriggerQueryId  lQueryID, InLineTestEvent::TriggerTypeFlags  lTriggerTypeFlags, Vector3  lLineStart, Vector3  lLineEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:338
		InLineTestEvent lEvent;

	}
}

extern void InLineTestEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SoundTriggerAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SoundTriggerAction::Construct(const rw::math::vpu::Vector3  lQueryPos, EntityId  lEntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType  leResultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(const const SoundTriggerAction &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::BoxRegion::GetDimensions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Debug3DImmediateRender::GetCameraPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetGroupId() {
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

void CgsContainers::Array<uint16_t,32u>::FindFirstInstanceOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<uint16_t,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::FindFirstInstanceOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<uint16_t,256u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetAlpha(uint8_t  value) {
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

void BrnTrigger::TriggerData::GetRegionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetRoamingLocation(int32_t  liRoamingLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::RoamingLocation::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetRoamingLocationCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetSpawnLocation(int32_t  liSpawnLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::SpawnLocation::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::SpawnLocation::GetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetSpawnLocationCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Landmark::GetStartingGrid(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::StartingGrid::GetPosition(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::StartingGrid::GetDirection(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Landmark::GetStartingGridCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManagerDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:193
		int32_t liTriggerRegionIndex;

	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:197
		RGBA lColour;

		// BrnTriggerQueryManagerDebugComponent.cpp:198
		const TriggerRegion * lpTriggerRegion;

		// BrnTriggerQueryManagerDebugComponent.cpp:199
		const BoxRegion * lpBoxRegion;

		// BrnTriggerQueryManagerDebugComponent.cpp:200
		Vector3 lBoxCenter;

		// BrnTriggerQueryManagerDebugComponent.cpp:201
		Vector3 lBoxHalfSize;

		// BrnTriggerQueryManagerDebugComponent.cpp:202
		char[512] lacTriggerBuffer;

		// BrnTriggerQueryManagerDebugComponent.cpp:203
		CgsDev::StrStream lStrStream;

		// BrnTriggerQueryManagerDebugComponent.cpp:204
		BrnTrigger::TriggerRegion::Type leTriggerType;

		// BrnTriggerQueryManagerDebugComponent.cpp:205
		BrnTrigger::GenericRegion::Type leGenericRegionType;

		BrnTrigger::TriggerData::GetRegion(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		BrnTrigger::BoxRegion::GetDimensions(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		BrnTrigger::TriggerRegion::GetType(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
			// BrnTriggerQueryManagerDebugComponent.cpp:216
			bool lbTriggerMatchesFilter;

			// BrnTriggerQueryManagerDebugComponent.cpp:217
			bool lbGenericRegionMatchesFilter;

			{
				// BrnTriggerQueryManagerDebugComponent.cpp:223
				bool lbOverrideHit;

				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsContainers::Array<uint16_t,32u>::FindFirstInstanceOf(/* parameters */);
				CgsContainers::Array<uint16_t,32u>::GetLength(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::RGBA::SetAlpha(/* parameters */);
				rw::RGBA::SetAlpha(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator<(/* parameters */);
				rw::math::vpu::MagnitudeSquared(/* parameters */);
			}
		}
	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:331
		int32_t liRoamingLocationIndex;

	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:348
		int32_t liSpawnLocationIndex;

	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:352
		const SpawnLocation * lpSpawnLocation;

		// BrnTriggerQueryManagerDebugComponent.cpp:353
		Vector3 lPosition;

		// BrnTriggerQueryManagerDebugComponent.cpp:354
		Vector3 lDirection;

		BrnTrigger::TriggerData::GetSpawnLocation(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:367
		int32_t liTriggerRegionIndex;

	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:371
		const TriggerRegion * lpTriggerRegion;

		// BrnTriggerQueryManagerDebugComponent.cpp:372
		const BoxRegion * lpBoxRegion;

		BrnTrigger::TriggerData::GetRegion(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		{
			// BrnTriggerQueryManagerDebugComponent.cpp:378
			const Landmark * lpLandmark;

			// BrnTriggerQueryManagerDebugComponent.cpp:379
			int32_t liStartingGridIndex;

			{
				// BrnTriggerQueryManagerDebugComponent.cpp:383
				const StartingGrid * lpStartingGrid;

				// BrnTriggerQueryManagerDebugComponent.cpp:384
				int32_t liStartingPointIndex;

				{
					// BrnTriggerQueryManagerDebugComponent.cpp:388
					Vector3 lPosition;

					// BrnTriggerQueryManagerDebugComponent.cpp:389
					Vector3 lRotation;

					rw::math::vpu::operator*(/* parameters */);
				}
			}
		}
	}
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:335
		Vector3 lPosition;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	BrnTrigger::GenericRegion::GetType(/* parameters */);
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:239
		const GenericRegion * lpGenericRegion;

		BrnTrigger::GenericRegion::GetTypeName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnTrigger::GenericRegion::GetType(/* parameters */);
		{
			// BrnTriggerQueryManagerDebugComponent.cpp:248
			CgsID lGroupID;

			BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsContainers::Array<uint16_t,256u>::FindFirstInstanceOf(/* parameters */);
	CgsContainers::Array<uint16_t,256u>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnTriggerQueryManagerDebugComponent.cpp:230
		const Landmark * lpLandmark;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTrigger::SpawnLocation::GetJunkyardId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::SpawnLocation::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::DerivedCarArray::GetParentId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::DerivedCarArray::DEBUG_PrintArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDerivedCars.h:250
		uint32_t luCurrentVehicle;

		// BrnDerivedCars.h:251
		char[13] lacName;

		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	}
	GetParentId(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetItem(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::operator[](/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGameState::TriggerQueryManager::GetActiveTrigger(int32_t  liActiveTriggerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::BoxRegion::GetDimensionX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetDimensionY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManager::GetActiveTriggerCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(const char *  lpcString) {
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

void BrnProgression::ProgressionManager::AddStuntElement(BrnGameState::StuntElementType  leStuntElementType, CgsID  lId, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddStuntElement(BrnGameState::StuntElementType  leStuntElementType, CgsID  lId, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::IsStuntElementDone(BrnGameState::StuntElementType  leStuntElementType, CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Find(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<CgsID,512u>::Insert(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllStuntTypeButOne(BrnGameState::StuntElementType  leStuntElementType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManagerDebugComponent.cpp:222
		BrnTrigger::GenericRegion::Type leType;

		// BrnStuntManagerDebugComponent.cpp:249
		bool lbFirstTrigger;

		// BrnStuntManagerDebugComponent.cpp:250
		const TriggerData * lpTriggerData;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
		// BrnStuntManagerDebugComponent.cpp:252
		int32_t liGenericRegionIndex;

		{
			// BrnStuntManagerDebugComponent.cpp:254
			const GenericRegion * lpGenericRegion;

			BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
			{
				// BrnStuntManagerDebugComponent.cpp:258
				WorldRegion lTriggerWorldRegion;

				BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
				BrnTrigger::TriggerRegion::GetId(/* parameters */);
				BrnProgression::ProgressionManager::AddStuntElement(/* parameters */);
				BrnWorld::WorldRegion::GetCounty(/* parameters */);
				BrnProgression::ProgressionManager::GetProfile(/* parameters */);
				BrnProgression::Profile::IsStuntElementDone(/* parameters */);
				CgsContainers::Set<CgsID,512u>::Insert(/* parameters */);
			}
		}
	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllBillboardsButOneCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllSmashesButOneCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManagerDebugComponent::CompleteAllJumpsButOneCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsOnlineGameMode(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::ModeManager::IsOnlineGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::CurrentGameModeAllowsRevengeTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(const const TakedownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[117] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::SimpleStrStream::SimpleStrStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::TakedownManagerDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManagerDebugComponent.cpp:123
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	{
	}
}

void CgsModule::VariableEventQueue<256,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<256,16>::Clear() {
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

void CgsModule::VariableEventQueue<256,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsSystem::Time::SetFloatVal(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnResource::GameDataIO::RequestInterface<3072>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<3072,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<3072,16>::Clear() {
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

void BrnResource::GameDataIO::RequestInterface<3072>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequestInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::FrameRateTypeRequestInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:286
		int32_t liMappingIndex;

		// BrnNetworkModuleGameStateIOInterfaces.h:287
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
}

void BrnGameState::GameStateModuleIO::GameStateToControllerInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStateToControllerInterface::Clear() {
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

void BrnGameState::GameStateModuleIO::InterestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::InterestData,8u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::State::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<256,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<256,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<256,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<256,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[159] __PRETTY_FUNCTION__;

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

void BrnGameState::RoadRageModeScoring::DoesDamageCriticalMessageNeedToBeSent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::ResetDamageCriticalMessageFlag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Modulo(const VecFloat  a, const VecFloat  modulus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic divResult;

		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic truncDivResult;

		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:94
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// scalar_operation_inline.h:94
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:94
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// scalar_operation_inline.h:94
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:94
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void BrnGameState::ScoringSystem::HasAnyCarFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetNewLeader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetLead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator+(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTime.h:146
	Time & lNewTime;

	{
		// CgsTime.h:146
		Time lNewTime;

		{
			// CgsTime.h:157
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsSystem::Time::operator>=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator+=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:205
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::GetNewLast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetLast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetTotalOnlineLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetOnlineLandmarksVisited(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2605
		CarData * lpCarData;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::AllocateObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsObjectPool.h:192
		int32_t liFreeObjectIndex;

		{
			// CgsObjectPool.h:193
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::BitArray<8u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsCarInShowtime(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineEvent(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetAllActiveCarsRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPositionedCarDistanceToFinish(int32_t  liRacePosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPositionedCarIndex(int32_t  liRacePosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNextTypeOfCarTypeUnlock(BrnResource::ECarType  leCarType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2579
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::AddGameModeTypeToTotals(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::TranslateRaceEventModeToGameMode(BrnProgression::RaceEventData::EModeType  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::GetModeStringForEventData(BrnProgression::RaceEventData::EModeType  lMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1732
		BrnGameState::GameStateModuleIO::EGameModeType leType;

	}
}

void BrnProgression::ProgressionDebugComponent::Construct(BrnProgression::ProgressionManager *  lpProgressionManager, BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:95
		int32_t liIndex;

	}
}

void BrnGameState::GameStateModule::TranslateOnlineRaceEventModeToGameMode(BrnProgression::RaceEventData::EOnlineModeType  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SpecificGameModeEventInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManager::GetTrafficData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:598
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::LightTriggerId::Set(uint32_t  luHull, uint32_t  luLightTriggerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightTrigger.h:209
		uint32_t luIndex;

	}
}

void BrnWorld::TriggerId::Set(uint8_t  lu8Owner, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetEventJunctionID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::FindOnlineEvent(uint32_t  luEventJunctionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.h:444
		uint32_t luIndex;

		{
			// BrnProgressionData.h:446
			EventJunction * lpEventJunction;

		}
	}
}

void BrnProgression::EventJunction::GetOnlineEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetCheckpointCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetCheckpointData(int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CheckpointData::GetLandmarkId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::AddEvent(int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, LandmarkIndex *  lpLandmarks, int32_t  liNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1604
		uint32_t luEventIndex;

		// BrnGameStateSharedIO.h:1605
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event lNewEvent;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, LandmarkIndex *  lpLandmarks, int32_t  liNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1488
		int32_t liIndex;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::Append(const const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetSpecificGameModeEventInterface(const SpecificGameModeEventInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetSpecificGameModeEventInterfaceIsValid(bool  lbSpecificGameModeEventInterfaceIsValid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:335
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::SendSpecificPreSetRacesModesAction(BrnGameState::GameStateModuleIO::EGameModeType  leRequiredGameMode, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5685
		uint32_t luHullIndex;

		// BrnGameStateModule.cpp:5686
		uint32_t luHullCount;

		// BrnGameStateModule.cpp:5687
		BrnTraffic::Hull * lpHull;

		// BrnGameStateModule.cpp:5689
		uint32_t luLightTriggerIndex;

		// BrnGameStateModule.cpp:5690
		uint32_t luLightTriggerCount;

		// BrnGameStateModule.cpp:5691
		LightTrigger * lpLightTrigger;

		// BrnGameStateModule.cpp:5693
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		// BrnGameStateModule.cpp:5695
		LightTriggerId lTriggerId;

		// BrnGameStateModule.cpp:5697
		SpecificGameModeEventInterface lSpecificGameModeEvents;

		// BrnGameStateModule.cpp:5698
		const BrnProgression::RaceEventData * lpEventData;

		// BrnGameStateModule.cpp:5699
		int32_t liEventID;

		// BrnGameStateModule.cpp:5700
		LandmarkIndex[16] laLandmarkIndices;

		// BrnGameStateModule.cpp:5701
		const Landmark * lpLandmark;

		// BrnGameStateModule.cpp:5703
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnGameStateModule.cpp:5704
		const TrafficData * lpTrafficData;

		// BrnGameStateModule.cpp:5705
		const TriggerData * lpTriggerData;

		// BrnGameStateModule.cpp:5707
		int32_t liNumCheckpoints;

		// BrnGameStateModule.cpp:5708
		int32_t liCheckpointIndex;

		// BrnGameStateModule.cpp:5710
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

		SpecificGameModeEventInterface(/* parameters */);
		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		TriggerQueryManager::GetTrafficData(/* parameters */);
		TriggerQueryManager::GetTriggerData(/* parameters */);
		CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		GameStateModuleIO::SpecificGameModeEventInterface::Construct(/* parameters */);
		BrnTraffic::LightTriggerId::Set(/* parameters */);
		BrnWorld::TriggerId::Set(/* parameters */);
		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		BrnTraffic::LightTriggerId::GetHull(/* parameters */);
		BrnTraffic::LightTriggerId::GetLightTriggerIndex(/* parameters */);
		BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
		{
		}
		BrnProgression::EventJunction::GetID(/* parameters */);
		BrnProgression::EventJunction::GetOfflineEvent(/* parameters */);
		GameStateModuleIO::SpecificGameModeEventInterface::AddEvent(/* parameters */);
		GameStateModuleIO::OutputBuffer::SetSpecificGameModeEventInterface(/* parameters */);
		GameStateModuleIO::OutputBuffer::SetSpecificGameModeEventInterfaceIsValid(/* parameters */);
	}
	BrnProgression::ProgressionData::FindOnlineEvent(/* parameters */);
	{
	}
	BrnProgression::EventJunction::GetID(/* parameters */);
	BrnProgression::EventJunction::GetOnlineEvent(/* parameters */);
	BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
	Event(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetItem(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
	GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
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

void BrnResource::VehicleList::GetSelectableVehicleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetSponsorVehicleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::GetUnlockType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::HasPlayerSeenTrainingType(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<256u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Set<CgsID,5u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,5u>::Find(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<CgsID,11u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::Find(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<CgsID,14u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::Find(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void BrnProgression::Profile::IsDriveThruDiscoverd(CgsID  lId, BrnTrigger::GenericRegion::Type  lDriveThruType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2485
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Set<CgsID,5u>::Contains(/* parameters */);
	CgsContainers::Set<CgsID,11u>::Contains(/* parameters */);
	CgsContainers::Set<CgsID,5u>::Contains(/* parameters */);
	CgsContainers::Set<CgsID,11u>::Contains(/* parameters */);
	CgsContainers::Set<CgsID,14u>::Contains(/* parameters */);
}

void BrnProgression::Profile::AreChromeCarsUnlocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GoldCarsHaveBeenUnlocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::ChromeCarsHaveBeenUnlocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Append(const const TrophyUnlockAction &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionData::GetTrophyUnlockCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetTrophyUnlock(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::TrophyUnlockData::GetUnlockType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::TrophyUnlockData::GetNumberForTrophyUnlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::TrophyUnlockData::GetCarUnlockID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetNumberOfCompleteRoadRulesRuledByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::CheckForOnlineEventCompletionTrophyUnlock(uint32_t  luNumberForTrophyUnlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetTotalPlayerOnlineVerticleTakdowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetBestPowerParkingBetweenOtherPlayersRating() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::RecordPowerParkingRating(int32_t  liRating, bool  lbBetweenOtherPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::DefeatRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::DefeatRivalCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::DefeatAllRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:994
		int32_t liRivalIndex;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::DefeatAllRivalsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<3072,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<3072,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<3072,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<3072,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<3072,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<3072,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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

void BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:269
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<3072>::LoadBundle(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcBundleName, bool  lbUseHDCache) {
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

void CgsResource::ResourceIO::ResourceRequestQueue<3072>::LoadBundle(const const LoadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcResourceName) {
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

void CgsResource::ResourceIO::ResourceRequestQueue<3072>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator=(const const ResourceHandle &  lHandle) {
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

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResource::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::operator++(const BrnWorld::ECounty &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldRegion.h:44
		BrnWorld::ECounty leOldEnumIndex;

	}
}

void BrnGameState::operator++(const BrnGameState::StuntElementType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateTypes.h:98
		BrnGameState::StuntElementType leOldEnumIndex;

	}
}

void BrnGameState::StuntManager::FindTriggersCounty(const GenericRegion *  lpGenericRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.h:307
		WorldRegion lWorldRegion;

		// BrnStuntManager.h:308
		uint8_t lValue;

	}
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::LoadTrafficLanes(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1441
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::MakeTrafficLaneId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnResource::GameDataIO::GameDataEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetTrafficLaneDataResponse::GetTrafficLaneHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::LoadAILanes(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1428
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::MakeAIDataId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::GetAILanes(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1766
		GetGameDataEvent lRequest;

	}
}

void BrnResource::GameDataIO::GetAIDataResponse::GetAIDataHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::Race,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::BaseRace::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::RoamingLocation::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

extern void SetUpAllEventStartsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EventStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WorldMap2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetDistrictMapResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTrigger::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::JunctionLogicBox::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::AddEventStart(uint32_t  luJunctionID, int32_t  luEventID, LightTriggerId  lTrafficLightTriggerId, Vector3  lPosition, BrnWorld::ECounty  leCounty, uint16_t  lu16SectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1355
		uint32_t luEventIndex;

		// BrnGameStateSharedIO.h:1356
		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart lNewEventStart;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetJunctionID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::Construct(uint32_t  luJunctionID, int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, Vector3  lPosition, BrnWorld::ECounty  leCounty, uint16_t  lu16SectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::Append(const const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetSetUpAllEventStartsInterface(const SetUpAllEventStartsInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetSetUpAllEventStartsInterfaceIsValid(bool  lbSetUpAllEventStartsInterfaceIsValid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:329
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::SendSetUpAllEventStartsMessage(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5427
		uint32_t luHullIndex;

		// BrnGameStateModule.cpp:5428
		uint32_t luHullCount;

		// BrnGameStateModule.cpp:5429
		BrnTraffic::Hull * lpHull;

		// BrnGameStateModule.cpp:5431
		uint32_t luLightTriggerIndex;

		// BrnGameStateModule.cpp:5432
		uint32_t luLightTriggerCount;

		// BrnGameStateModule.cpp:5433
		LightTrigger * lpLightTrigger;

		// BrnGameStateModule.cpp:5435
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		// BrnGameStateModule.cpp:5437
		LightTriggerId lTriggerId;

		// BrnGameStateModule.cpp:5440
		SetUpAllEventStartsInterface lSetUpAllEventStarts;

		// BrnGameStateModule.cpp:5441
		const TrafficData * lpTrafficData;

		// BrnGameStateModule.cpp:5443
		const BinaryFileResource * lpBinaryFileResource;

		// BrnGameStateModule.cpp:5444
		WorldMap2D lWorldMap;

		// BrnGameStateModule.cpp:5445
		uint8_t luMapValue;

		// BrnGameStateModule.cpp:5447
		LinearMalloc lMalloc;

		// BrnGameStateModule.cpp:5448
		char * lpcTempBuffer;

		// BrnGameStateModule.cpp:5451
		AISectionPointMap * lpMap;

		SetUpAllEventStartsInterface(/* parameters */);
		TriggerQueryManager::GetTrafficData(/* parameters */);
		CgsResource::BinaryFileResource::GetData(/* parameters */);
		GameStateModuleIO::SetUpAllEventStartsInterface::Construct(/* parameters */);
		{
			// BrnGameStateModule.cpp:5486
			uint16_t luAISectionForPos;

			BrnTraffic::LightTriggerId::Set(/* parameters */);
		}
		BrnWorld::TriggerId::Set(/* parameters */);
		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		BrnTraffic::LightTriggerId::GetHull(/* parameters */);
		BrnTraffic::LightTriggerId::GetLightTriggerIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::SetSetUpAllEventStartsInterfaceIsValid(/* parameters */);
		BrnTraffic::LightTrigger::GetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::Matrix44AffineFromYRotationAngle(/* parameters */);
		CgsWorld::WorldMap2D::GetValue(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_cts(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		{
		}
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
		{
		}
		BrnTraffic::LightTrigger::GetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::Matrix44AffineFromYRotationAngle(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_cts(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
		{
		}
		BrnTraffic::JunctionLogicBox::GetID(/* parameters */);
		GameStateModuleIO::SetUpAllEventStartsInterface::AddEventStart(/* parameters */);
		GameStateModuleIO::OutputBuffer::SetSetUpAllEventStartsInterface(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength(/* parameters */);
	GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

void BrnGameState::StartGameModeParams::GetEventData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetRankScore(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceEventData.h:883
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnMath::RoundWithNumSignificantFigures(float32_t  lfRoundNo, float32_t  lfNoSignificantFigures) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:193
		float32_t lfABSRoundNo;

		// BrnMathUtils.h:194
		float32_t lfCutOffValue;

		// BrnMathUtils.h:196
		float32_t lfScaler;

	}
}

void rw::math::fpu::Pow(float  base, float  exponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:373
		union VectorFloatUnion {
			// scalar.h:374
			float[4] vecValue;

			// scalar.h:375
			float fValue;

		}
		// scalar.h:377
		VectorFloatUnion baseU;

		// scalar.h:377
		VectorFloatUnion exponentU;

		// scalar.h:377
		VectorFloatUnion resultU;

	}
}

void std::powf4(float[4]  x, float[4]  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// powf4.h:8
		int[4] zeros;

		// powf4.h:9
		unsigned int[4] zeromask;

		// powf4.h:11
		unsigned int[4] negmask;

		// powf4.h:13
		float[4] sbit;

		// powf4.h:14
		float[4] absx;

		// powf4.h:15
		float[4] absy;

		// powf4.h:16
		unsigned int[4] oddy;

		// powf4.h:19
		float[4] res;

	}
}

void std::log2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// log2f4.h:16
		int[4] zeros;

		// log2f4.h:17
		float[4] ones;

		// log2f4.h:20
		int[4] expmask;

		// log2f4.h:21
		int[4] xexp;

		// log2f4.h:24
		unsigned int[4] mask;

		// log2f4.h:28
		float[4] x1;

		// log2f4.h:29
		float[4] z;

		// log2f4.h:30
		float[4] w;

		// log2f4.h:31
		float[4] polywneg;

		// log2f4.h:35
		float[4] y;

		// log2f4.h:36
		float[4] zz1;

		// log2f4.h:37
		float[4] zz2;

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

void std::exp2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// exp2f4.h:62
		int[4] ix;

		// exp2f4.h:63
		unsigned int[4] overflow;

		// exp2f4.h:64
		unsigned int[4] underflow;

		// exp2f4.h:65
		float[4] frac;

		// exp2f4.h:65
		float[4] frac2;

		// exp2f4.h:65
		float[4] frac4;

		// exp2f4.h:66
		float[4] exp_int;

		// exp2f4.h:66
		float[4] exp_frac;

		// exp2f4.h:67
		float[4] result;

		// exp2f4.h:68
		float[4] hi;

		// exp2f4.h:68
		float[4] lo;

		// exp2f4.h:69
		float[4] zeros;

		// exp2f4.h:70
		float[4] bias;

	}
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

void rw::math::fpu::Sgn<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::FastFloatToInt32<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameStateModuleIO::GameStats::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActionData.h:346
		int32_t liIntValueTypeIndex;

		// BrnGameActionData.h:347
		int32_t liIdValueTypeIndex;

		// BrnGameActionData.h:348
		int32_t liFloatValueTypeIndex;

		// BrnGameActionData.h:350
		int32_t liTakedownTypeIndex;

		// BrnGameActionData.h:351
		int32_t liScoreTypeIndex;

		// BrnGameActionData.h:352
		BrnGameState::StuntElementType leStuntElementType;

		{
			// BrnGameActionData.h:382
			BrnWorld::ECounty leCounty;

		}
	}
}

void BrnProgression::Profile::GetDistanceDrivenOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetRealTimePlayed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetBestPowerParkingRating() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::IsSelectable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetMaxStuntElementPerCounty(BrnGameState::StuntElementType  leStuntElementType, BrnWorld::ECounty  leCounty, int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetCurrentStuntElementPerCounty(BrnGameState::StuntElementType  leStuntElementType, BrnWorld::ECounty  leCounty, int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetTakedownTypeCount(TakedownType  leTakedownType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetTakedownTypeCount(BrnGameState::ETakedownType  leTakedownType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetRoadsRuledCount(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetTotalRoads(int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetValue(BrnGameState::GameStateModuleIO::GameStats::IdValueType  leIdValueType, CgsID  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetRivalData(int32_t  liRivalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::GetTakedownFromCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCompletedBarrelRolls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCompletedAirSpinAngle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStats::SetValue(BrnGameState::GameStateModuleIO::GameStats::FloatValueType  leFloatValueType, float32_t  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCompletedDriftDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetBestBurnoutChain() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNewOncomingMaximum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetAirMaximum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNewHighShowtimeScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetTotalCarsToShutDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:1834
		int32_t liTotalCarsToShutDown;

		{
			// BrnProfile.h:1836
			int32_t liRivalsIndex;

		}
	}
}

void BrnProgression::Profile::SetBestStuntRunScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::BaseRace::SetId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::BaseRace::SetName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Race() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::Race,64u>::Append(const const Race &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<30u>::GetFirstNonZeroBit() {
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

void CgsContainers::BitArray<30u>::GetZeroBitInInt(int64_t  liValue) {
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

void CgsContainers::BitArray<30u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::Append(const const MugshotInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::UniquePlayerIDPS3::IsEqualTo(const const UniquePlayerIDPS3 &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEqualTo(const const PlayerName &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UsernameCompare(const char *  lpacName1, const char *  lpacName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,2000u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,2000u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetEventJunctionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void BrnProgression::ProgressionDebugComponent::DrawRankAsBar(CgsDev::Debug2DImmediateRender *  lpDisplay, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, RGBA  lForeColourRGBA, Vector2  lTop, char *  lpcEventName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:662
		float32_t lfCurrentEventRatio;

		// BrnProgressionDebugComponent.cpp:667
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:668
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:670
		int32_t liEventDifficulty;

		// BrnProgressionDebugComponent.cpp:678
		Vector2 lBottom;

		// BrnProgressionDebugComponent.cpp:680
		RGBA lBackColourRGBA;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::fpu::FastFloatToInt32<float>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddEventWinsForProfileEvents(int32_t  liNumWinsToAdd, BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:859
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:860
		uint32_t liEvent;

		// BrnProgressionDebugComponent.cpp:864
		int32_t liWinsAddedSoFar;

		ProgressionManager::GetProfile(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:870
		ProfileEvent * lpEvent;

		// BrnProgressionDebugComponent.cpp:871
		uint32_t luEventID;

		// BrnProgressionDebugComponent.cpp:872
		const BrnProgression::RaceEventData * lpRaceEventData;

		Profile::GetEvent(/* parameters */);
		ProgressionManager::GetProgressionData(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
		ProgressionData::FindOfflineEvent(/* parameters */);
	}
	ProfileEvent::EnableFlags(/* parameters */);
	ProfileEvent::EnableFlags(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnProgression::Profile::AddToMedalCountFromTheStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddWinForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AddStuntWins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:830
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:831
		int32_t liNumWins;

		ProgressionManager::GetProfile(/* parameters */);
	}
	Profile::AddToMedalCountFromTheStart(/* parameters */);
	ProgressionManager::RequestMedalUpdate(/* parameters */);
	ProgressionManager::GetProfile(/* parameters */);
	Profile::AddWinForGameMode(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddWinsStuntCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AddMarkedManWins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:804
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:805
		int32_t liNumWins;

		ProgressionManager::GetProfile(/* parameters */);
	}
	Profile::AddToMedalCountFromTheStart(/* parameters */);
	ProgressionManager::RequestMedalUpdate(/* parameters */);
	ProgressionManager::GetProfile(/* parameters */);
	Profile::AddWinForGameMode(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddWinsMarkedManCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AddRoadRageWins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:777
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:778
		int32_t liNumWins;

		ProgressionManager::GetProfile(/* parameters */);
	}
	Profile::AddToMedalCountFromTheStart(/* parameters */);
	ProgressionManager::RequestMedalUpdate(/* parameters */);
	ProgressionManager::GetProfile(/* parameters */);
	Profile::AddWinForGameMode(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddWinsRoadRageCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AddRaceWins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:749
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:750
		int32_t liNumWins;

		ProgressionManager::GetProfile(/* parameters */);
	}
	Profile::AddToMedalCountFromTheStart(/* parameters */);
	ProgressionManager::RequestMedalUpdate(/* parameters */);
	ProgressionManager::GetProfile(/* parameters */);
	Profile::AddWinForGameMode(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddWinsRaceCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetDerivedPatternVehicleCollection(const CgsID  lPlayerCarCgsID, const DerivedCarArray &  lDerivedCarArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::AddSpecialEventWins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:902
		Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:903
		int32_t liNumWinsToAdd;

		// BrnProgressionDebugComponent.cpp:904
		uint32_t liEvent;

		// BrnProgressionDebugComponent.cpp:905
		uint32_t liIndex;

		// BrnProgressionDebugComponent.cpp:920
		int32_t liWinsAddedSoFar;

		ProgressionManager::GetProfile(/* parameters */);
	}
	Profile::AddToMedalCountFromTheStart(/* parameters */);
	ProgressionManager::RequestMedalUpdate(/* parameters */);
	{
		// BrnProgressionDebugComponent.cpp:926
		ProfileEvent * lpEvent;

		// BrnProgressionDebugComponent.cpp:927
		uint32_t luEventID;

		// BrnProgressionDebugComponent.cpp:928
		const BrnProgression::RaceEventData * lpRaceEventData;

		Profile::GetEvent(/* parameters */);
		ProgressionManager::GetProgressionData(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
		ProgressionData::FindOfflineEvent(/* parameters */);
		{
			// BrnProgressionDebugComponent.cpp:939
			const CgsID lPlayerCarCgsID;

			// BrnProgressionDebugComponent.cpp:943
			DerivedCarArray lDerivedCarArray;

			ProgressionManager::GetDerivedPatternVehicleCollection(/* parameters */);
			DerivedCarArray(/* parameters */);
			CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
			ProfileEvent::EnableFlags(/* parameters */);
			CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
			ProfileEvent::EnableFlags(/* parameters */);
			{
				// BrnProgressionDebugComponent.cpp:954
				CarData * lpCarData;

				CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
			}
			CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		}
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::AddSpecialEventWinsCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetFlag(BrnProgression::RaceEventData::EFlags  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetStartRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetAddRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::RenderRaceEventData(CgsDev::Debug2DImmediateRender *  lpDisplay, const BrnProgression::RaceEventData *  lpEventData, const CgsDev::StrStream &  lString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	RaceEventData::GetCheckpointData(/* parameters */);
	CheckpointData::GetLandmarkId(/* parameters */);
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

void BrnProgression::ProgressionData::GetOfflineEvent(uint32_t  luEventJunctionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetEventJunction(uint32_t  luEventJunctionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::DEBUG_GetTriggerQueryManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TriggerQueryManager::GetPlayerCurrentTrafficLightId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::RenderRaceEvents(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1362
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:1363
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:1367
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnProgressionDebugComponent.cpp:1384
		TriggerQueryManager * lpTriggerQueryManager;

		// BrnProgressionDebugComponent.cpp:1385
		const TrafficData * lpTrafficData;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	ProgressionManager::GetProgressionData(/* parameters */);
	{
		// BrnProgressionDebugComponent.cpp:1370
		uint32_t luIndex;

		{
			// BrnProgressionDebugComponent.cpp:1372
			const BrnProgression::RaceEventData * lpEventData;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		ProgressionData::GetOfflineEvent(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ProgressionData::GetEventJunction(/* parameters */);
		EventJunction::GetID(/* parameters */);
	}
	BrnGameState::ModeManager::DEBUG_GetTriggerQueryManager(/* parameters */);
	BrnGameState::TriggerQueryManager::GetTrafficData(/* parameters */);
	{
		// BrnProgressionDebugComponent.cpp:1390
		LightTriggerId lLightTriggerId;

		// BrnProgressionDebugComponent.cpp:1391
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		BrnGameState::TriggerQueryManager::GetPlayerCurrentTrafficLightId(/* parameters */);
		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnTraffic::JunctionLogicBox::GetEventJunctionID(/* parameters */);
		{
			// BrnProgressionDebugComponent.cpp:1397
			const BrnProgression::RaceEventData * lpEventData;

			ProgressionData::FindOfflineEvent(/* parameters */);
		}
		EventJunction::GetID(/* parameters */);
		EventJunction::GetOfflineEvent(/* parameters */);
		ProgressionData::FindOnlineEvent(/* parameters */);
		BrnTraffic::JunctionLogicBox::GetEventJunctionID(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	EventJunction::GetID(/* parameters */);
	EventJunction::GetOnlineEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::RenderProfileEvents(CgsDev::Debug2DImmediateRender *  lpDisplay, const BrnProgression::Profile *  lpProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1542
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:1543
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:1545
		uint32_t luEventCount;

		// BrnProgressionDebugComponent.cpp:1546
		uint32_t luRankWin;

		// BrnProgressionDebugComponent.cpp:1547
		uint32_t luNonRankWin;

		// BrnProgressionDebugComponent.cpp:1548
		uint32_t luSpecialEventsWonBefore;

		// BrnProgressionDebugComponent.cpp:1549
		uint32_t luTotalWinsForCurrentRank;

		// BrnProgressionDebugComponent.cpp:1550
		uint32_t luEventStart;

		// BrnProgressionDebugComponent.cpp:1551
		uint32_t luEventEnd;

		// BrnProgressionDebugComponent.cpp:1552
		uint32_t luTotalWinsFromTheStart;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Profile::GetEventCount(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnProgressionDebugComponent.cpp:1563
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnProgressionDebugComponent.cpp:1564
		int8_t li8Rank;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Profile::GetTotalWinCount(/* parameters */);
	{
	}
	ProfileEvent::IsFlagSet(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Profile::GetMedalCountFromTheStart(/* parameters */);
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
		// BrnProgressionDebugComponent.cpp:1610
		uint32_t luEvent;

		{
			// BrnProgressionDebugComponent.cpp:1614
			const ProfileEvent * lpEvent;

			// BrnProgressionDebugComponent.cpp:1618
			char[6] lpszMedal;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Profile::GetEvent(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
	}
	ProgressionManager::GetProgressionData(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	ProgressionData::GetProgressionRankCount(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	ProgressionData::GetProgressionRankData(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::RivalData::GetCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetUnlockRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetPursuitTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::RenderProfileRivals(CgsDev::Debug2DImmediateRender *  lpDisplay, const BrnProgression::Profile *  lpProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1662
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:1663
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:1667
		int32_t liRivalIndex;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnProgressionDebugComponent.cpp:1671
		const RivalData * lpRivalData;

		// BrnProgressionDebugComponent.cpp:1672
		const Rival * lpRival;

		// BrnProgressionDebugComponent.cpp:1673
		BrnProgression::RivalData::EState leState;

		Profile::GetRivalData(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		RivalData::GetState(/* parameters */);
		{
			// BrnProgressionDebugComponent.cpp:1679
			const char * lpszState;

			// BrnProgressionDebugComponent.cpp:1708
			char[13] lacCarName;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			RivalData::GetRivalId(/* parameters */);
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
	Profile::GetRivalCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

void BrnProgression::Profile::GetSpawnWheelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponentSet::GetPlayerCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponentSet::GetCarOpponent(int32_t  liCarOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponent::GetCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponentSet::GetOpponentCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:607
		uint32_t luCarIndex;

		ProgressionManager::GetProgressionData(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:611
		const CarOpponentSet * lpCarOpponentSet;

		// BrnProgressionDebugComponent.cpp:612
		CgsDev::SimpleStrStream lSimpleStrStream;

		// BrnProgressionDebugComponent.cpp:613
		char[13] lCgsIDString;

		// BrnProgressionDebugComponent.cpp:614
		int32_t liOpponentIndex;

	}
	ProgressionManager::GetProgressionData(/* parameters */);
	CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	CarOpponentSet::GetCarOpponent(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CarOpponentSet::GetOpponentCount(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:477
		const BrnProgression::Profile * lpProfile;

		// BrnProgressionDebugComponent.cpp:478
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:479
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:480
		char[13] lacSpawnCarName;

		// BrnProgressionDebugComponent.cpp:481
		char[13] lacSpawnWheelName;

		// BrnProgressionDebugComponent.cpp:482
		char[13] lacCurrentCarName;

		// BrnProgressionDebugComponent.cpp:483
		char[13] lacCurrentWheelName;

		// BrnProgressionDebugComponent.cpp:545
		float32_t lfTopX;

		// BrnProgressionDebugComponent.cpp:546
		float32_t lfTopY;

		// BrnProgressionDebugComponent.cpp:547
		float32_t lfOffset;

		// BrnProgressionDebugComponent.cpp:549
		Vector2 lTop;

		CgsDev::StrStream::StrStream(/* parameters */);
		Profile::GetSpawnCarId(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumRankWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumRankWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumRankWinsForGameMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetNumRankWinsForGameMode(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::StreetManager::GetRoadCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetStuntElementCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::StuntManager::GetMaxStuntCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetStuntElementCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::StuntManager::GetMaxJumpCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetStuntElementCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::StuntManager::GetMaxSmashCount(/* parameters */);
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
		Profile::GetDriveThrusFound(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Profile::GetEventCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
	}
	{
		// BrnProgressionDebugComponent.cpp:579
		char[10240] laBuffer;

		// BrnProgressionDebugComponent.cpp:580
		CgsDev::StrStream lString;

		// BrnProgressionDebugComponent.cpp:581
		int32_t liRivalIndex;

		// BrnProgressionDebugComponent.cpp:582
		float32_t lfYOffset;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			// BrnProgressionDebugComponent.cpp:592
			const Rival * lpRival;

			// BrnProgressionDebugComponent.cpp:593
			char[13] lacCarName;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			Rival::GetName(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetRival(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::RichPresenceManagerBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateRichPresenceManagerBase.cpp:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateRichPresenceManagerBase.cpp:138
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateRichPresenceManagerBase.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateRichPresenceManagerBase.cpp:140
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::RichPresenceManagerPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::GetFreeburnChallengeList(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1688
		GetFreeburnChallengeListRequest lRequest;

	}
}

void BrnResource::GameDataIO::GetFreeburnChallengeListRequest::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeFreeburnChallengeListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetFreeburnChallengeListResponse::GetFreeburnChallengeListPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::GetVehicleList(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1676
		GetVehicleListRequest lRequest;

	}
}

void BrnResource::GameDataIO::GetVehicleListRequest::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeVehicleListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehicleListResponse::GetVehicleListPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::GetWheelList(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1712
		GetWheelListRequest lRequest;

	}
}

void BrnResource::GameDataIO::GetWheelListRequest::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeWheelListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWheelListResponse::GetWheelListPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:141
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:142
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:143
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::ResourcePtr(const const ResourcePtr<BrnWorld::GlobalColourPalette> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::Prepare(const VehicleList *  lpVehicleList, const BrnResource::WheelList *  lpWheelList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::Prepare(const VehicleList *  lpVehicleList, const BrnResource::WheelList *  lpWheelList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, IOBufferStack *  lpOutputBufferStack, const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:424
		bool lbReturnValue;

		// BrnGameStateModule.cpp:425
		HeapMalloc * lpNetworkHeapMalloc;

	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::GetFreeburnChallengeList(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetFreeburnChallengeListRequest>(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameStateModule.cpp:503
		const CgsModule::Event * lpEvent;

		// BrnGameStateModule.cpp:504
		int32_t liEventSize;

		// BrnGameStateModule.cpp:508
		uint32_t liEventId;

		// BrnGameStateModule.cpp:515
		const GetFreeburnChallengeListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameStateModule.cpp:518
			CgsDev::StrStream lStrStream;

		}
	}
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::GetVehicleList(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetVehicleListRequest>(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameStateModule.cpp:543
		const CgsModule::Event * lpEvent;

		// BrnGameStateModule.cpp:544
		int32_t liEventSize;

		// BrnGameStateModule.cpp:548
		uint32_t liEventId;

		// BrnGameStateModule.cpp:555
		const GetVehicleListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		BrnResource::GameDataIO::GetVehicleListResponse::GetVehicleListPtr(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::GetWheelList(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetWheelListRequest>(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameStateModule.cpp:586
		int32_t liEventSize;

		// BrnGameStateModule.cpp:587
		const CgsModule::Event * lpEvent;

		// BrnGameStateModule.cpp:591
		uint32_t liEventId;

		// BrnGameStateModule.cpp:598
		const GetWheelListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameStateModule.cpp:601
			CgsDev::StrStream lStrStream;

		}
	}
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<3072>::AcquireResource(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameStateModule.cpp:625
		int32_t liEventSize;

		// BrnGameStateModule.cpp:626
		const CgsModule::Event * lpEvent;

		// BrnGameStateModule.cpp:627
		const AcquireResourceResponse * lpAcquire;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator=(/* parameters */);
	}
	BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	{
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	{
	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	CarSelectManager::Prepare(/* parameters */);
	OnlineCarSelectManager::Prepare(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		// BrnGameStateModule.cpp:596
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameStateModule.cpp:553
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameStateModule.cpp:558
		CgsDev::StrStream lStrStream;

	}
	{
	}
	{
	}
	{
		// BrnGameStateModule.cpp:513
		CgsDev::StrStream lStrStream;

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

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::ControllerToGameStateInterface::GetActiveControllerPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetRoadRulesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsTimeRuleActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsValidRoad(int32_t  liStreetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerToGameStateInterface(/* parameters */);
	GameStateModuleIO::ControllerToGameStateInterface::GetActiveControllerPort(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	{
		// BrnGameStateRichPresenceManagerBase.cpp:389
		BrnGameState::RichPresenceManagerBase::ERichPresenceStates leNewType;

	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateRichPresenceManagerBase.cpp:383
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateRichPresenceManagerBase.cpp:382
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetTriggerEntityOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:207
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::GetTriggerQueryResultEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetPlayerIsInStartRegion(bool  lbIsInStartRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1024,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnWorld::TriggerEntityModuleIO::OutLineTestResultEvent::GetTriggerIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerQueryId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void PackedIndex::SetPackedData(int32_t  lPackedData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void PackedIndex::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void PackedIndex::GetActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerQueryId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint16_t,32u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SoundTriggerAction::SetTriggerActive(BrnTrigger::GenericRegion::Type  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6044
		uint32_t luActualIndex;

	}
}

void BrnWorld::TriggerId::SetOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SoundTriggerAction::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameStateModuleIO::SoundTriggerAction::ClearAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTriggerManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:284
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::AddTriggerRegion(int32_t  lOwner, const TriggerRegion *  lpTriggerRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:274
		InAddBoxTriggerEvent lEvent;

	}
}

extern void InAddBoxTriggerEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InAddTriggerEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:327
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:328
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// vector3_operation_inline.h:328
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::RemoveTrigger(TriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:297
		InRemoveTriggerEvent lEvent;

	}
}

void BrnTrigger::BoxRegion::GetPosition2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:175
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void CgsContainers::Array<uint16_t,256u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnGameStateModuleIO.h:266
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

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameActionQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::VariableEventQueue<13312,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

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

void CgsModule::VariableEventQueue<13312,16>::Append<256, 16>(const const VariableEventQueue<256,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<256,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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

extern void AddRivalAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetPersonalityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetPersonality(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AISectionsData::GetAISection(uint32_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::HasBeenHit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<6u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::SetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<6u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::GetHaveSet100PercentCompletedDate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::AchievementManagerPS3::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpPreWorldInputBuffer, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateAchievementManagerPS3.cpp:117
		AchievementsEarnedAction lAction;

		BrnProgression::Profile::GetNumAchievementsWritten(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::AchievementsEarnedAction>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::ASin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::asinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// asinf4.h:14
		unsigned int[4] positive;

		// asinf4.h:22
		unsigned int[4] gtHalf;

		// asinf4.h:31
		float[4] g;

		// asinf4.h:39
		float[4] denom;

		// asinf4.h:40
		float[4] num;

	}
}

void BrnProgression::Profile::SetTrainingAlreadySeen(BrnProgression::ETrainingType  leTrainingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionManager::OnPropHit(uint16_t  luZoneId, uint16_t  luPropId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::RecordPropHit(int32_t  liZoneIndex, int32_t  liPropIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:3037
		uint32_t muPropId;

		{
			// BrnProfile.h:3035
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnProfile.h:3036
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::BitArray<300000u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionManager::IsStuntElementDone(BrnGameState::StuntElementType  leStuntElementType, CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetAchievementManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetStuntElementCount(BrnGameState::StuntElementType  leStuntElementType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntManager::ClearActiveJump() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void BrnTrigger::GenericRegion::IsOneWay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetCameraType1() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetCameraCut1() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetCameraType2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetCameraCut2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetPlayerCarAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetLocation(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetCarData(CgsID  lCarModelId, CgsID  lCarWheelId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(bool  lbInCarSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(bool  lbDontStreamAudio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetKeepResetSection(bool  lbKeepReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateInviteManager::WriteDataToOuputBuffer(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToControllerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:293
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::GameStateToControllerInterface::GetBindRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Append(const const BaseEventQueue<CgsInput::InputIO::BaseInputEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameStateToControllerInterface::GetUnBindRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<30>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<30>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<30>::SetBit(const int32_t  liIndex) {
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

void BrnGameState::GameStateImageManagerBase::HandleImageGalleryDataRequest(const ImageGalleryDataRequestEvent *  lpImageGalleryDataReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1377
		int32_t liImageIndex;

		// BrnGameStateImageManagerBase.cpp:1378
		int32_t liNumImages;

		// BrnGameStateImageManagerBase.cpp:1379
		ImageGalleryDataAction lDataAction;

	}
	CgsContainers::FastBitArray<30>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<30>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryDataAction>(/* parameters */);
}

void BrnGameState::GameStateImageManagerBase::HandleImageGalleryCountRequest(const ImageGalleryCountRequestEvent *  lpImageGalleryCountReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1351
		ImageGalleryCountAction lCountAction;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryCountAction>(/* parameters */);
}

void CgsNetwork::UniquePlayerIDPS3::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::ProcessExportRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1266
		MugshotInfo * lpMugshotInfo;

		// BrnGameStateImageManagerBase.cpp:1267
		DXTDecodeImageAction lDxtDecodeImageAction;

		// BrnGameStateImageManagerBase.cpp:1268
		ShowPopupAction lShowPopupAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::DXTDecodeImageAction>(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowPopupAction>(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
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

void CgsNetwork::NetworkTexture::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::RequestImageSave(int32_t  liFileID, NetworkTexture *  lpTexture, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:645
		SaveImageAndAutoSaveAction lSaveImageAction;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SaveImageAndAutoSaveAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateImageManagerBase::HandleImageSaveEvent(const ImageToSaveEvent *  lpImageSaveEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, bool  lbIsInPostEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:467
		WorldRegion leWorldRegionForCapture;

		// BrnGameStateImageManagerBase.cpp:468
		DateAndTime lCaptureDate;

		// BrnGameStateImageManagerBase.cpp:469
		BrnGameState::GameStateModuleIO::EImageGalleryType leImageTypeToSave;

		// BrnGameStateImageManagerBase.cpp:470
		int32_t liExistingMugshotIndex;

		// BrnGameStateImageManagerBase.cpp:471
		int32_t liImageFileID;

	}
}

void CgsContainers::BitArray<3u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateImageManagerBase::UpdateImagesToRender(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:426
		int32_t liSlotIndex;

		{
			// BrnGameStateImageManagerBase.cpp:431
			ImageGalleryRenderImageAction lRenderImageAction;

			CgsContainers::BitArray<3u>::IsBitSet(/* parameters */);
		}
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryRenderImageAction>(/* parameters */);
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
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:140
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetDirtyTrickQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CheckForAllEventsBeingFound(const BrnProgression::Profile *  lpProfile, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6927
		uint32_t luEventIndex;

	}
	BrnProgression::Profile::GetEventCount(/* parameters */);
	{
		// BrnGameStateModule.cpp:6941
		AllEventsDiscoveredAction lAllEventsDiscoveredAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AllEventsDiscoveredAction>(/* parameters */);
	}
}

void BrnGameState::GameStateModule::CheckForAllEventsOfATypeFound(const BrnProgression::Profile *  lpProfile, InputBuffer::GameActionQueue *  lpActionQueue, BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6883
		uint32_t luEventIndex;

		// BrnGameStateModule.cpp:6884
		uint32_t luEventCountForSearchingType;

		// BrnGameStateModule.cpp:6885
		uint32_t luEventFoundCountForSearchingType;

		// BrnGameStateModule.cpp:6887
		const BrnProgression::ProgressionData * lpProgressionData;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	}
	CgsResource::SmallResource::GetMemoryResource(/* parameters */);
	BrnProgression::Profile::GetEvent(/* parameters */);
	{
		// BrnGameStateModule.cpp:6908
		AllEventsDiscoveredOfTypeAction lAllEventsDiscoveredOfTypeAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AllEventsDiscoveredOfTypeAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::SendDelayedActions(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AddGameAction<BrnGameState::GameStateModuleIO::WaitForStreamingAction>(/* parameters */);
}

void BrnGameState::GameStateModule::RequestUnpause(BrnGameState::GameStateModule::EPauseFlags  leUnpauseModule, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5888
		bool lbWasSimPaused;

		// BrnGameStateModule.cpp:5889
		bool lbWasAnythingPaused;

		// BrnGameStateModule.cpp:5895
		bool lbIsSimPaused;

		// BrnGameStateModule.cpp:5896
		bool lbIsAnythingPaused;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::UnpauseSimulationAction>(/* parameters */);
}

void BrnGameState::ModeManager::IsWaitingForModeDataToLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::FinishedLoadingDataForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::FinishStreaming(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6143
		SetLoadingStateAction lLoadingAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetLoadingStateAction>(/* parameters */);
	ModeManager::FinishedLoadingDataForMode(/* parameters */);
}

void BrnGameState::GameStateModule::RequestPause(BrnGameState::GameStateModule::EPauseFlags  lePauseModule, InputBuffer::GameActionQueue *  lpOutputActionQueue, bool  lbStalled, bool  lbWasStalled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5844
		bool lbWasSimPaused;

		// BrnGameStateModule.cpp:5845
		bool lbWasAnythingPaused;

		// BrnGameStateModule.cpp:5851
		bool lbIsSimPaused;

		// BrnGameStateModule.cpp:5852
		bool lbIsAnythingPaused;

	}
	IsSimPaused(/* parameters */);
	IsSimPaused(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PauseSimulationAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PauseOnlineAction>(/* parameters */);
}

void BrnGameState::GameStateModule::WaitForStreaming(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsOnlineGameMode(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
}

void BrnGameState::GameStateModule::PreparedForInvite(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5791
		PreparedForInviteAction lPreparedForInviteAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PreparedForInviteAction>(/* parameters */);
	}
}

extern void RequestRouteInfoAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SendRouteRequestAction(const LandmarkRouteRequestEvent *  lpRouteRequestEvent, InputBuffer::GameActionQueue *  lpOutputActionQueue, BrnAI::RouteMapModuleIO::RequestOwner  leRequestOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5622
		RequestRouteInfoAction lRouteRequestAction;

		// BrnGameStateModule.cpp:5626
		uint16_t luAISectionIndex;

		// BrnGameStateModule.cpp:5628
		int32_t liIndex;

	}
	RequestRouteInfoAction(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestRouteInfoAction>(/* parameters */);
	{
		// BrnGameStateModule.cpp:5657
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void SetLandmarkRacesAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SendSetLandmarkRacesAction(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5581
		LandmarkIndex lCurrentLandmarkIndex;

		// BrnGameStateModule.cpp:5586
		SetLandmarkRacesAction lSlamAction;

	}
	LandmarkIndex::operator std::int32_t(/* parameters */);
	SetLandmarkRacesAction(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetLandmarkRacesAction>(/* parameters */);
}

extern void SetUpAllDriveThrusAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>::Append(const const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::SendSetUpAllDriveThrusMessage(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5519
		SetUpAllDriveThrusAction lSetUpAllDriveThrusAction;

		// BrnGameStateModule.cpp:5523
		int32_t liGenericRegionCount;

		// BrnGameStateModule.cpp:5524
		int32_t liGenericRegionIndex;

		// BrnGameStateModule.cpp:5527
		const TriggerData * lpTriggerData;

		// BrnGameStateModule.cpp:5528
		int32_t liDriveThrusFound;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>::Construct(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegionCount(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
		// BrnGameStateModule.cpp:5533
		BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo lDriveThruInfo;

		// BrnGameStateModule.cpp:5534
		const GenericRegion * lpCurrentRegion;

		BrnTrigger::GenericRegion::IsDriveThru(/* parameters */);
	}
	BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
	{
		// BrnGameStateModule.cpp:5539
		Vector3 lDriveThruPos;

		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>::Append(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		BrnTrigger::TriggerRegion::GetId(/* parameters */);
		BrnTrigger::GenericRegion::GetType(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		{
			// BrnGameStateModule.cpp:5558
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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

void BrnGameState::GameStateModule::SendResultsFinishedAction(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5345
		FinishedModeResultsAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FinishedModeResultsAction>(/* parameters */);
	}
}

void BrnGameState::GameStateModule::SendVehicleImpactMessages(const VehicleImpactEvent *  lpImpactEvent, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5308
		ShowHudMessageAction lHudMessageAction;

		GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:5315
		PlayerHitRivalAction lImpactAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerHitRivalAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:5325
		RivalHitPlayerAction lImpactAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RivalHitPlayerAction>(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::ShowHudMessageAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::SendAllRivalryData(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4526
		RivalryOverviewAction lRivalryOverview;

		// BrnGameStateModule.cpp:4535
		BrnGameState::GameStateModuleIO::RivalryOverviewAction::ERivalryStage leStage;

		// BrnGameStateModule.cpp:4537
		int32_t liCurrentRival;

	}
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	BrnProgression::ProgressionData::GetRivalCount(/* parameters */);
	{
		// BrnGameStateModule.cpp:4540
		const Rival * lpCurrentRival;

		// BrnGameStateModule.cpp:4549
		const RivalData * lpCurrentRivalData;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		BrnProgression::ProgressionData::GetRival(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::RivalryOverviewAction>(/* parameters */);
	{
		// BrnGameStateModule.cpp:4541
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

void BrnGameState::StreetManager::GetCurrentPlayerRoadIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetOverallScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.h:285
		int32_t liOverallScore;

	}
}

void BrnGameState::RoadRulesManager::SetShowtimeScore(int32_t  liShowtimeScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetChallengeStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManager::GetChallengeStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetChallengeStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetAction(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetActionType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerNoInputTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsControllerActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::UpdateRoadRulesManager(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, const ControllerInput *  lpControllerInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnGameStateModule.cpp:4459
		SpanBase::RoadIndex liRoadIndex;

		// BrnGameStateModule.cpp:4479
		bool lbCrashModeStartedLastFrame;

		StreetManager::GetRoadCount(/* parameters */);
		StreetManager::GetCurrentPlayerRoadIndex(/* parameters */);
		ModeManager::IsShowtimeGameMode(/* parameters */);
		ModeManager::IsShowtimeGameMode(/* parameters */);
		ModeManager::IsShowtimeGameMode(/* parameters */);
		GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		{
			// BrnGameStateModule.cpp:4485
			ImpactTimeStartAction lImpactTimeAction;

			IsOnlineGameMode(/* parameters */);
			ModeManager::IsOnlineGameMode(/* parameters */);
			GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::ImpactTimeStartAction>(/* parameters */);
		}
		ModeManager::GetChallengeStyle(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		ModeManager::IsShowtimeGameMode(/* parameters */);
		GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		ModeManager::IsInPostEvent(/* parameters */);
		ModeManager::GetCurrentGameModeType(/* parameters */);
		ScoringSystem::GetPlayerNoInputTime(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4461
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		StreetManager::GetRoadCount(/* parameters */);
		BrnStreetData::StreetData::GetRoadCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4469
		ShowtimeUpdateAction lShowtimeUpdateAction;

		ScoringSystem::GetCrashScorer(/* parameters */);
		RoadRulesManager::SetShowtimeScore(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		CrashModeScoring::GetOverallScore(/* parameters */);
		CrashModeScoring::GetOverallScore(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeUpdateAction>(/* parameters */);
	}
	ModeManager::IsInGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void BrnResource::VehicleListEntryGamePlayData::GetCarStats(CarStatsCollection *  lpCarStatsCollection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::GetDamageLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ApplyCarStats(CgsID  lCarModelId, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4425
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGameStateModule.cpp:4428
		CarStatsCollection lCarStatsCollection;

		// BrnGameStateModule.cpp:4432
		SendCarStatsAction lSendCarStatsAction;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SendCarStatsAction>(/* parameters */);
	BrnResource::VehicleListEntryGamePlayData::GetCarStats(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::Profile::SetCurrentCarType(BrnResource::ECarType  leCurrentCarType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::OnSpecialEventPlayerCarChange(CgsID  lPlayerCarModelId, CgsID  lWheelModelId, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbSetAsSpawnCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4399
		const VehicleListEntry * lPlayerCarVehicleListEntry;

		// BrnGameStateModule.cpp:4402
		BrnResource::ECarType lECarType;

		// BrnGameStateModule.cpp:4403
		Profile * lpProfile;

		// BrnGameStateModule.cpp:4408
		GuiUpdatePlayerCarIDAction lGuiUpdatePlayerCarIDAction;

	}
	SetCurrentCarId(/* parameters */);
	SetCurrentWheelId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnResource::VehicleListEntry::GetCarType(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnProgression::Profile::SetCurrentCarType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::GuiUpdatePlayerCarIDAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void SetPlayerOpponentsAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,7u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::OnPlayerCarChange(CgsID  lPlayerCarModelId, CgsID  lWheelModelId, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbSetAsSpawnCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4330
		SetPlayerOpponentsAction lSetPlayerOpponentsAction;

		// BrnGameStateModule.cpp:4331
		CarOpponentSet * lpOpponentSet;

		// BrnGameStateModule.cpp:4341
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnGameStateModule.cpp:4345
		CgsID lCarId;

		SetCurrentCarId(/* parameters */);
	}
	CgsContainers::Array<CgsID,7u>::Construct(/* parameters */);
	SetCurrentWheelId(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	{
		// BrnGameStateModule.cpp:4365
		int32_t liOpponentIndex;

		// BrnGameStateModule.cpp:4366
		int32_t liOpponentCount;

		BrnProgression::CarOpponentSet::GetOpponentCount(/* parameters */);
		rw::math::vpu::Min<int>(/* parameters */);
		CgsContainers::Array<CgsID,7u>::Append(/* parameters */);
		BrnProgression::CarOpponentSet::GetCarOpponent(/* parameters */);
		BrnProgression::CarOpponent::GetCarId(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerOpponentsAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetDirtyTrickQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Append(const const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetNumCarsCrashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.h:324
		int32_t liVehicleClassIndex;

		// BrnCrashModeScoring.h:325
		int32_t liTotal;

	}
}

void BrnGameState::CrashModeScoring::GetScoreMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::UpdateShowtimeMode(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const ContactSpyInterface *  lpContacts, const PostWorldInputBuffer::TrafficTypeResponseQueue *  lpResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:1484
		ToggleShowtimeBehaviourAction lToggleAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ToggleShowtimeBehaviourAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1495
		int32_t liResponseIndex;

	}
	{
		// BrnGameStateModule.cpp:1498
		const const TrafficTypeResponse & lResponse;

		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetEvent(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1503
		VehicleHitAction lHitAction;

		CrashModeScoring::GetNumCarsCrashed(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::VehicleHitAction>(/* parameters */);
	}
	CgsContainers::Stack<uint16_t,8>::IsEmpty(/* parameters */);
	{
		// BrnGameStateModule.cpp:1535
		TrafficTypeRequestAction lRequest;

		CgsContainers::Stack<uint16_t,8>::Peek(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::TrafficTypeRequestAction>(/* parameters */);
		CgsContainers::Stack<uint16_t,8>::Pop(/* parameters */);
		CgsContainers::Stack<uint16_t,8>::IsEmpty(/* parameters */);
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

void BrnGameState::CarSelectManager::IsWaitingForStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::IsWaitingForStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ProcessStreamingCompleteEvent(const StreamingCompleteEvent *  lpStreamingCompleteEvent, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	OnlineCarSelectManager::StreamingFinished(/* parameters */);
	{
		// BrnGameStateModule.cpp:6094
		SetLoadingStateAction lLoadingAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetLoadingStateAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGameState::CarData::HasFever() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(BrnNetwork::ETelemetryHook  leHook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::TelemetryData::ClearParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::RecordPlayerOnlineTakedown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSharedIO.h:688
		char[16] lacBuffer;

	}
}

void rw::math::vpu::operator< <VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
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

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
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

void rw::math::vpu::operator><VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
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

void BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(const char *  lpcParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ProcessTakedownEvents(InputBuffer::GameActionQueue *  lpOutputActionQueue, const InputBuffer::TakedownEventQueue *  lpTakedownEventQueue, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4620
		int32_t liEventIndex;

	}
	{
		// BrnGameStateModule.cpp:4624
		const TakedownEvent * lpTakedownEvent;

		// BrnGameStateModule.cpp:4625
		EActiveRaceCarIndex leAggressorCarIndex;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4630
		EActiveRaceCarIndex leVictimRaceCarIndex;

		// BrnGameStateModule.cpp:4631
		CgsID lRivalId;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
		ModeManager::IsOnlineGameMode(/* parameters */);
		{
			// BrnGameStateModule.cpp:4645
			CarData * lpCarData;

			ModeManager::GetScoringSystem(/* parameters */);
			ScoringSystem::GetCarData(/* parameters */);
			GameStateModuleIO::operator++(/* parameters */);
			{
				// BrnGameStateModule.cpp:4653
				CaughtFeverAction lOnlineCaughtFeverAction;

				GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
				AddGameAction<BrnGameState::GameStateModuleIO::CaughtFeverAction>(/* parameters */);
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		// BrnGameStateModule.cpp:4671
		TelemetryAction lTeleEvent;

		BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(/* parameters */);
		rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator><VectorAxisX>(/* parameters */);
		rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(/* parameters */);
		CgsCore::StrCat(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::TelemetryAction>(/* parameters */);
		{
			// BrnGameStateModule.cpp:4705
			TelemetryAction lMMTeleEvent;

			BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::TelemetryAction>(/* parameters */);
			BrnNetwork::BrnNetworkModuleIO::TelemetryData::ClearParameter(/* parameters */);
		}
	}
	BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(/* parameters */);
	BrnProgression::Profile::RecordPlayerOnlineTakedown(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModule::OnModeFinish(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:7317
		SetTakedownCameraAction lSetTakedownCameraAction;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetTakedownCameraAction>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DriveThruManager::DriveThroughsCanNowOpenAgain(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<CgsID,92u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,92u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,92u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,92u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::RequestStreamingForVehicleSelection(InputBuffer::GameActionQueue *  lpActionQueue, CgsID  lCurrentVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:7131
		Array<CgsID,92u> lCars;

		// BrnGameStateModule.cpp:7132
		uint32_t luCurrentVehicleIndex;

		// BrnGameStateModule.cpp:7133
		CarSelectionRequestStreamingAction lRequestAction;

		// BrnGameStateModule.cpp:7134
		uint32_t luIndex;

		// BrnGameStateModule.cpp:7135
		int32_t liCount;

		// BrnGameStateModule.cpp:7136
		uint32_t luPrevCount;

		// BrnGameStateModule.cpp:7137
		uint32_t luNextCount;

		// BrnGameStateModule.cpp:7186
		char[13] lacUncompressedID;

		// BrnGameStateModule.cpp:7201
		uint32_t luMaxCountPerSide;

		CgsContainers::Array<CgsID,92u>::Construct(/* parameters */);
	}
	CgsContainers::Array<CgsID,92u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(/* parameters */);
	{
		// BrnGameStateModule.cpp:7188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<CgsID,92u>::GetLength(/* parameters */);
	{
		// BrnGameStateModule.cpp:7170
		const VehicleListEntry * lpCurrentVehicleData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	CgsContainers::Array<CgsID,92u>::GetLength(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// BrnGameStateModule.cpp:7222
		uint32_t luNextIndex;

		CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:7246
		uint32_t luStartIndex;

		CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
		CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
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

extern void CarSelectionChangedAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ImageFileInfo::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateImageManagerBase::HandleImageFilesLoadedEvent(const ImageFilesLoadedEvent *  lpImageFilesLoadedEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:580
		int32_t liIndex;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetLength(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:592
		const ImageFileInfo * lpImageFileInfo;

		{
			// BrnGameStateImageManagerBase.cpp:600
			int32_t liSlotIndex;

			CgsCore::MemCpy(/* parameters */);
			CgsContainers::BitArray<3u>::SetBit(/* parameters */);
		}
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
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
}

void BrnGameState::GameStateImageManagerBase::ProcessAskDeleteRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1048
		ShowPopupAction lShowPopupAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowPopupAction>(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
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

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<3u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::UpdateNewImageRequests(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:282
		LoadImageFilesAction lLoadImageFilesAction;

		// BrnGameStateImageManagerBase.cpp:283
		int32_t liNumImagesToLoad;

		// BrnGameStateImageManagerBase.cpp:284
		int32_t liIndex;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetLength(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:302
		const const BrnGameState::GameStateImageManagerBase::ImageLoadRequest & lImageLoadRequest;

		{
			// BrnGameStateImageManagerBase.cpp:328
			MugshotInfo * lpMugshotInfo;

			{
				// BrnGameStateImageManagerBase.cpp:355
				ImageGalleryImageInfoAction lImageInfoAction;

			}
		}
	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::operator[](/* parameters */);
	CgsContainers::BitArray<3u>::UnSetBit(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::LoadImageFilesAction>(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Clear(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:311
		ImageGalleryImageInfoAction lImageInfoAction;

		CgsNetwork::PlayerName::Clear(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateImageManagerBase.cpp:338
		ImageGalleryImageInfoAction lImageInfoAction;

		CgsNetwork::PlayerName::Clear(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
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
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateImageManagerBase::PreWorldUpdate(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, const InputBuffer::TakedownEventQueue *  lpQueue, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::SetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::ProcessScrollImagesEvent(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:813
		ImageGalleryImageInfoAction lImageInfoAction;

		// BrnGameStateImageManagerBase.cpp:814
		int32_t liImageIndex;

		// BrnGameStateImageManagerBase.cpp:815
		int32_t liStartImageIndex;

		// BrnGameStateImageManagerBase.cpp:816
		int32_t liEndImageIndex;

		// BrnGameStateImageManagerBase.cpp:817
		int32_t liLoadImageIndex;

		// BrnGameStateImageManagerBase.cpp:818
		int32_t liStartSlotIndex;

		// BrnGameStateImageManagerBase.cpp:819
		int32_t liSlotOffset;

		// BrnGameStateImageManagerBase.cpp:820
		int32_t liSlotIndex;

		// BrnGameStateImageManagerBase.cpp:821
		int32_t liLoadSlot;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	CgsContainers::BitArray<3u>::SetAll(/* parameters */);
	CgsNetwork::NetworkTexture::GetTexture(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:890
		MugshotInfo * lpImageInfo;

		{
			// BrnGameStateImageManagerBase.cpp:899
			ImageGalleryImageInfoAction lImageInfoAction;

			GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateImageManagerBase.cpp:942
		BrnGameState::GameStateImageManagerBase::ImageLoadRequest lImageLoadRequest;

		CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::IsFull(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Append(/* parameters */);
	}
	CgsNetwork::PlayerName::Clear(/* parameters */);
	BrnWorld::WorldRegion::Construct(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
	CgsContainers::BitArray<3u>::UnSetBit(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:917
		ImageGalleryImageInfoAction lImageInfoAction;

		CgsNetwork::PlayerName::Clear(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
		CgsContainers::BitArray<3u>::UnSetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateImageManagerBase::ProcessLockRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:986
		bool lbLockStatusUpdated;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:1002
		ImageGalleryImageInfoAction lImageInfoAction;

		// BrnGameStateImageManagerBase.cpp:1003
		MugshotInfo * lpMugshotInfo;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
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

void CgsGui::ImageFileInfo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateImageManagerBase::ProcessDeleteRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:1076
		ImageGalleryDataAction lDataAction;

		// BrnGameStateImageManagerBase.cpp:1077
		int32_t liSlotIndex;

		// BrnGameStateImageManagerBase.cpp:1078
		int32_t liFileIDToDelete;

		// BrnGameStateImageManagerBase.cpp:1079
		int32_t liIndexOfImageToLoad;

		// BrnGameStateImageManagerBase.cpp:1080
		int32_t liImageIndex;

		// BrnGameStateImageManagerBase.cpp:1081
		int32_t liNumImages;

		// BrnGameStateImageManagerBase.cpp:1082
		MugshotInfo * lpMugshotInfo;

		// BrnGameStateImageManagerBase.cpp:1083
		MugshotInfo * lpNewActiveSlotInfo;

	}
	CgsContainers::FastBitArray<30>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<30>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryDataAction>(/* parameters */);
	CgsContainers::BitArray<3u>::UnSetBit(/* parameters */);
	CgsNetwork::NetworkTexture::ClearPixels(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:1195
		LoadImageFilesAction lLoadImageFilesAction;

		// BrnGameStateImageManagerBase.cpp:1196
		int32_t liImageIndex;

		CgsGui::ImageFileInfo::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::LoadImageFilesAction>(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnGameStateImageManagerBase.cpp:1113
		ImageGalleryImageInfoAction lImageInfoAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
	}
	{
		// BrnGameStateImageManagerBase.cpp:1131
		ImageGalleryImageInfoAction lImageInfoAction;

		CgsNetwork::PlayerName::Clear(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(/* parameters */);
	}
	CgsContainers::BitArray<3u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
}

void BrnGameState::GameStateImageManagerBase::HandleImageGalleryRequest(const ImageGalleryRequestEvent *  lpImageGalleryReqEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateImageManagerBase.cpp:736
		int32_t liNumMugshots;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(/* parameters */);
	}
}

void BrnProgression::Profile::AddGameModeTypeToDiscovered(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetMedalAchievedForEventWithID(int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:3003
		const ProfileEvent * lpEvent;

	}
}

void BrnProgression::Profile::GetEventWithID(int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2917
		int32_t liIndex;

		{
			// BrnProfile.h:2920
			const ProfileEvent * lpEvent;

		}
	}
}

void BrnGameState::TrainingManager::DidVoiceoverFinishLastFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::CheckIfPlayerIsAtJunctionWithAnEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6625
		const TrafficData * lpTrafficData;

		// BrnGameStateModule.cpp:6626
		const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpPlayerRaceCarState;

		// BrnGameStateModule.cpp:6627
		bool lbPlayerIsInCorrectCarForSpecialEvent;

		// BrnGameStateModule.cpp:6628
		bool lbJunctionPopupConditions;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	TriggerQueryManager::GetTrafficData(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerInput(/* parameters */);
	{
		// BrnGameStateModule.cpp:6709
		LightTriggerId lLightTriggerId;

		// BrnGameStateModule.cpp:6710
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		// BrnGameStateModule.cpp:6711
		bool lbPlayerAllowedToStartEvent;

		TriggerQueryManager::GetPlayerCurrentTrafficLightId(/* parameters */);
		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		{
			// BrnGameStateModule.cpp:6735
			SendJunctionPlayerIsAtAction lAction;

			// BrnGameStateModule.cpp:6736
			bool lbJunctionChanged;

			BrnTraffic::JunctionLogicBox::GetID(/* parameters */);
		}
		{
			// BrnGameStateModule.cpp:6756
			const BrnProgression::ProgressionData * lpProgressionData;

			// BrnGameStateModule.cpp:6757
			const BrnProgression::RaceEventData * lpRaceEvent;

			// BrnGameStateModule.cpp:6758
			Profile * lpProfile;

			BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
			BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
			{
			}
			BrnProgression::EventJunction::GetID(/* parameters */);
			BrnProgression::EventJunction::GetOfflineEvent(/* parameters */);
			BrnProgression::ProgressionManager::GetProfile(/* parameters */);
			BrnProgression::Profile::GetMedalAchievedForEventWithID(/* parameters */);
			{
			}
			BrnProgression::ProfileEvent::IsFlagSet(/* parameters */);
			BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
		}
		AddGameAction<BrnGameState::GameStateModuleIO::SendJunctionPlayerIsAtAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:6648
		const BrnProgression::RaceEventData * lpRaceEvent;

		// BrnGameStateModule.cpp:6649
		CgsID lSpecialEventCarID;

		// BrnGameStateModule.cpp:6650
		LightTriggerId lLightTriggerId;

		// BrnGameStateModule.cpp:6651
		ProfileEvent * lpProfileEvent;

		// BrnGameStateModule.cpp:6653
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		TriggerQueryManager::GetPlayerCurrentTrafficLightId(/* parameters */);
		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		BrnTraffic::JunctionLogicBox::GetEventJunctionID(/* parameters */);
		BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
		BrnProgression::RaceEventData::GetSpecialEventCarId(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		{
			// BrnGameStateModule.cpp:6674
			const BrnProgression::Profile * lpProfile;

			BrnProgression::ProfileEvent::EnableFlags(/* parameters */);
			BrnProgression::Profile::AddGameModeTypeToDiscovered(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
			GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
		}
	}
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	BrnTraffic::LightTriggerId::GetHull(/* parameters */);
	{
		// BrnGameStateModule.cpp:6839
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		// BrnGameStateModule.cpp:6843
		SendJunctionPlayerIsAtAction lAction;

		BrnTraffic::TrafficData::GetJunctionLogicBoxForTrafficLight(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SendJunctionPlayerIsAtAction>(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void BrnProgression::Profile::AddDriveThru(CgsID  lId, BrnTrigger::GenericRegion::Type  lDriveThruType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2334
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Set<CgsID,5u>::Insert(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,11u>::Insert(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,14u>::Insert(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AreAllDriveThrusCompleted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::FindAllDriveThrus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionDebugComponent.cpp:1056
		const TriggerData * lpTriggerData;

		// BrnProgressionDebugComponent.cpp:1057
		int32_t liTriggerIndex;

	}
	{
		// BrnProgressionDebugComponent.cpp:1061
		const GenericRegion * lpGenericRegion;

		BrnTrigger::GenericRegion::IsDriveThru(/* parameters */);
	}
	BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::FindAllDriveThrusCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(int32_t  liParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSharedIO.h:654
		char[16] lacBuffer;

	}
}

void BrnProgression::Profile::GetCurrentCarTypeWithMinDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2529
		float32_t lfMinimum;

		// BrnProfile.h:2530
		int32_t liCarType;

		{
			// BrnProfile.h:2532
			int32_t liCurrentCarType;

		}
	}
}

void BrnProgression::Profile::SetCurrentProgressionRank(int8_t  li8CurrentProgressionRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::ResetCarTypeDistances() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2547
		int32_t liCurrentCarType;

	}
}

void BrnProgression::Profile::ClearCurrentEventCompleteCounts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:1978
		int32_t lNumberOfGameModes;

	}
}

void BrnProgression::ProgressionDebugComponent::SetProfileReadyForDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::SkipToProgressionRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::ClearRankUpCache(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::SkipToProgressionRankCallback(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::JuiceUnlockEntireGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::GetProgressionData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowBurnoutLicense() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::ClearRankUpCache(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowBurnoutLicenseCallBack(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowEliteLicense() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::ClearRankUpCache(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowEliteLicenseCallBack(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowEliteLicenseBR() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ProgressionManager::ClearRankUpCache(/* parameters */);
}

void BrnProgression::ProgressionDebugComponent::GetToOneWinBelowEliteBRLicenseCallBack(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddRealTimePlayed(float32_t  lfTimePlayed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerEngineOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddInCarTimePlayed(float32_t  lfTimePlayed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetCarPosition(const rw::math::vpu::Vector3  lCarPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetCarDirection(const rw::math::vpu::Vector3  lCarDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumDriveThrusDiscovered(BrnTrigger::GenericRegion::Type  leDriveThruType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2436
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::DriveThruManager::GetTotalDriveThrusOfType(BrnTrigger::GenericRegion::Type  leTriggerType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::CanBePainted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCurrentGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<46u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::DriveThruManager::DoesDriveThruTypeClose(BrnTrigger::GenericRegion::Type  leTriggerType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<46u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::TriggerData::GetKillzone(int32_t  liKillzoneIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Killzone::GetTrigger(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void KillzoneAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,32u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Killzone::GetRegionId(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,32u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::Killzone::GetRegionIdCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Killzone::GetTriggerCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetKillzoneCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::Profile::AddGameModeTypeCompleted(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetGameModeTypeAmount(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetGameModeTypeCompletedAmountSinceTheStart(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetShouldResetPlayerCamera(bool  lbShouldResetPlayerCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(float32_t  lfDeformAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(BrnPhysics::Deformation::DeformationResetType  leDeformationType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::HandleChangePlayerCarEvent(const ChangePlayerCarEvent *  lpChangePlayerCarEvent, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:7086
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnGameStateModule.cpp:7087
		CarSelectChangeColourAction lChangeCarColourAction;

		// BrnGameStateModule.cpp:7096
		float32_t lfBaseDeformationAmount;

	}
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetShouldResetPlayerCamera(/* parameters */);
	BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
	BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetKeepResetSection(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectChangeColourAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
}

void BrnGameState::GameStateModule::SetCarUnlockAlreadyShown(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::SetPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetCarPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerScoringIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2973
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

void BrnGameState::GameStateModule::OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:6299
		LoadProfileAction lLoadAction;

		// BrnGameStateModule.cpp:6301
		const BrnProgression::Profile * lpProfile;

		// BrnGameStateModule.cpp:6303
		CgsID lJunkyardId;

		// BrnGameStateModule.cpp:6323
		CgsID lCarId;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	GetPlayerActiveRaceCarIndex(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetPlayerScoringIndex(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BrnProgression::Profile::GetSpawnCarId(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::LoadProfileAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:6351
		SetTrafficScaleBasedOnRankAction lSetTrafficScaleBasedOnRankAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetTrafficScaleBasedOnRankAction>(/* parameters */);
	}
}

extern void SetupPlayerCarEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetPlayerStartPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetPlayerStartDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SendSetupPlayerCarEvent(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5361
		SetupPlayerCarEvent lEvent;

		// BrnGameStateModule.cpp:5362
		const VehicleListEntry * lpVehicleData;

		// BrnGameStateModule.cpp:5364
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnGameStateModule.cpp:5366
		CgsID lJunkyardId;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
	}
	{
	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	BrnProgression::ProgressionData::GetPlayerCarId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
		// BrnGameStateModule.cpp:5386
		int32_t liWheelIndex;

		BrnResource::WheelList::FindWheelIndexFromName(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::WheelListEntry::GetId(/* parameters */);
	GetPlayerActiveRaceCarIndex(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetPlayerScoringIndex(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	BrnResource::WheelList::GetWheelData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnResource::WheelListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSystem::TimerRequestInterface::GetSimTimerRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::SetTimestepMultiplier(float32_t  lfMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTimerRequestInterface.h:156
		CgsDev::StrStream lStrStream;

	}
}

extern void GasStationDriveThruAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BodyShopDriveThruAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ResetRoadRageCrashesForPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::RepairUnlockedVehicle(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::RepairUnlockedVehicle(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:3051
		CarData * lpCarData;

	}
}

extern void PaintShopDriveThruAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::CarData::SetColourIndex(uint32_t  luColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarData::SetPaletteIndex(uint32_t  luPaletteIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInReverseGear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

extern void CarSelectExitAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetDriveThrusDirtyFlag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::OnEnterOnline(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsOnlineGameMode(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetCrashingAction>(/* parameters */);
}

void BrnProgression::Profile::GetIsNewProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsShowtimeGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:999
		CgsDev::StrStream lStrStream;

	}
}

extern void SetupNetworkCarAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ChangeNetworkCarEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerScoringIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2991
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

		{
			// BrnScoringSystem.h:3003
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGameState::GameStateModuleIO::ChangeNetworkCarEvent::GetModelID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ChangeNetworkCarEvent::GetWheelID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetupNetworkCarAction::Construct(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex, EActiveRaceCarIndex  leActiveRaceCarIndex, const rw::math::vpu::Vector3  lPos, const rw::math::vpu::Vector3  lAt, CgsID  lModelId, CgsID  lWheelModelId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetLocalNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetNetworkPlayerID(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetPlayerCarID(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetForceStartFreeburnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFlybyManager::SetRandomNetworkGameSeed(uint32_t  luRandomSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetInModeStartRegionAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::GetNetworkGameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetInActiveGameModeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetTeam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::AddPlayer(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, BrnGameState::GameStateModuleIO::EPlayerTeam  leTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3351
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

		// BrnScoringSystem.h:3356
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leCheckPlayerIndex;

	}
}

void BrnGameState::ScoringSystem::AddPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3325
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::CarData::SetActiveRaceCarIndex(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetStatus(BrnGameState::CarData::EPlayerStatus  lePlayerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::ResetRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3268
		Road::ChallengeIndex lChallengeIndex;

	}
}

void BrnGameState::CarData::SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetRoundStartTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetModelID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetModelID(CgsID  lModelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetWheelID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetWheelID(CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  leTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetNetworkID(RoadRulesRecvData::NetworkPlayerID  lAddedPlayerNetworkID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetCarColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::GetCarPaintFinishIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction::SetCarPaintFinishIndex(uint16_t  lu16CarPaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent::IsLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetLocalPlayerIsHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::AddPlayerBurnoutSkillz(RoadRulesRecvData::NetworkPlayerID  lPlayerID, RoadRulesRecvData::NetworkPlayerID  lLocalPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3598
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leBurnoutSkillzPlayerIndex;

		// BrnScoringSystem.h:3599
		BurnoutSkillzData * lpSkillzData;

		{
			// BrnScoringSystem.h:3615
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnScoringSystem.h:3620
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGameState::ScoringSystem::GetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3530
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::BurnoutSkillzData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:120
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillIndex;

	}
}

void BrnGameState::operator++(const BrnGameState::BurnoutSkillzData::EBurnoutSkillType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:107
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leOldEnumIndex;

	}
}

void BrnGameState::GameStateModuleIO::OnlinePlayerFinalisedEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerRemovedEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearPlayersBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3561
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::GameStateModuleIO::OnlinePlayerRemovedAction::SetActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6305
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OnlinePlayerRemovedEvent::IsLocalPlayerInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlinePlayerRemovedAction::SetIsLocalPlayerInGame(bool  lbIsLocalPlayerInGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::RemovePlayer(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3412
		CarData * lpCarData;

		{
			// BrnScoringSystem.h:3418
			EActiveRaceCarIndex leRaceCarIndex;

		}
	}
}

void BrnGameState::CarData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::CarScoreData::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1180
		int32_t luLapIndex;

		// BrnGameStateSharedIO.h:1181
		int32_t liLandmarkIndex;

	}
}

void BrnGameState::CarData::SetCarID(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetCurrentCheckPoint(int8_t  liCurrentCheckPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetDriftDistance(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::ClearCumulativeData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetCumulativePoints(int32_t  liPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetRoundDisconnected(int32_t  liRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::AddCheckpoint(LandmarkIndex  luLandmarkIndex, uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameModeParams.h:730
		CheckpointData lCheckpointData;

	}
}

void BrnGameState::CheckpointData::Construct(LandmarkIndex  luLandmarkIndex, uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint32_t,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Append(const const CheckpointData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::StartGameModeParams::SetRaceId(CgsID  liRaceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::ShowShutDownAllIfNeeded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetCheckForAllEventTypeComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateInviteManager::RequestInvite(InviteOrJoinParams  lInviteOrJoinParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearDisconnectedPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1979
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

void BrnProgression::Profile::SetNewAirMaximum(float32_t  lfAirMaximum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetNewOncomingMaximum(float32_t  lfOncomingDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EventStateResponseAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Append(const const ProfileEvent &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::RankInfoResponseAction::SetProgressionRanks(int32_t  liPlayerRank, int32_t  liRankCount, int32_t  liOfflineRace, int32_t  liRoadRage, int32_t  liStuntAttack, int32_t  liMarkedMan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RankInfoResponseAction::SetProgressionRankEventWins(int32_t  liOfflineRaceRankWins, int32_t  liRoadRageRankWins, int32_t  liStuntAttackRankWins, int32_t  liMarkedManRankWins) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RankInfoResponseAction::SetPlayerHasFinishedLastRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PlayerInfo::Construct(const char *  lpcName, CgsID  lCarId, int32_t  liViolationPoints, int32_t  liViolationPointsToNextRank, int32_t  liCarUnlockedCount, int32_t  liTotalViolationPoints, int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UnlockedLiveryResponseAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarSelectionResponseAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetMaxCarCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<92u>::SetBitToBool(uint32_t  luIndex, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<92u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<92u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LandmarkInfoResponseAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LandmarkVariableInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::LandmarkVariableInfo::Construct(const Race *  lpPresetRace, int32_t  liCustomRaceCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::ResetProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::OnDistrictChange(BrnWorld::EDistrict  leNewDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::EnterCarSelect(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::EnterModification(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.h:426
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineCarSelectManager::EnterCarSelect(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::EnterModification(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.h:340
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineCarSelectManager::EnterWaitForHost(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.h:354
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::RumbleManager::SetWheelForceFeedback(bool  lbForceFeedback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::SetActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetAbortedDueToDisconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineCarSelectManager::GetFreeburnCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:278
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::GetOfflineFrameRateType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::FrameRateTypeRequestInterface::RequestFrameRateTypeChange(CgsSystem::EFrameRateManagerType  leRequestedFrameRateType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RichPresenceManagerBase::LocalPlayerLeftLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearAllBurnoutSkillzData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3547
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::CarSelectManager::OnCarUnlockTickerComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TriggerCrashBreakerAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void JustBouncedAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetCurrentComboCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::GetEventCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RivalData::IsDefeated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetProgressionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::SetSwitchingActive(bool  lbIsActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID  lPlayerID, const BurnoutSkillzData *  lpSkillzData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3580
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<392>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<393>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::LeftOnlinePostEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::SetCarUnlockEnabled(bool  lbEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetHitProps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PropSmashReportAction::SetHitProps(const const Profile::HitPropsBitArray &  lHitProps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::ProcessGameEvents(const GameEventQueue *  lpEventQueue, InputBuffer::GameActionQueue *  lpOutputActionQueue, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:1718
		const CgsModule::Event * lpEvent;

		// BrnGameStateModule.cpp:1719
		int32_t liEventSize;

		// BrnGameStateModule.cpp:1720
		int32_t liEventType;

		// BrnGameStateModule.cpp:1726
		Time lCurrentTime;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	{
	}
	{
		// BrnGameStateModule.cpp:2158
		const OnlineGameLaunchedEvent * lpLaunchedEvent;

		{
			// BrnGameStateModule.cpp:2176
			const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		}
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// BrnGameStateModule.cpp:4295
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4307
		PropSmashReportAction lAction;

		GameStateModuleIO::PropSmashReportAction::SetHitProps(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PropSmashReportAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4256
		const ModeManagerRouteInfoEvent * lpRouteInfoEvent;

	}
	{
		// BrnGameStateModule.cpp:1752
		const SetupPlayerCarEvent * lpSetupPlayerCarEvent;

		// BrnGameStateModule.cpp:1753
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnGameStateModule.cpp:1766
		float32_t lfBaseDeformationAmount;

		GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::GetPlayerScoringIndex(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1794
		const TeleportPlayerCarEvent * lpTeleportPlayerCarEvent;

		// BrnGameStateModule.cpp:1795
		ResetPlayerCarAction lResetPlayerCarAction;

		GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1808
		const ChangePlayerCarEvent * lpChangePlayerCarEvent;

	}
	{
		// BrnGameStateModule.cpp:1825
		const SelectPlayerCarEvent * lpSelectPlayerCarEvent;

	}
	{
		// BrnGameStateModule.cpp:1850
		const ChangePlayerCarColourEvent * lpChangePlayerCarColourEvent;

		// BrnGameStateModule.cpp:1851
		CarSelectChangeColourAction lChangeCarColourAction;

		// BrnGameStateModule.cpp:1852
		Profile * lpProfile;

		// BrnGameStateModule.cpp:1853
		CarData * lpCarData;

		BrnProgression::CarData::SetColourIndex(/* parameters */);
		BrnProgression::CarData::SetPaletteIndex(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectChangeColourAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1871
		PlayerCarColourResponseAction lPlayerCarColourResponseAction;

		// BrnGameStateModule.cpp:1872
		const PlayerCarColourRequestEvent * lpPlayerCarColourRequestEvent;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerCarColourResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1937
		const ChangeNetworkCarEvent * lpChangeNetworkCarEvent;

		// BrnGameStateModule.cpp:1938
		SetupNetworkCarAction lSetupNetworkCarAction;

		// BrnGameStateModule.cpp:1939
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnGameStateModule.cpp:1940
		const CarData * lpCarData;

		GameStateModuleIO::ChangeNetworkCarEvent::GetNetworkPlayerID(/* parameters */);
		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3223
		const ControllerDisconnectedEvent * lpControllerDisconnectedEvent;

	}
	{
		// BrnGameStateModule.cpp:3238
		ToggleShowtimeBehaviourAction lToggleAction;

		// BrnGameStateModule.cpp:3239
		SetSixaxisSteeringAction lSixaxis;

		// BrnGameStateModule.cpp:3240
		const ConfigControllerEvent * lpConfigureControllerEvent;

		AddGameAction<BrnGameState::GameStateModuleIO::ToggleShowtimeBehaviourAction>(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SetSixaxisSteeringAction>(/* parameters */);
		RumbleManager::SetWheelForceFeedback(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2190
		const StartNetworkGameEvent * lpStartNetworkGameEvent;

		OnlineFlybyManager::SetRandomNetworkGameSeed(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2256
		SetInModeStartRegionAction lStartRegionAction;

		// BrnGameStateModule.cpp:2257
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnGameStateModule.cpp:2258
		StartGameModeParams lStartGameModeParams;

		StartGameModeParams(/* parameters */);
		ModeManager::SetPlayerIsInStartRegion(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SetInModeStartRegionAction>(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		StartGameModeParams::Construct(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
		SetInActiveGameModeState(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2456
		const PlayerAcceptedModeEvent * lpAcceptedModeEvent;

		{
			// BrnGameStateModule.cpp:2461
			int32_t liLandmarkIndex;

			// BrnGameStateModule.cpp:2463
			StartGameModeParams lStartGameModeParams;

			StartGameModeParams(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
			StartGameModeParams::Construct(/* parameters */);
			BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
			CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
			StartGameModeParams::AddCheckpoint(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	AddGameAction<BrnGameState::GameStateModuleIO::StopModeSplashAction>(/* parameters */);
	BrnProgression::ProgressionManager::RequestUpdateRivals(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnProgression::ProgressionManager::SetCheckForAllEventTypeComplete(/* parameters */);
	{
		// BrnGameStateModule.cpp:1998
		const RequestSpecificPreSetRaces * lpRequest;

	}
	{
		// BrnGameStateModule.cpp:2529
		const VehicleImpactEvent * lpImpactEvent;

		GetPlayerActiveRaceCarIndex(/* parameters */);
		GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3195
		const PlayerPauseStateChangedEvent * lpPlayerPauseEvent;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::PlayerResetOnTrackAction>(/* parameters */);
	StuntManager::ClearActiveJump(/* parameters */);
	{
		// BrnGameStateModule.cpp:3892
		const RaceCarDrivingInCrashEvent * lpCarDrivingInCrashEvent;

		// BrnGameStateModule.cpp:3893
		ResetRaceCarCrashingAction lResetCarAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ResetRaceCarCrashingAction>(/* parameters */);
	}
	ModeManager::GetCurrentGameMode(/* parameters */);
	ModeManager::GetCurrentGameMode(/* parameters */);
	{
		// BrnGameStateModule.cpp:4198
		HUDMessagePlayerCanSkipCrashAction lSkipCrashAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessagePlayerCanSkipCrashAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4205
		PlayerCrashEndingSoonAction lCrashEndingSoonAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerCrashEndingSoonAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3209
		const TrainingPauseStateChangedEvent * lpTrainingPauseEvent;

	}
	{
		// BrnGameStateModule.cpp:3486
		const TriggerCrashBreakerEvent * lpCrashBreakerEvent;

		// BrnGameStateModule.cpp:3489
		CrashModeScoring * lpCrashScorer;

		// BrnGameStateModule.cpp:3491
		TriggerCrashBreakerAction lCrashBreakerGameAction;

		AddGameAction<BrnGameState::GameStateModuleIO::TriggerCrashBreakerAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4138
		RoadRulesBatchQueryAction lRoadRulesBatchQueryAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3758
		const RoadRuleInteractionChangeEvent * lpRoadRuleSwitchableEvent;

		RoadRulesManager::SetSwitchingActive(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3767
		const RoadRuleModeSwitchEvent * lpRoadRulesModeSwitchEvent;

	}
	{
		// BrnGameStateModule.cpp:3642
		const RivalriesOneDataRequestEvent * lpRivalRequest;

		// BrnGameStateModule.cpp:3645
		RivalryOneInDepthAction lRivalInfo;

		// BrnGameStateModule.cpp:3651
		const Rival * lpCurrentRival;

		// BrnGameStateModule.cpp:3660
		const RivalData * lpCurrentRivalData;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		{
			// BrnGameStateModule.cpp:3669
			float32_t lfPercentageProgression;

		}
		AddGameAction<BrnGameState::GameStateModuleIO::RivalryOneInDepthAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4148
		const GUISwitchRoadRuleStateEvent * lpRoadRuleStateEvent;

	}
	{
		// BrnGameStateModule.cpp:1784
		const RequestCarUnlockEvent * lpRequestCarUnlockEvent;

	}
	{
		// BrnGameStateModule.cpp:3422
		const CarControlChangeRequestEvent * lpControlChangeEvent;

	}
	{
		// BrnGameStateModule.cpp:3441
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnGameStateModule.cpp:3442
		AwardSequenceStartAction lAwardsStartAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::AwardSequenceStartAction>(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::UpdatePrepareForInviteAction>(/* parameters */);
	{
		// BrnGameStateModule.cpp:2624
		const PreparedForInviteEvent * lpPreparedForInviteEvent;

		// BrnGameStateModule.cpp:2625
		PreparedForInviteAction lPreparedForInviteAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PreparedForInviteAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2637
		PerformInviteAction lPerformInviteAction;

		// BrnGameStateModule.cpp:2638
		const PerformInviteEvent * lpPerformInviteEvent;

		ModeManager::GetScoringSystem(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PerformInviteAction>(/* parameters */);
		ScoringSystem::ClearDisconnectedPlayers(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2652
		InviteCompleteAction lInviteCompleteAction;

		// BrnGameStateModule.cpp:2653
		const InviteCompleteEvent * lpInviteCompleteEvent;

		AddGameAction<BrnGameState::GameStateModuleIO::InviteCompleteAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2703
		NearMissAction lNearMissAction;

		// BrnGameStateModule.cpp:2704
		const NearMissEvent * lpNearMissEvent;

		AddGameAction<BrnGameState::GameStateModuleIO::NearMissAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2722
		DriftingAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::DriftingAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2732
		SpinningAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SpinningAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2740
		InAirAction lAction;

		// BrnGameStateModule.cpp:2741
		const InAirEvent * lpInAirEvent;

		// BrnGameStateModule.cpp:2751
		Profile * lpProfile;

		AddGameAction<BrnGameState::GameStateModuleIO::InAirAction>(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::SetNewAirMaximum(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2762
		OncomingAction lAction;

		// BrnGameStateModule.cpp:2767
		Profile * lpProfile;

		AddGameAction<BrnGameState::GameStateModuleIO::OncomingAction>(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::SetNewOncomingMaximum(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2787
		const TailgatingEvent * lpTailgatingEvent;

		// BrnGameStateModule.cpp:2788
		TailgatingAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::TailgatingAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2672
		const TrafficCheckingEvent * lpVcEvent;

		// BrnGameStateModule.cpp:2675
		TrafficCheckingAction lTrafficCheckingAction;

		AddGameAction<BrnGameState::GameStateModuleIO::TrafficCheckingAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3916
		const TrafficCheckingChainEvent * lpTrafficCheckingEvent;

		// BrnGameStateModule.cpp:3917
		TrafficCheckingChainAction lTrafficCheckAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::TrafficCheckingChainAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2686
		CrashModeScoring * lpCrashScorer;

		// BrnGameStateModule.cpp:2687
		const CrashComboItemEvent * lpComboEvent;

		// BrnGameStateModule.cpp:2688
		CrashComboAction lComboAction;

		ScoringSystem::GetCrashScorer(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CrashComboAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3613
		const AftertouchEvent * lpAftertouchEvent;

		// BrnGameStateModule.cpp:3616
		AftertouchAction lAftertouchGameAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AftertouchAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3787
		const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent * lpRRConnectedOnlineEvent;

	}
	{
		// BrnGameStateModule.cpp:3692
		const OnlineNetworkPlayerCollectableEvent * lpCollectableEvent;

		BrnProgression::Profile::IsStuntElementDone(/* parameters */);
		CgsContainers::Set<CgsID,512u>::Find(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3816
		const NewRemoteBurnoutSkillzEvent * lpBurnoutSkillzEvent;

		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::SetBurnoutSkillzData(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3906
		const OnlineNewHostEvent * lpHostEvent;

	}
	{
		// BrnGameStateModule.cpp:4118
		const RemotePlayerTriggeredCheckpoint * lpCheckpointTriggerEvent;

	}
	ModeManager::LeftOnlinePostEvent(/* parameters */);
	BrnProgression::ProgressionManager::ShowShutDownAllIfNeeded(/* parameters */);
	{
		// BrnGameStateModule.cpp:4268
		const BrnGameState::GameStateModuleIO::BuddyRemovedEvent * lpBuddyRemovedEvent;

	}
	{
		// BrnGameStateModule.cpp:4281
		const InstantFreeburnEvent * lpInstantFreeburnEvent;

		CarSelectManager::SetCarUnlockEnabled(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3776
		const BurningHomeRunSwitchRunnerEvent * lpSwitchedRunnerEvent;

	}
	ModeManager::IsInPostEvent(/* parameters */);
	{
		// BrnGameStateModule.cpp:3968
		const FreeburnChallengeTriggeredRemotelyEvent * lpTriggeredEvent;

		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4000
		const FreeburnChallengeEndedEvent * lpEndEvent;

		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	}
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	ModeManager::OutputFreeburnChallengeEveryPlayerStatusEvent(/* parameters */);
	{
		// BrnGameStateModule.cpp:4078
		const FburnChallengeSuccessUpdateEvent * lpSuccessUpdateEvent;

		GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:4091
		const FburnChallengeSuccessEvent * lpChallengeSuccessEvent;

	}
	{
		// BrnGameStateModule.cpp:4016
		const FreeburnChallengeSelectedEvent * lpChallengeSelectedEvent;

	}
	{
		// BrnGameStateModule.cpp:3952
		const FreeburnChallengeSelectedRemotelyEvent * lpSelectedEvent;

		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3042
		WorldRegionChangeAction lWorldRegionChangeAction;

		// BrnGameStateModule.cpp:3043
		const WorldRegionChangeEvent * lpWorldRegionChangeEvent;

		RichPresenceManagerBase::OnDistrictChange(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::WorldRegionChangeAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3057
		UpdateGuiRouteAction lUpdateGuiRouteAction;

		AddGameAction<BrnGameState::GameStateModuleIO::UpdateGuiRouteAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1898
		const HitOverheadSignEvent * lpHitSignEvent;

		ModeManager::IsShowtimeGameMode(/* parameters */);
		{
			// BrnGameStateModule.cpp:1904
			HitOverheadSignAction lHitSignAction;

			AddGameAction<BrnGameState::GameStateModuleIO::HitOverheadSignAction>(/* parameters */);
		}
	}
	{
		// BrnGameStateModule.cpp:2029
		CompletedStuntAction lCompletedStuntAction;

		// BrnGameStateModule.cpp:2030
		int32_t liCompletedBarrelRolls;

		// BrnGameStateModule.cpp:2031
		float32_t lfCompletedAirSpins;

		// BrnGameStateModule.cpp:2032
		float32_t lfCompletedHandbrakeTurnAngle;

		// BrnGameStateModule.cpp:2033
		float32_t lfCompletedDriftDistance;

		// BrnGameStateModule.cpp:2034
		const CompletedStuntEvent * lpCompletedStuntEvent;

		// BrnGameStateModule.cpp:2035
		Profile * lpProfile;

		AddGameAction<BrnGameState::GameStateModuleIO::CompletedStuntAction>(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2123
		const InProgressStuntEvent * lpInProgressStuntEvent;

		// BrnGameStateModule.cpp:2126
		InProgressStuntAction lInProgressStuntAction;

		AddGameAction<BrnGameState::GameStateModuleIO::InProgressStuntAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3271
		const RemotePlayerDisconnectedEvent * lpPlayerDisconnectedEvent;

		// BrnGameStateModule.cpp:3273
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnGameStateModule.cpp:3282
			RemotePlayerDisconnectedAction lPlayerDisconnectedAction;

			GameStateModuleIO::RemotePlayerDisconnectedEvent::GetNetworkPlayerID(/* parameters */);
			GameStateModuleIO::RemotePlayerDisconnectedAction::SetNetworkPlayerID(/* parameters */);
			GameStateModuleIO::RemotePlayerDisconnectedAction::SetActiveRaceCarIndex(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction>(/* parameters */);
		}
		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
		GameStateModuleIO::RemotePlayerDisconnectedEvent::GetNetworkPlayerID(/* parameters */);
		GameStateModuleIO::RemotePlayerDisconnectedEvent::GetNetworkPlayerID(/* parameters */);
		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::ClearPlayersBurnoutSkillzData(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3301
		const LocalPlayerConnectedEvent * lpPlayerConnectedEvent;

	}
	{
		// BrnGameStateModule.cpp:3352
		NotifyDirectorLocalPlayerDisconnectedAction lNotifyDirectorLocalPlayerDisconnectedAction;

		ModeManager::SetAbortedDueToDisconnect(/* parameters */);
		ModeManager::IsOnlineGameMode(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::NotifyDirectorLocalPlayerDisconnectedAction>(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface(/* parameters */);
		CgsSystem::FrameRateTypeRequestInterface::RequestFrameRateTypeChange(/* parameters */);
	}
	RichPresenceManagerBase::LocalPlayerLeftLobby(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::ClearAllBurnoutSkillzData(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
	{
		// BrnGameStateModule.cpp:3411
		const OnlineGameParamsChanged * lpGameParamEvent;

	}
	BrnProgression::ProgressionManager::ResetProfile(/* parameters */);
	{
		// BrnGameStateModule.cpp:3827
		const ShowtimeUpdateEvent * lpShowtimeUpdateEvent;

		// BrnGameStateModule.cpp:3828
		ShowtimeUpdateAction lShowtimeUpdateAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeUpdateAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3850
		const ShowtimeModeSwitchEvent * lpShowtimeModeSwitchEvent;

		{
			// BrnGameStateModule.cpp:3861
			ShowtimeModeSwitchAction lShowtimeModeSwitchAction;

			// BrnGameStateModule.cpp:3869
			GuiShowtimeModeSwitch lShowtimeModeSwitch;

			GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeModeSwitchAction>(/* parameters */);
			GameStateModuleIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
			AddGuiEvent<BrnGui::GuiShowtimeModeSwitch>(/* parameters */);
		}
	}
	{
		// BrnGameStateModule.cpp:3881
		const ShowtimeBouncePromptEvent * lpPromptEvent;

		// BrnGameStateModule.cpp:3884
		GuiShowtimeBouncePrompt lGuiPrompt;

		GameStateModuleIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiShowtimeBouncePrompt>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3556
		const JustBouncedEvent * lpBounceEvent;

		// BrnGameStateModule.cpp:3558
		JustBouncedAction lBouncyBouncy;

		ScoringSystem::GetCrashScorer(/* parameters */);
		CrashModeScoring::GetNumCarsCrashed(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::JustBouncedAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3581
		JustAppliedExtraSpinAction lSpinAction;

		AddGameAction<BrnGameState::GameStateModuleIO::JustAppliedExtraSpinAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3588
		const PowerParkResultEvent * lpPowerParkEvent;

		// BrnGameStateModule.cpp:3602
		PowerParkResultAction lPowerParkAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PowerParkResultAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2567
		const RequestInviteEvent * lpRequestInviteEvent;

		GameStateInviteManager::RequestInvite(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PromptDoInviteAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3507
		const CancelCrashBreakerEvent * lpCancelCrashBreakerEvent;

		// BrnGameStateModule.cpp:3510
		CancelCrashBreakerAction lCrashBreakerGameAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CancelCrashBreakerAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2315
		const OnlinePlayerAddedEvent * lpPlayerAddedEvent;

		GetLocalPlayerNetworkID(/* parameters */);
		GameStateModuleIO::OnlinePlayerAddedEvent::GetNetworkPlayerID(/* parameters */);
		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::AddPlayerBurnoutSkillz(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2380
		const OnlinePlayerFinalisedEvent * lpPlayerFinalisedEvent;

		GameStateModuleIO::OnlinePlayerFinalisedEvent::GetNetworkPlayerID(/* parameters */);
		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2399
		const OnlinePlayerRemovedEvent * lpPlayerRemovedEvent;

		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
		GameStateModuleIO::OnlinePlayerRemovedEvent::GetNetworkPlayerID(/* parameters */);
		GameStateModuleIO::OnlinePlayerRemovedEvent::GetNetworkPlayerID(/* parameters */);
		ModeManager::GetScoringSystem(/* parameters */);
		ScoringSystem::ClearPlayersBurnoutSkillzData(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2933
		CarSelectionResponseAction lAction;

		// BrnGameStateModule.cpp:2935
		int32_t liCarIndex;

		// BrnGameStateModule.cpp:2936
		int32_t liNumCarsInResponse;

		// BrnGameStateModule.cpp:2937
		const BrnProgression::Profile * lpProfile;

		// BrnGameStateModule.cpp:2996
		CgsID lPlayerCarModelID;

		CarSelectionResponseAction(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		CgsContainers::Array<CgsID,92u>::GetLength(/* parameters */);
		{
			// BrnGameStateModule.cpp:2952
			const CarData * lpCarData;

			// BrnGameStateModule.cpp:2953
			const LiveryData * lpLiveryData;

			// BrnGameStateModule.cpp:2954
			const VehicleListEntry * lpVehicleListEntry;

			// BrnGameStateModule.cpp:2955
			CgsID lBaseCarID;

			CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
		}
		CgsContainers::BitArray<92u>::SetBitToBool(/* parameters */);
		CgsContainers::BitArray<92u>::SetBitToBool(/* parameters */);
		CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGameStateModule.cpp:3006
		LandmarkInfoResponseAction lAction;

		// BrnGameStateModule.cpp:3007
		const LandmarkInfoRequestEvent * lpLandmarkInfoRequestEvent;

		// BrnGameStateModule.cpp:3008
		Race lRace;

		LandmarkInfoResponseAction(/* parameters */);
		Race(/* parameters */);
		GameStateModuleIO::LandmarkVariableInfo::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::LandmarkInfoResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3070
		const CrashNavStateChangedEvent * lpCrashNavEvent;

	}
	{
		// BrnGameStateModule.cpp:3084
		const CarSelectStateChangedEvent * lpCarSelectEvent;

	}
	{
		// BrnGameStateModule.cpp:3175
		const RegionFromPositionRequestEvent * lpRequestRegionFromPositionEvent;

		// BrnGameStateModule.cpp:3176
		RegionFromPositionResponseAction lAction;

		// BrnGameStateModule.cpp:3177
		const WorldMap2D * lpWorldMap;

		// BrnGameStateModule.cpp:3178
		uint8_t luValue;

		CgsWorld::WorldMap2D::GetValue(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RegionFromPositionResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3628
		const RoadRulesDataRequestEvent * lpRoadRulesDataRequestEvent;

	}
	{
		// BrnGameStateModule.cpp:2829
		RankInfoResponseAction lAction;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		GameStateModuleIO::RankInfoResponseAction::SetProgressionRanks(/* parameters */);
		GameStateModuleIO::RankInfoResponseAction::SetProgressionRankEventWins(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::GetNumRankWinsForGameMode(/* parameters */);
		BrnProgression::Profile::GetNumRankWinsForGameMode(/* parameters */);
		BrnProgression::Profile::GetNumRankWinsForGameMode(/* parameters */);
		BrnProgression::Profile::GetNumRankWinsForGameMode(/* parameters */);
		GameStateModuleIO::RankInfoResponseAction::SetPlayerHasFinishedLastRank(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RankInfoResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2856
		PlayerInfoResponseAction lAction;

		// BrnGameStateModule.cpp:2858
		const BrnProgression::Profile * lpProfile;

		GetCurrentCarId(/* parameters */);
		GameStateModuleIO::PlayerInfo::Construct(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::GetCarCount(/* parameters */);
		BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PlayerInfoResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2892
		const UnlockedLiveryRequest * lpUnlockedLiveryEvent;

		// BrnGameStateModule.cpp:2896
		DerivedCarArray lDerivedCarArray;

		// BrnGameStateModule.cpp:2908
		UnlockedLiveryResponseAction lAction;

		// BrnGameStateModule.cpp:2911
		uint32_t luLiveryCarIndex;

		DerivedCarArray(/* parameters */);
		CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
		BrnProgression::ProgressionManager::IsCarUnlocked(/* parameters */);
		CgsContainers::Array<CgsID,8u>::Construct(/* parameters */);
		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		{
			// BrnGameStateModule.cpp:2914
			CgsID lCarId;

			CgsContainers::Array<CgsID,8u>::Append(/* parameters */);
		}
		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		BrnProgression::ProgressionManager::IsCarUnlocked(/* parameters */);
	}
	CarSelectManager::OnCarUnlockTickerComplete(/* parameters */);
	{
		// BrnGameStateModule.cpp:3456
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnGameStateModule.cpp:3457
		AwardSequenceEndAction lAwardsEndAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::AwardSequenceEndAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:1923
		const RequestGameTrainingEvent * lpTrainingRequestEvent;

	}
	{
		// BrnGameStateModule.cpp:1889
		const RecordPropHitEvent * lpHitPropEvent;

	}
	{
		// BrnGameStateModule.cpp:3530
		const VehicleLeaptEvent * lpLeapEvent;

		// BrnGameStateModule.cpp:3532
		CrashModeScoring * lpCrashScorer;

		// BrnGameStateModule.cpp:3536
		VehicleLeaptAction lVehicleLeaptAction;

		AddGameAction<BrnGameState::GameStateModuleIO::VehicleLeaptAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3544
		const EnterNewRoadEvent * lpEnterRoadEvent;

		// BrnGameStateModule.cpp:3546
		EnterNewRoadAction lEnterRoadAction;

		AddGameAction<BrnGameState::GameStateModuleIO::EnterNewRoadAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3520
		const PickupEvent * lpPickupEvent;

		// BrnGameStateModule.cpp:3522
		CrashModeScoring * lpCrashScorer;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedAction>(/* parameters */);
	{
		// BrnGameStateModule.cpp:2819
		GameStatsResponseAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::GameStatsResponseAction>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2798
		EventStateResponseAction lAction;

		// BrnGameStateModule.cpp:2799
		const BrnProgression::Profile * lpProfile;

		// BrnGameStateModule.cpp:2800
		int32_t liEventIndex;

		CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Construct(/* parameters */);
		BrnProgression::Profile::GetEventCount(/* parameters */);
		{
			// BrnGameStateModule.cpp:2805
			const ProfileEvent * lpProfileEvent;

			BrnProgression::Profile::GetEvent(/* parameters */);
			CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Append(/* parameters */);
		}
	}
	OnlineCarSelectManager::EnterModification(/* parameters */);
	OnlineCarSelectManager::EnterWaitForHost(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
	CgsContainers::BitArray<92u>::SetBitToBool(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
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
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
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
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::EventStateResponseAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::UnlockedLiveryResponseAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionResponseAction>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetPlayerScoringIndex(/* parameters */);
	BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<92u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<92u>::UnSetBit(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
		// BrnGameStateModule.cpp:3699
		OnlineNetworkPlayerCollectableAction lCollectableAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::OnlineNetworkPlayerCollectableAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BurnoutSkillzData::Clear(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
	CarData::GetActiveRaceCarIndex(/* parameters */);
	{
		// BrnGameStateModule.cpp:1954
		const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpRaceCarState;

		// BrnGameStateModule.cpp:1966
		char[13] lacUncompressedID;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		GameStateModuleIO::ChangeNetworkCarEvent::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetPlayerScoringIndex(/* parameters */);
	}
	FlybyManager::GetRandom(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::ChangeNetworkCarEvent::GetModelID(/* parameters */);
	GameStateModuleIO::ChangeNetworkCarEvent::GetWheelID(/* parameters */);
	GameStateModuleIO::SetupNetworkCarAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetupNetworkCarAction>(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CarSelectManager::EnterCarSelect(/* parameters */);
	IsOnlineGameMode(/* parameters */);
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
		// BrnGameStateModule.cpp:2410
		const CarData * lpCarData;

		GameStateModuleIO::OnlinePlayerRemovedEvent::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		CarData::GetActiveRaceCarIndex(/* parameters */);
		{
			// BrnGameStateModule.cpp:2417
			OnlinePlayerRemovedAction lPlayerRemovedAction;

			GameStateModuleIO::OnlinePlayerRemovedAction::SetActiveRaceCarIndex(/* parameters */);
			GameStateModuleIO::OnlinePlayerRemovedAction::SetIsLocalPlayerInGame(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::OnlinePlayerRemovedAction>(/* parameters */);
		}
		GameStateModuleIO::OnlinePlayerRemovedEvent::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::RemovePlayer(/* parameters */);
	}
	GameStateModuleIO::OnlinePlayerAddedEvent::GetNetworkPlayerID(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	{
		// BrnGameStateModule.cpp:3161
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:2207
		RoadRulesRecvData::NetworkPlayerID lLocalPlayerID;

		// BrnGameStateModule.cpp:2208
		int32_t liGridPosition;

		GameStateModuleIO::StartNetworkGameEvent::GetLocalNetworkPlayerID(/* parameters */);
		GameStateModuleIO::StartNetworkGameEvent::GetNetworkPlayerID(/* parameters */);
		ModeManager::IsOnlineGameMode(/* parameters */);
	}
	BrnWorld::WorldRegion::Construct(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
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
	AddGameAction<BrnGameState::GameStateModuleIO::StartGameThroughPlayerJoinAction>(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	{
		// BrnGameStateModule.cpp:2324
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

		// BrnGameStateModule.cpp:2330
		OnlinePlayerAddedAction lPlayerAddedAction;

		// BrnGameStateModule.cpp:2341
		char[13] lacUncompressedID;

		GameStateModuleIO::OnlinePlayerAddedEvent::GetNetworkPlayerID(/* parameters */);
		GameStateModuleIO::OnlinePlayerAddedEvent::GetTeam(/* parameters */);
		ScoringSystem::AddPlayer(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GameStateModuleIO::ChangeNetworkCarEvent::GetModelID(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CarSelectManager::EnterModification(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedEvent::GetNetworkPlayerID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	{
		// BrnGameStateModule.cpp:3652
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CarData::Construct(/* parameters */);
		CarData::ResetRoadRulesScores(/* parameters */);
		CarData::GetActiveRaceCarIndex(/* parameters */);
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
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// BrnGameStateModule.cpp:3323
		ChangePlayerCarEvent lChangePlayerCarEvent;

		OnlineCarSelectManager::GetFreeburnCarId(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:3111
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CarData::SetStatus(/* parameters */);
	CarData::SetNetworkPlayerID(/* parameters */);
	CarData::SetActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetPlayerScoringIndex(/* parameters */);
	CarData::SetStatus(/* parameters */);
	CarData::SetRoundStartTeam(/* parameters */);
	CarData::SetNetworkPlayerID(/* parameters */);
	CarData::SetTeam(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetModelID(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction>(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetCarColourIndex(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetWheelID(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetTeam(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetNetworkID(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedAction::SetCarPaintFinishIndex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GameStateModuleIO::OnlinePlayerAddedEvent::GetModelID(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	OnlineCarSelectManager::EnterCarSelect(/* parameters */);
}

void BrnGameState::ModeManager::GetCurrentGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetGlobalRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTakedownEventOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:272
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetTakedownEventInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ModeManager::CurrentGameModeAllowsTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::IsAchievementWritten(int32_t  liAchievementBit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::AchievementManagerPS3::IsAchievementEarnt(EAchievement  leAchievement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnProgression::Profile::IsAchievementWritten(/* parameters */);
	CgsContainers::BitArray<60u>::IsBitSet(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGameState::AchievementManagerPS3::AchievementEarnt(EAchievement  leAchievement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnProgression::Profile::WriteAchievement(/* parameters */);
	CgsContainers::BitArray<60u>::SetBit(/* parameters */);
	CgsContainers::BitArray<60u>::SetBit(/* parameters */);
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

void BrnResource::VehicleList::GetVehicleData(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGameState::GameStateModuleIO::WrongCarForChallengeAction::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetTrafficDensity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetTrafficDensity(float32_t  lfTrafficDensity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetBoostEarning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetBoostEarning(float32_t  lfBoostEarning) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetTrafficLightTriggerId(LightTriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetEventJunctionId(uint32_t  luEventJunctionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetEventData(const BrnProgression::RaceEventData *  lpEventData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetJunctionID(uint32_t  luID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetPlayerVehicleGamePlayData(const VehicleListEntry *  lpPlayerCarVehicleListEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetProgressionRankAsRatio(float32_t  lfProgressionRankAsRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetProgressionRankData(const ProgressionRankData *  lpProgressionRankData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::FindEventJunction(uint32_t  luEventJunctionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.h:394
		uint32_t luIndex;

		{
			// BrnProgressionData.h:396
			EventJunction * lpEventJunction;

		}
	}
}

void BrnProgression::EventJunction::GetShotGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetShotGroup(int32_t  liShotGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetStartDataForTrafficLight(LightTriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.h:1520
		const TrafficData * lpTrafficData;

		// BrnModeManager.h:1525
		bool lbOnline;

	}
}

void BrnTraffic::LightTriggerStartData::GetStartDirection(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetStartDirection(const rw::math::vpu::Vector3  lStartDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::SetPlayerBaseDeformation(float32_t  lfBaseDeformation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::ClearUpcomingRoadIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::DriveThruManager::DriveThroughsCloseOnceActivatedUntilFurtherNotice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::StartModeAtLights(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::EGameModeStartMechanism  leStartMechanism) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:5071
		const TrafficData * lpTrafficData;

		// BrnGameStateModule.cpp:5072
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnGameStateModule.cpp:5073
		LightTriggerId lLightTriggerId;

		// BrnGameStateModule.cpp:5074
		const BrnTraffic::JunctionLogicBox * lpJunctionLogicBox;

		// BrnGameStateModule.cpp:5075
		CgsID lPlayerCarID;

		// BrnGameStateModule.cpp:5076
		const VehicleListEntry * lpPlayerCarVehicleListEntry;

		// BrnGameStateModule.cpp:5077
		float32_t lfProgressionRankAsRatio;

		// BrnGameStateModule.cpp:5078
		int8_t liProgressionRank;

		// BrnGameStateModule.cpp:5079
		const ProgressionRankData * lpProgressionRankData;

		// BrnGameStateModule.cpp:5080
		const EventJunction * lpEventJunction;

		// BrnGameStateModule.cpp:5081
		Profile * lpProfile;

		// BrnGameStateModule.cpp:5096
		StartGameModeParams lStartGameModeParams;

		// BrnGameStateModule.cpp:5097
		BrnGameState::GameStateModuleIO::EGameModeType lEGameModeType;

		// BrnGameStateModule.cpp:5099
		int32_t liEventJunctionID;

		// BrnGameStateModule.cpp:5100
		const BrnProgression::RaceEventData * lpEventData;

		TriggerQueryManager::GetTrafficData(/* parameters */);
		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		TriggerQueryManager::GetPlayerCurrentTrafficLightId(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		StartGameModeParams(/* parameters */);
		BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
		{
		}
		BrnProgression::EventJunction::GetID(/* parameters */);
		BrnProgression::EventJunction::GetOfflineEvent(/* parameters */);
		BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
		CgsContainers::BitArray<256u>::SetBit(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		StartGameModeParams::Construct(/* parameters */);
		TriggerQueryManager::GetPlayerCurrentTrafficLightId(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
		StartGameModeParams::SetTrafficDensity(/* parameters */);
		StartGameModeParams::SetBoostEarning(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
		StartGameModeParams::SetTrafficLightTriggerId(/* parameters */);
		GetCurrentCarId(/* parameters */);
		StartGameModeParams::SetEventJunctionId(/* parameters */);
		StartGameModeParams::SetJunctionID(/* parameters */);
		StartGameModeParams::SetEventData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		{
			// BrnGameStateModule.cpp:5130
			CgsID lCarId;

			{
				// BrnGameStateModule.cpp:5134
				WrongCarForChallengeAction lWrongCarForChallengeAction;

				GameStateModuleIO::WrongCarForChallengeAction::Construct(/* parameters */);
				AddGameAction<BrnGameState::GameStateModuleIO::WrongCarForChallengeAction>(/* parameters */);
			}
		}
		{
			// BrnGameStateModule.cpp:5175
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		StartGameModeParams::SetPlayerVehicleGamePlayData(/* parameters */);
		BrnProgression::ProgressionManager::DoesGameModeRankUpIndividually(/* parameters */);
		StartGameModeParams::SetProgressionRankAsRatio(/* parameters */);
		BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
		BrnProgression::ProgressionData::FindEventJunction(/* parameters */);
		StartGameModeParams::SetProgressionRankData(/* parameters */);
		{
		}
		BrnProgression::EventJunction::GetID(/* parameters */);
		StartGameModeParams::SetShotGroup(/* parameters */);
		ModeManager::GetStartDataForTrafficLight(/* parameters */);
		BrnTraffic::LightTriggerStartData::GetStartDirection(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
		BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
		StartGameModeParams::SetPlayerBaseDeformation(/* parameters */);
		StreetManager::ClearUpcomingRoadIds(/* parameters */);
		DriveThruManager::DriveThroughsCloseOnceActivatedUntilFurtherNotice(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
	BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		// BrnGameStateModule.cpp:5171
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
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

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::PlayerRequestedRaceModeStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::PlayerRequestedCrashModeStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTimerRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:275
		CgsDev::StrStream lStrStream;

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

extern void ShowtimeIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::DetectModeStarts(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:4952
		BrnGameState::EGameModeStartMechanism leStartMechanism;

		// BrnGameStateModule.cpp:4976
		float32_t lfRealTimeStep;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetGameTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetTimerRequestInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		// BrnGameStateModule.cpp:4984
		ShowtimeIntro lShowtimeIntroAction;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeIntro>(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	}
	{
		// BrnGameStateModule.cpp:5016
		float32_t lfCosAngle;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetTimerRequestInterface(/* parameters */);
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
	{
		// BrnGameStateModule.cpp:5042
		ShowtimeIntro lShowtimeIntroAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeIntro>(/* parameters */);
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

void BrnGameState::GameStateModule::GetPlayerActiveRaceCarIndex(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(const const RCEntityActiveRaceCarOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:213
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::operator=(const const RCEntityGlobalRaceCarOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:216
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetTrafficTypeResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:219
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::operator=(const const EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Append(const const BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:195
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetPlayerGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetBestBurnoutChain(uint32_t  luBestNewBurnoutChainScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetInPictureParadise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::PostWorldUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const PostWorldInputBuffer *  lpInput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:1586
		bool lbSimPaused;

		// BrnGameStateModule.cpp:1628
		EActiveRaceCarIndex leActiveRaceCar;

	}
	IsSimPaused(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::operator=(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetTrafficTypeResponseQueue(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::operator=(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetGameEventQueue(/* parameters */);
	{
		// BrnGameStateModule.cpp:1631
		bool lbCrashing;

	}
	operator++(/* parameters */);
	{
		// BrnGameStateModule.cpp:1652
		Profile * lpProfile;

		GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetPlayerGlobalRaceCarIndex(/* parameters */);
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnProgression::Profile::SetBestBurnoutChain(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetGameModeElapsedTime(const Time *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:305
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:455
		int32_t liIndex;

		// BrnNetworkModuleGameStateIOInterfaces.h:456
		int32_t liFreeEntry;

	}
}

void BrnGameState::ScoringSystem::GetOvertakenRival(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2257
		const CarData * lpCarData;

	}
}

void BrnGameState::GameStateModule::EmmPreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const GameEventQueue *  lpGameEventQueue, bool  lbAllCarsReady) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:1376
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnGameStateModule.cpp:1377
		bool lbSimPaused;

		// BrnGameStateModule.cpp:1380
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		// BrnGameStateModule.cpp:1382
		InputBuffer::GameActionQueue * lpActionQueue;

		// BrnGameStateModule.cpp:1383
		Time lCurrentTime;

		// BrnGameStateModule.cpp:1431
		BrnGameState::ScoringSystem * lpScoringSystem;

		// BrnGameStateModule.cpp:1434
		Time lRaceCarTotalTime;

	}
	IsSimPaused(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	GetPlayerGlobalRaceCarIndex(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerInput(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	GameStateModuleIO::OutputBuffer::SetGameModeElapsedTime(/* parameters */);
	{
		// BrnGameStateModule.cpp:1445
		CarData * lpCarData;

		ScoringSystem::GetCarData(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetActiveRaceCarIndex(/* parameters */);
	}
	operator++(/* parameters */);
	ScoringSystem::GetOvertakenRival(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	CarData::GetActiveRaceCarIndex(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
	ScoringSystem::GetCarRacePosition(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::SetPlayerRaceCarIndex(int32_t  liPlayerRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateInviteManager::IsInviteInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseVariableEventQueue::BaseVariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:130
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateInviteManager::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(const const EventQueue<BrnGameState::TakedownEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Append(const const BaseEventQueue<BrnGameState::TakedownEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::TestAndResetDriveThrusDirtyFlag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.h:1169
		bool lbFlag;

	}
}

void BrnGameState::ModeManager::CurrentGameModeUsesNavigation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::CurrentGameModeDisablesUpcomingRoads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerWrongWayTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetIsInOnlineGameMode(bool  lbIsInOnlineGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetIsCarSelect(bool  lbIsInCarSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetCurrentGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::SetControllerActive(bool  lbControllerActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:308
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetRaceCarRaceDistanceInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:311
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModule::PreWorldUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.cpp:1036
		bool lbSimPaused;

		// BrnGameStateModule.cpp:1038
		InputBuffer::GameActionQueue * lpActionQueue;

		// BrnGameStateModule.cpp:1039
		float32_t lfGameTimeStep;

		// BrnGameStateModule.cpp:1040
		float32_t lfSimTime;

		// BrnGameStateModule.cpp:1132
		GameEventQueue lGameEventQueue;

		// BrnGameStateModule.cpp:1342
		RaceCarRaceDistanceInterface * lpRaceCarRaceDistInterface;

		IsSimPaused(/* parameters */);
	}
	ModeManager::IsOnlineGameMode(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetTimerRequestInterface(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	ModeManager::IsShowtimeGameMode(/* parameters */);
	GameEventQueue(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetGameEventQueue(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerInput(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetControllerInput(/* parameters */);
	{
		// BrnGameStateModule.cpp:1196
		CrashingRaceCarInterface lCrashingVehicleInterface;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
		BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetTakedownEventOutputQueue(/* parameters */);
		CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnProgression::ProgressionManager::TestAndResetDriveThrusDirtyFlag(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	ModeManager::CurrentGameModeUsesNavigation(/* parameters */);
	ModeManager::CurrentGameModeDisablesUpcomingRoads(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetIsInOnlineGameMode(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetIsCarSelect(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetCurrentGameMode(/* parameters */);
	GameStateModuleIO::OutputBuffer::SetControllerActive(/* parameters */);
	{
		// BrnGameStateModule.cpp:1330
		ProgressionProfileDataAction lProgressionProfileDataAction;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	}
	BrnProgression::ProgressionManager::AreRoadRulesAvailable(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ProgressionProfileDataAction>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
	AppendGuiQueue<16384, 16>(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetRaceCarRaceDistanceInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	GameStateModuleIO::GameStateToGuiInterface::SetPlayerRaceCarIndex(/* parameters */);
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
		// BrnGameStateModule.cpp:1245
		bool lbIsInJunkyard;

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

::::kfSteeringPower = [63, 128, 0, 0];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

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

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::rumblesurface::LeftMotorDecayTime = -3236297437536890646;

Attrib::Hash::rumblesurface::LeftMotorPeakSpeed = -4386376933009942509;

Attrib::Hash::rumblesurface::LeftMotorReleaseTime = -6098111488946948747;

Attrib::Hash::rumblesurface::LeftMotorSustainSpeed = -4053337407429177322;

Attrib::Hash::rumblesurface::MaxSpeedForRumble = -1207620967171820760;

Attrib::Hash::rumblesurface::MinSpeedForRumble = -247632692737890029;

Attrib::Hash::rumblesurface::RightMotorReleaseTime = -4588690177551846229;

Attrib::Hash::rumblesurface::RightMotorSustainSpeed = -1455930564447276870;

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

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

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

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

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

BrnProgression::KF_PROGRESSION_BAR_SIZE = [63, 192, 0, 0];

BrnProgression::KF_DEBUG_TEXT_SIZE = [65, 64, 0, 0];

BrnWorld::KI_MAX_RIVALS_IN_MODE;

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

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::KF_SHOWTIME_TIME_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnGameState::KU_INVALID_RANDOM_SEED = -1;

BrnGameState::KAC_CRASH_MODE_MSG = "O: Showtime!";

BrnGameState::KF_BLUE_TEAM_IS_ESCAPING_DISTANCE = [67, 200, 0, 0];

BrnGameState::KF_BLUE_TEAM_IS_ESCAPING_TIME = [66, 112, 0, 0];

BrnGameState::KF_BLUE_TEAM_IS_BEHIND_YOU_DISTANCE = [65, 112, 0, 0];

BrnGameState::KF_BLUE_TEAM_IS_BEHIND_YOU_TIME = [65, 0, 0, 0];

BrnGameState::KF_TEMP_KM_TO_METRES = [68, 122, 0, 0];

BrnGameState::KF_ON_TAIL_TIME = [64, 64, 0, 0];

BrnGameState::KF_ON_TAIL_DISTANCE = [65, 160, 0, 0];

BrnGameState::KF_TIME_TO_REGISTER_NEW_LEAD = [63, 192, 0, 0];

BrnGameState::KF_TIME_TO_REGISTER_NEW_LAST = [64, 240, 0, 0];

BrnGameState::KF_TIME_FOR_START_RACE_ACTION = [62, 179, 51, 51];

BrnGameState::KF_TIME_FOR_START_CRASH_MODE_ACTION = [60, 35, 215, 10];

BrnGameState::KF_MINIMUM_TIME_BETWEEN_SHOWTIME_ATTEMPTS = [64, 0, 0, 0];

BrnGameState::KF_MAX_SPEED_FOR_EVENT_INFO_MPH = [66, 32, 0, 0];

BrnGameState::KF_MAX_SPEED_FOR_START_RACE_MPH = [65, 240, 0, 0];

BrnGameState::K_INVALID_VEHICLE_INDEX = -1;

BrnGameState::KAC_START_ROAD_RAGE_MESSAGE = "Press up on the dpad to start a road rage";

BrnGameState::KF_WAIT_MUGSHOT_DURATION = [62, 76, 204, 205];

BrnGameState::KF_WAIT_PAYBACK_MUGSHOT_DURATION = [64, 64, 0, 0];

BrnGameState::KF_CAPTURE_YOUR_MUGSHOT_DURATION = [64, 19, 51, 51];

BrnGameState::KF_CAPTURE_YOUR_VICTORY_MUGSHOT_DURATION = [64, 153, 153, 154];

BrnGameState::KF_SHOW_YOUR_MUGSHOT_DURATION = [64, 19, 51, 51];

BrnGameState::KF_SHOW_THEIR_MUGSHOT_DURATION = [64, 128, 0, 0];

BrnGameState::KF_CAPTURE_THEIR_MUGSHOT_TIMEOUT_DURATION = [65, 32, 0, 0];

BrnGameState::KF_DIRTY_TRICK_DURATION = [65, 32, 0, 0];

BrnGameState::KF_PAYBACK_AWARD_DELAY = [63, 128, 0, 0];

BrnGameState::KF_INVITE_MANAGER_TEXT_SIZE = [65, 208, 0, 0];

BrnGameState::KF_INVITE_MANAGER_PREPARE_INVITE_POS_X = [68, 25, 179, 51];

BrnGameState::KF_INVITE_MANAGER_PREPARE_INVITE_POS_Y = [66, 128, 0, 0];

BrnGameState::KF_INVITE_MANAGER_PERFORM_INVITE_POS_X = [68, 23, 150, 102];

BrnGameState::KF_INVITE_MANAGER_PERFORM_INVITE_POS_Y = [66, 128, 0, 0];

BrnGameState::KAC_MARKED_MAN = "PRERACE_MARKED_MAN";

BrnGameState::KF_DRIVE_THRU_INACTIVE_TIME = [64, 64, 0, 0];

BrnGameState::KF_DRIVE_THRU_PRESENTATION_TIME = [63, 102, 102, 102];

BrnGameState::KF_DRIVE_THRU_CLOSED_DEBOUNCE_TIME = [63, 128, 0, 0];

BrnGameState::KF_DRIVE_THRU_SLOW_MO_DEACTIVATE_TIME = [64, 6, 102, 102];

BrnGameState::KF_DRIVE_THRU_CLOSED_MESSAGE_TIME = [63, 140, 204, 204];

BrnGameState::KF_DRIVE_THRU_SLO_MO = [63, 6, 188, 162];

BrnGameState::KF_DRIVE_THRU_DISCOVERY_DISTANCE = [66, 150, 0, 0];

BrnGameState::KF_DRIVE_THRU_DISCOVERY_DISTANCE_SQ = [69, 175, 200, 0];

BrnGameState::KF_DRIVE_THRU_DISCOVERY_MAX_Y_SEPARATION = [64, 160, 0, 0];

BrnGameState::KF_CRASH_RUMBLE_TIME = [62, 204, 204, 205];

BrnGameState::KF_CHECK_RUMBLE_TIME = [62, 25, 153, 154];

BrnGameState::KF_MIN_RUMBLE_SEPARATION_TIME = [63, 64, 0, 0];

BrnGameState::KF_MIN_RUMBLE_IMPACT_STRENGTH = [0, 0, 0, 0];

BrnGameState::KF_RUMBLE_IMPACT_SCALE_LOW = [55, 167, 197, 172];

BrnGameState::KF_RUMBLE_IMPACT_SCALE_HIGH = [58, 131, 18, 111];

BrnGameState::KF_SOUND_TRIGGER_LOOK_AHEAD_TIME = [62, 128, 0, 0];

BrnGameState::KF_SOUND_TRIGGER_MAX_LOOK_AHEAD_DIST = [65, 112, 0, 0];

BrnGameState::KF_CARSELECT_TRANSITION_IN_MIN_TIME_WITH_CARS = [64, 192, 0, 0];

BrnGameState::KF_CARSELECT_TRANSITION_IN_MIN_TIME_NO_CARS = [64, 0, 0, 0];

BrnGameState::KF_CARSELECT_TRANSITION_IN_REQUEST_STREAMING = [63, 0, 0, 0];

BrnGameState::KF_CARSELECT_DELAY_BEFORE_CHANGE_CAR = [63, 192, 0, 0];

BrnGameState::KF_LIVERYSELECT_DELAY_BEFORE_CHANGE_CAR = [63, 89, 153, 154];

BrnGameState::KF_CARSELECT_CHANGE_CAR_TELEPORT_DELAY = [63, 128, 0, 0];

BrnGameState::KF_CARSELECT_WAIT_FOR_AUDIO_MIN_TIME = [64, 0, 0, 0];

BrnGameState::KF_CARSELECT_UNLOCK_MIN_TIME = [64, 224, 0, 0];

BrnGameState::KF_JUMP_LANDING_TIME = [63, 0, 0, 0];

BrnGameState::KF_DEFAULT_TIME_OUT = [65, 128, 0, 0];

BrnGameState::KF_MIN_TIME_BETWEEN_TRAINING = [64, 160, 0, 0];

BrnGameState::KF_MIN_TIME_BETWEEN_ATOMIKA_CRASHFM_VOS = [68, 22, 0, 0];

BrnGameState::KF_MIN_TIME_BETWEEN_BOOST_TRAINING = [68, 22, 0, 0];

BrnGameState::KF_MIN_TIME_IN_EVENT_FOR_BOOST_TRAINING = [65, 240, 0, 0];

BrnGameState::KF_MAX_TIMED_PLAYED_FOR_NOOB_TRAINING_TIPS = [69, 22, 0, 0];

BrnGameState::KF_NORMAL_TIME_IN_TAKEDOWN_CAM = [63, 182, 102, 102];

BrnGameState::KF_ROAD_RAGE_TIME_IN_TAKEDOWN_CAM = [64, 0, 0, 0];

BrnGameState::KF_PURSUIT_TIME_IN_TAKEDOWN_CAM = [63, 243, 51, 51];

BrnGameState::KF_RESET_PROTECTION_TIME_PROPORTION = [62, 128, 0, 0];

BrnGameState::KF_MIN_NORMAL_RESET_TIME = [62, 182, 102, 102];

BrnGameState::KF_MAX_NORMAL_RESET_TIME = [63, 136, 204, 204];

BrnGameState::KF_PLAYER_CONTROL_RETURN_DELAY_TIME = [63, 0, 0, 0];

BrnGameState::KF_TAKEDOWN_CAMERA_EARLY_OUT_MIN_TIME = [63, 128, 0, 0];

BrnGameState::KF_TAKEDOWN_CAMERA_EARLY_OUT_TIME = [62, 76, 204, 205];

BrnGameState::KR_MIN_TAKEDOWN_CAMERA_EARLY_OUT_SPEED = [63, 128, 0, 0];

BrnGameState::KF_RACE_TIME_BEFORE_LEADER_MESSAGES = [65, 240, 0, 0];

BrnGameState::KF_MIN_TIME_SEPARATION_FOR_LEADER_MESSAGES = [63, 128, 0, 0];

BrnGameState::KF_MAX_TIME_SEPARATION_FOR_LEADER_MESSAGES = [68, 122, 0, 0];

BrnGameState::KF_MAX_DIST_TO_FINISH_FOR_NECK_AND_NECK = [67, 72, 0, 0];

BrnGameState::KF_MAX_SEPARATION_FOR_NECK_AND_NECK = [65, 32, 0, 0];

BrnGameState::KF_MAX_NECK_AND_NECK_SPEED_DIFFERENCE = [65, 240, 0, 0];

BrnGameState::KF_MIN_NECK_AND_NECK_SPEED = [66, 160, 0, 0];

BrnGameState::KI_INVALID_RACE_CAR_INDEX = -1;

BrnGameState::KF_MIN_CHECKPOINT_MESSAGE_SEPARATION = [67, 250, 0, 0];

BrnGameState::KF_RACE_START_NO_DISTANCE_MESSAGE_DISTANCE = [66, 200, 0, 0];

BrnGameState::KF_TIME_TO_BUFFER_CRASHING_CAR_MESSAGES = [63, 192, 0, 0];

BrnGameState::KF_TIME_FOR_WRONG_WAY_MESSAGE = [64, 128, 0, 0];

BrnGameState::KF_MIN_SPEED_FOR_WRONG_WAY_MESSAGE = [65, 32, 0, 0];

BrnGameState::KI_INVALID_USER_ID = -1;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

BrnGameState::GameStateModuleIO::KI_INVALID_RACE_CAR_INDEX = -1;

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

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_MARK_TARGET;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_MARK_MARKED_ME;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_MARK_NONE;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_SQUARE_RELATIONSHIP;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_LIVE_RELATIONSHIP;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_NO_RELATIONSHIP_HIGHEST;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_NO_RELATIONSHIP_LOWEST;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_RANK_LEADER;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_RANK_OUTSIDER;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_RANK_BEGINNER;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_POINTS_LEADER;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_RECENT;

BrnGameState::OnlineFlybyManager::KI_WEIGHTING_NO_RECENT;

BrnGameState::OnlineFlybyManager::KI_RECENT_ACTIVITY_SECONDS;

BrnGameState::OnlineFlybyManager::KI_MAX_STRING_ID_SIZE;

