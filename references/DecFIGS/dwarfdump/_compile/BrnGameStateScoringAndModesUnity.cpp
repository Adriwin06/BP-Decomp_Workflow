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

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void operator++(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
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

void BrnResource::ChallengeListEntry::GetAction(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetAction(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnGameState::GameStateModuleIO::operator++(None, None) {
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

void BrnGameState::GameModeState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeState::Update(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(None, None, None) {
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

void BrnGameState::GameMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RaceMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RaceMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RaceMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FaceOffMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FaceOffMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::FaceOffMode::GetOutroTimeout() {
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

void BrnGameState::RoadRageMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::PursuitMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::PursuitMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::ShouldCountdownEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFugitiveMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFugitiveMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunMode::HasLoadingScreen() {
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

void BrnGameState::ModeManagerDebugComponent::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetCheckPointDistancesToFinishReady(bool  lbReady) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetAchievementManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::Construct(CrashModeScoring *  lpCrashScoring) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashScoreDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::DebugComparePlayers(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:116
		PlayerInfoStruct * lpA;

		// BrnModeManagerDebugComponent.cpp:117
		PlayerInfoStruct * lpB;

	}
}

void BrnGameState::ModeManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::FinishCurrentModeNextUpdateWithFinishPosition(int32_t  liFinishPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::EndCurrentGamemodeWithMedal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::FinishCurrentModeNextUpdateWithFinishPosition(/* parameters */);
}

void BrnGameState::ModeManagerDebugComponent::FinshMode(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::DebugGetDistanceString(char *  lpcTextOut, float_t  lfMetres) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:964
		float_t lfFeet;

		// BrnModeManagerDebugComponent.cpp:965
		float_t lfMiles;

	}
	{
		// BrnModeManagerDebugComponent.cpp:976
		int32_t liFeet;

	}
}

void BrnGameState::ModeManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::PrepareRoadRageScoring(int32_t  liTargetNumTakedowns, uint16_t  luRoadRageExtensionTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::GetPlayerPosition(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::IsStuntTypeInProgress(BrnGameState::EStuntType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:125
		int32_t liRaceCarIndex;

	}
}

void BrnGameState::BaseOnlineModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::WriteDataToOutput(OnlineScoringOutputInterface *  lpOnlineScoringOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::UpdatePlayerPoints(BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::GetAwardParameter(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpAwardData, BrnGameState::EOnlineAwardID  leAwardID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_RaceWinnerCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:392
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:393
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_TakedownsForCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:433
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:434
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_TakedownsAgainstCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:468
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:469
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_MostCrashesCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:503
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:504
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_ShortestDistanceLapCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:569
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:570
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_LongestDistanceLapCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:612
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:613
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_LongestDriftCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:748
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:749
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
}

void BrnGameState::BaseOnlineModeScoring::_GiveRaceWinnerAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveTakedownsForAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveTakedownsAgainstAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveMostCrashesAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveShortestDistanceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveLongestDistanceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_GiveLongestDriftAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::GetCurrentPlayerTeam(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareDistanceToFinish(float_t  lfPlayer1DistanceToFinish, float_t  lfPlayer2DistanceToFinish, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID1, RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID2, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareCheckpointsReached(int32_t  liPlayer1CheckpointsReached, int32_t  liPlayer2CheckpointsReached, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareTakedowns(int32_t  liPlayer1Takedowns, int32_t  liPlayer2Takedowns, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareDisconnects(bool  lbPlayer1Disconnected, bool  lbPlayer2Disconnected, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator>(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareTimeAsRunner(Time &  lPlayer1TimeAsRunner, Time &  lPlayer2TimeAsRunner, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator>(/* parameters */);
	CgsSystem::Time::operator<(/* parameters */);
}

void BrnGameState::OnlineRaceModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::WriteDataToOutput(OnlineScoringOutputInterface *  lpOnlineScoringOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::WriteDataToOutput(OnlineScoringOutputInterface *  lpOnlineScoringOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::_RedTeamPlayerCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:719
		const BrnGameState::OnlineRoadRageModeScoring::RedTeamSortData * lpPlayer1;

		// BrnOnlineRoadRageModeScoring.cpp:720
		const BrnGameState::OnlineRoadRageModeScoring::RedTeamSortData * lpPlayer2;

		// BrnOnlineRoadRageModeScoring.cpp:721
		int32_t liResult;

	}
}

void BrnGameState::OnlineBurningHomeRunModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::WriteDataToOutput(OnlineScoringOutputInterface *  lpOnlineScoringOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeState::Construct(const ModeManager *  lpModeManager, BrnGameState::GameMode *  lpGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::PostWorldUpdate(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::Initialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldFinish(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::PlayerHasSpawned(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex, EActiveRaceCarIndex  leLocalActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnEnterRoad(SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetPlayerVehicleGamePlayData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetGamePlayData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryGamePlayData::GetCarStats(CarStatsCollection *  lpCarStatsCollection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::CalculateMaxPlayerWrecks(const StartGameModeParams *  lpStartGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameMode.cpp:409
		const VehicleListEntry * lpPlayerCarVehicleListEntry;

		// BrnGameMode.cpp:410
		const VehicleListEntryGamePlayData * lpPlayerCarVehicleListEntryGamePlayData;

		// BrnGameMode.cpp:411
		CarStatsCollection lCarStatsCollection;

		StartGameModeParams::GetPlayerVehicleGamePlayData(/* parameters */);
		BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
		BrnResource::VehicleListEntryGamePlayData::GetCarStats(/* parameters */);
	}
}

void BrnGameState::OfflineGameMode::GetFrameRateType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineGameMode::GetFrameRateType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:519
		int32_t liIndex;

	}
}

void BrnGameState::PursuitMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::OnModeEnd(bool  lbExitingFreeburnLobby) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::BufferNewRoadScore(ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::SetIntroJustFinished(bool  lbJustFinished) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::IntroState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetIntroJustFinished(/* parameters */);
}

void BrnGameState::GameMode::SetCountdownJustFinished(bool  lbJustFinished) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CountdownState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetCountdownJustFinished(/* parameters */);
}

void BrnGameState::GameMode::SetTimerStartRequest(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::InProgressState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetTimerStartRequest(/* parameters */);
}

void BrnGameState::OutroState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetUpdateTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OutroState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::SetShowResultsRequest(bool  lbRequested) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResultsState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetShowResultsRequest(/* parameters */);
}

void BrnGameState::OnlineSplashState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineSplashState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::SetFinished(bool  lbFinished) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineLoadingState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetFinished(/* parameters */);
}

void BrnGameState::OnlineLoadingState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineLoadingState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::Construct(ChallengeManager *  lpChallengeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::DebugStartChallenge() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::StartChallenge(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManagerDebugComponent.cpp:116
		ChallengeManagerDebugComponent * lpDebugComponent;

	}
}

void BrnGameState::ChallengeManagerDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::Construct(BrnGameState::RoadRulesManager *  lpRoadRulesManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::DecreaseCurrentTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::DecreaseCurrentStuntTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::AddCrashScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::DecreaseCurrentTimeCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::DecreaseCurrentStuntTimeCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::AddCrashScoreCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Dot<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEqualTo(const const PlayerName &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UsernameCompare(const char *  lpacName1, const char *  lpacName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void CgsContainers::BitArray<64u>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::Construct(StreetManager *  lpStreetManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::GetNumberOfRoadRulesToWin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::SendRoadRulesScoresToNetwork(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:475
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void BrnGameState::CompareSectionWalkData(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:883
		const SectionWalkData * lpWalkData1;

		// BrnGameStateStreetManager.cpp:884
		const SectionWalkData * lpWalkData2;

		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
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

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::MagnitudeRecip<float>(const const Vector2Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Sqrt<float>(/* parameters */);
}

void BrnGameState::CrashScoreDebugComponent::DisplayScores(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashScoreDebugComponent.cpp:157
		const float32_t KF_LARGE_TEXT_SIZE;

		// BrnCrashScoreDebugComponent.cpp:158
		const float32_t KF_SMALL_TEXT_SIZE;

		// BrnCrashScoreDebugComponent.cpp:160
		float32_t lfTextXPos;

		// BrnCrashScoreDebugComponent.cpp:161
		float32_t lfTextYPos;

		// BrnCrashScoreDebugComponent.cpp:164
		Vector2 lTextPos;

		// BrnCrashScoreDebugComponent.cpp:165
		char[64] lacBuff;

	}
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
}

void BrnGameState::CrashScoreDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
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

void rw::math::fpu::Vector3Template<float>::Vector3Template(const const rw::math::vpu::Vector3 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::RoadRageMode::UpdateHiddenRivals(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:288
		int32_t liIndex;

		// BrnRoadRageMode.cpp:290
		float lfMaxHiddenTime;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
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

void BrnGameState::RoadRageModeScoring::GetNumTakedownsAchieved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::GetTargetNumTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void BrnGameState::RoadRageMode::UpdateMaxActiveCars(float32_t  lfTimeStep, const RoadRageModeScoring *  lpRoadRageScoring) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:393
		float32_t lfTimeToReachMaxMadness;

		// BrnRoadRageMode.cpp:394
		int32_t liExcessTakedowns;

		// BrnRoadRageMode.cpp:400
		float32_t lfMaxMadness;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::Abs<float>(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
}

void BrnGameState::StuntModeScoring::GetComboScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::FastFloatToInt32<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::fpu::Mult<float>(const const Vector2Template<float> &  vec, float  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:270
	Vector2Template<float> & r;

	{
		// vector2_operation.h:270
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Normalize<float>(const const Vector2Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:317
	Vector2Template<float> & r;

	{
		// vector2_operation.h:317
		Vector2Template<float> r;

	}
	Mult<float>(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const rw::math::vpu::Vector2 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::CompareFinishTime(const Time *  lpPlayer1FinishTime, const Time *  lpPlayer2FinishTime, int32_t *  lpiResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
}

void BrnGameState::OnlineRaceModeScoring::_PlayerFinishTimesCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRaceModeScoring.cpp:117
		const BrnGameState::OnlineRaceModeScoring::IndexToFinishTuple * lpPlayer1;

		// BrnOnlineRaceModeScoring.cpp:118
		const BrnGameState::OnlineRaceModeScoring::IndexToFinishTuple * lpPlayer2;

		// BrnOnlineRaceModeScoring.cpp:119
		bool lbPlayer1Finished;

		// BrnOnlineRaceModeScoring.cpp:120
		bool lbPlayer2Finished;

		// BrnOnlineRaceModeScoring.cpp:121
		bool lbPlayer1Racing;

		// BrnOnlineRaceModeScoring.cpp:122
		bool lbPlayer2Racing;

		// BrnOnlineRaceModeScoring.cpp:123
		bool lbPlayer1FinishedAndDisconnected;

		// BrnOnlineRaceModeScoring.cpp:124
		bool lbPlayer2FinishedAndDisconnected;

		// BrnOnlineRaceModeScoring.cpp:125
		int32_t liResult;

	}
}

void BrnGameState::OnlineRoadRageModeScoring::_CompareForTablePosition(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:162
		const BrnGameState::OnlineRoadRageModeScoring::TablePositionData * lpPlayer1;

		// BrnOnlineRoadRageModeScoring.cpp:163
		const BrnGameState::OnlineRoadRageModeScoring::TablePositionData * lpPlayer2;

		// BrnOnlineRoadRageModeScoring.cpp:164
		bool lbPlayer1Racing;

		// BrnOnlineRoadRageModeScoring.cpp:165
		bool lbPlayer2Racing;

	}
}

void BrnGameState::OnlineRoadRageModeScoring::_BlueTeamPlayerCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:769
		const BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData * lpPlayer1;

		// BrnOnlineRoadRageModeScoring.cpp:770
		const BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData * lpPlayer2;

		// BrnOnlineRoadRageModeScoring.cpp:771
		bool lbPlayer1Playing;

		// BrnOnlineRoadRageModeScoring.cpp:772
		bool lbPlayer2Playing;

		// BrnOnlineRoadRageModeScoring.cpp:773
		bool lbPlayer1CrossedFinishLine;

		// BrnOnlineRoadRageModeScoring.cpp:774
		bool lbPlayer2CrossedFinishLine;

		// BrnOnlineRoadRageModeScoring.cpp:775
		int32_t liResult;

	}
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::_BurningHomeRunPlayerFinishTimesCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunModeScoring.cpp:165
		const ComparisonData * lpPlayer1;

		// BrnOnlineBurningHomeRunModeScoring.cpp:166
		const ComparisonData * lpPlayer2;

		// BrnOnlineBurningHomeRunModeScoring.cpp:167
		bool lbPlayer1Finished;

		// BrnOnlineBurningHomeRunModeScoring.cpp:168
		bool lbPlayer2Finished;

		// BrnOnlineBurningHomeRunModeScoring.cpp:169
		bool lbPlayer1Racing;

		// BrnOnlineBurningHomeRunModeScoring.cpp:170
		bool lbPlayer2Racing;

		// BrnOnlineBurningHomeRunModeScoring.cpp:171
		int32_t liResult;

	}
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
}

void BrnGameState::ModeManager::IsInGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetCurrentState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetAbortedDuringIntro(bool  lbAborted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetAborted(bool  lbAborted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeList::GetChallengeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
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

void BrnGameState::TidyStuntScore(float32_t  lfScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_GiveFastestLapAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_GiveTimeInLastPlaceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_GiveTimeInFirstPlaceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_GiveMostTimeBoostingAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *  lpaNetworkAwardData, int32_t  liNumberOfActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::ModeManager::IsOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCurrentGameModeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<std::uint16_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::_FastestLapCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:538
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:539
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_TimeInFirstPlaceCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:655
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:656
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_TimeInLastPlaceCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:686
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:687
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
	CgsSystem::Time::operator>(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::_MostTimeBoostingAwardCompare(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:717
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer1;

		// BrnBaseOnlineModeScoring.cpp:718
		const BrnGameState::BaseOnlineModeScoring::NetworkAwardData * lpPlayer2;

	}
	CgsSystem::Time::operator>(/* parameters */);
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

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void BrnGameState::FaceOffMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsPlayerTotalled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetPlayerTeam(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetNumberOfActiveCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsOnlineFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCurrentGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::WasPreviousGameModeOnlineFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::IntroState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsOnlineGameMode(/* parameters */);
	GameMode::SetFinished(/* parameters */);
}

void BrnGameState::QuitState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetFinished(/* parameters */);
}

void BrnGameState::OnlineSplashState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameMode::SetFinished(/* parameters */);
}

void BrnGameState::ModeManager::SetTimedOut(bool  lbTimedOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetCrashedOut(bool  lbHasCrashedOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::FinishCurrentModeNextUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetInActiveGameModeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerNoInputTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerStationaryTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::GetPlayerStationaryTime(/* parameters */);
}

void BrnGameState::SurvivorMode::ShouldExit(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::ShouldFinish(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetStuntScorer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ResetPlayerNoInputTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ResetPlayerStationaryTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntAttackMode::ShouldFinish(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::ResetPlayerStationaryTime(/* parameters */);
	ScoringSystem::ResetPlayerNoInputTime(/* parameters */);
}

void CgsContainers::RingBuffer<CgsID>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFraction() {
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

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::DebugRenderEventTimer(const Time &  lCurrentTime, const Time &  lTargetTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:902
		DebugInterface lDebugInterface;

		// BrnModeManagerDebugComponent.cpp:903
		char[16] lacText;

		// BrnModeManagerDebugComponent.cpp:904
		char[6] lacSecondsFractionText;

		// BrnModeManagerDebugComponent.cpp:905
		int32_t liMinutes;

		// BrnModeManagerDebugComponent.cpp:906
		int32_t liSeconds;

		// BrnModeManagerDebugComponent.cpp:907
		Vector2 lPos;

		// BrnModeManagerDebugComponent.cpp:908
		Vector2 lSize;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsSystem::Time::GetSeconds(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsSystem::Time::GetSeconds(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

void BrnTrigger::TriggerData::GetLandmark(int32_t  liLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerRegion::GetBoxRegion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::Landmark::GetDesignIndex() {
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

void BrnTrigger::TriggerRegion::GetRegionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerRegion::GetId() {
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

void BrnTrigger::TriggerData::GetLandmarkCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OfflineGameMode::SelectRandomDestinations(const TriggerData *  lpTriggerData, const rw::math::vpu::Vector3  lPlayerPos, const rw::math::vpu::Vector3  lStartDir, float32_t  lfMinDist, float32_t  lfMaxDist, LandmarkIndex *  laLandmarkIndices, uint16_t *  luLandmarkAISections, bool  lbDoDirectionCheck) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOfflineGameMode.cpp:100
		int32_t liLandmarkIndex;

		// BrnOfflineGameMode.cpp:101
		uint32_t luNumLandmarksInRange;

		BrnTrigger::TriggerData::GetLandmarkCount(/* parameters */);
	}
	{
		// BrnOfflineGameMode.cpp:106
		const Landmark * lpLandmark;

		// BrnOfflineGameMode.cpp:108
		Vector3 lLandmarkPos;

		// BrnOfflineGameMode.cpp:109
		Vector3 lVectorToLandmark;

		// BrnOfflineGameMode.cpp:110
		float32_t lfSeparation;

		// BrnOfflineGameMode.cpp:111
		float32_t lfLandmarkY;

		BrnTrigger::TriggerData::GetLandmark(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
	}
	{
		// BrnOfflineGameMode.cpp:118
		const Landmark * lpAngusLandmark;

		// BrnOfflineGameMode.cpp:121
		float32_t lfDistFromBoatyardSquared;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

void BrnGameState::ModeManager::IsWaitingForModeDataToLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::IntroState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetRoadRageScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::GetRoadRageScoring(/* parameters */);
}

void CgsContainers::FixedRingBuffer<rw::math::vpu::Vector3,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Construct(Vector3 *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<std::uint16_t,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<std::uint16_t>::Construct(uint16_t *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
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

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
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

void rw::math::vpu::GetVecFloat_One() {
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
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
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
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void BrnGameState::GameStateModule::GetProgressionManager() {
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

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetCarColourIndex(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetCarPaintFinishIndex(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameModeParams::SetOnlineFreeburnDeformationAmount(float32_t  lfOnlineFreeburnDeformationAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetPlayerIsInStartRegion(bool  lbIsInStartRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::ORArrays(const BitArray<64u> *  lpArrayA, const BitArray<64u> *  lpArrayB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:493
		int32_t liField;

	}
}

void BrnGameState::GameMode::SetCountdownDisplay(int32_t  liCountdownDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CountdownState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCountdownState.cpp:68
		int32_t liNewCountdownDisplay;

		GameMode::SetCountdownDisplay(/* parameters */);
	}
	GameMode::SetCountdownDisplay(/* parameters */);
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<uint16_t,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<CgsID,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsID>::Construct(CgsID *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::fpu::Round<rw::math::vpu::VecFloat>(VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1274
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1276
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1275
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Floor(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:24
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::fpu::FastFloatToInt32<rw::math::vpu::VecFloat>(VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(const const float &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void CgsNumeric::BitOperations::GetNumberOfSetBits(uint32_t  luBitFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitOperations.h:112
		uint32_t lTemp;

	}
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

void BrnGameState::CarData::ClearCumulativeData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetCumulativePoints(int32_t  liPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetRoundDisconnected(int32_t  liRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ResultsState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetCheckpointDistances(uint32_t  luCheckpointIndexFromFinish, float32_t  lfDistanceToFinish) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(double  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_platform.h:21
		bool result;

	}
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnTrigger::Landmark::GetStartingGridCount() {
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

void BrnGameState::ModeManagerDebugComponent::DebugRenderOnlineTimer(const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:862
		DebugInterface lDebugInterface;

		// BrnModeManagerDebugComponent.cpp:863
		char[16] lacText;

		// BrnModeManagerDebugComponent.cpp:864
		char[6] lacSecondsFractionText;

		// BrnModeManagerDebugComponent.cpp:865
		int32_t liMinutes;

		// BrnModeManagerDebugComponent.cpp:866
		int32_t liSeconds;

		// BrnModeManagerDebugComponent.cpp:867
		Vector2 lPos;

		// BrnModeManagerDebugComponent.cpp:868
		Vector2 lSize;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsSystem::Time::GetSeconds(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

void CgsContainers::BitArray<7u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<64u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<35u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Find(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<CgsID,512u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Insert(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<CgsID,512u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetPlayerGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetRaceCarPosition(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<120>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGameState::operator++(const BrnGameState::EFreeburnSkill &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.h:89
		BrnGameState::EFreeburnSkill leOldEnumIndex;

	}
}

void CgsContainers::FastBitArray<2000>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::Array<CgsID,80u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<120>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<19>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero<float>(const const Vector3Template<float> &  v, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator-<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:141
	Vector3Template<float> & r;

	{
		// vector3_operation.h:141
		Vector3Template<float> r;

	}
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::SetY(float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Normalize<float>(const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:325
	Vector3Template<float> & r;

	{
		// vector3_operation.h:325
		Vector3Template<float> r;

	}
}

void rw::math::fpu::MagnitudeRecip<float>(const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<float>(const const Vector3Template<float> &  vec, float  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:278
	Vector3Template<float> & r;

	{
		// vector3_operation.h:278
		Vector3Template<float> r;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::AngleBetweenVectors<float>(const const Vector3Template<float> &  v0, const const Vector3Template<float> &  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation.h:469
		Vector3Template<float> nv0;

		// vector3_operation.h:469
		Vector3Template<float> nv1;

		// vector3_operation.h:472
		float angle;

	}
}

void rw::math::fpu::NormalizeFast<float>(const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:309
	Vector3Template<float> & r;

	{
		// vector3_operation.h:309
		Vector3Template<float> r;

	}
}

void rw::math::fpu::CosAngleBetweenNormalizedVectors<float>(const const Vector3Template<float> &  v0, const const Vector3Template<float> &  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation.h:259
		float cosAngle;

	}
}

void rw::math::fpu::Dot<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::ACos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetProgressionRankData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::Construct(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameModeParams.h:1018
		int32_t liIndex;

	}
}

void BrnTraffic::LightTriggerId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetTrafficDensityPursuit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetTrafficDensity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetProgressionRankAsRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetOvertakingDifficulty(float32_t *  lpOvertakingDifficulty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionRankData.h:400
		int32_t liGridPosition;

	}
}

void BrnGameState::GameModeParams::SetAISpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod  leAISpeedSelectionMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetDefaultPlayerRouteFindingStyle(BrnAI::ERouteFindingStyle  lePlayerRouteFindingStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetDefaultAIRouteFindingStyle(BrnAI::ERouteFindingStyle  leAIRouteFindingStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetAIAggresiveCarCount(int32_t  liAIAggressiveCarCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetTakedownTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetPursuedCarGlobalIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetPursuedCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::PursuitMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPursuitMode.cpp:51
		const ProgressionRankData * lpProgressionRankData;

		StartGameModeParams::GetProgressionRankData(/* parameters */);
	}
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnProgression::ProgressionRankData::GetOvertakingDifficulty(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetAIAggresiveCarCount(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetAISpeedSelectionMethod(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
}

void BrnGameState::CrashMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameModeParams::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
}

void BrnGameState::ModeManager::GetNetworkRoundManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::GetNetworkGameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineShowtimeMode.cpp:50
		const StartNetworkGameEvent * lpStartNetworkShowtimeEvent;

		GameModeParams::Construct(/* parameters */);
	}
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetTrafficOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineFreeBurnLobbyMode.cpp:126
		const StartNetworkGameEvent * lpStartNetworkRaceEvent;

		GameModeParams::Construct(/* parameters */);
	}
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
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

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void BrnGameState::OnlineBurningHomeRunMode::PickRandomRunnerAndSetTeams(const StartNetworkGameEvent *  lpStartGameEvent, GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunMode.cpp:127
		int32_t liRunnerIndex;

		// BrnOnlineBurningHomeRunMode.cpp:128
		int32_t liGridIndex;

		// BrnOnlineBurningHomeRunMode.cpp:129
		int32_t liNumberOfRaceCars;

	}
	CgsNumeric::Random::RandomInt(/* parameters */);
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::SetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Set(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::ClearSectionWalkingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::ClearUpcomingRoadIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::ClearUpcomingRoadStickiness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::OnlineFreeBurnLobbyMode::PlayerHasSpawned(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::SetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, float32_t  lfNewValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::GetSkillAccuracy(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::SetBit(const int32_t  liIndex) {
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

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::StreetData::GetChallengeParScore(Road::ChallengeIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::StreetData::GetRoad(SpanBase::RoadIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::Road::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetRoad(SpanBase::RoadIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::Road::GetRoadLimitId0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::Road::GetRoadLimitId1() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetRoadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::StreetData::GetRoadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LandmarkRouteRequestEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetTriggerData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::ModeManager::GetTrafficData() {
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

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::LightTriggerStartData::GetStartDirection(uint32_t  luIndex) {
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

void BrnTraffic::LightTriggerStartData::GetStartPosition(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceMode::GetBestStartGridID(LightTriggerId  lLightTriggerID, const StartGameModeParams *  lpStartGameModeParams, const rw::math::vpu::Vector3  lFirstCheckpointPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRaceMode.cpp:134
		LightTriggerId[8] lLightIDs;

		// BrnOnlineRaceMode.cpp:135
		Vector3[8] laLightDirections;

		// BrnOnlineRaceMode.cpp:136
		Vector3[8] laLightPositions;

		// BrnOnlineRaceMode.cpp:138
		int32_t liNumLightsFound;

		// BrnOnlineRaceMode.cpp:139
		int32_t liLightIndex;

		// BrnOnlineRaceMode.cpp:140
		uint8_t luLookupIndex;

		// BrnOnlineRaceMode.cpp:142
		int32_t liBestLightIndex;

		// BrnOnlineRaceMode.cpp:143
		float32_t lfMinAngleFound;

		// BrnOnlineRaceMode.cpp:146
		const TrafficData * lpTrafficData;

		// BrnOnlineRaceMode.cpp:149
		const BrnTraffic::Hull * lpHull;

		// BrnOnlineRaceMode.cpp:151
		uint8_t luJunctionIndex;

		ModeManager::GetTrafficData(/* parameters */);
		BrnTraffic::LightTriggerId::GetHull(/* parameters */);
		{
			// BrnOnlineRaceMode.cpp:162
			const LightTriggerStartData * lpStartData;

			BrnTraffic::LightTriggerId::Set(/* parameters */);
			BrnWorld::TriggerId::Set(/* parameters */);
			BrnTraffic::LightTriggerStartData::GetStartDirection(/* parameters */);
			BrnTraffic::LightTriggerStartData::GetStartPosition(/* parameters */);
		}
		{
			// BrnOnlineRaceMode.cpp:179
			Vector3 lStartToTarget;

			// BrnOnlineRaceMode.cpp:180
			float32_t lfCurrentAngle;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Normalize(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::AngleBetweenVectors(/* parameters */);
			{
				{
				}
			}
			{
			}
			{
				{
				}
			}
			{
				{
					{
					}
					{
					}
				}
			}
			rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
			rw::math::vpu::ACos(/* parameters */);
			rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		}
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
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetRivalId(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
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

void BrnProgression::Rival::GetPursuitTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:198
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::GameStateModule::GetFlybyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:984
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsOnlineGameMode(/* parameters */);
}

void CgsContainers::Array<EActiveRaceCarIndex,7u>::Contains(const const EActiveRaceCarIndex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<EActiveRaceCarIndex,7u>::FindFirstInstanceOf(const const EActiveRaceCarIndex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void BrnGameState::ScoringSystem::IsTimerActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(int32_t  liSeconds, float32_t  lfFraction) {
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

void CgsSystem::Time::Time() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::SetTakeDownTarget(int32_t  liTakedownTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<std::uint16_t>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<std::uint16_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<std::uint16_t>::Push(const uint16_t *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::RingBuffer<CgsID>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsID>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsID>::Push(const CgsID *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetFloatVal(float32_t  lfFloatVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:329
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

void CgsSystem::Time::SetFloatVal(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsSystem::Time::Time(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::Time(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

	}
}

void BrnTraffic::LightTriggerId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetStartDataForTrafficLight(LightTriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.h:1520
		const TrafficData * lpTrafficData;

		// BrnModeManager.h:1525
		bool lbOnline;

		TriggerQueryManager::GetTrafficData(/* parameters */);
	}
	CgsResource::SmallResource::GetMemoryResource(/* parameters */);
	BrnTraffic::TrafficData::GetStartDataForTrafficLight(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<8>::Iterator::operator++() {
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
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<19>::IsBitSet(const int32_t  liIndex) {
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

void CgsContainers::FastBitArray<2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<120>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<19>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::Iterator::operator++() {
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
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<60>::Iterator::operator++() {
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
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<60>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::IsSimTimerFrequency50Hz() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<120>::SetBit(const int32_t  liIndex) {
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

void CgsContainers::FastBitArray<60>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::IsBitSet(const int32_t  liIndex) {
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

void BrnAI::AIModuleIO::AICarOutputInterface::GetPlayerRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetNodeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetNode(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoute.h:325
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RouteNode::GetPositionWithZeroY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnProgression::ProgressionData::GetRival(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Rival::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:266
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::PlayerName::Construct(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerName.h:87
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		(None)unknown_arg
		{
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

void CgsNetwork::PlayerName::Construct(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::ChallengeListEntry::GetCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:824
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::ChallengeListEntry::GetCarType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnResource::VehicleListEntry::GetCarType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeList::GetChallengeData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:179
		int32_t liIndex;

	}
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

void BrnGameState::ChallengeManager::ChallengesAreAllOnePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetOriginalNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManager::ChallengesAreAllTwoPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsObjectPool.h:176
		int32_t liI;

	}
}

void BrnResource::ChallengeListEntry::SetNewNumPlayers(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::ResetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::HasPlayerCompletedFreeburnChallenge(CgsID  lFreeburnChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::CompleteFreeburnChallengeBlock(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::CompleteFreeburnChallenge(CgsID  lFreeburnChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.h:1372
		uint32_t luNumberOfChallenges;

	}
}

void BrnGameState::ChallengeManagerDebugComponent::CompleteAllChallenges(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManagerDebugComponent.cpp:142
		int32_t liChallengeIndex;

		// BrnChallengeManagerDebugComponent.cpp:143
		ChallengeManager * lpChallengeManager;

		// BrnChallengeManagerDebugComponent.cpp:144
		ChallengeManagerDebugComponent * lpDebugComponent;

	}
	{
		// BrnChallengeManagerDebugComponent.cpp:156
		const ChallengeListEntry * lpChallenge;

		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	BrnProgression::ProgressionManager::HasPlayerCompletedFreeburnChallenge(/* parameters */);
	CgsContainers::FastBitArray<2000>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnProgression::ProgressionManager::CompleteFreeburnChallenge(/* parameters */);
}

void BrnResource::ChallengeListEntryAction::GetTargetValue(int32_t  liTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetCoopType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetProgressionRankCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetProgressionRankData(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetRoadRageTakedownTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumRankWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Round<float>(float  a) {
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

void CgsDev::SimpleStrStream::SimpleStrStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:296
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		{
			// BrnModeManagerDebugComponent.cpp:302
			BrnGameState::GameStateModuleIO::EGameModeState leState;

			ModeManager::GetCurrentGameModeState(/* parameters */);
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
	}
}

void BrnGameState::RoadRageMode::HandleGameEvents(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:491
		const RaceCarNeedsHidingEvent * lpHidingEvent;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
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

void BrnGameState::CarData::SetRoadRulesScores(Road::ChallengeIndex  lChallengeIndex, ChallengeHighScoreEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetRoadRulesScores(Road::ChallengeIndex  lChallengeIndex, ChallengeHighScoreEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3244
		const ChallengeHighScoreEntry * lpChallenge;

	}
}

void BrnGameState::CarData::GetScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[22] __FUNCTION__;

	{
		// BrnScoringSystem.h:1954
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
			}
		}
		{
			// BrnScoringSystem.h:1965
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

void BrnGameState::ScoringSystem::GetPlayerDisconnected(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::CarData::GetCumulativePoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCarData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2897
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
	GameStateModuleIO::operator++(/* parameters */);
}

void CgsSystem::Time::operator+=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:205
		CgsDev::StrStream lStrStream;

	}
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

void BrnGameState::ScoringSystem::GetOnlineFinishPosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundData::SetPosition(int32_t  liRoundIndex, int32_t  liPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetRoundStartTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetTeam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetStatus(BrnGameState::CarData::EPlayerStatus  lePlayerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Append(const const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCarData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2877
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
			}
		}
	}
}

void BrnGameState::ScoringSystem::GetCarData(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir() {
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

void BrnMath::Magnitude2D(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
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

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerLinearVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void rw::math::vpu::operator/=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:375
		VectorIntrinsicUnion::VectorIntrinsic reciprocal;

		{
			// vector3_operation_inline.h:375
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// vector3_operation_inline.h:375
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			{
				// vector3_operation_inline.h:375
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// vector3_operation_inline.h:375
				VectorIntrinsicUnion::VectorIntrinsic vOne;

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

void CgsContainers::RingBuffer<rw::math::vpu::Vector3>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<rw::math::vpu::Vector3>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Push(const rw::math::vpu::Vector3 *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCurrentInAirRotations(EActiveRaceCarIndex  leActiveRaceCarIndex) {
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

void rw::math::vpu::Max(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:312
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInReverseGear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerWrecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarFatalyCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetModifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ChallengeData::SetClean(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WorldMap2D() {
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

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResource::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::TriggerData::GetGenericRegion(int32_t  liGenericRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsWorld::WorldMap2D::GetValue(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTrigger::TriggerData::GetGenericRegionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearModeTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(float  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:137
		CgsDev::StrStream lStrStream;

	}
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

void BrnGameState::CarData::SetActiveRaceCarIndex(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<EActiveRaceCarIndex,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetPlayerWreckCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearDisconnectedPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1979
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

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

void BrnGameState::OnlineFreeBurnLobbyMode::SetStreetManager(StreetManager *  lpStreetManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzManager::SetStreetManager(StreetManager *  lpStreetManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::SetMugshotManager(BrnGameState::MugshotManager *  lpMugshotManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzManager::SetMugshotManager(BrnGameState::MugshotManager *  lpMugshotManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetBeenEliminated(bool  lbHasBeenEliminated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator-=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:222
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<2u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ScoreList::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ScoreList::SetScore(/* parameters */);
}

void BrnStreetData::ChallengePlayerScoreEntry::SetCarID(BrnStreetData::ScoreType  leScoreType, CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::PopulateUserChallengeScores(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:159
		Random lRandomNumGen;

		// BrnStreetManagerDebugComponent.cpp:160
		BrnStreetData::ScoreType leChallengeVariableToSet;

		// BrnStreetManagerDebugComponent.cpp:161
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:162
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:163
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	CgsNumeric::Random::Construct(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	{
		// BrnStreetManagerDebugComponent.cpp:180
		ChallengePlayerScoreEntry lChallengeDataToSet;

		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerStartData::GetNumStartPositions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::GameModeParams::AddStartLocation(Vector3  lPosition, Vector3  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameModeParams.h:1155
		StartLocation lStartLocation;

	}
}

extern void StartLocation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::Array<BrnGameState::StartLocation,8u>::Append(const const StartLocation &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::StartGameModeParams::GetEventData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Min<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetEventJunctionId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetJunctionID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetTrafficDensitySurvival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetLargeVehicleProbability() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetStartDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetStartMechanism() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetTrafficLightTriggerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetPlayerWreckCount(int32_t  liWreckCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSurvivor.cpp:61
		const BrnProgression::RaceEventData * lpEventData;

		// BrnSurvivor.cpp:62
		const ProgressionRankData * lpProgressionRankData;

		// BrnSurvivor.cpp:63
		Vector3 lPlayerPos;

		// BrnSurvivor.cpp:64
		Vector3 lStartDir;

	}
	StartGameModeParams::GetProgressionRankData(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	rw::math::fpu::Min<int32_t>(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnProgression::ProgressionRankData::GetOvertakingDifficulty(/* parameters */);
	StartGameModeParams::GetTrafficLightTriggerId(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::SetAIAggresiveCarCount(/* parameters */);
	GameModeParams::SetAISpeedSelectionMethod(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GameModeParams::SetPlayerWreckCount(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	BrnProgression::ProgressionRankData::GetLargeVehicleProbability(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnProgression::ProgressionRankData::GetTrafficDensitySurvival(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	StartGameModeParams::GetTrafficDensity(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

void BrnProgression::RaceEventData::GetRankTime(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceEventData.h:898
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::StuntAttackMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntAttackMode.cpp:60
		const BrnProgression::RaceEventData * lpEventData;

		// BrnStuntAttackMode.cpp:61
		const ProgressionRankData * lpProgressionRankData;

		// BrnStuntAttackMode.cpp:100
		int8_t liRank;

	}
	StartGameModeParams::GetProgressionRankData(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnProgression::ProgressionRankData::GetOvertakingDifficulty(/* parameters */);
	StartGameModeParams::GetTrafficLightTriggerId(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	StartGameModeParams::GetEventData(/* parameters */);
	BrnProgression::RaceEventData::GetRankTime(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	BrnProgression::RaceEventData::GetRankTime(/* parameters */);
	StartGameModeParams::GetEventData(/* parameters */);
	BrnProgression::ProgressionRankData::GetLargeVehicleProbability(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnProgression::ProgressionRankData::GetTrafficDensityBurningRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetTimeLimitSlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurningRouteMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurningRoute.cpp:60
		const BrnProgression::RaceEventData * lpEventData;

		// BrnBurningRoute.cpp:61
		const ProgressionRankData * lpProgressionRankData;

		// BrnBurningRoute.cpp:83
		Vector3 lPlayerPos;

		// BrnBurningRoute.cpp:84
		Vector3 lStartDir;

		StartGameModeParams::GetEventData(/* parameters */);
	}
	StartGameModeParams::GetProgressionRankData(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetTrafficLightTriggerId(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	BrnProgression::RaceEventData::GetTimeLimitSlow(/* parameters */);
	BrnProgression::ProgressionRankData::GetLargeVehicleProbability(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnProgression::ProgressionRankData::GetTrafficDensityBurningRoute(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	StartGameModeParams::GetTrafficDensity(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

void BrnProgression::ProgressionRankData::GetTrafficDensityRoadRage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetRoadRageRivalsNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetRoadRageTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:70
		const ProgressionRankData * lpProgressionRankData;

		// BrnRoadRageMode.cpp:155
		int32_t liIndex;

		StartGameModeParams::GetProgressionRankData(/* parameters */);
	}
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnProgression::ProgressionRankData::GetOvertakingDifficulty(/* parameters */);
	StartGameModeParams::GetTrafficLightTriggerId(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	GameModeParams::SetAISpeedSelectionMethod(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::SetAIAggresiveCarCount(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	GameModeParams::SetPlayerWreckCount(/* parameters */);
	BrnProgression::ProgressionRankData::GetLargeVehicleProbability(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnProgression::ProgressionRankData::GetTrafficDensityRoadRage(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	StartGameModeParams::GetTrafficDensity(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetRandom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt(uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:302
		uint32_t luMod;

		// CgsRandom.h:305
		uint32_t luResult;

	}
}

void BrnGameState::GameModeParams::AddCheckpoint(LandmarkIndex  luLandmarkIndex, uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameModeParams.h:1088
		CheckpointData lCheckpointData;

	}
}

extern void CheckpointData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint32_t,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::FaceOffMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFaceOffMode.cpp:114
		const TriggerData * lpTriggerData;

		// BrnFaceOffMode.cpp:115
		LandmarkIndex[512] laLandmarkIndices;

		// BrnFaceOffMode.cpp:116
		uint16_t[512] luLandmarkAISections;

		// BrnFaceOffMode.cpp:118
		Vector3 lPlayerPos;

		// BrnFaceOffMode.cpp:119
		Vector3 lStartDir;

		// BrnFaceOffMode.cpp:121
		uint32_t luChosenLandmarkLocalIndex;

		// BrnFaceOffMode.cpp:122
		uint32_t luNumLandmarksInRange;

		GameModeParams::Construct(/* parameters */);
	}
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetAISpeedSelectionMethod(/* parameters */);
	ModeManager::GetTriggerData(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetAIAggresiveCarCount(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	ModeManager::GetRandom(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	GameModeParams::AddCheckpoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::TriggerQueryManager::AddLandmarkIndexForGameMode(LandmarkIndex  luLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Contains(const const LandmarkIndex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::FindFirstInstanceOf(const const LandmarkIndex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Append(const const LandmarkIndex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:269
		CgsDev::StrStream lStrStream;

	}
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

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<3072>::GetAILanes(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1766
		GetGameDataEvent lRequest;

	}
}

void BrnResource::MakeAIDataId() {
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

void BrnResource::GameDataIO::GetAIDataResponse::GetAIDataHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
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

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator=(const const ResourceHandle &  lHandle) {
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

void BrnStreetData::Road::GetDebugName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:210
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::GetBurnoutSkillzData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3512
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::ScoringSystem::GetBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3530
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:195
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineFreeBurnLobbyMode::PostWorldUpdate(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetWorldMap2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetWorldMap2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetCheckpointData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::CheckpointData::GetLandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CheckpointData::SetDistrict(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetCheckpointCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameModeState*,8u>::Construct(uint32_t  luLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameModeState*,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameMode::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
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

void BrnGameState::OnlineGameMode::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OfflineGameMode::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetItem(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2964
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Append(const const GridPositionAndScoreData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Append(const const RoadRulesRecvData::NetworkPlayerID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::FindFirstInstanceOf(const const RoadRulesRecvData::NetworkPlayerID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::GetNetworkRoundEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::GetCurrentRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetBoostType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetOnlineTimeLimit(float32_t  lfNewTimeLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::IsTrafficCheckingOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetRedTeamInfiniteBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetNumRunnerCrashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunMode.cpp:54
		const StartNetworkGameEvent * lpStartNetworkGameEvent;

		// BrnOnlineBurningHomeRunMode.cpp:55
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnOnlineBurningHomeRunMode.cpp:56
		int32_t liRoundNumber;

		GameModeParams::Construct(/* parameters */);
	}
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	NetworkRoundManager::GetNetworkRoundEvent(/* parameters */);
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetOnlineTimeLimit(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::SetSeed(/* parameters */);
}

void BrnGameState::OnlineRoadRageMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageMode.cpp:52
		const StartNetworkGameEvent * lpStartNetworkGameEvent;

		// BrnOnlineRoadRageMode.cpp:53
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnOnlineRoadRageMode.cpp:55
		int32_t liRoundNumber;

		GameModeParams::Construct(/* parameters */);
	}
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	NetworkRoundManager::GetNetworkRoundEvent(/* parameters */);
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::SetSeed(/* parameters */);
}

void BrnGameState::OnlineRaceMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRaceMode.cpp:55
		const StartNetworkGameEvent * lpStartNetworkRaceEvent;

		// BrnOnlineRaceMode.cpp:56
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnOnlineRaceMode.cpp:57
		int32_t liCurrentRound;

		// BrnOnlineRaceMode.cpp:58
		bool lbIsFirstRound;

		// BrnOnlineRaceMode.cpp:59
		const Landmark * lpFirstCheckpoint;

		GameModeParams::Construct(/* parameters */);
	}
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	NetworkRoundManager::GetNetworkRoundEvent(/* parameters */);
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	ModeManager::GetTriggerData(/* parameters */);
	LandmarkIndex::operator std::int32_t(/* parameters */);
	BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::SetSeed(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

void BrnProgression::RaceEventData::GetAStarType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::SetAStarDistanceFunction(BrnAI::AStarDistanceFunction  leAStarDistanceFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CheckpointData::GetBlockSectionId(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CheckpointData::AddBlockSectionId(uint32_t  luBlockSectionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint32_t,8u>::Append(const const uint32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::CheckpointData::GetBlockSectionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetStartGridCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetCurrentCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetStartGridSlot(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponentSet::GetOpponentCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::EventStartGridSlot::GetOpponentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponentSet::GetCarOpponent(int32_t  liCarOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponent::GetCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CarOpponent::GetPersonalityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionData::GetPersonality(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::EventStartGridSlot::GetSlowAIBalanceGraphIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::EventStartGridSlot::GetFastAIBalanceGraphIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OpponentData::Construct(CgsID  lCarModelId, const EventStartGridSlot *  lpStartGridSlot, const OpponentBalanceData *  lpRaceBalanceData, const EventRacerPersonality *  lpPersonality) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::AddOpponentData(const OpponentData *  lpOpponentData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::Append(const const OpponentData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Append(const const BrnGameState::CrashModeScoring::RecentCrash &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint16_t,25u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,25u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionRankData::GetTrafficDensityRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetRaceRivalsNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetStartRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetStartDirection(int32_t  liOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::RaceEventData::GetAddRivalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RaceMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceMode.cpp:82
		const BrnProgression::RaceEventData * lpEventData;

		// BrnRaceMode.cpp:84
		const ProgressionRankData * lpProgressionRankData;

		// BrnRaceMode.cpp:143
		Vector3 lPlayerPos;

		// BrnRaceMode.cpp:144
		Vector3 lStartDir;

		StartGameModeParams::GetProgressionRankData(/* parameters */);
	}
	StartGameModeParams::GetEventData(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnProgression::ProgressionRankData::GetRaceRivalsNumber(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnProgression::ProgressionRankData::GetOvertakingDifficulty(/* parameters */);
	StartGameModeParams::GetTrafficLightTriggerId(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::SetAIAggresiveCarCount(/* parameters */);
	GameModeParams::SetAISpeedSelectionMethod(/* parameters */);
	GameModeParams::SetDefaultAIRouteFindingStyle(/* parameters */);
	GameModeParams::SetDefaultPlayerRouteFindingStyle(/* parameters */);
	GameModeParams::GetStartDirection(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnProgression::ProgressionRankData::GetTrafficDensityRace(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnProgression::ProgressionRankData::GetLargeVehicleProbability(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	StartGameModeParams::GetTrafficDensity(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnProgression::ProgressionRankData::GetRaceRivalsNumber(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

void BrnGameState::OnlineFreeBurnMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineFreeBurnMode.cpp:52
		const StartNetworkGameEvent * lpStartNetworkRaceEvent;

		// BrnOnlineFreeBurnMode.cpp:53
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnOnlineFreeBurnMode.cpp:54
		int32_t liRoundNumber;

		// BrnOnlineFreeBurnMode.cpp:56
		const TriggerData * lpTriggerData;

		// BrnOnlineFreeBurnMode.cpp:57
		const Landmark * lpLandmark;

		// BrnOnlineFreeBurnMode.cpp:58
		LandmarkIndex lLandmarkIndex;

	}
	ModeManager::GetTriggerData(/* parameters */);
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	NetworkRoundManager::GetNetworkRoundEvent(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	StartGameModeParams::GetProgressionRankAsRatio(/* parameters */);
	BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	GameModeParams::AddCheckpoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::GameMode::SetCurrentState(BrnGameState::GameStateModuleIO::EGameModeState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
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

void BrnGameState::OnlineFreeBurnLobbyMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineGameMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::SendEvent(BrnGameState::EGameModeEvent  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFugitiveMode::Start(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineFugitiveMode.cpp:52
		const TriggerData * lpTriggerData;

		// BrnOnlineFugitiveMode.cpp:53
		const StartNetworkGameEvent * lpStartNetworkGameEvent;

		// BrnOnlineFugitiveMode.cpp:54
		const StartNetworkRoundEvent * lpStartNetworkRoundEvent;

		// BrnOnlineFugitiveMode.cpp:55
		int32_t liRoundNumber;

		// BrnOnlineFugitiveMode.cpp:56
		GameModeParams lGameModeParams;

		// BrnOnlineFugitiveMode.cpp:57
		const LightTriggerStartData * lpStartData;

		// BrnOnlineFugitiveMode.cpp:58
		const Landmark * lpFinishLandmark;

		// BrnOnlineFugitiveMode.cpp:59
		int32_t liGridPosition;

		// BrnOnlineFugitiveMode.cpp:60
		BrnGameState::GameStateModuleIO::EPlayerTeam leLocalPlayerTeam;

		ModeManager::GetTriggerData(/* parameters */);
	}
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
	NetworkRoundManager::GetNetworkRoundEvent(/* parameters */);
	GameModeParams(/* parameters */);
	GameModeParams::Construct(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Construct(/* parameters */);
	GameModeParams::SetFlag(/* parameters */);
	GameModeParams::GetCheckpointData(/* parameters */);
	LandmarkIndex::operator std::int32_t(/* parameters */);
	BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	BrnTraffic::LightTriggerStartData::GetStartPosition(/* parameters */);
	BrnTraffic::LightTriggerStartData::GetStartDirection(/* parameters */);
	GameModeParams::AddStartLocation(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

void BrnGameState::TriggerQueryManager::GetActiveTriggerCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::GenericRegion::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetDimensionX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetDimensionY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetDimensionZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::ComputeTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnRegion.h:374
	Matrix44Affine & lMatrix;

	{
		// BrnRegion.h:374
		Matrix44Affine lMatrix;

	}
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

void BrnTrigger::BoxRegion::GetDimensions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::GetCurrentRoadID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.h:387
		const Road * lpRoad;

	}
}

void BrnResource::ChallengeListEntryAction::GetNumLocations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetLocationType(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetDistrict(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetTriggerID(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetRoadID(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
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
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsContainers::BitArray<7u>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

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
	GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnProgression::Profile::GetRoadRulesID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProfile.h:2835
		uint64_t lu64RoadRulesID;

	}
}

void BrnProgression::Profile::GetNetworkChallengeDownloadTimestamp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction::Construct(uint64_t  lu64RoadRulesID, uint32_t  luTimeStampOfLastRoadRulesDownload, StreetManager *  lpStreetManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::Update(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:107
		RoadRulesChallengeScoresAction lRoadRulesChallengeScoresAction;

	}
	GameStateModuleIO::RoadRulesChallengeScoresAction::Construct(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::Profile::GetNetworkChallengeDownloadTimestamp(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction>(/* parameters */);
}

void BrnGameState::GameStateModuleIO::RoadRulesUpdateAction::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6092
		int32_t liScoreIndex;

	}
}

void BrnGameState::RoadRulesManager::IsValidRoad(int32_t  liStreetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RoadRulesUpdateAction::SetScore(BrnStreetData::ScoreType  leScoreType, float32_t  lfScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsRoadRuleOnline(BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1670
		int32_t liIndex;

	}
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::AddLocalPlayerCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *  lpCompletedChallenges) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::AddCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *  lpCompletedChallenges, RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1692
		int32_t liIndex;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManager::IsChallengeActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::SurvivorMode::UpdateOpponents(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, int32_t  liAllowedOpponentCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSurvivor.cpp:273
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnSurvivor.cpp:279
		AllowCarToJoinRoadRageAction lAllowToJoin;

		AddGameAction<BrnGameState::GameStateModuleIO::AllowCarToJoinRoadRageAction>(/* parameters */);
	}
	operator++(/* parameters */);
}

void BrnGameState::PursuitModeScoring::IsRivalDestroyed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasCountdownDisplayChanged(int32_t *  lpiNewCountdownDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::GetFirstNonZeroBit() {
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

void CgsContainers::BitArray<35u>::GetZeroBitInInt(int64_t  liValue) {
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

void BrnGameState::GameStateModule::GetLastGlobalRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetActiveRaceCarIndex(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::GetNextNonZeroBit(uint32_t  liIndex) {
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

void CgsContainers::BitArray<35u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::IsCheckPointDistanceToFinishReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetWayPointDistancesToFinishAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCheckpointDistanceToFinish(uint32_t  luCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1852
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<float32_t,16u>::Append(const const float32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::GetTotalCheckpoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageMode::BroadcastEventsToRivals(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:332
		int32_t liIndex;

	}
	{
		// BrnRoadRageMode.cpp:336
		AllowCarToJoinRoadRageAction lAllowToJoin;

		AddGameAction<BrnGameState::GameStateModuleIO::AllowCarToJoinRoadRageAction>(/* parameters */);
	}
	{
		// BrnRoadRageMode.cpp:363
		UpdateRoadRageMadnessAction lUpdateRoadRageMadnessAction;

		// BrnRoadRageMode.cpp:365
		int32_t liIndex;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::UpdateRoadRageMadnessAction>(/* parameters */);
}

void BrnGameState::ScoringSystem::HasModeTimeExpired(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1620
		Time lCurrentTimePlusASecond;

	}
}

void BrnGameState::ScoringSystem::IsTimeLimitActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetModeTimeRemaining(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IncreaseTimeLimit(float32_t  lfSecondsToAdd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetScoringSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetHUDMessageLogic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::HUDMessageLogic::OnlineTeamChange(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OnlineBurningHomeRunMode::SwitchBurningHomeRunRunner(EActiveRaceCarIndex  leOldRunnerRaceCarIndex, EActiveRaceCarIndex  leNewRunnerRaceCarIndex, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::GetHUDMessageLogic(/* parameters */);
	HUDMessageLogic::OnlineTeamChange(/* parameters */);
	ModeManager::GetHUDMessageLogic(/* parameters */);
	HUDMessageLogic::OnlineTeamChange(/* parameters */);
	{
		// BrnOnlineBurningHomeRunMode.cpp:255
		SetBoostAction lSetBoostAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetBoostAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetBoostAction>(/* parameters */);
	{
		// BrnOnlineBurningHomeRunMode.cpp:280
		CarData * lpCarData;

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

void BrnProgression::Profile::GetNetworkChallengeData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetUserChallengeData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::FreeburnChallengeAction::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::GetFirstNonZeroBit() {
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

void CgsContainers::BitArray<2u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::BitArray<2u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ChallengeData::ContainsData(BrnStreetData::ScoreType  leVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			{
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						{
							(None)unknown_arg
							{
							}
						}
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
						(None)unknown_arg
					}
				}
			}
			{
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
	}
	{
		(None)unknown_arg
		(None)unknown_arg
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
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

void BrnStreetData::ChallengeData::ContainsData(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

void BrnStreetData::ScoreList::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
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
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnStreetData::ChallengeData::GetScore(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnStreetData::ScoreList::GetScore(/* parameters */);
}

void CgsDev::StrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetStreetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::SimpleStrStream::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesDebugComponent.cpp:167
		int32_t liRoadIndex;

		{
			// BrnRoadRulesDebugComponent.cpp:175
			CgsDev::SimpleStrStream lStrStream;

			// BrnRoadRulesDebugComponent.cpp:176
			const ChallengeData * lpParScore;

			// BrnRoadRulesDebugComponent.cpp:177
			const ChallengeData * lpPlayerScore;

			// BrnRoadRulesDebugComponent.cpp:178
			const ChallengeData * lpNetScore;

			// BrnRoadRulesDebugComponent.cpp:179
			float32_t lfFontSize;

			// BrnRoadRulesDebugComponent.cpp:180
			float32_t lfTextY;

			// BrnRoadRulesDebugComponent.cpp:182
			int32_t liParScore;

			// BrnRoadRulesDebugComponent.cpp:183
			int32_t liPlayerScore;

			// BrnRoadRulesDebugComponent.cpp:184
			int32_t liNetScore;

			// BrnRoadRulesDebugComponent.cpp:186
			RGBA lParColour;

			// BrnRoadRulesDebugComponent.cpp:187
			RGBA lPlayerColour;

			// BrnRoadRulesDebugComponent.cpp:188
			RGBA lNetColour;

			BrnStreetData::StreetData::GetChallengeParScore(/* parameters */);
			StreetManager::GetStreetData(/* parameters */);
			BrnStreetData::StreetData::GetRoad(/* parameters */);
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
		}
		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		StreetManager::GetStreetData(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		// BrnRoadRulesDebugComponent.cpp:131
		char[1024] lacBuffer;

		// BrnRoadRulesDebugComponent.cpp:132
		CgsDev::StrStream lStrStream;

		// BrnRoadRulesDebugComponent.cpp:133
		const char * lpLastRoadName;

		// BrnRoadRulesDebugComponent.cpp:135
		const float32_t KF_HUD_X_POS;

		// BrnRoadRulesDebugComponent.cpp:136
		const float32_t KF_HUD_TEXT_SIZE;

		CgsDev::StrStream::StrStream(/* parameters */);
		StreetManager::GetRoad(/* parameters */);
		BrnStreetData::Road::GetDebugName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

void BrnProgression::ProgressionManager::SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t  luNumberOfNumberOfCompleteRoadRulesRuledByPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t  luNumberOfParTimeRoadRulesRuledByPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t  luNumberOfParCrashRoadRulesRuledByPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetAchievementManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManagerDebugComponent::WinAllCrashRoadRulesBarOne(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:439
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:440
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:441
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:452
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinAllCrashRoadRules(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:403
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:404
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:405
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:416
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinAllTimeRoadRules(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:366
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:367
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:368
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:379
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinAllTimeRoadRulesBarOne(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:328
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:329
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:330
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:341
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinAllRoadRules(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:288
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:289
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:290
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:301
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinSpecificNumberOfCrashRoadRules(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:251
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:252
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:253
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:264
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
}

void BrnGameState::StreetManagerDebugComponent::WinSpecificNumberOfTimeRoadRules(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetManagerDebugComponent.cpp:203
		int32_t liRoadIndicesToSet;

		// BrnStreetManagerDebugComponent.cpp:204
		Road::ChallengeIndex lChallengeIndex;

		// BrnStreetManagerDebugComponent.cpp:205
		StreetManagerDebugComponent * lpStreetManagerDebugCmpt;

	}
	{
		// BrnStreetManagerDebugComponent.cpp:216
		ChallengePlayerScoreEntry lChallengeDataToSet;

		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeHighScoreEntry::GetScore(BrnStreetData::ScoreType  leScoreType, int32_t *  lpiScore, PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
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
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
				}
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void BrnStreetData::ChallengeHighScoreEntry::GetScore(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
}

void CgsContainers::FastBitArray<2>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnStreetData::ChallengeHighScoreEntry::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liScore, const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2>::SetBit(const int32_t  liIndex) {
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

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HaveCarsBeenSortedIntoRacePositions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::IncrementDriftDistance(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetDriftDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameMode.cpp:124
		EActiveRaceCarIndex leActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		{
			// BrnGameMode.cpp:130
			const RaceCarState * lpPlayerRaceCarState;

			// BrnGameMode.cpp:131
			Vector3 lPlayerPosition;

			// BrnGameMode.cpp:132
			Vector3 lPlayerDirection;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
			operator++(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
			{
				// BrnGameMode.cpp:140
				const RaceCarState * lpRaceCarState;

				// BrnGameMode.cpp:141
				Vector3 lPosition;

				// BrnGameMode.cpp:142
				Vector3 lDirection;

				// BrnGameMode.cpp:143
				float32_t lfDistance;

				// BrnGameMode.cpp:144
				bool lbAheadOfPlayer;

				BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
				rw::math::vpu::operator>=(/* parameters */);
				rw::math::vpu::Magnitude(/* parameters */);
				{
					{
						{
						}
					}
				}
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
			}
		}
		CgsContainers::Array<BrnGameState::GameModeState*,8u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:133
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
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

void std::divf4(float[4]  numer, float[4]  denom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// divf4.h:15
		float[4] y0;

		// divf4.h:15
		float[4] y0numer;

	}
}

void BrnGameState::StuntAttackMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntAttackMode.cpp:151
		SetBoostAction lSetBoostAction;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SetBoostAction>(/* parameters */);
	}
	{
		// BrnStuntAttackMode.cpp:172
		Vector3 lStartCrossProduct;

		// BrnStuntAttackMode.cpp:173
		Vector3 lPlayerDirNoY;

		// BrnStuntAttackMode.cpp:174
		float32_t lfAngleToStart;

		// BrnStuntAttackMode.cpp:175
		float32_t lfDotToStart;

		GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::ASin(/* parameters */);
		vec_cmpgt(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_xor(/* parameters */);
		{
		}
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::Abs<float>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::BurningRouteMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurningRoute.cpp:139
		EGlobalRaceCarIndex lEGlobalRaceCarIndex;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetPlayerGlobalRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetActiveRaceCarIndex(/* parameters */);
}

void BrnGameState::RoadRageMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageMode.cpp:459
		const TimerStatus * lpSimTimerStatus;

		GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::FaceOffMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::GetAICarDistanceToCheckpoint(int32_t  liAICarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetCurrentCheckPoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCheckpointPosition(uint32_t  luCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::PushSectionIndex(uint16_t  luNewSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetRoadIndexFromAISectionIndex(uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.h:95
		typedef int32_t SpanIndex;

		// BrnGameStateStreetManager.h:947
		SpanIndex liSpanIndex;

	}
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AISectionsData::GetAISection(uint32_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetSpanIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::StreetData::IsStreet(Road::SpanIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::StreetData::GetStreet(Road::SpanIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::SpanBase::GetRoadIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsInterstateExit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::CanContinueWalking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SectionWalkData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetPortal(uint8_t  lu8PortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.h:880
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::Portal::GetLinkSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::HasSectionAlreadyBeenWalked(uint16_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.h:1073
		int32_t liEntryIndex;

	}
}

void BrnAI::AISection::IsUnsuitableForRoadSigns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsAIShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsTerminator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Magnitude<float>(const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsSimilar<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cross<float>(const const Vector3Template<float> &  v0, const const Vector3Template<float> &  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:208
	Vector3Template<float> & r;

	{
		// vector3_operation.h:208
		Vector3Template<float> r;

	}
}

void rw::math::fpu::Vector3Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sgn<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::ASin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetPortalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *  lpaChallengeHighScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *  lpaChallengeHighScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::SetRoadRuleChallengeData(ChallengePlayerScoreEntry *  lpaChallengeScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetRoadRuleChallengeData(ChallengePlayerScoreEntry *  lpaChallengeScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::IncrementCumulativePoints(int32_t  liPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetRoundDisconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::IsActive() {
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

void BrnGameState::CrashModeScoring::GetCurrentComboCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetDistanceTravelled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::GetCurrentScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::GetTargetScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::GetComboMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::GetCurrentStunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.h:388
		int32_t liIndex;

		// BrnStuntModeScoring.h:389
		uint32_t luCurrentStuntTypes;

	}
}

void BrnGameState::StuntModeScoring::GetAllStuntTypesForInProgressStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IndexToFinishTuple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BaseOnlineModeScoring::SetPlayerPosition(int32_t  liRaceCarIndex, int32_t  liPlayerPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::UpdatePlayerPoints(BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRaceModeScoring.cpp:241
		int32_t liIndex;

		// BrnOnlineRaceModeScoring.cpp:242
		int32_t liScore;

		// BrnOnlineRaceModeScoring.cpp:243
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineRaceModeScoring.cpp:244
		BrnGameState::OnlineRaceModeScoring::IndexToFinishTuple[8] laFinishTimes;

		// BrnOnlineRaceModeScoring.cpp:245
		CarData * lpCarData;

		// BrnOnlineRaceModeScoring.cpp:246
		CarData lEmptyCarData;

		// BrnOnlineRaceModeScoring.cpp:247
		CarScoreData * lpCarScoreData;

		IndexToFinishTuple(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CarData(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CarData::Construct(/* parameters */);
		operator++(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		BaseOnlineModeScoring::SetPlayerPosition(/* parameters */);
	}
}

void BrnGameState::OnlineRoadRageModeScoring::InitialisePlayerArrayData(BrnGameState::OnlineRoadRageModeScoring::RedTeamSortData *  lpaRedTeamSortData, BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData *  lpaBlueTeamSortData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:662
		EActiveRaceCarIndex leIndex;

		operator++(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
}

extern void ComparisonData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::UpdatePlayerPoints(BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunModeScoring.cpp:289
		int32_t liIndex;

		// BrnOnlineBurningHomeRunModeScoring.cpp:290
		int32_t liScore;

		// BrnOnlineBurningHomeRunModeScoring.cpp:291
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineBurningHomeRunModeScoring.cpp:292
		ComparisonData[8] laFinishTimes;

		// BrnOnlineBurningHomeRunModeScoring.cpp:293
		CarData lEmptyCarData;

		// BrnOnlineBurningHomeRunModeScoring.cpp:294
		CarData * lpCarData;

		// BrnOnlineBurningHomeRunModeScoring.cpp:295
		CarScoreData * lpCarScoreData;

		ComparisonData(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CarData(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CarData::Construct(/* parameters */);
		operator++(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		BaseOnlineModeScoring::SetPlayerPosition(/* parameters */);
	}
}

void CgsContainers::FastBitArray<8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGameState::OnlineFreeBurnLobbyMode::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::SetAll() {
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

void BrnGameState::OnlineFreeBurnLobbyMode::OnEnterRoad(SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetNumberOfNetworkPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3443
		int32_t liNumberOfPlayers;

		// BrnScoringSystem.h:3444
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void CgsContainers::FastBitArray<2000>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ChallengeManager::IsChallengeRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearAllBurnoutSkillzData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3547
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::ScoringSystem::ClearPlayersBurnoutSkillzData(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3561
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

extern void OnlineGameResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineGameResults::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6333
		uint32_t luRoundIndex;

	}
}

void BrnGameState::ScoringSystem::GetNetworkRoundData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModule.h:951
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::OnlineGameResults::SetConnectedPlayerID(RoadRulesRecvData::NetworkPlayerID  lPlayerID, EActiveRaceCarIndex  leActiveRaceCarIndex, int32_t  liRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineGameResults::SetPosition(int32_t  liRound, int32_t  liPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundData::GetPosition(int32_t  liRoundIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::NetworkRoundManager::IsRankedMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetRanked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetLocalPlayerNetworkID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<120>::UnSetBit(const int32_t  liIndex) {
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

void CgsContainers::FastBitArray<2>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void BrnStreetData::UpdateEntry(ChallengeHighScoreEntry *  lpResult, ChallengeHighScoreEntry *  lpEntryToCompareA, ChallengeHighScoreEntry *  lpEntryToCompareB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:282
		PlayerName lPlayerName;

		// BrnChallengeHighScoreEntry.cpp:283
		int32_t liScore;

		// BrnChallengeHighScoreEntry.cpp:284
		int32_t liScoreIndex;

	}
	ChallengeHighScoreEntry::GetScore(/* parameters */);
	ChallengeHighScoreEntry::SetScore(/* parameters */);
}

void BrnGameState::NetworkRoundManager::GetStartingFreeburnLobbyDueToPlayerJoin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsShowtimeGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCrashScorer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetOverallScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.h:285
		int32_t liOverallScore;

	}
}

void BrnGameState::NetworkRoundManager::IsLastRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetLead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OnlineRoundResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineRoundResults::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6502
		int32_t liPositionIndex;

	}
}

void BrnGameState::ScoringSystem::GetPlayerDisconnected(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1927
		const CarData * lpCarData;

	}
}

void BrnGameState::GameStateModuleIO::OnlineRoundResults::SetPosition(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, int32_t  liPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::LocalPlayerQuit(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3499
		CarData * lpCarData;

	}
}

void BrnGameState::GameStateModule::IsPlayerInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarSelectManager::IsInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetNotInGameState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetInModeStartRegionAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::SetActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetRaceCarDistanceToFinish(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2100
		const CarData * lpCarData;

	}
}

void BrnGameState::GameStateModuleIO::RaceCarRaceDistanceInterface::SetNumActiveRaceCars(int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetTotalRaceDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RaceCarRaceDistanceInterface::SetTotalRaceDistance(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::RaceCarRaceDistanceInterface::SetRaceCarDistToFinish(int32_t  liRaceCarIndex, float32_t  lfDistanceToFinish) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetGlobalRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:1502
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
}

void BrnGameState::ScoringSystem::GetCarRaceFinishPosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2078
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetCurrentMedalAchieved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HasTargetScoreBeenExceeded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StuntModeScoring::HasTargetScoreBeenExceeded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HasBeatenRoadRageTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRageModeScoring::HasBeatenRoadRageTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShowModeResultsAction() {
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

void BrnGameState::ModeManager::GetCurrentGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::HasTimedOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::HasCrashedOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::HasBeenEliminated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashModeScoring::GetRawScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetBestStuntRunScore(int32_t  liNewScore) {
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

void BrnGameState::ScoringSystem::GetFinishTime(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2344
		const CarData * lpCarData;

	}
}

void BrnGameState::GameStateModule::GetCurrentWheelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::AddLossForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetNumLossesForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::HasJustRankedUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetNewlyUnlockedCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::ClearRankUpCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FinishedModeAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetNumberOfTakedowns(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2365
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetRaceCarDistanceToFinishAtRoundEnd(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2160
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetRaceCarEliminatorIndex(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2209
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetCarRacePosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2057
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetNumberOfEliminations(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2232
		const CarData * lpCarData;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::GetPlayerResultsData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::CalculatePositionsInResultsTable(BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:324
		BrnGameState::OnlineRoadRageModeScoring::TablePositionData[8] laTablePositionData;

		// BrnOnlineRoadRageModeScoring.cpp:325
		EActiveRaceCarIndex leIndex;

		// BrnOnlineRoadRageModeScoring.cpp:326
		CarData * lpCarData;

		// BrnOnlineRoadRageModeScoring.cpp:327
		CarData lEmptyCarData;

		// BrnOnlineRoadRageModeScoring.cpp:328
		int32_t liIndex;

		CarData(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CarData::Construct(/* parameters */);
	operator++(/* parameters */);
	BaseOnlineModeScoring::SetPlayerPosition(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::UpdatePlayerTeams(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:207
		EActiveRaceCarIndex leRaceCarIndex;

	}
	operator++(/* parameters */);
}

void BrnGameState::BaseOnlineModeScoring::Update(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunModeScoring::Update(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::Update(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRaceModeScoring::Update(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsOnlineLandmarkVisited(EActiveRaceCarIndex  leActiveRaceCarIndex, LandmarkIndex  lLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2569
		int32_t liIndex;

		// BrnScoringSystem.h:2570
		const CarScoreData * lpScoreData;

		// BrnScoringSystem.h:2571
		const CarData * lpCarData;

	}
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::DebugRenderOnlineLeader(const InGamePlayerStatusInterface *  lpPlayerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:758
		DebugInterface lDebugInterface;

		// BrnModeManagerDebugComponent.cpp:759
		Vector2 lPos;

		// BrnModeManagerDebugComponent.cpp:760
		Vector2 lSize;

		// BrnModeManagerDebugComponent.cpp:761
		RGBA lColour;

		// BrnModeManagerDebugComponent.cpp:762
		const InGamePlayerStatusData * lpLocalPlayerStatus;

		// BrnModeManagerDebugComponent.cpp:763
		const InGamePlayerStatusData * lpPlayerStatus;

		// BrnModeManagerDebugComponent.cpp:764
		int32_t liLeaderRaceCarIndex;

		// BrnModeManagerDebugComponent.cpp:765
		char[200] lacText;

		// BrnModeManagerDebugComponent.cpp:766
		int32_t liIndex;

		// BrnModeManagerDebugComponent.cpp:767
		uint32_t luBestRaceCarPosition;

		// BrnModeManagerDebugComponent.cpp:768
		BrnGameState::GameStateModuleIO::EGameModeType leGameModeType;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	ScoringSystem::GetCarRacePosition(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetCarRacePosition(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleInGamePlayerStatusInterface.h:261
		int32_t liIndex;

	}
}

void BrnGameState::ModeManagerDebugComponent::DebugRenderOnlinePlayerTeamStatus(const InGamePlayerStatusInterface *  lpPlayerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:631
		DebugInterface lDebugInterface;

		// BrnModeManagerDebugComponent.cpp:632
		Vector2 lPos;

		// BrnModeManagerDebugComponent.cpp:633
		RGBA lColour;

		// BrnModeManagerDebugComponent.cpp:634
		const InGamePlayerStatusData * lpLocalPlayerStatus;

		// BrnModeManagerDebugComponent.cpp:635
		const char * lpcText;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByActiveRaceCarIndex(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnModeManagerDebugComponent.cpp:686
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
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
		// BrnModeManagerDebugComponent.cpp:715
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManagerDebugComponent.cpp:733
		Vector2 lSize;

		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

void BrnGameState::ScoringSystem::GetRaceCarDistanceToPlayer(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2122
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetOnlineLandmarksVisited(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2605
		CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetTotalOnlineLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManagerDebugComponent::DebugGetPlayerListTableEntry(const InGamePlayerStatusData *  lpPlayerStatus, const InGamePlayerStatusData *  lpLocalPlayerStatus, BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liRow, int32_t  liColumn, char *  lpcTextOut, RGBA *  lpRGBAOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	{
		// BrnModeManagerDebugComponent.cpp:441
		float_t lfMetres;

		ScoringSystem::GetRaceCarDistanceToPlayer(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
	}
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
}

void BrnGameState::ModeManagerDebugComponent::DebugRenderOnlinePlayerList(const InGamePlayerStatusInterface *  lpPlayerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManagerDebugComponent.cpp:538
		DebugInterface lDebugInterface;

		// BrnModeManagerDebugComponent.cpp:539
		Vector2 lPos;

		// BrnModeManagerDebugComponent.cpp:540
		Vector2 lSize;

		// BrnModeManagerDebugComponent.cpp:541
		RGBA lColour;

		// BrnModeManagerDebugComponent.cpp:542
		float_t lfWidth;

		// BrnModeManagerDebugComponent.cpp:543
		float_t lfMaxWidth;

		// BrnModeManagerDebugComponent.cpp:544
		char[201] lacText;

		// BrnModeManagerDebugComponent.cpp:545
		int32_t liColumn;

		// BrnModeManagerDebugComponent.cpp:546
		int32_t liRow;

		// BrnModeManagerDebugComponent.cpp:547
		const InGamePlayerStatusData * lpLocalPlayerStatus;

		// BrnModeManagerDebugComponent.cpp:548
		const InGamePlayerStatusData * lpPlayerStatus;

		// BrnModeManagerDebugComponent.cpp:549
		int32_t liIndex;

		// BrnModeManagerDebugComponent.cpp:550
		int32_t liPlayerStatusDataIndex;

		// BrnModeManagerDebugComponent.cpp:551
		PlayerInfoStruct[8] laPlayerInfo;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToPlayer(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetNumPlayers(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataByActiveRaceCarIndex(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::ScoringSystem::HasRaceCarFinished(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetRaceCarNumCompletedLaps(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1999
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::SetPlayerEliminated(EActiveRaceCarIndex  leRaceCarIndex, EActiveRaceCarIndex  leEliminatorIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1871
		CarData * lpCarData;

	}
}

void BrnGameState::ModeManager::IsInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:146
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<35u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::HUDMessageLogic::HandleRaceCarFinishing(EActiveRaceCarIndex  leRaceCarIndex, int32_t  liFinishPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsInPostEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::HUDMessageLogic::PlayerReachesCheckpoint(CgsID  lThisLandmarkID, CgsID  lNextLandmarkID, bool  lbIsPenultimateLandmark) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::HUDMessageLogic::RaceCarReachesCheckpoint(CgsID  lLandmarkID, EActiveRaceCarIndex  leActiveRaceCarIndex, int32_t  liCheckpointIndex, int32_t  liLastCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::RaceCarHasReachedCheckPointWithinEvent(EActiveRaceCarIndex  leActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2541
		CarData * lpCarData;

		{
			// BrnScoringSystem.h:2542
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnScoringSystem.h:2549
			uint32_t luSecondLastPlace;

		}
	}
}

void BrnGameState::CarData::IncrementCheckpointCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::HUDMessageLogic::RaceCarReachesBHRCheckpoint(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetLastActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetGlobalRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:213
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:216
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::CheckpointData::GetAISectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::IsInRange(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::GetAISectionIndex(int32_t  liAICarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:201
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsPlayerInScoringSystem(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetCarDataFromPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2955
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::ScoringSystem::SetPlayerRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::CurrentGameModeAllowsTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::CurrentGameModeHasRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::IsPlayerInShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetCurrentGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetCountdownTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CountdownState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::GetRoundStartTeam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTimerRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:275
		CgsDev::StrStream lStrStream;

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

void BrnProgression::Profile::SetHighestNumberOfTakeDownsInRoadRage(int32_t  liHighestNumberOfTakeDownsInRoadRage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator-=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunMode::PickNewBurningHomeRunRunner(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunMode.cpp:301
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnOnlineBurningHomeRunMode.cpp:302
		float32_t lfShortestDistance;

		// BrnOnlineBurningHomeRunMode.cpp:303
		EActiveRaceCarIndex leClosestRaceCarIndex;

		// BrnOnlineBurningHomeRunMode.cpp:304
		Vector3 lOldRunnerPosition;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	{
		// BrnOnlineBurningHomeRunMode.cpp:326
		const CarData * lpPotentialRunnerCarData;

		{
			// BrnOnlineBurningHomeRunMode.cpp:333
			Vector3 lPotentialRunnerToOldRunner;

			// BrnOnlineBurningHomeRunMode.cpp:334
			float32_t lfDistanceToRunner;

		}
	}
	operator++(/* parameters */);
	{
		// BrnOnlineBurningHomeRunMode.cpp:354
		SwitchBurningHomeRunRunnerAction lBurningHomeRunRunner;

		// BrnOnlineBurningHomeRunMode.cpp:355
		CarData * lpCarData;

		AddGameAction<BrnGameState::GameStateModuleIO::SwitchBurningHomeRunRunnerAction>(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnGameState::ScoringSystem::SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1899
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
}

extern void NetworkAwardData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::GetNumberOfTakedownsAgainst(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2417
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetNumberOfCrashes(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2391
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetTotalDistanceDriven(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2627
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::IsNetworkCarsDistanceDrivenValid(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2649
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetTimeSpentInFirstPlace(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2671
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetTimeSpentInLastPlace(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2693
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetTimeSpentBoosting(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2727
		const CarData * lpCarData;

	}
}

void BrnGameState::ScoringSystem::GetLongestDrift(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:2749
		const CarData * lpCarData;

	}
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<8u>::FindFirstZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:278
		uint32_t luIndex;

	}
}

void BrnGameState::BaseOnlineModeScoring::AwardNetworkRatings(const ScoringSystem *  lpScoringSystem, uint32_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOnlineModeScoring.cpp:246
		BrnGameState::BaseOnlineModeScoring::NetworkAwardData[8] laNetworkAwardData;

		// BrnBaseOnlineModeScoring.cpp:247
		BitArray<8u> lPlayersWithAnAward;

		// BrnBaseOnlineModeScoring.cpp:248
		int32_t liAwardPriorityIndex;

		// BrnBaseOnlineModeScoring.cpp:249
		int32_t liNumActiveRaceCars;

		// BrnBaseOnlineModeScoring.cpp:250
		EActiveRaceCarIndex leIndex;

		// BrnBaseOnlineModeScoring.cpp:251
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnBaseOnlineModeScoring.cpp:252
		int32_t liAwardsGiven;

		NetworkAwardData(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
		ScoringSystem::GetNumberOfActiveCars(/* parameters */);
		ScoringSystem::GetNumberOfTakedowns(/* parameters */);
		ScoringSystem::GetNumberOfTakedownsAgainst(/* parameters */);
		ScoringSystem::GetNumberOfCrashes(/* parameters */);
		ScoringSystem::GetTotalDistanceDriven(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		ScoringSystem::IsNetworkCarsDistanceDrivenValid(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		ScoringSystem::GetTimeSpentInFirstPlace(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		ScoringSystem::GetTimeSpentInLastPlace(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		ScoringSystem::GetTimeSpentBoosting(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		ScoringSystem::GetLongestDrift(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		operator++(/* parameters */);
		CgsContainers::BitArray<8u>::FindFirstZero(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		// BrnBaseOnlineModeScoring.cpp:300
		BrnGameState::EOnlineAwardID leAwardID;

		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	}
	CgsContainers::BitArray<8u>::SetBit(/* parameters */);
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

void BrnGameState::OnlineRoadRageModeScoring::CheckForRedTeamWin(const ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:582
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineRoadRageModeScoring.cpp:583
		bool lbBlueTeamTimedOut;

		// BrnOnlineRoadRageModeScoring.cpp:584
		const CarData * lpCarData;

		ScoringSystem::GetCarData(/* parameters */);
		operator++(/* parameters */);
	}
}

void BrnGameState::OnlineRoadRageModeScoring::CalculateBlueTeamFinishTypes(const ScoringSystem *  lpScoringSystem, BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData *  lpaBlueTeamData, int32_t  liNumBlueTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:618
		int32_t liBlueTeamIndex;

		// BrnOnlineRoadRageModeScoring.cpp:619
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineRoadRageModeScoring.cpp:620
		const CarData * lpCarData;

	}
	ScoringSystem::GetCarData(/* parameters */);
}

void BrnGameState::OnlineRoadRageModeScoring::CalculateRedTeamEliminations(const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:686
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineRoadRageModeScoring.cpp:687
		const CarData * lpCarData;

	}
	ScoringSystem::GetCarData(/* parameters */);
	operator++(/* parameters */);
}

extern void BlueTeamSortData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineRoadRageModeScoring::UpdatePlayerPoints(BrnGameState::ScoringSystem *  lpScoringSystem, int32_t  liNumActiveRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineRoadRageModeScoring.cpp:375
		BrnGameState::OnlineRoadRageModeScoring::RedTeamSortData[8] laRedTeamResults;

		// BrnOnlineRoadRageModeScoring.cpp:376
		BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData[8] laBlueTeamResults;

		// BrnOnlineRoadRageModeScoring.cpp:377
		int32_t liIndex;

		// BrnOnlineRoadRageModeScoring.cpp:378
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnOnlineRoadRageModeScoring.cpp:379
		int32_t liNumRedTeam;

		// BrnOnlineRoadRageModeScoring.cpp:380
		int32_t liNumBlueTeam;

		// BrnOnlineRoadRageModeScoring.cpp:381
		int32_t liMaxRedPoints;

		// BrnOnlineRoadRageModeScoring.cpp:382
		int32_t liMaxBluePoints;

		// BrnOnlineRoadRageModeScoring.cpp:383
		CarData * lpCarData;

		// BrnOnlineRoadRageModeScoring.cpp:384
		const CarData * lpPreviousPlayerCarData;

		// BrnOnlineRoadRageModeScoring.cpp:385
		CarScoreData * lpCarScoreData;

		// BrnOnlineRoadRageModeScoring.cpp:386
		const CarScoreData * lpPreviousPlayerCarScoreData;

		// BrnOnlineRoadRageModeScoring.cpp:387
		BrnGameState::GameStateModuleIO::EPlayerTeam lePlayerTeam;

		BlueTeamSortData(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CarData::GetTeam(/* parameters */);
		operator++(/* parameters */);
	}
	operator++(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	{
		// BrnOnlineRoadRageModeScoring.cpp:450
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnOnlineRoadRageModeScoring.cpp:448
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnOnlineRoadRageModeScoring.cpp:447
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnOnlineRoadRageModeScoring.cpp:449
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGameState::HUDMessageLogic::BurningHomeRunRunnerCrashes(int32_t  liCrashesRemaining, EActiveRaceCarIndex  leRunnerRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineBurningHomeRunMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineBurningHomeRunMode.cpp:171
		EActiveRaceCarIndex leRunnerRaceCarIndex;

		// BrnOnlineBurningHomeRunMode.cpp:172
		const CarData * lpCarData;

		{
			// BrnOnlineBurningHomeRunMode.cpp:187
			int32_t liNumberOfCrashesAsRunner;

			ScoringSystem::GetCarData(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	ModeManager::GetHUDMessageLogic(/* parameters */);
	HUDMessageLogic::BurningHomeRunRunnerCrashes(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnGameState::SurvivorMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSurvivor.cpp:156
		float32_t lfTimeStep;

		// BrnSurvivor.cpp:184
		int32_t liAllowedOpponentCount;

		GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
		CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		{
			// BrnSurvivor.cpp:188
			float32_t lfTimeOpponentRatio;

			// BrnSurvivor.cpp:189
			float32_t lfPlayerDistanceToFinish;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
			ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
			{
				// BrnSurvivor.cpp:197
				float32_t lfDistanceToFinishOpponentRatio;

			}
			rw::math::vpu::Min<int>(/* parameters */);
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::ChallengeListEntry::GetNumActions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::HasTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::SetBit(const int32_t  liIndex) {
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

void CgsContainers::FastBitArray<60>::UnSetBit(const int32_t  liIndex) {
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

void BrnResource::ChallengeListEntryAction::HasConvoyTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetConvoyTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetActionType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetCombineAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetNumTargets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetModeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetPlayerInFreeburnChallenge(EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbIsInFreeburnChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetDescriptionStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<19>::SetBit(const int32_t  liIndex) {
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

void CgsContainers::Array<CgsID,80u>::Contains(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::FindFirstInstanceOf(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<CgsID,80u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::Append(const const CgsID &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::ChallengeListEntryAction::GetCgsIDTarget(int32_t  liTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeListEntry.h:670
		CgsID lCgsIDTargetUpper;

		// ChallengeListEntry.h:671
		CgsID lCgsIDTargetLower;

	}
}

extern void ObjectPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarLeapingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsObjectPool.h:176
		int32_t liI;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarNetwork(EActiveRaceCarIndex  leActiveRaceCarIndex) {
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

void rw::math::vpu::operator-<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1402
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1403
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::AllocateObject() {
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

void CgsContainers::BitArray<7u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::IsObjectAllocated(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::IsObjectAllocated(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::AllocateObject() {
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

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::FreeObject(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<120>::SetAll() {
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

void CgsContainers::FastBitArray<120>::SetAnd(const const FastBitArray<120> &  lA, const const FastBitArray<120> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:547
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<120>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void BrnStreetData::ChallengeHighScoreEntry::ClearScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetLastRoadRulesResetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetLastRoadRulesResetTime(uint32_t  luLastRoadRulesResetTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::GetNumberOfCompleteRoadRulesRuledByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::GetParRivalId(int32_t  liRoadIndex, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2>::IsBitSet(const int32_t  liIndex) {
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

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Append(const const BufferedNewHighScore &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<64u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

extern void UpcomingRoadChangeAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::GetPlayerRouteNodeIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetDistanceLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid<float>(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::SetX(float  _x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::SetZ(float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::SetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetCorner(int32_t  liCornerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator-<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:141
	Vector2Template<float> & r;

	{
		// vector2_operation.h:141
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*=<float>(const Vector3Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarAISection(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetAISectionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StreetManager::OnEnterNewRoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::SetNewHighShowtimeScore(int32_t  liShowTimeScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:140
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesDownloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetLocalRoadRulesDownloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::Prepare(HeapMalloc *  lpNetworkHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMalloc::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::ResetRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3268
		Road::ChallengeIndex lChallengeIndex;

	}
}

void BrnGameState::GameStateModuleIO::OnlinePlayerFinalisedEvent::GetNetworkPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::SetRivalShutDown(bool  lbRivalShutDown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PrepareForModeAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::Construct(const GameModeParams *  lpGameModeParams, int32_t  liCurrentRound, bool  lbComingFromOnlineLobbyMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:1095
		int32_t liIndex;

	}
}

void BrnGameState::StartGameModeParams::GetBoostEarning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetPlayerBoostEarning(float32_t  lfPlayerBoostEarning) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetShotGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetShotGroup(int32_t  liShotGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetFinishedOnlineEvent(bool  lbFinishedOnlineEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetStartingFreeburnLobbyDueToPlayerJoin(bool  lbStartingFreeburnLobbyDueToPlayerJoin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::IsNetworkPlayerInScoringSystem(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3020
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leIndex;

	}
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

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetPlayerHasFever(int32_t  liGridPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CarData::SetHasFever(bool  lbHasFever) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetPlayerScoringIndex(int32_t  liIndex, BrnGameState::GameStateModuleIO::EPlayerScoringIndex  leScoringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::SetPrepareStage(BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage  lePrepareStage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetLastLandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetOnlineLandmarks(LandmarkIndex *  lpLandmarkIndex, int32_t  liTotalOnlineLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1775
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoreIndex;

		// BrnScoringSystem.h:1776
		int32_t liLandmark;

		// BrnScoringSystem.h:1777
		CarData * lpCarData;

		// BrnScoringSystem.h:1778
		CarScoreData * lpCarScoreData;

	}
}

void BrnProgression::ProgressionRankData::GetRoadRageExtensionTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetTotalLaps(uint32_t  luTotalLaps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetTotalCheckpoints(int32_t  liTotalCheckpoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetTriggerManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:284
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::TriggerQueryManager::ClearLandmarkIndexesForGameMode(OutputBuffer::TriggerManagementInputInterface *  lpTriggerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.h:358
		uint8_t luiCurrentLandmark;

		{
			// BrnTriggerQueryManager.h:361
			TriggerId lTriggerId;

		}
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

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::RemoveTrigger(TriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:297
		InRemoveTriggerEvent lEvent;

	}
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:278
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::FrameRateTypeRequestInterface::RequestFrameRateTypeChange(CgsSystem::EFrameRateManagerType  leRequestedFrameRateType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::GetRaceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ReducePlayerDurability() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::StartGameModeParams::Construct(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, const rw::math::vpu::Vector3  lPlayerPosition, BrnGameState::EGameModeStartMechanism  leStartMechanism) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetOfflineFrameRateType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionManager::RequestUpdateRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OutputBuffer::GetGameModeOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::GetCurrentState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::State::SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::GetPreviousState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::GameModeOutputInterface::State::SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState  leGameModeState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::HasAborted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:130
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesReceivedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzManager::AreAllCarWheelsOnTheGround(const RaceCarState *  lpRaceCarState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<8>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
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

void CgsContainers::FastBitArray<8>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<8>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::BurnoutSkillzOnlyPreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::IsWaitingForActiveRaceCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::AreAllRaceCarsSetup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:3481
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
}

void BrnGameState::GameMode::SetUpdateTimeStep(float32_t  lfTimeStepSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::IntroJustFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::ClearHighestPositions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.h:1560
		EActiveRaceCarIndex leIndex;

		// BrnScoringSystem.h:1561
		CarData * lpCarData;

	}
}

void BrnGameState::GameMode::CountdownJustFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::SetActiveGameModeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::IsRequestingTimerStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::StartModeTimer(const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetMedalModeTimer(float32_t  lfGoldTimeLimitSeconds, float32_t  lfSilverTimeLimitSeconds, float32_t  lfBronzeLimitSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::SetTimeLimitSeconds(float32_t  lfTimeLimitSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetOnlineTimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::IsRequestingShowResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HasCrashModeEnded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GetTakedownManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ScoringSystem::HasStuntAttackModeEnded(Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ModeTimeOutTimerEvent() {
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

void CgsSystem::TimerStatusInterface::operator=(const const TimerStatusInterface &  lOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::operator=(const const TimerStatus &  lOtherTimer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::GetNetworkPlayerResultsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateModuleIO.h:149
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetDirtyTrickQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetDirtyTrickQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::IsInPictureParadise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::TrainingManager::IsInPictureParadise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetFramesSinceStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetCompletedChallengesQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetLocalPlayerIsHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::HasPlayerFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive, const ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineFreeBurnLobbyMode::ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex, EActiveRaceCarIndex  leLocalActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsTimeRuleActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsRoadRuleTime(BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::RoadRulesManager::IsCrashRuleActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGameState::RoadRulesManager::IsRoadRuleCrash(BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::ModeManager::GetTimeInFreeBurn() {
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

::::kfSteeringPower = [63, 128, 0, 0];

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

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

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

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

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

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::KF_OFFLINE_RACE_TRAFFIC_DENSITY_SCALE = [63, 64, 0, 0];

BrnGameState::KF_ONLINE_ROAD_RAGE_SECONDS_PER_KM = [66, 240, 0, 0];

BrnGameState::KI_TIME_TILL_FIRST_ELIMINATION = [65, 160, 0, 0];

BrnGameState::KF_ONLINE_RACE_TIME_LIMIT_SECONDS = [69, 225, 0, 0];

BrnGameState::KF_ONLINE_FREEBURN_TIME_LIMIT_SECONDS = [68, 225, 0, 0];

BrnGameState::KF_TOTALLED_TIME_MODE_END = [61, 204, 204, 205];

BrnGameState::KF_ONLINE_ROAD_RAGE_BLUE_TEAM_HEADSTART = [64, 160, 0, 0];

BrnGameState::KF_ONLINE_BURNING_HOME_RUN_BLUE_TEAM_HEADSTART = [64, 64, 0, 0];

BrnGameState::KF_PUSHED_FORWARD_GRID_DIST = [66, 12, 0, 0];

BrnGameState::KF_TIME_UP_OUTRO_SECONDS = [64, 64, 0, 0];

BrnGameState::KF_TIME_IN_FREEBURN_FOR_TRAINING_TIP = [67, 112, 0, 0];

BrnGameState::KF_TIME_ONLINE_FOR_WIN_CAR_TIP = [67, 150, 0, 0];

BrnGameState::KF_TEMP_PLAYER_LIST_COLUMN_GAP = [64, 128, 0, 0];

BrnGameState::KF_TEMP_PLAYER_LIST_POS_X = [66, 72, 0, 0];

BrnGameState::KF_TEMP_PLAYER_LIST_POS_Y = [67, 150, 0, 0];

BrnGameState::KF_TEMP_PLAYER_TEAM_STATUS_SIZE = [66, 12, 0, 0];

BrnGameState::KF_TEMP_PLAYER_TEAM_STATUS_POS_X = [67, 210, 0, 0];

BrnGameState::KF_TEMP_PLAYER_TEAM_STATUS_POS_Y = [66, 140, 0, 0];

BrnGameState::KF_TEMP_METRES_TO_FEET = [64, 81, 249, 72];

BrnGameState::KF_TEMP_METRES_TO_MILES = [58, 34, 227, 132];

BrnGameState::KF_TEMP_LEADER_POS_X = [66, 72, 0, 0];

BrnGameState::KF_TEMP_LEADER_POS_Y = [66, 200, 0, 0];

BrnGameState::KF_TEMP_TIMER_SIZE = [65, 160, 0, 0];

BrnGameState::KF_TEMP_TIMER_POS_X = [68, 128, 192, 0];

BrnGameState::KF_TEMP_TIMER_POS_Y = [67, 175, 0, 0];

BrnGameState::KF_MAX_SPEED_FOR_INACTIVITY_MPH = [64, 0, 0, 0];

BrnGameState::KF_MAX_BRAKE_FOR_INACTIVITY = [61, 204, 204, 205];

BrnGameState::KF_MAX_GAS_FOR_INACTIVITY = [61, 204, 204, 205];

BrnGameState::KF_MAX_STEERING_FOR_INACTIVITY = [61, 204, 204, 205];

BrnGameState::KF_DIST_TO_FINISH_FUDGE_FACTOR = [63, 172, 204, 205];

BrnGameState::KF_MIN_LINEAR_SPEED = [64, 128, 0, 0];

BrnGameState::KF_MIN_ANGULAR_SPEED = [64, 192, 0, 0];

BrnGameState::KF_DISTANCE_BETWEEN_POSITION_STORES = [65, 160, 0, 0];

BrnGameState::KF_MIN_TIME_BETWEEN_HITTING_OVERHEAD_SIGNS = [63, 128, 0, 0];

BrnGameState::KF_PLAYER_INACTIVE_TIME_FOR_MODE_END = [64, 64, 0, 0];

BrnGameState::KF_TIME_SINCE_LAST_EVENT_FOR_MODE_END = [64, 64, 0, 0];

BrnGameState::KF_CRASH_BECOMES_INACTIVE_TIME = [64, 160, 0, 0];

BrnGameState::KF_RESET_COMBO_COUNTER_LATITUDE_TIME = [62, 153, 153, 154];

BrnGameState::KF_RESET_COMBO_GRACE_PERIOD = [63, 0, 0, 0];

BrnGameState::K_ID_COMPACT = -4670713955411951616;

BrnGameState::K_ID_ASIAN_SALOON = -4880326260205551616;

BrnGameState::K_ID_US_SALOON = -4670607623251951616;

BrnGameState::K_ID_MPV = -4837894034608111616;

BrnGameState::K_ID_PICKUP = -4670627447891951616;

BrnGameState::K_ID_STATION_WAGON = -4670605821011951616;

BrnGameState::K_ID_SUBURBAN_SUV = -4670606021805551616;

BrnGameState::K_ID_RURAL_SUV = -4670606021808111616;

BrnGameState::K_ID_TAXI = -4670704497840111616;

BrnGameState::K_ID_LIMO = -4670653334611951616;

BrnGameState::K_ID_CITY_BUS = -4670722471405551616;

BrnGameState::K_ID_TOUR_BUS = -4670722467309551616;

BrnGameState::K_ID_SMALL_RV = -4670612538349551616;

BrnGameState::K_ID_COUNTRY_WAGON = -4670607340720111616;

BrnGameState::K_ID_CHERRY_PICKER = -4670607340717551616;

BrnGameState::K_ID_SMALL_BOX_TRUCK = -4670607340714991616;

BrnGameState::K_ID_SMALL_TOW_TRUCK = -4670607340712431616;

BrnGameState::K_ID_VAN = -4670591395309551616;

BrnGameState::K_ID_24_RESCUE_VAN = -4670591393875951616;

BrnGameState::K_ID_CHANNEL_5_VAN = -4670591397971951616;

BrnGameState::K_ID_REPAIR_VAN = -4670591399405551616;

BrnGameState::K_ID_MAIL_VAN = -4670605984851951616;

BrnGameState::K_ID_GILLETTE = -4670684993005551616;

BrnGameState::K_ID_DIESEL = -4670605997549551616;

BrnGameState::KF_TIME_REMAINING_AFTER_TAKEDOWN = [65, 240, 0, 0];

BrnGameState::KF_MAX_SEPARATION_FOR_PURSUIT_MODE = [68, 122, 0, 0];

BrnGameState::KF_SEPARATION_FOR_PURSUIT_WARNING = [68, 22, 0, 0];

BrnGameState::KF_HACK_MIN_LANDMARK_HEIGHT = [195, 22, 0, 0];

BrnGameState::KF_MIN_CAR_ADDITION_FREQUENCY = [64, 128, 0, 0];

BrnGameState::KF_MAX_CAR_ADDITION_FREQUENCY = [64, 240, 0, 0];

BrnGameState::KF_CAR_ADDITION_PRESENTATION_DELAY_TIME = [63, 153, 153, 154];

BrnGameState::KF_ADDING_CAR_PRESENTATION_LENGTH = [63, 128, 0, 0];

BrnGameState::KF_MIN_SPAWN_TIME_AFTER_DISPRUPTIVE_EVENT = [64, 64, 0, 0];

BrnGameState::KF_MIN_DIST_TO_FINISH_FOR_CAR_ADDITION = [68, 122, 0, 0];

BrnGameState::KF_MIN_PLAYER_SPEED_FOR_CAR_ADDITION_MPH = [66, 140, 0, 0];

BrnGameState::KF_WRONG_WAY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_DIST_MOVED_AWAY_FROM_FINISH_TO_EXIT = [68, 122, 0, 0];

BrnGameState::KF_FACEOFF_MIN_CAR_ADDITION_FREQUENCY = [64, 128, 0, 0];

BrnGameState::KF_FACEOFF_MAX_CAR_ADDITION_FREQUENCY = [64, 240, 0, 0];

BrnGameState::KF_FACEOFF_CAR_ADDITION_PRESENTATION_DELAY_TIME = [63, 153, 153, 154];

BrnGameState::KF_FACEOFF_ADDING_CAR_PRESENTATION_LENGTH = [63, 128, 0, 0];

BrnGameState::KF_FACEOFF_MIN_SPAWN_TIME_AFTER_DISPRUPTIVE_EVENT = [64, 64, 0, 0];

BrnGameState::KF_FACEOFF_MIN_DIST_TO_FINISH_FOR_CAR_ADDITION = [68, 122, 0, 0];

BrnGameState::KF_FACEOFF_MIN_PLAYER_SPEED_FOR_CAR_ADDITION_MPH = [66, 140, 0, 0];

BrnGameState::KF_FACEOFF_WRONG_WAY_TIME_FOR_MODE_EXIT = [65, 240, 0, 0];

BrnGameState::KF_HIDE_TIME_IF_PLAYER_IN_SHORTCUT = [64, 160, 0, 0];

BrnGameState::KF_BROADCAST_MADNESS_TRESHOLD = [59, 35, 215, 10];

BrnGameState::KF_POST_TARGET_TAKEDOWN_MADNESS_INCREASE = [62, 204, 204, 205];

BrnGameState::KF_ROAD_RAGE_TIME_LIMIT_SECONDS = [66, 240, 0, 0];

BrnGameState::KF_ONLINE_RACE_TRAFFIC_DENSITY = [62, 204, 204, 205];

BrnGameState::KF_MIN_DIST_TO_SNAP_BURNING_ROUTE_LANDMARK_METRES = [68, 122, 0, 0];

BrnGameState::KF_MAX_DIST_TO_SNAP_BURNING_ROUTE_LANDMARK_METRES = [68, 250, 0, 0];

BrnGameState::KF_ONLINE_BURNING_ROUTE_SECONDS_PER_KM = [66, 240, 0, 0];

BrnGameState::KF_MAX_DONUT_START_SPEED_MPH = [65, 160, 0, 0];

BrnGameState::KF_STUNT_RACE_DEFAULT_TIME_LIMIT_SECONDS = [66, 240, 0, 0];

BrnGameState::KF_DEFAULT_EXIT_ANGLE = [61, 178, 184, 194];

BrnGameState::KF_MAX_DONUT_START_TIME = [64, 192, 0, 0];

BrnGameState::KF_MAX_TIME_ALLOWED_BETWEEN_AIR = [64, 128, 0, 0];

BrnGameState::KF_DIST_SQUARED_LEAP_RADIUS = [66, 200, 0, 0];

BrnGameState::KF_CLEARANCE_FOR_VALID_LEAP = [62, 128, 0, 0];

BrnGameState::KF_MILLISECONDS_TO_SECONDS_MULTIPLIER = [58, 131, 18, 111];

BrnGameState::KF_SECONDS_TO_MILLISECONDS_MULTIPLIER = [68, 122, 0, 0];

BrnGameState::KF_RESULTS_TIME_OUT = [64, 176, 0, 0];

BrnGameState::KF_LEAPT_CARS_TIMER = [62, 128, 0, 0];

BrnGameState::KF_IN_ROAD_TIMEOUT = [65, 112, 0, 0];

BrnGameState::KF_SECONDS_TO_MILLISECONDS = [68, 122, 0, 0];

BrnGameState::KF_TIME_RULE_TIMEOUT_PROPORTION = [64, 0, 0, 0];

BrnGameState::KF_WARNING_TIME_BEFORE_END = [64, 160, 0, 0];

BrnGameState::KF_WARNING_SPACING = [63, 128, 0, 0];

BrnGameState::KF_ROAD_RULE_NO_INPUT_QUIT_TIME = [64, 160, 0, 0];

BrnGameState::KF_TIME_BETWEEN_HIGH_SCORE_UNBUFFERS = [65, 160, 0, 0];

BrnGameState::KF_MAX_ROAD_LOOKAHEAD_DIST = [67, 122, 0, 0];

BrnGameState::KF_UPCOMING_ROADS_STICKY_TIME = [62, 76, 204, 205];

BrnGameState::KF_UPCOMING_ROADS_STICKY_TIME_RACE = [61, 204, 204, 205];

BrnGameState::KF_MIN_DISTANCE_FOR_DECSION = [67, 250, 0, 0];

BrnGameState::KF_TIME_IN_JUNCTION_TO_KILL_UPCOMING = [64, 0, 0, 0];

BrnGameState::KI_MIN_TIME_GOING_WRONG_WAY = [65, 32, 0, 0];

BrnGameState::KF_MIN_TIME_BEFORE_WE_SHOW_SIGN = [64, 128, 0, 0];

BrnGameState::KF_MIN_DISTANCE_BEFORE_WE_SHOW_SIGN = [66, 72, 0, 0];

BrnGameState::KF_ROUTE_GUIDANCE_LOCK_TIME = [63, 128, 0, 0];

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

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

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

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

