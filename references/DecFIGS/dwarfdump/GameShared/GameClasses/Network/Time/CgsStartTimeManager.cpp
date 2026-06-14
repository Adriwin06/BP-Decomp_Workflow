// CgsStartTimeManager.cpp:534
void CgsNetwork::StartTimeManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:196
void CgsNetwork::StartTimeManager::StopSyncingTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:1340
void CgsNetwork::StartTimeManager::PrepareWaitForStartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:1285
void CgsNetwork::StartTimeManager::PrepareClientWaitStartTimeArrive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:847
void CgsNetwork::StartTimeManager::StartTimeMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:970
void CgsNetwork::StartTimeManager::ReadyMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:987
void CgsNetwork::StartTimeManager::ReadyMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:989
		int32_t liPlayerIndex;

		// CgsStartTimeManager.cpp:990
		StartTimeManager * lpStartTimeMgr;

	}
}

// CgsStartTimeManager.cpp:1437
void CgsNetwork::StartTimeManager::AreWeSyncingTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:1451
void CgsNetwork::StartTimeManager::ForceStartTime(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// CgsStartTimeManager.cpp:616
void CgsNetwork::StartTimeManager::RegisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:618
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsStartTimeManager.cpp:619
		int32_t liFreeSlot;

	}
	{
		// CgsStartTimeManager.cpp:631
		int32_t liIndex;

	}
}

// CgsStartTimeManager.cpp:1360
void CgsNetwork::StartTimeManager::UpdateWaitForStartTime(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TimeManager::GetNetworkTime(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
}

// CgsStartTimeManager.cpp:168
void CgsNetwork::StartTimeManager::StartSyncingTime(bool  lbKeepSyncingAfterStart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:172
		int32_t liPlayerIndex;

		SetStatus(/* parameters */);
	}
}

// CgsStartTimeManager.cpp:149
void CgsNetwork::StartTimeManager::PrepareStartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// CgsStartTimeManager.cpp:1239
void CgsNetwork::StartTimeManager::UpdateClientSyncTime(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TimeManager::IsTimeSynchronised(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
	}
	CgsSystem::Time::operator>(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
	}
	CgsSystem::Time::operator>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
	}
	CgsSystem::Time::operator>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsStartTimeManager.cpp:1030
void CgsNetwork::StartTimeManager::SetStartTime(const StartTime *  lpStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// CgsStartTimeManager.cpp:1303
void CgsNetwork::StartTimeManager::UpdateClientWaitStartTimeArrive(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
	}
	CgsSystem::Time::operator>(/* parameters */);
	{
		// CgsStartTimeManager.cpp:1314
		StartTime lStartTime;

		TimeManager::GetNetworkTime(/* parameters */);
		StartTime(/* parameters */);
		CgsSystem::Time::operator+(/* parameters */);
		PlayerManager::GetNextLocalPlayerID(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsStartTimeManager.cpp:684
void CgsNetwork::StartTimeManager::UnregisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:686
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsStartTimeManager.cpp:687
		int32_t liIndex;

	}
}

// CgsStartTimeManager.cpp:1383
void CgsNetwork::StartTimeManager::UpdateStarted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:1392
		int32_t liPlayerIndex;

		{
			// CgsStartTimeManager.cpp:1404
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

			// CgsStartTimeManager.cpp:1405
			StartTime lStartTime;

			// CgsStartTimeManager.cpp:1406
			int32_t liClientIndex;

		}
	}
}

// CgsStartTimeManager.cpp:555
void CgsNetwork::StartTimeManager::SendStartTime(const StartTime *  lpStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:557
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

		// CgsStartTimeManager.cpp:558
		int32_t liPlayerIndex;

	}
}

// CgsStartTimeManager.cpp:1054
void CgsNetwork::StartTimeManager::AreAllPlayersReadyToStart(const TimerStatus *  lpTimerStatus, Time &  lTimeoutForSilentPlayers, Time &  lTimeoutForCommunicatingPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:1056
		CgsNetwork::StartTimeManager::EPlayerReadiness leReadiness;

		// CgsStartTimeManager.cpp:1067
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		CgsSystem::TimerStatus::GetTime(/* parameters */);
	}
	CgsSystem::Time::operator>=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		// CgsStartTimeManager.cpp:1070
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsStartTimeManager.cpp:1071
		int32_t liArrayIndex;

		// CgsStartTimeManager.cpp:1072
		bool lbReady;

	}
}

// CgsStartTimeManager.cpp:1160
void CgsNetwork::StartTimeManager::UpdateHostWaitForClientsReady(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:1162
		Time lCommunicatingPlayersTimeout;

		// CgsStartTimeManager.cpp:1163
		Time lSilentPlayersTimeout;

		// CgsStartTimeManager.cpp:1164
		CgsNetwork::StartTimeManager::EPlayerReadiness leReadiness;

		// CgsStartTimeManager.cpp:1166
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	CgsSystem::Time::operator+(/* parameters */);
	{
	}
	CgsSystem::Time::operator+(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsStartTimeManager.cpp:726
void CgsNetwork::StartTimeManager::UnregisterMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:730
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	{
		// CgsStartTimeManager.cpp:733
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
}

// CgsStartTimeManager.cpp:864
void CgsNetwork::StartTimeManager::StartTimeMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:866
		StartTimeMessage * lpStartTimeMessage;

		// CgsStartTimeManager.cpp:867
		StartTime lStartTime;

		// CgsStartTimeManager.cpp:868
		StartTimeManager * lpStartTimeManager;

		// CgsStartTimeManager.cpp:869
		HostMigrationManager * lpHostMigrationManager;

		// CgsStartTimeManager.cpp:870
		CgsNetwork::TimeManager * lpTimeManager;

		// CgsStartTimeManager.cpp:871
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

		// CgsStartTimeManager.cpp:872
		bool lbSuccess;

		StartTime(/* parameters */);
	}
	{
		// CgsStartTimeManager.cpp:898
		int32_t liPlayerIndex;

		TimeManager::GetNetworkTime(/* parameters */);
		CgsSystem::Time::operator>(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		{
			// CgsStartTimeManager.cpp:922
			int32_t liPlayerIndex2;

			// CgsStartTimeManager.cpp:923
			bool lbAlreadySentToThisPlayer;

		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

// CgsStartTimeManager.cpp:1220
void CgsNetwork::StartTimeManager::PrepareClientSyncTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:1141
void CgsNetwork::StartTimeManager::PrepareHostWaitForClientsReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeManager.cpp:210
void CgsNetwork::StartTimeManager::Update(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:376
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	{
		// CgsStartTimeManager.cpp:315
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lHostID;

		// CgsStartTimeManager.cpp:316
		int32_t liPlayerIndex;

		{
			// CgsStartTimeManager.cpp:338
			int32_t liIndex;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	{
		// CgsStartTimeManager.cpp:283
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

		// CgsStartTimeManager.cpp:284
		StartTime lStartTime;

		// CgsStartTimeManager.cpp:285
		int32_t liPlayerIndex;

		TimeManager::GetNetworkTime(/* parameters */);
		StartTime(/* parameters */);
		CgsSystem::Time::operator+(/* parameters */);
		PlayerManager::GetNextLocalPlayerID(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsStartTimeManager.cpp:345
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
}

// CgsStartTimeManager.cpp:821
void CgsNetwork::StartTimeManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetStatus(/* parameters */);
}

// CgsStartTimeManager.cpp:497
void CgsNetwork::StartTimeManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:499
		int32_t liPlayerIndex;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// CgsStartTimeManager.cpp:115
void CgsNetwork::StartTimeManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:117
		int32_t liPlayerIndex;

	}
}

// CgsStartTimeManager.cpp:82
void CgsNetwork::StartTimeManager::Construct(HostMigrationManager *  lpHostMigrationManager, CgsNetwork::TimeManager *  lpTimeManager, CgsNetwork::PlayerManager *  lpPlayerManager, StartTimeManager::StartMessageArrivedLateCallback *  lpStartMessageArrivedLateCallback, StartTimeManager::ClientReadyCallback *  lpClientReadyCallback, void *  lpClientReadyData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetStatus(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	SetSyncTimeTimeouts(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	SetWaitForStartTimeTimeout(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	SetWaitForClientReadyTimeouts(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	SetGapTillStartTime(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// CgsStartTimeManager.cpp:796
void CgsNetwork::StartTimeManager::RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:801
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
}

// CgsStartTimeManager.cpp:754
void CgsNetwork::StartTimeManager::AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:756
		bool lbIAmHost;

		// CgsStartTimeManager.cpp:762
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
}

// CgsStartTimeManager.cpp:411
void CgsNetwork::StartTimeManager::OnHostMigration(const TimerStatus *  lpTimerStatus, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lOldHostID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNewHostID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[16] __FUNCTION__;

	{
		// CgsStartTimeManager.cpp:416
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	SetStatus(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsStartTimeManager.cpp:392
void CgsNetwork::StartTimeManager::OnHostMigrationCallback(const TimerStatus *  lpTimerStatus, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lOldHostID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNewHostID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStartTimeManager.cpp:394
		StartTimeManager * lpThis;

	}
}

// CgsStartTimeManager.cpp:57
// CgsStartTimeManager.cpp:58
// CgsStartTimeManager.cpp:59
// CgsStartTimeManager.cpp:60
// CgsStartTimeManager.cpp:61
// CgsStartTimeManager.cpp:62
