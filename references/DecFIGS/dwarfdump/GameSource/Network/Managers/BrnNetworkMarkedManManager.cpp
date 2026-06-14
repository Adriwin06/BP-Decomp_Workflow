// BrnNetworkMarkedManManager.cpp:116
void BrnNetwork::MarkedManManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:150
void BrnNetwork::MarkedManManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:251
void BrnNetwork::MarkedManManager::GetDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:253
		int32_t liPlayerIndex;

	}
}

// BrnNetworkMarkedManManager.cpp:227
void BrnNetwork::MarkedManManager::ResetRemotePlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:229
		int32_t liPlayerIndex;

	}
}

// BrnNetworkMarkedManManager.cpp:100
void BrnNetwork::MarkedManManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:83
void BrnNetwork::MarkedManManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:63
void BrnNetwork::MarkedManManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:42
void BrnNetwork::MarkedManManager::Construct(BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:198
void BrnNetwork::MarkedManManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:200
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkMarkedManManager.cpp:201
		BrnNetwork::MarkedManManager::DataEntry * lpDataEntry;

	}
}

// BrnNetworkMarkedManManager.cpp:129
void BrnNetwork::MarkedManManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:131
		int32_t liPlayerIndex;

	}
}

// BrnNetworkMarkedManManager.cpp:325
void BrnNetwork::MarkedManManager::_MarkedManMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:327
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkMarkedManManager.cpp:328
		MarkedManManager * lpMarkedManManager;

		// BrnNetworkMarkedManManager.cpp:329
		BrnNetwork::MarkedManMessage * lpMarkedManMessage;

		// BrnNetworkMarkedManManager.cpp:330
		AggressiveMoveData::NetworkPlayerID lMarkedManPlayerID;

		// BrnNetworkMarkedManManager.cpp:331
		bool lbIsFinal;

	}
}

// BrnNetworkMarkedManManager.cpp:275
void BrnNetwork::MarkedManManager::SendMarkedManDataToAll(bool  lbIsFinalMarkDecision) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:277
		int32_t liPlayerIndex;

		// BrnNetworkMarkedManManager.cpp:278
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkMarkedManManager.cpp:279
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
}

// BrnNetworkMarkedManManager.cpp:306
void BrnNetwork::MarkedManManager::MarkingFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMarkedManManager.cpp:163
void BrnNetwork::MarkedManManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMarkedManManager.cpp:165
		BrnNetwork::MarkedManManager::DataEntry * lpDataEntry;

		// BrnNetworkMarkedManManager.cpp:166
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnNetworkMarkedManManager.cpp:172
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMarkedManManager.cpp:364
void BrnNetwork::MarkedManManager::_MarkedManMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[35] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

