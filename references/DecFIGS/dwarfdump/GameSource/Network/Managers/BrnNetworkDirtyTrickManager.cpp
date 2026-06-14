// BrnNetworkDirtyTrickManager.cpp:65
void BrnNetwork::NetworkDirtyTrickManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:67
		int32_t liIndex;

	}
}

// BrnNetworkDirtyTrickManager.cpp:90
void BrnNetwork::NetworkDirtyTrickManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:92
		int32_t liIndex;

	}
}

// BrnNetworkDirtyTrickManager.cpp:114
void BrnNetwork::NetworkDirtyTrickManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkDirtyTrickManager.cpp:131
void BrnNetwork::NetworkDirtyTrickManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkDirtyTrickManager.cpp:146
void BrnNetwork::NetworkDirtyTrickManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkDirtyTrickManager.cpp:356
void BrnNetwork::NetworkDirtyTrickManager::GetDirtyTrickDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:358
		BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * lpEntry;

		// BrnNetworkDirtyTrickManager.cpp:359
		int32_t liIndex;

	}
}

// BrnNetworkDirtyTrickManager.cpp:288
void BrnNetwork::NetworkDirtyTrickManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:290
		BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * lpDataEntry;

		// BrnNetworkDirtyTrickManager.cpp:291
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkDirtyTrickManager.cpp:325
void BrnNetwork::NetworkDirtyTrickManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:327
		BrnNetwork::NetworkDirtyTrickManager::DirtyTrickData * lpEntry;

		// BrnNetworkDirtyTrickManager.cpp:328
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkDirtyTrickManager.cpp:384
void BrnNetwork::NetworkDirtyTrickManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:386
		int32_t liIndex;

	}
}

// BrnNetworkDirtyTrickManager.cpp:243
void BrnNetwork::NetworkDirtyTrickManager::SendDirtyTrickMessage(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, uint8_t  lu8DirtyTrickType, uint8_t  lu8DirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:245
		uint16_t lu16CurrentFrame;

		// BrnNetworkDirtyTrickManager.cpp:246
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkDirtyTrickManager.cpp:247
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkDirtyTrickManager.cpp:248
		BrnNetwork::DirtyTrickMessage * lpDirtyTrickMessage;

	}
	{
		// BrnNetworkDirtyTrickManager.cpp:262
		AggressiveMoveData::NetworkPlayerID lAggressorNetworkPlayerID;

		// BrnNetworkDirtyTrickManager.cpp:263
		AggressiveMoveData::NetworkPlayerID lVictimNetworkPlayerID;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
}

// BrnNetworkDirtyTrickManager.cpp:178
void BrnNetwork::NetworkDirtyTrickManager::ProcessDirtyTrickEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:198
		int32_t liIndex;

		// BrnNetworkDirtyTrickManager.cpp:199
		DirtyTrickEvent lDirtyTrickEvent;

		// BrnNetworkDirtyTrickManager.cpp:200
		const GameStateToNetworkInterface::DirtyTrickQueue * lpDirtyTrickEventQueue;

	}
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkDirtyTrickManager.cpp:161
void BrnNetwork::NetworkDirtyTrickManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkDirtyTrickManager.cpp:410
void BrnNetwork::NetworkDirtyTrickManager::ReceiveDirtyTrickMessage(AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, BrnNetwork::DirtyTrickMessage *  lpDirtyTrickMessageRecv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:412
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnNetworkDirtyTrickManager.cpp:413
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnNetworkDirtyTrickManager.cpp:414
		AggressiveMoveData::NetworkPlayerID lAggressorNetworkPlayerID;

		// BrnNetworkDirtyTrickManager.cpp:415
		AggressiveMoveData::NetworkPlayerID lVictimNetworkPlayerID;

		// BrnNetworkDirtyTrickManager.cpp:416
		uint8_t lu8DirtyTrickType;

		// BrnNetworkDirtyTrickManager.cpp:417
		uint8_t lu8DirtyTrickStatus;

	}
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGameStateInterface::AddDirtyTrickEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkDirtyTrickManager.cpp:457
void BrnNetwork::NetworkDirtyTrickManager::_DirtyTrickMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkDirtyTrickManager.cpp:459
		NetworkDirtyTrickManager * lpDirtyTrickManager;

		// BrnNetworkDirtyTrickManager.cpp:460
		BrnNetwork::DirtyTrickMessage * lpDirtyTrickMessage;

	}
}

// BrnNetworkDirtyTrickManager.cpp:486
void BrnNetwork::NetworkDirtyTrickManager::_DirtyTrickDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[29] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

