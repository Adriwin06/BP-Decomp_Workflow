// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPaybackManager.cpp:28
	const int32_t KI_PERCENT_CHANCE_OF_NO_DIRTY_TRICK = 5;

	// BrnPaybackManager.cpp:29
	const int32_t KI_NO_AWARD_RATIO = 20;

	// BrnPaybackManager.cpp:30
	const float32_t KF_DIRTY_TRICK_DURATION;

	// BrnPaybackManager.cpp:31
	const float32_t KF_PAYBACK_AWARD_DELAY;

}

// BrnPaybackManager.cpp:101
void BrnGameState::PaybackManager::ResetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent::Clear(/* parameters */);
}

// BrnPaybackManager.cpp:1004
void BrnGameState::PaybackManager::UpdateFSMTimers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:903
void BrnGameState::PaybackManager::StartCountdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:992
void BrnGameState::PaybackManager::ChangeState(BrnGameState::PaybackManager::EPaybackVictimState  leNewPaybackVictimState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:940
void BrnGameState::PaybackManager::IsCountdownComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:127
void BrnGameState::PaybackManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Prepare(/* parameters */);
}

// BrnPaybackManager.cpp:145
void BrnGameState::PaybackManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Release(/* parameters */);
}

// BrnPaybackManager.cpp:1023
void BrnGameState::PaybackManager::SetTimerInterface(const TimerStatusInterface *  lpTimerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
}

// BrnPaybackManager.cpp:840
void BrnGameState::PaybackManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::SetSeed(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// BrnPaybackManager.cpp:859
void BrnGameState::PaybackManager::OnRoundEnd(bool  lbResetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::SetSeed(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// BrnPaybackManager.cpp:798
void BrnGameState::PaybackManager::DirtyTrickEnding(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, EActiveRaceCarIndex  leAggressorRaceCarIndex, EActiveRaceCarIndex  leVictimRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType, bool  lbSurvived) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
}

// BrnPaybackManager.cpp:757
void BrnGameState::PaybackManager::DirtyTrickAwarded(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, EActiveRaceCarIndex  leDTAggressorRaceCarIndex, EActiveRaceCarIndex  leDTVictimRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
	GameStateModuleIO::GameStateToGuiInterface::AddNewDirtyTrick(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:728
void BrnGameState::PaybackManager::SendNetworkDirtyTrickMessage(EActiveRaceCarIndex  leAggressorRaceCarIndex, EActiveRaceCarIndex  leVictimRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType, BrnNetwork::EDirtyTrickStatus  leDirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:730
		DirtyTrickEvent lDirtyTrickEvent;

	}
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:777
void BrnGameState::PaybackManager::DirtyTrickTriggered(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, EActiveRaceCarIndex  leAggressorRaceCarIndex, EActiveRaceCarIndex  leVictimRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
}

// BrnPaybackManager.cpp:53
void BrnGameState::PaybackManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
}

// BrnPaybackManager.cpp:78
void BrnGameState::PaybackManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Destruct(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
}

// BrnPaybackManager.cpp:816
void BrnGameState::PaybackManager::ShowDTAvailableHudNotification(bool  lbShowMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:818
		GuiEventDirtyTrickAvailable lDTAvailableNotification;

	}
	GameStateModule::GetOutputGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiEventDirtyTrickAvailable>(/* parameters */);
}

// BrnPaybackManager.cpp:972
void BrnGameState::PaybackManager::ChangeState(BrnGameState::PaybackManager::EPaybackAggressorState  leNewPaybackAggState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:880
void BrnGameState::PaybackManager::SetDirtyTrickButtonState(bool  lbButtonPressed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:426
void BrnGameState::PaybackManager::HandleTriggeringPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:322
void BrnGameState::PaybackManager::HandleWaitingToAwardPayback(const VehicleOutputInterface *  lpVehicleOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:324
		CrashingRaceCarInterface lCrashingRaceCarInterface;

	}
	BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:165
void BrnGameState::PaybackManager::ProcessTakedownEvents(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const InputBuffer::TakedownEventQueue *  lpQueue, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:167
		TakedownEvent lTakedownEvent;

		// BrnPaybackManager.cpp:168
		int32_t liIndex;

	}
	{
		// BrnPaybackManager.cpp:172
		EActiveRaceCarIndex leTakedownAggressorRaceCarIndex;

		// BrnPaybackManager.cpp:173
		EActiveRaceCarIndex leTakedownVictimRaceCarIndex;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:704
void BrnGameState::PaybackManager::ProcessPaybackTriggerableEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPaybackManager.cpp:915
void BrnGameState::PaybackManager::UpdateCountdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:926
		GuiEventUpdateDirtyTrickCountdown lCountdown;

		GameStateModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiEventUpdateDirtyTrickCountdown>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:508
void BrnGameState::PaybackManager::HandleActivePayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::SetActivePaybackType(/* parameters */);
	GameStateModuleIO::OutputBuffer::SetActivePaybackAggressor(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::IsRaceCarCrashing(/* parameters */);
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

// BrnPaybackManager.cpp:953
void BrnGameState::PaybackManager::RemoveCountdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:958
		GuiEventUpdateDirtyTrickCountdown lCountdown;

	}
	GameStateModule::GetOutputGuiEventQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGuiEvent<BrnGui::GuiEventUpdateDirtyTrickCountdown>(/* parameters */);
}

// BrnPaybackManager.cpp:620
void BrnGameState::PaybackManager::ProcessDirtyTrickEventQueue(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:622
		int32_t liIndex;

		// BrnPaybackManager.cpp:623
		const GameStateToNetworkInterface::DirtyTrickQueue * lpDirtyTrickInputQueue;

	}
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetDirtyTrickQueue(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	{
		// BrnPaybackManager.cpp:634
		DirtyTrickEvent lEvent;

		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
		{
			// BrnPaybackManager.cpp:689
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnPaybackManager.cpp:678
		PaybackSucceededAction lSucceededAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackSucceededAction>(/* parameters */);
	}
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

// BrnPaybackManager.cpp:578
void BrnGameState::PaybackManager::HandleSurvivingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PaybackOverAction>(/* parameters */);
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

// BrnPaybackManager.cpp:462
void BrnGameState::PaybackManager::HandleReceivingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:464
		CrashingRaceCarInterface lCrashingRaceCarInterface;

	}
	BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnPaybackManager.cpp:473
		PaybackActivatedAction lPaybackActivatedAction;

		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaybackActivatedAction>(/* parameters */);
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

// BrnPaybackManager.cpp:403
void BrnGameState::PaybackManager::HandleHavingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PaybackVictimLeftGameAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPaybackManager.cpp:347
void BrnGameState::PaybackManager::HandleAwardingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutputInterface, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:349
		CrashingRaceCarInterface lCrashingRaceCarInterface;

	}
	BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PaybackLostAction>(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
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
}

// BrnPaybackManager.cpp:537
void BrnGameState::PaybackManager::HandleCrashDueToPayback(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PaybackOverAction>(/* parameters */);
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

// BrnPaybackManager.cpp:217
void BrnGameState::PaybackManager::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleOutputInterface *  lpVehicleOutputInterface, const InputBuffer::TakedownEventQueue *  lpQueue, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackManager.cpp:262
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPaybackManager.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	Append<28>(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

