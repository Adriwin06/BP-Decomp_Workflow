// BrnNetworkSelectedRoutesManager.cpp:323
void BrnNetwork::SelectedRoutesManager::GetSelectedRoutesDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:325
		BrnNetwork::SelectedRoutesManager::SelectedRoutesData * lpEntry;

		// BrnNetworkSelectedRoutesManager.cpp:326
		int32_t liIndex;

	}
}

// BrnNetworkSelectedRoutesManager.cpp:480
void BrnNetwork::SelectedRoutesManager::GetRouteData(BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *  laEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:482
		uint32_t luRoundNum;

	}
}

// BrnNetworkSelectedRoutesManager.cpp:448
void BrnNetwork::SelectedRoutesManager::ClearReceivedRounds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:450
		int32_t liIndex;

		// BrnNetworkSelectedRoutesManager.cpp:451
		uint32_t luRoundNum;

	}
}

// BrnNetworkSelectedRoutesManager.cpp:46
void BrnNetwork::SelectedRoutesManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:48
		int32_t liPlayerIndex;

		// BrnNetworkSelectedRoutesManager.cpp:49
		uint32_t luRoundNum;

	}
	SetRoutesChanged(/* parameters */);
}

// BrnNetworkSelectedRoutesManager.cpp:114
void BrnNetwork::SelectedRoutesManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetRoutesChanged(/* parameters */);
}

// BrnNetworkSelectedRoutesManager.cpp:129
void BrnNetwork::SelectedRoutesManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:131
		int32_t liPlayerIndex;

		// BrnNetworkSelectedRoutesManager.cpp:132
		uint32_t luRoundNum;

		SetRoutesChanged(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:502
void BrnNetwork::SelectedRoutesManager::_SelectedRoutesMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:504
		BrnNetwork::SelectedRoutesMessage * lpSelectedRoutesMessage;

		// BrnNetworkSelectedRoutesManager.cpp:505
		SelectedRoutesManager * lpManager;

		// BrnNetworkSelectedRoutesManager.cpp:506
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event lEvent;

		// BrnNetworkSelectedRoutesManager.cpp:507
		int32_t liRoundNum;

		Event(/* parameters */);
		SetRoutesChanged(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:422
void BrnNetwork::SelectedRoutesManager::SetRouteData(int32_t  liNumRounds, const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *  laEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:424
		int32_t liRoundIndex;

	}
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	SetRoutesChanged(/* parameters */);
}

// BrnNetworkSelectedRoutesManager.cpp:85
void BrnNetwork::SelectedRoutesManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:87
		uint32_t luRoundIndex;

		// BrnNetworkSelectedRoutesManager.cpp:88
		LightTriggerId lTriggerID;

		SetRoutesChanged(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:298
void BrnNetwork::SelectedRoutesManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:300
		uint32_t luRoundNum;

		// BrnNetworkSelectedRoutesManager.cpp:301
		LightTriggerId lTriggerID;

		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:223
void BrnNetwork::SelectedRoutesManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:225
		BrnNetwork::SelectedRoutesManager::SelectedRoutesData * lpEntry;

		// BrnNetworkSelectedRoutesManager.cpp:226
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkSelectedRoutesManager.cpp:227
		uint32_t luRoundNum;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:263
void BrnNetwork::SelectedRoutesManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:265
		int32_t liPlayerIndex;

		// BrnNetworkSelectedRoutesManager.cpp:266
		uint32_t luRoundNum;

		// BrnNetworkSelectedRoutesManager.cpp:267
		LightTriggerId lTriggerID;

		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:177
void BrnNetwork::SelectedRoutesManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:179
		BrnNetwork::SelectedRoutesManager::SelectedRoutesData * lpDataEntry;

		// BrnNetworkSelectedRoutesManager.cpp:180
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkSelectedRoutesManager.cpp:181
		uint32_t luRoundNum;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:354
void BrnNetwork::SelectedRoutesManager::HaveAllPlayersReceivedRoutes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:356
		int32_t liIndex;

		CgsContainers::BitArray<10u>::GetFirstZeroBit(/* parameters */);
		CgsContainers::BitArray<10u>::GetFirstZeroBit(/* parameters */);
	}
}

// BrnNetworkSelectedRoutesManager.cpp:383
void BrnNetwork::SelectedRoutesManager::SendRouteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSelectedRoutesManager.cpp:385
		int32_t liNextRoundNumber;

		// BrnNetworkSelectedRoutesManager.cpp:386
		int32_t liPlayerIndex;

		// BrnNetworkSelectedRoutesManager.cpp:387
		uint16_t lu16CurrentFrame;

		// BrnNetworkSelectedRoutesManager.cpp:388
		AggressiveMoveData::NetworkPlayerID lPlayerID;

	}
	CgsContainers::BitArray<10u>::GetFirstZeroBit(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	CgsContainers::BitArray<10u>::SetBit(/* parameters */);
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

// BrnNetworkSelectedRoutesManager.cpp:162
void BrnNetwork::SelectedRoutesManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkSelectedRoutesManager.cpp:533
void BrnNetwork::SelectedRoutesManager::_SelectedRoutesMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[40] __FUNCTION__;

	{
		// BrnNetworkSelectedRoutesManager.cpp:535
		SelectedRoutesManager * lpManager;

		// BrnNetworkSelectedRoutesManager.cpp:536
		BrnNetwork::SelectedRoutesManager::SelectedRoutesData * lpData;

		// BrnNetworkSelectedRoutesManager.cpp:537
		uint32_t luRoundNum;

	}
	CgsContainers::BitArray<10u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<10u>::SetBit(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

