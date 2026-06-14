// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkStandingsManager.cpp:33
	const float32_t KF_SECONDS_TO_FINISH_EVENT;

	// BrnNetworkStandingsManager.cpp:34
	const float32_t KF_SECONDS_TO_SHOW_ROUND_SUMMARY;

	// BrnNetworkStandingsManager.cpp:48
	const char *[4] KPC_STATE_NAMES;

}

// BrnNetworkStandingsManager.cpp:122
void BrnNetwork::StandingsManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStandingsManager.cpp:141
void BrnNetwork::StandingsManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStandingsManager.cpp:329
void BrnNetwork::StandingsManager::GetStandingsDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:331
		int32_t liIndex;

	}
}

// BrnNetworkStandingsManager.cpp:487
void BrnNetwork::StandingsManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStandingsManager.cpp:500
void BrnNetwork::StandingsManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStandingsManager.cpp:706
void BrnNetwork::StandingsManager::HasSomeoneTimedOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:708
		int32_t liPlayerIndex;

	}
}

// BrnNetworkStandingsManager.cpp:682
void BrnNetwork::StandingsManager::CountRecievedFinishTimes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:684
		int32_t liNumberOfRecievedFinishTimes;

		// BrnNetworkStandingsManager.cpp:686
		int32_t liStandingsIndex;

	}
}

// BrnNetworkStandingsManager.cpp:517
void BrnNetwork::StandingsManager::ClearStandingsData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:519
		int32_t liPlayerIndex;

		CgsSystem::Time::SetFloatVal(/* parameters */);
	}
}

// BrnNetworkStandingsManager.cpp:357
void BrnNetwork::StandingsManager::GetFinishTime(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnNetworkStandingsManager.cpp:360
	Time & lTime;

	{
		// BrnNetworkStandingsManager.cpp:359
		StandingsData * lpStandingsData;

		// BrnNetworkStandingsManager.cpp:360
		Time lTime;

		CgsSystem::Time::Time(/* parameters */);
	}
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:275
void BrnNetwork::StandingsManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:277
		StandingsData * lpDataEntry;

		// BrnNetworkStandingsManager.cpp:278
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:305
void BrnNetwork::StandingsManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:307
		int32_t liPlayerIndex;

	}
}

// BrnNetworkStandingsManager.cpp:227
void BrnNetwork::StandingsManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:229
		int32_t liIndex;

		// BrnNetworkStandingsManager.cpp:230
		StandingsData * lpDataEntry;

		// BrnNetworkStandingsManager.cpp:231
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:157
void BrnNetwork::StandingsManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:159
		int32_t liPlayerIndex;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:85
void BrnNetwork::StandingsManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:87
		int32_t liPlayerIndex;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStandingsManager.cpp:434
void BrnNetwork::StandingsManager::OnGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[12] __FUNCTION__;

	{
		// BrnNetworkStandingsManager.cpp:436
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:464
void BrnNetwork::StandingsManager::OnGameFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[13] __FUNCTION__;

	{
		// BrnNetworkStandingsManager.cpp:474
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:538
void BrnNetwork::StandingsManager::SendPlayerFinishedRoundMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:540
		uint16_t lu16CurrentFrame;

		// BrnNetworkStandingsManager.cpp:541
		CgsNetwork::PlayerManager * lpPlayerManager;

		// BrnNetworkStandingsManager.cpp:542
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// BrnNetworkStandingsManager.cpp:543
		BrnNetwork::PlayerFinishedRoundMessage * lpMessage;

		// BrnNetworkStandingsManager.cpp:544
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStandingsManager.cpp:545
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkStandingsManager.cpp:546
		StandingsData * lpLocalPlayerStandingsData;

		CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// BrnNetworkStandingsManager.cpp:579
		uint8_t lu8CurrentRound;

	}
	CgsSystem::Time::Time(/* parameters */);
	{
		// BrnNetworkStandingsManager.cpp:571
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnNetworkStandingsManager.cpp:665
void BrnNetwork::StandingsManager::_RoundFinishedMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[39] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:733
void BrnNetwork::StandingsManager::SetState(BrnNetwork::StandingsManager::ECountDownState  leNewState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[9] __FUNCTION__;

	{
		// BrnNetworkStandingsManager.cpp:792
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStandingsManager.cpp:773
		PlayerFinishedModeEvent lPlayerFinishedMode;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStandingsManager.cpp:817
void BrnNetwork::StandingsManager::EnsureCountdownTimerStartedOnLocalPlayerDisconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStandingsManager.cpp:448
void BrnNetwork::StandingsManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[13] __FUNCTION__;

	{
		// BrnNetworkStandingsManager.cpp:450
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:835
void BrnNetwork::StandingsManager::HandleStandingsEvent(BrnNetwork::StandingsManager::EStandingsEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:903
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStandingsManager.cpp:862
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStandingsManager.cpp:894
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetGameEventQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStandingsManager.cpp:612
void BrnNetwork::StandingsManager::_RoundFinishedMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:614
		StandingsManager * lpStandingsManager;

		// BrnNetworkStandingsManager.cpp:615
		BrnNetwork::PlayerFinishedRoundMessage * lpPlayerFinishedRoundMessage;

		// BrnNetworkStandingsManager.cpp:616
		StandingsData * lpStandings;

	}
	{
		// BrnNetworkStandingsManager.cpp:629
		uint8_t lu8RoundIndex;

		// BrnNetworkStandingsManager.cpp:630
		Time lFinishTime;

		// BrnNetworkStandingsManager.cpp:631
		float_t lfDistanceFromFinish;

		// BrnNetworkStandingsManager.cpp:632
		AggressiveMoveData::NetworkPlayerID lEliminatorNetworkPlayerID;

		// BrnNetworkStandingsManager.cpp:633
		bool lbTimedOut;

		// BrnNetworkStandingsManager.cpp:634
		int32_t liEliminations;

	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkStandingsManager.cpp:388
void BrnNetwork::StandingsManager::HandlePlayerFinishedMode(AggressiveMoveData::NetworkPlayerID  lPlayerID, const FinishedModeAction *  lpFinishedModeAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:390
		StandingsData * lpStandingsData;

		// BrnNetworkStandingsManager.cpp:391
		Time lTime;

	}
	CgsSystem::Time::operator=(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	{
		// BrnNetworkStandingsManager.cpp:403
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
}

// BrnNetworkStandingsManager.cpp:186
void BrnNetwork::StandingsManager::Update(bool  lbDiskEjected) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStandingsManager.cpp:205
		NetworkOutEventTimeRemaining lTimeRemaining;

		CgsSystem::Time::SetFloatVal(/* parameters */);
		NetworkOutEventTimeRemaining(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutEventTimeRemaining>(/* parameters */);
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

