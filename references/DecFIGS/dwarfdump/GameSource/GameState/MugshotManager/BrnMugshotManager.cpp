// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnMugshotManager.cpp:44
	const float32_t KF_WAIT_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:45
	const float32_t KF_WAIT_PAYBACK_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:46
	const float32_t KF_CAPTURE_YOUR_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:47
	const float32_t KF_CAPTURE_YOUR_VICTORY_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:48
	const float32_t KF_SHOW_YOUR_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:49
	const float32_t KF_SHOW_THEIR_MUGSHOT_DURATION;

	// BrnMugshotManager.cpp:50
	const float32_t KF_CAPTURE_THEIR_MUGSHOT_TIMEOUT_DURATION;

}

// BrnMugshotManager.cpp:169
void BrnGameState::MugshotManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:184
void BrnGameState::MugshotManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:71
void BrnGameState::MugshotManager::CameraStatusData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:138
void BrnGameState::MugshotManager::ResetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:140
		int32_t liIndex;

	}
}

// BrnMugshotManager.cpp:991
void BrnGameState::MugshotManager::OnRoundEnd(bool  lbResetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:976
void BrnGameState::MugshotManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:116
void BrnGameState::MugshotManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:86
void BrnGameState::MugshotManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

// BrnMugshotManager.cpp:1009
void BrnGameState::MugshotManager::ChangeState(BrnGameState::MugshotManager::EMugshotCaptureState  leNewCaptureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:1023
void BrnGameState::MugshotManager::ChangeState(BrnGameState::MugshotManager::EMugshotShowState  leNewShowState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:887
void BrnGameState::MugshotManager::ProcessAbortCaptureEvent(const OnlineImageCaptureAbortedEvent *  lpAbortEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:425
void BrnGameState::MugshotManager::DoesPlayerHaveACamera(EActiveRaceCarIndex  lePlayerRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:427
		int32_t liPlayerIndex;

	}
}

// BrnMugshotManager.cpp:596
void BrnGameState::MugshotManager::HandlePreparingForMugshotCapture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:739
void BrnGameState::MugshotManager::HandlePreparingToCaptureTheirMugshot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:1037
void BrnGameState::MugshotManager::UpdateFSMTimers(const TimerStatusInterface *  lpTimerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMugshotManager.cpp:851
void BrnGameState::MugshotManager::ProcessImageReceivedEvent(const OnlineImageReceivedEvent *  lpImageReceivedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModeManager::IsInPostEvent(/* parameters */);
}

// BrnMugshotManager.cpp:455
void BrnGameState::MugshotManager::UpdateCameraStatusData(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:457
		int32_t liPlayerIndex;

		// BrnMugshotManager.cpp:458
		const PreWorldInputBuffer::NetworkPlayerStatusInterface * lpPlayerStatusInterface;

	}
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	{
		// BrnMugshotManager.cpp:468
		const InGamePlayerStatusData * lpPlayerData;

		BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMugshotManager.cpp:202
void BrnGameState::MugshotManager::StartMugshotCapture(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::GameStateModuleIO::EImageType  leMugshotTypeToCapture, EActiveRaceCarIndex  leMugshotShowRaceCarIndex, EActiveRaceCarIndex  leMugshotCaptureRaceCarIndex, bool  lbMugshotRequiresBroadcast) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:204
		EActiveRaceCarIndex leImageCaptureRaceCarIndex;

		// BrnMugshotManager.cpp:205
		EActiveRaceCarIndex leImageShowRaceCarIndex;

		// BrnMugshotManager.cpp:206
		PaybackMugshotAction lMugshotPrepareCaptureAction;

		ModeManager::IsInPostEvent(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMugshotManager.cpp:242
		AbortMugshotCaptureAction lAbortMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::AbortMugshotCaptureAction>(/* parameters */);
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

// BrnMugshotManager.cpp:954
void BrnGameState::MugshotManager::ProcessOnlineWin(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMugshotManager.cpp:917
void BrnGameState::MugshotManager::ProcessBeatenRoadRuleEvent(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, EActiveRaceCarIndex  lBeatenPlayerRaceCarIndex, CgsID  lBeatenRoadID, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnMugshotManager.cpp:922
		BrnGameState::GameStateModuleIO::EImageType leImageType;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
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

// BrnMugshotManager.cpp:372
void BrnGameState::MugshotManager::CheckForSuccessfulPayback(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:374
		int32_t liIndex;

		// BrnMugshotManager.cpp:375
		const GameStateToNetworkInterface::DirtyTrickQueue * lpDirtyTrickInputQueue;

	}
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetDirtyTrickQueue(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	{
		// BrnMugshotManager.cpp:386
		DirtyTrickEvent lEvent;

		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
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

// BrnMugshotManager.cpp:308
void BrnGameState::MugshotManager::ProcessTakedownEvents(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const InputBuffer::TakedownEventQueue *  lpQueue, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:310
		TakedownEvent lTakedownEvent;

		// BrnMugshotManager.cpp:311
		int32_t liIndex;

	}
	{
		// BrnMugshotManager.cpp:315
		EActiveRaceCarIndex leTakedownAggressorRaceCarIndex;

		// BrnMugshotManager.cpp:316
		EActiveRaceCarIndex leTakedownVictimRaceCarIndex;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	GameStateModule::IsOnlineGameMode(/* parameters */);
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

// BrnMugshotManager.cpp:619
void BrnGameState::MugshotManager::HandleCapturingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:624
		PaybackMugshotAction lMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
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

// BrnMugshotManager.cpp:670
void BrnGameState::MugshotManager::HandleTakingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutputInterface, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:675
		PaybackMugshotAction lMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
	}
	{
		// BrnMugshotManager.cpp:694
		CrashingRaceCarInterface lCrashingRaceCarInterface;

		BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		{
			// BrnMugshotManager.cpp:701
			PaybackMugshotAction lMugshotAction;

			GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
			GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
			GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
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
}

// BrnMugshotManager.cpp:756
void BrnGameState::MugshotManager::HandleCapturingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:763
		PaybackMugshotAction lMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
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

// BrnMugshotManager.cpp:793
void BrnGameState::MugshotManager::HandleShowingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMugshotManager.cpp:800
		PaybackMugshotAction lMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
	}
	{
		// BrnMugshotManager.cpp:819
		PaybackMugshotAction lMugshotAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(/* parameters */);
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

// BrnMugshotManager.cpp:498
void BrnGameState::MugshotManager::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutputInterface, const InputBuffer::TakedownEventQueue *  lpQueue, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, bool  lbIsAnythingPaused) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
	{
		// BrnMugshotManager.cpp:549
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMugshotManager.cpp:583
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMugshotManager.cpp:31
