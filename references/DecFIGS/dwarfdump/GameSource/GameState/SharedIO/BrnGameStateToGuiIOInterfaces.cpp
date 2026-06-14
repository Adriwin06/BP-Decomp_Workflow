// BrnGameStateToGuiIOInterfaces.cpp:62
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::Clear(/* parameters */);
}

// BrnGameStateToGuiIOInterfaces.cpp:40
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Construct(/* parameters */);
}

// BrnGameStateToGuiIOInterfaces.cpp:245
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AppendRaceCarCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<8>(/* parameters */);
}

// BrnGameStateToGuiIOInterfaces.cpp:227
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddOnTailEvent(CgsID  lOfflineRivalCarID, EActiveRaceCarIndex  leTailingActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:229
		GameStateToGuiOnTailEvent lOnTailEvent;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:130
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddDirtyTrickEnding(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType, bool  lbSurvived) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:132
		GameStateToGuiEndingDirtyTrick lDirtyTrickEnding;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:87
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddNewDirtyTrick(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:89
		GameStateToGuiNewDirtyTrick lNewDirtyTrick;

	}
}

// BrnGameStateToGuiIOInterfaces.cpp:189
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddTookLeadEvent(CgsID  lOfflineRivalCarID, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:191
		GameStateToGuiTookLeadEvent lTookLeadEvent;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:208
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddTookLastEvent(CgsID  lOfflineRivalCarID, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:210
		GameStateToGuiTookLastEvent lTookLastEvent;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:108
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddDirtyTrickTriggered(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnNetwork::EPaybackType  leDirtyTrickType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:110
		GameStateToGuiTriggeredDirtyTrick lDirtyTrickTriggered;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:151
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddOvertakeEvent(uint8_t  lu8NewPosition, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:153
		GameStateToGuiOvertakeEvent lOvertakeEvent;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateToGuiIOInterfaces.cpp:170
void BrnGameState::GameStateModuleIO::GameStateToGuiInterface::AddFinishedRaceEvent(BrnGui::EFinishType  leFinishType, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateToGuiIOInterfaces.cpp:172
		GameStateToGuiFinishedRaceEvent lFinishedRaceEvent;

	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

